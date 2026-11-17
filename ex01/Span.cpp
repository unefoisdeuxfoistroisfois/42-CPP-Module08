#include "Span.hpp"

Span::Span(){
	std::cout << "Span default constructor called" << std::endl;

	this->_N = 0;
}

Span::Span(const Span &src){
	std::cout << "Span copy constructor called" << std::endl;

	this->_N = src._N;
	this->_vect = src._vect;
}

Span &Span::operator=(const Span &rhs){
	std::cout << "Span assignment operator called" << std::endl;

	if (this != &rhs){
		this->_N = rhs._N;
		this->_vect = rhs._vect;
	}

	return (*this);
}

Span::Span(unsigned int size){
  std::cout << "Span parameterized constructor called" << std::endl;
	this->_N = size;
}

void Span::addNumber(int number){

	if (this->_vect.size() >= _N){
		throw (std::runtime_error("Span is full"));
	} else {
		this->_vect.push_back(number);
	}
}

std::size_t Span::shortestSpan() const{
	// au moin 2 nombre
	if (this->_vect.size() < 2){
		throw(std::runtime_error("Not enough numbers"));
	}
	//trie
	std::vector<int> vectSort = this->_vect;
	//sort
	std::sort(vectSort.begin(), vectSort.end());

	//taille fin
	std::size_t i = vectSort.size() - 1;

	//comparateur
	std::size_t minSpan = static_cast<unsigned int>(vectSort[i]) - static_cast<unsigned int>(vectSort[i - 1]);

	for (; i > 0; i--){
		std::size_t gap = static_cast<unsigned int>(vectSort[i]) - static_cast<unsigned int>(vectSort[i - 1]);

		if (gap < minSpan){
			minSpan = gap;
		}
	}
	return (minSpan);
}

std::size_t Span::longestSpan() const{
	// au moion 2 nombre
	if (this->_vect.size() < 2){
		throw(std::runtime_error("Not enough numbers"));
	}

	std::vector<int>::const_iterator min = std::min_element(this->_vect.begin(), this->_vect.end());
	std::vector<int>::const_iterator max = std::max_element(this->_vect.begin(), this->_vect.end());

	//1 500 000 000 − (−1 500 000 000) = 3 000 000 000
	std::size_t minValue = static_cast<unsigned int>(*min);
	std::size_t maxValue = static_cast<unsigned int>(*max);

	return (maxValue - minValue);
}

Span::~Span(){
	std::cout << "Span destrucor called" << std::endl;

}
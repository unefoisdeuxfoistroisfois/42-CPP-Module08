#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <cstddef>
#include <cstddef>

class Span{
	private :
	 unsigned int _N;
		std::vector<int> _vect;

	public :
		Span();
		Span(const Span &src);
		Span &operator=(const Span &rhs);
		~Span();

		Span(unsigned int size);
		void addNumber(int number);
		std::size_t shortestSpan() const;
		std::size_t longestSpan() const;
};

#endif
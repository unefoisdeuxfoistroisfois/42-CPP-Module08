#include "easyfind.hpp"

void ftEmptyContainer(){
	std::cout << std::endl;

	std::vector<int> emptyContainer;

	try {
		easyfind(emptyContainer, 10);

	} catch (const std::exception &e){
		std::cout << e.what() << std::endl;

	}
}

void ftList(){
	std::cout << std::endl;
	// C++11
	//std::list<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

	std::list<int> list;
	
	list.push_back(10);
	list.push_back(20);
	list.push_front(5);


	std::cout << "[" ;

	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++){
		if (it != list.begin()){
			std::cout << ", ";
		}

		std::cout << *it ;
	}

	std::cout << "]" << std::endl;

	try {
		easyfind(list, 10);

	} catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void ftVector(){

	int tab[] = {10, 20, 30};
  std::vector<int> vect(tab, tab + 3); //copie les trois éléments du tableau dans le vecteur 
	// ou soit je crée un contenaire et je push_back(le nombre a ajouté par l'arriere);

	/*
	std::vector<int> nombres;

	nombres.push_back(10);
	nombres.push_back(20);
	nombres.push_back(30);

	il contient 10 20 30
	*/
	std::cout << "{" ;

	for (size_t i = 0; i < vect.size(); i++){
		std::cout << vect[i];

		if (i != (vect.size() -1)){
			std::cout << ", ";
		}
	}

	std::cout << "}" << std::endl;

	try{
		easyfind(vect, 5);

	} catch (const std::exception &e){

		std::cout << e.what() << std::endl;
	}
}

int main(){

	ftVector();
	ftList();
	ftEmptyContainer();
	return (0);
}

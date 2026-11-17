#include "Span.hpp"

int	main(){
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
//	Span b(a); // Constructeur de copie : crée b à partir de a
//	
//	Span c;
//	c = a;     // Affectation : c existe déjà

	return (0);
}
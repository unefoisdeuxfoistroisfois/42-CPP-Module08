template <class T>
void easyfind(T &container, int value){
	/**
	 * std::vector<int> tableau dynamique, std::list<int> liste doublement chainée
	 * vector : [10][20][30]
	 * list   : [10] ⇄ [20] ⇄ [30]
	 * Find est un algo STL écrit sous forme de fonction template
	 * il retourne une postiiotn sour form d'iteraor
	 * si on veut stocker cette positon dans une variable on doit preciser son type
	 * Si container est un type std::vector<int> -> std::vector<int>::iterator
	 * iterator es un type et occurence	est l'objet de ce represente la positioin dans un contenaire
	 * si il trouve pas il renvoie conaiter.end
	 */
	typename T::iterator occurence = std::find(container.begin(), container.end(), value);

	// si pas trouvé il va retourné le end
	if (occurence == container.end()){
		/**
		 * std::runtime_error,	Erreur détectée pendant l’exécution
		 * std::out_of_range, Accès hors des limites
		 * std::invalid_argument, Argument invalide
		 */
		throw(std::runtime_error("Value not found"));
	} else {
		std::cout << value << " found in the container " << std::endl;
	}
}

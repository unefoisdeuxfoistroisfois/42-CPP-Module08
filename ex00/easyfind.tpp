template <class T>
void easyfind(T &container, int value){
	/**
	 * Find est un algo STL écrit sous forme de fonction template
	 * il retourne le meme type de iterator que on lui donne
	 * Si container est un type std::vector<int> -> std::vector<int>::iterator
	 * iterator es un objet qui represente la positioin dans un contenaire
	 */
	typename T::iterator occurence = std::find(container.begin, container.end, value);

}

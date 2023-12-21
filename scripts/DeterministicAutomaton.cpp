#include <iostream>
#include "Automaton.h"

int main()
{
	std::vector<std::vector<int>> table = { {1, 0}, {-1, 0} }; // таблица переходов, -1 помечено конечное состояние
	Automaton<char>* automata = new Automaton<char>({'a', 'b'}, table);
	bool result = automata->Execute({'a', 'r', 'a', 'a', 0});
	std::cout << result << '\n';
}
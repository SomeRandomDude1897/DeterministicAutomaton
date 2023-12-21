#pragma once
#include <vector>
#include <map>
#include <string>

template<typename anytype>
class Automaton
{
public:
	Automaton(std::vector<anytype> symbs, std::vector<std::vector<int>> table_input)
	{
		for (int i = 0; i < symbs.size(); i++)
		{
			symbols[symbs[i]] = i;
		}
		table = table_input;
	};
	bool Execute(const std::vector<anytype> input)
	{
		for (int i = 0; i < input.size(); i++)
		{
			if (symbols.find(input[i]) != symbols.end())
			{

				int new_state = table[current_state][symbols[input[i]]];
				if (new_state == -1)
				{
					return true;
				}
				current_state = new_state;
			}
			else
			{
				return false;
			}
		}
		return false;
	}
private:
	std::map<anytype, int> symbols;
	std::vector<std::vector<int>> table;
	int current_state = 0;
};
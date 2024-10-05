#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

int main()
{
	std::string text;
	std::getline(std::cin, text);

	std::map<char, int> frequency;
	for (int i = 0; i < text.length(); i++) {
		frequency[text[i]]++;
	}

	std::vector<std::pair<char, int>> sorted_frequency(frequency.begin(), frequency.end());
	std::sort(sorted_frequency.begin(), sorted_frequency.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) { return a.second > b.second; });
	for (const auto& pair : sorted_frequency) 
	{
		std::cout << pair.first << ": " << pair.second << '\n';
	}
}


#include <string>
#include <map>
#include <vector>
#include <iostream>

void anagrams(std::vector<std::string> &arr)
{
    // anagram group
    std::map<std::string, std::vector<std::string>> anags;

    // loop over array
    for (const std::string& str : arr)
    {
        // count number of different chars
        // maps are odered in cpp, so sorting is not needed
        std::map<char, int> char_map;
        char_map.clear();
        for (char c : str)
        {
            if (char_map.find(c) == char_map.end())
            {
                char_map[c] = 0;
            }
            else
            {
                char_map[c] += 1;
            }
        }

        // convert char_map into a signature
        std::string signature;
        for (auto& item : char_map)
        {
            signature += item.first + std::to_string(item.second);
        }

        // put str and signature in anagrams map
        anags[signature].push_back(str);
    }

    // print anagrams content by groups
    for (auto& item : anags)
    {
        for (auto& str : item.second)
        {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
}
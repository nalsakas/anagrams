#include "anagrams.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> c = {"cat", "hello", "eulb", "elloh", "tac", "blue"};
    anagrams(c);

    return 0;
}
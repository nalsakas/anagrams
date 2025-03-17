# anagrams
Classifies same anagrams in a give list

# Problem Statement
Given a list of strings, group words if they are anagrams. Anagrams means words have same characters but in different orders.

# Solution
- Loop through words
- Determine frequency of character in each word
- Generate a signature based on frequencies
- Create a map and use signature as a key to the map
- Put words with same signature into same key 

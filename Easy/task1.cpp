#include <iostream>
#include <string>
// https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2){
        std::string result;

        int min_len = std::min(word1.size(), word2.size());

        
        for (int i = 0; i < min_len; i++) {
            result += word1[i];
            result += word2[i];
        }
    
        
        if (word1.size() > min_len) {
            result += word1.substr(min_len);

        } else if (word2.size() > min_len) {
            result += word2.substr(min_len);
    }

        return result;
    }
};

int main(){
    Solution solution;
    std::string word1, word2;
    std::getline(std::cin,word1);
    std::getline(std::cin,word2);

     std::string merged = solution.mergeAlternately(word1, word2);
    
    std::cout << "Merged string: " << merged;

    return 0;
}
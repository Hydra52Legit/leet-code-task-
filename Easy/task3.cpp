#include <iostream>
#include <string>
#include <vector>

// link task: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> n;
        std::vector<bool> new_candies;

        for (int i = 0; i<candies.size(); i++){
            for(int j = 0; j < i; j++){
                new_candies[j] = candies[i] + extraCandies;
            }
              
        }
        for (int i = 0; i < new_candies.size(); i++){
            
        }


        return n;
    }
};


int main(){
    std::vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);

    for (int i = 0; i < nums.size(); i++){
        std::cout<<nums[i]<<" ";
    }

    return 0;
}
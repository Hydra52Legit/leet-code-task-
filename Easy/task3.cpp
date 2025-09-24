#include <iostream>
#include <vector>

// link task: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        for (int i = 0; i < candies.size(); i++){
            if (candies[i] > maxCandies){
                maxCandies = candies[i];
            }
        }
        std::vector<bool> result(candies.size());

        for (int i = 0; i < candies.size(); i++){
            if (candies[i] + extraCandies >= maxCandies){
                result[i] = true;
            }
            else{
                result[i] = false;
            }
        }
        return result;
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
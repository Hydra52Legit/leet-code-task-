#include <iostream>
#include <string>
// TASK LINK:
//https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75

class Solution {
private:
    //вспомогательная функция

    int gcd(int a, int b){
        while(b!=0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        if (str1 + str2 != str2 + str1){
            return "";
        }
        // находим наибольший общий делитель строк
        // 
        // и возвращаем подстроку 
        int gcd_length = gcd(str1.size(), str2.size());
        return str1.substr(0,gcd_length);

    }
};

int main(){
    Solution solution;
    std::string str1,str2;
    std::getline(std::cin, str1);
    std::getline(std::cin,str2);

    std::string answer = solution.gcdOfStrings(str1, str2);
    std::cout<<answer;
    return 0;

}
//
//  main.cpp
//  LeetCode137_SingleNumberII
//
//  Created by Rui on 1/5/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        
        for(int i = 0; i < 32; i++)
        {
            int sum = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                sum += nums[j] >> i & 1;
            }
            sum = sum % 3;
            
            res += sum << i;
        }
        
        return res;
    }
};

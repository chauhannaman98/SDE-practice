/*
    Using tortoise method for finding the Duplicate element
    Time complexity: O(n)
    Space complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution  {
    public:
        int findDuplicate(vector<int>& nums)    {
            int slow = nums[0];
            int fast = nums[0];
            do  {
                slow = nums[slow];
                fast = nums[nums[fast]];
            } while (slow != fast);
            fast = nums[0];
            while(slow != fast) {
                slow = nums[slow];
                fast = nums[fast];
            }
            return fast;
        }
};

int main()  {
    vector<int> arr = {2,5,9,6,9,3,8,9,7,1};
    Solution sol;
    int res = sol.findDuplicate(arr);
    cout<<"Duplicate = "<<res;
    return 0;
}
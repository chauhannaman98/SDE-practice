/*
    The program sorts the array of 0's,
    1's and 2's without using any sorting algo
    or extra space in memory.
    The algorithm is based on Dutch National
    Flag Algorithm.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution  {
    public:
        void sortColors(vector<int>& nums)  {
            int low = 0;
            int high = nums.size()-1;
            int mid = 0;

            while(mid<=high)    {
                switch(nums[mid])   {
                    case 0:
                        swap(nums[low++], nums[mid++]);
                        break;
                    case 1:
                        mid++;
                        break;
                    case 2:
                        swap(nums[mid], nums[high--]);
                        break;
                }
            }
        }
};

int main()  {
    Solution sol;
    vector<int> vec = {0,1,2,1,2,0,0,1,0};
    sol.sortColors(vec);
    cout<<"Sorted array = {";
    for(int i=0; i<vec.size()-1; i++)   {
        cout<<vec[i]<<",";
    }
    cout<<"}\n";
    return 0;
}
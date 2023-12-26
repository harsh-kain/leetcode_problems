#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid;
    int firstIndex = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            firstIndex = mid;
            end = mid - 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return firstIndex;
}
int lastOcc(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid;
    int firstIndex = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            firstIndex = mid;
            start = mid + 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return firstIndex;
}
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res = {0,0};
    res[0] = firstOcc(nums ,target);
    res[1] = lastOcc(nums, target);
    return res;
}
int main()
{

    return 0;
}

    
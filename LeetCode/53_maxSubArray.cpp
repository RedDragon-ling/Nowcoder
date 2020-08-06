#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = nums[0], max = INT_MIN;
    for (int i = 1; i < nums.size(); i++)
    {
        if (max < sum)
            max = sum;
        if (sum + nums[i] < nums[i])
            sum = nums[i];
        else
            sum += nums[i];
    }
    return max > sum ? max : sum;
}

int main()
{
    vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(arr);
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;
/*
    Question:
        Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
        You must implement a solution with a linear runtime complexity and use only constant extra space.

    Constraints:
        1 <= nums.length <= 3 * 104
        -3 * 104 <= nums[i] <= 3 * 104
        Each element in the array appears twice except for one element which appears only once.
*/

int singleNumber(vector<int> &nums)
{
    // cout << nums[0] << endl;

    // check the size of int vector.
    cout << "the size of int vector is: " << nums.size() << endl;
    int answer = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        answer ^= nums[i];
        //answer = answer ^ numbs[i]; // equivalent ot above
    } // for
    return answer;
} // singleNumber

int main()
{
    vector<int> vect_num;
    vect_num.push_back(1);
    vect_num.push_back(1);
    vect_num.push_back(2);
    vect_num.push_back(3);
    vect_num.push_back(3);

    int unique_number = singleNumber(vect_num);
    cout << "the unique number is: " << unique_number << endl;
    return EXIT_SUCCESS;
} // main
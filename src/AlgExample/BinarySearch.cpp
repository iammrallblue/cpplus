#include <iostream>
#include <vector>

using namespace std;

/** Binary search example:
 *
 */

// binary search function
int binSearch(vector<int> &intList, int target)
{
    int first = 0;
    int last = intList.size();

    while (first < last) // condition while first is smaller than last
    {
        int middle = first + (last - first) / 2;  // find middle position
        if (intList[middle] == target)
        {
            return middle;
        }
        else if (intList[middle] < target)
        {
            first = middle + 1;
        }
        else
        {
            last = middle;
        }
    } // while
    return -1;
} // binSearch

int main(int argc, char const *argv[])
{

    return 0;
} // main

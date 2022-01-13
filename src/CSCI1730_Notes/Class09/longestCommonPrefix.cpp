#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
    Question:
        Write a function to find the longest common prefix string amongst an array of strings.
        If there is no common prefix, return an empty string "".

    Constraints:
        1 <= strs.length <= 200
        0 <= strs[i].length <= 200
        strs[i] consists of only lower-case English letters.
*/

string longestCommonPrefix(vector<string> &strs) // Arraylist
{
    //cout << strs[0] << endl;
    string prefix = "";
    char ch;
    int i = 0; // index of the character that  we need to check
    while (true)
    {
        ch = strs[0][i]; // i-th character of the first string
        for (int j = 0; j < strs.size(); j++)
        {
            if (ch != strs[j][i])
            {
                return prefix;
            }
        } // for

        prefix += ch;
        i++;
    }
    return "";
} // longestCommonPrefix

int main()
{
    // vector<string>
    vector<string> vec_str;
    vec_str.push_back("Prefix");
    vec_str.push_back("Prefer");
    vec_str.push_back("Pretty");
    vec_str.push_back("Present");

    string res = longestCommonPrefix(vec_str);
    cout << res << endl;
} // main
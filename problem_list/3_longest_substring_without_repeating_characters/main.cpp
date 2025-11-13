#include "solution.cpp"

using namespace std;

int main()
{
    string s = "wobgrovw";
    int maxLengthSubString = Solution::lengthOfLongestSubstring(s);
    cout << maxLengthSubString << "\n";
    return 0;
}

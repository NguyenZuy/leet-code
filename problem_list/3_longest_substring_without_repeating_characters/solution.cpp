/*
De Bai:
Cho 1 chuoi string `s`, tim do dai cua chuoi con dai nhat k co ki tu trung lap

Rang buoc:
`0 <= s.length <= 5 * 10^4`
`s` bao gom ki tu tieng anh, chu so, ki hieu va khoang trang

Sliding window
*/

#include <iostream>
#include <unordered_set>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <cstdlib>
#include <algorithm> // for std::sort

using namespace std;

class Solution
{
public:
    static int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> charIndexMap;
        int maxLength = 0;
        int start = 0; // Đầu cửa sổ

        for (int end = 0; end < s.length(); end++)
        {
            char currentChar = s[end];

            // Nếu ký tự đã xuất hiện trong cửa sổ hiện tại
            if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= start)
            {
                // Di chuyển start đến sau vị trí ký tự trùng
                start = charIndexMap[currentChar] + 1;
            }

            // Cập nhật vị trí mới nhất của ký tự
            charIndexMap[currentChar] = end;

            // Cập nhật độ dài max
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};
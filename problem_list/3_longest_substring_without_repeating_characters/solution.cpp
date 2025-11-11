/* 
De Bai: 
Cho 1 chuoi string `s`, tim do dai cua chuoi con dai nhat k co ki tu trung lap

Rang buoc: 
`0 <= s.length <= 5 * 10^4`
`s` bao gom ki tu tieng anh, chu so, ki hieu va khoang trang

"pwwkew" 0-p, 1-w, 3-k, 4-e, 5-w
"abcabcbb" 0-a, 1-b, 2-c, 3-a, 4-b, 5-c, 6-b
"abcbbcbb"
"bbbbbb" 0-b
*/

#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    static int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;
        int count;

        for(char c : s){

            if(chars.find(c) == chars.end()){
                // Exist in set
                chars.insert(c);
                count++;
            }
        }

        return count;
    }
};
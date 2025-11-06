/* 
De Bai: 
Cho mot mang cac so nguyen `nums` va mo so nguyen `target`, hay tra lai cac cap so sao cho tong cua chung bang `target`.
Cho rang moi input se chi co dung duy nhat 1 cap so va khong the dung 1 so hai lan.
Khong quan trong thu tu chu so tra ve

Rang buoc: 
2 <= nums.length <= 10^4
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9
Chi co 1 cau tra loi

Giai phap:
06/11/2025
Dung unordered_map(thay cho map de dat to do truy xuat nhanh nhat) de luu tru gia tri duoi dang map[value] = index
Sau do chay vong lap 1 lan de check
Do kho O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            int check = target - nums[i];
            if(map.find(check) != map.end()){
                if(map[check] != i){
                    return {i, map[check]};
                }
            }
            map[nums[i]] = i;
        }
        
        return {};
    }
};

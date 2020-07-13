/*
    Solução do problema número 448 do leetcode, sessão de algoritmos, Find All Numbers Disappeared in an Array
    https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> out;
        for (int i = 0; i < nums.size();) {
            if (nums[i] != i+1 && nums[nums[i] - 1] != nums[i]) {
                int aux = nums[i];
                nums[i] = nums[aux-1];
                nums[aux-1] = aux;
            } else {
                i++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            //cout << nums[i] << " ";
            if (nums[i] != i+1)
                out.push_back(i+1);
        }
        //cout << endl;
        
        return out;
    }
};
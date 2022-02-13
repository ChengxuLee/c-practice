#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
//
//你可以按任意顺序返回答案。
//
//
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/two-sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//输入：nums = [2, 7, 11, 15], target = 9
//输出：[0, 1]
//解释：因为 nums[0] + nums[1] == 9 ，返回[0, 1] 。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/two-sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> p;
        map<int, int> hash;
        for (int i = 0;i < nums.size();i++) {
            hash[nums[i]] = i;
        }
        //判断
        for (int j = 0;j < nums.size();j++) {
            int targetnum = target - nums[j];
            if (hash.count(targetnum) != 0 && hash[targetnum] != j) {
                p.push_back(j);
                p.push_back(hash[targetnum]);
                return p;
            }
        }
        return p;
    }
};
int main() {


	system("pause");
	return 0;
}
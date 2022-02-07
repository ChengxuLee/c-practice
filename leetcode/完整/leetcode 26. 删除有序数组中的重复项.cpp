#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/remove-element
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include <vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int first = 0, second = 0;
        for (second = 0;second < nums.size();second++) {
            if (nums[second] != val) {
                nums[first] = nums[second];
                first++;
            }
        }
        return first;
    }
};
int main() {


	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 最多出现两次 ，返回删除后数组的新长度。
//
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//
//输入：nums = [1, 1, 1, 2, 2, 3]
//输出：5, nums = [1, 1, 2, 2, 3]
//解释：函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。 不需要考虑数组中超出新长度后面的元素。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 2;                        //用i来记录新数组位置，用j遍历旧数组
        if (nums.size() <= 2) return nums.size();
        for (int j = 2;j < nums.size();j++) { //如果该数与前两个不同，则需要记录下来，
            if (nums[j] != nums[i - 2]) {   //不能比较nums[j] != nums[j-2],因为nums[j-2]可能已经修改过了
                nums[i++] = nums[j];      //应该比较nums[j] != nums[i-2]
            }
        }
        return i;

    }
};
int main() {
	system("pause");
	return 0;
}
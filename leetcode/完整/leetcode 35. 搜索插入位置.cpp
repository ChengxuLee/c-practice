#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector>
using namespace std;
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//
//请必须使用时间复杂度为 O(log n) 的算法。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/search-insert-position
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//
//输入: nums = [1, 3, 5, 6], target = 5
//输出 : 2
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int front = 0, rear = nums.size() - 1, mid = 0;
		while (front <= rear) {
			mid = (front + rear) / 2;
			if (target < nums[mid]) {
				rear = mid - 1;
			}
			else if (target > nums[mid]) {
				front = mid + 1;
			}
			else {
				return mid;
			}
		}
		return rear + 1;
	}
};

int main() {
	system("pause");
	return 0;
}
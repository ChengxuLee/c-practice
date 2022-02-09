#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector>
using namespace std;
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//
//�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/search-insert-position
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
//
//����: nums = [1, 3, 5, 6], target = 5
//��� : 2
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
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//����һ���������� nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ���������� ������ɾ����������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
//
//���룺nums = [1, 1, 1, 2, 2, 3]
//�����5, nums = [1, 1, 2, 2, 3]
//���ͣ�����Ӧ�����³��� length = 5, ����ԭ�����ǰ���Ԫ�ر��޸�Ϊ 1, 1, 2, 2, 3 �� ����Ҫ���������г����³��Ⱥ����Ԫ�ء�
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 2;                        //��i����¼������λ�ã���j����������
        if (nums.size() <= 2) return nums.size();
        for (int j = 2;j < nums.size();j++) { //���������ǰ������ͬ������Ҫ��¼������
            if (nums[j] != nums[i - 2]) {   //���ܱȽ�nums[j] != nums[j-2],��Ϊnums[j-2]�����Ѿ��޸Ĺ���
                nums[i++] = nums[j];      //Ӧ�ñȽ�nums[j] != nums[i-2]
            }
        }
        return i;

    }
};
int main() {
	system("pause");
	return 0;
}
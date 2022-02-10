#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector>
using namespace std;
//���� n ���Ǹ����� a1��a2��...��an��ÿ�������������е�һ����?(i, ai) ���������ڻ� n ����ֱ�ߣ���ֱ�� i?�������˵�ֱ�Ϊ?(i, ai) ��(i, 0) ���ҳ����е������ߣ�ʹ��������?x?�Ṳͬ���ɵ�����������������ˮ��
//
//˵�����㲻����б������
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/container-with-most-water
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

//���룺[1, 8, 6, 2, 5, 4, 8, 3, 7]
//�����49
//���ͣ�ͼ�д�ֱ�ߴ�����������[1, 8, 6, 2, 5, 4, 8, 3, 7]���ڴ�����£������ܹ�����ˮ����ʾΪ��ɫ���֣������ֵΪ?49��
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/container-with-most-water
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
class Solution {
public:
    int maxArea(vector<int>& height) {
        int front = 0, rear = height.size() - 1;
        int maxarea = 0;int area = 0;
        while (front < rear) {
            area = min(height[front], height[rear]) * (rear - front);
            if (height[front] < height[rear]) {
                front++;
            }
            else {
                rear--;
            }
            maxarea = max(area, maxarea);
        }
        return maxarea;
    }
};



int main() {


	system("pause");
	return 0;
}
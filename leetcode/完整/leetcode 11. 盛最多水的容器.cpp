#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector>
using namespace std;
//给你 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点?(i, ai) 。在坐标内画 n 条垂直线，垂直线 i?的两个端点分别为?(i, ai) 和(i, 0) 。找出其中的两条线，使得它们与?x?轴共同构成的容器可以容纳最多的水。
//
//说明：你不能倾斜容器。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/container-with-most-water
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

//输入：[1, 8, 6, 2, 5, 4, 8, 3, 7]
//输出：49
//解释：图中垂直线代表输入数组[1, 8, 6, 2, 5, 4, 8, 3, 7]。在此情况下，容器能够容纳水（表示为蓝色部分）的最大值为?49。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/container-with-most-water
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
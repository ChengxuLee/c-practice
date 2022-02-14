#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
//
//回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。
//
//
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/palindrome-number
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//示例 1：
//
//输入：x = 121
//输出：true
//示例 2：
//
//输入：x = -121
//输出：false
//解释：从左向右读, 为 - 121 。 从右向左读, 为 121 - 。因此它不是一个回文数。
//示例 3：
//
//输入：x = 10
//输出：false
//解释：从右向左读, 为 01 。因此它不是一个回文数。

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)return false;
        string str = to_string(x);
        string b;
        for (int i = str.size() - 1;i >= 0;i--) {
            b += str[i];
        }
        if (str == b)return true;
        return false;
    }
};
int main() {


	system("pause");
	return 0;
}
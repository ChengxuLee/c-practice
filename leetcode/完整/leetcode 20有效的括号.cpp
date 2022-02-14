#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//
//有效字符串需满足：
//
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//
//
//示例 1：
//
//输入：s = "()"
//输出：true
//示例 2：
//
//输入：s = "()[]{}"
//输出：true
//示例 3：
//
//输入：s = "(]"
//输出：false
//

//自己写的 不推荐 
#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        for (int i = 0;i < s.size();i++) {
            if ((s[i] == '}' || s[i] == ']' || s[i] == ')') && sta.empty()) {
                return false;
            }
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                sta.push(s[i]);
            }
            else if ((sta.top() == '(' && s[i] == ')') || (sta.top() == '{' && s[i] == '}') || (sta.top() == '[' && s[i] == ']')) {
                sta.pop();
            }
            else if ((sta.top() != '(' && s[i] == ')') || (sta.top() != '{' && s[i] == '}') || (sta.top() != '[' && s[i] == ']')) {
                return false;
            }
        }
        return sta.empty();
    }
};
//别人写的     // 每次传入 （对应的 ） 而不传本身
class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        for (char& c : s) {
            if (!sk.empty() && (sk.top() + 1 == c || sk.top() + 2 == c))
                sk.pop();
            else
                sk.push(c);
        }
        return sk.empty();
    }
};

int main() {

	system("pause");
	return 0;
}
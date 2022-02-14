#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
//
//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X  + II 。 27 写做  XXVII, 即为 XX  + V  + II 。
//
//通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
//
//I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
//X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
//C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
//给定一个罗马数字，将其转换成整数。
//示例 1:
//输入: s = "III"
//输出 : 3
//示例 2 :
//
//    输入 : s = "IV"
//    输出 : 4
#include <vector>
class Solution {
public:
	int romanToInt(string s) {
		int n = 0, p = 0;
		vector<int>b(s.size());
		for (int i = 0;i < s.size();i++)
			if (s[i] == 'I')
				b.push_back(1);
			else if (s[i] == 'V')
				b.push_back(5);
			else if (s[i] == 'X')
				b.push_back(10);
			else if (s[i] == 'L')
				b.push_back(50);
			else if (s[i] == 'C')
				b.push_back(100);
			else if (s[i] == 'D')
				b.push_back(500);
			else if (s[i] == 'M')
				b.push_back(1000);
		for (int i = 0; i < b.size() - 1; i++)
			if (b[i] >= b[i + 1])
				p += b[i];
			else
				n -= b[i];
		p += b[b.size() - 1];
		return n + p;
	}
};
int main() {


	system("pause");
	return 0;
}
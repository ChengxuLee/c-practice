#define _CRT_SECURE_NO_WARNINGS 
//string复习 
#include <iostream>
using namespace std;

//构造
//void text() {
//
//	string s1; //创建空字符串，调用无参构造函数
//	cout << "str1 = " << s1 << endl;
//	const char* str = "hello bit";
//	string s2(str); //有参构造
//	cout << "str2 = " << s2<< endl;
//	string s3(s2);	// 拷贝构造
//	cout << "str3 = " << s3 << endl;
//	string s4(10,'a');
//	cout << "str4 = " << s4 << endl;
//}
//赋值
void text() {
	//string s1;
	//s1 = 'a';
	//cout << "s1 = " << s1 << endl;
	//string s2;
	//s2 ="dwfefewwef";
	//cout << "s2 = " << s2 << endl;
	//string s3;
	//s3 = s2;
	//cout << "s3 = " << s3 << endl;
	//string s4;
	//s4.assign("dawrgerhrere",5);
	//cout << "s4 = " << s4 << endl;
	//string s5;
	//s5.assign("dwdwa");
	//cout << "s5 = " << s5 << endl;
	//string s6;
	//s6.assign(s5);
	//cout << "s6 = " << s6 << endl;
	////字符串拼接 
	//string str1 = "我";

	//str1 += "爱玩游戏";

	//cout << "str1 = " << str1 << endl;
	//string str2 = "lol";
	//	str1+=str2;
	//cout << "str1 = " << str1 << endl;
	//string str3 = "I";
	//str3.append(" love ");
	//str3.append("game abcde", 4);
	////str3.append(str2);
	//str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
	//cout << "str3 = " << str3 << endl;
	//查找和替换 find
	string find1 = "kjsk";
	int pos = find1.find('j');
	cout << "find1 = " << pos << endl;
	string find2= "kjsk33453";
	int pos2 = find2.find(find1);
	cout << "find2 = " << pos2 << endl;  //未找到返回-1 找到返回位置
	//替换 replace
	string re = find2.replace(1,3,"wwwwwwwwwwwww"); //第1-3位 替换为 wwwwwwwwwwwww
	cout << "re = " << re << endl;
	//字符串比较 compare
	int aa=re.compare(find2); 
	cout << "比较结果为 " << aa<< endl;
	//增删
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;
	str.erase(1, 3);  //从1号位置开始3个字符
	cout << str << endl;
	//改查 
	str[0] = 'x';
	str.at(1) = 'x';
	cout << str << endl;
}

int main() {
	text();

	system("pause");
	return 0;
}
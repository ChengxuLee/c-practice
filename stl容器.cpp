#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//vector容器 
#include <algorithm>
#include <vector>
#include <string>
//void test01(){
	//创建容器
	//vector<int> v;
	//尾插法插入内容
	//v.push_back(10);
	//v.push_back(20);
	//v.push_back(30);
	//v.push_back(40);
	//第一种遍历方式 使用迭代器
	//vector<int>::iterator v_begin = v.begin();
	//vector<int>::iterator v_end = v.end();
	//while (v_begin!= v_end) {
	//	cout << *v_begin << endl;
	//	v_begin++;
	//}
	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
//		cout << *it << endl;
//	}
//}

void test02() {

	//创建嵌套容器
	vector<vector<int>> v;
	//创建小容器
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (int i = 0;i < 4;i++) {

		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4 );
	}
	//小容器插入到大容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	//赋值
	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++) {
		for (vector <int> ::iterator vit = (*it).begin();vit != (*it).end();vit++) {
			
			cout << *vit<< " ";
		
		}
		cout << endl;
	}
}

int main() {

	test02();

	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
	//谓词即仿函数返回值为bool的值 
class Person {
public: 
	//一元谓词
	bool operator()(int a) {
	
		return a < 5;
	}
};
void text01() {
	vector<int> p;
	p.push_back(1);
	p.push_back(2);
	p.push_back(3);
	p.push_back(4);
	p.push_back(5);
	vector<int>::iterator it=find_if(p.begin(), p.end(),Person());
	if (it == p.end()) {
		cout << "没找到!" << endl;
	}
	else {
		cout << "找到:" << *it << endl;
	}
}

int main() {

	text01();
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
	//ν�ʼ��º�������ֵΪbool��ֵ 
class Person {
public: 
	//һԪν��
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
		cout << "û�ҵ�!" << endl;
	}
	else {
		cout << "�ҵ�:" << *it << endl;
	}
}

int main() {

	text01();
	system("pause");
	return 0;
}
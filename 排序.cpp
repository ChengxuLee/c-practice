#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//���� for_each  ��ͨ����
//void print(int a) {
//
//	cout<<a<<endl;
//
//}
//���� for_each  �º���
/*class print1 {
public:
	void operator ()(int a) {
	
		cout << a << endl;

	}
};
void text() {
	vector<int> p;
	p.push_back(10);
	p.push_back(30);
	p.push_back(50);
	p.push_back(14);
	p.push_back(12);
	for_each(p.begin(), p.end(), print);
	cout << endl;
	for_each(p.begin(), p.end(),print1());}*/


//transfprm ����]
//class print {
//public:
//	int operator()(int a) {
//		cout << a << endl;
//		return a;
//	}
//};
//void text02() {
//	vector <int> p;
//	for (int i = 0;i < 5;i++) {
//		p.push_back(i);
//	}
//	vector <int> v;
//	v.resize(p.size());
//	transform(p.begin(), p.end(), v.begin(), print());
//}
//sort  random_shuffle
class print {
public:
	int operator ()(int v) {
		cout << v << " ";
		return v;
	}
};
void text03() {
	vector<int> p;
	for (int i = 0;i < 8;i++) {
		p.push_back(i);
	}
	sort(p.begin(),p.end());
	for_each(p.begin(), p.end(),print());
	//���˳��
	cout << endl;
	srand((unsigned int)time(NULL));
	random_shuffle(p.begin(), p.end());
	for_each(p.begin(), p.end(), print());
	//�ϲ�/��ת
	cout << endl;
	reverse(p.begin(), p.end());
	for_each(p.begin(), p.end(), print());
}
int main() {
	text03();
	system("pause");
	return 0;
}
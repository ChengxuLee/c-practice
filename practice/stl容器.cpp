#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//vector���� 
#include <algorithm>
#include <vector>
#include <string>
//void test01(){
	//��������
	//vector<int> v;
	//β�巨��������
	//v.push_back(10);
	//v.push_back(20);
	//v.push_back(30);
	//v.push_back(40);
	//��һ�ֱ�����ʽ ʹ�õ�����
	//vector<int>::iterator v_begin = v.begin();
	//vector<int>::iterator v_end = v.end();
	//while (v_begin!= v_end) {
	//	cout << *v_begin << endl;
	//	v_begin++;
	//}
	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
//		cout << *it << endl;
//	}
//}

void test02() {

	//����Ƕ������
	vector<vector<int>> v;
	//����С����
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
	//С�������뵽������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	//��ֵ
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
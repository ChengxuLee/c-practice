#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
#include <vector>
void printT(vector<int> &v) {
	for (vector<int>::iterator it=v.begin();it!=v.end();it++) {
	
		cout<<*it<<"  ";

	
	}
	cout << endl;
}
void text() {
	//����vector ����
	vector<int> p ;
	for (int i = 0;i < 10;i++) {
		p.push_back(i);
	}
	printT(p);

	//����
	/*p.insert(p.begin(),52);*///p.insert(p.end()-5,52);Ҳ����
	printT(p);
	//ɾ��
	/*p.erase(p.begin());*///p.insert(p.end()-5,52);Ҳ����
	p.erase(p.begin());
	printT(p);
	cout << p.capacity()<<endl;
	cout << p.size() << endl;
	//p.resize(15);
	printT(p);
	//β ɾ
	p.pop_back();
		printT(p);
	//���
	//p.clear();
	printT(p);
	//��
	cout <<"���ʵ����Ԫ��" << p[5] << endl;
	cout << "���ʵ����Ԫ��" << p.at(5) << endl;
	cout <<"���������ʵ�һ��Ԫ��" << p.front() << endl;
	cout <<"�������������һ��Ԫ��" << p.back() << endl;
}
int main() {
	text();

	system("pause");
	return 0;
}
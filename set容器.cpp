#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
using namespace std;
#include <set>
//����������������
//class MyCompare {
//public:
//	bool operator()(int v1, int v2)const {
//	
//		return v1 > v2;
//
//	}
//};
//void text() {
//	set<int,MyCompare> p;
//	p.insert(10);
//	p.insert(50);
//	p.insert(60);
//	p.insert(20);
//	p.insert(80);
//	for (set<int, MyCompare>::iterator it = p.begin();it != p.end();it++) {
//				cout << *it << " ";
//	}
//
//
//}
//�Զ���������������
class Person {
public:
	Person(string name,int age) {
		this->myname = name;
		this->myage = age;
	}
	string myname;
	int  myage;

};
class myCompare {
public:
	//�������캯��
	bool operator()(const Person &v1,const Person &v2) const {	
		return v1.myage > v2.myage;
	}
};
void text() {
	set<Person, myCompare> p;
	Person p1("�ŷ�", 85);
	Person p2("����", 18);
	Person p3("����", 69);
	Person p4("���", 12);
	Person p5("ͼ��",23);
	p.insert(p1);
	p.insert(p2);
	p.insert(p3);
	p.insert(p4);
	p.insert(p5);

	for (set<Person, myCompare>::iterator it = p.begin();it != p.end();it++) {
			
		cout << "�����ǣ�" << (*it).myname << "������" << (*it).myage << endl;
	}
}

int main() {

	text();
	system("pause");
	return 0;
}
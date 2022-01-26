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
	//建立vector 容器
	vector<int> p ;
	for (int i = 0;i < 10;i++) {
		p.push_back(i);
	}
	printT(p);

	//插入
	/*p.insert(p.begin(),52);*///p.insert(p.end()-5,52);也可以
	printT(p);
	//删除
	/*p.erase(p.begin());*///p.insert(p.end()-5,52);也可以
	p.erase(p.begin());
	printT(p);
	cout << p.capacity()<<endl;
	cout << p.size() << endl;
	//p.resize(15);
	printT(p);
	//尾 删
	p.pop_back();
		printT(p);
	//清空
	//p.clear();
	printT(p);
	//查
	cout <<"访问第五个元素" << p[5] << endl;
	cout << "访问第五个元素" << p.at(5) << endl;
	cout <<"迭代器访问第一个元素" << p.front() << endl;
	cout <<"迭代器访问最后一个元素" << p.back() << endl;
}
int main() {
	text();

	system("pause");
	return 0;
}
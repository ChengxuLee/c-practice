#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
//����������?����Ϊ��
//
//����һ����������ÿһ�ν������滻Ϊ��ÿ��λ���ϵ����ֵ�ƽ���͡�
//Ȼ���ظ��������ֱ���������Ϊ 1��Ҳ������ ����ѭ�� ��ʼ�ձ䲻�� 1��
//���������� ���Ϊ?1����ô��������ǿ�������
//��� n �� ������ �ͷ��� true �����ǣ��򷵻� false ��
//
//
//
//ʾ�� 1��
//
//���룺n = 19
//�����true
//���ͣ�
//12 + 92 = 82
//82 + 22 = 68
//62 + 82 = 100
//12 + 02 + 02 = 1

class Solution {
public:
    int bitSquareSum(int n) {
        int sum = 0;
        while (n > 0)
        {
            int bit = n % 10;
            sum += bit * bit;
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n, fast = n;
        do {
            slow = bitSquareSum(slow);
            fast = bitSquareSum(fast);
            fast = bitSquareSum(fast);
        } while (slow != fast);

        return slow == 1;
    }
};

int main() {

	system("pause");
	return 0;
}
/**
 * File : test.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/8
 */
# include <iostream>

using namespace std;

// �곣��
#define day 7

int main() {
    // �����Ķ���
    // �﷨����������  ������ = ��ʼֵ
    int a = 10;
    cout << "a = " << a << endl;

    /*C++���峣�����ַ�ʽ
       1. #define �곣����
            #define ������ ����ֵ
          ͨ�����ļ��Ϸ����壬��ʾһ������
       2. const ���εı���
            const �������� ������ = ����ֵ
          ͨ���ڱ�������ǰ�ӹؼ���const�����θñ���Ϊ�����������޸�
    */
    cout << "һ�����ܹ��� " << day << " ��" << endl;
    //day = 8;  // �����곣���������޸�

    // const���α���
    const int month = 12;
    cout << "һ�����ܹ��� " << month << " ���·�" << endl;
    //month = 24; // ���������ǲ������޸ĵ�

    return 0;
}

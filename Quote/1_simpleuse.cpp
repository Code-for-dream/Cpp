/**
 * File : 1_simpleuse.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

int main() {

    int a = 10; // ��������
    int &b = a; // ��������
    // ���
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // ���¸�ֵ
    b = 100;
    // ���
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    //int &c; // �������ñ����ʼ��
    int &c = a; // һ����ʼ���󣬾Ͳ����Ը���
    c = b; // ���Ǹ�ֵ���������Ǹ�������
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
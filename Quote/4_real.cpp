/**
 * File : 4_real.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/16 
 */
# include <iostream>

using namespace std;

// ���������ã�ת��Ϊ int* const ref = &a;
void func(int &ref) {
    ref = 100; // ref�����ã�ת��Ϊ*ref = 100
}

int main() {

    int a = 10;

    // �ڲ����Զ�ת��Ϊ int* const ref = &a;
    // ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
    int &ref = a;
    // �ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;
    ref = 20;

    cout << "a:" << a << endl;
    cout << "ref:" << ref << endl;

    func(a);

    return 0;
}
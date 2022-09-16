/**
 * File : 2_prams.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/16 
 */
# include <iostream>

using namespace std;

// 1��ֵ����
void fun1(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

// 2����ַ����
void fun2(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 3�����ô���
void fun3(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


int main() {

    int a = 10;
    int b = 20;

    fun1(a, b);
    cout << "a:" << a << " b:" << b << endl;

    fun2(&a, &b);
    cout << "a:" << a << " b:" << b << endl;

    fun3(a, b);
    cout << "a:" << a << " b:" << b << endl;

    return 0;
}
/**
 * File : IntType.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/10 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     *  �﷨ : �������� ������ = ������ʼֵ
     *        int a = 10
     *  �������ʹ��ڵ�����:
     *      ����������һ�����ʵ��ڴ�ռ䣨���ٿռ��˷ѣ�
     *  �ռ�ռ�ã��ֽڣ���ֱ��Ӱ����ȡֵ��Χ
     *      short  2
     *      int    4
     *      long   4
     *      long long  8
     */
    short a = 10;
    int b = 10;
    long c = 10;
    long long d = 10;

    cout << "short ռ�ÿռ䣺" << sizeof(a) << endl;
    cout << "int ռ�ÿռ䣺" << sizeof(b) << endl;
    cout << "long ռ�ÿռ䣺" << sizeof(c) << endl;
    cout << "long long ռ�ÿռ䣺" << sizeof(d) << endl;

    return 0;
}
/**
 * File : 3_return.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/16 
 */
# include <iostream>

using namespace std;

// ���ؾֲ���������
int &test01() {
    int a = 10; //�ֲ�����
    return a;
}

// ���ؾ�̬��������
int &test02() {
    static int a = 20;
    return a;
}

int main() {

    // ���ܷ��ؾֲ�����������
//    int &ref = test01();
//    cout << "ref = " << ref << endl;

    // �����������ֵ����ô���뷵������
    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl;

    test02() = 1000;
    cout << "ref2 = " << ref2 << endl;

    return 0;
}
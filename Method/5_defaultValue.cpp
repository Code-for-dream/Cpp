/**
 * File : 5_defaultValue.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/16 
 */
# include <iostream>

using namespace std;

//1. ���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
int func1(int a, int b = 10, int c = 10) {
    return a + b + c;
}

//2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
    return a + b;
}

//3. ����ռλ���� ��ռλ����Ҳ������Ĭ�ϲ���
void func3(int a, int) {
    cout << "this is func" << endl;
}


int main() {

    cout << "ret = " << func1(20, 20,10) << endl;
    cout << "ret = " << func2(20, 20) << endl;
    cout << "ret = " << func2(100) << endl;
    func3(10,10); // ռλ���������

    return 0;
}
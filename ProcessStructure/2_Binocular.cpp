/**
 * File : 2_Binocular.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /** ��Ŀ����
     * ���ã� ͨ����Ŀ�����ʵ�ּ򵥵��ж�
     * �﷨������ʽ1 ? ����ʽ2 ������ʽ3
     * ���ͣ�
        �������ʽ1��ֵΪ�棬ִ�б���ʽ2�������ر���ʽ2�Ľ����
        �������ʽ1��ֵΪ�٣�ִ�б���ʽ3�������ر���ʽ3�Ľ����

     * �ܽ᣺��if���Ƚϣ���Ŀ������ŵ��Ƕ�С���࣬ȱ���������Ƕ�ף��ṹ������
     */
    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;
    cout << "c = " << c << endl;

    // C++����Ŀ��������ص��Ǳ���,���Լ�����ֵ
    (a > b ? a : b) = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
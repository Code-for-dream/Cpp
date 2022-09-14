/**
 * File : 3_const.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * const����ָ�����������
        1. const����ָ��   --- ����ָ��
        2. const���γ���   --- ָ�볣��
        3. const������ָ�룬�����γ���
     */

    int a = 10;
    int b = 100;

    // const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը���
    const int *p1 = &a;
    cout << *p1 << endl; // 10
    p1 = &b; //��ȷ
    cout << *p1 << endl; // 100
    //*p1 = 100;  ����

    //const���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
    int *const p2 = &a;
    //p2 = &b; //����
    cout << *p2 << endl; // 10
    *p2 = 20; //��ȷ
    cout << *p2 << endl; // 20

    //const������ָ�������γ���
    const int *const p3 = &a;
    //p3 = &b; //����
    //*p3 = 100; //����

    /**
     * ���ɣ���const�Ҳ�����ŵ���ָ�뻹�ǳ���:
     *    ָ����ǳ���ָ��
     *    ��������ָ�볣��
     */

    return 0;
}
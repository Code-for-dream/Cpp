/**
 * File : 3_document.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/13 
 */
//swap.cpp�ļ�
#include "swap.h"

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {
    /**
     * ���ã��ô���ṹ��������
     * �������ļ���дһ����4������
            1. ������׺��Ϊ.h��ͷ�ļ�
            2. ������׺��Ϊ.cpp��Դ�ļ�
            3. ��ͷ�ļ���д����������
            4. ��Դ�ļ���д�����Ķ���
     */
    int a = 100;
    int b = 200;
    swap(a, b);

    return 0;
}
/**
 * File : 4_PointerAndArray.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ����ָ�����Ԫ��
     */
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /*
     * TODO: ָ�������ָ��
     *  ��ͬ�� int *p = &arr[0];
     */
    int *p = arr;

    cout << "��һ��Ԫ�أ� " << arr[0] << endl;
    cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

    for (int i = 0; i < 10; i++) {
        // ����ָ���������
        cout << *p << endl;
        cout << p << endl;
        p++; // p++��ָ��ַ��������(*p)++��ʾ��ַ�����ֵ������
    }
    /* 16���� => ����4
        0x61fde0
        0x61fde4
        0x61fde8
        0x61fdec
        0x61fdf0
        0x61fdf4
        0x61fdf8
        0x61fdfc
        0x61fe00
        0x61fe04
     */
    return 0;
}
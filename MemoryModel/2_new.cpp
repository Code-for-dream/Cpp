/**
 * File : 2_new.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

int *func() {
    // ����new�ؼ��ֽ����ݿ��ٵ���ȡ
    int *a = new int(10);
    return a;
}

int main() {

    int *p = func();
    cout << *p << endl;

    // ����delete�ͷŶ�������
    delete p;
    //cout << *p << endl; //�����ͷŵĿռ䲻�ɷ���

    // ������������
    int *arr = new int[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    //�ͷ����� delete ��� []
    delete[] arr;

    return 0;
}
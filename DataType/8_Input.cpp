/**
 * File : 8_Input.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ���ݵ����룺�Ӽ��̻�ȡ����
     * �ؼ��֣� cin
     * �﷨�� cin >> ������
     */
    // ��������
    int a = 0;
    cout << "���������ͱ���:" << endl;
    cin >> a;
    cout << a << endl;

    // ����������
    float b = 0.0f;
    cout << "�����븡���ͱ���:" << endl;
    cin >> b;
    cout << b << endl;

    // �ַ�������
    char c = 'a';
    cout << "�������ַ��ͱ���:" << endl;
    cin >> c;
    cout << c << endl;

    // �ַ���������
    string d = "abc";
    cout << "�������ַ����ͱ���:" << endl;
    cin >> d;
    cout << d << endl;

    // ����������
    bool e = false;
    cout << "�����벼���ͱ���:" << endl;
    cin >> e;
    cout << e << endl;

    return 0;
}
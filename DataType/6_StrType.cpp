/**
 * File : 6_StrType.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * �ַ����ͣ����ڱ�ʾһ���ַ�
     * �﷨�� char ������[] = "...";
     *       string ������ = "...";
     */
    char str1[] = "HelloWorld��";
    string str2 = "������磡";
    string str3 = "Hello��";

    cout << str1 << endl;
    cout << str2 << endl;

    // string �з��Ų�ռ�ռ�
    cout << "str1�Ĵ�С��" << sizeof(str1) << endl;
    cout << "Str2�Ĵ�С��" << sizeof(str2) << endl;
    cout << "Str3�Ĵ�С��" << sizeof(str3) << endl;

    return 0;
}
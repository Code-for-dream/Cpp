/**
 * File : 4_CharType.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * �ַ���:������ʾ�����ַ�
     * �﷨�� char ch = 'a'��
     *   * ��������ֻ����һ���ַ����������ַ���
     * �ռ�ռ�ã� 1�ֽ�
     * �ַ����������ǰ��ַ�����ŵ��ڴ��д洢�����ǽ���Ӧ��ASCII������뵽�洢��Ԫ�й�
     *
     */
    char ch = 'a';
    cout << "a:" << ch << endl;
    cout << "charռ��:" << sizeof(ch) << endl;

    int a = ch;
    cout << "ASCII -> ch��" << a << endl;

    return 0;
}
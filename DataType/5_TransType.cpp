/**
 * File : 5_TransType.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ת���ַ�:���ڱ�ʾһЩ������ʾ������ASCII�ַ�
     * �﷨�� \X
     * ���ã�
     *   \n ����
     *   \t �Ʊ�� - ��ʽ��
     *   \\ ��ʾ \
     *
     */
     cout << "Hello\nWorld!" << endl;

     cout << "Hello aaa\tWorld!" << endl;
     cout << "Hello aaaa\tWorld!" << endl;
     cout << "Hello aa\tWorld!" << endl;

     cout << "Hello\\World!" << endl;

    return 0;
}
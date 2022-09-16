/**
 * File : 1_partition.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

// ȫ�ֱ���
int g_a = 10;
int g_b = 10;

// ȫ�ֳ���
// constȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;

static int s_c = 10;
static int s_d = 10;

int main() {

    // �ֲ�����
    int a = 10;
    int b = 10;
    // const�ֲ�����
    const int c_l_a = 10;
    const int c_l_b = 10;
    // ��ӡ��ַ
    cout << "�ֲ�����a��ַΪ�� " << (int) (size_t) &a << endl;
    cout << "�ֲ�����b��ַΪ�� " << (int) (size_t) &b << endl;
    cout << "const�ֲ�����c_l_a��ַΪ�� " << (int) (size_t) &c_l_a << endl;
    cout << "const�ֲ�����c_l_b��ַΪ�� " << (int) (size_t) &c_l_b << endl;

    cout << "ȫ�ֱ���g_a��ַΪ�� " << (int) (size_t) &g_a << endl;
    cout << "ȫ�ֱ���g_b��ַΪ�� " << (int) (size_t) &g_b << endl;
    cout << "constȫ�ֳ���c_g_a��ַΪ�� " << (int) (size_t) &c_g_a << endl;
    cout << "constȫ�ֳ���c_g_b��ַΪ�� " << (int) (size_t) &c_g_b << endl;

    // ��̬����
    static int s_a = 10;
    static int s_b = 10;
    // ��ӡ��ַ
    cout << "��̬����s_a��ַΪ�� " << (int) (size_t) &s_a << endl;
    cout << "��̬����s_b��ַΪ�� " << (int) (size_t) &s_b << endl;
    cout << "��̬����s_c��ַΪ�� " << (int) (size_t) &s_c << endl;
    cout << "��̬����s_d��ַΪ�� " << (int) (size_t) &s_d << endl;

    cout << "�ַ���������ַΪ�� " << (int) (size_t) &"hello world" << endl;
    cout << "�ַ���������ַΪ�� " << (int) (size_t) &"hello world1" << endl;

    return 0;
}
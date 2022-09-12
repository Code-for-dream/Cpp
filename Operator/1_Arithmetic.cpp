/**
 * File : Arithmetic.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * �����������ִ�д��������
     * ��������������ڴ�����������
     * ��ֵ����������ڽ����ʽ��ֵ��������
     * �Ƚ�����������ڱ��ʽ�ıȽϣ�������һ����ֵ���ֵ
     * �߼�����������ڸ��ݱ��ʽ��ֵ������ֵ���ֵ
     */
    // �Ӽ��˳�
    cout << "============================" << endl;
    int a = 10;
    int b = 3;
    int c = 0;
    double d1 = 0.5;
    double d2 = 0.25;
    double d3 = 0.2;
    double d4 = 0.22;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl; // 3 ��������Ľ����Ȼ������

    // cout << a / c << endl; // Process finished with exit code -1073741676 (0xC0000094)
    cout << d1 / d2 << endl; // 2   ������������
    cout << d1 / d3 << endl; // 2.5 ��С������ʾС��
    cout << d1 / d4 << endl; // 2.27273 �����λ��Ч����

    // ȡ�� %
    cout << "============================" << endl;
    int e = 10;
    int f = 3;
    int g = 0;
    double h = 10.0;
    double i = 5.0;
    cout << e%f << endl; // 10%3=1
    cout << f%e << endl; // 3%10=3
    // cout << e%g << endl; // 10%0 ����������Ϊ0
    // cout << h%i << endl; // ������С��������ȡ�����㣩 Invalid operands to binary expression ('double' and 'double')

    /* �������Լ�
     *   ǰ�ã�++i --i
     *   ���ã�i++ i--
     * */
    cout << "============================" << endl;
    int k = 1 ;
    int j = 3 ;
    cout << "ǰ�õ��� k��" << ++k << endl;
    cout << "ǰ�õݼ� j��" << --j << endl;
    cout << "k��" << k << endl;
    cout << "j��" << j << endl;

    int m = 1 ;
    int n = 3 ;
    cout << "���õ��� m��" << m++ << endl;
    cout << "���õݼ� n��" << n-- << endl;
    cout << "m��" << m << endl;
    cout << "n��" << n << endl;

    return 0;
}
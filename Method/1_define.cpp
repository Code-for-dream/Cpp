/**
 * File : 1_define.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/13 
 */
# include <iostream>

using namespace std;

// ��������
int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

void swap(int num1, int num2) {
    cout << "����ǰ��" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "������" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    //return ; ����������ʱ�򣬲���Ҫ����ֵ�����Բ�дreturn
}

int main() {
    /**
     * �����Ķ���һ����Ҫ��5�����裺
        1������ֵ����
        2��������
        3����������
        4�����������
        5��return ���ʽ
     * �﷨��
     *   ����ֵ���� ������ �������б�{
            ���������
            return���ʽ
         }
     * ����ֵ���� ��һ���������Է���һ��ֵ���ں���������
     * ���������������������
     * �����б�ʹ�øú���ʱ�����������
     * ��������䣺�������ڵĴ��룬��������Ҫִ�е����
     * return���ʽ�� �ͷ���ֵ���͹ҹ�������ִ����󣬷�����Ӧ������
     */
    // �����ĵ���: ��������������
    int result = add(1, 3);
    cout << result << endl;

    int a = 10;
    int b = 20;
    /*����add����
     * ��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
     * ֵ����ʱ������βη�����������Ӱ��ʵ��
     *
     * */
    int sum = add(a, b); //����ʱ��a��b��Ϊʵ�ʲ��������ʵ��
    cout << "sum = " << sum << endl;

    swap(a, b);
    cout << "mian�е� a = " << a << endl;
    cout << "mian�е� b = " << b << endl;


    return 0;
}
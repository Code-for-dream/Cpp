/**
 * File : 5_dowhile.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ���ã� ����ѭ��������ִ��ѭ�����
     * �﷨�� do{ ѭ����� } while(ѭ������);
     * ע�⣺ ��while����������do...while����ִ��һ��ѭ����䣬���ж�ѭ������
     * �ܽ᣺��whileѭ���������ڣ�do...while��ִ��һ��ѭ����䣬���ж�ѭ������
     */
    /*
     * ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
         ���磺1^3 + 5^3+ 3^3 = 153
       ������do...while��䣬�������3λ���е�ˮ�ɻ���
     */
    int number = 100;
    int count = 0;
    do {
        int a = number % 10;        // ��λ��
        int b = (number / 10) % 10; // ʮλ��
        int c = number / 100;       // ��λ��
        // �ж��Ƿ�Ϊˮ�ɻ���
        if ((a * a * a + b * b * b + c * c * c) == number) {
            cout << "ˮ�ɻ���:" << number << endl;
            count++;
        }
        // ����
        number++;
    } while (number < 1000);
    cout << "1000���ڵ���λ��ˮ�ɻ�����" << count << "����"<< endl;

    return 0;
}
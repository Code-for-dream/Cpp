/**
 * File : 4_while.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>
#include <ctime>

using namespace std;

int main() {
    /**
     * ���ã�����ѭ��������ִ��ѭ�����
       �﷨�� while(ѭ������){ ѭ����� }
       ���ͣ�ֻҪѭ�������Ľ��Ϊ�棬��ִ��ѭ�����
       ע�⣺��ִ��ѭ�����ʱ�򣬳�������ṩ����ѭ���ĳ��ڣ����������ѭ��
     */
    /**
	   ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬
	   ����´���ʾ������ֹ�����С��
	   ����¶Թ�ϲ���ʤ���������˳���Ϸ��
	*/
    // �����������ӣ����õ�ǰϵͳʱ���������������ֹÿһ�������һ��
    srand((unsigned int) time(nullptr));

    // ����1-100�������
    int a;
    a = rand() % 100 + 1;
    int b = 0;

    while (true) {
        cout << "���������²�����֣�" << endl;
        cin >> b;

        if (a > b) {
            cout << "���²�����ֹ�С��" << endl;
            continue;
        } else if (a < b) {
            cout << "���²�����ֹ���" << endl;
            continue;
        } else {
            cout << "��ϲ���¶��ˣ�" << endl;
            break;
        }
    }
    return 0;
}
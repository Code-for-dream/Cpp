/**
 * File : 8_continue.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ���ã���ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
     * ע�⣺continue��û��ʹ����ѭ����ֹ����break������ѭ��
     */
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
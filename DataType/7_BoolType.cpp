/**
 * File : BoolType.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * �������ͣ��������ٵ�ֵ
     *   true  - ���棬������ 1 ��
     *   false - ���٣������� 0��
     * �ռ�ռ�ã� 1 ���ֽ�
     */
    bool flag = true;
    cout << flag << endl;
    flag = false;
    cout << flag << endl;

    cout << "bool����ռ�ÿռ䣺" << sizeof(flag) << endl;

    return 0;
}
/**
 * File : 9_goto.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ���ã�������������ת���
     * �﷨��goto ���;
     * ���ͣ������ǵ����ƴ��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��
     * ע�⣺�ڳ����в�����ʹ��goto��䣬������ɳ������̻���
     */
    cout << "1" << endl;
    goto FLAG;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    FLAG:
    cout << "5" << endl;
    return 0;
}
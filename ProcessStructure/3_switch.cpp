/**
 * File : 3_Switch.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ִ�ж�������֧���
     * > ע��1��switch����б��ʽ����ֻ�������ͻ����ַ���
       > ע��2��case�����û��break����ô�����һֱ����ִ��
       > �ܽ᣺��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����
     */

    //�����Ӱ����:
    //  10 ~ 9  ����
    //  8 ~ 7   �ǳ���
    //  6 ~ 5   һ��
    //  5������  ��Ƭ
    int score = 0;
    cout << "�����Ӱ���:" << endl;
    cin >> score;

    switch (score) {
        case 10:
        case 9:
            cout << "����" << endl;
            break;
        case 8:
            cout << "�ǳ���" << endl;
            break;
        case 7:
        case 6:
            cout << "һ��" << endl;
            break;
        default:
            cout << "��Ƭ" << endl;
            break;
    }
    return 0;
}
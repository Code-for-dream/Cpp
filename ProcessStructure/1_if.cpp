/**
 * File : 1_if.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ���ֳ������нṹ��
     *   ˳��ṹ������˳��ִ�У���������ת
     *   ѡ��ṹ�����������Ƿ����㣬��ѡ���ִ����Ӧ�Ĺ���
     *   ѭ���ṹ�����������Ƿ����㣬ѭ�����ִ��ĳ�δ���
     */
    // if ѡ��ṹ
    int score = 0;
    cout << "������һ��������" << ends;
    cin >> score;

    // ����if
    // if (score > 100) cout << "��Ч������" << endl;

    // ����if
    if (score < 60) {
        cout << "������" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "����" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "�еȣ�" << endl;
    } else if (score >= 80 && score < 90) {
        cout << "���ã�" << endl;
    } else if (score >= 90 && score < 100) {
        // Ƕ��if
        if (score >= 95) {
            cout << "����+��" << endl;
        } else {
            cout << "���㣡" << endl;
        }
    } else if (score > 100) {
        cout << "��Ч������" << endl;
    } else {
        cout << "���֣�" << endl;
    }

    return 0;
}
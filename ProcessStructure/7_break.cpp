/**
 * File : 7_JumpStatement.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ����:��������ѡ��ṹ����ѭ���ṹ
     breakʹ�õ�ʱ����
     * ������switch��������У���������ֹcase������switch
     * ������ѭ������У�������������ǰ��ѭ�����
     * ������Ƕ��ѭ���У�����������ڲ�ѭ�����
     */
    // 1����switch �����ʹ��break
    cout << "��ѡ������ս�������Ѷȣ�" << endl;
    cout << "1����ͨ" << endl;
    cout << "2���е�" << endl;
    cout << "3������" << endl;
    int num = 0;
    cin >> num;
    switch (num) {
        case 1:
            cout << "��ѡ�������ͨ�Ѷ�" << endl;
            break;
        case 2:
            cout << "��ѡ������е��Ѷ�" << endl;
            break;
        case 3:
            cout << "��ѡ����������Ѷ�" << endl;
            break;
    }

    //2����ѭ���������break
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; //����ѭ�����
        }
        cout << i << endl;
    }

    //3����Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 5) {
                break;
            }
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
/**
 * File : 2_array.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

// �ṹ�嶨��
struct student {
    //��Ա�б�
    string name;  //����
    int age;      //����
    int score;    //����
};

int main() {
    /**
     *�ṹ������
     * ���ã����Զ���Ľṹ����뵽�����з���ά��
     * �﷨�� struct �ṹ���� ������[Ԫ�ظ���] = {  {} , {} , ... {} }
     */
    //�ṹ������
    struct student arr[3] =
            {
                    {"����", 18, 80},
                    {"����", 19, 60},
                    {"����", 20, 70}
            };

    for (int i = 0; i < 3; i++) {
        cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
    }

    return 0;
}
/**
 * File : 3_pointer.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

//�ṹ�嶨��
struct student {
    //��Ա�б�
    string name;  //����
    int age;      //����
    int score;    //����
};

int main() {
    /**
     *�ṹ��ָ��
     * ���ã�ͨ��ָ����ʽṹ���еĳ�Ա
     * ���ò�����  -> ����ͨ���ṹ��ָ����ʽṹ������
     */
    struct student stu = {"����", 18, 100};
    struct student *p = &stu;

    p->score = 80;  // ָ�� ͨ��->���������Է��ʳ�Ա

    cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

    return 0;
}
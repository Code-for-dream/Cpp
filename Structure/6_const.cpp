/**
 * File : 6_const.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

//ѧ���ṹ�嶨��
struct student {
    //��Ա�б�
    string name;  //����
    int age;      //����
    int score;    //����
};

// constʹ�ó���:�����м�洢�Ĳ��������Ϳռ�����
void printStudent(const student *stu) //��const��ֹ�������е������
{
    //stu->age = 100; //����ʧ�ܣ���Ϊ����const����
    cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

}

int main() {

    student stu = {"����", 18, 100};
    printStudent(&stu);

    return 0;
}
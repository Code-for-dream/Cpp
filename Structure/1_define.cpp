/**
 * File : 1_define.cpp
 * Author: ??????????????'
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
} stu3; // ������ʽ3

int main() {

    /**
     > �ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��
     > �ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��
     > �ܽ�3���ṹ��������ò����� ''.''  ���ʳ�Ա
     */

    // ������ʽ1
    student stu1; // struct�ؼ��ֿ���ʡ��
    stu1.name = "����";
    stu1.age = 18;
    stu1.score = 100;
    cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;

    // ������ʽ2
    struct student stu2 = {"����", 19, 60};
    cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;

    stu3.name = "����";
    stu3.age = 18;
    stu3.score = 80;
    cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;

    return 0;
}
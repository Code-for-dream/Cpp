/**
 * File : 7_case_stutch.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/15 
 */
# include <iostream>
#include <ctime>

using namespace std;

struct Student {
    string name;
    int score;
};
struct Teacher {
    string name;
    Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len) {
    string tName = "��ʦ";
    string sName = "ѧ��";
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++) {
        tArray[i].name = tName + nameSeed[i];
        for (int j = 0; j < 5; j++) {
            tArray[i].sArray[j].name = sName + nameSeed[j];
            tArray[i].sArray[j].score = rand() % 61 + 40;
        }
    }
}

void printTeachers(Teacher tArray[], int len) {
    for (int i = 0; i < len; i++) {
        cout << tArray[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t������" << tArray[i].sArray[j].name << " ������" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main() {

    srand((unsigned int) time(NULL)); //��������� ͷ�ļ� #include <ctime>

    Teacher tArray[3]; //��ʦ����
    int len = sizeof(tArray) / sizeof(Teacher);

    allocateSpace(tArray, len); // ��������
    printTeachers(tArray, len); // ��ӡ����

    return 0;
}
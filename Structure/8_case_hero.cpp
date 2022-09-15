/**
 * File : 8_case_hero.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

// Ӣ�۽ṹ��
struct hero {
    string name;
    int age;
    string sex;
};

// ð������
void bubbleSort(hero arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j].age > arr[j + 1].age) {
                hero temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ��ӡ����
void printHeroes(hero arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "������ " << arr[i].name << " �Ա� " << arr[i].sex << " ���䣺 " << arr[i].age << endl;
    }
}

int main() {

    struct hero arr[5] =
            {
                    {"����", 23, "��"},
                    {"����", 22, "��"},
                    {"�ŷ�", 20, "��"},
                    {"����", 21, "��"},
                    {"����", 19, "Ů"},
            };
    int len = sizeof(arr) / sizeof(hero); // ��ȡ����Ԫ�ظ���

    bubbleSort(arr, len); // ����
    printHeroes(arr, len); // ��ӡ

    return 0;
}
/**
 * File : 8_case_hero.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

// 英雄结构体
struct hero {
    string name;
    int age;
    string sex;
};

// 冒泡排序
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

// 打印数组
void printHeroes(hero arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "姓名： " << arr[i].name << " 性别： " << arr[i].sex << " 年龄： " << arr[i].age << endl;
    }
}

int main() {

    struct hero arr[5] =
            {
                    {"刘备", 23, "男"},
                    {"关羽", 22, "男"},
                    {"张飞", 20, "男"},
                    {"赵云", 21, "男"},
                    {"貂蝉", 19, "女"},
            };
    int len = sizeof(arr) / sizeof(hero); // 获取数组元素个数

    bubbleSort(arr, len); // 排序
    printHeroes(arr, len); // 打印

    return 0;
}
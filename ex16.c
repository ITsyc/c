//
// Created by MIOJI on 2017/1/19.
//
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
    // 申请原始内存
    // sizeof 结构体的大小
    struct Person *who = malloc(sizeof(struct Person));
    //确认内存有效 assert 检查 malloc 返回结果是否为空
    assert(who != NULL);
    // 结构体的 赋值
    // strdup 实现创建新的内存 和字符串复制
    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who) {

    assert(who != NULL);

    free(who->name);
    free(who);
}

void Person_print(struct Person *who) {
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]) {

    struct Person *syc = Person_create("syc", 25, 69, 130);

    struct Person *xwz = Person_create("xwz", 26, 90, 222);

    printf("syc is at memory location %p:\n", syc);
    Person_print(syc);

    printf("xwz is at memory location %p:\n", xwz);
    Person_print(xwz);

    syc->age += 2;
    syc->height += 1;
    syc->weight -= 1;
    printf("syc change \n");
    Person_print(syc);

    xwz->age += 2;
    xwz->height -= 1;
    xwz->weight += 11111;
    printf("xwz change \n");
    Person_print(xwz);

    Person_destroy(syc);
    Person_destroy(xwz);

    return 0;

}

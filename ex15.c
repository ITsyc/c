//
// Created by MIOJI on 2016/11/28.
//

#include <stdio.h>
int main(int argc, char *argv[])
{
    int args[] = {23, 43, 43, 23, 34, 39};
    char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa", "James"};

    int count = sizeof(args) / sizeof(int);
    //i作为索引遍历数组
    for (int i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], args[i]);
    }

    printf("------\n");
    //定义指针
    int *cur_age = args;
    char **cur_name = names;
    //指针+偏移i的方式遍历
    for (int i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i));
    }

    printf("------\n");
    //访问数组元素的语法和指针是相同的。
    for (int i = 0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("------\n");
    //通过指针运算来打印数组
    for (cur_name = names, cur_age = args; (cur_age - args) < count; cur_name++, cur_age++) {
        printf("%s lived %d years so for.\n", *cur_name, *cur_age);
    }

    return 0;
}

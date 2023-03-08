#include <iostream>
#include "force.h"
//字符表
char table[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

int main() {
    //修复了暴力破解封装版的bug
    //dev1分支 整理的暴力破解
    char tmp[] = { 'a','a','a','a','a','\0' };
    char passwd[] = { 'h','e','l','l','o','\0' };
    force force1;
    force1.startForce(table,sizeof(table),tmp,passwd);

    return 0;

}
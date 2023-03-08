#include <iostream>
#include "force.h"
#include "MD5.h"
//字符表
char table[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int main() {
    //dev1分支 整理的暴力破解
    char tmp[] = { 'a','a','a','a','a','\0' };
    char passwd[] = { 'h','e','l','l','o','\0' };
    force force1;
    force1.startForce(table,sizeof(table),tmp,passwd);

    //dev2分支 MD5
    MD5 md5;
    std::cout<<md5.startMD5("hello world")<<std::flush;

    return 0;

}
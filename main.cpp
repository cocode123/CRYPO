#include <iostream>
#include "force.h"
//�ַ���
char table[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

int main() {
    //�޸��˱����ƽ��װ���bug
    //dev1��֧ ����ı����ƽ�
    char tmp[] = { 'a','a','a','a','a','\0' };
    char passwd[] = { 'h','e','l','l','o','\0' };
    force force1;
    force1.startForce(table,sizeof(table),tmp,passwd);

    return 0;

}
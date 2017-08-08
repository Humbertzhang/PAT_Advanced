#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int a,b,c,slen,restlen,flag=0;
    char str[20];
    cin >> a >> b;
    c = a + b;
    
    //若c为为负数，为了方便起见在之前先将其变成正的，并且用flag变量输出负号
    if(c < 0){
        flag = 1;
        c = -c;
    }

    sprintf(str,"%d",c);
    slen = strlen(str);
    restlen = slen;

    if(flag == 1)
        printf("-"); 
    
    //若剩余六位数或者三位数，且不是第一个字符，则应该加逗号
    while(restlen!=0)
    {
        if(restlen==6&&restlen!=slen||restlen==3&&restlen!=slen)
            cout << ","; 
        printf("%c",str[slen-restlen]);
        restlen--;
    }
    
    return 0;
}

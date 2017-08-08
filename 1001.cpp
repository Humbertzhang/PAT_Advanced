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
    
    if(c < 0){
        flag = 1;
        c = -c;
    }

    sprintf(str,"%d",c);
    slen = strlen(str);
    restlen = slen;

    if(flag == 1)
        printf("-"); 
    
    while(restlen!=0)
    {
        if(restlen==6&&restlen!=slen||restlen==3&&restlen!=slen)
            cout << ","; 
        printf("%c",str[slen-restlen]);
        restlen--;
    }
    
    return 0;
}

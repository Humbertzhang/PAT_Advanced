#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    /*from 33 to 126 are visible*/
    char str1[10005],str2[10005];
    cin.getline(str1,10005);
    cin.getline(str2,10005);
    bool flag[200];
    for(int i=0;i<200;i++)
        flag[i] = false;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i=0;i<len2;i++){
        flag[str2[i] - '\0'] = true;
    }

    for(int i=0;i<len1;i++){
        if(!flag[str1[i]-'\0'])
            printf("%c",str1[i]);
    }
    return 0;
}

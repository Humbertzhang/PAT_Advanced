#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    cin >> str;
    int strl = strlen(str);
    int n1,n2,n3,k;
    int max=0;

    for(n2 = strl;n2>=3;n2--) {
        for (k = n2; k >= 0; k--) {
            n1 = k,n3=k;
            if (n1 + n2 + n3 -2 == strl) {
                if(k > max) {
                    max = k;
                }
            }
        }
    }

    n1 = n3 = max-1;
    n2 = strl - 2*n1-2;

    int i;
    for(i =0; i < n1;i++){
        cout << str[i];

        for(int j=0;j<n2;j++)
            cout << " ";

        cout << str[strl -1 - i] <<endl;
    }
    str[strl - i] = '\0';
    printf("%s",str+i);
}

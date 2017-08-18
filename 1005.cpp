#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char numb[110];
    cin >> numb;
    int num=0;
    for(int i=0;i<strlen(numb);i++)
        num += numb[i]-'0';
    char numchar[100];
    sprintf(numchar,"%d",num);
    char numstr[10][10] = {"zero","one","two","three","four","five",
                        "six","seven","eight","nine"};
    for(int i=0;i<strlen(numchar);i++){
        if(i!=strlen(numchar)-1)
            cout << numstr[(numchar[i]-'0')]  <<  " ";
        else
            cout << numstr[(numchar[i]-'0')] <<endl;
    }
}

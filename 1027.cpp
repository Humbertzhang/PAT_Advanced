#include <iostream>
#include <vector>

using namespace std;

void convert(int num,char *output)
{
    char marsdigit[] = "0123456789ABC";
    int bit2 = num % 13;
    int bit1 = num/13 ;
    output[0] = marsdigit[bit1];
    output[1] = marsdigit[bit2];
    output[2] = '\0';
}

int main()
{
    int colors[3];
    char mars[3][3];
    for(int i=0;i<3;i++) {
        cin >> colors[i];
        convert(colors[i],mars[i]);
    }
    cout << "#" << mars[0] << mars[1] << mars[2] <<endl;
}

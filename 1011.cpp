#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double beat[3][3];

    char s[4] = "WTL";
    char rec[3];
    double maxlist[3];

    for(int i=0;i<3;i++) {
        double max=0;
        int maxj=0;
        for (int j = 0; j < 3; j++) {
            cin >> beat[i][j];
            if(beat[i][j] > max){
                max = beat[i][j];
                maxj = j;
            }
        }
        maxlist[i] = max;
        rec[i] = s[maxj];
    }

    double profit = (maxlist[0] * maxlist[1] * maxlist[2] * 0.65 -1) *2;
    if((profit - int(profit)) >= 0.005)
        profit += 0.01;

    printf("%c %c %c %.2lf\n",rec[0],rec[1],rec[2],profit);

    return 0;
}

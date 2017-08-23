#include <iostream>
using namespace std;
int count[17000000] = {0};
int main() {
    int M,N;
    cin >> M >> N;
    long long int num[N][M]={0};

    int max = 0,maxcolor=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%lld",&num[i][j]);
            count[num[i][j]] ++;
            if(count[num[i][j]] > max) {
                max = count[num[i][j]];
                maxcolor = num[i][j];
            }
        }
    }
    printf("%lld\n",maxcolor);
}

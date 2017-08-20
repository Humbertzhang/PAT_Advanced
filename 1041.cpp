#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int numbers[10000];
    for(int i=0;i<10000;i++)
        numbers[i] = 0;

    vector<int> allbets(N);
    for(int i=0;i<N;i++) {
        scanf("%d", &allbets[i]);
        numbers[allbets[i]] += 1;
    }

    for(int i=0;i<N;i++){
        if(numbers[allbets[i]] == 1){
            printf("%d\n",allbets[i]);
            return 0;
        }
    }

    printf("None\n");
    return 0;
}


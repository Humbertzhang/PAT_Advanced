#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> requests(N);
    int time=0,current=0;
    for(int i=0;i<N;i++)
        cin >> requests[i];

    time += N * 5;

    for(int i=0;i<N;i++){
        if(current < requests[i]){
            int up = requests[i] - current;
            time += up*6;
            current = requests[i];
        }
        else if(current > requests[i] ){
            int down = current - requests[i];
            time += down * 4;
            current = requests[i];
        }
    }
    cout << time <<endl;
}


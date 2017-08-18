#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct students{
    char name[20];
    char ID[20];
    int grade;
};

bool compare(struct students a, struct students b)
{
    return a.grade > b.grade;
}

int main()
{
    int N;
    cin >> N;
    vector<struct students> stus(N);
    for(int i=0;i<N;i++)
        cin >> stus[i].name >> stus[i].ID >> stus[i].grade ;

    int grade1,grade2,grademax,grademin;
    cin >> grade1 >> grade2;
    grademax = max(grade1,grade2);
    grademin = min(grade1,grade2);

    sort(stus.begin(),stus.end(),compare);
    int printflag = 0;
    for(int i=0;i<N;i++){
        if(stus[i].grade >= grademin && stus[i].grade <= grademax){
            printflag = 1;
            printf("%s %s\n",stus[i].name,stus[i].ID);
        }
    }

    if(printflag == 0){
        cout << "NONE" << endl;
    }
}

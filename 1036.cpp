#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

struct students{
    char name[20];
    char sex;
    char ID[10];
    int grade;
};

int main()
{
    int n;
    cin >> n;
    vector<struct students> stus(n);



    for(int i=0;i<n;i++){
        cin >> stus[i].name >> stus[i].sex >> stus[i].ID >> stus[i].grade;
    }
    int maxF=0,minM=0,maxgrade=-1,mingrade=200,flagM=0,flagF=0;
    for(int i=0;i<n;i++){

        if(stus[i].sex == 'M'){
            if(stus[i].grade <= mingrade ) {
                flagM = 1;
                minM = i;
                mingrade = stus[i].grade;
            }
        }
        else if(stus[i].sex == 'F'){
            if(stus[i].grade >= maxgrade ) {
                flagF = 1;
                maxF = i;
                maxgrade = stus[i].grade;
            }
        }
    }

    if(flagF == 0)
        cout << "Absent" << endl;
    else
        cout << stus[maxF].name << " " << stus[maxF].ID << endl;

    if(flagM == 0)
        cout << "Absent" <<endl;
    else
        cout << stus[minM].name << " " << stus[minM].ID << endl;

    if(flagF == 0 || flagM == 0){
        cout << "NA" <<endl;
    }
    else if(flagF != 0 && flagM != 0) {
        cout << stus[maxF].grade - stus[minM].grade <<endl;
    }
}

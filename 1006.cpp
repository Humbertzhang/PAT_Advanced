#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct person{
    char ID_number[20];
    int inhh;
    int inmm;
    int inss;
    int outhh;
    int outmm;
    int outss;
};

bool compare_signin(struct person one, struct person two)
{
    if(one.inhh == two.inhh){
        if(one.inmm == two.inmm){
            return one.inss > two.inss;
        } else{
            return one.inmm > two.inmm;
        }
    }else{
        return one.inhh > two.inhh;
    }
}

bool compare_signout(struct person one, struct person two)
{
    if(one.outhh == two.outhh){
        if(one.outmm == two.outmm){
            return one.outss > two.outss;
        } else{
            return one.outmm > two.outmm;
        }
    }else{
        return one.outhh > two.outhh;
    }
}

int main()
{
    int M;
    cin >> M;

    vector<struct person> persons(M);

    for(int i=0;i<M;i++){
        scanf("%s %d:%d:%d %d:%d:%d",persons[i].ID_number,&persons[i].inhh,&persons[i].inmm,&persons[i].inss, &persons[i].outhh,&persons[i].outmm,&persons[i].outss);
    }
    sort(persons.begin(),persons.end(),compare_signin);
    printf("%s ",persons[M-1].ID_number);
    sort(persons.begin(),persons.end(),compare_signout);
    printf("%s\n",persons[0].ID_number);
}

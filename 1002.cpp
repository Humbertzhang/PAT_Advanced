#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct  part{
    int exponents;  //指数
    double coefficients;  //系数

    part()
    {
        this->exponents = -1;
        this->coefficients = -1;
    }
};

bool compare(struct part a, struct part b)
{
    return a.exponents > b.exponents;
};

int main()
{
    int K1,K2;

    //Input content
    cin >> K1 ;
    vector<part> part1(K1);
    for(int i=0;i<K1;i++)
        cin >> part1[i].exponents >> part1[i].coefficients ;
    cin >> K2 ;
    vector<part> part2(K2);
    for(int i=0;i<K2;i++)
        cin >> part2[i].exponents >> part2[i].coefficients ;

    vector<part> part3(K1+K2);
    int count = 0;
    for(int j=0;j<K1;j++){
        for(int k=0;k<K2;k++){
            if(part1[j].exponents == part2[k].exponents && part1[j].exponents !=-1 && part2[k].exponents!= -1){
                part3[count].exponents=part1[j].exponents;
                part3[count++].coefficients = part1[j].coefficients + part2[k].coefficients;
                part1[j].exponents = -1,part1[j].coefficients=-1,part2[k].exponents=-1,part2[k].coefficients=-1;
            }
        }
    }

    for(int i = 0;i<K1;i++)
        if(part1[i].exponents!= -1){
            part3[count].exponents = part1[i].exponents;
            part3[count++].coefficients = part1[i].coefficients;
            part1[i].exponents = -1,part1[i].coefficients=-1;
        }

    for(int i = 0;i<K2;i++){
        if(part2[i].exponents!= -1){
            part3[count].exponents = part2[i].exponents;
            part3[count++].coefficients = part2[i].coefficients;
            part2[i].exponents = -1,part2[i].coefficients=-1;
        }
    }

    sort(part3.begin(),part3.end(),compare);

    //对于运算后coefficient为0的应该处理一下
    for(int i=0;i<K1+K2;i++)
        if(part3[i].coefficients == 0)
            count --;

    cout << count ;
    for(int i=0;i<K1+K2;i++){
        if(part3[i].exponents!=-1&&part3[i].coefficients!=0)
            printf(" %d %.1lf",part3[i].exponents,part3[i].coefficients);
    }

    return 0;
}


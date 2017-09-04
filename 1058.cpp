#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int Ag,As,An,Bg,Bs,Bn,Cg=0,Cs=0,Cn=0;
    scanf("%lld.%lld.%lld %lld.%lld.%lld",&Ag,&As,&An,&Bg,&Bs,&Bn);
    if ((Cn = An + Bn) >= 29){
        Cn -= 29;
        Cs += 1;
    }
    if((Cs = Cs + As + Bs) >= 17){
        Cs -= 17;
        Cg += 1;
    }
    Cg = Ag + Bg + Cg;
    printf("%lld.%lld.%lld",Cg,Cs,Cn);
	return 0;
}

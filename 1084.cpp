#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main() {
	/*Record if this char has been printed*/
    bool flags[256] = {0};

    char str1[90],str2[90];
    cin >> str1 >> str2;
    int i;
	/*To upper*/ 
   while(i<strlen(str1)) {
        str1[i] = toupper(str1[i]);
        i+=1;
    }
    i=0;
    while(i<strlen(str2)) {
        str2[i] = toupper(str2[i]);
        i+=1;
    }
    
    /*Find char and print*/
    for(i=0;i<strlen(str1);i++){
        int flag = 0;
        for(int j=0;j<strlen(str2);j++){
            if(str1[i] == str2[j]) {
                flag = 1;
                break;
            }
        }
        if(flag)
            continue;
        if(flags[str1[i]] == false) {
            printf("%c", str1[i]);
            flags[str1[i]] = true;
        }
    }

}

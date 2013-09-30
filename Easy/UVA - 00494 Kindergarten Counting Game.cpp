#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    register char c;
    bool word = false;
    int count = 0;
    while((c = getchar())!=EOF ){
       if(isalpha(c)){
            word= true;
       }else if(c=='\n'){
            word = false;

            if(word){
                count++;
            }

            //EOL
            printf("%d\n", count);
            count = 0;
       }else{
            if(word){
                count++;
                word = false;
            }
       }

    }
    return 0;
}

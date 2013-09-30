#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    bool abre = false;
    char c;
    while((c = getchar())!=EOF ){
        if(c == '"'){
            if((abre = !abre)){
                fputs("``",stdout);
            }
            else{
                fputs("''",stdout);
            }
        }else{
            putchar(c);
        }
    }
    return 0;
}

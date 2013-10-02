#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;

int main()
{
    int t,n;
    int subidas, bajadas;
    scanf("%d",&t);
    for(int i=0; i<t;i++){
        scanf("%d",&n);
        int anterior = -1;
        scanf("%d",&anterior);
        subidas=0;
        bajadas=0;
        for(int j=1;j<n;j++){
            int a;
            scanf("%d",&a);
            if(a>anterior){
                subidas++;
            }else if(a<anterior){
                bajadas++;
            }
            anterior = a;
        }
        printf("Case %d: %d %d\n",(i+1),subidas,bajadas);
    }
    return 0;
}


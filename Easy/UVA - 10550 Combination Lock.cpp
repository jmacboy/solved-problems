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
    int a,b,c,d,sum;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    while(a!=0||b!=0||c!=0||d!=0){
        int difAB = a-b;
        if(difAB<=0){
            difAB += 40;
        }
        int difBC = c-b;
        if(difBC<=0){
            difBC += 40;
        }
        int difCD = c-d;
        if(difCD<=0){
            difCD +=40;
        }
        sum = 720 + difAB*9 + 360 + (difBC)*9 + (difCD)*9;
        printf("%d\n",sum);

        scanf("%d %d %d %d",&a,&b,&c,&d);
    }
    return 0;
}

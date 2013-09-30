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
int sumDigits(int no){
    if(no<10)
        return no;
    int res = 0;
    int aux = no;
    while(aux){
        res += aux % 10;
        aux /=10;
    }
    return sumDigits(res);
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n){
        printf("%d\n",sumDigits(n));
        scanf("%d",&n);
    }
    return 0;
}


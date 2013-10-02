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
    int n;
    scanf("%d",&n);
    int maxi, aux, st;
    for(int i=0;i<n;i++){
        maxi = 0;
        scanf("%d",&st);
        for(int j=0;j<st;j++){
            scanf("%d",&aux);
            maxi = max(maxi,aux);
        }
        printf("Case %d: %d\n",(i+1),maxi);
    }
    return 0;
}


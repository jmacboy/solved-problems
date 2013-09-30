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
    int n, f, a,b,c;
    long sum;
    scanf("%d",&n);
    for(int j=0; j<n;j++){
        scanf("%d",&f);
        sum = 0;
        for(int i=0; i<f; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            sum = sum + (a*c);
        }
        printf("%ld\n",sum);

    }
    return 0;
}

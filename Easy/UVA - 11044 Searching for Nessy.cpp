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
    int n,a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        int res = (a/3)*(b/3);
        printf("%d\n",res);
    }
    return 0;
}

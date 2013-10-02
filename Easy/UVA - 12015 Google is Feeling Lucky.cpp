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
    char urls[10+2][110];
    int rels[10+2];
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        int maxi = -1;
        for(int j=0;j<10;j++){
            scanf("%s %d",urls[j],&rels[j]);
            maxi = max(maxi,rels[j]);
        }

        printf("Case #%d:\n",(i+1));
        for(int j=0;j<10;j++){
            if(maxi==rels[j]){
                printf("%s\n",urls[j]);
            }
        }
    }
    return 0;
}


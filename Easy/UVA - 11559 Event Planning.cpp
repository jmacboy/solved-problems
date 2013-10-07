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
    int n, b,h,w;

    while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF)
    {
        int lessPrice = 10000000;
        for(int j=0; j<h; j++)
        {
            int p;
            scanf("%d",&p);
            for(int i=0; i<w; i++)
            {
                int a;
                scanf("%d",&a);
                if(a>=n)
                {
                    int priceToStay = p*n;
                    if(priceToStay<b&&priceToStay<lessPrice)
                    {
                        lessPrice = priceToStay;
                    }
                }
            }
        }
        if(lessPrice==10000000)
        {
            cout << "stay home" << endl;
        }
        else
        {
            printf("%d\n",lessPrice);
        }
    }

    return 0;
}

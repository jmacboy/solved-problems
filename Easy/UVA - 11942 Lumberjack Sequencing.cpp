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
    int anterior,a, segundo;
    bool ascendente, unordered;
    cout << "Lumberjacks:" << endl;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&anterior);
        ascendente = false;
        scanf("%d",&segundo);
        if(segundo>anterior)
        {
            ascendente = true;
        }
        else
        {
            ascendente = false;
        }
        segundo = anterior;
        unordered = false;
        for(int i=2; i<10; i++)
        {
            scanf("%d",&a);
            if(a>anterior)
            {
                if(!ascendente)
                {
                    unordered=true;
                }
            }
            else
            {
                if(ascendente)
                {
                    unordered = true;
                }
            }
            anterior = a;
        }
        if(unordered)
        {
            cout << "Unordered" << endl;
        }
        else
        {
            cout << "Ordered" << endl;
        }
    }
    return 0;
}


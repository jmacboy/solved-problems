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
    int n,pX,pY;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d %d",&pX,&pY);

        while(n--)
        {
            int qX,qY;
            scanf("%d %d",&qX,&qY);
            if(pX==qX||pY==qY)
            {
                cout<<"divisa"<<endl;
            }else if(qX>pX){
                if(qY>pY)
                    cout<<"NE"<<endl;
                else
                    cout<<"SE"<<endl;
            }else{
                if(qY>pY)
                    cout<<"NO"<<endl;
                else
                    cout<<"SO"<<endl;
            }
        }

        scanf("%d",&n);
    }
    return 0;
}


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

        if(a>b)
            cout << ">" << endl;
        else if(a<b)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}

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
    string line;
    getline (cin,line);
    map<string, int> lovers;
    for(int i=0;i<n;i++){
        getline(cin,line);
        int firstSpace = line.find(' ');
        lovers[line.substr(0,firstSpace)]++;
    }

    map<string, int>::const_iterator iter;
    for(iter = lovers.begin();iter!=lovers.end();++iter){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }


    return 0;
}

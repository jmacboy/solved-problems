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
    register string line;

    while(getline(cin,line)){
        map<char,int> count;
        int length = line.size();
        int top = 0;
        for(int i=0;i<length;i++){
            if(isalpha(line[i])){
                count[line[i]]++;
                top = max(top,count[line[i]]);
            }
        }

        map<char,int>::const_iterator iter;
        for(iter = count.begin(); iter!=count.end(); ++iter){
            if((*iter).second==top){
                cout<<(*iter).first;
            }
        }
        printf(" %d\n", top);
    }
    return 0;
}

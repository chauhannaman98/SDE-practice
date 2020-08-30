#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void printQueue(int n)  {
    vector<char> q(n);
    int N=n;
    char c = 'a';
    while(n)  {
        int currSize = N-n;
        int pos;
        if(!currSize%2)     // even number of people
            pos = currSize/2;
        else    // odd number of people
            pos = (currSize+1)/2;
        q.insert(q.begin()+pos, c);
        ++c;
        n--;
    }
    for(int i=0; i<N-1; i++)   {
        cout<<q[i]<<" ";
    }
    cout<<q[N-1];
}

int main() {
    int n;
    cin>>n;
    printQueue(n);
    return 0;
}
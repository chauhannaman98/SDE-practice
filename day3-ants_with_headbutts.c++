#include <iostream>
using namespace std;

int countHeadbutts(int n)   {
    int count=0;
    for(int i=0; i<n; i++)
        count+=i;
    return count;
}

int main()  {
    int n;
    cin>>n;
    int headbutts = countHeadbutts(n);
    cout<<headbutts;
    return 0;
}
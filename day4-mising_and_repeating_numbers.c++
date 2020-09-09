/*
Find the missign and repeating number from an array
of numbers of size N ranging from 1 to N.
*/

#include <iostream>
#include <time.h>
using namespace std;

void printMissAndRepeat(int input[], int size)  {
    int missing, repeat;

    // initialize the frequency array
    int frequency[size+1];
    for(int i=0; i<size; i++)   {
        frequency[i]=0;
    }
    // cout<<"\nfrequency matrix: ";

    cout<<"i\tinput[i]\tfrequency[input[i]]\tfrequency[i]\n";
    for(int i=0; i<size+1; i++)   {
        cout<<i<<"\t";
        frequency[input[i]]+=1;
        cout<<input[i]<<"\t\t\t"<<frequency[input[i]]<<"\t\t\t"<<frequency[i]<<"\n";
    }

    cout<<"\nfrequency[i]\n";
    for(int i=1; i<size+1; i++) {
        cout<<frequency[i]<<endl;
        if(frequency[i]==0)  {
            cout<<"\nmissing = "<<i;
        }
        if(frequency[i]>1)  {
            cout<<"\nrepeat = "<<i;
        }
    }
}

int main()  {
    clock_t tStart = clock();
    int size, arr[size];
    cin>>size;
    for(int i=0; i<size; i++)   {
        cin>>arr[i];
    }
    printMissAndRepeat(arr, size);
    // print execution time
    printf("\n==========\nExecution time: %.10fs\n",
        (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
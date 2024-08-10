#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int cnt=0;
    while(n){
        if((n&1)==1)cnt++;
        n=n>>1;
    }
    cout<<cnt<<endl;
    return 0;
}

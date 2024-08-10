#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int R;
    cin>>R;
    if(R<1200){
        cout<<"BNB-Beginner"<<endl;
    }else if(R<2800){
        cout<<"BNB-Intermediate"<<endl;
    }else{
        cout<<"BNB-All"<<endl;
    }
    return 0;
}
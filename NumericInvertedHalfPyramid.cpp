#include <iostream>
using namespace std;

int main(){
    //enter row number
    int  n;
    cin>>n;

    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}

/*

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

*/
#include <iostream>
using namespace std;

int main(){
    for(int row=0;row<6;row++){
        //for each row star is one higher.
        for(int col=0;col<row+1;col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}


/*

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 

*/
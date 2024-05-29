#include <iostream>
using namespace std;

int main(){
    //Outer loop for rows
    for(int row=0;row<3;row++){
        //Inner loop for columns
        for(int col=0;col<5;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/* Output:-
    *****
    *****
    *****
*/
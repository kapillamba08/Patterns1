#include <iostream>
using namespace std;

int main(){
    //Outer loop for rows
    for(int row=0;row<4;row++){
        //Inner loop for columns
        for(int col=0;col<4;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/* Output:-
    * * * *
    * * * *
    * * * *
*/
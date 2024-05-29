#include <iostream>
using namespace std;

int main(){
    for(int row=0;row<6;row++){
        // first and last row have all stars.
        if(row==0 || row==5){
            for(int col=0;col<5;col++){
                cout<<"* ";
            }
        }
        else{
            // first star
            cout<<"* ";
            // spaces
            for(int col=0;col<3;col++){
                cout<<"  ";
            }
            //last star
            cout<<"* ";
        }
        cout<<endl;
    }
}

/*

* * * * * 
*       * 
*       * 
*       * 
*       * 
* * * * * 

*/
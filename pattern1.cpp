/* OBJECTIVE OF THIS CODE IS TO MAKE A PATTERN 
1
23
345
4567
56789 */
//CODE:
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no."<<endl;
    cin>>n;
//taking value for the no. of rows do you wanna make in this pattern
    int i=1; 
//defining i for rows 
    while(i<=n){
        int j=1;  
//defining j for column 
        while(j<=i){ 
//for making a half pyramidral pattern we make loop for column<= rows
            cout<<i+j-1;
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
    }
}

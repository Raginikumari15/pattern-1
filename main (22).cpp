#include <iostream>
using namespace std;        /*     1
                                   22
                                   333
                            */

int main()
{
int i =1,k; 
int n,j;
cin>>n;
while (i<=n){
    j=1;
    k=i;
    while(j<=i){
        cout<<k;
        
        j++;
    }
    cout<<endl;
    i++;
}
    
}


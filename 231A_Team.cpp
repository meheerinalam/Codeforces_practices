#include <iostream>
using namespace std;
int main() {
    int n,c1=0,p,v,t;
    cin>>n;
    while(n--){
        cin>>p;
        cin>>v;
        cin>>t;
        if(p+v+t>=2){
            c1+=1;
        }
    }
    
    cout<<c1<<endl;
    
    return 0;
}

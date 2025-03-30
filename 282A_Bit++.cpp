#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    cin>> n;
    char a,b,c;
    while(n--){
        cin>>a;
        cin>>b;
        cin>>c;
        if(b=='+'){
            count+=1;
        }
        else{
            count-=1;
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}

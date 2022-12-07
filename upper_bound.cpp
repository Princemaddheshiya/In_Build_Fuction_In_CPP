
//upper_bound 

#include<iostream>
using namespace std;
int main(){
int a[6]={1,5,6,7,8,9};
auto res=upper_bound(a,a+5,7);
 int ind=res-a;
//cout<<res<<endl;
cout<<ind<<endl;
cout<<a[ind]<<endl;
return 0;
}

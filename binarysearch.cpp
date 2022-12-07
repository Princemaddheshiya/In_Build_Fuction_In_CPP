#include<iostream>
using namespace std;
int main(){
int a[5]={1,5,6,8,9};
bool res=binary_search(a,a+5,2);
cout<<res<<endl;
return 0;
}
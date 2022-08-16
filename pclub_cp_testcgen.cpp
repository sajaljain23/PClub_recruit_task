#include<bits/stdc++.h>
using namespace std;
int main(){
// generating test cases:

 int t;   //t stands for test cases
 t = rand()%100+1;
 cout<<t<<endl;
 while(t--){
 int n, m;   //n and m for money and number of coupons
 n = rand()%50+1;
 m = rand()%10 + 1; 
 cout<<n<<" "<<m<<endl;
 set <int> st;
 while(st.size()!=m){
     st.insert(10*(rand()%10 + 1));
 }

 int arr[m];  // store m distinct value of coupons
 int j=0;
 for(auto x : st){
 arr[j] = x;
 cout<<x<<" ";
 }
cout<<endl;
}
}

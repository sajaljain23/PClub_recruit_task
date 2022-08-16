

//code for correct answer!!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
clock_t time;    
time  = clock();
while(t--){    
int n;
cin>>n;
int m;
cin>>m;
int arr[m];

for(int i=0; i<m;i++) cin>> arr[i];
int count[n+1];
count[0]=1;

for(int x=1; x<=n; x++){
    count[x]=0;
        for(auto c: arr){    
            if (x-c>=0) {
                count[x] += count[x-c];
            }
        }
}
 cout<<count[n]<<endl; 
}
// cout<<"This is the time taken to execute the code: "<<(float)time/CLOCKS_PER_SEC<<" secs";
}


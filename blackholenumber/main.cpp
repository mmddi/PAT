#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string s,s1;
int main(){
    
    cin>>s;
    while(1){
        //while(s.size()<4) s='0'+s;
        sort(s.begin(),s.end());
        s1=s;
        int a=stoi(s1);
        reverse(s.begin(),s.end());
        int b=stoi(s);
        
        int c=b-a;
        printf("%04d - %04d = %04d\n",b,a,c);
        if(c==0||c==6174) break;
        s=to_string(c);
    }
    return 0;
}

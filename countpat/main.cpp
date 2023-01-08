#include<cstdio>

#include<cstring>

const int MOD=1000000007;
const int maxn=1e5+10;

int nump[MOD]={0};

int main(){
    char str[maxn];
    int j=0;
    while(scanf("%c",&str[j])!=EOF) j++;
    //string str;
    //cin>>str;
    int len=strlen(str);
    
    for(int i=0;i<len;i++){
        if(i>0) nump[i]=nump[i-1];
        if(str[i]=='P')nump[i]++;
        
    }
    int ans=0;int numt=0;
    for(int i=len-1;i>=0;i--){
        if(str[i]=='T') numt++;
        else if(str[i]=='A') ans=(ans+numt*nump[i])%MOD;
    }
    
    printf("%d\n",ans);
    return 0;
}



#include<cstdio>
#include<queue>
using namespace std;
const int maxn=1010;

struct node{
    int data;
    node* lchild;
    node* rchild;
};

int n;
int a[maxn],b[maxn];


void insert(node* &root,int v){
    if(root==NULL){
        root=new node;
        root->data=v;
        root->lchild=root->rchild=NULL;
        return;
    }
    else if(v>=root->data) insert(root->rchild,v);
    else insert(root->lchild,v);
    return;
}
int k=0;
void pre(node* &root){
    if(root==NULL) return;
    b[k]=root->data;k++;
    if(root->lchild!=NULL) pre(root->lchild);
    if(root->rchild!=NULL) pre(root->rchild);
}
int j=0;int c[maxn];
void post(node* &root){
   
    if(root->lchild!=NULL) post(root->lchild);
    if(root->rchild!=NULL) post(root->rchild);
    c[j]=root->data;
   
    j++;
    return;
}

void swap(node* &root){
    if(root==NULL) return;
    else{
        node* temp=root->lchild;
        root->lchild=root->rchild;
        root->rchild=temp;
       swap(root->lchild);
       swap(root->rchild);
    }
}

int main(){
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    node* root=NULL;
    
    for(int i=0;i<n;i++){
        insert(root,a[i]);
    }
    
    bool f1=true,f2=true,ff1=true;
  
    pre(root);

    for(int i=0;i<n;i++){
        if(a[i]!=b[i])f1=false;
    }
  
    
    swap(root);
    
    pre(root);
    
   
    for(int i=0;i<n;i++){
        if(a[i]!=b[i+n])f2=false;
    }
    

    
    if(f1==true||f2==true){
        printf("YES\n");
        if(f1==true){
                swap(root);
                post(root);
                for(int i=0;i<n;i++){
                   if(i!=n-1)printf("%d ",c[i]);
                    else printf("%d",c[i]);
                 }
        }
        else{
             post(root);
                for(int i=0;i<n;i++){
                   if(i!=n-1)printf("%d ",c[i]);
                    else printf("%d",c[i]);
                 }
        }
    }
    
    else printf("NO\n");

    return 0;
}


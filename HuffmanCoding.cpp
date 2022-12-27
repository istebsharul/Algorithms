#include<bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    unsigned freq;
    Node* left;
    Node* right;

    // constructor
    Node(char data, unsigned freq){
        left=right=NULL;
        this->data=data;
        this->freq=freq;
    }
};


struct compare{
    bool operator()(Node* l, Node* r){
        return l->freq > r->freq;
    }
};
void codePrint(struct Node* root, string str){
    if(!root){
        return;
    }
    if(root->data!='$'){
        cout<<root->data<<" : "<<str<<endl;
    }
    codePrint(root->left, str + "0");
    codePrint(root->right, str + "1"); 
}

void huffmanCodes(char data[], int freq[],int size){
    struct Node* left,*right, *top;
    priority_queue<Node*, vector<Node*>,compare> mHeap;
    for(int i=0;i<size;i++){
        mHeap.push(new Node(data[i],freq[i]));
    }
    while(mHeap.size()!=1){
        left=mHeap.top();
        mHeap.pop();
        right=mHeap.top();
        mHeap.pop();

        top = new Node('$', left->freq+right->freq);
        top->left=left;
        top->right=right;
        mHeap.push(top);
    }
    codePrint(mHeap.top(),"");
}


int main(){
    char arr[]={'m', 'i', 's', 'p'};
    int freq[]={ 1, 4, 4, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    huffmanCodes(arr, freq,size);
    return 0;

}
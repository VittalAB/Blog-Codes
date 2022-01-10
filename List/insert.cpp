#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
typedef struct node *N;

N getnode(int x){
    N t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    return t;
}

N insert(N start,int x){
    N t,c;

    t=getnode(x);

    if(!start){
        start=t;
        return start;
    }

    c = start;

    while(c->next!=NULL){
        c=c->next;
    }
    c->next=t;
    t->next=NULL;
    return start;
}

void display(N start){
    N t;
    t=start;
    while(t!=NULL){
        cout << t->data << " ";
        t=t->next;
    }
}

int main(){
    int n;
    cin >> n;
    N start=NULL;

    cout << "Enter " << n  << " Elements \n" ;

    while(n--){
        int x;
        cin >> x;
        start = insert(start,x);
    }
    display(start);

    return 0;
}
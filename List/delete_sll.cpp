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
        start =t;
        return start;
    }
    c =start;

    while(c->next!=NULL){
        c=c->next;
    }

    c->next =t;
    return start;
}

N delete_last(N start){
    N t,p;
    t=start;
    while(t->next!=NULL){
        p = t;
        t=t->next;
    }
    delete(t);
    p->next=NULL;
    return start;
}


void display(N start){
    while(start!=NULL){
        cout << start->data << " ";
        start = start->next;
    }
}

N delete_front(N start){
    N t;
    t = start;
    start = start->next;
    delete(t);
    return start;
}

N delete_pos(N start,int pos){
    N t,p;
    int count = 1;
    t=start;
    while(t!=NULL && count!=pos){
        p =t;
        t=t->next;
        count++;
    }
    p->next = t->next;
    delete(t);
    return start;
}

int main(){
    int n;
    cin >> n;
    N start =NULL;
    while(n--)
{
    int x;
    cin >> x;
    start = insert(start,x);
}   
start = delete_last(start);
display(start);
cout << "\n";
start = delete_front(start);
display(start);

int pos;

cout << " \n Enter position \n";
cin >> pos;

start = delete_pos(start,pos);
display(start);

 return 0;
}
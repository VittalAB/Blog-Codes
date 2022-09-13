#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

typedef struct node *N;

N getnode(int x){
    N t=(struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    return t;
}

N insert(N start,int x){
    N t = getnode(x);

    if(!start){
        return t;
    }

    N c = start;

    while(c->next!=NULL){
        c=c->next;
    }

    c->next = t;
    return start;
}

void display(N start){
    N t=start;

    while(t){
        cout << t->data << endl;
        t=t->next;
    }

}

string find_length(N start){
    N fast=start;
    N slow= start;

    while(fast and fast->next){
        fast=fast->next->next;
    }
    if(!fast){
        return "even";
    }
    return "odd";
}

int main(){
    N start = NULL;

    for(int i=0;i<5;i++){
        start = insert(start, i);
    }

    display(start);


    cout << "Length is " << find_length(start) << endl;  

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    
    node(int x){
        this->data = x;
        this->next = NULL;
    }
};

typedef struct node *N;

N insert(N start,int x){
    N t = new node(x);

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

N merge(N start1, N start2){
    N tmp, s;

    if(start1->data < start2->data){
        s = start1;
        tmp = start1;
        start1=start1->next;
    }else{
        s = start2;
        tmp = start2;
        start2=start2->next;
    }

    while(start1 and start2){
        if(start1->data < start2->data){
            tmp->next = start1;
            tmp = tmp->next;
            start1=start1->next;
        }else{
            tmp->next = start2;
            tmp = tmp->next;
            start2=start2->next;
        }
    }

    if(start1){
        tmp->next = start1;
    }else{
        tmp->next = start2;
    }

    return s;
}

void display(N start){
    N t=start;

    while(t){
        cout << t->data << endl;
        t=t->next;
    }

}

int main(){
    N start1 = NULL;
    N start2 = NULL;

    start1 = new node(10);
    start1->next = new node(20);
    start1->next->next = new node(30);

    start2 = new node(15);
    start2->next = new node(25);

    cout << "Merged Linked List :- " << endl;
    
    display(merge(start1,start2));

    return 0;
}


/* This code is contributed by Vittal AB*/
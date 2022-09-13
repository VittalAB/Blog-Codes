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

int loop_length(N start){
    N fast = start;
    N slow = start;
    int cycle=0;

    while(fast and fast->next){
        fast = fast->next->next;
        slow = slow->next;

        if(fast==slow){
            cycle =  1;
            break;
        }
    }

    if(cycle){
        int c=0;
        fast=fast->next;
        c++;
        while(fast != slow){
            fast=fast->next;
            c++;
        }

        return c;
    }

    return -1;
}

int main(){
    N start = NULL;
    start = getnode(10);
    start->next = getnode(20);
    N temp = start->next;
    start->next->next = getnode(30);
    start->next->next->next = temp; 
    int ans=0;
    if(ans = loop_length(start)){
        cout << "Length of loop is :- " << ans;
    }else{
        cout << "No cycle!";
    }

    return 0;
}
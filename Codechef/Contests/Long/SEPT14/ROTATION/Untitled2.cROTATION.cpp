#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
}*head = NULL;

node* brr[100005];
int k = 0;

void insertIntoList(int data) {
    if(head == NULL) {
        node* temp = new node();
        temp->data = data;
        temp->next = temp;
        head = temp;
        brr[k] = temp;
        k++;
    }
    else {
        node* temp = new node();
        temp->data = data;
        temp->next = head;
        brr[k-1]->next = temp;
        brr[k] = temp;
        k++;
    }
}

int main() {
    char p;
    int m,n,d,x,counter,st,i,r=0;
    cin >> n >> m;
    for(i=0;i<n;i++) {
        cin >> x;
        insertIntoList(x);
    }
    while(m--) {
        cin >> p >> d;
        if(p == 'C') {
            r+=d;
            r%=n;
        }
        else
        if(p == 'A') {
            r-=d;
            r%=n;
        }
        else
        if(p == 'R') {
            if(r >= 0) {
                st = r;
                node* p = brr[st];
                counter = 1;
                while(counter != d) {
                    p = p->next;
                    counter++;
                }
                cout << p->data << endl;
            }
            else {
                st = n + r;
                node* p = brr[st];
                counter = 1;
                while(counter != d) {
                    p = p->next;
                    counter++;
                }
                cout << p->data << endl;
            }
        }
    }
    return 0;
}

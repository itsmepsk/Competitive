#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    long long int data;
    long long int owner;
    struct node *next;
    //struct node *prev;
};

node* arr[100005];

void createNode(long long int data,long long int pos) {
    node *temp;
    temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->owner = pos;
    temp->next = NULL;
    arr[pos] = temp;
}

int main() {
    long long int t,n,q,p,x,y,num,i,mini,maxi;
    cin >> t;
    while(t--) {
        cin >> n;
        for(i=1;i<=n;i++) {
            cin >> num;
            createNode(num,i);
        }
        cin >> q;
        while(q--) {
            cin >> p;
            if(p == 0) {
                cin >> x >> y;
                node *a,*b;
                a = arr[x];
                b = arr[y];
                while(a->next != NULL) {
                    a = a->next;
                }
                while(b->next != NULL) {
                    b = b->next;
                }
                if(a == b) {
                    cout << "Invalid query!" << endl;
                }
                else {
                    node *temp;
                    mini = a->data < b->data ? x : y;
                    maxi = a->data > b->data ? x : y;
                    temp = arr[mini];
                    while(temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = arr[maxi];
                }
            }
            else
            if(p == 1) {
                    node *temp;
                    cin >> x;
                    temp = arr[x];
                    while(temp->next != NULL) {
                        temp = temp->next;
                    }
                    cout << temp->owner << endl;
            }
        }
    }
    return 0;
}

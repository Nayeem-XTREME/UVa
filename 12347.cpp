#include <bits/stdc++.h>
using namespace std;

struct node {
    int val;
    struct node *LC;
    struct node *RC;
    struct node *par;
}*head, *root, *NN, *src;

void insert (struct node *add, int data)
{
    if (data > add->val) {
        if (add->RC == NULL) {
            add->RC = NN;
            NN->par = add;
        }

        else {
            add = add->RC;
            insert (add, data);
        }
    }

    else if (data < add->val) {
        if (add->LC == NULL) {
            add->LC = NN;
            NN->par = add;
        }

        else {
            add = add->LC;
            insert (add, data);
        }
    }
}

void postorder(struct node *ad)
{

    if (ad->LC != NULL)
        postorder(ad->LC);

    if (ad->RC != NULL)
        postorder(ad->RC);
        
    cout << ad->val << endl;

}

int main()
{
    int n, data;

    NN = (struct node*) malloc (sizeof(struct node));
    root = NN;
    head = NN;
    NN->LC = NULL;
    NN->RC = NULL;
    NN -> par = NULL;
    cin >> NN->val;
    
    while (cin >> n) {
        NN = (struct node*) malloc (sizeof(struct node));
        NN->val = n;
        NN->RC = NULL;
        NN->LC = NULL;
        insert(head, NN->val);
    }
    
    postorder(root);

	return 0;
}

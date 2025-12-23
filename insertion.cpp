#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
    Node(int d, Node *nxt)
    {
        data = d;
        next = nxt;
    }
};
Node *convertArr2LL(vector<int> arr)
{
    if (arr.empty())
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(Node *head)
{
    Node *mover = head;
    while (mover != nullptr)
    {
        cout << mover->data << " ";
        mover = mover->next;
    }
}
Node *insertHead(Node *&head, int val)
{
    if (head == nullptr)
        return new Node(val);
    Node *temp = new Node(val, head);
    head = temp;
    return head;
}
Node *insertTail(Node *&head, int val)
{
    if (head == nullptr)
        return new Node(val);
    Node *mover = head;
    while (mover->next != nullptr)
    {
        mover = mover->next;
    }
    Node *temp = new Node(val);
    mover->next = temp;
    return head;
}
Node *insertAtKth(Node *&head, int val, int k)
{
    
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *head = convertArr2LL(arr);
    // insertHead(head,4);
    // insertTail(head, 11);
    insertAtKth(head, 11, 11);
    printLL(head);
}
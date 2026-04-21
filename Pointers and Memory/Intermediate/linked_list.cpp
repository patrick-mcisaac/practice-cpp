/*
### 5. Implement a Linked List
Build a singly linked list with `Node* head`. Implement `insert`, `delete`, and `print` using raw pointers. Pay
attention to pointer-to-pointer (`Node**`) when modifying the head.
*/

#include <iostream>

class Node
{

  public:
    int val;
    Node *next;
    Node(int v) : val(v), next(nullptr)
    {
    }
    ~Node()
    {
    }
};

class LinkedList
{
  public:
    Node *head;
    int size;

    LinkedList() : head(nullptr), size(0)
    {
    }
    ~LinkedList()
    {
        Node *current = head;
        while (current)
        {
            Node *r = current;
            current = r->next;
            delete r;
        }
    }

    void insert(int val)
    {
        Node *node = new Node(val);
        if (head == nullptr)
        {
            head = node;
        }
        else
        {
            node->next = head;
            head = node;
        }
        size += 1;
    }

    int insert(int val, int index)
    {
        if (index > size)
        {
            return -1;
        }
        Node *node = new Node(val);
        int count = 0;
        if (head == nullptr)
        {
            head = node;
            return 0;
        }

        Node *current = head;

        while (count < index - 1)
        {
            current = current->next;
            count++;
        }
        Node *next = current->next;
        current->next = node;
        node->next = next;
        size += 1;
        return 0;
    }

    void remove(int val)
    {
        Node *current = head;
        if (current->val == val)
        {
            Node *r = current;
            head = current->next;
            delete r;
            size -= 1;
            return;
        }
        while (current->next)
        {
            if (current->next->val == val)
            {
                Node *r = current->next;
                current->next = current->next->next;
                delete r;
                size -= 1;
                return;
            }
            current = current->next;
        }
        return;
    }

    int get(int val)
    {
        Node *current = head;
        int index = 0;
        while (current)
        {
            if (current->val == val)
            {
                return index;
            }
            index++;
            current = current->next;
        }
        return -1;
    }
};

int main()
{
    LinkedList list = LinkedList();

    list.insert(1);
    list.insert(2);
    list.insert(3, 2);
    list.remove(1);
    list.get(2);
    list.get(1);
    return 0;
}
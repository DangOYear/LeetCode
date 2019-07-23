//
// Created by ShengyunYu on 2019/7/22.
//

#include "common.h"
//题目有问题
//
class Node{
public:
    int value;
    Node *next;
    Node(int x) : value(x), next(NULL) {}

};

class MyLinkedList {
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = new Node(0);
        listLength = 0;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index >= listLength || index < 0)
            return -1;
        Node* p = head;

        for (int i = 0; i <= index; ++i) {
            p = p->next;
        }
        return p->value;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* p = new Node(val);
        p->next = head->next;
        head->next = p;
        ++listLength;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* p = head;
        while (p->next) {
            p = p->next;
        }
        p->next = new Node(val);
        ++listLength;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index > listLength)
            return;
        if (index < 0) {
            addAtHead(val);
            return;
        }
        Node* p = head;
        while (index--) {
            p = p->next;
        }
        Node* q = p->next;
        Node* newNode = new Node(val);
        newNode->next = q;
        p->next = newNode;
        ++listLength;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index >= listLength || index < 0)
            return;
        Node* p = head;
        while (index--) {
            p = p->next;
        }
        p->next = p->next->next;
        --listLength;
    }

//private:
    Node* head;
    int listLength;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */


void PrintNode(Node* head) {
    while (head) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    MyLinkedList* myLinkedList = new MyLinkedList();
    myLinkedList->addAtHead(1);
    myLinkedList->addAtTail(3);
    myLinkedList->addAtIndex(1, 2);
    cout << myLinkedList->get(1) << endl;
    PrintNode(myLinkedList->head);
    myLinkedList->deleteAtIndex(1);
    PrintNode(myLinkedList->head);
    cout << myLinkedList->get(1) << endl;
//    MyLinkedList linkedList = new MyLinkedList();
//    linkedList.addAtHead(1);
//    linkedList.addAtTail(3);
//    linkedList.addAtIndex(1,2);   //链表变为1-> 2-> 3
//    linkedList.get(1);            //返回2
//    linkedList.deleteAtIndex(1);  //现在链表是1-> 3
//    linkedList.get(1);            //返回3

}
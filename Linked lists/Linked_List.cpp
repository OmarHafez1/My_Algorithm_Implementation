/* 
**
**   author:  Omar_Hafez
**   created: 12/05/2022  05:15:38 PM
**
*/
 
#include <bits/stdc++.h>
using namespace std;


template<class T>
struct Node {
  Node<T> *next;
  T data;
};

template<class T>
class Linked_List {
  private:

    Node<T> *head = NULL;
    int count = 0;

  public:

    bool is_empty() {
      return (head == NULL);
    }

    void push_front(T value) {
      Node<T> *new_node = new Node<T>;
      new_node -> data = value;
      new_node -> next = head;
      head = new_node;
      count++;
    }

    void push_back(T value) {
      Node<T> *new_node = new Node<T>;
      new_node -> data = value;
      new_node -> next = NULL;
      if(is_empty()) head = new_node;
      else {
        Node<T> *tmp = head;
        while(tmp -> next != NULL) {
          tmp = tmp -> next;
        }        
        tmp -> next = new_node;
      }
      count++;
    }

    int push_after(T value, T after) {
      if(is_empty()) return 0;
      Node<T> *tmp = head;
      while(tmp != NULL && (tmp -> data) != after) {
        tmp = tmp -> next;
      }
      if(tmp == NULL) return -1;
      Node<T> *new_node = new Node<T>;
      new_node -> data = value;
      new_node -> next = tmp -> next;
      tmp -> next = new_node;
      count++;
      return 1;
    }

    int delete_front() {
      if(is_empty()) return 0;
      if(count == 1) {
        count--;
        head = NULL;
        return 1;
      }
      head = head -> next;
      count--;
      return 1;
    }

    int delete_back() {
      if(is_empty()) return 0;
      if(count == 1) {
        count--;
        head = NULL;
        return 1;
      }
      Node<T> *tmp = head;
      while(tmp -> next -> next != NULL) tmp = tmp -> next;
      tmp -> next = NULL;
      count--;
      return 1;
    }

    int erase(int value) {
      if(is_empty()) return 0;
      int cnt = 0;
      while(!is_empty() && head -> data == value) {
        cnt++;
        delete_front();
      }
      Node<T> *tmp = head;
      while(tmp -> next != NULL) {
        if(tmp -> next -> data == value) {
          tmp -> next = tmp -> next -> next;
          cnt++;
          count--;
        } 
        else 
          tmp = tmp -> next;
      }
      if(tmp -> data == value) {
        delete_back();
        cnt++;
      }
      return cnt;
    }

    void print_values() {
      Node<T> *tmp = head;
      while(tmp != NULL) {
        cout << (tmp -> data) << " ";
        tmp = tmp -> next;
      }
      cout << endl;
    }

    int search(T value) {
      Node<T> *tmp = head;
      while(tmp != NULL) {
        if(tmp -> data == value) return value;
        tmp = tmp -> next;
      }
      return -1;
    }

    int size() {
      return count;
    }
};


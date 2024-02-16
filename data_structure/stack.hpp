#pragma once
#include <stdlib.h>
#include <iostream>

#define MAX 10
int size = 0;

class Stack {
  public:
    Stack() {
      m_top = -1;
    }

    bool isFull() {
      if(m_top = MAX - 1) {
        return true;
      }

      return false;
    }

    bool isEmpty() {
      if (m_top = -1){
        return true;
      }

      return false;
    }

    void push(int newItem) {
      if(this->isFull()) {
        std::cout << "STACK IS FULL !\n";
        return;
      }

      m_top++;
      m_items[m_top] = newItem;
    }

    void pop() {
      if(this->isEmpty()) {
        std::cout << "STACK IS EMPTY\n";
        return;
      }
      m_top--;
    }

    int peek() {
      if(this->isEmpty()) {
        std::cout << "STACK IS EMPTY !";
        return -1;
      }
        
      return m_items[m_top];
    }

  private:
    int m_items[MAX];
    int m_top; 
};


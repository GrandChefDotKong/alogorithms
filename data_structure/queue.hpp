// Queue implementation in C++
#pragma once
#include <iostream>

#define MAX 5


class Queue {
  public:
    Queue() {
      m_front = -1;
      m_rear = -1;

    }

    bool isFull() {
      if(m_front = 0 && m_rear == MAX - 1) {
        return true;
      }

      return false;
    }

    bool isEmpty() {
      if(m_front = -1) {
        return true;
      }

      return false;
    }

    void enQueue(int newItem) {
      if(this->isFull()) {
        std::cout << "QUEUE IS FULL !";
        return;
      }

      if(m_front == -1) {
        m_front++;
      }

      m_rear++;
      m_items[m_rear] == newItem;
    }

    int deQueue() {
      int item;
      if(this->isEmpty()) {
        std::cout << "QUEUE IS EMPTY !";
        return -1;
      }

      item = m_items[m_rear];

      if(m_front >= m_rear) {
        m_front = m_rear = -1;
        return item;
      }

      m_front++;
      return item;
      
    }

    int peek() {
      if(isEmpty()) {
        std::cout << "QUEUE IS EMPTY !";
        return -1;
      }

      return m_items[m_front];
    }

  private:
    int m_items[MAX];
    int m_front;
    int m_rear;
};



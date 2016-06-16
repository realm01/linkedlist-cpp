/*
* Created by: Anastassios Martakos
*
* Copyright 2016 Anastassios Martakos
*
* This program is free software: you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*/

#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

template <typename T>
class LinkedList {
  private:
    class Node {
      friend class LinkedList;
      private:
        T item;
        Node* next_item;
      public:
        Node(const T& item);
        ~Node(void);
    };
    void push_to_pos(const unsigned int& i, const T& item);
    Node* first;
    unsigned int size;
  public:
    LinkedList(void);
    ~LinkedList(void);
    void add(const T& item);
    void addh(const T& item);
    void addb(const unsigned int& i, const T& item);
    T del(const unsigned int& i);
    unsigned int length(void);
    T get(const unsigned int& i);
};

#include "linkedlist.cpp"

#endif

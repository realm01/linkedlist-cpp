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

template <typename T>
LinkedList<T>::LinkedList(void) {
  size = 0;
}

template <typename T>
LinkedList<T>::~LinkedList(void) {
  if(size != 0) {
    Node* next_pos = first;
    Node* curr_pos = next_pos;


    for(unsigned int i = 0; i < size; i++) {
      next_pos = curr_pos->next_item;
      delete(curr_pos);
      curr_pos = next_pos;
    }
  }
}

template <typename T>
void LinkedList<T>::add(const T& item) {
  push_to_pos(size, item);
}

template <typename T>
void LinkedList<T>::addh(const T& item) {
  push_to_pos(0, item);
}

template <typename T>
void LinkedList<T>::addb(const unsigned int& i, const T& item) {
  push_to_pos(i, item);
}

template <typename T>
T LinkedList<T>::del(const unsigned int& i){
  if(i >= size)
    throw "Segmentation Fault";

  T return_val;

  if(i == 0) {
    return_val = first->item;
    first = first->next_item;
  }else{
    Node* curr_pos = first;
    Node* prev;

    for(unsigned int iter = 0; iter < i; iter++) {
      if(iter == i - 1) {
        prev = curr_pos;
      }
      curr_pos = curr_pos->next_item;
    }

    return_val = curr_pos->item;
    prev->next_item = curr_pos->next_item;
  }

  size--;

  return return_val;
}

template <typename T>
unsigned int LinkedList<T>::length(void) {
  return size;
}

template <typename T>
void LinkedList<T>::push_to_pos(const unsigned int& i, const T& item) {
  if(i > size)
    throw "Segmentation Fault";

  if(i == 0) {
    Node* curr_first = first;
    first = new Node(item);
    first->next_item = curr_first;
  }else{
    Node* curr_pos = first;
    Node* prev;

    for(unsigned int iter = 0; iter < i; iter++) {
      if(iter == i - 1) {
        prev = curr_pos;
      }
      curr_pos = curr_pos->next_item;
    }

    Node* tmp_item = curr_pos;
    curr_pos = new Node(item);
    curr_pos->next_item = tmp_item;
    prev->next_item = curr_pos;
  }

  size++;
}

template <typename T>
T LinkedList<T>::get(const unsigned int& i) {
  if(i >= size)
    throw "Segmentation Fault";

  Node* curr_pos = first;

  for(unsigned int iter = 0; iter < i; iter++) {
    curr_pos = curr_pos->next_item;
  }

  return curr_pos->item;
}

template <typename T>
LinkedList<T>::Node::Node(const T& item) {
  this->item = item;
}

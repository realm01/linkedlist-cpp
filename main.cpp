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

#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {
  LinkedList<int> ll;

  ll.add(2);
  ll.add(4);

  cout << ll.get(0) << endl;
  cout << ll.get(1) << endl;

  ll.addh(8);

  cout << "========" << endl;
  cout << ll.get(0) << endl;
  cout << ll.get(1) << endl;
  cout << ll.get(2) << endl;

  ll.addb(1, 10);

  cout << "========" << endl;
  cout << ll.get(0) << endl;
  cout << ll.get(1) << endl;
  cout << ll.get(2) << endl;
  cout << ll.get(3) << endl;

  ll.del(0);

  cout << "========" << endl;
  cout << ll.get(0) << endl;
  cout << ll.get(1) << endl;
  cout << ll.get(2) << endl;

  ll.del(1);

  cout << "========" << endl;
  cout << ll.get(0) << endl;
  cout << ll.get(1) << endl;

  cout << "length: " << ll.length() << endl;

  return 0;
}

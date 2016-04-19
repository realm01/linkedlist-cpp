LinkedList
==========
This is a implementation of a singly linked list in c++.

Methods
-------
```c++
#include <linkedlist.h>

LinkedList<TYPE> ll;

ll.add([TYPE]);              // add at the end of list
ll.addh([TYPE]);             // add at beginning of list
ll.addb([pos], [TYPE]);      // add at a specific position in the list

ll.del([pos]);              // delete element at specific position

unsigned int len = ll.length();
TYPE var = ll.get([pos]);   // get element at a specific position
```

Compile
-------
In your `main.cpp` you only have to include `linkedlist.h`, `linkedlist.cpp` is
included in this file. (because of the nature of templates)
```sh
$ g++ -Wall -O3 main.cpp
```

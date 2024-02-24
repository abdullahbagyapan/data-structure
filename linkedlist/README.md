# Linked List

A linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next node. It is a data structure consisting of a **collection of nodes** which together represent a sequence.

<p align="center">
    <img src="image/linkedlist.png">
</p>

## Node

A **node** is a basic unit of a data structure, such as a linked list or tree data structure. Nodes contain data and also may link to other nodes. Links between nodes are often implemented by pointers.

## Efficiency

Linked lists are among the simplest and most common data structures. They can be used to implement several other common abstract data types.

The principal benefit of a linked list over a conventional array is that the list elements can be easily **inserted or removed** without reallocation or reorganization of the entire structure because the data items do not need to be stored contiguously in memory or on disk, while restructuring an array at run-time is a much more expensive operation. Linked lists allow insertion and removal of nodes at any point in the list, and allow doing so with a constant number of operations.

On the other hand, since simple linked lists by themselves do not allow random access to the data or any form of efficient indexing, many basic operations may require iterating through most or all of the list elements.

## Tradeoffs

- Insertion or deletion of an element at a specific point of a list, assuming that we have indexed a pointer to the node already, is a constant-time operation (O(n)).
- Dynamic arrays (as well as fixed-size array data structures) allow constant-time random access, while linked lists allow only sequential access to elements.
- Linked lists needs extra storage for the references, which often makes them impractical for lists of small data items such as characters or Boolean values.

*Further reading: [Linked List](https://en.wikipedia.org/wiki/Linked_list)*

## Implementation

### Java

```java
LinkedList<String> names;
```

### C

```c
typedef struct Node{
    int value;
    struct Node* next;
    struct Node* previous;
}Node;
```

# Array

In computer science, an **array** is a data structure consisting of a collection of elements (values or variables), of same memory size, each identified by at least one array index or key. An array is stored such that the position of each element can be computed from its index by a mathematical formula. The simplest type of data structure is a linear array, also called one-dimensional array.

For example, an array of ten 32-bit (4-byte) integer variables, with indices 0 through 9, may be stored as ten words at memory addresses 2000, 2004, 2008, ..., 2036 (in hexadecimal: `0x7D0`, `0x7D4`, `0x7D8`, ..., `0x7F4`) so that the element with index *i* has the address `2000 + (i × 4)`. The memory address of the first element of an array is called first address, foundation address, or base address.

Arrays are among the oldest and most important data structures, and are used by almost every program. They are also used to implement many other data structures, such as *lists* and *strings*.

## Resizing

Static arrays have a size that is fixed when they are created and consequently do not allow elements to be inserted or removed. However, by allocating a new array and copying the contents of the old array to it, it is possible to effectively implement a **dynamic version** of an array. If this operation is done infrequently, insertions at the end of the array require only **amortized constant time**. 

## Efficiency

Both *store* and *select* take (deterministic worst case) constant time. Arrays take linear `O(n)` space in the number of elements n that they hold. 

## Implementation

Many languages support array.

### Java

```java
String[] names;
```

### C

```c
names int[2];
```

### Go

```go
var names []int

//or 

names := make([]int,2)
```
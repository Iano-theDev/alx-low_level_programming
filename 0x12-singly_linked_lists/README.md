# DSA: SINGLY LINKED LISTS

 * linked lists are a linear data structure that is used to sore data
 * A linked list structure may have two or more members:
   ** singly linked list struct has 2 members
      1. A data member - used to hold data for that node
      2. A pointer member - holds the address of the next node
 * Singly linked list have 3 parts,
   1. A head - which is where the linked list starts,
       basically a pointer to the first node of the linked list
   2. A node - which has a data & pointer to the next node
   3. A tail - the end of the linked list, the pointer to next here
      	points to NULL, indicating the end.
* Data in linked list thus is not stored in contiguous memory adresses
  hence its dynamic.
* This makes transactions like Insertion and deletion less expensive
  compared to arrays.

...
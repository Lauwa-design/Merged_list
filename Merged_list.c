Design an algorithm to merge two sorted lists that are passed as parameters, and return one merged sorted list. Derive a recurrence relation for this algorithm. Estimate time and space complexities for the same algorithm.

 Having two sorted lists 
• list_I  
• list_2 

Pseudocode Algorithm 
Initialize pointers i, j, and k to 0.
While both list_1 and list_2 have unprocessed elements:
Compare the current elements.
Append the smaller element to the merged list.
Increment the corresponding pointer (i or j).
While the list_1  has unprocessed elements:
Append the remaining elements to the merged list.
While the list_2 has unprocessed elements:
Append the remaining elements to the merged list.
Return the merged list.


Implementation of algorithm
void mergeSortedLists(int list_1[ ], int size1, int list_2[ ], int size2, int merged[ ]) {
int i = 0, j = 0, k = 0;
while (i < size1 && j < size2) {
        if (list_1[i] < list_2[j]) {
            merged[k++] = list_1[i++];
        } else {
            merged[k++] = list_2[j++];
        }
    }


// incase one  of the lists is now empty
while (i < size1) {
        merged[k++] = list_1[i++];
    }

      while (j < size2) {
       merged[k++] = list_2[j++];
    }



return merged;

Recurrence relation 
 Express time complexity of an algorithm in terms of smaller units 
 In our case comparing elements - constant time i unit time 
 Let's say total number of elements in 
List1 is k
List2 is l
Comparisons = k+l

Recurrence relation for time complexity 
if element picked from list1

T(k,l)=T(k-1, l) +O(1).     i.e list1[i]<list2[j]

Otherwise 
T(k,l)=T(k, l-1) +O(1).     i.e list2[j]<list1[i]

When one list becomes empty 
Case(list1 )  -->   O(l)
Case(list2)  -->   O(k)

Recurrence relation 

                 O(1) +T(k-1).     If k>0 and l>0  (list1[i]<list2[j])
                 O(1) +T(l-1).     If k>0 and l>0  (list2[j]<list1[i])
T(n,m)={   O(l)                      If k=0
                 O(k)                     If l=0
                 O(1)                      If k=0 and n=0

Consider case 2 ( time complexity)

T(k+l)=T(k+ l-1) +1
Substitution 
T(k+l)=T(k+ l -1) +1
T(k+l)=T(k+ l - 2) +1 + 1
T(k+l)=T(k+ l - 3) +1 + 1+ 1
T(k+l) =T(k + l - r) + r


Considering termination point 
k + l =0;  algorithms takes (k+l) steps to terminate
Therefore;    T(k,l) = T(k+l)

Space complexity 
=Size of new list 
I.e O(n + m)


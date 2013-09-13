= Valuable Questions =

- find max K num
maintain a K-max heap，每次比较当前的数和heap顶的数。
- find the Kth to Mth (0<K<=M<=N) largest num
- Page Rank, find K pages with max rank
- 求与query最相关的K的网页

- find the closest/farthest pair of points

- given the sum of two numbers, find them in an array A[N]
对A[N]进行排序，从i=0和j=N-1两头分别开始遍历，直至A[i]+A[j]=sum为止
O( N log N )

- 给定N和集合S，求S中和最接近N的子集

- find the subarray in A[N] which has the max sum

- find the subarray in A[M][N] which has the max sum

- find最长递增subarray

- 分割A[2n]为A1[n] A2[n]，使两个subarray的和最接近

- calculate the similarity of two strings
one operation: replace/insert/delete a char
distance: operation num to make them the same
similarity: 1/distance

- rebuild binary tree:
```
struct Node
{
Node* pLeft;
Node *pRight;
char chValue;
}
void rebuild(char *pPreOrder, char *pInOrder, int nTreeLen, Node** pRoot);
```

- the max distance between two nodes in a binary tree



Problem Statement
Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1
3
Explanation Of Sample Input 1:
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
Sample Input 2:
2
6 
5 1 2 3 4 2  
9
8 7 2 5 4 7 1 3 6
Sample Output 2:
2
7
  
 --------------------------------------
  
  ## my approach
  int findDuplicate(vector<int> &arr) 
{
int ans=0;
    //xor all elements
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    //XOR[1,n-1]
    for(int i=1;i<arr,size();i++)
    {
        ans=ans^i;
    }    
    return ans;
}

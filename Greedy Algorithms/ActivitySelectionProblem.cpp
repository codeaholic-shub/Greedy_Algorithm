/*

I/p :- { (3,8) , (2,4) , (1,3) , (10,11) }
O/p :- 3

1) Sort According to Finish Time  - O(nlogn)
2) Initialize solution to first activity
3) Do following running activities
   -> If Current activity overlaps with the last picked activity in the solution,
   ignore the current activity - O(n-1)

   -> Else add the current activity to the solution

   Time Complexity - O(nlogn)
   
*/


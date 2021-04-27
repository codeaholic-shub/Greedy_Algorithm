/*
I/p:-

Weights :- 50 20 30
Values :- 600 500 300
Knapsack Capacity :- 70

O/p:-

1140


I/p :- 
Weights :- 10 5 20
Values :- 200 50 100
Knapsack Capacity :- 15


O/p:-

250



Procedure:-
1) Calculate ratio ( value/ weight )for every item
2) Sort all items in descending order
3) Do every following item in sorted order
-> Else if( I.weight<= curr_cap){
    curr_cap -= I.weight;
    res+= I.value;
}
-> Else{
    res+= (I.value)*( curr_cap/I.weight );
    return res;
}
4) return res



Time Complexity :- O(nlogn)
*/


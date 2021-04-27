/*
Rules For Job Sequencing :-

1) One Unit by every Job
2) Only one job can be assigned at a time
3) Time Starts with 0

I/p:-
Deadline :- 4 1 1 1
Profit :-   70 80 30 100

O/p:-
170

I/p:-
Deadline :- 2 2 3 3
Profit :- 50 60 20 30

O/p:-
140


I/p:-
Deadline :- 2 1 2 1 3
Profit :- 100 50 10 20 30 

O/p:-
180

Procedure:-

1) Sort Jobs in Decreasing Order of Profit
2) Initialize the result as first job in the sorted list. Assign the latest possible slot
3) Do following for the remaining (n-1) jobs
 -> If their job can not added, ignore it
 -> Else add it to the latest possible slot

 
*/
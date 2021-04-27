/* 
Consider infinite supply of the following values of coins

10 5 2 1 

if someone asks for an amount, how will you give the amount using minimum coins ?

Amount :- 52

Take 5 coins of 10 Rs
Take 1 coins of 2 Rs 

*/


/*


amount = 57
coins = {5,10,2,1}

After sorting 
coins = {10,5,2,1}

res = 0
i=0 : res=5 

i=0 : res=5 , amount = 7
i=1 : res=6 , amount = 2
i=2 : res=7 , amount = 0


*/

/* 

int mincoins(int coins[],int n,int amount){

    1) sort coins in descending order 
    2) int res = 0
    3) for(int i=0;i<n;i++){
        if(coin[i] <= amount){
            int c = floor(amount/coin[i]);
            res=res+c;
            amoount = amount - c*coin[i];
        }
        if( amount==0 )
        break;
    }
    return res;
}

*/


/*

General Structure

getOptimal( Item arr[],int n)

1) Intitialize : res = 0
2) While( All items are not considered )
{
    i= Selectanitem();
    if(feasible(i))
    res+=i;
}
3) Return res

*/

/*

Applications of Greedy ALgorithm :-
1) Finding Optimal Solutions 
   -> Activity Selection
   -> Fractional Knapsnack
   -> Job Sequencing
   -> Prism's Algorithm
   -> Kruskal's Algorithm
   -> Dijiksetra Algorithm
   -> Huffman Coding

2) Find Close to Optimal Solutions for NP Hard Problems like Travelling Salesman Problem.

*/


#include<bits/stdc++.h>
using namespace std;
int minCoins(int coin[],int n,int amount){
    sort(coin,coin+n);
    int res=0;
    for(int i=n-1;i>=0;i--){
        if(coin[i]<=amount){
            int c=floor(amount/coin[i]);
            res=res+c;
            amount=amount - c*coin[i];
        }
        if(amount==0)
        break;
    }
    return res;
}
int main(){
    int coin[] = { 5,10,2,1 },n=4,amount=57;
    cout<<minCoins(coin,n,amount);
}
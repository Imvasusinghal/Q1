#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int knapsack(int w,int wt[], int val[], int n){
    if (w==0 || n==-1){
        return 0;
    }
    if (wt[n-1]> w){
        return knapsack(w,wt,val,n-1);
    }
    else{
        return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
    }
}

int main(){
int arr[100][100];


return 0;
}
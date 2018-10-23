//this a basic program for Finding the longest increasing sunsequence in the sequence of given number.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int arr[] = {10,22,9,33,21,50,41,60,80};
    int a[9];
    for(int i=0;i<9;i++){
        a[i]=1;
    }//Dynamically add data or length to the array a so that each index stores the number or length till that sequence ends,
    // and finally wo get length of the longest sequence
    for(int i=1;i<9;i++){
            a[i]=1;
        for(int j=0;j<9;j++){
            if(arr[i]>arr[j] && a[i]<(1+a[j]))//the condition checks that if the current element as mentioned by the ith index is greater than the previouse all elements and then checking,
                a[i]=1+a[j];                                //whether its value is greater than the prevoius value in the a array.  
                
        }
    }
    //To find the maximum length fron the array a[]
    int max=a[0];
    for(int i=1;i<9;i++){
        if(max<a[i])
            max=a[i];
    }
    cout << max;
}

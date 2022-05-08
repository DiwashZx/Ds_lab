#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 

void linearCongruentialMethod(
    int Xo, int m, int a, int c,
    vector<int>& randomNums,
    int noOfRandomNums)
{
 
   
    randomNums[0] = Xo;
 
   
    for (int i = 1; i < noOfRandomNums; i++) {
     
        randomNums[i]
            = ((randomNums[i - 1] * a) + c) % m;
    }
}
 

int main()
{
    int Xo = 5; 
    int m = 7; 
    int a = 3; 
    int c = 3; 

    int noOfRandomNums = 10;
 
   
    vector<int> randomNums(
        noOfRandomNums);
 
    linearCongruentialMethod(
        Xo, m, a, c,
        randomNums, noOfRandomNums);
 
    for (int i = 0; i < noOfRandomNums; i++) {
        cout << randomNums[i] << " ";
    }
 
    return 0;
}

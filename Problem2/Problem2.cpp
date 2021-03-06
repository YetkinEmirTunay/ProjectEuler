#include <iostream>

/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

using namespace std;

int calculateFibNum(int input){
    if (input == 1){
        return 1;
    }
    else if ( input == 2){
        return 2;
    }
    else {
        return calculateFibNum(input-1) + calculateFibNum(input-2);
    }
}

int main(){
    //cout << calculateFibNum(4) << endl;
    int limit = 4000000;
    int sum = 0;
    int calculatedNum = 1 ;
    for( int i = 1 ; calculatedNum < limit ; i++){
        if ( calculatedNum % 2 == 0){
            sum += calculatedNum;
        }
        calculatedNum = calculateFibNum(i+1);
    }
    cout << sum << endl ;
}
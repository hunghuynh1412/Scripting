#include <iostream>

using namespace std;

int recursion(int number){
    if (number == 0){
        return 0;
    }
    cout << "print number: " << number << '\n';
    recursion(number -1);
    
    
    return 1;


}

int swapDisc(char sourse, char dest, int numberDisc){
    cout << "Move disc number "<< numberDisc << " from " << sourse << " to " << dest << endl;
    
    return 0;
}
int HNTower(char A, char B, char C, int numberDisc){

    if (numberDisc <= 1){
        swapDisc(A, C, 1);
        return 0;
    }
    HNTower(A, C, B, numberDisc-1);
    //swapDisc(A, C, numberDisc);
    HNTower(B, A, C, numberDisc-1);

    return 0;
}
int number = 1;
int sum(int n){
    if (n == 1){
        return number;
    }
    number = number + 2;
    cout << "number temp: " << number << endl;
    sum(n -1);
    return number;
}
int main(){
    
    // cout << "hello World";
    // recursion(5);
    char A = 'A';
    char B = 'B';
    char C = 'C';
    int numberDisc = 3;
    // HNTower(A,B,C,numberDisc);

    int temp = sum(3);
    cout << "my multiple number: " << temp << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    // int sum = 0;
    // for(int i = 1; i <= 10; i++){
    //     cout << "Printed " << i << endl;
    //     sum = sum + i;
    // }
    // cout << "Sum is : " << sum << endl;
    for(int i = 2; i <= 100; i=i+2){
        cout << i;
    }
    cout << endl;

    for(int i = 1; i <= 100; i=i*2){
        cout << i;       
    }
    cout << endl;

    for(int i = 0; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            cout << "(" << i << "," << j << ")";
        }
        cout << endl;
    }


    for(int i = 0; i <= 5; i++){
        for(int j = 0; j <= i; j++){
            cout << "(" << i << "," << j << ")";
        }
        cout << endl;
    }
     for(int i = 0; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            cout << "(" << i << "," << j << ")";
        }
        cout << endl;
    }

    for(int i = 0; i <= 5; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
     for(int i = 0; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 2; i <= 100; i += 2){
        cout << i << " ";
    }
    cout << endl;
    for(int i = 1; i <= 10; i++){
        cout << "19 * " << i << " = " << 19*i << endl;
    }

    for(int i = 0; i <= 10; i++){
        cout << i << " Aniruddh" << endl;
    }

    return 0;
}
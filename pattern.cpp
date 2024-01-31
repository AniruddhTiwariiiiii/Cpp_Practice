#include <iostream>
using namespace std;

int main(){
    //Square
    // for(int i = 0; i <= 3; i++){
    //     for(int j = 0; j <= 3; j++){
    //         cout << " * " ;
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    //Rectangle
    // for(int i = 0; i <= 2; i++){
    //     for(int j = 0; j <= 5; j++){
    //         cout << " * " ;
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    //Hollow Rectangle
    // for(int row = 0; row <= 4; row++){
    //     for(int col = 0; col <= 6; col++){
    //         if(row==0 || row==4){
    //             cout << " * " ;
    //         }
    //         else{
    //             if(col==0 || col==6){
    //                 cout << " * ";
    //             }
    //             else{
    //                 cout << "   " ;
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // for(int row = 0; row <= 4; row++){
    //     for(int col = 0; col <= 6; col++){
    //         if(row==0 || row==4){
    //             cout << " * " ;
    //         }
    //         else if(col == 0 || col==6){
    //             cout << " * ";
    //         }
    //         else{
    //             cout << "   ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //Half-Pyramid
    // for(int row = 0; row <= 4; row++){
    //     for(int col = 0; col <= row; col++){
    //         cout << " * " ;
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //Hollow-Pyramid
    // int n;
    // cout << "Enter the value of n : " ;
    // cin >> n;
    // for(int row = 0; row <= n; row++){
    //     for(int col = 0; col <= row; col++){
    //         if(row==n || col==0){
    //             cout << "*";
    //         }
    //         else{
    //             if(col==row){
    //                 cout << "*";
    //             }
    //             else{
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //Reverse-Hollow-Pyramid
    // int n;
    // cout << "Enter the value of n : " ;
    // cin >> n;
    // for(int row = 0; row <= n; row++){
    //     for(int col = n; col >= row; col--){
    //         if(row==0 || col==n){
    //             cout << "*";
    //         }
    //         else{
    //             if(col==row){
    //                 cout << "*";
    //             }
    //             else{
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    //Reverse-Hollow-Pyramid
    // for(int row = 0; row <= 5; row++){
    //     for(int col = 5; col >= row; col--){
    //         if(row==0 || col==5){
    //             cout << "*";
    //         }
    //         else{
    //             if(col==row){
    //                 cout << "*";
    //             }
    //             else{
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // cout << endl;
    // // //Numerical-half-Pyramid
    // // for(int row = 1; row <= 5; row++){
    // //     for(int col = 1; col <= row; col++){
    // //         cout << col;
    // //     }
    // //     cout << endl;
    // // }

    // // cout << endl;

    // //Inverted-Numeric-Half-pyramid
    // for(int row = 1; row <= 5; row++){
    //     for(int col = 5; col >= row; col--){
    //         cout << 6-col;
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    //Inverse-reverse-hollow-half-pyramid
    // for(int row = 0; row <= 5; row++){
    //     for(int col = 0; col <= 5; col++){
    //         if(row==0 || col==5){
    //             cout << "*";
    //         }
    //         else if(row==col){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //Inverse-reverse-hollow-half-pyramid
    // for(int row = 0; row <= 5; row++){
    //     for(int col = 0; col <= 5; col++){
    //         if(row==0 || col==0){
    //             cout << "*";
    //         }
    //         else if(col==5-row){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // //Hollow-Square-With-Diadonals
    // for(int row = 0; row <= 10; row++){
    //     for(int col = 0; col <= 10; col++){
    //         if(row==0 || row==10 || col==0 || col==10 || row==col || col==10-row){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }

    //     }
    //     cout << endl;
    // }

    // cout << endl;
    
    // //Full-Pyramid
    // int n;
    // cout << "Enter the value of n : " ;
    // cin >> n;
    // for(int row = 0; row < n; row++){
    //     for(int col = 0; col < (2*n-1); col++){
    //         if(col < n-row-1){
    //             cout << " ";
    //         }
    //         else if(col > n+row-1){
    //             cout << " ";
    //         }
    //         else{
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    // //Hollow-Full-Pyramid
    // int num;
    // cout << "Enter the value of num : " ;
    // cin >> num;
    // for(int row = 0; row < num; row++){
    //     for(int col = 0; col < (2*num-1); col++){
    //         if(col == num-row-1){
    //             cout << "*";
    //         }
    //         else if(col == num+row-1){
    //             cout << "*";
    //         }
    //         else if(row == num-1){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    // int a;
    // cout << "Enter the value of a : " ;
    // cin >> a;
    // for(int row = 0; row < a; row++){
    //     for(int col = 0; col < (2*a-1); col++){
    //         if(col<=row || col >= (2*a-row-2)){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //Butterfly-Pattern
    // int a;
    // cout << "Enter the value of a : ";
    // cin >> a;
    // for (int row = 0; row < a; row++) {
    //     for (int col = 0; col < (2 * a - 1); col++) {
    //     if (col <= row || col >= (2 * a - row - 2)) {
    //         cout << "*";
    //     } else {
    //         cout << " ";
    //     }
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < a; row++) {
    //     for (int col = 0; col < (2 * a - 1); col++) {
    //     if (col < a - row - 1) {
    //         cout << "*";
    //     } else if (col > a + row - 1) {
    //         cout << "*";
    //     } else {
    //         cout << " ";
    //     }
    //     }
    //     cout << endl;
    // }

    // //Diamond-Pattern
    // int a = 5;
    // for (int row = 0; row < a; row++) {
    // for (int col = 0; col < (2 * a - 1); col++) {
    //   if (col < a - row - 1) {
    //     cout << " ";
    //   } else if (col > a + row - 1) {
    //     cout << " ";
    //   } else {
    //     cout << "*";
    //   }
    // }
    // cout << endl;
    // }
    // for (int row = 0; row < a; row++) {
    //     for (int col = 0; col < (2 * a - 1); col++) {
    //     if (col <= row || col >= (2 * a - row - 2)) {
    //         cout << " ";
    //     } else {
    //         cout << "*";
    //     }
    //     }
    //     cout << endl;
    // }

    //Hollow-Diamond-pattern
    // int a;
    // cout << "Enter the value of a : ";
    // cin >> a;
    // for (int row = 0; row < a; row++) {
    //     for (int col = 0; col < (2 * a - 1); col++) {
    //     if (col == (a - row - 1) || col == (a + row - 1)) {
    //         cout << "*";
    //     } else {
    //         cout << " ";
    //     }
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < a; row++) {
    //     for (int col = 0; col < (2 * a - 1); col++) {
    //     if (col == row || col == (2 * a - row - 2)) {
    //         cout << "*";
    //     } else {
    //         cout << " ";
    //     }
    //     }
    //     cout << endl;
    // }

    //V-pattern
    // int a;
    // cout << "Enter the value of a : ";
    // cin >> a;
    // for (int row = 0; row < a; row++) {
    //     for (int col = 0; col < (2 * a - 1); col++) {
    //     if (col == row || col == (2 * a - row - 2)) {
    //         cout << "*";
    //     } else {
    //         cout << " ";
    //     }
    //     }
    //     cout << endl;
    // }

    cout << endl;

    for(int row = 1; row <= 8; row++){
        for(int col = 1; col <= (2*row-1); col++){

            // cout << row;
            if(col % 2 == 1){
                cout << row;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
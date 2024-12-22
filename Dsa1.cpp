#include <iostream>
using namespace std;
int main()
{
    // cout<<"hello world";
    // char ch;
    // cin >> ch;
    // cout <<"here: "<< ch <<endl;
    // int marks;
    // cout<< "Enter the marks here :"<< endl;
    // // take input from user
    // cin >> marks;

    // cout << "printing the marks: " << marks <<endl;
    // int age = 101;
    // int car = 12;
    // if(age >= 18 || car >=1){
    //     cout << "Licence miljaiga " << endl;
    // }
    // cout << !age << endl;

    // int a = 3;
    // int b = 10;
    // cout << (a == b) << endl;

    // int a = 3;
    // int b = 2;
    // cout << a + b << endl;
    // cout << a - b << endl;
    // cout << a * b << endl;
    // cout << b % a << endl; --doubt

    // int num;
    // // produces random values - garbage values
    // cout << num;

    // int num;
    // num = 12;
    // cout << num << endl;

    // int ->4 byte;
    // int num = 50;
    // cout << num << endl;
    // cout << sizeof(num) <<endl;

    // // charecter -> 1 byte
    // char ch = 'j';
    // // cout << ch << endl;
    // cout << sizeof(ch) << endl;

    // float
    // float point = 1.68;
    // cout << point << endl;

    // long
    // long number = 23;
    // cout << number << endl;
    // cout << sizeof(number) <<endl;

    // cout << "Ayush " << endl <<"Atindra "<<'\n';

    // int num = 8;
    // if(num % 2 == 0){
    //     cout <<"Number is Even " << endl;
    // }
    // else{
    // cout <<"Number is odd "<< endl;
    // }
    // int num = 56;
    // if(num > 0){
    //     cout<<"positive number " <<endl;

    // }
    // else if(num ==0){
    //     cout << "Number is Zero "<<endl;
    // }
    // else{
    //     cout<<"negative number " <<endl;
    // }

    // int i =1;
    // for(;;){
    //     cout << "Value of i is :" << i << endl;
    //     i=i+1;
    //     if(i < 5){
    //         cout <<"Ayush "<< endl;
    //     }
    //     else{
    //         break;
    //     }

    // cout <<"Hi Ayush how do you do ?" <<endl;

    // // understanding loop in programming
    // for(int i =0; i<3 ;i++){
    //     cout << endl <<"Outer loop " << i << endl << endl;

    //     for(int j=0 ;j<3; j++){
    //         cout << "Inner loop " << j << endl;
    //     }

    // }

    // for(int i=0; i<5 ;i++){
    //     cout << "Ayush" <<" ";
    // }
    // cout << endl;

    // for(int i=10; i>=0 ; i=i-3){
    //     cout << i << endl;
    // }

    // for (int i = 2; i < 10; i++)
    // {
    //     cout << i <<endl;
    // }

    // for(int i = 10 ;i <=12; i++){
    //     cout <<"Ayush is Printing his name "<< i <<" times " << endl;
    // }

    // int num = 3;
    // if( num % 2 == 0){
    //     cout << "Even is the number " << endl;
    // }
    // else{
    //     cout << "Odd is the number " << endl;
    // }

    // int marks;
    // cout << "Enter the marks here :" << endl;
    // // taking the input from user
    // cin >> marks;

    // cout << "Printing marks :" << marks << endl;

    // int age =23;
    // int car = 14;

    // if (age >= 18 || car >=1){
    //     cout <<"Licence issued " << endl;
    // }
    // else{
    //     cout<<"Better luck nest time "<< endl;
    // }

    // cout << ! (age) << endl; // why zero

    // int a = 34;
    // int b = 78;

    // cout << (a == b) <<endl;

    // int a = 3;
    // int b = 6;

    // // operators understanding
    // cout << a + b << endl;
    // cout << a - b << endl;
    // cout << a * b << endl;
    // cout << a / b << endl;
    // cout << a % b << endl;
    // cout << b % a << endl;

    // print the pattern
    //  for n = 7
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7
    // int n;
    // cin >> n;
    // for( int row = 0; row < n ; row= row+1 ){
    //     for( int col =0; col< n; col= col+1){
    //         cout << col + 1 << " ";

    //     }
    //     cout << endl;
    // }
    // ques print the pattern
    //    n = 8
    // * * * * * * * *
    // * * * * * * *
    // * * * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // int n;
    // cin >> n;
    // for( int row =0 ;row < n ; row = row+1){
    //     for( int col =0 ;col < n - row ;col = col + 1 ){
    //         cout <<"* ";
    //     }
    //     cout << endl;
    // }

    //     print the pattern
    //     6
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * * * *

    //    int n;
    //    cin >> n;
    //    for(int row =0 ; row < n ; row = row +1){
    //     for(int col = 0 ; col <row +1 ; col = col+1 ){
    //         cout<<"* ";
    //     }
    //     cout << endl;
    //    }

    // int row = 10;
    // int col = 7;

    // // outer loop
    // for(int  Row = 0 ;Row <row ;Row = Row +1){
    //     // inner loop
    //     for(int Col = 0 ; Col <col ; Col =Col+1){
    //         // if zero or last row , then print star(*)
    //         if(row == 0 || Row == row-1){
    //                 cout <<"* ";
    //         }
    //         else{
    //             if(Col == 0 || Col == col -1 ){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout <<" ";
    //             }
    //         }

    //     }
    //     cout<< endl;
    // }

    // print the pattern
    // * * * * * * *
    // *           *
    // *           *
    // *           *
    // *           *
    // *           *
    // *           *
    // *           *
    // *           *
    // * * * * * * *
    // int ROWS = 10;
    // int COLS = 7;
    // //outer loop
    // for(int row=0; row<ROWS; row=row+1 ) {
    // 	//inner loop
    // 	for(int col=0; col<COLS; col=col+1) {
    // 		//if zeroth or last row, then print star
    // 		if(row == 0 || row == ROWS-1) {
    // 			cout << "* ";
    // 		}
    // 		else {
    // 			if(col ==0 || col ==COLS-1) {
    // 				cout << "* ";
    // 			}
    // 			else {
    // 				cout << "  ";
    // 			}
    // 		}
    // 	}
    // 	cout << endl;
    // }

// ques  Print the rectangle parrern

//  * * * * 
//  * * * * 
//  * * * * 
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout <<"* ";
//         }
//         cout << endl;
//     }


    // for( int i =0 ;i < 4 ;i++){
    //     for(int j=0 ;j< 4 ; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    return 0;
}

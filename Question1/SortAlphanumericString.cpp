#include<bits/stdc++.h>
using namespace std;
int main(){

    // sample test cases
    // Test Cases:

    string str = "asd1q4x2";
    // op = str = "asd1q2x4";

    // string str = "johnysins96";
    //op = str = "johnysins69";

    // input - string str = "pict2student6ad8";
    // output - string str = "pict2student6ad8";

    // input - string str = "xyz987";
     //  output - string str = "xyz789";

    // input - string str = "bny8mellon90";
    // output - string str = "bny0mellon89";

    // input - string str = "7holapeople81";
     // output - string str = "1holapeople78";

    // input - string str = "phon24pe42";
     // output - string str = "phon22pe44";

    // input - string str = "The1Goodboy6";
    // output - string str = "The1Goodboy6";

    // input - string str = "b00b5";
      // output - string str = "b00b5";


    // input - string str = "3sum1";
    // output - string str = "1sum3";


    // solution :

    vector<char>vc;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i]<='9'&&str[i]>='0'){
            vc.push_back(str[i]);
        }
    } 

    sort(vc.begin(),vc.end());

    int k = 0 ;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i]<='9'&&str[i]>='0'){
            str[i] = vc[k];
            k++;
        }
    }

    cout<<str<<endl;

return 0;
}

// constraint - 1<str.length<20;
// T.C - O(n)
// S.C - O(k)  k is the number of number characters
// O(1) s.c also exists.

// Description of the question :
// Given an alphanumeric string and we have to return the string in a pattern in which the numbers are in sorted manner:

// sample test cases:

// 1) input s = "qsa2d1"
//    output s = "qsa1d2"

// 2) input s = "pictstud5ABCi9wassup1"
//    output s = "pictstud1ABCi5wassup9"



#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<char> v = {'1','1','1','y','m','1','i'};
    
    int count = 0;

    for(int i = 0 ; i < v.size() ; i++ ){
        if(v[i]!='1'){
            swap(v[count],v[i]);
            count++;

        }
       
    }

    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }

return 0;
}

// Description - 

/*
Given a character array consisting of small case alphabets and '1's.Reorganize it as all '1's are to the right of the array.Relative order of the characters should not be changed.
Could you follow up with S.C O(1) and T.C O(n)?. :

sample test case:

1) input v = {'x','a','1','y','z','1'};

op - v =  {'x','a','y','z','1','1'};


1) input v = {'a','l','1','1','1','m'};

op - v =  {'a','l','m','1','1','1'}; */

// constraints - 1<v.size()<=10;
// (number of '1's) <= v.size();

// test cases

/*
input v = {'x','a','1','y','z','1'};
op - v =  {'x','a','y','z','1','1'};

input v = {'a','1','1','y','z'};
op - v =  {'a','y,'z','1','1'};

input v = {'1','1','1','y','m','1','i'};
op - v =  {'y','m','i','1','1','1','1'};

input v = {'x','a','1','1','o','o','1'};
op - v =  {'x','a','o','o','1','1','1'};

input v = {'b','n','y','1','1','1'};
op - v =  {'b','n','y','1','1','1'};

input v = {'b','h','e','c','o','1'};
op - v =  {'b','h','e','c','o','1'};

input v = {'a','1','y','z','1','p','l','z'};
op - v =  {'a','y','z','p','l','z','1','1'};

input v = {'c','1','1','b','z','n'};
op - v =  {'c','b','z','n','1','1'};

input v = {'1','c','w','y','i'};
op - v =  {'c','w','y','i','1'};

input v = {'1','x','1'};
op - v =  {'x','1','1'};
*/


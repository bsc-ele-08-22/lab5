#include<iostream>
#include<string>

using namespace std;

int main(){

    //create and initialize array
    string mArray[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};


    int mLength = sizeof(mArray) / sizeof(mArray[0]);
    for(int i =0; i < mLength;i++){
        
        const string element = mArray[i];
        const char firstLetter = element[0];

    
        if(firstLetter == 'B'){
            cout<<element<<endl;
        }

    }
    return 0;
}
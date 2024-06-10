#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int vowelsCount(string strg);
int wordsCount(string strg);


string reverseWords(string strg);
string reverseRecursion(string strg);


string capitalizeSecond(string strg);

int wordsCount2(string strg);
int main(){

    //open text file
    fstream myFile("text.txt");
    
    // assign content to string fileData;
    string fileData;

    if (myFile.is_open()){
        getline(myFile, fileData);
        cout<<"og message: "<< fileData<<endl;
        cout<<"Number of vowels: "<<vowelsCount(fileData)<<endl;
        cout<<"Number of words: "<<wordsCount(fileData)<<endl;
        cout<<"reverse words: "<<reverseWords(fileData)<<endl;
        cout<<"Capitalize second: "<<capitalizeSecond(fileData)<<endl;
    }

    //capitalize second letter of each word > output
    return 0;
}

int vowelsCount(string strg){
    int counter = 0;

    for(int i = 0; i < strg.length();i++){
        switch(toupper(strg[i])){

                counter++;
                break;
            default:
                break;
        }
    }

    return counter;
}

int wordsCount(string strg){
    int counter = 0;

    bool flag = false;

    for(int i = 0; i < strg.length();i++){
        if(!(strg[i] == ' ') && flag == false){
            flag = true;
            counter++;
        }

        if(str[i] == ' '){
            flag = false;
        }
    }

    return counter;
}

string reverseRecursion(string strg){
    if (strg == ""){
        return "";
    }else{
        return reverseRecursion(strg.substr(1)) + str[0];
    }
}

string reverseWords(string strg){
    string output = "";
    int i = 0;
    while(i < strg.length()){
        output = output + strg[strg.length() - 1 - i];
        i++;
    }
    return output + "\0";
}




string capitalizeSecond(string strg){
    string result = "";

    bool flag = true;
    bool flag_two = false;


    for(int i = 0; i < strg.length();i++){


        if(strg[i] != ' ' && flag){
            flag = false;
            result += strg[i];
            flag_two = true;
            continue;
        }

        if(flag_two && strg[i] != ' '){
            result += toupper(strg[i]);
            flag_two = false;
            continue;
        }

        if(strg[i] == ' '){
            flag = true;
        }
   
        result += strg[i];    
    }

    return result;
}
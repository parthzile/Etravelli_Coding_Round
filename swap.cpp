#include<iostream>
using namespace std;
 
void reverseStr(string &str){

    int len = str.length();

    //Indicates the start of the string
    int start = 0;

    //Indicates the end of the string
    int end= len - 1;

    while(start<=end){

        //Swaps the two characters of the string using swap function.
        swap(str[start],str[end]);

        //Shifts the pointer 1 place in front in the string
        start =+ 1;

        //Shifts the pointer 1 place backward the end
        end =- 1;

    }

    //Prints the string
    cout<<str;
}

int main(){
 
 string str;

 cout<<"Enter a string:"<<endl;
 cin>>str;
 reverseStr(str);

 
 return 0;
}
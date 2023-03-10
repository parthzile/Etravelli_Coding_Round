#include<iostream>
using namespace std;
 
int main(){
 
 int stocks[5] = {20,50,60,80,30};

 int size = 5;

 for(int i = 0; i<size; i++){

    int max_profit = 0;
    int sellingDay = 0;
    int buyingDay = 0;

    for(int j = i; j<size; j++){

        //cout<<stocks[j] - stocks[i]<<endl;

        
        if((stocks[j] - stocks[i]) > max_profit){

            max_profit = stocks[j] - stocks[i];
            buyingDay = i+1;
            sellingDay = j+1;

        }

    }

    cout<<"The profit: "<<max_profit<<endl;

    cout<<"The day we should buy: "<<buyingDay<<endl;

    cout<<"The day we should sell: "<<sellingDay<<endl;

    cout<<"-----"<<endl;
 }
 
 return 0;
}
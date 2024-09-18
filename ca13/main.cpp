//
//  main.cpp
//  ca13
//
//  Created by Andrea d Cazares on 9/17/24.
//

#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int count;
    float sum=0;
    float average;
    float temp;
    
    
    cout<<"number of temps?\n";
    cin>>count;

    for (int i=0;i<count;i++){
       cout<<"give me temperature "<<i+1<<endl;
       cin>>temp;
       sum+=temp;
}
if(count>0){
    average = sum/count;
    cout<<"average temp is "<< average<<endl;
}
}


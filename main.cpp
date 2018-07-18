#include <iostream>
using namespace std;
int main(){
    int num;
    int maxx;
    int sum = 0;
    cout<<"number: ";
    cin >> num;
    for( int a = 1; a <= num; a = a + 1){
        if(num%a==0){
            sum = sum + a;
            }
    }
    if(sum == num+1){
        cout<<"primary"<<endl;
    } else{
        cout<<"nope"<<endl;
    }
    cout<<"last number: ";
    cin>>maxx;
    cout<<endl;
    int c = 2;
    while(c <= maxx){
        int suma = 0;
        for (int b = 1; b <= c; b++){
            if (c%b==0){
                suma = suma+b;
            }
        }
        if(suma == c+1){
        cout<<c<<endl;
        }
       c++;
    }
    return(0);
    }

#include <iostream>
using namespace std;
int main(){
    char sentence[]="Bangladesh";
    int count=0;
    for(int i=0; i<100; i++){
        if(sentence[i]>='A' && sentence[i]<='Z' || sentence[i]>='a' && sentence[i]<='z'){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
}

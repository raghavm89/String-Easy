#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    cout<<"inside main"<<endl;
    string s = "arRAzFif";
    string largest = "";
    int chars[256] = {0};
    
    for(int i = 0; i < s.length(); i++){
        bool found = false;
        char ch;
        if(s[i] >= 65 && s[i] < 97){
            if(chars[s[i]+32] >= 1){
                found = true;
                ch = s[i];
            }
        }
        else{
            if(chars[s[i]-32] >= 1){
                found = true;
                ch = s[i]-32;
            }
        }
        
        if(found == true){
            if(largest == "" || largest[0] < ch){
                largest = ch;
            }
        }
        ++chars[s[i]];
    }

    cout<<"outout is "<<largest<<endl;
    return 0;
}
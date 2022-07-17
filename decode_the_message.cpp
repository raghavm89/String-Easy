#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    cout<<"inside main"<<endl;
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    map<char,char> decode_table;
    int char_pos = 0;
    for(int i =0;i<key.length();i++){
        
        if(decode_table.find(key[i]) == decode_table.end() && key[i] != ' '){
            decode_table[key[i]] = 'a' + char_pos;
            ++char_pos;
        }
    }

    
    string output = "";
    for(int i =0;i<message.length();i++){
        if(message[i] == ' '){
            output+= " ";
        }
        else{
            output += decode_table[message[i]];
        }
    }
    
    cout<<"output string is "<<output<<endl;

    return 0;
}
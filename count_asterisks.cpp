#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    cout<<"inside main"<<endl;
    string input = "l|*e*et|c**o|*de|";
    char star = '*';
    int count = 0;
    bool start_counting = true;

    for(int i =0;i<input.length();i++){
        if(input[i] == '|'){
            start_counting = !start_counting;
        }
        
        if(start_counting == true && input[i] == star){
            ++count;
        }
    }
    cout<<"count is "<<count<<endl;
    return 0;
}

int rearrangeCharacters(string s, string target) {
        int s_length      = s.length();
    int target_length = target.length();
    
    map <char,int> char_map1;
    map <char,int> char_map2;
    
    for(int i=0;i<target_length;i++)
        ++char_map1[target[i]] ;

    for(int i=0; i<s_length; i++)
            ++char_map2[s[i]];
    
    int temp = max(target_length,s_length);
    
    for (auto i = char_map1.begin(); i != char_map1.end(); i++){
        if(temp > char_map2[i->first]/i->second){
            temp = char_map2[i->first]/i->second;
        }
    }

    return temp;
}

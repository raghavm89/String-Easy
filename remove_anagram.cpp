      vector<string> removeAnagrams(vector<string>& words) {
        if(words.size() < 2){
            cout<<"no change"<<endl;
            return words;
        }
        else{
            for(int i=words.size()-1;i>0;i--){
                //std::cout<<" loop number from back "<< i<<endl;
                string a = words[i];
                string b = words[i-1];
            
                if(a.size() != b.size())
                    continue; 
                
                int count[256] = {0};
                for(int j=0;j<a.size();j++){
                    count[a[j]]++;
                    count[b[j]]--;
                    //std::cout<<"count of a is "<<count[a[j]]<< " for "<<a[j]<<" and count of b is "<< count[b[j]] <<" for "<< b[j]<<endl;
                }
                
                bool remove = true;
                for(int j=0;j<256;j++)
                    if(count[j]){
                        remove = false;
                        break;
                    }
                if(remove)
                    words.erase(words.begin() + i);
            }
            return words;
        }

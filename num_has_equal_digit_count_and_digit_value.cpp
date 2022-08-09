bool digitCount(string num) {
        int length = num.length();
        //cout<<"length is "<<length<<endl;
        //int arr[] = {0,0,0,0};
        std::map <int,int> m;
        //bool found = true;
        for(int i=0;i<length;i++){
            m[num[i]-'0']++;
        }

        for(int i=0;i<length;i++){
            if( num[i]-'0' != m[i] ){
                return false;
            }
        }
        return true;
    }

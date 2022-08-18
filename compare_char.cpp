int percentageLetter(string s, char letter) {
        int s_length = s.size();
        int count = 0;
        for(auto i : s)
            if(letter == i)
                ++count;
        
        return count*100/s_length;
}

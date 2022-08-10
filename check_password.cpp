bool strongPasswordCheckerII(string password) {
        int length = password.length();
        int count =0;
        bool lower = false;
        bool upper = false;
        bool digit = false;
        bool special = false;
        char last_char;
        for(int i =0; i<length;i++){
            if(i == 0)
                last_char = password[i];
            else{
                if(last_char == password[i])
                    return false;
                else
                    last_char = password[i];
            }
            count++;
        
            if(password[i] >= 65 && password[i] <= 90)
                upper=true;
            else if(password[i] >= 97 && password[i] <= 122)
                lower = true;
            else if(password[i] >= 48 && password[i] <= 57)
                digit = true;
            else{
                switch(password[i]){
                    case '!':
                        special =true;
                        break;
                    case '@':
                        special =true;
                        break;
                    case '#':
                        special =true;
                        break;
                    case '$':
                        special =true;
                        break;
                    case '%':
                        special =true;
                        break;
                    case '^':
                        special =true;
                        break;
                    case '&':
                        special =true;
                        break;
                    case '*':
                        special =true;
                        break;
                    case '(':
                        special =true;
                        break;
                    case ')':
                        special =true;
                        break;
                    case '+':
                        special =true;
                        break;
                    case '-':
                        special =true;
                        break;
                    default:
                        return false;
                }
            }
        
        }
        if((count < 8) || (!upper) || (!lower) || (!digit) || (!special) )
            return false;
        else
            return true;
    }

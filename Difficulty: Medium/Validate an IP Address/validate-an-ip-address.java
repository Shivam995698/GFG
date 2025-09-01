class Solution {
    boolean isIpv4(String ip)
    {
        String[] parts = ip.split("\\.",-1);
        if(parts.length!=4)
        {
            return false;
        }
        for(String str:parts)
        {
            if(str.length()==0 || str.length()>3)
            {
                return false;
            }
            if(str.charAt(0)=='0' && str.length()>1)
            {
                return false;
            }
            for(char ch:str.toCharArray())
            {
                if(!Character.isDigit(ch))
                {
                    return false;
                }
            }
            int num = Integer.parseInt(str);
            if(num<0 || num>255)
            {
                return false;
            }
        }
        return true;
    }
    boolean isIpv6(String ip)
    {
        String[] part = ip.split(":",-1);
        if(part.length!=8)
        {
            return false;
        }
        for(String str:part)
        {
            if(str.length()==0 || str.length()>4)
            {
                return false;
            }
            String hex = "0123456789ABCDEFabcdef";
            for(char ch:str.toCharArray())
            {
                if(hex.indexOf(ch)==-1)
                {
                    return false;
                }
            }
            
        }
        return true;

    }
    public boolean isValid(String queryIP) {
        // code here
        if(queryIP.chars().filter(ch->ch == '.').count()==3){
            return isIpv4(queryIP);
        }
        if(queryIP.chars().filter(ch->ch == ':').count() == 7)
        {
            return isIpv6(queryIP);
        }
        return false;
    }
}
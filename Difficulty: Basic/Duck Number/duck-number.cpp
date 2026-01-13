bool check_duck(string N) {
    int n = N.length();
    int i =0;
    while(i<n && N[i]=='0')
    {
        i++;
    }
    for(int j = i;j<n;j++)
    {
        if(N[j]=='0')
        {
            return true;
        }
    }
    return false;
}
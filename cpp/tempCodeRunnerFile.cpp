int i = s1.length();
    int j = s2.length();
    string lcs = "";
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            lcs = s1[i-1] + lcs;
            i--;
            j--;
        }
        else{
            if(dp[i-1][j] > dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    
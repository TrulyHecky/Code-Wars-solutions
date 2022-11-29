std::vector<int> solve(std::string s){
    std::vector <int> v = {0,0,0,0};
    for(char& ch : s) {
        if (isupper(ch)) v[0]++;
        else if (islower(ch)) v[1]++;
        else if (isdigit(ch)) v[2]++;
        else v[3]++;
    }
    return v;
}

int find(vector<char> &p, int c) {
    if (p[c] != c) {
        p[c] = find(p, p[c]);
    }
    return p[c];
}

string solve(string a, string b, string target) {
    vector<char> p(26);
    for (int i = 0; i < 26; i++) {
        p[i] = i;
    }
    for (int i = 0; i < a.size(); i++) {
        int p1 = find(p, a[i] - 'a');
        int p2 = find(p, b[i] - 'a');
        if (p1 < p2) {
            p[p2] = p1;
        } else {
            p[p1] = p2;
        }
    }
    for (char &c : target) {
        int p1 = find(p, c - 'a');
        c = ('a' + p1);
    }
    return target;
}

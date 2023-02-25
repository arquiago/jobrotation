#include <bits/stdc++.h>
using namespace std;
string reverse_string(string s, int n){
    string ans;
    /*declaramos a string ans. iteramos pela string s
    de tras para frente e concatenamos cada caractere 
    a string ans, que ao final do loop, sera retornada.
    */
    for(int i = n-1; i>=0; i--){
        ans += s[i];
    }
    return ans;
}
int main(){
    //declaramos e recebemos a string. n sera o tamanho da string, obtido com o metodo string.lenght()
    string s; int n; 
    cin>>s; 
    n = s.length();
    //utilizaremos a funcao reverse_string para reverter a string.
    cout<<reverse_string(s, n);
    return 0;
}
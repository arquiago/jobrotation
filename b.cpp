#include <bits/stdc++.h>
using namespace std;
int main(){
    //declaramos e recebemos a variavel
    int n;
    cin>>n;
    /*
    utilizaremos f1 e f2 como os dois primeiros numeros de fibonacci, 1, e obeteremos o proximo iterativamente atraves do s,
    enquanto s for menor ou igual ao nosso numero. se o ultrapassarmos, então sabemos que ele nao eh um numero de fibonacci
    e a flag continuara com o valor false. se o encontramos, entao a flag passa a ter true, e essa flag controla o if ao final.
    para o caso em que n seja igual a 1, a flag recebe o valor true sempre
    */
    int f1=1, f2=1, s;
    bool flag=false;
    f1 = 1; f2 = 2;
    while(s <=n){
        s = f1 + f2;
        f1 = f2;
        f2 = s;
        if(s == n){
            flag = true;
        }
    }
    if(n == 1)
        flag = true;
    
    if(flag){
        cout<<"esse eh um numero de fibonacci";
    }
    else{
        cout<<"esse nao eh um numero de fibonacci";
    }
    return 0;
}
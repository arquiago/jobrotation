#include <bits/stdc++.h>
using namespace std;
double total;
double solve(double n){
    double ans;
    ans = n*100/total;
    return ans;
}
int main(){
    //inicializamos uma array de tipo double com todos os valores
    double valores[] = {67836.43, 36678.66,29229.88, 27165.48, 19849.53};
    for(auto &elem: valores ){
        total += elem;
    }
    cout<<"O faturamento total eh de "<<fixed<<setprecision(2)<<total<<"\n";
    map <int, string> mapa;
    mapa[1] = "SP";
    mapa[2] = "RJ";
    mapa[3] = "MG";
    mapa[4] = "ES";
    mapa[5] = "Outros"; 
    /*percorremos a array valores e calculamos a porcentagem representada
    por cada valor em relacao ao valor total. declaramos total
    como uma variavel global para nao precisarmos passa-la como parametro
    da funcao, mas poderiamos ter dois parametros, de fato.
    */
    for(int i = 0; i<5; i++){
        /* utilizamos setprecision para fixar o numeros de casa decimais em dois
        mais casas decimais poderiam ser fixadas, a depender da precisao
        necessaria*/
        cout<<mapa[i+1]<<" eh responsavel por cerca de "<<fixed<<setprecision(2)<<solve(valores[i])<<"%% do faturamento mensal.\n";
    }
    return 0;
}
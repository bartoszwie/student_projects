#include <iostream>

using namespace std;

int main(){
	
	int tab[3][3]={0};
	int x,y;
	int a, b;
    cout <<"Wpisz wspolrzedne statku(x,y): ";
    cin >> x >> y;
    tab[x][y] = '0';

    for(int i = 0; i<3; i++){
    cout <<"Zgadnij wspolrzedne statku (wiersz i kolumna od 0 do 2): ";
    cin >> a >> b;

    if (tab[a][b] == '0'){
    cout << "Trafiony!" <<endl;
    break;
    }else{
    cout <<"Pudlo!"<<endl;
}
}




	return 0;
}

#include <iostream>

using namespace std;

int main(){
	
	int tab[3][3] = {0};
	int x,y;
	int gr, gc;
    cout <<"Wpisz wspolrzedne statku(x,y): ";
    cin >> x >> y;
    tab[x][y] = '0';

    for(int i = 0; i<3; i++){
    cout <<"Zgadnij wspolrzedne statku (wiersz i kolumna od 0 do 2): ";
    cin >> gr >> gc;

    if (tab[gr][gc] == '0'){
    cout << "Trafiony!" <<endl;
    break;
    }else{
    cout <<"Pudlo!"<<endl;
}
}




	return 0;
}

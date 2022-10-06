#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int answer = 10;
    int theguess;
    int lives = 5;
    string hint = "Numarul se imparte la 5 si 2";
    string secondhint = "Numarul poate fi obtinut daca inmultesti numerele din celalat hint";
    string dn;
    string dn2;
    bool gameover = false;
    cout<<"Ghiceste un numar de la 1 la 100.Ai 5 sanse" << endl;
    while(theguess != answer){
        cout<<"Alege un nr." << endl;cin>> theguess;
        lives--;
        if(lives == 3){
            cout<<"Vrei un hint? da/nu" << endl;
            cout<< "Raspunsul tau:";cin>>dn;
            if(dn == "da" || dn== "Da"){
                cout<<hint << endl;
            }else{
            cout<<"Ok ghiceste in continuare mai ai 3 vieti"<< endl;}

        }
        if(lives == 1){
            cout<<"Vrei alt un hint? da/nu" << endl;
            cout<< "Raspunsul tau:";cin>>dn2;
            if(dn == "da" || dn== "Da"){
                cout<<secondhint << endl;
            }else{
            cout<<"Ok ghiceste in continuare mai ai 1 viata"<< endl;}

        }
        if(lives == 0 ){
            cout<<"GAME OVER:  Raspusul era 10" << endl;
            gameover = true;
        }
        if(gameover == true){
            exit(0);
        }
    }

    cout<< "Felicitari , ai ghichit";

}

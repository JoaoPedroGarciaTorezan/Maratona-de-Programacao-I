#include <bits/stdc++.h>

using namespace std;

map<string,string> Cria_Dicionario() {

    map<string,string> d;
    vector<string> pais = {"brasil","alemanha","austria"
    , "coreia", "espanha", "grecia", "estados-unidos", "inglaterra", "australia"
    , "portugal", "suecia", "turquia", "argentina", "chile", "mexico", "antardida"
    , "canada", "irlanda", "belgica", "italia", "libia", "siria", "marrocos", "japao"}
    , trad = {"Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!"
    ,"Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!", "Merry Christmas!",
    "Feliz Natal!","God Jul!", "Mutlu Noeller", "Feliz Navidad!","Feliz Navidad!","Feliz Navidad!",
    "Merry Christmas!","Merry Christmas!","Nollaig Shona Dhuit!","Zalig Kerstfeest!","Buon Natale!", "Buon Natale!", 
    "Milad Mubarak!","Milad Mubarak!","Merii Kurisumasu!"};

    for(int i=0; i<24; i++){
        d.insert(make_pair(pais[i],trad[i]));
    }

    return d;
    
}

int main () {

    string natal;
    map<string,string> dic;
    dic = Cria_Dicionario();

    while(cin >> natal){

        auto it = dic.find(natal);
        if(it != dic.end())
            cout << it->second << "\n";
        else cout << "--- NOT FOUND ---\n";
        
    }
    return 0;
}
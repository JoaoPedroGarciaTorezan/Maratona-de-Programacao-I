#include <iostream>
#include <bits/stdc++.h>

#include <string>

//cout->printf
//cin->scanf

struct Pessoa {
    Pessoa () {
        name = "Human";
        age = 0;
        altura = 0.8f;
    }
    Pessoa (std::string n) {
        name = n;
        age = 0;
        altura = 0.8f;
    }

    void ShowID() {
        std::cout << name << "\n";
        std::cout << age << "\n";
        std::cout << altura << "\n";
    }
    std::string name;
    int age;
    int altura;
};


int main () {

    int x;
    Pessoa p("Joao");

    p.ShowID();

    return 0;
}
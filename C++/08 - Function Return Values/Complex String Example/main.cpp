#include <iostream>

using namespace std;

string bobbyShoes()
{
    return "Converse";
}

string sallyShoes()
{
    return "Nike";
}

int main()
{
    string name;
    string favPairOfShoes;
    bool correctInput = false;

    while(correctInput == false){
        cout << "Are you Bobby or Sally? (enter either)" << endl;
        cin >> name;
        
        if(name == "Bobby"){
            favPairOfShoes = bobbyShoes();
            correctInput = true;
        }
            
        else if(name == "Sally"){
            favPairOfShoes = sallyShoes();
            correctInput = true;
        }
        else 
            cout << "Enter a correct name." << endl;
    }

    // Prints "Bobby's favorite shoe brand is Converse."
    // OR "Sally's favorite shoe brand is Nike.'"
    cout << name << "\'s favorite shoe brand is " << favPairOfShoes << "." << endl;
    return 0;
}
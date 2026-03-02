/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> menu;
    menu.push_back("Dumpling");
    menu.push_back("Wonton");
    menu.push_back("Gyoza");
    menu.push_back("Buns");
    menu.push_back("Shumai");
    // for (size_t i =0; i <menu.size(); i++){
        
    //     cout << menu[i] << " " ;
    // }
    menu.insert(menu.begin()+1, "Pizza");
    // for (size_t i =0; i <menu.size(); i++){
        
    //     cout << menu[i] << " " ;
    // }
    menu.erase(menu.begin()+3);
    // for (size_t i =0; i <menu.size(); i++){
        
    //     cout << menu[i] << " " ;
    // }
    for (string& s: menu){
        cout << s << " " ;
    }
    //cout << menu.front() << endl;

    return 0;
}
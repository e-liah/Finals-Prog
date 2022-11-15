#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

//declaration of variables
string name, flav1, flav2, flav3, flav4, flav5, flav6, flav7, flav8, flav9, flav10, flav11, top1, top2, top3, top4, top5, top6, flavor, topping;
char confirm, where, another;
int qty, numflav, numtop;
float fprice1, fprice2, fprice3, fprice4, fprice5, fprice6, fprice7, fprice8, fprice9, fprice10, fprice11, toprice1, toprice2, toprice3, toprice4, toprice5, toprice6, vat, uprice, tprice, stotal, tbill; 

int main(){

  //flavors
  flav1 = "Vanilla";
  flav2 = "Chocolate";
  flav3 = "Strawberry";
  flav4 = "Cookies & Cream";
  flav5 = "Coffee";
  flav6 = "Pistachio";
  flav7 = "Cookie Dough";
  flav8 = "Ube";
  flav9 = "Butterscotch";
  flav10 = "Salted Caramel";
  flav11 = "Avocado";

  //flavor unit price
  fprice1 = 100.00;
  fprice2 = 100.00;
  fprice3 = 120.00;
  fprice4 = 120.00; 
  fprice5 = 140.00; 
  fprice6 = 140.00;
  fprice7 = 150.00;
  fprice8 = 100.00;
  fprice9 = 150.00; 
  fprice10 = 150.00;
  fprice11 = 120.00;

  //toppings
  top1 = "Sprinkles";
  top2 = "Chocolate Chips";
  top3 = "Oreos";
  top4 = "Chopped Almonds";
  top5 = "Lucky Charms (Cereal)";
  top6 = "Crushed Waffle Cones";

  //toppings price
  toprice1 = 20.00;
  toprice2 = 20.00;
  toprice3 = 20.00;
  toprice4 = 30.00;
  toprice5 = 30.00;
  toprice6 = 30.00;

  //landing page
  cout << setw(110) << "Welcome to Scoops n' Smiles!\n\n";
  cout << setw(106) << "The Coolest Place Around";

  cout << "\n\n\n";

  cout << setw(106) << "What should we call you? ";
  getline(cin, name);

  cout << "\n\n\n";
	cout << setw(75) << "Hello, " << name << "! Please wait while we prepare the menu...";
	Sleep(3000);

  //[A] Choose ice cream flavor, [B] Review Order, [X] Exit
  directory:
  do{
    system("cls");
    cout << setw(111) << "[A] Choose an ice cream flavor\n";
    cout << setw(97) << "[B] Review Order\n";
    cout << setw(89) << "[X] Exit\n";
    cout << "\n";
    cout << setw(105) << "Where do you want to go?";
    cin >> where;

    if (where == 'a' || where == 'A'){ 
      goto menu;
    }

    if (where == 'b' || where == 'B'){
      goto review;
    }
  } while (where != 'X' || where != 'x');

  //[A] Display the ice cream flavors

  menu:
  do {
    system ("cls");
    cout << fixed << setprecision(2) << "\n";

    cout << setw(116) << "******************************************\n"; //42
    cout << setw(103) << "Scoops n' Smiles\n";
    cout << setw(116) << "******************************************\n"; //42

    cout << setw(65) << "1.  " << flav1 << setw(50 - flav1.length()) << "Php " << fprice1 << endl;
    cout << setw(65) << "2.  " << flav2 << setw(50 - flav2.length()) << "Php " << fprice2 << endl;
    cout << setw(65) << "3.  " << flav3 << setw(50 - flav3.length()) << "Php " << fprice3 << endl;
    cout << setw(65) << "4.  " << flav4 << setw(50 - flav4.length()) << "Php " << fprice4 << endl;
    cout << setw(65) << "5.  " << flav5 << setw(50 - flav5.length()) << "Php " << fprice5 << endl;
    cout << setw(65) << "6.  " << flav6 << setw(50 - flav6.length()) << "Php " << fprice6 << endl;
    cout << setw(65) << "7.  " << flav7 << setw(50 - flav7.length()) << "Php " << fprice7 << endl;
    cout << setw(65) << "8.  " << flav8 << setw(50 - flav8.length()) << "Php " << fprice8 << endl;
    cout << setw(65) << "9.  " << flav9 << setw(50 - flav9.length()) << "Php " << fprice9 << endl;
    cout << setw(65) << "10. " << flav10 << setw(50 - flav10.length()) << "Php " << fprice10 << endl;
    cout << setw(65) << "11. " << flav11 << setw(50 - flav11.length()) << "Php " << fprice11 << endl;

    cout << "\n\n";
    cout << setw(88) << "What can we get you today? ";
    cin >> numflav;

  //for the toppings selection and quantity

    switch (numflav) {
      case 1: flavor = flav1;
              uprice = fprice1;
              cout << "You have chosen " << flavor << "priced at Php " << uprice << ".\n";
              goto toppings;
              

      toppings:
                    cout << "Would you like to add toppings? [Y/N] ";
                    cin >> confirm;

                        if (confirm == 'Y' || confirm == 'y') {
                          //toppings
                          system ("cls");
                          cout<<fixed<<setprecision(2)<<"\n";

                          cout<<setw(116)<<"******************************************\n"; //42
                          cout<<setw(104)<<"Additional Toppings\n";
                          cout<<setw(116)<<"******************************************\n"; //42

                          cout << setw(65) << "1.  " << top1 << setw(50 - top1.length()) << "Php " << toprice1 << endl;
                          cout << setw(65) << "2.  " << top2 << setw(50 - top2.length()) << "Php " << toprice2 << endl;
                          cout << setw(65) << "3.  " << top3 << setw(50 - top3.length()) << "Php " << toprice3 << endl;
                          cout << setw(65) << "4.  " << top4 << setw(50 - top4.length()) << "Php " << toprice4 << endl;
                          cout << setw(65) << "5.  " << top5 << setw(50 - top5.length()) << "Php " << toprice5 << endl;
                          cout << setw(65) << "6.  " << top6 << setw(50 - top6.length()) << "Php " << toprice6 << endl;

                          cout << "\n\n";
                          cout << setw(88) << "What would be your toppings? ";
                          cin >> numtop;

                          switch (numtop) {
                            case 1 ... 6: cout << "How many would you like?";
                                          cin >> qty;

                                          if (qty <= 5) {
                                            cout << "Would you like to order another item? [Y/N] ";
                                            goto directory;
                                          }
                                          else {
                                            cout << "That's too much!";
                                            goto toppings;
                                          }
                                          break;
                            default: cout << "Sorry, that's not on the menu.";
                                     goto toppings;
                                     break;
                          }
                        } 
                        else { //if confirm == 'N' || confirm == 'n'
                          cout << "How many would you like?\n";
                          cin >> qty;

                          if (qty <= 5) {
                            goto directory;
                          }
                          else {
                            cout << "That's too much!";
                            goto toppings;
                          }
                        }
                    break;
      default: cout << "Sorry, that's not on the menu.";
              goto menu;
              break;
    }
	  Sleep(3000);
    goto directory;
  } while (where == 'A' || where == 'a');

  // Order Summary
  review:
  do {
    cout<<fixed<<setprecision(2)<<"\n";

    cout<<setw(116)<<"******************************************\n"; //42
    cout<<setw(104)<<"Order Summary\n";
    cout<<setw(116)<<"******************************************\n"; //42

  //Total Bill Computation

  //Generate Customer Number

  } while (where == 'B' || where == 'b');

  return 0;
}
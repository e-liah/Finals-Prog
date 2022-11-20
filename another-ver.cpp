#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

//declaration of variables
string name, flav1, flav2, flav3, flav4, flav5, flav6, flav7, flav8, flav9, flav10, flav11, top1, top2, top3, top4, top5, top6, flavor, addtop;
char confirm, where;
int qty, numflav, numtop, customer;
float fprice1, fprice2, fprice3, fprice4, fprice5, fprice6, fprice7, fprice8, fprice9, fprice10, fprice11, toprice1, toprice2, toprice3, toprice4, toprice5, toprice6, flavprice, addprice, vatsales, vatamount, uprice, tprice, stotal, tbill; 

int main() {
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
  fprice1 = 20.00;
  fprice2 = 20.00;
  fprice3 = 20.00;
  fprice4 = 23.00; 
  fprice5 = 23.00; 
  fprice6 = 25.00;
  fprice7 = 25.00;
  fprice8 = 25.00;
  fprice9 = 28.00; 
  fprice10 = 28.00;
  fprice11 = 30.00;

  //toppings
  top1 = "Sprinkles";
  top2 = "Chocolate Chips";
  top3 = "Oreos";
  top4 = "Chopped Almonds";
  top5 = "Lucky Charms (Cereal)";
  top6 = "Crushed Waffle Cones";

  //toppings price
  toprice1 = 8.00;
  toprice2 = 8.00;
  toprice3 = 8.00;
  toprice4 = 12.00;
  toprice5 = 10.00;
  toprice6 = 10.00;

  //landing page
  cout << setw(110) << "Welcome to Scoops n' Smiles!\n\n";
  cout << setw(106) << "The Coolest Place Around";

  cout << "\n\n\n";

  cout << setw(106) << "What should we call you? ";
  getline(cin, name);

  cout << "\n\n\n";
  cout << setw(75) << "Hello, " << name << "! Please wait while we prepare the menu...";
  Sleep(3000);

  //[A] Choose ice cream flavor, [X] Exit
  directory:
    system("cls");
    cout << "\n\n\n";

    cout << setw(116) << "******************************************\n"; //42
    cout << setw(103) << "Scoops n' Smiles\n";
    cout << setw(116) << "******************************************\n"; //42

    cout << "\n" << setw(111) << "[A] Choose an ice cream flavor\n";
    cout << setw(89) << "[X] Exit\n";
    cout << "\n";
    cout << setw(105) << "Where do you want to go? ";
    cin >> where;

    switch(where) {
      case 'A':
      case 'a': menu:
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

                cout << "\n\n";

              //for the toppings selection and quantity
                switch (numflav) {
                  case 1: flavor = flav1;
                          flavprice = fprice1;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 2: flavor = flav2;
                          flavprice = fprice2;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 3: flavor = flav3;
                          flavprice = fprice3;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 4: flavor = flav4;
                          flavprice = fprice4;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 5: flavor = flav5;
                          flavprice = fprice5;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 6: flavor = flav6;
                          flavprice = fprice6;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 7: flavor = flav7;
                          flavprice = fprice7;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 8: flavor = flav8;
                          flavprice = fprice8;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 9: flavor = flav9;
                          flavprice = fprice9;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 10: flavor = flav10;
                          flavprice = fprice10;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  case 11: flavor = flav11;
                          flavprice = fprice11;
                          cout << "\t\t\t\t\t\t\t     ";
                          cout << "You have chosen " << flavor << " priced at Php " << flavprice;
                          cout << "\n\n";
                          goto toppings;
                          break;
                  default: cout << setw(91) << "Sorry, that's not on the menu.";
                          Sleep (1000);
                          cout << "\n\n";
                          cout << setw(86) << "Going back to the menu...";
                          Sleep (3000);
                          goto menu;
                          break;
                }
                Sleep(3000);
                goto directory;
                break;

                //CHOOSE TOPPINGS
                toppings:
                cout << "\n" << "\t\t\t\t\t\t\t     ";
                cout << "Would you like to add toppings? [Y/N] ";
                cin >> confirm;

                if (confirm == 'Y' || confirm == 'y') {
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

                  cout << "\n\n";

                  switch (numtop) {
                    case 1: addtop = top1;
                            addprice = toprice1;
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << "You have chosen " << addtop << " priced at Php " << addprice << "\n\n";
                            
                            cout << setw(99) << "How many would you like? [Maximum of 5] ";
                            cin >> qty;  
                            
                            if (qty <= 5) {
                              goto bill;
                            }
                            else {
                              cout << "\n" << setw(75) << "That's too much!";
                              Sleep(1000);
                              cout << "\n\n" << setw(93) << "Going back to the toppings menu...";
                              Sleep (3000);
                              system ("cls");
                              goto toppings;
                            }           
                          break;
                    case 2: addtop = top2;
                            addprice = toprice2;
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << "You have chosen " << addtop << " priced at Php " << addprice << "\n\n";
                            
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << setw(99) << "How many would you like? [Maximum of 5] ";
                            cin >> qty;  
                            
                            if (qty <= 5) {
                              goto bill;
                            }
                            else {
                              cout << "\n" << setw(75) << "That's too much!";
                              Sleep(1000);
                              cout << "\n\n" << setw(93) << "Going back to the toppings menu...";
                              Sleep (3000);
                              system ("cls");
                              goto toppings;
                            }            
                          break;
                    case 3: addtop = top3;
                            addprice = toprice3;
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << "You have chosen " << addtop << " priced at Php " << addprice << "\n\n";
                            
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << setw(99) << "How many would you like? [Maximum of 5] ";
                            cin >> qty;  
                            
                            if (qty <= 5) {
                              goto bill;
                            }
                            else {
                              cout << "\n" << setw(75) << "That's too much!";
                              Sleep(1000);
                              cout << "\n\n" << setw(93) << "Going back to the toppings menu...";
                              Sleep (3000);
                              system ("cls");
                              goto toppings;
                            }             
                          break;
                    case 4: addtop = top4;
                            addprice = toprice4;
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << "You have chosen " << addtop << " priced at Php " << addprice << "\n\n";
                            
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << setw(99) << "How many would you like? [Maximum of 5] ";
                            cin >> qty;  
                            
                            if (qty <= 5) {
                              goto bill;
                            }
                            else {
                              cout << "\n" << setw(75) << "That's too much!";
                              Sleep(1000);
                              cout << "\n\n" << setw(93) << "Going back to the toppings menu...";
                              Sleep (3000);
                              system ("cls");
                              goto toppings;
                            }             
                          break;
                    case 5: addtop = top5;
                            addprice = toprice5;
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << "You have chosen " << addtop << " priced at Php " << addprice << "\n\n";
                            
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << setw(99) << "How many would you like? [Maximum of 5] ";
                            cin >> qty;  
                            
                            if (qty <= 5) {
                              goto bill;
                            }
                            else {
                              cout << "\n" << setw(75) << "That's too much!";
                              Sleep(1000);
                              cout << "\n\n" << setw(93) << "Going back to the toppings menu...";
                              Sleep (3000);
                              system ("cls");
                              goto toppings;
                            }             
                          break;
                    case 6: addtop = top6;
                            addprice = toprice6;
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << "You have chosen " << addtop << " priced at Php " << addprice << "\n\n";
                            
                            cout << "\t\t\t\t\t\t\t   ";
                            cout << setw(99) << "How many would you like? [Maximum of 5] ";
                            cin >> qty;  
                            
                            if (qty <= 5) {
                              goto bill;
                            }
                            else {
                              cout << "\n" << setw(75) << "That's too much!";
                              Sleep(1000);
                              cout << "\n\n" << setw(93) << "Going back to the toppings menu...";
                              Sleep (3000);
                              system ("cls");
                              goto toppings;
                            }            
                          break;
                    default: cout << setw(89) << "Sorry, that's not on the menu.";
                             Sleep (1000);
                             cout << "\n\n";
                             cout << setw(84) << "Going back to the menu...";
                             Sleep (3000);
                             goto toppings;
                             break;
                  }
                } 

                else { //if confirm == 'N' || confirm == 'n'
                  addtop = "N/A";
                  addprice = 0;

                  cout << "\n\n";
                  cout << setw(86) << "How many would you like? [Maximum of 5] ";
                  cin >> qty;  
                            
                  if (qty <= 5) {
                    goto bill;
                  }
                  else {
                    cout << "\n" << setw(75) << "That's too much!";
                    Sleep(1000);
                    cout << "\n\n" << setw(93) << "Going back to the toppings menu...";
                    Sleep (3000);
                    system ("cls");
                    goto toppings;
                  }            
                  goto bill;
                }

                //BILLING
                bill:
                system ("cls");
                cout << fixed << setprecision(2) << "\n";

                cout << setw(116) << "******************************************\n"; //42
                cout << setw(102) << "Order Summary\n";
                cout << setw(116) << "******************************************\n"; //42

                cout << "\n";

                cout << setw(50) << "Ice Cream Flavor ";
                cout << setw(44) << "Additional Toppings ";
                cout << setw(20) << "Quantity ";
                cout << setw(20) << "Unit Price ";
                cout << setw(21) << "Total Price\n\n";

                uprice = flavprice + addprice;
                tprice = uprice * qty;

                //fix the spacing
                cout << "\t\t\t\t ";
                cout << flavor << setfill (' ') << setw (50 - flavor.length());
                cout << addtop << setfill (' ') << setw(30 - addtop.length());
                cout << qty << right << setw(17);
                cout << "Php " << uprice << setw(14);
                cout << "Php " << tprice;

                //research the vat
                stotal = tprice;
                vatsales = tprice / 1.12;
                vatamount = vatsales * 0.12;
                tbill = stotal + vatamount;

                //fix the spacing
                cout << "\n\n\n\n\n";
                cout << setw(145) << "Subtotal:   Php " << stotal << endl;
                cout << setw(145) << "VAT:        Php " << vatsales << endl;
                cout << setw(153) << "===========================" << endl;
                cout << setw(145) << "Total Bill: Php " << tbill << endl;

                Sleep (1000);
                cout << "\n\n";
                cout << setw(110) << "Generating customer number...";
                Sleep (3000);

               //customer = srand(time(0));

                cout << "\n\n";
                cout << setw(106) << "Your customer number is " << rand() % 100;
                Sleep(2000);
                
                cout << "\n\n\n";
                cout << setw(118) << "Would you like to order another item? [Y/N] ";
                cin >> confirm;

                if (confirm == 'Y' || confirm == 'y'){ 
                  goto menu; 
                }
                else {
                  goto directory;
                }

      case 'X':
      case 'x': break;

      default: cout << "That is an invalid option.\n";
              Sleep (2000);
              cout << "Try again...";
              Sleep (3000);
              goto directory;
    }
  
  return 0;
}

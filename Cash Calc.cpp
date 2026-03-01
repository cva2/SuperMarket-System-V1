#include <iostream>
using namespace std;

int items[30][2] {  // {number of item, price}
  {1,  25 },
  {2,  30 },
  {3,  20 },
  {4,  22 },
  {5,  65 },
  {6,  35 },
  {7,  85 },
  {8,  28 },
  {9,  40 },
  {10, 55 },
  {11, 65 },
  {12, 165},
  {13, 22 },
  {14, 18 },
  {15, 35 },
  {16, 5  },
  {17, 10 },
  {18, 15 },
  {19, 20 },
  {20, 12 },
  {21, 5  },
  {22, 10 },
  {23, 15 },
  {24, 30 },
  {25, 35 },
  {26, 10 },
  {27, 55 },
  {28, 22 },
  {29, 20 },
  {30, 45 }
};

void menu();
int itemcount(); // Items Butting In Basket
int finalpros(int); // Pay The Cash And Return The Rest

int main()
{
  bool doing = true;
  while(doing)
  {
  menu();
  itemcount();
  doing = false;
  cout << "If You Need To Do A Anther Payment Enter 1\n";
  cin >> doing;
}

  return 0;
}


void menu()
{
  cout << "\n\n";
  cout << "  ===================================================\n";
  cout << "                     SUPER MARKET MENU\n";
  cout << "  ===================================================\n";
  cout << "   No | Item                           | Price\n";
  cout << "  ---------------------------------------------------\n";
  cout << "  01  | Rice 1kg                       |  25 EGP\n";
  cout << "  02  | Sugar 1kg                      |  30 EGP\n";
  cout << "  03  | Pasta 400g                     |  20 EGP\n";
  cout << "  04  | Flour 1kg                      |  22 EGP\n";
  cout << "  05  | Oil 1L                         |  65 EGP\n";
  cout << "  06  | Tea Bag Box                    |  35 EGP\n";
  cout << "  07  | Coffee 200g                    |  85 EGP\n";
  cout << "  08  | Milk 1L                        |  28 EGP\n";
  cout << "  09  | Cheese Pack                    |  40 EGP\n";
  cout << "  10  | Butter 250g                    |  55 EGP\n";
  cout << "  11  | Eggs (12)                      |  65 EGP\n";
  cout << "  12  | Frozen Chicken                 | 165 EGP\n";
  cout << "  13  | Tuna Can                       |  22 EGP\n";
  cout << "  14  | Beans Can                      |  18 EGP\n";
  cout << "  15  | Lentils 1kg                    |  35 EGP\n";
  cout << "  16  | Salt Pack                      |   5 EGP\n";
  cout << "  17  | Pepper Pack                    |  10 EGP\n";
  cout << "  18  | Chips Pack                     |  15 EGP\n";
  cout << "  19  | Chocolate Bar                  |  20 EGP\n";
  cout << "  20  | Biscuits Pack                  |  12 EGP\n";
  cout << "  21  | Water Bottle                   |   5 EGP\n";
  cout << "  22  | Juice Box                      |  10 EGP\n";
  cout << "  23  | Soft Drink Can                 |  15 EGP\n";
  cout << "  24  | Ketchup Bottle                 |  30 EGP\n";
  cout << "  25  | Mayo Bottle                    |  35 EGP\n";
  cout << "  26  | Soap Bar                       |  10 EGP\n";
  cout << "  27  | Shampoo                        |  55 EGP\n";
  cout << "  28  | Toothpaste                     |  22 EGP\n";
  cout << "  29  | Tissue Box                     |  20 EGP\n";
  cout << "  30  | Detergent Pack                 |  45 EGP\n";
  cout << "  ===================================================\n\n\n";
  
  
  
}

int itemcount()
{
  int it, mount, totcost = 0;
  cout << "Please Enter The Number Of Items You Need\n";
  cin >> mount;
  if(mount > 30)
  {
    cout << "Exist Mount Of Items\n";
    return 0;
  }
  cout << "Now Enter Your " << mount << " Code Of Items\n\n";
  
  for(int i = 0; i < mount; i++)
  {
    cout << "Item  => ";
    cin >> it;
    cout << "Price => " << items[it - 1][1] << "\n\n";
    totcost += items[it - 1][1];
  }
  cout << "Total Cost Of Your Payment is: " << totcost;

  finalpros(totcost);
  return 0;
}

int finalpros(int cost)
{
  int cash, rest;
  cout << "\nNow Please Give Me Money To Pay\n";
  cin >> cash;
  if(cash >= cost)
  {
    rest = cash - cost;
  } 
  else 
  {
    cout << "Sorry You Will Try Again\n";
    return 0;
  }


  if(rest == 0)
  {
    cout << "Thank You\n";
    return 0;
  }

  cout << "Rest Is \n";
  while(rest > 0)
  {
    if(rest >= 200)
    {
      cout << "200 EGP\n";
      rest -= 200;
    }
    else if(rest >= 100)
    {
      cout << "100 EGP\n";
      rest -= 100;
    }
    else if(rest >= 50)
    {
      cout << "50 EGP\n";
      rest -= 50;
    }
    else if(rest >= 20)
    {
      cout << "20 EGP\n";
      rest -= 20;
    }
    else if(rest >= 10)
    {
      cout << "10 EGP\n";
      rest -= 10;
    }
    else if(rest >= 5)
    {
      cout << "5 EGP\n";
      rest -= 5;
    }
    else if(rest >= 1)
    {
      cout << "1 EGP\n";
      rest -= 1;
    }
    
  }
  return 0;
}


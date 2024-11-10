#include <iostream>
#include <fstream>

using namespace std;
class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping ::menu()
{

    int choice;
    string email;
    string password;

    cout << "\t\t\t\t--------------------------------------------------------\n";
    cout << "\t\t\t\t                                                        \n";
    cout << "\t\t\t\t            supermarket main menu                       \n";
    cout << "\t\t\t\t                                                        \n";
    cout << "\t\t\t\t--------------------------------------------------------\n";
    cout << "\t\t\t\t                                                        \n";
    cout << "\t\t\t\t|   1)  Administrator          |\n";
    cout << "\t\t\t\t|                              |\n";
    cout << "\t\t\t\t|   2)  Buyer                  |\n";
    cout << "\t\t\t\t|                              |\n";
    cout << "\t\t\t\t|   3)  Exit                   |\n";
    cout << "\t\t\t\t|                              |\n";
    cout << "\n\t\t\t please select!";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\t\t\t  please Login  \n";
        cout << "\t\t\t  Enter Email   \n";
        cin >> email;
        cout << "\t\t\t  password      \n";
        cin >> password;

        if (email == "00" && password == "00"||email == "rohit@gmail.com" && password == "707172"||email == "sharma@gmail.com" && password == "707172"||email == "himanshu@gmail.com" && password == "707172")
        {
            administrator();
        }
        else
        {
            cout << "Invalid email/password";
        }
        break;

    case 2:
    {
        buyer();
    }

    case 3:
    {
        exit(0);
    }

    default:
    {
        cout << "please select from the given options";
    }
    }
}
void shopping::administrator()
{

    
    int choice;
    cout << "\n\n\n\t\t\t administrator menu";
    cout << "\n\t\t\t|_________1) Add the product_______________|";
    cout << "\n\t\t\t|                                          |";
    cout << "\n\t\t\t|_________2) modify the product____________|";
    cout << "\n\t\t\t|                                          |";
    cout << "\n\t\t\t|_________3) delete the product____________|";
    cout << "\n\t\t\t|                                          |";
    cout << "\n\t\t\t|_________4) back to main menu_____________|";

    cout << "\n\n\t please enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        add();
        break;

    case 2:
        edit();
        break;

    case 3:
        rem();
        break;

    case 4:
        menu();
        break;

    default:
        cout << "Invalid choice!";
    }
}

void shopping::buyer()
{

    int choice;
    cout << "\t\t\t  buyer \n";
    cout << "\t\t\t________________________________________________ \n";
    cout << "                                                       \n";
    cout << "\t\t\t     1) buy product                              \n";
    cout << "                                                       \n";
    cout << "\t\t\t     2)  Go back                                 \n";
    cout << "\t\t\t  enter your choice : ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        receipt();
        break;

    case 2:
        menu();

    default:
        cout << " invalid choice";
    }
}

void shopping::add()
{

    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;
     
    cout << "\n\n\t\t\t Add new product";
    cout << "\n\n\t product code of the product ";
    cin >> pcode;
    cout << "\n\n\t Name of the product ";
    cin >> pname;
    cout << "\n\n\t price of the product ";
    cin >> price;
    cout << "\n\n\t discount on product ";
    cin >> dis;

    data.open("database.txt", ios::in);

    if (!data)
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;

        while (!data.eof())
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();
    }

    if (token == 1)
        ;

    else
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    cout << "\n\n\t\t record inserted  ! ";
    administrator();

}
void shopping::edit()
{

    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout << "\n\t\t\t modify the  record";
    cout << "\n\t\t\t product code  :";
    cin >> pkey;

    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n file doesn't exist! ";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);

        data >> pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pkey == pcode)
            {
                token=1;
                cout << "\n\t\t product new code :";
                cin >> c;
                cout << "\n\t\t name of the product :";
                cin >> n;
                cout << "\n\t\t price :";
                cin >> p;
                cout << "\n\t\t discount :";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n\n\t\t record edited ";
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n record not found sorry!";
        }
    }
    administrator();
}
void shopping ::rem()
{

    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n\n\t  delete product";
    cout << "\n\n\t product code :";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "filr dosnt exist";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pcode == pkey)
            {
                cout << "\n\n\t product deleted succesfully";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n record not found sorry!";
        }
    }
    administrator();
}
void shopping ::list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n\n|_______________________________________________________________________________\n";
    cout << "proNo\t\tName\t\tprice\n";
    cout << "\n\n|_______________________________________________________________________________\n";
    data >> pcode >> pname >> price >> dis;
    while (!data.eof())
    {
        cout << pcode << "\t\t" << pname << "\t\t" << price << "\n";
        data >> pcode >> pname >> price >> dis;
    }
    data.close();
}

void shopping ::receipt()
{
    fstream data;
    int c=0;
    int arrc[100];
    int arrq[100];
    char choice;
    float amount = 0;
    float dis = 0;
    float total = 0;

    cout << "\n\n\t\t\t\t RECEIPT ";
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n empty database";
    }
    else
    {
        data.close();

        list();
        cout << "\n____________________________________________________________________________________\n";
        cout << "\n|                                                                                  |\n";
        cout << "\n|                     please place the order                                       |\n";
        cout << "\n|                                                                                  |\n";
        cout << "\n____________________________________________________________________________________\n";
        do
        {

            cout << "\n\n enter product code  :";
            cin >> arrc[c];
            cout << "\n\n enter product quantity :";
            cin >> arrq[c];
            for (int i = 0; i < c; i++)
            {
                if (arrc[c] == arrc[i])
                {
                    cout << "\n\n duplicate product code. please try again!";
                }
            }
            c++;
            cout << "\n\n do you want to buy another product ? if yes then press y else no press N :- ";
            cin >> choice;
           
    }while(choice=='y');
        

            cout << "\n\n\t\t\t________________________RECEIPT__________________________________________\n";
            cout << "\n product no\t product name\t product quantity\t price\t amount\t amount with discount\n";
          
            for (int i = 0; i < c; i++)
            {

                data.open("database.txt", ios::in);
                data >> pcode >> pname >> price >> dis;
                int a=1;
                while (a--)
                {
                    
                   
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100.0);
                    total = total + dis;
                    cout << "\n" << pcode << "\t\t" <<"  "<< pname << "\t\t" << "    "<<arrq[i] << "\t\t" <<"      "<<price << "\t\t" <<amount << "\t\t" << dis;
                    
                 data >> pcode >> pname >> price >> dis;

                }
               
            }
        }
        cout << "\n\n________________________________________________________";
        cout << "\n total amount: " << total;
    }
    int main()
    {
        shopping s;
        s.menu();           
        
    }

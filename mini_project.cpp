#include<iostream>
#include<fstream>


using namespace std;
class shopping
{
	private:
	
		int y ,m;
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

void shopping :: menu()
{
    y:
	int choice;
	string email;
	string password;
	cout<<"\nsupermarket main menu \n";
	cout<<"\n   1)  Administrator  \n";
	cout<<"\n   2)  Buyer          \n";
	cout<<"\n   3)  Exit           \n";
	cout<<"\n please select!       \n";
	cin>>choice;	
	switch(choice)
	{
		case 1:
			cout<<"\n  please Login  \n";
			cout<<"\n  Enter Email   \n";
			cin>>email;
			cout<<"\n  password      \n";
			cin>>password;
			if(email=="01" && password=="01")
			{
				administrator();
			}
			else
			{
				cout<<"Invalid email/password";
			}//
			break;
	 
	  
	 case  2:
	 {
	 	buyer();
	 	
	 }
	 
	 case  3:
	 	{
	 		exit(0);
		 }
		 
		 default :
		 	{
		 		cout<<"please select from the given options";
		
			 }
}
	goto y ;
}
void shopping::administrator()
{
	m:
	// int add;
	int choice;
	cout<<"\n administrator menu    \n";
	cout<<"\n 1) Add the product    \n";
	cout<<"\n 2) modify the product \n";
	cout<<"\n 3) delete the product \n";
	cout<<"\n 4) back to main menu  \n";
		
	cout<<"\n please enter your choice \n ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			add ();
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
							
		default :
			cout<<"Invalid choice!";
	}
goto m;
}

void shopping::buyer()
{
	n:
	int choice;
	cout<<"\n buyer               \n";
	cout<<"\n 1) buy product      \n";
	cout<<"\n 2)  Go back         \n";
	cout<<"\n enter your choice : \n";	
	cin>>choice;
	switch(choice)
	{
		case 1:
			receipt();
			break;
			
		case 2:
			menu();
			
		default :
			cout<<" invalid choice";
		
	
	}
goto n;	
} 	
void shopping::add()
{
	
	fstream data;
	int c,token=0;
	float p,d;
	string n;
	cout<<"\n Add new product             \n";
	cout<<"\n product code of the product \n";
	cin>>pcode;
	cout<<"\n Name of the product         \n";
	cin>>pname;
	cout<<"\n price of the product        \n";
	cin>>price;
	cout<<"\n discount on product         \n";
	cin>>dis;
	
	data.open("database.text",ios::in);
	
	if(!data)
	{
		data.open("database.txt", ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();
	}
	else
	{
		data>>c>>n>>p>>d;
		
		while(!data.eof())
		{
			if(c ==pcode)
			{
				token++;
				
			}
			data>>c>>n>>p>>d;
		}
		data.close();
		
		
	}
	if(token==1);
	else
	{
		data.open("database.txt", ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();	
	}
		cout<<"\n record inserted  \n ";

}
void shopping::edit()
{
	fstream data, data1;
	int pkey;
	int token=0;
	int c;
	float p;
	float d;
	string n;
	cout<<"\n modify the  record \n";
	cout<<"\n product code :     \n";
	cin>>pkey;
	
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"\n file doesn't exisr \n";
	}
	else
	{
		data1.open("database1.txt",ios::app|ios::out);
		
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())	
		{
			if(pkey==pcode)
			{
				cout<<"\n product new code :\n";
				cin>>c;
				cout<<"\n name of the product :\n";
				cin>>n;
				cout <<"\n price :\n";
				cin>>p;
				cout<<"\n discount :\n";
				cin>>d;
				data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
				cout<<"\n record edited \n";
			}
			else
			{
				data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
					
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n record not found sorry \n";
		}
	}	
}
void shopping :: rem()
{
	fstream data,data1;
	int pkey;
	int token=0;
	cout<<"\n delete product \n";
	cout<<"\n product code:\n";
	cin>>pkey;
	data.open("database.txt", ios::in);
	if(!data)
	{
		cout<<"filr dosnt exist";
		
	}
	else{
		data1.open("database1.txt",ios::app|ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())
		{
			if(pcode==pkey)
			{
				cout<<"\n product deleted succesfully \n";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n record not found sorry \n";
		}
		
	}
}
void shopping :: list()
{
		fstream data;
		data.open("database.txt", ios::in);
		cout<<"proNo\t\tName\t\tprice\n";
		data>>pcode>>pname>>price>>dis;	
		while(!data.eof())
		{
			cout<<pcode<<" "<<pname<<" "<<price<<"\n";
			data>>pcode>>pname>>price>>dis;		
		}
		data.close();
}

void shopping :: receipt()
{
	fstream data;
	int c;
	int arrc[100];
	int arrq[100];
	char choice;
	float amount=0;
	float dis=0;
	float total=0;
	
	
	cout<<"\n RECEIPT \n";
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"\n empty database \n";
	}
	else
	{
		data.close();
		list();

		cout<<"\n please place the order \n";

		do
		{
	
			cout<<"\n enter product code :\n";
			cin>>arrc[c];
			cout<<"\n enter product quantity :\n";
			cin>>arrq[c];
			for(int i=0; i<c; i++)
			{
				if(arrc[c]==arrc[i])
				{
					cout<<"\n duplicate product code. please try again \n";
				
				}
			 } 
			 c++;
			 cout<<"\n do you want to buyvanother product ? if yes then press y else no \n";
			 cin>>choice;
		}
		while(choice==y);
		
		
		cout<<"\n RECEIPT \n";
		cout<<"\n product no: product name: product quantity: price: amount: amount with discount: \n";
		
		for(int i=0;i<c;i++)
		{
			data.open("database.txt",ios::in);
			data>>pcode>>pname>>price>>dis;
			while(!data.eof())
			{
				amount=price*arrq[i];
				dis=amount-(amount*dis/100);
				total=total+dis;
				cout<<"\n"<<pcode<<"  "<<pname<<"  "<<arrq[i]<<"  "<<price<<"  "<<amount<<"   "<<dis<<"\n";
			}
			data>>pcode>>pname>>price>>dis;
		}
		
	}
	cout<<"\n total amount: "<<total;
}
int main()
{
	m:
	shopping s;
    s.menu();
	s.add();
	s.administrator();
	s.buyer();
	s.edit();
	s.list();
	s.receipt();
	s.rem();
	goto m;
}
	

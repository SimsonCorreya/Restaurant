#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
class Restaurant
{
  public: void cust_bill(void)
	  {
	  }
	  void dispnon_veg(void)
	  {
	  }
	  void disp_cuisine(void)
	  {cout<<"1.Indian\n";
	   cout<<"2.Italian\n";
	   cout<<"3.American\n";
	   cout<<"4.French\n";
	   cout<<"5.Chinese\n";
	  }
};

void main()
{ clrscr();
  Restaurant R1;
  int ch,cuis,item[20],no,i;
  char n;
  cout<<"\nYOSIM'S RESTAURANT";
  cout<<"\nWELCOME! \nAre you a ";
  cout<<"\n1.Non-Vegetarian";
  cout<<"\n2.Vegetarian";
  cout<<"Please Enter your choice(1 or 2): ";
  cin>>ch;
  switch(ch)
  { case 1:R1.disp_cuisine();
	   cout<<"Choose your cuisine : ";
	   cin>>cuis;
	   switch(cuis)
	   { case 1: cout<<"1.Parota\n";
		     cout<<"2.Rice\n";
		     cout<<"3.Butter Chicken\n";
		     cout<<"4.Kadai Chicken\n";
		    do
		    {cout<<"Enter your item numbers\n";
		     cin>>item[i];++i;
		     cout<<"Do you want aything else?(y/Y)";
		     cin>>n;
		    }while(n=='y'||n=='Y');
		    break;
	     case 2: cout<<"1.Margarita Pizza\n";
		     cout<<"2.Chicken Ravioli\n";
		     cout<<"3.Gelato(Dessert)\n";
		    do
		    {cout<<"Enter your item numbers\n";
		     cin>>item[i];++i;
		     cout<<"Do you want aything else?(y/Y)";
		     cin>>n;
		    }while(n=='y'||n=='Y');
		    break;
	     case 3: cout<<"1.Fried Chicken\n";
		     cout<<"2.Steak with mashed Potatoes\n";
		     cout<<"3.Dougnuts(Dessert)\n";
		    do
		    {cout<<"Enter your item numbers\n";
		     cin>>item[i];++i;
		     cout<<"Do you want aything else?(y/Y)";
		     cin>>n;
		    }while(n=='y'||n=='Y');
		    break;
	     case 4: cout<<"1.Chicken Croissant\n";
		     cout<<"2.Pasta a la Carte\n";
		     cout<<"3.Wine\n";
		    do
		    {cout<<"Enter your item numbers\n";
		     cin>>item[i];++i;
		     cout<<"Do you want aything else?(y/Y)";
		     cin>>n;
		    }while(n=='y'||n=='Y');
		    break;
	     case 5: cout<<"1.Schezwan Noodles\n";
		     cout<<"2.Camel Hump noodles\n";
		     cout<<"3.Chinese Hot&Sour Soup\n";
		    do
		    {cout<<"Enter your item numbers\n";
		     cin>>item[i];++i;
		     cout<<"Do you want aything else?(y/Y)";
		     cin>>n;
		    }while(n=='y'||n=='Y');
		    break;
	   } break;
    case 2: R1.disp_cuisine();
	    cout<<"Choose your cuisine : ";
	    cin>>cuis;
	    switch(cuis)
	    { case 1: cout<<"1.Parota\n";
		      cout<<"2.Rice\n";
		      cout<<"3.Paneer Masala\n";
		      cout<<"4.Vegetable Kurma\n";
		     do
		     {cout<<"Enter your item numbers\n";
		      cin>>item[i];++i;
		      cout<<"Do you want aything else?(y/Y)";
		      cin>>n;
		     }while(n=='y'||n=='Y');
		     break;
	      case 2: cout<<"1.Margarita Pizza\n";
		      cout<<"2.Pumpkin Ravioli\n";
		      cout<<"3.Gelato(Dessert)\n";
		     do
		     {cout<<"Enter your item numbers\n";
		      cin>>item[i];++i;
		      cout<<"Do you want aything else?(y/Y)";
		      cin>>n;
		     }while(n=='y'||n=='Y');
		     break;
	      case 3: cout<<"1.Vegetable Burger\n";
		      cout<<"2.Caesar's Salad\n";
		      cout<<"3.Dougnuts without egg(Dessert)\n";
		     do
		     {cout<<"Enter your item numbers\n";
		      cin>>item[i];++i;
		      cout<<"Do you want aything else?(y/Y)";
		      cin>>n;
		     }while(n=='y'||n=='Y');
		     break;
	      case 4: cout<<"1.Cheese Croissant\n";
		      cout<<"2.Pasta a la Fromage\n";
		      cout<<"3.Wine\n";
		     do
		     {cout<<"Enter your item numbers\n";
		      cin>>item[i];++i;
		      cout<<"Do you want aything else?(y/Y)";
		      cin>>n;
		     }while(n=='y'||n=='Y');
		     break;
	      case 5: cout<<"1.Schezwan Noodles\n";
		      cout<<"2.Camel Hump noodles\n";
		      cout<<"3.Chinese Hot&Sour Soup\n";
		     do
		     {cout<<"Enter your item numbers\n";
		      cin>>item[i];++i;
		      cout<<"Do you want aything else?(y/Y)";
		      cin>>n;
		     }while(n=='y'||n=='Y');
		     break;
	    } break;
   }
   getch();
}


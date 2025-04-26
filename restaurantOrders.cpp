#include <iostream>
#include <string>
#include <queue>
using namespace std;
class rest{
	protected:
		string cName;
		float bill;
	public:
		rest(string n)
		{
			cName=n;
			bill=0.0;
		}
		float order();
		void deleteItem();
		void deleteOrder();
};
class restaurant:public rest{
	private:
		char isVIP;
	public:
		restaurant(string name,char is):rest(name)
		{
			isVIP=is;
		}
};
float rest::order()
{
	cout<<"---------Choose the food--------"<<endl;
    cout<<"1.Starters\n2.Indian\n3.Continental\n4.Breads & Rice\n5.Desserts\n6.Beverages\n7.Bill:"<<endl;
    cin>>order;
    float bill=0.0;
    switch(order)
    {
        char reorder;
        case 1:
            do
            {
                int token,quantity;
                cout<<"----------Starters Menu----------"<<endl;
                cout<<"1.Veg Spring Rolls            -        Rs.120\n";
                cout<<"2.Chicken Lollipop            -        Rs.185\n";
                cout<<"3.Panner Tikka            	 -        Rs.150\n";
                cout<<"4.Crispy Corn                 -        Rs.130\n";
                cout<<"5.Egg Devil                   -        Rs.150\n";
                cout<<"6.Stuffed Mushrooms           -        Rs.140\n";
                cout<<"7.Chicken Malai Tikka         -        Rs.190\n";
                cout<<"Enter your order number(1-7):"<<endl;
                cin>>token;
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                switch(token)
                {
                    case 1:
                        bill+=120*quantity;
                        break;
                    case 2:
                        bill+=185*quantity;
                        break;
                    case 3:
                        bill+=150*quantity;
                        break;
                    case 4:
                        bill+=130*quantity;
                        break;
                    case 5:
                        bill+=150*quantity;
                        break;
                    case 6:
                        bill+=140*quantity;
                        break;
                    case 7:
                        bill+=190*quantity;
                        break;
                    default:
                        cout<<"Invalid token";
                }
                cout<<"Want to add more items?(y/n):"<<endl;
                cin>>reorder;
            }while(reorder=='y' || reorder=='Y');
            break;
        case 2:
            do
            {
                int order,quantity;
                cout<<"----------Indian Menu----------"<<endl;
                cout<<"1.Butter Chicken            -        Rs.250\n";
                cout<<"2.Panner Butter Masala      -        Rs.200\n";
                cout<<"3.Dal Makhani               -        Rs.150\n";
                cout<<"4.Chicken Biryani           -        Rs.220\n";
                cout<<"5.Veg Bhiryani              -        Rs.180\n";
                cout<<"6.Aalu Paratha              -        Rs.140\n";
                cout<<"7.Fish Curry                -        Rs.250\n";
                cout<<"Enter your order number(1-7):"<<endl;
                cin>>token;
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                switch(token)
                {
                    case 1:
                        bill+=250*quantity;
                        break;
                    case 2:
                        bill+=200*quantity;
                        break;
                    case 3:
                        bill+=150*quantity;
                        break;
                    case 4:
                        bill+=220*quantity;
                        break;
                    case 5:
                        bill+=180*quantity;
                        break;
                    case 6:
                        bill+=140*quantity;
                        break;
                    case 7:
                        bill+=250*quantity;
                        break;
                    default:
                        cout<<"Invalid token";
                }
                cout<<"Want to add more items?(y/n):"<<endl;
                cin>>reorder;
                }while(reorder=='Y' || reorder=='y');
            break;
        case 3:
            do
            {
                int order,quantity;
                cout<<"----------Continental Menu----------"<<endl;
                cout<<"1.Chicken Alfredo Pasta                 -        Rs.240\n";
                cout<<"2.Lamb chops with Mashed Poatatoes      -        Rs.320\n";
                cout<<"3.Stufed Bell Peppers                   -        Rs.180\n";
                cout<<"4.Butterd Veggies                       -        Rs.90\n";
                cout<<"5.Veg Laanga                            -        Rs.220\n";
                cout<<"6.BBQ Chicken Wings                     -        Rs.190\n";
                cout<<"Enter your order number(1-6):"<<endl;
                cin>>token;
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                switch(token)
                {
                    case 1:
                        bill+=240*quantity;
                        break;
                    case 2:
                        bill+=320*quantity;
                        break;
                    case 3:
                        bill+=180*quantity;
                        break;
                    case 4:
                        bill+=90*quantity;
                        break;
                    case 5:
                        bill+=220*quantity;
                        break;
                    case 6:
                        bill+=190*quantity;
                        break;
                    default:
                        cout<<"Invalid token";
                }
                cout<<"Want to add more items?(y/n):"<<endl;
                cin>>reorder;
            }while(reorder=='Y' || reorder=='y');
            break;
        case 4:
            int order,quantity;
            do
            {
                cout<<"----------Breads & Rice Menu----------"<<endl;
                cout<<"1.Naan(plain/butter)                 -        Rs.40\n";
                cout<<"2.Tandoori Roti   					-        Rs.25\n";
                cout<<"3.Steamed Rice                		-        Rs.80\n";
                cout<<"4.Jeera Rice                    		-        Rs.100\n";
                cout<<"Enter your order number(1-4):"<<endl;
                cin>>token;
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                switch(token)
                {
                    case 1:
                        bill+=40*quantity;
                        break;
                    case 2:
                        bill+=25*quantity;
                        break;
                    case 3:
                        bill+=80*quantity;
                        break;
                    case 4:
                        bill+=100*quantity;
                        break;
                    default:
                        cout<<"Invalid token";
                }
                cout<<"Want to add more items?(y/n):"<<endl;
                cin>>reorder;
            }while(reorder=='y' || reorder=='Y');
            break;
        case 5:
            int order,quantity;
            do
            {
                cout<<"----------Desserts Menu----------"<<endl;
                cout<<"1.Gulab Jamun                -        Rs.60\n";
                cout<<"2.Chocolate Brownie   		-        Rs.80\n";
                cout<<"3.Ice cream                	-        Rs.40\n";
                cout<<"4.Rasmalai                   -        Rs.90\n";
                cout<<"5.Tiramisu                   -        Rs.110\n";
                cout<<"6.Fruit salad                -        Rs.80\n";
                cout<<"Enter your order number(1-4):"<<endl;
                cin>>token;
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                switch(token)
                {
                    case 1:
                        bill+=60*quantity;
                        break;
                    case 2:
                        bill+=80*quantity;
                        break;
                    case 3:
                        bill+=40*quantity;
                        break;
                    case 4:
                        bill+=90*quantity;
                        break;
                    case 5:
                        bill+=110*quantity;
                        break;
                    case 6:
                        bill+=80*quantity;
                        break;
                    default:
                        cout<<"Invalid token";
                }
                cout<<"Want to add more items?(y/n):"<<endl;
                cin>>reorder;
            }while(reorder=='y' || reorder=='Y');
            break;
        case 6:
            do
            {
                int order,quantity;
                cout<<"----------Beverages Menu----------"<<endl;
                cout<<"1.Masala Chai            -        Rs.30\n";
                cout<<"2.Cold coffee        	-        Rs.70\n";
                cout<<"3.Fresh Lime Soda        -        Rs.50\n";
                cout<<"4.Soft Drinks            -        Rs.40\n";
                cout<<"5.Coconut water          -        Rs.60\n";
                cout<<"6.Cappuccino             -        Rs.90\n";
                cout<<"Enter your order number(1-6):"<<endl;
                cin>>token;
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                switch(token)
                {
                    case 1:
                        bill+=30*quantity;
                        break;
                    case 2:
                        bill+=70*quantity;
                        break;
                    case 3:
                        bill+=50*quantity;
                        break;
                    case 4:
                        bill+=40*quantity;
                        break;
                    case 5:
                        bill+=60*quantity;
                        break;
                    case 6:
                        bill+=90*quantity;
                        break;
                    default:
                        cout<<"Invalid token";
                }
                cout<<"Want to add more items?(y/n):"<<endl;
                cin>>reorder;
            }while(reorder=='Y' || reorder=='y');
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
}
int main()
{
	bool isOpen=true;
	queue<string> vipQueue;
	queue<string> customerQueue;
	int c=0;
	restaurant r;
	while(c<=500)
	{
		int choice;
		cout<<"----------Welcome to Restaurant----------"<<endl;
		cout<<"----------What is your choice?-----------"<<endl;
		string name;char isVip;
		cout<<"Your good name please:"<<endl;
		cin>>name;
		cin.ignore();
		cout<<"Is VIP?(Y/N):"<<endl;
		cin>>isVip;
		if(isVip=='Y' || isVip=='y')
		{
			vipQueue.push(name);
		}
		else
		{
			customerQueue.push(name);
		}
		cout<<"1.Place order\n2.Delete item\n3.Delete order\n4.Show Queue\n5.Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				r.order();
			case 2:
				cout<<"Delete item:"<<endl;
				
		}
	}
}

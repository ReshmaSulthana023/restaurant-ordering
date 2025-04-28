#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <map>
using namespace std;
map<string,float> priceMenu={
        {"Veg Spring Rolls", 120},
        {"Chicken Lollipop", 185},
        {"Panner Tikka",150},
        {"Crispy Corn",130},
        {"Egg Devil",150},
        {"Stuffed Mushrooms",140},
        {"Chicken Malai Tikka",190},
        {"Butter Chicken",250},
        {"Panner Butter Masala",200},
        {"Dal Makhani",150},
        {"Chicken Biryani",220}, 
        {"Veg Bhiryani",180},     
        {"Aalu Paratha",140},
        {"Fish Curry",250},
        {"Chicken Alfredo Pasta",240},              
        {"Lamb chops with Mashed Poatatoes",320},   
        {"Stufed Bell Peppers",180},                 
        {"Butterd Veggies",90},                
        {"Veggies Quesadillas",220},                         
        {"BBQ Chicken Wing",190},            
        {"Naan(plain/butter)",40},               
        {"Tandoori Roti",25},   
        {"Steamed Rice",80},                	
        {"Jeera Rice",100},   
        {"Gulab Jamun",60},              
        {"Chocolate Brownie",80},   	
        {"Ice cream",40},               	
        {"Rasmalai",90},                   
        {"Tiramisu",110},                   
        {"Fruit salad",80},   
        {"Masala Chai",30},            
        {"Cold coffee",70},       	
        {"Fresh Lime Soda",50},       
        {"Soft Drinks",40},            
        {"Coconut water",60},          
        {"Cappuccino",90},                      
};
class rest{
	protected:
		string cName;
		float bill;
		vector<pair<string,int>>orders;
	public:
		rest(string n)
		{
			cName=n;
			bill=0.0;
		}
		void order();
		void deleteItem(int itemNum);
		void deleteOrder(char isVip);
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
void rest::order()
{
	int order;char reorder;
	cout<<"---------Choose the food--------"<<endl;
    do{
    cout<<"1.Starters\n2.Indian\n3.Continental\n4.Breads & Rice\n5.Desserts\n6.Beverages:"<<endl;
    cin>>order;
    cin.ignore();
    switch(order)
    {
        char reorder;
        case 1:
                {
                    string token;int quantity;
                cout<<"----------Starters Menu----------"<<endl;
                cout<<"1.Veg Spring Rolls            -        Rs.120\n";
                cout<<"2.Chicken Lollipop            -        Rs.185\n";
                cout<<"3.Panner Tikka            	 -        Rs.150\n";
                cout<<"4.Crispy Corn                 -        Rs.130\n";
                cout<<"5.Egg Devil                   -        Rs.150\n";
                cout<<"6.Stuffed Mushrooms           -        Rs.140\n";
                cout<<"7.Chicken Malai Tikka         -        Rs.190\n";
                cout<<"Enter your food:"<<endl;
                getline(cin,token);
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                auto it=priceMenu.find(token);
                if(it != priceMenu.end() && quantity>0)
                {
                    orders.push_back({token,quantity});
                    bill+=it->second*quantity;
                    cout<<"Item added to order."<<endl;
                }
                else
                {
                    cout<<"Invalid food item,choose again"<<endl;
                }
                break;
                }
        case 2:
                {
                    string token;int quantity;
                cout<<"----------Indian Menu----------"<<endl;
                cout<<"1.Butter Chicken            -        Rs.250\n";
                cout<<"2.Panner Butter Masala      -        Rs.200\n";
                cout<<"3.Dal Makhani               -        Rs.150\n";
                cout<<"4.Chicken Biryani           -        Rs.220\n";
                cout<<"5.Veg Bhiryani              -        Rs.180\n";
                cout<<"6.Aalu Paratha              -        Rs.140\n";
                cout<<"7.Fish Curry                -        Rs.250\n";
                cout<<"Enter your food:"<<endl;
                getline(cin,token);
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                auto it=priceMenu.find(token);
                if(it != priceMenu.end() && quantity>0)
                {
                    orders.push_back({token,quantity});
                    bill+=it->second*quantity;
                    cout<<"Item added to order."<<endl;
                }
                else
                {
                    cout<<"Invalid food item,choose again"<<endl;
                }
                break;
                }
        case 3:
                {
                    string token;int quantity;
                cout<<"----------Continental Menu----------"<<endl;
                cout<<"1.Chicken Alfredo Pasta                 -        Rs.240\n";
                cout<<"2.Lamb chops with Mashed Poatatoes      -        Rs.320\n";
                cout<<"3.Stufed Bell Peppers                   -        Rs.180\n";
                cout<<"4.Butterd Veggies                       -        Rs.90\n";
                cout<<"5.Veggies Quesadillas                   -        Rs.220\n";
                cout<<"6.BBQ Chicken Wings                     -        Rs.190\n";
                cout<<"Enter your food:"<<endl;
                getline(cin,token);
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                auto it=priceMenu.find(token);
                if(it != priceMenu.end() && quantity>0)
                {
                    orders.push_back({token,quantity});
                    bill+=it->second*quantity;
                    cout<<"Item added to order."<<endl;
                }
                else
                {
                    cout<<"Invalid food item,choose again"<<endl;
                }
                break;
                }
        case 4:
                {
                    string token;int quantity;
                cout<<"----------Breads & Rice Menu----------"<<endl;
                cout<<"1.Naan(plain/butter)                 -        Rs.40\n";
                cout<<"2.Tandoori Roti   					-        Rs.25\n";
                cout<<"3.Steamed Rice                		-        Rs.80\n";
                cout<<"4.Jeera Rice                    		-        Rs.100\n";
                cout<<"Enter your food:"<<endl;
                getline(cin,token);
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                auto it=priceMenu.find(token);
                if(it != priceMenu.end() && quantity>0)
                {
                    orders.push_back({token,quantity});
                    bill+=it->second*quantity;
                    cout<<"Item added to order."<<endl;
                }
                else
                {
                    cout<<"Invalid food item,choose again"<<endl;
                }
                break;
                }
        case 5:            
                {
                    string token;int quantity;
                cout<<"----------Desserts Menu----------"<<endl;
                cout<<"1.Gulab Jamun                -        Rs.60\n";
                cout<<"2.Chocolate Brownie   		-        Rs.80\n";
                cout<<"3.Ice cream                	-        Rs.40\n";
                cout<<"4.Rasmalai                   -        Rs.90\n";
                cout<<"5.Tiramisu                   -        Rs.110\n";
                cout<<"6.Fruit salad                -        Rs.80\n";
                cout<<"Enter your food:"<<endl;
                getline(cin,token);
                cout<<"Enter quantity:"<<endl;
                cin>>quantity;
                auto it=priceMenu.find(token);
                if(it != priceMenu.end() && quantity>0)
                {
                    orders.push_back({token,quantity});
                    bill+=it->second*quantity;
                    cout<<"Item added to order."<<endl;
                }
                else
                {
                    cout<<"Invalid food item,choose again"<<endl;
                }
                break;
                }
        case 6:
                {
                    string token;int quantity;
                    cout<<"----------Beverages Menu----------"<<endl;
                    cout<<"1.Masala Chai            -        Rs.30\n";
                    cout<<"2.Cold coffee        	-        Rs.70\n";
                    cout<<"3.Fresh Lime Soda        -        Rs.50\n";
                    cout<<"4.Soft Drinks            -        Rs.40\n";
                    cout<<"5.Coconut water          -        Rs.60\n";
                    cout<<"6.Cappuccino             -        Rs.90\n";
                    cout<<"Enter your food:"<<endl;
                    getline(cin,token);
                    cout<<"Enter quantity:"<<endl;
                    cin>>quantity;
                    auto it=priceMenu.find(token);
                    if(it != priceMenu.end() && quantity>0)
                    {
                        orders.push_back({token,quantity});
                        bill+=it->second*quantity;
                        cout<<"Item added to order."<<endl;
                    }
                    else
                    {
                        cout<<"Invalid food item,choose again"<<endl;
                    }
                    break;
                }
        default:
            cout<<"Invalid choice"<<endl;
    }
    cout<<"Want to add more items?(y/n):"<<endl;
    cin>>reorder;
    cin.ignore();
    }while(reorder=='y' || reorder=='Y');
}
void rest::deleteItem(int del)
{
	if(del>=1 && del<=orders.size())
    {
	    string item=orders[del-1].first;
	    int quantity=orders[del-1].second;
	    bill-=priceMenu[item]*quantity;
	    orders.erase(orders.begin()+del-1);
	    cout<<"Item deleted successfully and bill updated"<<endl;
    }
    else
    {
        cout<<"Invalid item"<<endl;
    }
}
int mainMenu(restaurant &r,queue<string> &vipQueue,queue<string> &customerQueue,char isVip)
{
    int choice;float bill;
    cout<<"----------What is your choice?-----------"<<endl;
    cout<<"1.Place order\n2.Delete item\n3.Delete order\n4.Show Queue\n5.Bill:"<<endl;
    cin>>choice;
    cin.ignore();
        switch(choice)
        {
            case 1:
                r.order();
                break;
            case 2:
                int del;
                cout<<"Enter Delete item:"<<endl;
                cin>>del;
                r.deleteItem(del);
                break;
            case 3:
                if(isVip=='y' || isVip=='Y')
                {
                    vipQueue.pop();
                }
                else
                {
                    customerQueue.pop();
                }
                break;
            case 4:
            cout<<"----------VIP Queue---------"<<endl;
            if(vipQueue.empty())
            cout<<"No Vip Customers"<<endl;
            else
            {
                queue<string> temp=vipQueue;
                while(!temp.empty())
                {
                    cout<<temp.front()<<endl;
                    temp.pop();
                }
            }
            cout<<"----------Customers Queue---------"<<endl;
            if(customerQueue.empty())
            cout<<"No Customers"<<endl;
            else
            {
                queue<string> temp=customerQueue;
                while(!temp.empty())
                {
                    cout<<temp.front()<<endl;
                    temp.pop();
                }
            }
            break;
            case 5:
                {
                    cout<<"============Total Bill:     Rs."<<bill<<"============="<<endl;
                    cout<<"----------Thank you for visiting!-------------"<<endl;
                    cout<<"----------Hope you will enjoy the food-----------"<<endl;
                    cout<<"========================================================"<<endl;
                }
                break;
            default:
                cout<<"Invalid Choice please enter again:"<<endl;
                cout<<"1.Place order\n2.Delete item\n3.Delete order\n4.Show Queue\n5.Exit"<<endl;
        }
        return choice;
}
int main()
{
	int c=0;
	queue<string> vipQueue;
	queue<string> customerQueue;
	int choice;
    char newCustomer;
    do
    {
        int mainChoice;
        cout<<"----------Welcome to Restaurant----------"<<endl;
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
        restaurant r (name,isVip);
        do
        {
            mainChoice=mainMenu(r,vipQueue,customerQueue,isVip);
        }while(mainChoice!=5);
        cout<<"Is there new Customer?(y/n):"<<endl;
        cin>>newCustomer;
        cin.ignore();
    }while(newCustomer=='Y' || newCustomer=='y');
}

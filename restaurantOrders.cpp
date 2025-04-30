#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <map>
#include <iomanip>
#include <ctime>
using namespace std;
map<string,float> priceMenu={
        {"Veg Spring Rolls", 120.0},
        {"Chicken Lollipop", 185.0},
        {"Paneer Tikka",150.0},
        {"Crispy Corn",130.0},
        {"Egg Devil",150.0},
        {"Stuffed Mushrooms",140.0},
        {"Chicken Malai Tikka",190.0},
        {"Butter Chicken",250.0},
        {"Paneer Butter Masala",200.0},
        {"Dal Makhani",150.0},
        {"Chicken Biryani",220.0}, 
        {"Veg Biryani",180.0},     
        {"Aalu Paratha",140.0},
        {"Fish Curry",250.0},
        {"Chicken Alfredo Pasta",240.0},              
        {"Lamb chops with Mashed Potatoes",320.0},   
        {"Stuffed Bell Peppers",180.0},                 
        {"Buttered Veggies",90.0},                
        {"Veggies Quesadillas",220.0},                         
        {"BBQ Chicken Wing",190.0},            
        {"Naan(plain/butter)",40.0},               
        {"Tandoori Roti",25.0},   
        {"Steamed Rice",80.0},                	
        {"Jeera Rice",100.0},   
        {"Gulab Jamun",60.0},              
        {"Chocolate Brownie",80.0},   	
        {"Ice cream",40.0},               	
        {"Rasmalai",90.0},                   
        {"Tiramisu",110.0},                   
        {"Fruit salad",80.0},   
        {"Masala Chai",30.0},            
        {"Cold coffee",70.0},       	
        {"Fresh Lime Soda",50.0},       
        {"Soft Drinks",40.0},            
        {"Coconut water",60.0},          
        {"Cappuccino",90.0},                      
};
class rest{
	private:
		float bill;
		vector<pair<string, int>> orders;
        int tableNumber;
	public:
        string cName;
		rest(string n,int table) : cName(n), bill(0) ,tableNumber(table) {}
		void order();
		void deleteItem(int itemNum);
		void deleteOrder(char isVip);
        void showBill();
        void applyDiscount();
        int getTableNumber() const {return tableNumber; }
};
class restaurant : public rest{
    private:
        char isVIP;
    public:
	    restaurant(string name,char isVip,int table) : rest(name,table) , isVIP(isVip) {}
        char getVipStatus() const {return isVIP; }
        void setVipStatus(char status) {isVIP = status;}
};
class Kitchen{
    private:
        queue<pair<int ,vector<pair<string,int>>>> orderQueue;
        map<int,bool> tables;
        public:
            void addTable(int tableNumber)
            {
                tables[tableNumber]=false;
            }
            void displayTables()
            {
                cout<<"\n-----Tables-----\n";
                cout<<setw(10)<<"Table No"<<setw(15)<<"status\n";
                for(const auto& table : tables)
                {
                    cout<<setw(10)<<table.first<<setw(15)<<(table.second?"Occupied" : "Available")<<endl;
                }
            }
            void placeOrder(int tableNumber,const vector<pair<string,int>>& items){
                orderQueue.push({tableNumber,items});
                tables[tableNumber]=true;
                cout<<"Order sent to kitchen for table:"<<tableNumber<<endl;
            }
            void processOrders()
            {
                if(orderQueue.empty()){
                    cout<<"No pending orders in Kitchen"<<endl;
                    return;
                }
                cout<<"\n------Kitchen Orders-------\n";
                while(!orderQueue.empty())
                {
                    auto order=orderQueue.front();
                    orderQueue.pop();
                    cout<<"Processing order for table "<<order.first<<":\n";
                    for(const auto& item : order.second)
                    {
                        cout<<" - "<<item.first<<"(Qty:"<<item.second<<")\n";
                    }
                    cout<<"Order completed\n";
                }
            }
            void clearTable(int tableNumber)
            {
                tables[tableNumber]=false;
            }
            bool isTableOccupied(int tableNumber)
            {
                return tables.count(tableNumber) && tables[tableNumber];
            }
};
void rest::order()
{
	int category;char reorder;string token;int quantity;
	cout<<"---------Choose the food--------"<<endl;
    do{
    cout<<"1.Starters\n2.Indian\n3.Continental\n4.Breads & Rice\n5.Desserts\n6.Beverages:"<<endl;
    cin>>category;
    cin.ignore();
    switch(category)
    {
        case 1:
                {
                string token;int quantity;
                cout<<"----------Starters Menu----------"<<endl;
                cout<<"1.Veg Spring Rolls            -        Rs.120\n";
                cout<<"2.Chicken Lollipop            -        Rs.185\n";
                cout<<"3.Paneer Tikka            	 -        Rs.150\n";
                cout<<"4.Crispy Corn                 -        Rs.130\n";
                cout<<"5.Egg Devil                   -        Rs.150\n";
                cout<<"6.Stuffed Mushrooms           -        Rs.140\n";
                cout<<"7.Chicken Malai Tikka         -        Rs.190\n";
                break;
                }
        case 2:
                {
                string token;int quantity;
                cout<<"----------Indian Menu----------"<<endl;
                cout<<"1.Butter Chicken            -        Rs.250\n";
                cout<<"2.Paneer Butter Masala      -        Rs.200\n";
                cout<<"3.Dal Makhani               -        Rs.150\n";
                cout<<"4.Chicken Biryani           -        Rs.220\n";
                cout<<"5.Veg Biryani               -        Rs.180\n";
                cout<<"6.Aalu Paratha              -        Rs.140\n";
                cout<<"7.Fish Curry                -        Rs.250\n";
                break;
                }
        case 3:
                {
                string token;int quantity;
                cout<<"----------Continental Menu----------"<<endl;
                cout<<"1.Chicken Alfredo Pasta                 -        Rs.240\n";
                cout<<"2.Lamb chops with Mashed Potatoes       -        Rs.320\n";
                cout<<"3.Stuffed Bell Peppers                  -        Rs.180\n";
                cout<<"4.Buttered Veggies                      -        Rs.90\n";
                cout<<"5.Veggies Quesadillas                   -        Rs.220\n";
                cout<<"6.BBQ Chicken Wings                     -        Rs.190\n";
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
                break;
                }
    }
    cout<<"Enter your food item correctly:"<<endl;
    getline(cin,token);
cin.ignore();
    cout<<"Enter quantity:"<<endl;
    cin>>quantity;
    cin.ignore();

    auto it=priceMenu.find(token);
    if(it != priceMenu.end() && quantity > 0)
    {
        orders.push_back({token,quantity});
        bill += it->second * quantity;
        cout<<"Item added to order."<<endl;
    }
    else
    {
        cout<<"Invalid item or quantity"<<endl;
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
	    string item = orders[del-1].first;
	    int quantity = orders[del-1].second;
	    bill -= priceMenu[item]*quantity;
	    orders.erase(orders.begin() + del-1);
	    cout<<"Item deleted successfully and bill updated"<<endl;
    }
    else
    {
        cout<<"Invalid item"<<endl;
    }
}
void rest::showBill()
{
    cout<<"------------Order Summary-----------"<<endl;
    time_t now=time(0);
    cout<<"Table: "<<tableNumber<<"\tCustomer: "<<cName<<endl;
    cout<<"Date: "<<ctime(&now);
    for(auto& order : orders)
    {
        cout<<order.first<<"\t\t-\t\tQty:      "<<order.second<<endl;
    }
    cout<<"==========Total Bill:           Rs."<<bill<<endl;
    if(bill>2000)
    {
        applyDiscount();
    }
}
void rest::applyDiscount()
{
    float discount = bill * 0.15;
    bill -= discount;
    cout<<"===========Total Bill(after 15 percent discount)============"<<bill<<endl;
}
int mainMenu(restaurant &r,Kitchen &kitchen,queue<restaurant> &vipQueue,queue<restaurant> &customerQueue,char isVip,int &servedVipCount,int &servedRegularCount)
{
    int choice;
    cout<<"----------What is your choice?-----------"<<endl;
    cout<<"1.Place order\n2.Delete item\n3.Delete order\n4.Show Queue\n5.Process Kitchen\n6.View Table\n7.Bill\n8.Exit:"<<endl;
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
                if(!vipQueue.empty()) vipQueue.pop();
            }
            else
            {
                if(!customerQueue.empty()) customerQueue.pop();
            }
            kitchen.clearTable(r.getTableNumber());
            return -1;
        case 4:
        cout<<"----------VIP Queue---------"<<endl;
        if(vipQueue.empty())
        cout<<"No Vip Customers"<<endl;
        else
        {
            queue<restaurant> temp = vipQueue;
            while(!temp.empty())
            {
                cout<<"Customer: "<<temp.front().cName<<"at Table "<<temp.front().getTableNumber()<<endl;
                temp.pop();
            }
        }
        cout<<"----------Customers Queue---------"<<endl;
        if(customerQueue.empty())
        cout<<"No Customers"<<endl;
        else
        {
            queue<restaurant> temp=customerQueue;
            while(!temp.empty())
            {
                cout<<"Customer: "<<temp.front().cName<<"at Table "<<temp.front().getTableNumber()<<endl;
                temp.pop();
            }
        }
        break;
        case 5:
            kitchen.processOrders();
            break;
        case 6:
            kitchen.displayTables();
            break;
        case 7:
            r.showBill();
            kitchen.clearTable(r.getTableNumber());
            cout<<"----------Thank you for visiting!-------------"<<endl;
            cout<<"----------Hope you enjoyed the food-----------"<<endl;
            int rating;
            cout<<"Please rate the service out of 5:"<<endl;
            cin>>rating;
            if(rating < 1 || rating >5)
            {
                cout<<"Invalid rating,please enter rating between 1 and 5:"<<endl;
            }
            else
            {
                cout<<"Thank you for your feedback"<<endl;
                cout<<"========================================================"<<endl;
            }
            break;
        case 8:
            return -1;
        default:
            cout<<"1.Place order\n2.Delete item\n3.Delete order\n4.Show Queue\n5.Bill"<<endl;
    }
    return choice;
}
int main()
{
    Kitchen kitchen;
    for(int i=1;i<=30;i++)
    {
        kitchen.addTable(i);
    }
	int servedVipCount=0;
	queue<restaurant> vipQueue;
	queue<restaurant> customerQueue;
    char newCustomer;
    do
    {
        cout<<"----------Welcome to Restaurant----------"<<endl;
        string name;char isVip;
        cout<<"Your good name please:"<<endl;
        cin>>name;
        cout<<"Is VIP?(Y/N):"<<endl;
        cin>>isVip;
        cin.ignore();
        int tableNumber;
        bool validTable=false;
        while(!validTable)
        {
            cout<<"Enter table Number(1-30):"<<endl;
            cin>>tableNumber;
            cin.ignore();
            if(kitchen.isTableOccupied(tableNumber))
            {
                cout<<"Table "<<tableNumber<<" is already occupied"<<endl;
                continue;
            }
            validTable=true;
        }
        restaurant r (name,isVip,tableNumber);
        if(isVip=='Y' || isVip=='y')
        {
            vipQueue.push(r);
        }
        else
        {
            customerQueue.push(r);
        }
        while(!vipQueue.empty() || !customerQueue.empty())
        {
            if(!vipQueue.empty() && servedVipCount<2)
            {
                restaurant cCustomer=vipQueue.front();
                vipQueue.pop();
                cout<<"\nNow serving VIP customer: "<<cCustomer.getTableNumber()<<endl;
                int mainChoice;
                do{
                    mainChoice=mainMenu(cCustomer,kitchen,vipQueue,customerQueue,cCustomer.getVipStatus(),servedVipCount);
                }while(mainChoice!=7 && mainChoice>0);
                servedVipCount++;
		    if(servedVipCount>=2)
		    {
		       servedVipCount=0;
		    }
            }
            else if(!customerQueue.empty())
            {
                restaurant cCustomer=customerQueue.front();
                customerQueue.pop();
                cout<<"\nNow serving  customer: "<<cCustomer.getTableNumber()<<endl;
                int mainChoice;
                do{
                    mainChoice=mainMenu(cCustomer,kitchen,vipQueue,customerQueue,cCustomer.getVipStatus(),servedVipCount,servedRegularCount);
                }while(mainChoice!=7 && mainChoice>0);
            }
        }
        cout<<"Is there new Customer?(y/n):"<<endl;
        cin>>newCustomer;
	cin.ignore();
    }while(newCustomer=='Y' || newCustomer=='y');
    return 0;
}

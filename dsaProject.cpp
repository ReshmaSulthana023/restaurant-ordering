#include <iostream>
#include <string>
#include <queue>
using namespace std;
float Order()
{
	int choice;
    float bill=0.0;
    cout<<"1.Breakfast\n2.Meals\n3.Snacks\n4.Desserts:"<<endl;
    cin>>choice;
    switch(choice)
    {
        int order,quantity;
        char reorder;
        case 1:
            do{
                int order,quantity;
                cout << "\n-------- Breakfast Menu --------\n";
                cout << "1. Dosa - Rs.80\n";
                cout << "2. Poori - Rs.65\n";
                cout << "3. Idli - Rs.80\n";
                cout << "4. Vada - Rs.60\n";
                cout << "5. Aloo Paratha - Rs.150\n";
                cout << "6. Paneer Paratha - Rs.210\n";
                cout << "7. Poha - Rs.100\n";
                cout << "Enter your order number (1-7): ";
                cin >> order;
                cout<<"Enter quantity:";
                cin>>quantity;
                switch(order)
                {
                    case 1:
                        bill+=80*quantity;
                        break;
                    case 2:
                        bill+=65*quantity;
                        break;
                    case 3:
                        bill+=80*quantity;
                        break;
                    case 4:
                        bill+=60*quantity;
                        break;
                    case 5:
                        bill+=150*quantity;
                        break;
                    case 6:
                        bill+=210*quantity;
                        break;
                    case 7:
                        bill+=100*quantity;
                        break;
                    default:
                        cout<<"Invalid order";
                }
                cout<<"Want to order again?(y/n):";
                cin>>reorder;
            }while(reorder=='y' || reorder=='Y');
            break;
        case 2:
            do
            {
                int order,quantity;
                cout << "\n-------- Meals Menu --------\n";
                cout << "1. Chicken Biryani - Rs.210\n";
                cout << "2. Mutton Biryani - Rs.300\n";
                cout << "3. Vegetable Biryani - Rs.200\n";
                cout << "4. Veg Thali - Rs.120\n";
                cout << "5. Bhagara rice- Rs.150\n";
                cout << "Enter your order number (1-5): ";
                cin >> order;
                cout<<"Enter quantity:";
                cin>>quantity;
                switch(order)
                {
                    case 1:
                        bill+=210*quantity;
                        break;
                    case 2:
                        bill+=300*quantity;
                        break;
                    case 3:
                        bill+=200*quantity;
                        break;
                    case 4:
                        bill+=120*quantity;
                        break;
                    case 5:
                        bill+=150*quantity;
                        break;
                    default:
                        cout<<"invalid order";
                }
                cout<<"Want to order again?(y/n):";
                cin>>reorder;
            }while(reorder=='y' || reorder=='Y');
            break;
        case 3:
            do
            {
                int order,quantity;
                cout << "\n-------- Snacks Menu --------\n";
                cout << "1. Noodles - Rs.60\n";
                cout << "2. Chicken lolipop - Rs.200\n";
                cout << "3. Burger - Rs.80\n";
                cout << "4. Samosa - Rs.60\n";
                cout << "5. Pizza - Rs.150\n";
                cout << "6. French Fries - Rs.80\n";
                cout << "7. Pav Bhaji - Rs.150\n";
                cout << "8. Gobi Manchurian - Rs.80\n";
                cout << "Enter your order number (1-8): ";
                cin >> order;
                cout<<"Enter quantity:";
                cin>>quantity;
                switch(order)
                {
                    case 1:
                        bill+=60*quantity;
                        break;
                    case 2:
                        bill+=200*quantity;
                        break;
                    case 3:
                        bill+=80*quantity;
                        break;
                    case 4:
                        bill+=60*quantity;
                        break;
                    case 5:
                        bill+=150*quantity;
                        break;
                    case 6:
                        bill+=80*quantity;
                        break;
                    case 7:
                        bill+=150*quantity;
                        break;
                    case 8:
                        bill+=80*quantity;
                        break;
                    default:
                        cout<<"invalid order";
                }
                cout<<"Want to order again?(y/n):";
                cin>>reorder;
            }while(reorder=='y' || reorder=='Y');
            break;
        case 4:
            do
            {
                int order,quantity;
                cout << "\n-------- Dessert Menu --------\n";
                cout << "1. Pineapple cake - Rs.60\n";
                cout << "2. Tiramisu - Rs.110\n";
                cout << "3. Cup cakes - Rs.80\n";
                cout << "4. Brownies - Rs.60\n";
                cout << "5. Milkshakes - Rs.80\n";
                cout << "6. Almond shake - Rs.80\n";
                cout << "7. Ice cream - Rs.60\n";
                cout << "8. Fruit Salad - Rs.80\n";
                cout << "Enter your order number (1-8): ";
                cin >> order;
                cout<<"Enter quantity:";
                cin>>quantity;
                switch(order)
                {
                    case 1:
                        bill+=60*quantity;
                        break;
                    case 2:
                        bill+=110*quantity;
                        break;
                    case 3:
                        bill+=80*quantity;
                        break;
                    case 4:
                        bill+=60*quantity;
                        break;
                    case 5:
                        bill+=80*quantity;
                        break;
                    case 6:
                        bill+=80*quantity;
                        break;
                    case 7:
                        bill+=60*quantity;
                        break;
                    case 8:
                        bill+=80*quantity;
                        break;
                    default:
                        cout<<"invalid order";
                }
                cout<<"Want to order again?(y/n):";
                cin>>reorder;
            }while(reorder=='y' || reorder=='Y');
            break;
    }
    return bill;
}
int main()
{
	while(1)
	{
		string customerName;
		float bill=0.0;
	    cout<<"Please enter your name:";
	    cin.ignore();
	    getline(cin,customerName);
	    queue <string> customerQueue;
	    customerQueue.push(customerName);
	    bill=Order();
	    cout<<endl<<"Total Bill: Rs."<<bill<<endl;
	    cout<<"----Hope you enjoyed the food----"<<endl;
		cout<<"----We would love to see you again!----"<<endl<<endl;
	}
}
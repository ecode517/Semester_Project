#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int item, option, sell_num;
    char yes_or_no;
    float amount, cost;

    int quantity[10] = {30, 5, 20, 15, 10, 5, 10, 15, 3, 5};
    float price[10] = {6.50, 5.0, 4.0, 250.0, 4.0, 9.0, 50.0, 10.0, 7.00, 4.00};
    int exp_date[10] = {2023, 2033, 2330, 2304, 3020, 2025, 2021, 2019, 2022, 2010};
    int pro_date[10] = {2022, 2031, 2329, 2300, 3020, 2022, 2020, 2018, 2021, 2010};
    string product[10] = {"Cerelac", "perk biscuit", "Milo", "Rice", "Nido",
                          "Magarine", "Yam-chips", "Milk", "Coca-cola", "Oil"};

start:
    cout << "\n\n    ====   Welcome To Eden Stock System   ====  \n\n";
    cout << " Select an option "
         << "\n\n 1. Show products "
         << "\n\n 2. Show expired goods"
         << "\n\n 3. Sell Product     "
         << "\n\n 4. Exit "
         << "\n\n Select: ";
    cin >> option;

choose:
    switch (option)
    {

    case 1:
        system("cls");
        cout << " Available Product \n\n";
        cout << "====================================================================\n";
        cout << setw(20) << left << "Product" << setw(10) << left << "Quantity" << setw(10) << left << "Price"
             << setw(15) << left << "Production Date" << setw(15) << left << "Expiration Date" << endl;
        cout << "====================================================================\n";
        for (int i = 0; i < 10; i++)
        {
            cout << setw(20) << left << product[i]
                 << setw(10) << left << quantity[i]
                 << setw(10) << left << price[i]
                 << setw(15) << left << pro_date[i]
                 << setw(15) << left << exp_date[i] << endl;
        }
        cout << "====================================================================\n";
        cout << "\nDo you want to sell some items? [y/n]: ";
        cin >> yes_or_no;
        if (yes_or_no == 'y' || yes_or_no == 'Y')
        {
            option = 3;
            goto choose;
        }
        else
        {
            goto start;
        }
        break;

    case 2:
        // Showing all expired goods
        system("cls");
        for (int i = 0; i < 10; i++)
        {
            if (pro_date[i] == exp_date[i])
            {
                cout << "\n\n   EXPIRED  ITEM " << i << endl;
                cout << "Name: " << setw(15) << left << product[i]
                     << "Price: GHc " << setw(10) << left << price[i]
                     << "Validity: " << pro_date[i] << " to " << exp_date[i]
                     << "Packs left: " << quantity[i] << endl;
                amount = quantity[i] * price[i];
                cost += amount;
                cout << "The expired goods cost: GHc " << cost << endl;
            }
            else
            {
                continue;
            }
        }
        goto start;
        break;

    case 3:
        system("cls");
        cout << "================ My Products ===================" << endl;
        cout << setw(10) << left << "Item Code"
             << setw(20) << left << "Name"
             << setw(10) << left << "Price"
             << setw(15) << left << "Pro Date"
             << setw(15) << left << "Exp Date"
             << setw(15) << left << "Packs left" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << setw(10) << left << i
                 << setw(20) <<left << product[i]
                 << setw(10) << left << price[i]
                 << setw(15) << left << pro_date[i]
                 << setw(15) << left << exp_date[i]
                 << setw(15) << left << quantity[i] << endl;
        }

        // Ask the user to select an item to sell
        choose_item:
        cout << "Choose items to sell [Item code]: ";
        cin >> item;

        if (item < 0 || item >= 10)
        {
            cout << "Invalid item code. Please try again." << endl;
            goto choose_item;
        }

        // Check if there is enough quantity to sell
        cout<<"\nHow many "<<product[item]<<" do you want to sell : ";
        cin>>sell_num;
        if (sell_num > quantity[item])
        {
            cout << "\n Not enough items. Please choose a product." << endl;
            goto choose_item;
        }
        else
        {
            amount = sell_num * price[item];
            cout << sell_num << " of " << product[item] << " would cost GHc " << amount << endl;
            cost += amount;

            cout << "\nIs the customer done? [y/n]: ";
            cin >> yes_or_no;

            if (yes_or_no == 'n' || yes_or_no == 'N')
            {
                goto choose_item;
            }
            else
            {
                system("cls");
                cout << "\nThe total cost is: GHc " << cost << "\n\n";
                goto start;
            }
        }
        break;

    case 4:
        system("cls");
        cout << "Have a great day!" << endl;
        break;

    default:
        system("cls");
        cout << "\n\nSelect a valid option!!!\n\n";
        goto start;
        break;
    }

    return 0;
}

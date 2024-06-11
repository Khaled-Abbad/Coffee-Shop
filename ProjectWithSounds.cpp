/*
Project title:
Coffee Shop Inventory Management System

Members:
Mohammed Alawi Abobakr    222453488
Ibrahim Khalil Alsaleem   222443698
Mohammed Alobaid          222425567

Submitted to:
College of Computer Science and Information Technology

Date:
19/2/2023

*/


#include <iostream>

#include <string>

#include <iomanip>

#include <windows.h>

#include <MMSystem.h>

#include <fstream>

using namespace std;

class CoffeeInventory {
	
private:
	
struct Drink {

    string name;
    string price;
    string quantity;
    string company;
    string supplierName;
};

struct Supplier {

    string name;
    string phone;
    string address;
    string company;
    string item;

};


public :
	
	// 7. This funtion Upload Files of Drink

void DownloadingFilesOfDrinks(int &counterOfDrinks, Drink DrinkArray[])
		{
			ifstream input;
			char FileName[50];
			
            system("cls");
            
			cout<<"\n\n\n\n\t\t\t\tTo Upload Files of Drink Enter The Name: ";
			cin>>FileName;
            cin.ignore();
            
			input.open(FileName,ios::app|ios::in);
			if (!input.is_open())
            {
				cout << " \n\n\n\n\t\t\tThere is a Problem with opening the file... press enter to move";
                cin.get();
            }
			else
			{
				while (!input.eof())
				{
					input>>DrinkArray[counterOfDrinks].name;
					input>>DrinkArray[counterOfDrinks].supplierName;
					input>>DrinkArray[counterOfDrinks].price;
                    input>>DrinkArray[counterOfDrinks].quantity;
                    input>>DrinkArray[counterOfDrinks].company;
					counterOfDrinks++;
				}
				cout<<"\n\n\n\n\n\t\t\t\t\tUploading Completed ! \n\n\n\n\n\t\t\t\t\tpress Enter to move";
                cin.get();
			}
			input.close();
        }
        // 8. This funtion save Files of Drink
			
        void SaveChangesToFileOfDrinks(int &counterOfDrinks, Drink DrinkArray[])
		{
			ofstream output;
			char FileName[50];
			
			cout<<"\n\n\n\n\t\t\t\t\tTo Save Files of Drink...Enter The Name: ";
			cin>>FileName;
			
			output.open(FileName,ios::out);
			
			if (!output.is_open())
            {
				cout << " \n\n\n\n\t\t\t\t\tThere is a Problem with opening the file... press enter to move";
                cin.get();
            }
			else
			{
				int i=0;
				while (i<counterOfDrinks)
				{
					output<<DrinkArray[i].name<<"   ";
					output<<DrinkArray[i].supplierName<<"   ";
					output<<DrinkArray[i].price<<"   ";
                    output<<DrinkArray[i].quantity<<"   ";
                    output<<DrinkArray[i].company<<"   ";
					i++;
				}
				cout<<"\n\n\n\n\n\t\t\t\t\tDownloading Completed ! \n\n\n\n\n\t\t\t\t\tpress Enter to move";
                cin.get();
			}
			output.close();
		}

// 9. This funtion Upload Files of Suppliers
void DownloadingFilesOfSuppliers(int &counterOfSuppliers,Supplier SupplierArray[])
		{
		
			ifstream input;
			char FileName1[50];
            system("cls");
			cout<<"\n\n\n\n\t\t\t\tTo Upload Files of Suppliers ... Enter The Name: ";
			cin>>FileName1;
            cin.ignore();
			input.open(FileName1,ios::app|ios::in);
			if (!input.is_open())
            {
				cout << " \n\n\n\n\t\t\t\t\tThere is a Problem with opening the file press enter to move";
                cin.get();
            }
			else
			{
				while (!input.eof())
				{
					input>>SupplierArray[counterOfSuppliers].name;
					input>>SupplierArray[counterOfSuppliers].phone;
					input>>SupplierArray[counterOfSuppliers].address;
                    input>>SupplierArray[counterOfSuppliers].company;
                    input>>SupplierArray[counterOfSuppliers].item;
					counterOfSuppliers++;
				}
				cout<<"\n\n\n\n\n\t\t\t\t\tUploading Completed ! \n\n\n\n\n\t\t\t\t\tpress Enter to move";
                cin.get();
			}
			input.close();
        }
			
			// 10. This funtion save Files of Suppliers
			
        void SaveChangesToFileOfSuppliers(int &counterOfSuppliers,Supplier SupplierArray[])
		{
			ofstream output;
			char FileName1[50];
			cout<<"\n\n\n\n\t\t\t\t\tTo Save Files of Suppliers... Enter The Name: ";
			cin>>FileName1;
			output.open(FileName1,ios::out);
			if (!output.is_open())
            {
				cout<<"\n\n\n\n\n\t\t\t\t\tUploading Completed ! \n\n\n\n\n\t\t\t\t\tpress Enter to move";
                cin.get();
            }
			else
			{
				int i=0;
				while (i<counterOfSuppliers)
				{
					output<<SupplierArray[i].name<<"  ";
					output<<SupplierArray[i].phone<<"  ";
					output<<SupplierArray[i].address<<"  ";
                    output<<SupplierArray[i].company<<"  ";
                    output<<SupplierArray[i].item<<"\n";
					i++;
				}
				cout<<"\n\n\n\n\n\t\t\t\t\tDownloading Completed ! press Enter to move";
                cin.get();
			}
			output.close();
		}

// 11. This funtion to show all Drink Items

void showAllDrinks(int &counterOfDrinks, Drink DrinkArray[]) {

    for (int i = 0; i < counterOfDrinks; i++) {
        cout << "\n\n\t\t\t\t\t-------------------All Drink Items--------------------\n";
        cout << "\n\n\t\t\t\t\t\tDrink Item Name : " << DrinkArray[i].name << endl;
        cout << "\n\n\t\t\t\t\t\tDrink Supplier Name: " << DrinkArray[i].supplierName << endl;
        cout << "\n\n\t\t\t\t\t\tDrink Item Price: " << DrinkArray[i].price << endl;
        cout << "\n\n\t\t\t\t\t\tQuantity of Items: " << DrinkArray[i].quantity << endl;
        cout << "\n\n\t\t\t\t\t\tCompany of Item: " << DrinkArray[i].company << endl;
        cout << "\n\n\n\n\n\n\t\t\t\t\t    Press Enter to continue.";
        cin.ignore();
		cin.get();
        system("cls");
    }
    cout << "\n\n\t\t\t\t\t\t\n-------------------End of Items----------------------\n";
}

// 12. This funtion to show all Suppliers
void showAllSuppliers(int &counterOfSuppliers,Supplier SupplierArray[]) {

    for (int i = 0; i < counterOfSuppliers; i++) {
        cout << "\n\n\t\t\t\t\t-------------------All Suppliers----------------------\n";
        cout << "\n\n\t\t\t\t\t\tSupplier Name: " << SupplierArray[i].name << endl;
        cout << "\n\n\t\t\t\t\t\tSupplier Phone: " << SupplierArray[i].phone << endl;
        cout << "\n\n\t\t\t\t\t\tSupplier Address: " << SupplierArray[i].address << endl;
        cout << "\n\n\t\t\t\t\t\tSupplier company: " << SupplierArray[i].company << endl;
        cout << "\n\n\t\t\t\t\t\tDrink Item name: " << SupplierArray[i].item << endl;
        cout << "\n\n\n\n\n\t\t\t\t\t    Press Enter to continue.";
		cin.ignore();
		cin.get();
        system("cls");
    }
    cout << "\n\n\t\t\t\t\t\t\n-------------------End of List----------------------\n";
}

// 13 . This function to add a new drink Item
void addDrink(int &counterOfDrinks,Drink DrinkArray[]) {
    Drink drink;
    cout << "\n\n\t\t\t\t\t\t- Enter drink Details -\n";
    
    cout << "\n\n\t\t\t\t\t\tDrink Item Name: ";
    cin.ignore();
    getline(cin, drink.name);

    cout << "\n\n\t\t\t\t\t\tDrink Supplier Name: ";
    getline(cin,drink.supplierName);

	cout << "\n\n\t\t\t\t\t\tDrink Item Price: ";
    cin >> drink.price;

    cout << "\n\n\t\t\t\t\t\tQuantity of Items: ";
    cin >> drink.quantity;

    cout << "\n\n\t\t\t\t\t\tCompany of Item: ";
    cin >> drink.company;
    
    
    DrinkArray[counterOfDrinks] = drink;
}

// 14 . This function to add a new supplier
void addSupplier(int &counterOfSuppliers,Supplier SupplierArray[]) {
	
    Supplier supplier;
    int numdrinks;

    cout << "\n\n\t\t\t\t\t\t- Enter Supplier Details -\n";
    
    cout << "\n\n\t\t\t\t\t\tSupplier name: ";
    cin.ignore();
    getline(cin, supplier.name);

    cout << "\n\n\t\t\t\t\t\tSupplier phone: ";
    cin >> supplier.phone;

    cout << "\n\n\t\t\t\t\t\tSupplier Address: ";
    cin >> supplier.address;
    cin.ignore();
    cout << "\n\n\t\t\t\t\t\tSupplier company: ";
    cin >> supplier.company;

	cout << "\n\n\t\t\t\t\t\tDrink Item name: ";
    cin >> supplier.item;
    SupplierArray[counterOfSuppliers] = supplier;
}

// 15 . This function to update a drink
void updateDrink(int &counterOfDrinks,Drink DrinkArray[]) {
	
    string drinkName;
    
    cout << "\n\n\t\t\t\t\t\tEnter the name of the drink detaile you want to update: ";
    cin.ignore();
    getline(cin, drinkName);
    
    system("cls");
    
    for (int i = 0; i < counterOfDrinks; i++) {
        if (drinkName == DrinkArray[i].name) {
            int numberOfChoice;
            do {
                system("cls");
                cout << "\n\n\t\t\t\t\t\tWhat do you  want to update" << endl;
                cout << "\n\n\t\t\t\t\t\t1. Drink Itme Name: " << DrinkArray[i].name << endl;
        		cout << "\n\n\t\t\t\t\t\t2. Drink Item Supplier: " << DrinkArray[i].supplierName << endl;
        		cout << "\n\n\t\t\t\t\t\t3. Drink Item Price: " << DrinkArray[i].price << endl;
        		cout << "\n\n\t\t\t\t\t\t4. quantity of Item: " << DrinkArray[i].quantity << endl;
        		cout << "\n\n\t\t\t\t\t\t5. Company of Item: " << DrinkArray[i].company << endl;
                cout << "\n\n\t\t\t\t\t\t7- Go back" << endl;
                PlaySound(TEXT("enter.wav"),NULL,SND_SYNC);
                cin >> numberOfChoice;
                system("cls");
                switch (numberOfChoice) {
                case 1:
                    cout << "\n\n\t\t\t\t\t\tDrink Item Name: ";
                    cin >> DrinkArray[i].name;
                    break;
                case 2:
                    cout << "\n\n\t\t\t\t\t\tDrink Item Supplier: ";
                    cin >> DrinkArray[i].supplierName;
                    break;
                case 3:
                    cout << "\n\n\t\t\t\t\t\tDrink Item Price: ";
                    cin >> DrinkArray[i].price;
                    break;
                case 4:
                    cout << "\n\n\t\t\t\t\t\tQuantity of Items: ";
                    cin >> DrinkArray[i].quantity;
                    break;
                case 5:
                    cout << "\n\n\t\t\t\t\t\tCompany of Item: ";
                    cin >> DrinkArray[i].company;
                    break;
                    
                case 6:
                	break;
                default:
                    cout << "\n\n\t\t\t\t\t\tInvalid choice" << endl;
                    break;
                }
            } while (numberOfChoice != 6);

            break;
        }
    }
}

// 16 . This function to update an Supplier
void updateSupplier(int &counterOfSuppliers,Supplier SupplierArray[]) {
	
    Supplier supplier;
    string supplierName;
    int numdrinks;
    
    cout << "\n\n\t\t\t\t\t\tEnter the name of the Supplier you want to update: ";
    cin.ignore();
    getline(cin, supplierName);
    system("cls");
    for (int i = 0; i < counterOfSuppliers; i++) {
        if (supplierName == SupplierArray[i].name) {
            int numberOfChoice;
            do {
                system("cls");
                cout << "\n\n\t\t\t\t\t\tWhat do you  want to update";
                cout << "\n\n\t\t\t\t\t\t1- Supplier Name: " << endl;
                cout << "\n\n\t\t\t\t\t\t2- Supplier Phone: " << endl;
                cout << "\n\n\t\t\t\t\t\t3- Number of Address: " << endl;
                cout << "\n\n\t\t\t\t\t\t4- Supplier Company: " << endl;
                cout << "\n\n\t\t\t\t\t\t5- Supplier Drink Item" << endl;
                cout << "\n\n\t\t\t\t\t\t6- Exit" << endl;
                PlaySound(TEXT("enter.wav"),NULL,SND_SYNC);
                cin >> numberOfChoice;
                
                system("cls");
                switch (numberOfChoice) {
                case 1:
                    cout << "\n\n\t\t\t\t\t\tSupplier Name: ";
                    cin >> SupplierArray[i].name;
                    break;
                case 2:
                    cout << "\n\n\t\t\t\t\t\tSupplier Phone: ";
                    cin >> SupplierArray[i].phone;
                    break;
                case 3:
                    cout << "\n\n\t\t\t\t\t\tNumber of Addres: ";
                    cin >> SupplierArray[i].address;
                    break;
                case 4:
                    cout << "\n\n\t\t\t\t\t\tSupplier Company : ";
                    cin >> SupplierArray[i].company;
                    break;
                case 5:
                    cout << "\n\n\t\t\t\t\t\tUpdate Supplier's' Drinks: ";
                    cin >> SupplierArray[i].item;
                    break;
                case 6:
                	break;
                default:
                    cout << "\n\n\t\t\t\t\t\tInvalid choice" << endl;
                    break;
                }
            } while (numberOfChoice != 6);
            break;
        }
        else {
            cout <<"    ";
        }

    }
        
}

// 17 . This function to search for a drink Itme
void searchForDrink(int &counterOfDrinks,Drink DrinkArray[],int &counterOfSuppliers,Supplier SupplierArray[]) {
    string name;
    cout << "\n\n\t\t\t\t\t\t Enter Drink Item Name: ";
    cin.ignore();
    getline(cin, name);
    system("cls");
    bool isFounded = false;
        	
        for (int i = 0; i < counterOfDrinks; i++) {
        if (name == DrinkArray[i].name) {
            
        for (int j = 0; j < counterOfSuppliers; j++) {
        if (name == SupplierArray[j].item){
		
         	cout << "\n\t\t\t\t\t\tFounded \n";
            cout << "\n\t\t\t\t\t\tDrink Itme name: " << DrinkArray[i].name << endl;
            cout << "\n\t\t\t\t\t\tQuantity of Itme: " << DrinkArray[i].quantity << endl;
            cout << "\n\t\t\t\t\t\tDrink Itme Price: " << DrinkArray[i].price << endl;
            cout << "\n\t\t\t\t\t\tCompany Of Item: " << DrinkArray[i].company << endl;
            cout << "\n\t\t\t\t\t==========================================================\n";
            cout << "\n\t\t\t\t\t\tSupplier Name: " << SupplierArray[j].name << endl;
            cout << "\n\t\t\t\t\t\tSupplier Phone: " << SupplierArray[j].phone << endl;
            cout << "\n\t\t\t\t\t\tSupplier Address: " << SupplierArray[j].address << endl;
            cout << "\n\t\t\t\t\t\tSupplier company: " << SupplierArray[j].company << endl;
            
            isFounded = true;
            
            cout << "\n\n\n\t\t\t\t\t    Press Enter to continue.";
			cin.get();
            break;
        }
		 }
     }
     system("cls");
 }
        if (!isFounded){
        cout << "\n\n\t\t\t\t\t\tDrink item is not found!\n\n";
		Sleep(4000);
    }
    
}		

// 18 . This function to search for a Supplier
void searchForSupplier(int &counterOfDrinks,Drink DrinkArray[],int &counterOfSuppliers,Supplier SupplierArray[]) {
    string name;
    cout << "\n\n\t\t\t\t\t\tEnter Supplier name: ";
    cin.ignore();
    getline(cin, name);
    system("cls");
    bool isFounded = false;
      for (int i = 0; i < counterOfSuppliers; i++) {
        if (name == SupplierArray[i].name) {
            
        for (int j = 0; j < counterOfDrinks; j++) {
        if (name == DrinkArray[j].supplierName){
		
         	cout << "\n\t\t\t\t\t\tFounded \n";
            cout << "\n\t\t\t\t\t\tSupplier Name: " << SupplierArray[i].name << endl;
            cout << "\n\t\t\t\t\t\tSupplier Phone: " << SupplierArray[i].phone << endl;
            cout << "\n\t\t\t\t\t\tSupplier Address: " << SupplierArray[i].address << endl;
            cout << "\n\t\t\t\t\t\tSupplier company: " << SupplierArray[i].company << endl;
            cout << "\n\t\t\t\t\t==========================================================\n";
             cout << "\n\t\t\t\t\t\tDrink Itme name: " << DrinkArray[j].name << endl;
            cout << "\n\t\t\t\t\t\tQuantity of Itme: " << DrinkArray[j].quantity << endl;
            cout << "\n\t\t\t\t\t\tDrink Itme Price: " << DrinkArray[j].price << endl;
            cout << "\n\t\t\t\t\t\tCompany Of Item: " << DrinkArray[j].company << endl;
            
            isFounded = true;
            
            cout << "\n\n\n\t\t\t\t\t    Press Enter to continue.";
			cin.get();
            break;
        }
		 }
     }
     system("cls");
 }
        if (!isFounded){
        cout << "\n\n\t\t\t\t\t\tSupplier is not found!\n\n";
		Sleep(4000);
    }
    }

// 19 . This function to remove a drink Itme from Supplier
void RemoveADrink(int &counterOfDrinks,Drink DrinkArray[],int &counterOfSuppliers,Supplier SupplierArray[]) {
    string drinkName;
    cout << "\n\n\t\t\t\t\t\tEnter the name of the drink Itme you want to delete: ";
    cin.ignore();
    getline(cin, drinkName);
    system("cls");
    for (int i = 0; i < counterOfDrinks; i++) {
        if (drinkName == DrinkArray[i].name) {
            DrinkArray[i] = Drink();
            
        for (int j = 0; j < counterOfSuppliers; j++) {
        if (drinkName == SupplierArray[j].item){
		
         SupplierArray[j]=Supplier();
         cout << "\n\n\t\t\t\t\t\tDrink Itme Deleted Successfully\n";
            Sleep(2000);
            break;
        }
		 }
     }
 }
         
}

// 20 . This function to remove an Supplier From Drink Item
void RemoveAnSupplier(int &counterOfDrinks,Drink DrinkArray[],int &counterOfSuppliers,Supplier SupplierArray[]) {
    string supplierName;
    cout << "\n\n\t\t\t\t\t\tEnter the name of the Supplier you want to delete: ";
    cin.ignore();
    getline(cin, supplierName);
    system("cls");
   for (int i = 0; i < counterOfSuppliers; i++) {
        if (supplierName ==  SupplierArray[i].name) {
            SupplierArray[i] = Supplier();
            
        for (int j = 0; j < counterOfDrinks; j++) {
        if (supplierName == DrinkArray[j].supplierName){
		
         DrinkArray[j]=Drink();
         cout << "\n\n\t\t\t\t\t\tSupplier Deleted Successfully\n";
            Sleep(2000);
            break;
        }
		 }
     }
 }
    }

// 21 . This function to delete all drinks itme
void DeleteAllDrinks(int &counterOfDrinks,Drink DrinkArray[]) {
    cout << "\n\n\t\t\t\t\t\tIf you want to delete all drinks write (Yes)\n";
    string choice;
    cin >> choice;
    if (choice == "YES" || choice == "yes") {
        for (int i = 0; i < counterOfDrinks; i++) {
            DrinkArray[i] = Drink();
        }
        cout << "\n\n\n\n\n\t\t\t\tAll Drinks Deleted Successfully\n";
        Sleep(4000);
        system("cls");
    }
}

// 22 . This function to delete all Suppliers
void DeleteAllSuppliers(int &counterOfSuppliers,Supplier SupplierArray[]) {
	string choice;
    cout << "\n\n\t\t\t\t\t\tIf you want to delete all Supplier  write (Yes)\n";
    cin >> choice;
    if (choice == "YES" || choice == "yes") {
        for (int i = 0; i < counterOfSuppliers; i++) {
            SupplierArray[i] = Supplier();
        }
        cout << "\n\n\n\n\n\t\t\t\tAll Suppliers Deleted Successfully\n";
        Sleep(4000);
        system("cls");
    }
}

void logo(){
	
	
	cout<<"\n\n\n\n\n\t\t\t\t\t\t        ( (\n";
    cout<<"\n\t\t\t\t\t\t        ) )\n";
	cout<<"\n\t\t\t\t\t\t   _____________\n";
	cout<<"\n\t\t\t\t\t\t  |    COFFEE   |\n";
	cout<<"\n\t\t\t\t\t\t  |    F O P    |__\n";
	cout<<"\n\t\t\t\t\t\t  |    CCSIT    |__)\n";
	cout<<"\n\t\t\t\t\t\t  \\____________/\n";
	
	
}
// 6. This relax funtion to lisen and see things
void relax()
{
	
	logo();
	int i=0;
	
	while(i<10)
	{
		
		switch (i)
		{
			
			case 1:
				{
				system ("color b7");
					PlaySound(TEXT("relax.wav"),NULL,SND_SYNC);
					
				}
			
			case 2:
				{
					system ("color a5");
					PlaySound(TEXT("relax.wav"),NULL,SND_SYNC);
					
				}
				
			case 3:
				{
					system ("color 5c");
					PlaySound(TEXT("relax.wav"),NULL,SND_SYNC);
				}
				
			case 4:
			{
				system ("color bc");
				PlaySound(TEXT("relax.wav"),NULL,SND_SYNC);
				
			}
			
			case 5:
				{
					system ("color 3f");
					PlaySound(TEXT("relax.wav"),NULL,SND_SYNC);
				}
				
				
			case 6:
				{
					system ("color e0");
					choiceDrinkOrSupplies();
					break;
				}
				
		}

		i++;
		
	}	
	
}

// 4. This choice Drink (Switch) funtion

void choiceDrink(int structNumbers,int &counterOfDrinks,Drink DrinkArray[],int &counterOfSuppliers,Supplier SupplierArray[])
{ 
    
    int choice;
do {
	
        system("cls");
        cout << "\n\n\n\t\t\t\t\t\t1. Show All Drink Items\n";
        cout << "\n\n\t\t\t\t\t\t2. Add a Drink Item\n";
        cout << "\n\n\t\t\t\t\t\t3. Update A Drink Item\n";
        cout << "\n\n\t\t\t\t\t\t4. Remove A Drink Item From Supplier\n";
        cout << "\n\n\t\t\t\t\t\t5. Delete All Drink Items\n";
        cout << "\n\n\t\t\t\t\t\t6. Search for a Drink Item\n";
        cout << "\n\n\t\t\t\t\t\t7. Go back\n";
        cout << "\n\n\t\t\t\t\t\tEnter your choice: ";
        PlaySound(TEXT("enter.wav"),NULL,SND_SYNC);
        cin >> choice;

        system("cls");
        switch (choice) {
        case 1:

            showAllDrinks(counterOfDrinks,DrinkArray);
            system("cls");

            break;
        case 2:
            addDrink(counterOfDrinks,DrinkArray);
            system("cls");
            cout << "\n\n\n\n\n\t\t\t\t Drink Added Successfuly\n\n\t\t\t\tPress Enter to continue.";
            cin.ignore();
            cin.get();
            counterOfDrinks++;
            break;
        case 3:
            updateDrink(counterOfDrinks,DrinkArray);
            system("cls");
            cout << "\n\n\n\n\n\t\t\t\t Drink Updated Successfuly\n\n\t\t\t\tPress Enter to continue.";
            cin.get();
            break;
        case 4:
            RemoveADrink(counterOfDrinks,DrinkArray,counterOfSuppliers,SupplierArray);
            system("cls");
            cout << "\n\n\n\n\n\t\t\t\t Drink Removed Successfuly\n\n\t\t\t\tPress Enter to continue.";
            cin.get();
            counterOfDrinks--;
            break;
        case 5:
            DeleteAllDrinks(counterOfDrinks,DrinkArray);
            system("cls");
            cout << "\n\n\n\n\n\t\t\t\t All Drink Deleted Successfuly\n\n\t\t\t\tPress Enter to continue.";
            cin.get();
            break;
        case 6:
            searchForDrink(counterOfDrinks,DrinkArray,counterOfSuppliers,SupplierArray);
            system("cls");
            break;
        case 7:
            cout << "\n\n\n\n\n\t\t\t\tGoodbye!\n\n\n\n\n";
            break;

        default:
            cout << "\n\n\t\t\t\t\t\tInput Error, try again!\n\n";
        }
    } while (choice != 7);	
	
}

// 5. This choice suoliers (Switch) funtion

void choiceSupplier(int structNumbers,int &counterOfDrinks,Drink DrinkArray[],int &counterOfSuppliers,Supplier SupplierArray[])
{
	
  
    int choice;

do {
        system("cls");
        cout << "\n\n\n\t\t\t\t\t\t1. Show All Suppliers\n";
        cout << "\n\n\t\t\t\t\t\t2. Add an Supplier\n";
        cout << "\n\n\t\t\t\t\t\t3. Update An Supplier\n";
        cout << "\n\n\t\t\t\t\t\t4. Remove An Supplier From Drink Item\n";
        cout << "\n\n\t\t\t\t\t\t5. Delete All Suppliers\n";
        cout << "\n\n\t\t\t\t\t\t6. Search for an Supplier\n";
        cout << "\n\n\t\t\t\t\t\t7. Go back\n";
        cout << "\n\n\t\t\t\t\t\tEnter your choice: ";
        PlaySound(TEXT("enter.wav"),NULL,SND_SYNC);
        cin >> choice;

        system("cls");
        switch (choice) {
        case 1:
            showAllSuppliers(counterOfSuppliers,SupplierArray);
            system("cls");
            break;
        case 2:
            addSupplier(counterOfSuppliers,SupplierArray);
            system("cls");
            cin.get();
            cout << "\n\n\n\n\n\t\t\t\t Supplier Added Successfuly\n\n\t\t\t\tPress Enter to continue.";
            cin.get();
            counterOfSuppliers++;
            break;
        case 3:
            updateSupplier(counterOfSuppliers,SupplierArray);
            system("cls");
            cout << "\n\n\n\n\n\t\t\t\t Supplier Updated Successfuly\n\n\t\t\t\tPress Enter to continue.";
            cin.get();
            break;
        case 4:
            RemoveAnSupplier(counterOfDrinks,DrinkArray,counterOfSuppliers,SupplierArray);
            system("cls");
            cout << "\n\n\n\n\n\t\t\t\t Supplier Removed Successfuly\n\n\t\t\t\tPress Enter to continue.";
            cin.get();
            counterOfSuppliers--;
            break;
        case 5:
            DeleteAllSuppliers(counterOfSuppliers,SupplierArray);
            system("cls");
            cout << "\n\n\n\n\n\t\t\t\t All Supplier Deleted Successfuly\n\n\t\t\t\tPress Enter to continue.";
            cin.get();
            break;
        case 6:
            searchForSupplier(counterOfDrinks,DrinkArray,counterOfSuppliers,SupplierArray);
            cin.get();
            system("cls");
            break;
        case 7:
            cout << "\n\n\n\n\n\t\t\t\tGoodbye!\n\n\n\n\n";
            break;

        default:
            cout << "\n\n\t\t\t\t\t\tInput Error, try again!\n\n";
        }
    } while (choice != 7);	
	
}

// 3 . This choiceDrinkOrSupplies(Switch) funtion

void choiceDrinkOrSupplies()
{
    
	const int structNumbers = 100; 
    int counterOfDrinks = 0;
    int counterOfSuppliers=0;
    Drink DrinkArray[structNumbers];
    Supplier SupplierArray[structNumbers];
    
    int choice;
	
	do {
        system("cls");
        
        cout << "\n\n\n\t\t\t\t\t\t1. Section Drink Items";
        cout << "\n\n\t\t\t\t\t\t2. Section Suppliers\t\t\t\t\t\t\t\t";
        cout << "\n\n\t\t\t\t\t\t3. Relax Mode\t\t\t\t\t\t\t\t";
        cout << "\n\n\t\t\t\t\t\t4. Seve and Exit\n";
        cout << "\n\n\t\t\t\t\t\tEnter your choice: ";
        logo();
        
        PlaySound(TEXT("enter.wav"),NULL,SND_SYNC);
        cin >> choice;
        
        

        system("cls");
        switch (choice) {
        case 1:
        	DownloadingFilesOfDrinks(counterOfDrinks,DrinkArray);
        	choiceDrink(structNumbers,counterOfDrinks,DrinkArray,counterOfSuppliers,SupplierArray);
        	
            system("cls");

            break;
        case 2:
        	DownloadingFilesOfSuppliers(counterOfSuppliers,SupplierArray);
            choiceSupplier(structNumbers,counterOfDrinks,DrinkArray,counterOfSuppliers,SupplierArray);
            system("cls");
            break;
        case 3:
            relax();
            system("cls");
            break;
            
        case 4:
        SaveChangesToFileOfDrinks( counterOfDrinks,DrinkArray);
        system("cls");
        SaveChangesToFileOfSuppliers( counterOfSuppliers, SupplierArray);
        system("cls");
        cout << "\n\n\n\t\t\t\t\t S Y S T E M  I S   M A D E   B Y :\n\n\n";
        
        cout << "\n\n\n\t\t\t\t\t\t- Mohammed Alawi";
        cout << "\n\n\n\t\t\t\t\t\t- Mohammed Alobaid";
        cout << "\n\n\n\t\t\t\t\t\t- Ibrahim Alsaleem";
        
        cout << "\n\n\n\n\n\t\t\t\tS U O E R V I S E D   B Y : MR. M A R W A N   E L - H A J";
         PlaySound(TEXT("end.wav"),NULL,SND_SYNC);
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t  G  O  O  D  B  Y  E  !";
         break;
        

        

        default:
            cout << "\n\n\t\t\t\t\t\tInput Error, try again!\n\n";
        }
        } while (choice != 4);
	
}


// 2 . This login funtion

void login(CoffeeInventory &coffee)
{
	
	 
	string username;
	string password;
	
	do
	{
			system ("color 3f");
	 cout << "\n\n\n\t\t\t\t\t L O G I N   I N   S Y S T E M\n\n\n\n\n\n";
	 
	 cout << "\n\n\n\t\t\t\t\t    Write Your Username: ";
	 cin>>username;
	 
	 cout << "\n\n\n\t\t\t\t\t    Write Your Password: ";
	 cin>>password;
	 
	 if (username=="kfu" || username=="KFU")
	 {
	 	if(password=="1234"){
		
	 system("cls");
	 system ("color e0");	
    cout << "\n\n\n\t\t\t\t    W E L C O M E   T O   S H O P   I N V E N T O R Y   \n\n\t\t\t\t\tM A N A G E M E N T   S Y S T E M\n\n\n";
    cout<<"\n\t\t\t\t\t\t      ( (\n";
    cout<<"\n\t\t\t\t\t\t      ) )\n";
	cout<<"\n\t\t\t\t\t\t  ____________\n";
	cout<<"\n\t\t\t\t\t\t |   COFFEE   |\n";
	cout<<"\n\t\t\t\t\t\t |   F O P    |__\n";
	cout<<"\n\t\t\t\t\t\t |   CCSIT    |__)\n";
	cout<<"\n\t\t\t\t\t\t  \\__________/\n";
	
	cout<<"\n\n\n\n\n\t\t\t\t\t";
	PlaySound(TEXT("welcome.wav"),NULL,SND_SYNC);
			system("pause");
			
			
	coffee.choiceDrinkOrSupplies ();

	 	
	 }
	else
	
	cout<<"\n\n\n\t\t\t\t      ops!! Incorrect login ... Try again \n";
	Sleep(2000);
	system("cls");
}
	else
	cout<<"\n\n\n\t\t\t\t      ops!! Incorrect login ... Try again \n";
	Sleep(2000);
	system("cls");
}
while(username!="kfu" || username!="KFU" || password!="1234");	
	
}

};




// 1 . This the main function 

int main() {


CoffeeInventory coffee;

coffee.login(coffee);
	

return 0;

}


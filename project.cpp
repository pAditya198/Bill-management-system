#include<iostream>
#include<bits/stdc++.h>
#include<fstream>

using namespace std;

class Item{
   public:
    int ino=0;
    string iname;
    int sno=100;
    float price;
        void test()
        {
                if(sno<ino)
                {       
                        system("clear");
                        cout<<"Items Out of Stock.....\n\n\n\n\t\t\t\tExiting......\n";
                        exit(0);
                }
        }
        void display()
        {
                cout<<"\nName :\t\t\tItems :\t\tPrice :\t\tAmount:\n"<<iname<<"\t\t"<<ino<<"\t\t"<<price<<"\t\t"<<(ino*price)<<endl;
        }
}items[10];

float total()
{
    int t=0;
    for(int i=0;i<=9;i++)
    t+=items[i].ino*items[i].price;
    return t;
}

void Review()
{
        char c;
        cout<<"\t\t\t\t\tReviewing Bill\n";
        cout<<"\t\t\t\t\t--------------\n";
        fstream file;
        file.open("bill.dat",ios::binary|ios::in);
        if(!file)
        {
                cout<<"Error File not found!!!!";
                exit(0);
        }
        file.seekg(0,ios::beg);
        file.read((char*)&items,sizeof(Item));
        for(int i=0;i<=9;i++)
        items[i].display();
        file.close();
        cout<<"\n-------------------------------------------------------------------------------\n";
        cout<<"Total Amount = "<<total();
        cout<<"\n-------------------------------------------------------------------------------\n";

        cout<<"\n\nPress Anything to continue";
        cin>>c;
}

void Create()
{
    float t_price=0;
    char ch;
        fstream fin("bill.dat",ios::binary|ios::out);
        fin.seekp(0,ios::beg);
    do{
        int n,i=0;
        system("clear");
        cout<<"\t\t\t\t\tCreating Bill\n";
        cout<<"\t\t\t\t\t--------------\n";
        cout<<"Enter Your Choice :\n\n\n Name\t\t\t\t\tPrice\t\t\t\tItem no\n-----------------------------------------------------------------\n";
        for(i=0;i<=9;i++)
        cout<<i<<". "<<items[i].iname<<"\t\t\t\t"<<items[i].price<<"\t\t\t\t"<<items[i].ino<<endl;
        cout<<"\nInput--> ";
         cin>>n;
         cout<<endl;
        switch(n)
        {
            case 1:

                    cout<<"Enter no. of items : ";
                    cin>>items[0].ino;
                    items[0].test();
                    items[0].sno-=items[0].ino;
                    break;
            case 2:

                    cout<<"Enter no. of items : ";
                    cin>>items[1].ino;
                    items[1].test();
                    items[1].sno-=items[1].ino;
                    break;

            case 3:
                    
                    cout<<"Enter no. of items : ";
                    cin>>items[2].ino;
                    items[2].test();
                    items[2].sno-=items[2].ino;
                    break;
            case 4:
                    
                    cout<<"Enter no. of items : ";
                    cin>>items[3].ino;
                    items[3].test();
                    items[3].sno-=items[3].ino;
                    break;
            case 5:
                    
                    cout<<"Enter no. of items : ";
                    cin>>items[4].ino;
                    items[4].test();
                    items[4].sno-=items[4].ino;
                    break;
            case 6:
                    
                    cout<<"Enter no. of items : ";
                    cin>>items[5].ino;
                    items[5].test();
                    items[5].sno-=items[5].ino;
                    break;
            case 7:
                    
                    cout<<"Enter no. of items : ";
                    cin>>items[6].ino;
                    items[6].test();
                    items[6].sno-=items[6].ino;
                    break;
            case 8:
                    
                    cout<<"Enter no. of items : ";
                    cin>>items[7].ino;
                    items[7].test();
                    items[7].sno-=items[7].ino;
                    break;
            case 9:
                    
                    cout<<"Enter no. of items : ";
                    cin>>items[8].ino;
                    items[8].test();
                    items[8].sno-=items[8].ino;
                    break;
            case 10:
                    
                    cout<<"Enter no. of items : ";
                    cin>>items[9].ino;
                    items[9].test();
                    items[9].sno-=items[9].ino;
                    break;
            default:
                    cout<<"Wrong Choice\n";
        }
        system("clear");
        cout<<"Enter Your Choice :\n Name\t\t\t\t\tPrice\t\t\t\tItem no\n-------------------------------------------------\n";
        for(i=0;i<=9;i++)
        cout<<i<<". "<<items[i].iname<<"\t\t\t\t"<<items[i].price<<"\t\t\t\t"<<items[i].ino<<endl;
        cout<<"\n\nDo You Want To Continue(Y/N) : ";
        cin>>ch;
        }while(ch=='y'||ch=='Y');
        for(int i=0;i<=9;i++)
        fin.write((char*)&items[i],sizeof(Item));
        char c;
        cout<<"Want to review your Bill Press Y/y :\t";
        cin>>c;
        if(c=='y'||c=='Y')
        {
                Review();
        }
}

void add()
{
    fstream file("Stock.dat",ios::binary|ios::out);
    char ch;
    file.seekp(0,ios::beg);
    file.read((char*)&items,sizeof(Item));
    do{
        system("clear");
        cout<<"\t\t\t\t\tAdding Stock\n";
        cout<<"\t\t\t\t\t------------\n";
        int n,i=0,quantity;
        cout<<"Enter Your Choice :\n Name\t\t\t\t\tQuantity\n-------------------------------------------------\n";
        for(i=0;i<=9;i++)
        cout<<i<<". "<<items[i].iname<<"\t\t\t\t"<<items[i].sno<<"\n";
        cout<<"\nInput--> ";
        cin>>n;
        cout<<endl;
        switch(n)
        {
            case 1:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[0].sno+=quantity;
                    //file.write((char*)&items[0],sizeof(Item));
                    break;
            case 2:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[1].sno+=quantity;
                    //file.write((char*)&items[1],sizeof(Item));
                    break;

            case 3:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[2].sno+=quantity;
                    //file.write((char*)&items[2],sizeof(Item));
                    break;
            case 4:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[3].sno+=quantity;
                    //file.write((char*)&items[3],sizeof(Item));
                    break;
            case 5:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[4].sno+=quantity;
                    //file.write((char*)&items[4],sizeof(Item));
                    break;
            case 6:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[5].sno+=quantity;
                    //file.write((char*)&items[5],sizeof(Item));
                    break;
            case 7:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[6].sno+=quantity;
                    //file.write((char*)&items[6],sizeof(Item));
                    break;
            case 8:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[7].sno+=quantity;
                    //file.write((char*)&items[7],sizeof(Item));
                    break;
            case 9:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[8].sno+=quantity;
                    //file.write((char*)&items[8],sizeof(Item));
                    break;
            case 10:
                    cout<<"Enter no. of items : ";
                    cin>>quantity;
                    items[9].sno+=quantity;
                    //file.write((char*)&items[9],sizeof(Item));
                    break;
            default:
                    cout<<"Wrong Choice\n";
        }
        system("clear");
        cout<<"Enter Your Choice :\n Name\t\t\t\t\tQuantity\n-------------------------------------------------\n";
        for(i=0;i<=9;i++)
        cout<<i<<". "<<items[i].iname<<"\t\t\t\t"<<items[i].sno<<"\n";
        cout<<"\n\nDo You Want To Continue(Y/N)\t";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    for(int i=0;i<=9;i++)
    {
        file.write((char*)&items[i],sizeof(Item));
    }
file.close();
}

void Review_stock(){
        char c;
        system("clear");
        cout<<"\t\t\t\t\tReviewing Stock\n";
        cout<<"\t\t\t\t\t----------------\n";
        fstream file;
        file.open("Stock.dat",ios::binary|ios::in);
        if(!file)
        {
                cout<<"Error File not found!!!!";
                exit(0);
        }
        file.seekg(0,ios::beg);
        file.read((char*)&items,sizeof(Item));
        for(int i=0;i<=9;i++)
        cout<<items[i].iname<<endl<<items[i].sno<<endl;
        file.close();
        cout<<"Enter Any Key to continue";
        cin>>c;
}

void Billing()
{
    int n,flag=0;
    do{
    system("clear");
    float total;
    cout<<"\t\t\t\tBilling Menu\n\t\t\t\t------------\n\n1. Create New Bill \t2. Review Bills \t3.Exit ";
    cout<<"\n\nInput-->";
    cin>>n;
    switch(n)
    {
        case 1:
                Create();
                flag=0;
                break;
        case 2:
                Review();
                flag=0;
                break;
        case 3:
                system("clear");
                cout<<"Exiting...!!!!!";
                exit(0);
        default:
                cout<<"Wrong choice\n";
                flag=1;
    }
    }while(flag==1);
}

void Stock()
{
        
        int j,flag;
        do
        {
        system("clear");
        cout<<"Choose \n1. Add Stock\n2. Review Stock\n3. Exit\n\nInput-->  ";
        cin>>j;
        switch(j)
        {
                case 1:
                        add();
                        flag=0;
                        break;
                case 2:
                        system("clear");
                        Review_stock();
                        flag=0;
                        break;   
                case 3:
                        system("clear");
                        cout<<"Exiting.....!!!!!\n";
                        flag=0;
                
                default:
                        system("clear");
                        cout<<"Wrong choice\n"; 
                        flag=1;                            
        }
        }while(flag==1);
}

int main()
{

                items[0].iname="Ink Pen    ";
                items[0].price=10.0;
                items[1].iname="ScrapBook  ";
                items[1].price=50.0;
                items[2].iname="Stamp Pad  ";
                items[2].price=20.0;
                items[3].iname="File Folder";
                items[3].price=10.0;
                items[4].iname="Notepad    ";
                items[4].price=15.0;
                items[5].iname="Crayons    ";
                items[5].price=25.0;
                items[6].iname="Eraser     ";
                items[6].price=5.0;
                items[7].iname="Pencil     ";
                items[7].price=15.0;
                items[8].iname="Gel Pen    ";
                items[8].price=30.0;
                items[9].iname="NoteBook   ";
                items[9].price=70.0;
char c;
do{
    system("clear");
    int n;
    cout<<"\t\t\t\tHome Page\n";
    cout<<"\t\t\t\t---------\n";
    cout<<"\nEnter Choice\n\n";
    cout<<"1. Check Stock \n2. Billing\n3. Exit\n\nInput-->  ";
    cin>>n;
    switch(n)
    {
        case 1: 
                Stock();
                break;
        
        case 2:
                
                Billing();
                break;

        case3:
                system("clear");
                cout<<"Exiting.....!!!!!\n";

        default :
                
                cout<<"Wrong Choice!!!!! \n\n Exiting.....\n";
        
    }
    system("clear");
    cout<<"To Continue to Home Page Press Y/y : ";
    cin>>c;
}while(c=='Y'||c=='y');
return 0;
}
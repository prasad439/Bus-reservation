#include<iostream>                                                                      //including the required libraries
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<iomanip>

using namespace std;                                                                     //calling std the method

class BusInfo                                                                        //declaring a class for required variables to be accessed globally across the program
{

	private:                                                                               //access specifier

	int i,seatno,No,CASE,seat[35],cvv,month;                                                      //declaring the required variables

	 string name1,name2,Locationi,Locationj;

 	 char decide,y;

	 double time1;

	 double time2;
	 
	 long card,year,CONTACT;

public :
                                                                                                //declaring the prototypes for the required functions or objects to the defined class
 install();

 allot();
 
 show();
 
 available();


};

BusInfo :: install()                                                                            //scope resolution for install()
{

	cout<<"\nEnter Bus no. : "<<endl;                                                            //Taking in input of bus no. from passenger
	cin>>No;

    cout<<"\nEnter First name : "<<endl;                                                              //Taking input of name from passenger
	cin>>name1;
	
	cout<<"\nEnter Last name : "<<endl;                                                              //Taking input of name from passenger
	cin>>name2;
	
	cout<<"\nEnter your 8-digit contact number : "<<endl;
	cin>>CONTACT;

	cout<<"\nEnter arrival time : "<<endl;                                                       //Taking input of arrival time from passenger
	cin>> setprecision(2)>>time1;

	cout<<"\nEnter Departure time : "<<endl;                                                   //Taking input of departure time from passenger
	cin>> setprecision(2)>>time2;

	cout<<"\nEnter pickup location : "<<endl;                                                   //Taking input of pickup location from passenger
	cin>>Locationi; 

	cout<<"\nEnter drop location : "<<endl;                                                           //Taking input of drop location from passenger
	cin>>Locationj;

}

BusInfo :: allot() 
{
	cout<<"\nEnter the seat number you want to reserve out of 35 available seats: "<<endl;
	cin>>seatno ;                                                                                                      //taking in input of 'seat number' from passenger

	if(seatno>35)                                                                                                     //applying the if-else condition to so that the passenger enters a valid seat number for a bus with 35 seats
	{
		cout<<"\nEnter a valid seat number "<<endl;
	}
	else{
		cout<<"The seat you want to reserve is : "<<seatno<<endl;

	}

	cout<<"\n1.Confirm your seat\n2. Choose another seat "<<endl;
	cin>>CASE;

	switch(CASE)                                                                                           //finally asking the passenger for 'confirmation of seat' or 'to change the seat'
	{
	case 1 : cout<<"Your confirmed seat is : " <<seatno<<endl;
	break;
    

	case 2 : cout<<"\nEnter new seat you want to reserve"<<endl;
             cin>>seatno ;    
	break;
    		
}


}

BusInfo :: show()
{

cout<<"\n#################################################################################################################### "<<endl;

cout<<"\nYour reservation status Mr./Mrs. : "<< name1 + name2;

cout<<"\nBus no. : "<<No;

cout<<"\nYour contact number  : "<<CONTACT;

cout<<"\nBus arrival time : "<< fixed<<setprecision(2)<<time1;                                 //doing this-' fixed<<setprecision(2)' to print 2 digits post decimal point

cout<<"\nBus departure time : "<<  fixed<<setprecision(2)<<time2;

cout<<"\nYour pickup location : "<<Locationi;

cout<<"\nYour destination : "<<Locationj;

cout<<"\nYour booked seat : " <<seatno;

cout<<"\n######################################################################################################################"<<endl;

cout<<"\nENTER YOUR BANK ACCOUNT DETAILS TO MAKE PAYMENT AND TO CONFIRM BOOKING "<<endl;                                    //asking passenger for bank account details to make payment11

cout<<"8-digit CREDIT/ DEBIT CARD NUMBER : "<<endl;
cin>>card;

cout<<"\nEXPIRY MM yy"<<endl;
cin>>month;
cin>>year;

cout<<"\nEnter your 3-digit cvv/cvc : "<<endl;
cin>>cvv;

cout<<"\nKUDOS! YOUR SEAT IS BOOKED. "<<endl;


}

BusInfo :: available()
{
cout<<"\n***********************************************************************************************************************"<<endl;

cout<<"\nThe booked seats is/are : Seat number-"<<seatno;

cout<<"\nRemaining seats are available to you"<<endl;

cout<<"\n************************************************************************************************************************"<<endl;

return seat[seatno];

}

 int main()

{
	BusInfo bus1;

int choice;

	do{

	cout<<"\npick one :  \n1.INSTALL\n2. ALLOT\n3. SHOW\n4. AVAILABLE\n5. EXIT"<<endl;
	
	cin>>choice;

	switch(choice)
	{
		case 1 :	bus1.install();
		break;

		case 2 : 	bus1.allot();
     	break;

      
        case 3 :    bus1.show();
        break;

        case 4 :    bus1.available();
        break;

	  
	   case 5 : exit(0);
        break;

		default : cout<<"\nInvalid choice";

	}
}

while(choice<5);

return  choice;

}






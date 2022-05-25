#include <iostream>
#include <climits>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

//Functii 
void menu();
void intrebare_meniu();
void aflare_zodie();
void informatii();
void compatibilitate();
void calculator_ascendent();

//variabile
char ascendent_info[30] = "Nu ti-ai aflat ascendentul!";
int luna=-1,ziua=-1,zodie=-1;
int ora_asc=-1, minut_asc=-1;
int admin = 0;


void intrebare_meniu()
{
	cout<<"Doresti sa continui?"<<endl;
	cout<<"Press Y to continue / N to exit"<<endl;
	char intrebare;
	cin>>intrebare;
	switch(intrebare)
	{
		case 'Y': menu();
				  break;
		case 'N': exit(0);
				  break;
		case 'y': menu();
				  break;
		case 'n': exit(0);
				  break;

		default: cout<<"Alege o optiune din meniu!"<<endl;
				 intrebare_meniu();
	}
}
void aflare_zodie()
{
	if(zodie > -1)
	{
		cout<<"Ti-ai aflat deja zodia, doresti sa-ti introduci datele din nou?"<<endl;
		char reset;
		cout<<"Press Y to continue / N to exit"<<endl;
		cin>>reset;
		switch(reset)
		{
			case 'Y': zodie = -1;
					  system("CLS");
					  aflare_zodie();
					  break;
			case 'N': exit(0);
					  break;
			case 'y': zodie = -1;
						system("CLS");
					  aflare_zodie();
					  break;
			case 'n': exit(0);
					  break;
			case 'A': admin = 1;
						menu();
						break;

			default: cout<<"Alege o optiune din meniu!"<<endl;
					 intrebare_meniu();
		}
	}
	//ziua nasterii
	cout<<"Introdu ziua in care te-ai nascut:"<<endl;
	cin>>ziua;
	
	//luna nasterii
	cout<<"Introdu luna in care esti nascut:"<<endl;
	cin>>luna;

	while(cin.fail())
{
	cin.clear(); //sterge input buffer si restaureaza cin-ul 
	cin.ignore(INT_MAX, '\n'); //ignora ultimul input
	system("CLS");
	aflare_zodie();
	cin>>ziua;
}
while(cin.fail())
{
	cin.clear(); //sterge input buffer si restaureaza cin-ul 
	cin.ignore(INT_MAX, '\n'); //ignora ultimul input
	system("CLS");
	aflare_zodie();
	cin>>luna;
}

	if((luna == 1 && ziua >= 20) || (ziua <= 18 && luna==2))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia varsator!"<<endl;
		zodie = 1;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 2 && ziua >= 19) || (ziua <= 20 && luna==3))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Pesti!"<<endl;
		zodie = 2;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 3 && ziua >= 21) || (ziua <= 20 && luna==4))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Berbec!"<<endl;
		zodie = 3;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 4 && ziua >= 21) || (ziua <= 21 && luna==5))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Taur!"<<endl;
		zodie = 4;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 5 && ziua >= 22) || (ziua <= 21 && luna==6))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Gemeni!"<<endl;
		zodie = 5;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 6 && ziua >= 22) || (ziua <= 22 && luna==7))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Rac!"<<endl;
		zodie = 6;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 7 && ziua >= 23) || (ziua <= 2 && luna==8))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Leu!"<<endl;
		zodie = 7;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 8 && ziua >= 23) || (ziua <= 22 && luna==9))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Fecioara!"<<endl;
		zodie = 8;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 9 && ziua >= 23) || (ziua <= 22 && luna==10))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Balanta!"<<endl;
		zodie = 9;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 10 && ziua >= 23) || (ziua <= 21 && luna==11))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Scorpion!"<<endl;
		zodie = 10;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 11 && ziua >= 22) || (ziua <= 21 && luna==12))
	{
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Sagetator!"<<endl;
		zodie = 11;
		cout<<endl;
		intrebare_meniu();
	}
	if((luna == 12 && ziua >= 22) || (ziua <= 18 && luna==1))
	{
		zodie = 12;
		system("CLS");
		cout<<"[ZODIAC]: Esti zodia Capricorn!"<<endl;
		cout<<endl;
		intrebare_meniu();
	}
}
void informatii()
{
	if(zodie == -1)
	{
		cout<<"[EROARE]:Nu ti-ai aflat zodia!"<<endl;
		cout<<endl;
		intrebare_meniu();
	}


if(zodie == 9) //InformatiiBalanta
{
	cout<<"Zodie: Balanta"<<endl;
	cout<<"Data: "<<ziua;

	if(luna == 9)
	{
		cout<<" Septembrie"<<endl;
	}
	else if(luna == 10)
	{
		cout<<" Octombrie"<<endl;
	}
		cout<<"Planeta: Venus"<<endl;
		cout<<"Element: Aer"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();
	}

	else if(zodie == 10) // InformatiiScorpion
{
	cout<<"Zodie: Scorpion"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 10)
	{
		cout<<" Octombrie"<<endl;
	}
	else if(luna == 11)
	{
		cout<<"Noiembrie"<<endl;
	}
		cout<<"Planeta: Pluto"<<endl;
		cout<<"Element: Apa"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 11) //InformatiiSagetator
{
	cout<<"Zodie: Sagetator"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 11)
	{
		cout<<" Noiembrie"<<endl;
	}
	else if(luna == 12)
	{
		cout<<" Decembrie"<<endl;
	}
		cout<<"Planeta: Jupiter"<<endl;
		cout<<"Element: Foc"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 12) //InformatiiCapricorn
{
	cout<<"Zodie: Capricorn"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 12)
	{
		cout<<" Decembrie"<<endl;
	}
	else if(luna == 1)
	{
		cout<<" Ianuarie"<<endl;
	}
		cout<<"Planeta: Saturn"<<endl;
		cout<<"Element: Pamant"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 1) //InformatiiVarsator
{
	cout<<"Zodie: Varsator"<<endl; 
	cout<<"Data: "<<ziua;
	if(luna == 1)
	{
		cout<<" Ianuarie"<<endl;
	}
	else if(luna == 2)
	{
		cout<<" Februarie"<<endl;
	}
		cout<<"Planeta: Uranus"<<endl;
		cout<<"Element: "<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 2)//InformatiiPesti
{
	cout<<"Zodie: Pesti"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 2)
	{
		cout<<" Februarie"<<endl;
	}
	else if(luna == 3)
	{
		cout<<" Martie"<<endl;
	}
		cout<<"Planeta: Neptun"<<endl;
		cout<<"Element: Apa"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 3)//InformatiiBerbec
{
	cout<<"Zodie: Berbec"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 3)
	{
		cout<<" Martie"<<endl;
	}
	else if(luna == 4)
	{
		cout<<" Aprilie"<<endl;
	}
		cout<<"Planeta: Marte"<<endl;
		cout<<"Element: Foc"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 4)//InformatiiTaur
{
	cout<<"Zodie: Taur"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 4)
	{
		cout<<" Aprilie"<<endl;
	}
	else if(luna == 5)
	{
		cout<<" Mai"<<endl;
	}
		cout<<"Planeta: Venus"<<endl;
		cout<<"Element: Pamant"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 5)//InformatiiGemeni
{
	cout<<"Zodie: Gemeni"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 5)
	{
		cout<<" Mai"<<endl;
	}
	else if(luna == 6)
	{
		cout<<" Iunie"<<endl;
	}
		cout<<"Planeta: Mercur"<<endl;
		cout<<"Element: Aer"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 6) //InformatiiRac
{
	cout<<"Zodie: Rac"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 6)
	{
		cout<<" Iunie"<<endl;
	}
	else if(luna == 7)
	{
		cout<<" Iulie"<<endl;
	}
		cout<<"Planeta: Luna"<<endl;
		cout<<"Element: Apa"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}
else if(zodie == 7)//InformatiiLeu
{
	cout<<"Zodie: Leu"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 7)
	{
		cout<<" Iulie"<<endl;
	}
	else if(luna == 8)
	{
		cout<<" August"<<endl;
	}
		cout<<"Planeta: Soarele"<<endl;
		cout<<"Element: Foc"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();
}
else if(zodie == 8) //InformatiiFecioara
{
	cout<<"Zodie: Fecioara"<<endl;
	cout<<"Data: "<<ziua;
	if(luna == 8)
	{
		cout<<" August"<<endl;
	}
	else if(luna == 9)
	{
		cout<<" Septembrie"<<endl;
	}
		cout<<"Planeta: Mercur"<<endl;
		cout<<"Element: Pamant"<<endl;
		cout<<"Ascendent: "<<ascendent_info<<endl;
		cout<<endl;
		intrebare_meniu();

}

}
void menu()
{

system("CLS");
cout<<"========================================"<<endl;

cout<<"              Meniu                     "<<endl;

cout<<"========================================"<<endl;
int meniu;
cout<<"(0) Aflare zodie\n(1)Informatii despre zodia mea\n(2)Compatibilitate cu alte zodii\n(3)Calculeaza-ti ascendentul\n(4)Exit menu"<<endl;
cin>>meniu;

while(cin.fail())
{
	cin.clear(); //sterge input buffer si restaureaza cin-ul 
	cin.ignore(INT_MAX, '\n'); //ignora ultimul input
	system("CLS");
	menu();
	cin>>meniu;
}

switch(meniu)
{
	case 0 : system("CLS");
			aflare_zodie();
			break;
	case 1: system("CLS");
			informatii();
			break;
	case 2: system("CLS");
			compatibilitate();
			break;
	case 3: system("CLS");
			calculator_ascendent();
			break;
	case 4:system("CLS");
	cout<<"La revedere!"<<endl;
			exit(0);
			break;
	default:menu();

}

}
void compatibilitate()
{
	if(zodie == -1)
	{
		cout<<"[EROARE]:Nu ti-ai aflat zodia!"<<endl;
		cout<<endl;
		intrebare_meniu();
	}
	else
	{
	srand((unsigned) time(0));
    int procent = 10+(rand() % 90);
    
    cout<<"Alege o zodie pentru a afla ce procent de compatibilitate ai cu aceasta:"<<endl;
    cout<<"(0)Varsator"<<endl;
    cout<<"(1)Pesti"<<endl;
    cout<<"(2)Berbec"<<endl;
    cout<<"(3)Taur"<<endl;
    cout<<"(4)Gemeni"<<endl;
    cout<<"(5)Rac"<<endl;
    cout<<"(6)Leu"<<endl;
    cout<<"(7)Fecioara"<<endl;
    cout<<"(8)Balanta"<<endl;
    cout<<"(9)Scorpion"<<endl;
    cout<<"(10)Sagetator"<<endl;
    cout<<"(11)Capricorn"<<endl;

     int compatibilitate_r;
    cin>>compatibilitate_r;
   	switch(compatibilitate_r)
   	{
   		case 0:  cout<<"Esti compatibil cu zodia Varsator!"<<endl;
        		 cout<<"Procent: "<<procent<<"%"<<endl;
        		 cout<<endl;
	         intrebare_meniu();
        		 break;
       case 1:cout<<"Esti compatibil cu zodia Pesti!"<<endl;
	         cout<<"Procent: "<<procent<<"%"<<endl;
	         cout<<endl;
	         intrebare_meniu();
	         break;
	   case 2:  cout<<"Esti compatibil cu zodia Berbec!"<<endl;
        	    cout<<"Procent: "<<procent<<"%"<<endl;
        	    cout<<endl;
	         intrebare_meniu();
        	    break;
       case 3:cout<<"Esti compatibil cu zodia Taur!"<<endl;
	         cout<<"Procent: "<<procent<<"%"<<endl;
	         cout<<endl;
	         intrebare_meniu();
	         break;
         case 4:cout<<"Esti compatibil cu zodia Gemeni!"<<endl;
		         cout<<"Procent: "<<procent<<"%"<<endl;
		         cout<<endl;
		         intrebare_meniu();
		         break;
         case 5: cout<<"Esti compatibil cu zodia Rac!"<<endl;
		         cout<<"Procent: "<<procent<<"%"<<endl;
		         cout<<endl;
		         intrebare_meniu();
		         break;
         case 6: cout<<"Esti compatibil cu zodia Leu!"<<endl;
		         cout<<"Procent: "<<procent<<"%"<<endl;
		         cout<<endl;
		         intrebare_meniu();
	        	 break;
         case 7: cout<<"Esti compatibil cu zodia Fecioara!"<<endl;
		         cout<<"Procent: "<<procent<<"%"<<endl;
		         cout<<endl;
		         intrebare_meniu();
         		 break;
         case 8: cout<<"Esti compatibil cu zodia Balanta!"<<endl;
		         cout<<"Procent: "<<procent<<"%"<<endl;
		         cout<<endl;
		         intrebare_meniu();
		         break;
         case 9:  cout<<"Esti compatibil cu zodia Scorpion!"<<endl;
         		if(admin == 1 && zodie == 9)
         		{
         			procent = 100;
         			cout<<"Procent: "<<procent<<"%"<<endl;
         			cout<<"[ZODIAC]Compatibilitate maxima!"<<endl;
         		}
         		else
         		{
         			cout<<"Procent: "<<procent<<"%"<<endl;
         		}
		         cout<<endl;
		         intrebare_meniu();
		         break;
         case 10: cout<<"Esti compatibil cu zodia Sagetator!"<<endl;
		         cout<<"Procent: "<<procent<<"%"<<endl;
		         cout<<endl;
		         intrebare_meniu();
		         break;
         case 11: cout<<"Esti compatibil cu zodia Capricorn!"<<endl;
			      if(admin == 1 && zodie == 12)
         		{
         			procent = 100;
         			cout<<"Procent: "<<procent<<"%"<<endl;
         			cout<<"[ZODIAC]Compatibilitate maxima!"<<endl;
         		}
         		else
         		{
         			cout<<"Procent: "<<procent<<"%"<<endl;
         		}
			      cout<<endl;
			      intrebare_meniu();
			      break;
         default: menu();
         
   	}
    
	}

}

void calculator_ascendent()
{

	if(zodie == -1) 
	{
		cout<<"[ZODIAC]:Nu ti-ai aflat zodia!"<<endl;
		cout<<endl;
		intrebare_meniu();
	}
	else
	{
		cout<<"Tasteaza ora la care te-ai nascut: "<<endl;
		cin>>ora_asc;
			while(cin.fail())
		{
			cin.clear(); //sterge input buffer si restaureaza cin-ul 
			cin.ignore(INT_MAX, '\n'); //ignora ultimul input
			system("CLS");
			calculator_ascendent();
			cin>>ora_asc;
		}
		if(ora_asc > 24)
		{
			cout<<"Ai introdus o ora gresita!"<<endl;
			cout<<"Introdu o ora de la 1-24"<<endl;
			cin>>ora_asc;
		}



		cout<<"Tasteaza minutul la care te-ai nascut: "<<endl;
		cin>>minut_asc;

			while(cin.fail())
		{
			cin.clear(); //sterge input buffer si restaureaza cin-ul 
			cin.ignore(INT_MAX, '\n'); //ignora ultimul input
			system("CLS");
			calculator_ascendent();
			cin>>minut_asc;
		}
		if(minut_asc < 0 || minut_asc >= 60)
		{
			cout<<"Ai introdus datele gresit!"<<endl;
			cout<<"Introdu minutele intre 0 si 59!"<<endl;
			cin>>minut_asc;
		}
	}	
	if(zodie == 1) //AscendentVarsator
	{
		if(ora_asc == 9 && minut_asc >= 19)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 10 && minut_asc <= 19)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 10 && minut_asc > 19)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc <= 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc > 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc <= 42)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc > 42)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc > 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc <= 59)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 18 && minut_asc <= 34)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 18 && minut_asc > 34)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 19 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 20 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc <= 14)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc > 14)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc <= 56)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc > 56)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 0 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 1 || ora_asc == 24) && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc <= 34)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc > 34)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc <= 59)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 5 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc <= 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc > 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 7 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 8 && minut_asc <= 16)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 8 && minut_asc > 16)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 9 && minut_asc <= 18)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}

	}
	else if(zodie == 2) //AscendentPesti
	{
		if(ora_asc == 7 && minut_asc >= 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 8 && minut_asc <= 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 8 && minut_asc > 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 9 && minut_asc <= 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 9 && minut_asc >= 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 10 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc <= 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc > 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 13 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 14 && minut_asc <= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 14 && minut_asc > 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc <= 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc > 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 17 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 18 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc <= 15)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc > 15)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 20 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 21 && minut_asc <= 57)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 21 && minut_asc > 57)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 22 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 23 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
				else if((ora_asc == 0 || ora_asc == 24) && minut_asc <= 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
				else if((ora_asc == 0 || ora_asc == 24) && minut_asc > 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc <= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc > 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc <= 50)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc > 50)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 5 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc <= 17)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc > 17)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 7 && minut_asc <= 19)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}


	}
	else if(zodie == 3) //AscendentBerbec 
	{
		 
		if(ora_asc == 5 && minut_asc >= 23)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 6 && minut_asc <= 23)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc > 23)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 7 && minut_asc <= 52)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 7 && minut_asc > 52)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 9 && minut_asc <= 46)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 9 && minut_asc > 46)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 12 && minut_asc <= 13)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 12 && minut_asc > 13)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc <= 41)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc > 41)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc <= 18)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc > 18)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 18 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 19 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 20 && minut_asc <= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 20 && minut_asc > 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 21 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 22 && minut_asc <= 38)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 22 && minut_asc > 38)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
			else if((ora_asc == 24 || ora_asc == 0) && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc <= 8)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc > 8)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc <= 53)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc > 53)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc <= 17)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc > 17)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 5 && minut_asc <= 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
	}
	else if(zodie == 4) //AscendentTaur 
	{
		 
		if(ora_asc == 3 && minut_asc >= 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 4 && minut_asc <= 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc > 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc <= 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc > 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 6 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 7 && minut_asc <= 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 7 && minut_asc > 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 8 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 9 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 10 && minut_asc <= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 10 && minut_asc > 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc <= 38)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc > 38)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc <= 40)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc > 40)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc <= 53)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc > 53)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 18 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 19 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 20 && minut_asc <= 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 20 && minut_asc > 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc <= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc > 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc <= 50)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc > 50)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc <= 17)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc > 17)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc <= 19)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}

	}
	else if(zodie == 5) //AscendentGemeni 
	{
		 
		if(ora_asc == 1 && minut_asc >= 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 2 && minut_asc <= 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc > 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc <= 17)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc > 17)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 5 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc <= 11)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc > 11)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 7 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc <= 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc > 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 9 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 11 && minut_asc <= 3)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 11 && minut_asc > 3)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc <= 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc > 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc <= 25)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc > 25)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 18 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 19 && minut_asc <= 3)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 19 && minut_asc > 3)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 20 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc <= 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc > 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc <= 18)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc > 18)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc <= 45)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if((ora_asc == 0 || ora_asc == 24) && minut_asc > 45)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 1 && minut_asc <= 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}


	}
	else if(zodie == 6) //AscendentRac 
	{
		 
		if(ora_asc == 23 && minut_asc >= 12)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc <= 12)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc > 12)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc <= 41)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc > 41)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc <= 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc > 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 4 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc <= 52)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc > 52)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 7 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 8 && minut_asc <= 27)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 8 && minut_asc > 27)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 9 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 10 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc <= 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc > 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 12 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 13 && minut_asc <= 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 13 && minut_asc > 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 14 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 15 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 16 && minut_asc <= 27)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 16 && minut_asc > 27)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 18 && minut_asc <= 52)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 18 && minut_asc > 52)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 19 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}

			else if(ora_asc == 20 && minut_asc <= 40)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 20 && minut_asc > 40)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc <= 9)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc > 9)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 23 && minut_asc <= 11)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}

	}
	else if(zodie == 7) //AscendentLeu
	{
		 
		if(ora_asc == 21 && minut_asc >= 9)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 22 && minut_asc <= 9)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc > 9)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc <= 38)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc <= 38)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc <= 32)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc > 32)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 2 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 3 && minut_asc <= 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 3 && minut_asc > 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 4 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 6 && minut_asc <= 42)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 6 && minut_asc > 42)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}

				else if(ora_asc == 7 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 8 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 9 && minut_asc <= 4)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
				else if(ora_asc == 9 && minut_asc > 4)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 11 && minut_asc <= 46)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 11 && minut_asc > 46)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 12 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 13 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 14 && minut_asc <= 24)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 14 && minut_asc > 24)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 15 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 16 && minut_asc <= 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 16 && minut_asc > 49)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc <= 39)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc > 39)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 18 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 20 && minut_asc <= 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 20 && minut_asc > 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc <= 8)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
	}
	else if(zodie == 8) //AscendentFecioara
	{
		 
		if(ora_asc == 19 && minut_asc >= 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 20 && minut_asc <= 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 20 && minut_asc > 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc <= 36)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc > 36)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc <= 30)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc > 30)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc <= 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc > 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 2 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 3 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 4 && minut_asc <= 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 4 && minut_asc > 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 6 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 7 && minut_asc <= 2)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 7 && minut_asc > 2)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 9 && minut_asc <= 44)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 9 && minut_asc > 44)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 10 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc <= 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc > 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc <= 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc > 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 16 && minut_asc <= 37)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 16 && minut_asc > 37)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 17 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 18 && minut_asc <= 4)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 18 && minut_asc > 4)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc <= 6)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}

	}
	else if(zodie == 9) //AscendentBalanta
	{
		 
		if(ora_asc == 17 && minut_asc >= 5)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 18 && minut_asc <= 5)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 18 && minut_asc > 5)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 19 && minut_asc <= 34)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 19 && minut_asc > 34)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 20 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc <= 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc > 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc <= 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc > 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 1 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 2 && minut_asc <= 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 2 && minut_asc > 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 3 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 4 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc <= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc > 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 6 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 7 && minut_asc <= 42)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 7 && minut_asc > 42)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 9 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc <= 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc > 20)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc <= 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc > 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc <= 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc > 35)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc <= 2)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc > 2)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc <= 4)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
	}
	else if(zodie == 10) //AscendentScorpion
	{
		 
		if(ora_asc == 15 && minut_asc >= 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 16 && minut_asc <= 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 16 && minut_asc > 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc <= 36)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc > 36)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 18 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc <= 30)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc > 30)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 20 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 21 && minut_asc <= 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 21 && minut_asc > 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 22 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 23 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc <= 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc > 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 1 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc <= 2)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc > 2)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 5 && minut_asc <= 44)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 5 && minut_asc > 44)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 7 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 8 && minut_asc <= 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 8 && minut_asc > 22)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 9 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 10 && minut_asc <= 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 10 && minut_asc > 47)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc <= 37)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 11 && minut_asc > 37)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 12 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 13 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc <= 2)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc > 2)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 15 && minut_asc <= 6)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
	}
	else if(zodie == 11) //AscendentSagetator
	{
		 
		if(ora_asc == 13 && minut_asc >= 8)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 14 && minut_asc <= 8)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 14 && minut_asc > 8)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc <= 37)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 15 && minut_asc > 37)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 16 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 17 && minut_asc <= 31)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 17 && minut_asc > 31)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 18 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc <= 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc > 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 20 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 21 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 22 && minut_asc <= 23)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 22 && minut_asc > 23)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if((ora_asc == 0 || ora_asc == 24) && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc <= 3)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 1 && minut_asc > 3)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc <= 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc > 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 5 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 6 && minut_asc <= 23)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 6 && minut_asc > 23)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 7 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc <= 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc > 48)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 9 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc <= 38)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc > 38)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 11 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 12 && minut_asc <= 5)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 12 && minut_asc > 5)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 13 && minut_asc <= 7)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
	}
	if(zodie == 12) //AscendentCapricorn
	{
		if(ora_asc == 11 && minut_asc >= 13)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();
		}
		else if(ora_asc == 12 && minut_asc <= 13)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Berbec!"<<endl;
			strcpy(ascendent_info, "Berbec");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 12 && minut_asc > 13)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 13 && minut_asc <= 42)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Taur!"<<endl;
			strcpy(ascendent_info, "Taur");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 13 && minut_asc > 42)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 14 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 15 && minut_asc <= 36)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Gemeni!"<<endl;
			strcpy(ascendent_info, "Gemeni");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 15 && minut_asc > 36)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 16 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 17 && minut_asc <= 53)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Rac!"<<endl;
			strcpy(ascendent_info, "Rac");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 17 && minut_asc > 53)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 18 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 19 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 20 && minut_asc <= 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Leu!"<<endl;
			strcpy(ascendent_info, "Leu");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 20 && minut_asc > 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 21 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 22 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc <= 8)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Fecioara!"<<endl;
			strcpy(ascendent_info, "Fecioara");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 23 && minut_asc > 8)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if((ora_asc == 0 || ora_asc == 24) && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 1 && minut_asc <= 50)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Balanta!"<<endl;
			strcpy(ascendent_info, "Balanta");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 1 && minut_asc > 50)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 2 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 3 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc <= 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Scorpion!"<<endl;
			strcpy(ascendent_info, "Scorpion");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 4 && minut_asc > 28)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 5 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc <= 53)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Sagetator!"<<endl;
			strcpy(ascendent_info, "Sagetator");
			cout<<endl;
			intrebare_meniu();

		}
		else if(ora_asc == 6 && minut_asc > 53)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 7 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc <= 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Capricorn!"<<endl;
			strcpy(ascendent_info, "Capricorn");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 8 && minut_asc > 43)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 9 && minut_asc >= 0)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc <= 10)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Varsator!"<<endl;
			strcpy(ascendent_info, "Varsator");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 10 && minut_asc > 10)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
			else if(ora_asc == 11 && minut_asc <= 12)
		{
			system("CLS");
			cout<<"[ZODIAC]: Ai ascendent in Pesti!"<<endl;
			strcpy(ascendent_info, "Pesti");
			cout<<endl;
			intrebare_meniu();

		}
	}

}


int main()
{

	menu();


	return 0;

}
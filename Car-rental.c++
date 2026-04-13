#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;
class box
{public:
  int w, e, r;
  string name1, name2;
    void yearYUKON (int p){
  string year_of_car[] =
	{ "none", "2015(4444|BGF)", "2016(9150|FOR)", "2023(1576|TMS)" };
  cout << "1-2015        2-2016        3-2023 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 3){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p == 2){
	  cout << "\n This vehicle has been rented ";
	  cout << "\n chose another vehicle ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " YUKON";}
void yearSIERRA (int p){string year_of_car[] =
	{ "none", "2020(1920|ZAQ)", "2022(8723|YUI)", "2024(1660|LPO)" };
  cout << "1-2020        2-2022        3-2024 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 3){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] <<" SIERRA";}
void GMCmodel (int p){int fal, YUKON, SAVANA, SIERRA;
  string GMC[] = { "none", "YUKON", "2017(3971|ALT)", "SIERRA" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-YUKON    2-SAVANA     3-SIERRA\n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 3){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearYUKON (p);
  else if (p == 2)
	cout <<"\nWe only have a 2017 model year for this car \nand License Plate of this car is "
	  << GMC[p] << " SAVANA";
  else
	yearSIERRA (p);}
	
	
	
	
void yearMAZDA6 (int p){string year_of_car[] =
	{ "none", "2019(8445|IUY)", "2020(1185|NMG)", "2024(2244|MAZ)" };
  cout << "1-2019        2-2020        3-2024 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 3){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] <<" MAZDA6";}
void yearMAZDA3 (int p){string year_of_car[] = { "none", "2018(5173|OPI)", "2024(1360|ZCR)" };
  cout << "1-2018        2-2024 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] <<" MAZDA3";}
void yearCX30 (int p){string year_of_car[] = { "none", "2023(4912|WEL)", "2024(7890|RFC)" };
  cout << "1-2023        2-2024 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " CX30";}
void yearCX9 (int p){string year_of_car[] = { "none", "2019(2746|HDA)", "2024(EUN|ROL)" };
  cout << "1-2019        2-2024 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p == 1){cout << "\n This vehicle has been rented ";
	  cout << "\n chose another vehicle ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " CX9";}
  void MAZDAmodel (int p){int n, b;
string MAZDA[] = { "NONE", "MAZDA6", "MAZDA3", "CX30", "CX9" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-MAZDA6 2-MAZDA3 3-CX30 4-CX9 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 4){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearMAZDA6 (p);
  else if (p == 2)
	yearMAZDA3 (p);
  else if (p == 3)
	yearCX30 (p);
  else
	yearCX9 (p);}
  
  
  
void yearACCORD (int p){string year_of_car[] ={ "none", "2017(5777|BBN)", "2022(7534|RRL)", "2024(2187|NOR)" };
  cout << "1-2017        2-2022        3-2024 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 3){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] <<" ACCORD";}
void yearHRV (int p){string year_of_car[] = { "none", "2020(4242|ETY)", "2022(3007|MOL)" };
  cout << "1-2020        2-2022\n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " HRV";}
void HONDAmodel (int p){
  int n, b;
  string HONDA[] = { "NONE", "ACCORD", "HRV" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-ACCORD 2-HRV \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearACCORD (p);
  else
	yearHRV (p);}




void yearTAURUS (int p){string year_of_car[] =
	{ "none", "2019(44|EZC)", "2021(2256|LGB)", "2024(3500|TAU)" };
  cout << "1-2019        2-2021        3-2024 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 3){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
	  while (p == 1){
	  cout << "\n This vehicle has been rented ";
	  cout << "\n chose another vehicle ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] <<
	" TAURUS";}
void yearEXPEDITION (int p){string year_of_car[] = { "none", "2018(55|RAD)" };
  p = 1;
  cout <<"\nWe only have a 2018 model year for this car \nand License Plate of this car is "
  << year_of_car[p] << " EXPEDITION" << endl;
  cout << "\n This vehicle has been rented ";}
void yearF150 (int p){string year_of_car[] = { "none", "2021(777|FON)", "2024(8002|FUY)" };
  cout << "1-2021        2-2024 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " F150";}
void FORDmodel (int p){int n, b;
  string FORD[] = { "NONE", "TAURUS", "EXPEDITION", "F150" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-TAURUS 2-EXPEDITION 3-F150 \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 3){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}

  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearTAURUS (p);
  else if (p == 2)
	yearEXPEDITION (p);
  else
	yearF150 (p);}





void yearCAMRY (int p){
  string year_of_car[] = { "none", "2020(713|ZZZ)", "2021(4150|NSU)" };
  cout << "1-2020        2-2021        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
	  while (p == 2){
	  cout << "\n This vehicle has been rented ";
	  cout << "\n chose another vehicle ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " CAMRY";}
void yearCOROLA (int p){string year_of_car[] = { "none", "2017(1234|KJH)", "2024(6789|FDS)" };
  cout << "1-2017        2-2024        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] <<
	" COROLLA";}
void TOYOTAmodel (int p){int n, b;
  string TOYOTA[] = { "NONE", "CAMRY", "COROLA" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-CAMRY 2-COROLA  \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearCAMRY (p);
  else if (p == 2)
	yearCOROLA (p);}
	
	
	
void yearE (int p){string year_of_car[] = { "none", "2014(6334|EEE)", "2016(7439|STE)" };
  cout << "1-2014        2-2016        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " E";}
void yearML (int p){string year_of_car[] = { "none", "2016(6573|POE)", "2018(1112|MNB)" };
  cout << "1-2016        2-2018        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " ML";}
void MERCEDESmodel (int p){int n, b;
  string MERCEDES[] = { "NONE", "E", "ML" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-E 2-ML  \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearE (p);
  else if (p == 2)
	yearML (p);}
	
	
	
void yearIMPALA (int p){string year_of_car[] = { "none", "2018(1698|YTR)", "2019(5342|RIN)" };
  cout << "1-2018        2-2019        \n" << endl;
cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] <<" IMPALA";}
void yearSPARK (int p){string year_of_car[] = { "none", "2018(1357|OKM)", "2021(9573|PLM)" };
  cout << "1-2018        2-2021        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " SPARK";}
void CHEVROLETmodel (int p){int n, b;
  string CHEVROLET[] = { "NONE", "IMPALA", "SPARK" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-IMPALA 2-SPARK  \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
	  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearIMPALA (p);
  else if (p == 2)
	yearSPARK (p);}



void yearV7 (int p){string year_of_car[] = { "none", "2020(7|CHE)", "2024(634|CHK)" };
  cout << "1-2020        2-2024        \n" << endl;
cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " V7";}
void yearCS85 (int p){string year_of_car[] = { "none", "2022(8|CHN)", "2023(635|CHA)" };
  cout << "1-2020        2-2024        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " CS85";}
void CHANGANmodel (int p){int n, b;
  string CHANGAN[] = { "NONE", "V7", "CS85" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-V7 2-CS85  \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearV7 (p);
  else if (p == 2)
	yearCS85 (p);}
	
	
	
void yearAZERA (int p){string year_of_car[] = { "none", "2018(999|AZE)", "2019(7365|RAA)" };
cout << "1-2018        2-2019        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " AZERA";}
void yearELNTRA (int p){string year_of_car[] = { "none", "2017(4000|IIU)", "2019(180|ELN)" };
  cout << "1-2017        2-2019        \n" << endl;
cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] <<
	" ELNTRA";}
void HYUNDAImodel (int p){int n, b;
  string HYUNDAI[] = { "NONE", "AZERA", "ELANTRA" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-AZERA     2-ELANTRA  \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
	yearAZERA (p);
  else if (p == 2)
	yearELNTRA (p);}
	
	
	
void yearMG5 (int p){
  string year_of_car[] = { "none", "2022(7659|TFC)", "2024(8264|NDB)" };
  cout << "1-2022        2-2024        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
while (p <= 0){
	  cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " MG5";}
void yearRX8 (int p){string year_of_car[] = { "none", "2020(7659|GGF)", "2021(8264|OOK)" };
  cout << "1-2020        2-2021        \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  cout << "the car License Plate of this year " << year_of_car[p] << " RX8";}
void MGmodel (int p){int n, b;
  string MG[] = { "NONE", "MG5", "RX8" };
  cout << " Choose one of the models \n" << endl;
  cout << "1-MG5     2-RX8  \n" << endl;
  cout << "type one of the numbers here: ";
  cin >> p;
  while (p > 2){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
	  while (p <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> p;}
  if (p == 1)
  yearMG5 (p);
  else if (p == 2)
	yearRX8 (p);}






    int CurrentDate (int p){
        int a,b,c,d;
    
    time_t now = time(nullptr);
    
    
    tm* local_time = localtime(&now);

    
    int year = local_time->tm_year + 1900; 
    int month = local_time->tm_mon + 1;     
    int day = local_time->tm_mday;        

    
    cout << "Date Now: " << year << "-" << month << "-" << day << endl;
    return 0;
        
    }
    
    
    
   
    int RentalDate (int p){int a , b, c, d;
  cout << "Write vehicle rental date\n";
  cout << "year/mounth/day" << endl;
  cout << "YEAR/:";
  cin >> a;
  while(a<2024){
    cout<<"choose this year : ";
    cin>>a;
  }
  cout << "MOUNTH/:";
  cin >> b;


while (b > 12){
	  cout << " Choose a real month : ";
	  cin >> b;}
  while (b <= 0){
	  cout << " Choose a real month : ";
	  cin >> b;}
  


  cout << "DAY:";
  cin >> c;
  while (c > 30){
	  cout << " Choose a real day : ";
	  cin >> c;}
  while (c <= 0){
	  cout << " Choose a real day : ";
	  cin >> c;}

  cout << a << "/" << b << "/" << c << "\n \n";
  string rentals[] = { "none", "5 days", "10 days" };
  cout << "1- (5 days: 800 riyal) 2- (10 days: 1500 riyal)\n" << endl;
  cout << "Choose one of these rentals: ";
  cin >> d;
  while (d > 2){cout << "Choose one of the numbers behind";
	  cin >> d;}
  while (d <= 0){cout << "Choose one of the numbers behind";
	  cin >> d;}
  
  if (d == 1){
	  c=c+5;
    if (c > 30){
      b=b+1;
      if(b>12){
        b=b-12;
        a=a+1;}
      c=c-30;}
	  cout << a << "/" << b << "/" << c << "\n";
	  cout << "Reflux after five days";}
  
  else if (d == 2){
    c=c+10;
    if (c > 30){
      b=b+1;
      if(b>12){
        b=b-12;
        a=a+1;}
      c=c-30;}
	  cout << a << "/" << b << "/" << c << "\n";
	  cout << "Reflux after 10 days";}

return p;}

};
int returne (int p)
{return p;}












int main (){box box1, box2, box3, box4, box5;
string year_of_car[] =
	{ "none", "2014", "2015", "2016", "2017", "2018", "2019", "2020", "2021",
	"2022", "2023", "2024"};
string company[] =
	{ "none", "GMC", "MAZDA", "HONDA", "FORD", "TOYOTA", "MERCEDES",
	"CHEVROLET", "CHANGAN", "HYUNDAI", "MG"};

  cout << "Collaborative Car Rental System Project in C++ \n" << endl;
   box5.CurrentDate (box1.w);
  cout <<",.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,"<< endl;
  cout << "Choose one of the companies \n" << endl;
  cout << "1-GMC        2-MAZDA       3-HONDA       4-FORD" << endl;
  cout << "5-TOYOTA     6-MERCEDES    7-CHEVROLET" << endl;
  cout << "8-CHANGAN    9-HYUNDAI     10-MG\n" << endl;
  cout << "type one of the numbers here: ";
  cin >> box1.w;
  cout << endl;
  while (box1.w > 10){cout << "Choose one of the numbers behind the car names: ";
	  cin >> box1.w;}
while (box1.w <= 0){cout << "Choose one of the numbers behind the car names: ";
	  cin >> box1.w;}
  cout << company[box1.w];
if (box1.w == 1)
	box4.GMCmodel (box1.w);
  else if (box1.w == 2)
	box4.MAZDAmodel (box1.w);
  else if (box1.w == 3)
	box4.HONDAmodel (box1.w);
  else if (box1.w == 4)
	box4.FORDmodel (box1.w);
  else if (box1.w == 5)
  box4.TOYOTAmodel (box1.w);
  else if (box1.w == 6)
  box4.MERCEDESmodel (box1.w);
  else if (box1.w == 7)
  box4.CHEVROLETmodel (box1.w);
  else if (box1.w == 8)
  box4.CHANGANmodel (box1.w);
  else if (box1.w == 9)
  box4.HYUNDAImodel (box1.w);
  else if (box1.w == 10)
  box4.MGmodel (box1.w);
  else
	cout << "\nType one of the numbers that appear in the lists:";
cout << endl;
  cout << "\n \nWrite your first and last name here: ";
  cin >> box2.name1 >> box2.name2;
  cout << endl;
  cout << endl;
  
  box5.RentalDate (box3.r);
  cout << endl;
  cout <<
	"\n,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,"
	<< endl;
  cout << "\nprogram end";






  return 0;
}

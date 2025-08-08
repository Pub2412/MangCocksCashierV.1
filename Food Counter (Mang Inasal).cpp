#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Statements
    srand((unsigned) time(NULL));
	string exp;
	string addr;
	string pcode;
	int random=1 + (rand() % 1000);
	int cock;
	int cockil;
	int addil;
	int addil2;
	char add1;
	char add2;
	char sure;
	char pay;
	char del;
	char card[16];
	char cvv[3];
	float bayad,total,ntotal, ftotal;
	float one,two,three,four,five,six,seven,eight,nine,ten,a,b,c,d,e,f,g,h,j,i,k,l,m,n,o,p,q,r,s,z;
    one=849.00;
    two=611.00;
    three=409.00;
    four=347.00;
    five=390.00;
    six= 498.00;
    seven= 179.00;
    eight= 144.00;
    nine= 180.00;
    ten= 192.00;
	a=45.00;
	b=45.00;
	c=45.00;
	d=45.00;
	e=115.00;
	f=45.00;
	g=29.00;
	h=41.00;
	i=12.00;
	j=7.00;
	k=7.00;
	l=8.00;
	m=8.00;
	n=12.00;
	o=45.00;
	p=45.00;
	q=45.00;
	r=190.00;
	s=370.00;
	z=0;
	
	//Layout
	std::cout << R"(
                                                      ##      ## ######## ##        ######   #######  ##     ## ########     ######     ###    
                                                      ##  ##  ## ##       ##       ##    ## ##     ## ###   ### ##          ##    ##   ## ##   
                                                      ##  ##  ## ##       ##       ##       ##     ## #### #### ##          ##        ##   ##  
                                                      ##  ##  ## ######   ##       ##       ##     ## ## ### ## ######       ######  ##     ## 
                                                      ##  ##  ## ##       ##       ##       ##     ## ##     ## ##                ## ######### 
                                                      ##  ##  ## ##       ##       ##    ## ##     ## ##     ## ##          ##    ## ##     ## 
                                                       ###  ###  ######## ########  ######   #######  ##     ## ########     ######  ##     ## 
 
                                                ##::::'##::::'###::::'##::: ##::'######:::'####:::::'######:::'#######:::'######::'##:::'##::'######::   
                                                ###::'###:::'## ##::: ###:: ##:'##... ##:: ####::::'##... ##:'##.... ##:'##... ##: ##::'##::'##... ##:    __//
                                                ####'####::'##:. ##:: ####: ##: ##:::..:::. ##::::: ##:::..:: ##:::: ##: ##:::..:: ##:'##::: ##:::..::   /.__.\
                                                ## ### ##:'##:::. ##: ## ## ##: ##::'####:'##:::::: ##::::::: ##:::: ##: ##::::::: #####::::. ######::   \ \/ /
                                                ##. #: ##: #########: ##. ####: ##::: ##::..::::::: ##::::::: ##:::: ##: ##::::::: ##. ##::::..... ##:'__/    \
                                                ##:.:: ##: ##.... ##: ##:. ###: ##::: ##::::::::::: ##::: ##: ##:::: ##: ##::: ##: ##:. ##::'##::: ##: \-      )
                                                ##:::: ##: ##:::: ##: ##::. ##:. ######::::::::::::. ######::. #######::. ######:: ##::. ##:. ######::  \_____/
                                                .:::::..::..:::::..::..::::..:::......::::::::::::::......::::.......::::......:::..::::..:::......::_____|_|____    
                                                                                                                                                          " "
                                                                  88888888b .d88888b  d888888P       d88  .d888b. .d8888P .d888b. 
                                                                  88        88.    "'    88           88  Y8' `88 88'     Y8' `88 
                                                                 a88aaaa    `Y88888b.    88           88  `8bad88 88baaa. `8bad88 
                                                                  88              `8b    88           88      `88 88` `88     `88 
                                                                  88        d8'   .8P    88    dP     88  d.  .88 8b. .d8 d.  .88 
                                                                  88888888P  Y88888P     dP    88    d88P `8888P  `Y888P' `8888P  
                                                                ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
)" << '\n';

	cout<<"\n\t\t___________________________________________________________________________________________________________________________________________________________________________\n";
	cout<<"\t\t___________________________________________________________________________________________________________________________________________________________________________\n";
    cout<<"\n\t\t\tORDER NA: \n";
	cout<<"\n\t\t\tPARA SAIYO :>  MUST TRY!! \n";
	cout<<"\n\t\t\t1. Chicken Inasal & Pork BBQ Family Fiesta Package ---> PhP 849.00"<<setw(35)<<"\t 7.  Chicken Inasal Paa Large - PM1 --------------------------------> PhP 179.00 \n";
	cout<<"\t\t\t2. Chicken Inasal Paa & Pecho Large Family Size ------> PhP 611.00"<<setw(35)<<"\t 8.  Chicken Inasal & Pork BBQ Buddy Size --------------------------> PhP 144.00 \n";
	cout<<"\t\t\t3. Chicken Inasal Trio -------------------------------> PhP 409.00"<<setw(35)<<"\t 9.  Chicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink) ---> PhP 180.00 \n";
	cout<<"\t\t\t4. Chicken Inasal Pecho Large Buddy Size -------------> PhP 347.00 \n";
	cout<<"\t\t\t5. Chicken Inasal & Pork BBQ Fiesta Package ----------> PhP 390.00 \n";
	cout<<"\t\t\t6. All Chicken Buddy Fiesta Package ------------------> PhP 498.00 \n";
	cout<<"\n\t\t\tPS: LAHAT NG MGA COCK AY MAY KASAMANG ISANG HALF KARDERONG KANIN (SA FIESTA PACKAGES AY MAY KASAMANG ISANG KARDERONG KANIN)\n";
	cout<<"\n\t\t\tGusto mo ba itry ang aming cock? Ilagay lamang ang salita ng numero (1, 2, 3, 4, 5, 6, 7, 8, 9) You don't like? Press 0: ";
	cin>>cock;
	cout<<"\n\t\t\tIlan ang gusto mong cock?: ";
	cin>>cockil;
                                                                                        
	cout<<"\n\n\n\t\t\tINUMIN ATBP:"<<setw(103)<<"PANGHIMAGAS:                                                             \n";
	cout<<"\n\t\t\tA. Iced Red Gulaman ------> Php 45.00"<<setw(35)<<"\t O. Extra Creamy Halo-Halo -------> Php 45.00    \n";
	cout<<"\t\t\tB. Iced Tea --------------> Php 45.00"<<setw(35)<<"\t P. Crema de Leche Halo-Halo -----> Php 45.00    \n";
	cout<<"\t\t\tC. Coke ------------------> Php 45.00"<<setw(35)<<"\t Q. Empanada ---------------------> Php 45.00    \n";
	cout<<"\t\t\tD. Coke Zero -------------> Php 45.00"<<setw(35)<<"\t R. 3 pcs Empanada ---------------> Php 190.00   \n";
	cout<<"\t\t\tE. Coke Regular 1.5L -----> Php 115.00"<<setw(34)<<"\t S. 6 pcs Empanada ---------------> Php 370.00   \n";
	cout<<"\t\t\tF. Sprite ----------------> Php 45.00                                                              \n";
	cout<<"\t\t\tG. Plain Rice ------------> Php 29.00                                                              \n";
	cout<<"\t\t\tH. Java Rice -------------> Php 41.00                                                              \n";
	cout<<"\t\t\tI. Soup ------------------> Php 12.00                                                              \n";
	cout<<"\t\t\tJ. Chicken Oil -----------> Php 7.00                                                               \n";
	cout<<"\t\t\tK. Toyomansi -------------> Php 7.00                                                               \n";
	cout<<"\t\t\tL. Spiced Vinegar --------> Php 8.00                                                               \n";
	cout<<"\t\t\tM. Peanut Sauce ----------> Php 8.00                                                               \n";
	cout<<"\t\t\tN. Mushroom Gravy --------> Php 12.00                                                              \n";
	cout<<"\n\t\t\tGusto mo ba iavail ang aming mga INUMIN? Ilagay lamang ang letrang (A, B, C, D, E, F, G, H, I, J, K, L, M, N) You don't like? Press Z: ";
	cin>>add1;
	cout<<"\n\t\t\tIlan ang gusto mong INUMIN? Press 0 pag wala: ";
	cin>>addil;
	cout<<"\n\t\t\tGusto mo ba iavail ang aming mga PANGHIMAGAS? Ilagay lamang ang letrang (O, P, Q, R, S) You don't like? Press Z: ";
	cin>>add2;
	cout<<"\n\t\t\tIlan ang gusto mong PANGHIMAGAS? Press 0 pag wala: ";
	cin>>addil2;
	cout<<"\n\t\t___________________________________________________________________________________________________________________________________________________________________________\n";
	cout<<"\t\t___________________________________________________________________________________________________________________________________________________________________________\n";
	cout<<endl;
	
	//Conditions
				if ((cock=1) && (add1=='A') && (add2=='O'))
				{
					total=(one*cockil)+(a*addil)+(o*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='P'))
				{
					total=(one*cockil)+(a*addil)+(p*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='Q'))
				{
					total=(one*cockil)+(a*addil)+(q*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='R'))
				{
					total=(one*cockil)+(a*addil)+(r*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='S'))
				{
					total=(one*cockil)+(a*addil)+(s*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='Z'))
				{
					total=(one*cockil)+(a*addil);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
		        else if ((cock=1) && (add1=='B') && (add2=='O'))
				{
					total=(one*cockil)+(b*addil)+(o*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='P'))
				{
					total=(one*cockil)+(b*addil)+(p*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='Q'))
				{
					total=(one*cockil)+(b*addil)+(q*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='R'))
				{
					total=(one*cockil)+(b*addil)+(r*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='S'))
				{
					total=(one*cockil)+(b*addil)+(s*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='Z'))
				{
					total=(one*cockil)+(b*addil);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='O'))
				{
					total=(one*cockil)+(c*addil)+(o*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
		        }
				else if ((cock=1) && (add1=='C') && (add2=='P'))
				{
					total=(one*cockil)+(c*addil)+(p*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='Q'))
				{
					total=(one*cockil)+(c*addil)+(q*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='R'))
				{
					total=(one*cockil)+(c*addil)+(r*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='S'))
				{
					total=(one*cockil)+(c*addil)+(s*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='Z'))
				{
					total=(one*cockil)+(c*addil);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='O'))
				{
					total=(one*cockil)+(d*addil)+(o*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
		}
				else if ((cock=1) && (add1=='D') && (add2=='P'))
				{
					total=(one*cockil)+(d*addil)+(p*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='Q'))
				{
					total=(one*cockil)+(d*addil)+(q*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='R'))
				{
					total=(one*cockil)+(d*addil)+(r*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='S'))
				{
					total=(one*cockil)+(d*addil)+(s*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='Z'))
				{
					total=(one*cockil)+(d*addil);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='E') && (add2=='O'))
                {
                    total=(one*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='P'))
                {
                    total=(one*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='Q'))
                {
                    total=(one*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='R'))
                {
                    total=(one*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='S'))
                {
                    total=(one*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='Z'))
                {
                    total=(one*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='F') && (add2=='O'))
                {
                    total=(one*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='P'))
                {
                    total=(one*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='Q'))
                {
                    total=(one*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='R'))
                {
                    total=(one*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='S'))
                {
                    total=(one*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='Z'))
                {
                    total=(one*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
		        else if ((cock=1) && (add1=='G') && (add2=='O'))
                {
                    total=(one*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='P'))
                {
                    total=(one*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='Q'))
                {
                    total=(one*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='R'))
                {
                    total=(one*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='S'))
                {
                    total=(one*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='Z'))
                {
                    total=(one*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='O'))
                {
                    total=(one*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='P'))
                {
                    total=(one*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='Q'))
                {
                    total=(one*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='R'))
                {
                    total=(one*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='S'))
                {
                    total=(one*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='Z'))
                {
                    total=(one*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='I') && (add2=='O'))
                {
                    total=(one*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='P'))
                {
                    total=(one*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='Q'))
                {
                    total=(one*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='R'))
                {
                    total=(one*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='S'))
                {
                    total=(one*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='Z'))
                {
                    total=(one*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
		        else if ((cock=1) && (add1=='J') && (add2=='O'))
                {
                    total=(one*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='P'))
                {
                    total=(one*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='Q'))
                {
                    total=(one*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='R'))
                {
                    total=(one*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='S'))
                {
                    total=(one*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='Z'))
                {
                    total=(one*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='K') && (add2=='O'))
                {
                    total=(one*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='P'))
                {
                    total=(one*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='Q'))
                {
                    total=(one*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='R'))
                {
                    total=(one*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='S'))
                {
                    total=(one*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='Z'))
                {
                    total=(one*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='L') && (add2=='O'))
                {
                    total=(one*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='P'))
                {
                    total=(one*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='Q'))
                {
                    total=(one*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='R'))
                {
                    total=(one*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='S'))
                {
                    total=(one*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='Z'))
                {
                    total=(one*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='O'))
                {
                    total=(one*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='P'))
                {
                    total=(one*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='Q'))
                {
                    total=(one*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='R'))
                {
                    total=(one*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='S'))
                {
                    total=(one*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='Z'))
                {
                    total=(one*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='N') && (add2=='O'))
                {
                    total=(one*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='P'))
                {
                    total=(one*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='Q'))
                {
                    total=(one*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='R'))
                {
                    total=(one*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='S'))
                {
                    total=(one*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='Z'))
                {
                    total=(one*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=2) && (add1=='A') && (add2=='O'))
                {
                    total=(two*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='P'))
                {
                    total=(two*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='Q'))
                {
                    total=(two*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='R'))
                {
                    total=(two*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='S'))
                {
                    total=(two*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='Z'))
                {
                    total=(two*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='O'))
                {
                    total=(two*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='P'))
                {
                    total=(two*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='Q'))
                {
                    total=(two*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='R'))
                {
                    total=(two*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='S'))
                {
                    total=(two*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='Z'))
                {
                    total=(two*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='O'))
                {
                    total=(two*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=2) && (add1=='C') && (add2=='P'))
                {
                    total=(two*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='Q'))
                {
                    total=(two*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='R'))
                {
                    total=(two*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='S'))
                {
                    total=(two*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='Z'))
                {
                    total=(two*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='O'))
                {
                    total=(two*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=2) && (add1=='D') && (add2=='P'))
                {
                    total=(two*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='Q'))
                {
                    total=(two*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='R'))
                {
                    total=(two*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='S'))
                {
                    total=(two*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='Z'))
                {
                    total=(two*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='O'))
                {
                    total=(two*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='P'))
                {
                    total=(two*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='Q'))
                {
                    total=(two*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='R'))
                {
                    total=(two*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='S'))
                {
                    total=(two*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='Z'))
                {
                    total=(two*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='O'))
                {
                    total=(two*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='P'))
                {
                    total=(two*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='Q'))
                {
                    total=(two*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='R'))
                {
                    total=(two*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='S'))
                {
                    total=(two*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='Z'))
                {
                    total=(two*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='O'))
                {
                    total=(two*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='P'))
                {
                    total=(two*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='Q'))
                {
                    total=(two*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='R'))
                {
                    total=(two*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='S'))
                {
                    total=(two*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='Z'))
                {
                    total=(two*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='O'))
                {
                    total=(two*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='P'))
                {
                    total=(two*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='Q'))
                {
                    total=(two*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='R'))
                {
                    total=(two*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='S'))
                {
                    total=(two*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='Z'))
                {
                    total=(two*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='O'))
                {
                    total=(two*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='P'))
                {
                    total=(two*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='Q'))
                {
                    total=(two*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='R'))
                {
                    total=(two*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='S'))
                {
                    total=(two*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='Z'))
                {
                    total=(two*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='O'))
                {
                    total=(two*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='P'))
                {
                    total=(two*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='Q'))
                {
                    total=(two*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='R'))
                {
                    total=(two*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='S'))
                {
                    total=(two*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='Z'))
                {
                    total=(two*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='O'))
                {
                    total=(two*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='P'))
                {
                    total=(two*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='Q'))
                {
                    total=(two*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='R'))
                {
                    total=(two*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='S'))
                {
                    total=(two*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='Z'))
                {
                    total=(two*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='O'))
                {
                    total=(two*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='P'))
                {
                    total=(two*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='Q'))
                {
                    total=(two*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='R'))
                {
                    total=(two*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='S'))
                {
                    total=(two*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='Z'))
                {
                    total=(two*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='O'))
                {
                    total=(two*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='P'))
                {
                    total=(two*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='Q'))
                {
                    total=(two*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='R'))
                {
                    total=(two*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='S'))
                {
                    total=(two*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='Z'))
                {
                    total=(two*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='O'))
                {
                    total=(two*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='P'))
                {
                    total=(two*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='Q'))
                {
                    total=(two*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='R'))
                {
                    total=(two*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='S'))
                {
                    total=(two*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='Z'))
                {
                    total=(two*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=3) && (add1=='A') && (add2=='O'))
                {
                    total=(three*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='P'))
                {
                    total=(three*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='Q'))
                {
                    total=(three*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='R'))
                {
                    total=(three*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='S'))
                {
                    total=(three*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='Z'))
                {
                    total=(three*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='O'))
                {
                    total=(three*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='P'))
                {
                    total=(three*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='Q'))
                {
                    total=(three*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='R'))
                {
                    total=(three*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='S'))
                {
                    total=(three*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='Z'))
                {
                    total=(three*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }

                else if ((cock=3) && (add1=='C') && (add2=='O'))
                {
                    total=(three*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=3) && (add1=='C') && (add2=='P'))
                {
                    total=(three*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='C') && (add2=='Q'))
                {
                    total=(three*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='C') && (add2=='R'))
                {
                    total=(three*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='C') && (add2=='S'))
                {
                    total=(three*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='C') && (add2=='Z'))
                {
                    total=(three*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='O'))
                {
                    total=(three*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=3) && (add1=='D') && (add2=='P'))
                {
                    total=(three*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='Q'))
                {
                    total=(three*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='R'))
                {
                    total=(three*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='S'))
                {
                    total=(three*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='Z'))
                {
                    total=(three*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='O'))
                {
                    total=(three*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='P'))
                {
                    total=(three*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='Q'))
                {
                    total=(three*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='R'))
                {
                    total=(three*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='S'))
                {
                    total=(three*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='Z'))
                {
                    total=(three*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='O'))
                {
                    total=(three*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='P'))
                {
                    total=(three*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='Q'))
                {
                    total=(three*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='R'))
                {
                    total=(three*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='S'))
                {
                    total=(three*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='Z'))
                {
                    total=(three*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='O'))
                {
                    total=(three*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='P'))
                {
                    total=(three*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='Q'))
                {
                    total=(three*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='R'))
                {
                    total=(three*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='S'))
                {
                    total=(three*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='Z'))
                {
                    total=(three*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='O'))
                {
                    total=(three*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='P'))
                {
                    total=(three*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='Q'))
                {
                    total=(three*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='R'))
                {
                    total=(three*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='S'))
                {
                    total=(three*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='Z'))
                {
                    total=(three*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='O'))
                {
                    total=(three*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='P'))
                {
                    total=(three*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='Q'))
                {
                    total=(three*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='R'))
                {
                    total=(three*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='S'))
                {
                    total=(three*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='Z'))
                {
                    total=(three*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='O'))
                {
                    total=(three*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='P'))
                {
                    total=(three*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='Q'))
                {
                    total=(three*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='R'))
                {
                    total=(three*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='S'))
                {
                    total=(three*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='Z'))
                {
                    total=(three*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='O'))
                {
                    total=(three*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='P'))
                {
                    total=(three*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='Q'))
                {
                    total=(three*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='R'))
                {
                    total=(three*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='S'))
                {
                    total=(three*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='Z'))
                {
                    total=(three*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='O'))
                {
                    total=(three*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='P'))
                {
                    total=(three*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='Q'))
                {
                    total=(three*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='R'))
                {
                    total=(three*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='S'))
                {
                    total=(three*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='Z'))
                {
                    total=(three*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='O'))
                {
                    total=(three*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='P'))
                {
                    total=(three*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='Q'))
                {
                    total=(three*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='R'))
                {
                    total=(three*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='S'))
                {
                    total=(three*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='Z'))
                {
                    total=(three*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='O'))
                {
                    total=(three*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='P'))
                {
                    total=(three*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='Q'))
                {
                    total=(three*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='R'))
                {
                    total=(three*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='S'))
                {
                    total=(three*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='Z'))
                {
                    total=(three*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=4) && (add1=='A') && (add2=='O'))
                {
                    total=(four*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='P'))
                {
                    total=(four*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='Q'))
                {
                    total=(four*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='R'))
                {
                    total=(four*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='S'))
                {
                    total=(four*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='Z'))
                {
                    total=(four*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='O'))
                {
                    total=(four*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='P'))
                {
                    total=(four*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='Q'))
                {
                    total=(four*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='R'))
                {
                    total=(four*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='S'))
                {
                    total=(four*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='Z'))
                {
                    total=(four*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
 
                else if ((cock=4) && (add1=='C') && (add2=='O'))
                {
                    total=(four*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=4) && (add1=='C') && (add2=='P'))
                {
                    total=(four*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='C') && (add2=='Q'))
                {
                    total=(four*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='C') && (add2=='R'))
                {
                    total=(four*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='C') && (add2=='S'))
                {
                    total=(four*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='C') && (add2=='Z'))
                {
                    total=(four*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='O'))
                {
                    total=(four*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=4) && (add1=='D') && (add2=='P'))
                {
                    total=(four*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='Q'))
                {
                    total=(four*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='R'))
                {
                    total=(four*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='S'))
                {
                    total=(four*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='Z'))
                {
                    total=(four*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='O'))
                {
                    total=(four*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='P'))
                {
                    total=(four*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='Q'))
                {
                    total=(four*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='R'))
                {
                    total=(four*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='S'))
                {
                    total=(four*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='Z'))
                {
                    total=(four*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='O'))
                {
                    total=(four*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='P'))
                {
                    total=(four*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='Q'))
                {
                    total=(four*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='R'))
                {
                    total=(four*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='S'))
                {
                    total=(four*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='Z'))
                {
                    total=(four*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='O'))
                {
                    total=(four*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='P'))
                {
                    total=(four*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='Q'))
                {
                    total=(four*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='R'))
                {
                    total=(four*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='S'))
                {
                    total=(four*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='Z'))
                {
                    total=(four*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='O'))
                {
                    total=(four*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='P'))
                {
                    total=(four*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='Q'))
                {
                    total=(four*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='R'))
                {
                    total=(four*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='S'))
                {
                    total=(four*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='Z'))
                {
                    total=(four*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='O'))
                {
                    total=(four*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='P'))
                {
                    total=(four*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='Q'))
                {
                    total=(four*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='R'))
                {
                    total=(four*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='S'))
                {
                    total=(four*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='Z'))
                {
                    total=(four*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='O'))
                {
                    total=(four*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='P'))
                {
                    total=(four*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='Q'))
                {
                    total=(four*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='R'))
                {
                    total=(four*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='S'))
                {
                    total=(four*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='Z'))
                {
                    total=(four*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='O'))
                {
                    total=(four*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='P'))
                {
                    total=(four*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='Q'))
                {
                    total=(four*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='R'))
                {
                    total=(four*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='S'))
                {
                    total=(four*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='Z'))
                {
                    total=(four*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='O'))
                {
                    total=(four*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='P'))
                {
                    total=(four*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='Q'))
                {
                    total=(four*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='R'))
                {
                    total=(four*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='S'))
                {
                    total=(four*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='Z'))
                {
                    total=(four*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='O'))
                {
                    total=(four*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='P'))
                {
                    total=(four*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='Q'))
                {
                    total=(four*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='R'))
                {
                    total=(four*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='S'))
                {
                    total=(four*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='Z'))
                {
                    total=(four*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='O'))
                {
                    total=(four*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='P'))
                {
                    total=(four*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='Q'))
                {
                    total=(four*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='R'))
                {
                    total=(four*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='S'))
                {
                    total=(four*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='Z'))
                {
                    total=(four*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=5) && (add1=='A') && (add2=='O'))
                {
                    total=(five*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='P'))
                {
                    total=(five*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='Q'))
                {
                    total=(five*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='R'))
                {
                    total=(five*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='S'))
                {
                    total=(five*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='Z'))
                {
                    total=(five*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='O'))
                {
                    total=(five*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='P'))
                {
                    total=(five*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='Q'))
                {
                    total=(five*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='R'))
                {
                    total=(five*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='S'))
                {
                    total=(five*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='Z'))
                {
                    total=(five*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='O'))
                {
                    total=(five*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=5) && (add1=='C') && (add2=='P'))
                {
                    total=(five*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='Q'))
                {
                    total=(five*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='R'))
                {
                    total=(five*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='S'))
                {
                    total=(five*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='Z'))
                {
                    total=(five*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='O'))
                {
                    total=(five*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=5) && (add1=='D') && (add2=='P'))
                {
                    total=(five*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='Q'))
                {
                    total=(five*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='R'))
                {
                    total=(five*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='S'))
                {
                    total=(five*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='Z'))
                {
                    total=(five*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='O'))
                {
                    total=(five*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='P'))
                {
                    total=(five*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='Q'))
                {
                    total=(five*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='R'))
                {
                    total=(five*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='S'))
                {
                    total=(five*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='Z'))
                {
                    total=(five*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='O'))
                {
                    total=(five*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='P'))
                {
                    total=(five*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='Q'))
                {
                    total=(five*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='R'))
                {
                    total=(five*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='S'))
                {
                    total=(five*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='Z'))
                {
                    total=(five*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='O'))
                {
                    total=(five*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='P'))
                {
                    total=(five*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='Q'))
                {
                    total=(five*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='R'))
                {
                    total=(five*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='S'))
                {
                    total=(five*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='Z'))
                {
                    total=(five*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='O'))
                {
                    total=(five*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='P'))
                {
                    total=(five*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='Q'))
                {
                    total=(five*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='R'))
                {
                    total=(five*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='S'))
                {
                    total=(five*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='Z'))
                {
                    total=(five*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='O'))
                {
                    total=(five*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='P'))
                {
                    total=(five*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='Q'))
                {
                    total=(five*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='R'))
                {
                    total=(five*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='S'))
                {
                    total=(five*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='Z'))
                {
                    total=(five*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='O'))
                {
                    total=(five*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='P'))
                {
                    total=(five*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='Q'))
                {
                    total=(five*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='R'))
                {
                    total=(five*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='S'))
                {
                    total=(five*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='Z'))
                {
                    total=(five*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='O'))
                {
                    total=(five*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='P'))
                {
                    total=(five*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='Q'))
                {
                    total=(five*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='R'))
                {
                    total=(five*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='S'))
                {
                    total=(five*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='Z'))
                {
                    total=(five*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='O'))
                {
                    total=(five*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='P'))
                {
                    total=(five*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='Q'))
                {
                    total=(five*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='R'))
                {
                    total=(five*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='S'))
                {
                    total=(five*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='Z'))
                {
                    total=(five*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='O'))
                {
                    total=(five*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='P'))
                {
                    total=(five*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='Q'))
                {
                    total=(five*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='R'))
                {
                    total=(five*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='S'))
                {
                    total=(five*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='Z'))
                {
                    total=(five*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='O'))
                {
                    total=(five*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='P'))
                {
                    total=(five*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='Q'))
                {
                    total=(five*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='R'))
                {
                    total=(five*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='S'))
                {
                    total=(five*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='Z'))
                {
                    total=(five*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=6) && (add1=='A') && (add2=='O'))
                {
                    total=(six*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='P'))
                {
                    total=(six*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='Q'))
                {
                    total=(six*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='R'))
                {
                    total=(six*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='S'))
                {
                    total=(six*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='Z'))
                {
                    total=(six*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='O'))
                {
                    total=(six*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='P'))
                {
                    total=(six*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='Q'))
                {
                    total=(six*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='R'))
                {
                    total=(six*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='S'))
                {
                    total=(six*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='Z'))
                {
                    total=(six*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=6) && (add1=='C') && (add2=='O'))
                {
                    total=(six*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=6) && (add1=='C') && (add2=='P'))
                {
                    total=(six*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='C') && (add2=='Q'))
                {
                    total=(six*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='C') && (add2=='R'))
                {
                    total=(six*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='C') && (add2=='S'))
                {
                    total=(six*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='C') && (add2=='Z'))
                {
                    total=(six*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='O'))
                {
                    total=(six*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=6) && (add1=='D') && (add2=='P'))
                {
                    total=(six*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='Q'))
                {
                    total=(six*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='R'))
                {
                    total=(six*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='S'))
                {
                    total=(six*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='Z'))
                {
                    total=(six*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='O'))
                {
                    total=(six*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='P'))
                {
                    total=(six*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='Q'))
                {
                    total=(six*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='R'))
                {
                    total=(six*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='S'))
                {
                    total=(six*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='Z'))
                {
                    total=(six*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='O'))
                {
                    total=(six*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='P'))
                {
                    total=(six*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='Q'))
                {
                    total=(six*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='R'))
                {
                    total=(six*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='S'))
                {
                    total=(six*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='Z'))
                {
                    total=(six*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='O'))
                {
                    total=(six*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='P'))
                {
                    total=(six*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='Q'))
                {
                    total=(six*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='R'))
                {
                    total=(six*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='S'))
                {
                    total=(six*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='Z'))
                {
                    total=(six*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='O'))
                {
                    total=(six*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='P'))
                {
                    total=(six*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='Q'))
                {
                    total=(six*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='R'))
                {
                    total=(six*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='S'))
                {
                    total=(six*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='Z'))
                {
                    total=(six*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='O'))
                {
                    total=(six*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='P'))
                {
                    total=(six*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='Q'))
                {
                    total=(six*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='R'))
                {
                    total=(six*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='S'))
                {
                    total=(six*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='Z'))
                {
                    total=(six*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='O'))
                {
                    total=(six*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='P'))
                {
                    total=(six*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='Q'))
                {
                    total=(six*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='R'))
                {
                    total=(six*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='S'))
                {
                    total=(six*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='Z'))
                {
                    total=(six*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='O'))
                {
                    total=(six*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='P'))
                {
                    total=(six*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='Q'))
                {
                    total=(six*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='R'))
                {
                    total=(six*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='S'))
                {
                    total=(six*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='Z'))
                {
                    total=(six*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='O'))
                {
                    total=(six*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='P'))
                {
                    total=(six*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='Q'))
                {
                    total=(six*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='R'))
                {
                    total=(six*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='S'))
                {
                    total=(six*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='Z'))
                {
                    total=(six*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='O'))
                {
                    total=(six*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='P'))
                {
                    total=(six*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='Q'))
                {
                    total=(six*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='R'))
                {
                    total=(six*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='S'))
                {
                    total=(six*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='Z'))
                {
                    total=(six*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='O'))
                {
                    total=(six*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='P'))
                {
                    total=(six*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='Q'))
                {
                    total=(six*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='R'))
                {
                    total=(six*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='S'))
                {
                    total=(six*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='Z'))
                {
                    total=(six*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=7) && (add1=='A') && (add2=='O'))
                {
                    total=(seven*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='P'))
                {
                    total=(seven*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='Q'))
                {
                    total=(seven*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='R'))
                {
                    total=(seven*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='S'))
                {
                    total=(seven*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='Z'))
                {
                    total=(seven*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='O'))
                {
                    total=(seven*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='P'))
                {
                    total=(seven*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='Q'))
                {
                    total=(seven*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='R'))
                {
                    total=(seven*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='S'))
                {
                    total=(seven*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='Z'))
                {
                    total=(seven*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=7) && (add1=='C') && (add2=='O'))
                {
                    total=(seven*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=7) && (add1=='C') && (add2=='P'))
                {
                    total=(seven*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='C') && (add2=='Q'))
                {
                    total=(seven*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='C') && (add2=='R'))
                {
                    total=(seven*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='C') && (add2=='S'))
                {
                    total=(seven*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='C') && (add2=='Z'))
                {
                    total=(seven*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='O'))
                {
                    total=(seven*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=7) && (add1=='D') && (add2=='P'))
                {
                    total=(seven*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='Q'))
                {
                    total=(seven*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='R'))
                {
                    total=(seven*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='S'))
                {
                    total=(seven*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='Z'))
                {
                    total=(seven*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='O'))
                {
                    total=(seven*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='P'))
                {
                    total=(seven*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='Q'))
                {
                    total=(seven*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='R'))
                {
                    total=(seven*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='S'))
                {
                    total=(seven*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='Z'))
                {
                    total=(seven*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='O'))
                {
                    total=(seven*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='P'))
                {
                    total=(seven*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='Q'))
                {
                    total=(seven*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='R'))
                {
                    total=(seven*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='S'))
                {
                    total=(seven*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='Z'))
                {
                    total=(seven*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='O'))
                {
                    total=(seven*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='P'))
                {
                    total=(seven*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='Q'))
                {
                    total=(seven*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='R'))
                {
                    total=(seven*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='S'))
                {
                    total=(seven*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='Z'))
                {
                    total=(seven*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='O'))
                {
                    total=(seven*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='P'))
                {
                    total=(seven*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='Q'))
                {
                    total=(seven*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='R'))
                {
                    total=(seven*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='S'))
                {
                    total=(seven*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='Z'))
                {
                    total=(seven*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='O'))
                {
                    total=(seven*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='P'))
                {
                    total=(seven*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='Q'))
                {
                    total=(seven*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='R'))
                {
                    total=(seven*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='S'))
                {
                    total=(seven*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='Z'))
                {
                    total=(seven*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='O'))
                {
                    total=(seven*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='P'))
                {
                    total=(seven*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='Q'))
                {
                    total=(seven*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='R'))
                {
                    total=(seven*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='S'))
                {
                    total=(seven*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='Z'))
                {
                    total=(seven*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='O'))
                {
                    total=(seven*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='P'))
                {
                    total=(seven*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='Q'))
                {
                    total=(seven*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='R'))
                {
                    total=(seven*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='S'))
                {
                    total=(seven*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='Z'))
                {
                    total=(seven*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='O'))
                {
                    total=(seven*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='P'))
                {
                    total=(seven*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='Q'))
                {
                    total=(seven*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='R'))
                {
                    total=(seven*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='S'))
                {
                    total=(seven*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='Z'))
                {
                    total=(seven*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='O'))
                {
                    total=(seven*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='P'))
                {
                    total=(seven*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='Q'))
                {
                    total=(seven*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='R'))
                {
                    total=(seven*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='S'))
                {
                    total=(seven*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='Z'))
                {
                    total=(seven*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='O'))
                {
                    total=(seven*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='P'))
                {
                    total=(seven*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='Q'))
                {
                    total=(seven*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='R'))
                {
                    total=(seven*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='S'))
                {
                    total=(seven*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='Z'))
                {
                    total=(seven*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=8) && (add1=='A') && (add2=='O'))
                {
                    total=(eight*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='P'))
                {
                    total=(eight*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='Q'))
                {
                    total=(eight*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='R'))
                {
                    total=(eight*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='S'))
                {
                    total=(eight*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='Z'))
                {
                    total=(eight*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='O'))
                {
                    total=(eight*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='P'))
                {
                    total=(eight*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='Q'))
                {
                    total=(eight*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='R'))
                {
                    total=(eight*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='S'))
                {
                    total=(eight*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='Z'))
                {
                    total=(eight*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=8) && (add1=='C') && (add2=='O'))
                {
                    total=(eight*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=8) && (add1=='C') && (add2=='P'))
                {
                    total=(eight*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='C') && (add2=='Q'))
                {
                    total=(eight*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='C') && (add2=='R'))
                {
                    total=(eight*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='C') && (add2=='S'))
                {
                    total=(eight*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='C') && (add2=='Z'))
                {
                    total=(eight*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='O'))
                {
                    total=(eight*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=8) && (add1=='D') && (add2=='P'))
                {
                    total=(eight*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='Q'))
                {
                    total=(eight*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='R'))
                {
                    total=(eight*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='S'))
                {
                    total=(eight*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='Z'))
                {
                    total=(eight*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='O'))
                {
                    total=(eight*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='P'))
                {
                    total=(eight*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='Q'))
                {
                    total=(eight*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='R'))
                {
                    total=(eight*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='S'))
                {
                    total=(eight*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='Z'))
                {
                    total=(eight*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='O'))
                {
                    total=(eight*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='P'))
                {
                    total=(eight*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='Q'))
                {
                    total=(eight*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='R'))
                {
                    total=(eight*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='S'))
                {
                    total=(eight*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='Z'))
                {
                    total=(eight*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='O'))
                {
                    total=(eight*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='P'))
                {
                    total=(eight*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='Q'))
                {
                    total=(eight*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='R'))
                {
                    total=(eight*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='S'))
                {
                    total=(eight*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='Z'))
                {
                    total=(eight*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='O'))
                {
                    total=(eight*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='P'))
                {
                    total=(eight*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='Q'))
                {
                    total=(eight*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='R'))
                {
                    total=(eight*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='S'))
                {
                    total=(eight*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='Z'))
                {
                    total=(eight*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='O'))
                {
                    total=(eight*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='P'))
                {
                    total=(eight*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='Q'))
                {
                    total=(eight*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='R'))
                {
                    total=(eight*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='S'))
                {
                    total=(eight*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='Z'))
                {
                    total=(eight*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='O'))
                {
                    total=(eight*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='P'))
                {
                    total=(eight*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='Q'))
                {
                    total=(eight*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='R'))
                {
                    total=(eight*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='S'))
                {
                    total=(eight*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='Z'))
                {
                    total=(eight*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='O'))
                {
                    total=(eight*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='P'))
                {
                    total=(eight*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='Q'))
                {
                    total=(eight*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='R'))
                {
                    total=(eight*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='S'))
                {
                    total=(eight*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='Z'))
                {
                    total=(eight*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='O'))
                {
                    total=(eight*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='P'))
                {
                    total=(eight*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='Q'))
                {
                    total=(eight*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='R'))
                {
                    total=(eight*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='S'))
                {
                    total=(eight*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='Z'))
                {
                    total=(eight*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='O'))
                {
                    total=(eight*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='P'))
                {
                    total=(eight*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='Q'))
                {
                    total=(eight*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='R'))
                {
                    total=(eight*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='S'))
                {
                    total=(eight*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='Z'))
                {
                    total=(eight*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='O'))
                {
                    total=(eight*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='P'))
                {
                    total=(eight*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='Q'))
                {
                    total=(eight*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='R'))
                {
                    total=(eight*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='S'))
                {
                    total=(eight*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='Z'))
                {
                    total=(eight*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=9) && (add1=='A') && (add2=='O'))
                {
                    total=(nine*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='P'))
                {
                    total=(nine*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='Q'))
                {
                    total=(nine*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='R'))
                {
                    total=(nine*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='S'))
                {
                    total=(nine*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='Z'))
                {
                    total=(nine*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='O'))
                {
                    total=(nine*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='P'))
                {
                    total=(nine*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='Q'))
                {
                    total=(nine*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='R'))
                {
                    total=(nine*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='S'))
                {
                    total=(nine*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='Z'))
                {
                    total=(nine*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=9) && (add1=='C') && (add2=='O'))
                {
                    total=(nine*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=9) && (add1=='C') && (add2=='P'))
                {
                    total=(nine*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='C') && (add2=='Q'))
                {
                    total=(nine*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='C') && (add2=='R'))
                {
                    total=(nine*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='C') && (add2=='S'))
                {
                    total=(nine*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='C') && (add2=='Z'))
                {
                    total=(nine*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='O'))
                {
                    total=(nine*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=9) && (add1=='D') && (add2=='P'))
                {
                    total=(nine*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='Q'))
                {
                    total=(nine*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='R'))
                {
                    total=(nine*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='S'))
                {
                    total=(nine*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='Z'))
                {
                    total=(nine*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='O'))
                {
                    total=(nine*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='P'))
                {
                    total=(nine*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='Q'))
                {
                    total=(nine*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='R'))
                {
                    total=(nine*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='S'))
                {
                    total=(nine*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='Z'))
                {
                    total=(nine*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='O'))
                {
                    total=(nine*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='P'))
                {
                    total=(nine*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='Q'))
                {
                    total=(nine*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='R'))
                {
                    total=(nine*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='S'))
                {
                    total=(nine*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='Z'))
                {
                    total=(nine*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='O'))
                {
                    total=(nine*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='P'))
                {
                    total=(nine*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='Q'))
                {
                    total=(nine*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='R'))
                {
                    total=(nine*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='S'))
                {
                    total=(nine*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='Z'))
                {
                    total=(nine*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='O'))
                {
                    total=(nine*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='P'))
                {
                    total=(nine*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='Q'))
                {
                    total=(nine*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='R'))
                {
                    total=(nine*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='S'))
                {
                    total=(nine*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='Z'))
                {
                    total=(nine*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='O'))
                {
                    total=(nine*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='P'))
                {
                    total=(nine*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='Q'))
                {
                    total=(nine*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='R'))
                {
                    total=(nine*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='S'))
                {
                    total=(nine*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='Z'))
                {
                    total=(nine*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='O'))
                {
                    total=(nine*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='P'))
                {
                    total=(nine*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='Q'))
                {
                    total=(nine*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='R'))
                {
                    total=(nine*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='S'))
                {
                    total=(nine*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='Z'))
                {
                    total=(nine*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='O'))
                {
                    total=(nine*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='P'))
                {
                    total=(nine*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='Q'))
                {
                    total=(nine*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='R'))
                {
                    total=(nine*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='S'))
                {
                    total=(nine*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='Z'))
                {
                    total=(nine*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='O'))
                {
                    total=(nine*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='P'))
                {
                    total=(nine*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='Q'))
                {
                    total=(nine*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='R'))
                {
                    total=(nine*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='S'))
                {
                    total=(nine*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='Z'))
                {
                    total=(nine*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='O'))
                {
                    total=(nine*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='P'))
                {
                    total=(nine*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='Q'))
                {
                    total=(nine*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='R'))
                {
                    total=(nine*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='S'))
                {
                    total=(nine*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='Z'))
                {
                    total=(nine*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='O'))
                {
                    total=(nine*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='P'))
                {
                    total=(nine*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='Q'))
                {
                    total=(nine*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='R'))
                {
                    total=(nine*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='S'))
                {
                    total=(nine*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='Z'))
                {
                    total=(nine*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=10) && (add1=='A') && (add2=='O'))
                {
                    total=(ten*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='P'))
                {
                    total=(ten*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='Q'))
                {
                    total=(ten*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='R'))
                {
                    total=(ten*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='S'))
                {
                    total=(ten*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='Z'))
                {
                    total=(ten*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='O'))
                {
                    total=(ten*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='P'))
                {
                    total=(ten*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='Q'))
                {
                    total=(ten*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='R'))
                {
                    total=(ten*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='S'))
                {
                    total=(ten*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='Z'))
                {
                    total=(ten*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=10) && (add1=='C') && (add2=='O'))
                {
                    total=(ten*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=10) && (add1=='C') && (add2=='P'))
                {
                    total=(ten*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='C') && (add2=='Q'))
                {
                    total=(ten*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='C') && (add2=='R'))
                {
                    total=(ten*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='C') && (add2=='S'))
                {
                    total=(ten*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='C') && (add2=='Z'))
                {
                    total=(ten*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='O'))
                {
                    total=(ten*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=10) && (add1=='D') && (add2=='P'))
                {
                    total=(ten*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='Q'))
                {
                    total=(ten*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='R'))
                {
                    total=(ten*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='S'))
                {
                    total=(ten*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='Z'))
                {
                    total=(ten*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='O'))
                {
                    total=(ten*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='P'))
                {
                    total=(ten*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='Q'))
                {
                    total=(ten*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='R'))
                {
                    total=(ten*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='S'))
                {
                    total=(ten*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='Z'))
                {
                    total=(ten*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='O'))
                {
                    total=(ten*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='P'))
                {
                    total=(ten*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='Q'))
                {
                    total=(ten*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='R'))
                {
                    total=(ten*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='S'))
                {
                    total=(ten*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='Z'))
                {
                    total=(ten*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='O'))
                {
                    total=(ten*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='P'))
                {
                    total=(ten*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='Q'))
                {
                    total=(ten*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='R'))
                {
                    total=(ten*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='S'))
                {
                    total=(ten*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='Z'))
                {
                    total=(ten*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='O'))
                {
                    total=(ten*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='P'))
                {
                    total=(ten*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='Q'))
                {
                    total=(ten*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='R'))
                {
                    total=(ten*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='S'))
                {
                    total=(ten*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='Z'))
                {
                    total=(ten*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='O'))
                {
                    total=(ten*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='P'))
                {
                    total=(ten*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='Q'))
                {
                    total=(ten*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='R'))
                {
                    total=(ten*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='S'))
                {
                    total=(ten*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='Z'))
                {
                    total=(ten*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='O'))
                {
                    total=(ten*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='P'))
                {
                    total=(ten*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='Q'))
                {
                    total=(ten*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='R'))
                {
                    total=(ten*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='S'))
                {
                    total=(ten*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='Z'))
                {
                    total=(ten*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='O'))
                {
                    total=(ten*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='P'))
                {
                    total=(ten*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='Q'))
                {
                    total=(ten*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='R'))
                {
                    total=(ten*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='S'))
                {
                    total=(ten*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='Z'))
                {
                    total=(ten*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='O'))
                {
                    total=(ten*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='P'))
                {
                    total=(ten*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='Q'))
                {
                    total=(ten*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='R'))
                {
                    total=(ten*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='S'))
                {
                    total=(ten*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='Z'))
                {
                    total=(ten*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='O'))
                {
                    total=(ten*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='P'))
                {
                    total=(ten*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='Q'))
                {
                    total=(ten*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='R'))
                {
                    total=(ten*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='S'))
                {
                    total=(ten*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='Z'))
                {
                    total=(ten*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='O'))
                {
                    total=(ten*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='P'))
                {
                    total=(ten*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='Q'))
                {
                    total=(ten*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='R'))
                {
                    total=(ten*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='S'))
                {
                    total=(ten*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='Z'))
                {
                    total=(ten*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=1) && (add1=='Z') && (add2=='O'))
                {
                    total=(one*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='Z') && (add2=='P'))
                {
                    total=(one*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='Z') && (add2=='Q'))
                {
                    total=(one*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='Z') && (add2=='R'))
                {
                    total=(one*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='Z') && (add2=='S'))
                {
                    total=(one*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=2) && (add1=='Z') && (add2=='O'))
                {
                    total=(two*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='Z') && (add2=='P'))
                {
                    total=(two*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='Z') && (add2=='Q'))
                {
                    total=(two*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='Z') && (add2=='R'))
                {
                    total=(two*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='Z') && (add2=='S'))
                {
                    total=(two*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=3) && (add1=='Z') && (add2=='O'))
                {
                    total=(three*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='Z') && (add2=='P'))
                {
                    total=(three*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='Z') && (add2=='Q'))
                {
                    total=(three*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='Z') && (add2=='R'))
                {
                    total=(three*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='Z') && (add2=='S'))
                {
                    total=(three*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=4) && (add1=='Z') && (add2=='O'))
                {
                    total=(four*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='Z') && (add2=='P'))
                {
                    total=(four*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='Z') && (add2=='Q'))
                {
                    total=(four*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='Z') && (add2=='R'))
                {
                    total=(four*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='Z') && (add2=='S'))
                {
                    total=(four*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=5) && (add1=='Z') && (add2=='O'))
                {
                    total=(five*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='Z') && (add2=='P'))
                {
                    total=(five*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='Z') && (add2=='Q'))
                {
                    total=(five*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='Z') && (add2=='R'))
                {
                    total=(five*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='Z') && (add2=='S'))
                {
                    total=(five*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=6) && (add1=='Z') && (add2=='O'))
                {
                    total=(six*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='Z') && (add2=='P'))
                {
                    total=(six*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='Z') && (add2=='Q'))
                {
                    total=(six*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='Z') && (add2=='R'))
                {
                    total=(six*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='Z') && (add2=='S'))
                {
                    total=(six*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=7) && (add1=='Z') && (add2=='O'))
                {
                    total=(seven*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='Z') && (add2=='P'))
                {
                    total=(seven*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='Z') && (add2=='Q'))
                {
                    total=(seven*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='Z') && (add2=='R'))
                {
                    total=(seven*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='Z') && (add2=='S'))
                {
                    total=(seven*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=8) && (add1=='Z') && (add2=='O'))
                {
                    total=(eight*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='Z') && (add2=='P'))
                {
                    total=(eight*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='Z') && (add2=='Q'))
                {
                    total=(eight*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='Z') && (add2=='R'))
                {
                    total=(eight*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='Z') && (add2=='S'))
                {
                    total=(eight*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=9) && (add1=='Z') && (add2=='O'))
                {
                    total=(nine*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='Z') && (add2=='P'))
                {
                    total=(nine*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='Z') && (add2=='Q'))
                {
                    total=(nine*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='Z') && (add2=='R'))
                {
                    total=(nine*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='Z') && (add2=='S'))
                {
                    total=(nine*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=10) && (add1=='Z') && (add2=='O'))
                {
                    total=(ten*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='Z') && (add2=='P'))
                {
                    total=(ten*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='Z') && (add2=='Q'))
                {
                    total=(ten*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='Z') && (add2=='R'))
                {
                    total=(ten*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='Z') && (add2=='S'))
                {
                    total=(ten*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=1) && (add1=='Z') && (add2=='Z'))
                {
                    total=(one*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=2) && (add1=='Z') && (add2=='Z'))
                {
                    total=(two*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=3) && (add1=='Z') && (add2=='Z'))
                {
                    total=(three*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=4) && (add1=='Z') && (add2=='Z'))
                {
                    total=(four*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				 else if ((cock=5) && (add1=='Z') && (add2=='Z'))
                {
                    total=(five*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=6) && (add1=='Z') && (add2=='Z'))
                {
                    total=(six*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=7) && (add1=='Z') && (add2=='Z'))
                {
                    total=(seven*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				 else if ((cock=8) && (add1=='Z') && (add2=='Z'))
                {
                    total=(eight*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=9) && (add1=='Z') && (add2=='Z'))
                {
                    total=(nine*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=10) && (add1=='Z') && (add2=='Z'))
                {
                    total=(ten*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else
				cout<<"\t\t\tNagkaroon ng Problema :< - Please try again";
			    cout<<endl;
			    
	           cout<<"\n\t\t\tSure kana sa iyong Order? (Press Y pag sure na, pag hindi Press N): ";
	           cin>>sure;
	
				if (sure=='N')
                {
				cout<<"\t\t\tUlitin Mo! Pleaseee";
			    exit(0);
			}
			
                cout<<"\n\t\t\tAno ang iyong Mode of Payment? (Press C pag Credit/Debit Card or H for Cash): ";
                cin>>pay;
			    
			    if (pay=='H')
                {
             	cout<<"\n\t\t\tMagkano ang iyong Bayad?: Php ";
	            cin>>bayad;
	            cout<<"\t\t\tSukli: Php "<<bayad-total;
	            cout<<endl;
                }
				else if (pay=='C')
				{
             	cout<<"\n\t\t\tAno ang iyong Credit Card Number?: ";
	            cin>>card;
	            cout<<"\t\t\tAno ang expiration date (Month / Day / Year)?: ";
	            cin>>exp;
	            cout<<"\t\t\tAno ang CVV code ng Iyong Card?: ";
	            cin>>cvv;
	      	    }
	            else
				cout<<"\t\t\tNagkaroon ng Problema :< - Please try again";
			    cout<<endl;
			    
	            cout<<"\t\t\tIto ay for Pick up or Delivery? (Press P para for Pickup or D for Delivery): ";
                cin>>del;
                
                if (del=='P')
                {
             	cout<<"\n\t\t\tPara Ipickup ang iyong mga binili maaring pumunta lamang sa malapit na Mang' Cocks Branch' at ipakita ang iyong ORDER NUMBER sa iyong resibo ";
	            cout<<endl;
                }
				else if (del=='D')
				{
             	cout<<"\n\t\t\tAno ang iyong address?: ";
	            cin>>addr;
	            cout<<"\n\t\t\t Ipakita lamang ang iyong ORDER NUMBER sa iyong resibo pag kadating ng iyong order ";
	      	    }
	            else
				cout<<"\t\t\tNagkaroon ng Problema :< - Please try again";
			    cout<<endl;
			    
			    cout<<"\t\t\tMay Promo Code for 30% Discount? (Input your promo code if meron, otherwise Press N pag wala): ";
                cin>>pcode;
                
                if (pcode=="MagandaAko2024")
                {
             	cout<<"\t\t\tValid Code! ";
                }
                else if (pcode=="N")
                {
             	cout<<"";
	            cout<<endl;
	      	    }
	            else
				cout<<"\t\t\tInvalid Code :<";
			    cout<<endl;
				
				if (pcode=="MagandaAko2024")
                {
             	ntotal=((total*0.3)/100);
             	cout<<"Savings: Php"<<ntotal;
             	ftotal=(total-ntotal);
             	cout<<"Final Price: Php"<<ftotal;
             	cout<<endl;
                }
	            else
	            ftotal=total;
				cout<<"\t\t\tFinal Price: Php"<<ftotal;
			    cout<<endl;
				
			//Receipt		
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t---------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		std::cout << R"(
 
                                                          ##::::'##::::'###::::'##::: ##::'######:::'####:::::'######:::'#######:::'######::'##:::'##::'######::   
                                                          ###::'###:::'## ##::: ###:: ##:'##... ##:: ####::::'##... ##:'##.... ##:'##... ##: ##::'##::'##... ##:    __//
                                                          ####'####::'##:. ##:: ####: ##: ##:::..:::. ##::::: ##:::..:: ##:::: ##: ##:::..:: ##:'##::: ##:::..::   /.__.\
                                                          ## ### ##:'##:::. ##: ## ## ##: ##::'####:'##:::::: ##::::::: ##:::: ##: ##::::::: #####::::. ######::   \ \/ /
                                                          ##. #: ##: #########: ##. ####: ##::: ##::..::::::: ##::::::: ##:::: ##: ##::::::: ##. ##::::..... ##:'__/    \
                                                          ##:.:: ##: ##.... ##: ##:. ###: ##::: ##::::::::::: ##::: ##: ##:::: ##: ##::: ##: ##:. ##::'##::: ##: \-      )
                                                          ##:::: ##: ##:::: ##: ##::. ##:. ######::::::::::::. ######::. #######::. ######:: ##::. ##:. ######::  \_____/
                                                          .:::::..::..:::::..::..::::..:::......::::::::::::::......::::.......::::......:::..::::..:::......::_____|_|____    
                                                                                                                                                                    " "
                                                                                88888888b .d88888b  d888888P       d88  .d888b. .d8888P .d888b. 
                                                                                88        88.    "'    88           88  Y8' `88 88'     Y8' `88 
                                                                               a88aaaa    `Y88888b.    88           88  `8bad88 88baaa. `8bad88 
                                                                                88              `8b    88           88      `88 88` `88     `88 
                                                                                88        d8'   .8P    88    dP     88  d.  .88 8b. .d8 d.  .88 
                                                                                88888888P  Y88888P     dP    88    d88P `8888P  `Y888P' `8888P  
                                                                               ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
)" << '\n';

            cout<<"\t\t\tOFFICIAL RECEIPT "<<endl;
            cout<<"\n\t\t\tORDER NUMBER: "<<random<<endl;
            
            cout<<"\n\t\t\t"<<endl;
            
            if ((cock=1) && (add1=='A') && (add2=='O'))
				{
					total=(one*cockil)+(a*addil)+(o*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='P'))
				{
					total=(one*cockil)+(a*addil)+(p*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='Q'))
				{
					total=(one*cockil)+(a*addil)+(q*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='R'))
				{
					total=(one*cockil)+(a*addil)+(r*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='S'))
				{
					total=(one*cockil)+(a*addil)+(s*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='A') && (add2=='Z'))
				{
					total=(one*cockil)+(a*addil);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
		        else if ((cock=1) && (add1=='B') && (add2=='O'))
				{
					total=(one*cockil)+(b*addil)+(o*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='P'))
				{
					total=(one*cockil)+(b*addil)+(p*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='Q'))
				{
					total=(one*cockil)+(b*addil)+(q*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='R'))
				{
					total=(one*cockil)+(b*addil)+(r*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='S'))
				{
					total=(one*cockil)+(b*addil)+(s*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='B') && (add2=='Z'))
				{
					total=(one*cockil)+(b*addil);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tIced Tea "<<addil<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='O'))
				{
					total=(one*cockil)+(c*addil)+(o*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
		        }
				else if ((cock=1) && (add1=='C') && (add2=='P'))
				{
					total=(one*cockil)+(c*addil)+(p*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='Q'))
				{
					total=(one*cockil)+(c*addil)+(q*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='R'))
				{
					total=(one*cockil)+(c*addil)+(r*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='S'))
				{
					total=(one*cockil)+(c*addil)+(s*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='C') && (add2=='Z'))
				{
					total=(one*cockil)+(c*addil);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke "<<addil<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='O'))
				{
					total=(one*cockil)+(d*addil)+(o*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
		}
				else if ((cock=1) && (add1=='D') && (add2=='P'))
				{
					total=(one*cockil)+(d*addil)+(p*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='Q'))
				{
					total=(one*cockil)+(d*addil)+(q*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='R'))
				{
					total=(one*cockil)+(d*addil)+(r*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='S'))
				{
					total=(one*cockil)+(d*addil)+(s*addil2);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='D') && (add2=='Z'))
				{
					total=(one*cockil)+(d*addil);
					cout<<"\t\t\tIyong Mga Binili:";
					cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
					cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
					cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
				}
				else if ((cock=1) && (add1=='E') && (add2=='O'))
                {
                    total=(one*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='P'))
                {
                    total=(one*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='Q'))
                {
                    total=(one*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='R'))
                {
                    total=(one*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='S'))
                {
                    total=(one*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='E') && (add2=='Z'))
                {
                    total=(one*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='F') && (add2=='O'))
                {
                    total=(one*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='P'))
                {
                    total=(one*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='Q'))
                {
                    total=(one*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='R'))
                {
                    total=(one*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='S'))
                {
                    total=(one*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='F') && (add2=='Z'))
                {
                    total=(one*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
		        else if ((cock=1) && (add1=='G') && (add2=='O'))
                {
                    total=(one*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='P'))
                {
                    total=(one*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='Q'))
                {
                    total=(one*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='R'))
                {
                    total=(one*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='S'))
                {
                    total=(one*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='G') && (add2=='Z'))
                {
                    total=(one*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='O'))
                {
                    total=(one*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='P'))
                {
                    total=(one*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='Q'))
                {
                    total=(one*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='R'))
                {
                    total=(one*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='S'))
                {
                    total=(one*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='H') && (add2=='Z'))
                {
                    total=(one*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='I') && (add2=='O'))
                {
                    total=(one*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='P'))
                {
                    total=(one*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='Q'))
                {
                    total=(one*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='R'))
                {
                    total=(one*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='S'))
                {
                    total=(one*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='I') && (add2=='Z'))
                {
                    total=(one*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
		        else if ((cock=1) && (add1=='J') && (add2=='O'))
                {
                    total=(one*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='P'))
                {
                    total=(one*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='Q'))
                {
                    total=(one*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='R'))
                {
                    total=(one*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='S'))
                {
                    total=(one*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='J') && (add2=='Z'))
                {
                    total=(one*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='K') && (add2=='O'))
                {
                    total=(one*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='P'))
                {
                    total=(one*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='Q'))
                {
                    total=(one*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='R'))
                {
                    total=(one*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='S'))
                {
                    total=(one*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='K') && (add2=='Z'))
                {
                    total=(one*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='L') && (add2=='O'))
                {
                    total=(one*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='P'))
                {
                    total=(one*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='Q'))
                {
                    total=(one*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='R'))
                {
                    total=(one*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='S'))
                {
                    total=(one*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='L') && (add2=='Z'))
                {
                    total=(one*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='O'))
                {
                    total=(one*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='P'))
                {
                    total=(one*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='Q'))
                {
                    total=(one*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='R'))
                {
                    total=(one*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='S'))
                {
                    total=(one*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='M') && (add2=='Z'))
                {
                    total=(one*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
	            else if ((cock=1) && (add1=='N') && (add2=='O'))
                {
                    total=(one*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='P'))
                {
                    total=(one*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='Q'))
                {
                    total=(one*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='R'))
                {
                    total=(one*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='S'))
                {
                    total=(one*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='N') && (add2=='Z'))
                {
                    total=(one*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package "<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=2) && (add1=='A') && (add2=='O'))
                {
                    total=(two*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='P'))
                {
                    total=(two*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='Q'))
                {
                    total=(two*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='R'))
                {
                    total=(two*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='S'))
                {
                    total=(two*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='A') && (add2=='Z'))
                {
                    total=(two*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='O'))
                {
                    total=(two*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='P'))
                {
                    total=(two*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='Q'))
                {
                    total=(two*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='R'))
                {
                    total=(two*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='S'))
                {
                    total=(two*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='B') && (add2=='Z'))
                {
                    total=(two*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='O'))
                {
                    total=(two*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=2) && (add1=='C') && (add2=='P'))
                {
                    total=(two*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='Q'))
                {
                    total=(two*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='R'))
                {
                    total=(two*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='S'))
                {
                    total=(two*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='C') && (add2=='Z'))
                {
                    total=(two*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='O'))
                {
                    total=(two*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=2) && (add1=='D') && (add2=='P'))
                {
                    total=(two*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='Q'))
                {
                    total=(two*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='R'))
                {
                    total=(two*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='S'))
                {
                    total=(two*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='D') && (add2=='Z'))
                {
                    total=(two*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='O'))
                {
                    total=(two*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='P'))
                {
                    total=(two*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='Q'))
                {
                    total=(two*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='R'))
                {
                    total=(two*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='S'))
                {
                    total=(two*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='E') && (add2=='Z'))
                {
                    total=(two*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='O'))
                {
                    total=(two*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='P'))
                {
                    total=(two*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='Q'))
                {
                    total=(two*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='R'))
                {
                    total=(two*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='S'))
                {
                    total=(two*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='F') && (add2=='Z'))
                {
                    total=(two*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='O'))
                {
                    total=(two*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='P'))
                {
                    total=(two*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='Q'))
                {
                    total=(two*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='R'))
                {
                    total=(two*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='S'))
                {
                    total=(two*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='G') && (add2=='Z'))
                {
                    total=(two*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='O'))
                {
                    total=(two*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='P'))
                {
                    total=(two*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='Q'))
                {
                    total=(two*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='R'))
                {
                    total=(two*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='S'))
                {
                    total=(two*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='H') && (add2=='Z'))
                {
                    total=(two*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='O'))
                {
                    total=(two*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='P'))
                {
                    total=(two*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='Q'))
                {
                    total=(two*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='R'))
                {
                    total=(two*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='S'))
                {
                    total=(two*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='I') && (add2=='Z'))
                {
                    total=(two*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='O'))
                {
                    total=(two*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='P'))
                {
                    total=(two*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='Q'))
                {
                    total=(two*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='R'))
                {
                    total=(two*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='S'))
                {
                    total=(two*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='J') && (add2=='Z'))
                {
                    total=(two*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='O'))
                {
                    total=(two*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='P'))
                {
                    total=(two*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='Q'))
                {
                    total=(two*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='R'))
                {
                    total=(two*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='S'))
                {
                    total=(two*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='K') && (add2=='Z'))
                {
                    total=(two*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='O'))
                {
                    total=(two*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='P'))
                {
                    total=(two*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='Q'))
                {
                    total=(two*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='R'))
                {
                    total=(two*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='S'))
                {
                    total=(two*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='L') && (add2=='Z'))
                {
                    total=(two*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='O'))
                {
                    total=(two*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='P'))
                {
                    total=(two*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='Q'))
                {
                    total=(two*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='R'))
                {
                    total=(two*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='S'))
                {
                    total=(two*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='M') && (add2=='Z'))
                {
                    total=(two*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='O'))
                {
                    total=(two*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='P'))
                {
                    total=(two*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='Q'))
                {
                    total=(two*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='R'))
                {
                    total=(two*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='S'))
                {
                    total=(two*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='N') && (add2=='Z'))
                {
                    total=(two*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=3) && (add1=='A') && (add2=='O'))
                {
                    total=(three*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='P'))
                {
                    total=(three*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='Q'))
                {
                    total=(three*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='R'))
                {
                    total=(three*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='S'))
                {
                    total=(three*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='A') && (add2=='Z'))
                {
                    total=(three*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='O'))
                {
                    total=(three*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='P'))
                {
                    total=(three*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='Q'))
                {
                    total=(three*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='R'))
                {
                    total=(three*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='S'))
                {
                    total=(three*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='B') && (add2=='Z'))
                {
                    total=(three*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }

                else if ((cock=3) && (add1=='C') && (add2=='O'))
                {
                    total=(three*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=3) && (add1=='C') && (add2=='P'))
                {
                    total=(three*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='C') && (add2=='Q'))
                {
                    total=(three*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='C') && (add2=='R'))
                {
                    total=(three*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='C') && (add2=='S'))
                {
                    total=(three*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='C') && (add2=='Z'))
                {
                    total=(three*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='O'))
                {
                    total=(three*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=3) && (add1=='D') && (add2=='P'))
                {
                    total=(three*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='Q'))
                {
                    total=(three*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='R'))
                {
                    total=(three*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='S'))
                {
                    total=(three*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='D') && (add2=='Z'))
                {
                    total=(three*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='O'))
                {
                    total=(three*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='P'))
                {
                    total=(three*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='Q'))
                {
                    total=(three*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='R'))
                {
                    total=(three*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='S'))
                {
                    total=(three*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='E') && (add2=='Z'))
                {
                    total=(three*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='O'))
                {
                    total=(three*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='P'))
                {
                    total=(three*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='Q'))
                {
                    total=(three*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='R'))
                {
                    total=(three*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='S'))
                {
                    total=(three*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='F') && (add2=='Z'))
                {
                    total=(three*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='O'))
                {
                    total=(three*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='P'))
                {
                    total=(three*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='Q'))
                {
                    total=(three*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='R'))
                {
                    total=(three*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='S'))
                {
                    total=(three*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='G') && (add2=='Z'))
                {
                    total=(three*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='O'))
                {
                    total=(three*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='P'))
                {
                    total=(three*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='Q'))
                {
                    total=(three*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='R'))
                {
                    total=(three*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='S'))
                {
                    total=(three*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='H') && (add2=='Z'))
                {
                    total=(three*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='O'))
                {
                    total=(three*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='P'))
                {
                    total=(three*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='Q'))
                {
                    total=(three*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='R'))
                {
                    total=(three*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='S'))
                {
                    total=(three*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='I') && (add2=='Z'))
                {
                    total=(three*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='O'))
                {
                    total=(three*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='P'))
                {
                    total=(three*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='Q'))
                {
                    total=(three*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='R'))
                {
                    total=(three*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='S'))
                {
                    total=(three*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='J') && (add2=='Z'))
                {
                    total=(three*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='O'))
                {
                    total=(three*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='P'))
                {
                    total=(three*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='Q'))
                {
                    total=(three*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='R'))
                {
                    total=(three*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='S'))
                {
                    total=(three*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='K') && (add2=='Z'))
                {
                    total=(three*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='O'))
                {
                    total=(three*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='P'))
                {
                    total=(three*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='Q'))
                {
                    total=(three*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='R'))
                {
                    total=(three*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='S'))
                {
                    total=(three*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='L') && (add2=='Z'))
                {
                    total=(three*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='O'))
                {
                    total=(three*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='P'))
                {
                    total=(three*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='Q'))
                {
                    total=(three*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='R'))
                {
                    total=(three*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='S'))
                {
                    total=(three*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='M') && (add2=='Z'))
                {
                    total=(three*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='O'))
                {
                    total=(three*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='P'))
                {
                    total=(three*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='Q'))
                {
                    total=(three*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='R'))
                {
                    total=(three*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='S'))
                {
                    total=(three*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='N') && (add2=='Z'))
                {
                    total=(three*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=4) && (add1=='A') && (add2=='O'))
                {
                    total=(four*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='P'))
                {
                    total=(four*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='Q'))
                {
                    total=(four*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='R'))
                {
                    total=(four*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='S'))
                {
                    total=(four*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='A') && (add2=='Z'))
                {
                    total=(four*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='O'))
                {
                    total=(four*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='P'))
                {
                    total=(four*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='Q'))
                {
                    total=(four*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='R'))
                {
                    total=(four*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='S'))
                {
                    total=(four*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='B') && (add2=='Z'))
                {
                    total=(four*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
 
                else if ((cock=4) && (add1=='C') && (add2=='O'))
                {
                    total=(four*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=4) && (add1=='C') && (add2=='P'))
                {
                    total=(four*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='C') && (add2=='Q'))
                {
                    total=(four*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='C') && (add2=='R'))
                {
                    total=(four*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='C') && (add2=='S'))
                {
                    total=(four*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='C') && (add2=='Z'))
                {
                    total=(four*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='O'))
                {
                    total=(four*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=4) && (add1=='D') && (add2=='P'))
                {
                    total=(four*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='Q'))
                {
                    total=(four*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='R'))
                {
                    total=(four*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='S'))
                {
                    total=(four*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='D') && (add2=='Z'))
                {
                    total=(four*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='O'))
                {
                    total=(four*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='P'))
                {
                    total=(four*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='Q'))
                {
                    total=(four*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='R'))
                {
                    total=(four*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='S'))
                {
                    total=(four*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='E') && (add2=='Z'))
                {
                    total=(four*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='O'))
                {
                    total=(four*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='P'))
                {
                    total=(four*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='Q'))
                {
                    total=(four*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='R'))
                {
                    total=(four*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='S'))
                {
                    total=(four*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='F') && (add2=='Z'))
                {
                    total=(four*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='O'))
                {
                    total=(four*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='P'))
                {
                    total=(four*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='Q'))
                {
                    total=(four*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='R'))
                {
                    total=(four*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='S'))
                {
                    total=(four*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='G') && (add2=='Z'))
                {
                    total=(four*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='O'))
                {
                    total=(four*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='P'))
                {
                    total=(four*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='Q'))
                {
                    total=(four*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='R'))
                {
                    total=(four*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='S'))
                {
                    total=(four*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='H') && (add2=='Z'))
                {
                    total=(four*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='O'))
                {
                    total=(four*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='P'))
                {
                    total=(four*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='Q'))
                {
                    total=(four*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='R'))
                {
                    total=(four*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='S'))
                {
                    total=(four*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='I') && (add2=='Z'))
                {
                    total=(four*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='O'))
                {
                    total=(four*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='P'))
                {
                    total=(four*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='Q'))
                {
                    total=(four*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='R'))
                {
                    total=(four*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='S'))
                {
                    total=(four*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='J') && (add2=='Z'))
                {
                    total=(four*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='O'))
                {
                    total=(four*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='P'))
                {
                    total=(four*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='Q'))
                {
                    total=(four*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='R'))
                {
                    total=(four*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='S'))
                {
                    total=(four*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='K') && (add2=='Z'))
                {
                    total=(four*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='O'))
                {
                    total=(four*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='P'))
                {
                    total=(four*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='Q'))
                {
                    total=(four*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='R'))
                {
                    total=(four*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='S'))
                {
                    total=(four*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='L') && (add2=='Z'))
                {
                    total=(four*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='O'))
                {
                    total=(four*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='P'))
                {
                    total=(four*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='Q'))
                {
                    total=(four*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='R'))
                {
                    total=(four*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='S'))
                {
                    total=(four*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='M') && (add2=='Z'))
                {
                    total=(four*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='O'))
                {
                    total=(four*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='P'))
                {
                    total=(four*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='Q'))
                {
                    total=(four*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='R'))
                {
                    total=(four*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='S'))
                {
                    total=(four*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='N') && (add2=='Z'))
                {
                    total=(four*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=5) && (add1=='A') && (add2=='O'))
                {
                    total=(five*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='P'))
                {
                    total=(five*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='Q'))
                {
                    total=(five*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='R'))
                {
                    total=(five*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='S'))
                {
                    total=(five*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='A') && (add2=='Z'))
                {
                    total=(five*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='O'))
                {
                    total=(five*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='P'))
                {
                    total=(five*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='Q'))
                {
                    total=(five*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='R'))
                {
                    total=(five*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='S'))
                {
                    total=(five*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='B') && (add2=='Z'))
                {
                    total=(five*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='O'))
                {
                    total=(five*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=5) && (add1=='C') && (add2=='P'))
                {
                    total=(five*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='Q'))
                {
                    total=(five*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='R'))
                {
                    total=(five*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='S'))
                {
                    total=(five*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='C') && (add2=='Z'))
                {
                    total=(five*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='O'))
                {
                    total=(five*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=5) && (add1=='D') && (add2=='P'))
                {
                    total=(five*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='Q'))
                {
                    total=(five*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='R'))
                {
                    total=(five*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='S'))
                {
                    total=(five*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='D') && (add2=='Z'))
                {
                    total=(five*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='O'))
                {
                    total=(five*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='P'))
                {
                    total=(five*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='Q'))
                {
                    total=(five*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='R'))
                {
                    total=(five*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='S'))
                {
                    total=(five*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='E') && (add2=='Z'))
                {
                    total=(five*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='O'))
                {
                    total=(five*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='P'))
                {
                    total=(five*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='Q'))
                {
                    total=(five*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='R'))
                {
                    total=(five*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='S'))
                {
                    total=(five*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='F') && (add2=='Z'))
                {
                    total=(five*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='O'))
                {
                    total=(five*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='P'))
                {
                    total=(five*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='Q'))
                {
                    total=(five*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='R'))
                {
                    total=(five*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='S'))
                {
                    total=(five*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='G') && (add2=='Z'))
                {
                    total=(five*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='O'))
                {
                    total=(five*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='P'))
                {
                    total=(five*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='Q'))
                {
                    total=(five*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='R'))
                {
                    total=(five*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='S'))
                {
                    total=(five*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='H') && (add2=='Z'))
                {
                    total=(five*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='O'))
                {
                    total=(five*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='P'))
                {
                    total=(five*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='Q'))
                {
                    total=(five*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='R'))
                {
                    total=(five*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='S'))
                {
                    total=(five*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='I') && (add2=='Z'))
                {
                    total=(five*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='O'))
                {
                    total=(five*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='P'))
                {
                    total=(five*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='Q'))
                {
                    total=(five*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='R'))
                {
                    total=(five*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='S'))
                {
                    total=(five*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='J') && (add2=='Z'))
                {
                    total=(five*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='O'))
                {
                    total=(five*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='P'))
                {
                    total=(five*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='Q'))
                {
                    total=(five*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='R'))
                {
                    total=(five*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='S'))
                {
                    total=(five*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='K') && (add2=='Z'))
                {
                    total=(five*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='O'))
                {
                    total=(five*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='P'))
                {
                    total=(five*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='Q'))
                {
                    total=(five*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='R'))
                {
                    total=(five*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='S'))
                {
                    total=(five*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='L') && (add2=='Z'))
                {
                    total=(five*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='O'))
                {
                    total=(five*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='P'))
                {
                    total=(five*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='Q'))
                {
                    total=(five*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='R'))
                {
                    total=(five*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='S'))
                {
                    total=(five*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='M') && (add2=='Z'))
                {
                    total=(five*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='O'))
                {
                    total=(five*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='P'))
                {
                    total=(five*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='Q'))
                {
                    total=(five*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='R'))
                {
                    total=(five*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='S'))
                {
                    total=(five*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='N') && (add2=='Z'))
                {
                    total=(five*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=6) && (add1=='A') && (add2=='O'))
                {
                    total=(six*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='P'))
                {
                    total=(six*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='Q'))
                {
                    total=(six*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='R'))
                {
                    total=(six*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='S'))
                {
                    total=(six*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='A') && (add2=='Z'))
                {
                    total=(six*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='O'))
                {
                    total=(six*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='P'))
                {
                    total=(six*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='Q'))
                {
                    total=(six*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='R'))
                {
                    total=(six*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='S'))
                {
                    total=(six*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='B') && (add2=='Z'))
                {
                    total=(six*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=6) && (add1=='C') && (add2=='O'))
                {
                    total=(six*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=6) && (add1=='C') && (add2=='P'))
                {
                    total=(six*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='C') && (add2=='Q'))
                {
                    total=(six*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='C') && (add2=='R'))
                {
                    total=(six*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='C') && (add2=='S'))
                {
                    total=(six*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='C') && (add2=='Z'))
                {
                    total=(six*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='O'))
                {
                    total=(six*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=6) && (add1=='D') && (add2=='P'))
                {
                    total=(six*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='Q'))
                {
                    total=(six*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='R'))
                {
                    total=(six*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='S'))
                {
                    total=(six*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='D') && (add2=='Z'))
                {
                    total=(six*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='O'))
                {
                    total=(six*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='P'))
                {
                    total=(six*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='Q'))
                {
                    total=(six*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='R'))
                {
                    total=(six*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='S'))
                {
                    total=(six*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='E') && (add2=='Z'))
                {
                    total=(six*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='O'))
                {
                    total=(six*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='P'))
                {
                    total=(six*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='Q'))
                {
                    total=(six*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='R'))
                {
                    total=(six*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='S'))
                {
                    total=(six*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='F') && (add2=='Z'))
                {
                    total=(six*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='O'))
                {
                    total=(six*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='P'))
                {
                    total=(six*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='Q'))
                {
                    total=(six*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='R'))
                {
                    total=(six*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='S'))
                {
                    total=(six*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='G') && (add2=='Z'))
                {
                    total=(six*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='O'))
                {
                    total=(six*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='P'))
                {
                    total=(six*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='Q'))
                {
                    total=(six*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='R'))
                {
                    total=(six*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='S'))
                {
                    total=(six*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='H') && (add2=='Z'))
                {
                    total=(six*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='O'))
                {
                    total=(six*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='P'))
                {
                    total=(six*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='Q'))
                {
                    total=(six*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='R'))
                {
                    total=(six*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='S'))
                {
                    total=(six*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='I') && (add2=='Z'))
                {
                    total=(six*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='O'))
                {
                    total=(six*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='P'))
                {
                    total=(six*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='Q'))
                {
                    total=(six*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='R'))
                {
                    total=(six*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='S'))
                {
                    total=(six*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='J') && (add2=='Z'))
                {
                    total=(six*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='O'))
                {
                    total=(six*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='P'))
                {
                    total=(six*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='Q'))
                {
                    total=(six*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='R'))
                {
                    total=(six*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='S'))
                {
                    total=(six*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='K') && (add2=='Z'))
                {
                    total=(six*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='O'))
                {
                    total=(six*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='P'))
                {
                    total=(six*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='Q'))
                {
                    total=(six*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='R'))
                {
                    total=(six*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='S'))
                {
                    total=(six*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='L') && (add2=='Z'))
                {
                    total=(six*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='O'))
                {
                    total=(six*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='P'))
                {
                    total=(six*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='Q'))
                {
                    total=(six*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='R'))
                {
                    total=(six*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='S'))
                {
                    total=(six*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='M') && (add2=='Z'))
                {
                    total=(six*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='O'))
                {
                    total=(six*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='P'))
                {
                    total=(six*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='Q'))
                {
                    total=(six*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='R'))
                {
                    total=(six*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='S'))
                {
                    total=(six*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='N') && (add2=='Z'))
                {
                    total=(six*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=7) && (add1=='A') && (add2=='O'))
                {
                    total=(seven*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='P'))
                {
                    total=(seven*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='Q'))
                {
                    total=(seven*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='R'))
                {
                    total=(seven*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='S'))
                {
                    total=(seven*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='A') && (add2=='Z'))
                {
                    total=(seven*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='O'))
                {
                    total=(seven*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='P'))
                {
                    total=(seven*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='Q'))
                {
                    total=(seven*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='R'))
                {
                    total=(seven*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='S'))
                {
                    total=(seven*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='B') && (add2=='Z'))
                {
                    total=(seven*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=7) && (add1=='C') && (add2=='O'))
                {
                    total=(seven*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=7) && (add1=='C') && (add2=='P'))
                {
                    total=(seven*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='C') && (add2=='Q'))
                {
                    total=(seven*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='C') && (add2=='R'))
                {
                    total=(seven*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='C') && (add2=='S'))
                {
                    total=(seven*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='C') && (add2=='Z'))
                {
                    total=(seven*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='O'))
                {
                    total=(seven*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=7) && (add1=='D') && (add2=='P'))
                {
                    total=(seven*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='Q'))
                {
                    total=(seven*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='R'))
                {
                    total=(seven*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='S'))
                {
                    total=(seven*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='D') && (add2=='Z'))
                {
                    total=(seven*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='O'))
                {
                    total=(seven*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='P'))
                {
                    total=(seven*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='Q'))
                {
                    total=(seven*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='R'))
                {
                    total=(seven*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='S'))
                {
                    total=(seven*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='E') && (add2=='Z'))
                {
                    total=(seven*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='O'))
                {
                    total=(seven*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='P'))
                {
                    total=(seven*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='Q'))
                {
                    total=(seven*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='R'))
                {
                    total=(seven*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='S'))
                {
                    total=(seven*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='F') && (add2=='Z'))
                {
                    total=(seven*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='O'))
                {
                    total=(seven*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='P'))
                {
                    total=(seven*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='Q'))
                {
                    total=(seven*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='R'))
                {
                    total=(seven*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='S'))
                {
                    total=(seven*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='G') && (add2=='Z'))
                {
                    total=(seven*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='O'))
                {
                    total=(seven*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='P'))
                {
                    total=(seven*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='Q'))
                {
                    total=(seven*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='R'))
                {
                    total=(seven*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='S'))
                {
                    total=(seven*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='H') && (add2=='Z'))
                {
                    total=(seven*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='O'))
                {
                    total=(seven*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='P'))
                {
                    total=(seven*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='Q'))
                {
                    total=(seven*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='R'))
                {
                    total=(seven*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='S'))
                {
                    total=(seven*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='I') && (add2=='Z'))
                {
                    total=(seven*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='O'))
                {
                    total=(seven*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='P'))
                {
                    total=(seven*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='Q'))
                {
                    total=(seven*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='R'))
                {
                    total=(seven*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='S'))
                {
                    total=(seven*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='J') && (add2=='Z'))
                {
                    total=(seven*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='O'))
                {
                    total=(seven*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='P'))
                {
                    total=(seven*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='Q'))
                {
                    total=(seven*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='R'))
                {
                    total=(seven*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='S'))
                {
                    total=(seven*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='K') && (add2=='Z'))
                {
                    total=(seven*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='O'))
                {
                    total=(seven*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='P'))
                {
                    total=(seven*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='Q'))
                {
                    total=(seven*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='R'))
                {
                    total=(seven*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='S'))
                {
                    total=(seven*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='L') && (add2=='Z'))
                {
                    total=(seven*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='O'))
                {
                    total=(seven*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='P'))
                {
                    total=(seven*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='Q'))
                {
                    total=(seven*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='R'))
                {
                    total=(seven*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='S'))
                {
                    total=(seven*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='M') && (add2=='Z'))
                {
                    total=(seven*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='O'))
                {
                    total=(seven*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='P'))
                {
                    total=(seven*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='Q'))
                {
                    total=(seven*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='R'))
                {
                    total=(seven*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='S'))
                {
                    total=(seven*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='N') && (add2=='Z'))
                {
                    total=(seven*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=8) && (add1=='A') && (add2=='O'))
                {
                    total=(eight*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='P'))
                {
                    total=(eight*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='Q'))
                {
                    total=(eight*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='R'))
                {
                    total=(eight*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='S'))
                {
                    total=(eight*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='A') && (add2=='Z'))
                {
                    total=(eight*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='O'))
                {
                    total=(eight*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='P'))
                {
                    total=(eight*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='Q'))
                {
                    total=(eight*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='R'))
                {
                    total=(eight*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='S'))
                {
                    total=(eight*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='B') && (add2=='Z'))
                {
                    total=(eight*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=8) && (add1=='C') && (add2=='O'))
                {
                    total=(eight*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=8) && (add1=='C') && (add2=='P'))
                {
                    total=(eight*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='C') && (add2=='Q'))
                {
                    total=(eight*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='C') && (add2=='R'))
                {
                    total=(eight*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='C') && (add2=='S'))
                {
                    total=(eight*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='C') && (add2=='Z'))
                {
                    total=(eight*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='O'))
                {
                    total=(eight*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=8) && (add1=='D') && (add2=='P'))
                {
                    total=(eight*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='Q'))
                {
                    total=(eight*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='R'))
                {
                    total=(eight*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='S'))
                {
                    total=(eight*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='D') && (add2=='Z'))
                {
                    total=(eight*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='O'))
                {
                    total=(eight*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='P'))
                {
                    total=(eight*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='Q'))
                {
                    total=(eight*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='R'))
                {
                    total=(eight*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='S'))
                {
                    total=(eight*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='E') && (add2=='Z'))
                {
                    total=(eight*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='O'))
                {
                    total=(eight*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='P'))
                {
                    total=(eight*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='Q'))
                {
                    total=(eight*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='R'))
                {
                    total=(eight*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='S'))
                {
                    total=(eight*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='F') && (add2=='Z'))
                {
                    total=(eight*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='O'))
                {
                    total=(eight*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='P'))
                {
                    total=(eight*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='Q'))
                {
                    total=(eight*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='R'))
                {
                    total=(eight*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='S'))
                {
                    total=(eight*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='G') && (add2=='Z'))
                {
                    total=(eight*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='O'))
                {
                    total=(eight*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='P'))
                {
                    total=(eight*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='Q'))
                {
                    total=(eight*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='R'))
                {
                    total=(eight*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='S'))
                {
                    total=(eight*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='H') && (add2=='Z'))
                {
                    total=(eight*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='O'))
                {
                    total=(eight*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='P'))
                {
                    total=(eight*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='Q'))
                {
                    total=(eight*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='R'))
                {
                    total=(eight*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='S'))
                {
                    total=(eight*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='I') && (add2=='Z'))
                {
                    total=(eight*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='O'))
                {
                    total=(eight*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='P'))
                {
                    total=(eight*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='Q'))
                {
                    total=(eight*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='R'))
                {
                    total=(eight*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='S'))
                {
                    total=(eight*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='J') && (add2=='Z'))
                {
                    total=(eight*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='O'))
                {
                    total=(eight*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='P'))
                {
                    total=(eight*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='Q'))
                {
                    total=(eight*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='R'))
                {
                    total=(eight*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='S'))
                {
                    total=(eight*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='K') && (add2=='Z'))
                {
                    total=(eight*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='O'))
                {
                    total=(eight*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='P'))
                {
                    total=(eight*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='Q'))
                {
                    total=(eight*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='R'))
                {
                    total=(eight*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='S'))
                {
                    total=(eight*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='L') && (add2=='Z'))
                {
                    total=(eight*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='O'))
                {
                    total=(eight*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='P'))
                {
                    total=(eight*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='Q'))
                {
                    total=(eight*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='R'))
                {
                    total=(eight*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='S'))
                {
                    total=(eight*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='M') && (add2=='Z'))
                {
                    total=(eight*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='O'))
                {
                    total=(eight*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='P'))
                {
                    total=(eight*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='Q'))
                {
                    total=(eight*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='R'))
                {
                    total=(eight*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='S'))
                {
                    total=(eight*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='N') && (add2=='Z'))
                {
                    total=(eight*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=9) && (add1=='A') && (add2=='O'))
                {
                    total=(nine*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='P'))
                {
                    total=(nine*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='Q'))
                {
                    total=(nine*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='R'))
                {
                    total=(nine*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='S'))
                {
                    total=(nine*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='A') && (add2=='Z'))
                {
                    total=(nine*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='O'))
                {
                    total=(nine*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='P'))
                {
                    total=(nine*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='Q'))
                {
                    total=(nine*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='R'))
                {
                    total=(nine*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='S'))
                {
                    total=(nine*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='B') && (add2=='Z'))
                {
                    total=(nine*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=9) && (add1=='C') && (add2=='O'))
                {
                    total=(nine*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=9) && (add1=='C') && (add2=='P'))
                {
                    total=(nine*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='C') && (add2=='Q'))
                {
                    total=(nine*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='C') && (add2=='R'))
                {
                    total=(nine*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='C') && (add2=='S'))
                {
                    total=(nine*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='C') && (add2=='Z'))
                {
                    total=(nine*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='O'))
                {
                    total=(nine*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=9) && (add1=='D') && (add2=='P'))
                {
                    total=(nine*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='Q'))
                {
                    total=(nine*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='R'))
                {
                    total=(nine*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='S'))
                {
                    total=(nine*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='D') && (add2=='Z'))
                {
                    total=(nine*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='O'))
                {
                    total=(nine*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='P'))
                {
                    total=(nine*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='Q'))
                {
                    total=(nine*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='R'))
                {
                    total=(nine*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='S'))
                {
                    total=(nine*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='E') && (add2=='Z'))
                {
                    total=(nine*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='O'))
                {
                    total=(nine*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='P'))
                {
                    total=(nine*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='Q'))
                {
                    total=(nine*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='R'))
                {
                    total=(nine*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='S'))
                {
                    total=(nine*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='F') && (add2=='Z'))
                {
                    total=(nine*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='O'))
                {
                    total=(nine*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='P'))
                {
                    total=(nine*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='Q'))
                {
                    total=(nine*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='R'))
                {
                    total=(nine*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='S'))
                {
                    total=(nine*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='G') && (add2=='Z'))
                {
                    total=(nine*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='O'))
                {
                    total=(nine*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='P'))
                {
                    total=(nine*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='Q'))
                {
                    total=(nine*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='R'))
                {
                    total=(nine*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='S'))
                {
                    total=(nine*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='H') && (add2=='Z'))
                {
                    total=(nine*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='O'))
                {
                    total=(nine*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='P'))
                {
                    total=(nine*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='Q'))
                {
                    total=(nine*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='R'))
                {
                    total=(nine*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='S'))
                {
                    total=(nine*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='I') && (add2=='Z'))
                {
                    total=(nine*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='O'))
                {
                    total=(nine*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='P'))
                {
                    total=(nine*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='Q'))
                {
                    total=(nine*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='R'))
                {
                    total=(nine*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='S'))
                {
                    total=(nine*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='J') && (add2=='Z'))
                {
                    total=(nine*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='O'))
                {
                    total=(nine*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='P'))
                {
                    total=(nine*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='Q'))
                {
                    total=(nine*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='R'))
                {
                    total=(nine*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='S'))
                {
                    total=(nine*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='K') && (add2=='Z'))
                {
                    total=(nine*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='O'))
                {
                    total=(nine*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='P'))
                {
                    total=(nine*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='Q'))
                {
                    total=(nine*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='R'))
                {
                    total=(nine*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='S'))
                {
                    total=(nine*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='L') && (add2=='Z'))
                {
                    total=(nine*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='O'))
                {
                    total=(nine*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='P'))
                {
                    total=(nine*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='Q'))
                {
                    total=(nine*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='R'))
                {
                    total=(nine*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='S'))
                {
                    total=(nine*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='M') && (add2=='Z'))
                {
                    total=(nine*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='O'))
                {
                    total=(nine*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='P'))
                {
                    total=(nine*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='Q'))
                {
                    total=(nine*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='R'))
                {
                    total=(nine*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='S'))
                {
                    total=(nine*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='N') && (add2=='Z'))
                {
                    total=(nine*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=10) && (add1=='A') && (add2=='O'))
                {
                    total=(ten*cockil)+(a*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='P'))
                {
                    total=(ten*cockil)+(a*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='Q'))
                {
                    total=(ten*cockil)+(a*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='R'))
                {
                    total=(ten*cockil)+(a*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='S'))
                {
                    total=(ten*cockil)+(a*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='A') && (add2=='Z'))
                {
                    total=(ten*cockil)+(a*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Red Gulaman "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='O'))
                {
                    total=(ten*cockil)+(b*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='P'))
                {
                    total=(ten*cockil)+(b*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='Q'))
                {
                    total=(ten*cockil)+(b*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='R'))
                {
                    total=(ten*cockil)+(b*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='S'))
                {
                    total=(ten*cockil)+(b*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='B') && (add2=='Z'))
                {
                    total=(ten*cockil)+(b*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIced Tea "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
        
                else if ((cock=10) && (add1=='C') && (add2=='O'))
                {
                    total=(ten*cockil)+(c*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=10) && (add1=='C') && (add2=='P'))
                {
                    total=(ten*cockil)+(c*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='C') && (add2=='Q'))
                {
                    total=(ten*cockil)+(c*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='C') && (add2=='R'))
                {
                    total=(ten*cockil)+(c*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='C') && (add2=='S'))
                {
                    total=(ten*cockil)+(c*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='C') && (add2=='Z'))
                {
                    total=(ten*cockil)+(c*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='O'))
                {
                    total=(ten*cockil)+(d*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
        }
                else if ((cock=10) && (add1=='D') && (add2=='P'))
                {
                    total=(ten*cockil)+(d*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='Q'))
                {
                    total=(ten*cockil)+(d*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='R'))
                {
                    total=(ten*cockil)+(d*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='S'))
                {
                    total=(ten*cockil)+(d*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='D') && (add2=='Z'))
                {
                    total=(ten*cockil)+(d*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Zero "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='O'))
                {
                    total=(ten*cockil)+(e*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='P'))
                {
                    total=(ten*cockil)+(e*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='Q'))
                {
                    total=(ten*cockil)+(e*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='R'))
                {
                    total=(ten*cockil)+(e*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='S'))
                {
                    total=(ten*cockil)+(e*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='E') && (add2=='Z'))
                {
                    total=(ten*cockil)+(e*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCoke Regular 1.5L "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='O'))
                {
                    total=(ten*cockil)+(f*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='P'))
                {
                    total=(ten*cockil)+(f*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='Q'))
                {
                    total=(ten*cockil)+(f*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='R'))
                {
                    total=(ten*cockil)+(f*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='S'))
                {
                    total=(ten*cockil)+(f*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='F') && (add2=='Z'))
                {
                    total=(ten*cockil)+(f*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSprite "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='O'))
                {
                    total=(ten*cockil)+(g*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='P'))
                {
                    total=(ten*cockil)+(g*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='Q'))
                {
                    total=(ten*cockil)+(g*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='R'))
                {
                    total=(ten*cockil)+(g*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='S'))
                {
                    total=(ten*cockil)+(g*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='G') && (add2=='Z'))
                {
                    total=(ten*cockil)+(g*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPlain Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='O'))
                {
                    total=(ten*cockil)+(h*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='P'))
                {
                    total=(ten*cockil)+(h*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='Q'))
                {
                    total=(ten*cockil)+(h*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='R'))
                {
                    total=(ten*cockil)+(h*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='S'))
                {
                    total=(ten*cockil)+(h*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='H') && (add2=='Z'))
                {
                    total=(ten*cockil)+(h*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tJava Rice  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='O'))
                {
                    total=(ten*cockil)+(i*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='P'))
                {
                    total=(ten*cockil)+(i*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='Q'))
                {
                    total=(ten*cockil)+(i*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='R'))
                {
                    total=(ten*cockil)+(i*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='S'))
                {
                    total=(ten*cockil)+(i*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='I') && (add2=='Z'))
                {
                    total=(ten*cockil)+(i*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSoup  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='O'))
                {
                    total=(ten*cockil)+(j*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='P'))
                {
                    total=(ten*cockil)+(j*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='Q'))
                {
                    total=(ten*cockil)+(j*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='R'))
                {
                    total=(ten*cockil)+(j*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='S'))
                {
                    total=(ten*cockil)+(j*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='J') && (add2=='Z'))
                {
                    total=(ten*cockil)+(j*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tChicken Oil  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='O'))
                {
                    total=(ten*cockil)+(k*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='P'))
                {
                    total=(ten*cockil)+(k*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='Q'))
                {
                    total=(ten*cockil)+(k*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='R'))
                {
                    total=(ten*cockil)+(k*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='S'))
                {
                    total=(ten*cockil)+(k*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='K') && (add2=='Z'))
                {
                    total=(ten*cockil)+(k*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tToyomansi  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='O'))
                {
                    total=(ten*cockil)+(l*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='P'))
                {
                    total=(ten*cockil)+(l*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='Q'))
                {
                    total=(ten*cockil)+(l*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='R'))
                {
                    total=(ten*cockil)+(l*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='S'))
                {
                    total=(ten*cockil)+(l*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='L') && (add2=='Z'))
                {
                    total=(ten*cockil)+(l*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tSpiced Vinegar  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='O'))
                {
                    total=(ten*cockil)+(m*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='P'))
                {
                    total=(ten*cockil)+(m*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='Q'))
                {
                    total=(ten*cockil)+(m*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='R'))
                {
                    total=(ten*cockil)+(m*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='S'))
                {
                    total=(ten*cockil)+(m*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='M') && (add2=='Z'))
                {
                    total=(ten*cockil)+(m*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tPeanut Sauce  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='O'))
                {
                    total=(ten*cockil)+(n*addil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='P'))
                {
                    total=(ten*cockil)+(n*addil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='Q'))
                {
                    total=(ten*cockil)+(n*addil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='R'))
                {
                    total=(ten*cockil)+(n*addil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='S'))
                {
                    total=(ten*cockil)+(n*addil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='N') && (add2=='Z'))
                {
                    total=(ten*cockil)+(n*addil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tMushroom Gravy  "<<addil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=1) && (add1=='Z') && (add2=='O'))
                {
                    total=(one*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='Z') && (add2=='P'))
                {
                    total=(one*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='Z') && (add2=='Q'))
                {
                    total=(one*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='Z') && (add2=='R'))
                {
                    total=(one*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=1) && (add1=='Z') && (add2=='S'))
                {
                    total=(one*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=2) && (add1=='Z') && (add2=='O'))
                {
                    total=(two*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='Z') && (add2=='P'))
                {
                    total=(two*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='Z') && (add2=='Q'))
                {
                    total=(two*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='Z') && (add2=='R'))
                {
                    total=(two*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=2) && (add1=='Z') && (add2=='S'))
                {
                    total=(two*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=3) && (add1=='Z') && (add2=='O'))
                {
                    total=(three*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='Z') && (add2=='P'))
                {
                    total=(three*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='Z') && (add2=='Q'))
                {
                    total=(three*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='Z') && (add2=='R'))
                {
                    total=(three*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=3) && (add1=='Z') && (add2=='S'))
                {
                    total=(three*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=4) && (add1=='Z') && (add2=='O'))
                {
                    total=(four*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='Z') && (add2=='P'))
                {
                    total=(four*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='Z') && (add2=='Q'))
                {
                    total=(four*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='Z') && (add2=='R'))
                {
                    total=(four*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=4) && (add1=='Z') && (add2=='S'))
                {
                    total=(four*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=5) && (add1=='Z') && (add2=='O'))
                {
                    total=(five*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='Z') && (add2=='P'))
                {
                    total=(five*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='Z') && (add2=='Q'))
                {
                    total=(five*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='Z') && (add2=='R'))
                {
                    total=(five*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=5) && (add1=='Z') && (add2=='S'))
                {
                    total=(five*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=6) && (add1=='Z') && (add2=='O'))
                {
                    total=(six*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='Z') && (add2=='P'))
                {
                    total=(six*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='Z') && (add2=='Q'))
                {
                    total=(six*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='Z') && (add2=='R'))
                {
                    total=(six*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=6) && (add1=='Z') && (add2=='S'))
                {
                    total=(six*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=7) && (add1=='Z') && (add2=='O'))
                {
                    total=(seven*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='Z') && (add2=='P'))
                {
                    total=(seven*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='Z') && (add2=='Q'))
                {
                    total=(seven*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='Z') && (add2=='R'))
                {
                    total=(seven*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=7) && (add1=='Z') && (add2=='S'))
                {
                    total=(seven*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=8) && (add1=='Z') && (add2=='O'))
                {
                    total=(eight*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='Z') && (add2=='P'))
                {
                    total=(eight*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='Z') && (add2=='Q'))
                {
                    total=(eight*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='Z') && (add2=='R'))
                {
                    total=(eight*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=8) && (add1=='Z') && (add2=='S'))
                {
                    total=(eight*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=9) && (add1=='Z') && (add2=='O'))
                {
                    total=(nine*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='Z') && (add2=='P'))
                {
                    total=(nine*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='Z') && (add2=='Q'))
                {
                    total=(nine*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='Z') && (add2=='R'))
                {
                    total=(nine*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=9) && (add1=='Z') && (add2=='S'))
                {
                    total=(nine*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=10) && (add1=='Z') && (add2=='O'))
                {
                    total=(ten*cockil)+(o*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tExtra Creamy Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='Z') && (add2=='P'))
                {
                    total=(ten*cockil)+(p*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tCrema de Leche Halo-Halo "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='Z') && (add2=='Q'))
                {
                    total=(ten*cockil)+(q*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tEmpanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='Z') && (add2=='R'))
                {
                    total=(ten*cockil)+(r*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\t3 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
                else if ((cock=10) && (add1=='Z') && (add2=='S'))
                {
                    total=(ten*cockil)+(s*addil2);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\t6 pcs Empanada "<<addil2<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=1) && (add1=='Z') && (add2=='Z'))
                {
                    total=(one*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Family Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=2) && (add1=='Z') && (add2=='Z'))
                {
                    total=(two*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & Pecho Large Family Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=3) && (add1=='Z') && (add2=='Z'))
                {
                    total=(three*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Trio"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=4) && (add1=='Z') && (add2=='Z'))
                {
                    total=(four*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				 else if ((cock=5) && (add1=='Z') && (add2=='Z'))
                {
                    total=(five*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=6) && (add1=='Z') && (add2=='Z'))
                {
                    total=(six*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tAll Chicken Buddy Fiesta Package"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=7) && (add1=='Z') && (add2=='Z'))
                {
                    total=(seven*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa Large - PM1"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				 else if ((cock=8) && (add1=='Z') && (add2=='Z'))
                {
                    total=(eight*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal & Pork BBQ Buddy Size"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=9) && (add1=='Z') && (add2=='Z'))
                {
                    total=(nine*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Paa & 1 pc Pork BBQ Solo Fiesta (with drink)"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else if ((cock=10) && (add1=='Z') && (add2=='Z'))
                {
                    total=(ten*cockil);
                    cout<<"\t\t\tIyong Mga Binili:";
                    cout<<"\n\t\t\tChicken Inasal Pecho Large - PM2"<<cockil<<"x";
                    cout<<"\n\t\t\tIyong Babayaran ......... Php "<<total;
                }
				else
				cout<<"\t\t\tNagkaroon ng Problema :< - Please try again";
			    cout<<endl;
			    
			    
				if (pcode=="MagandaAko2024")
                {
             	ntotal=((total*0.3)/100);
             	cout<<"\n\t\t\tSavings: Php "<<ntotal;
             	ftotal=(total-ntotal);
             	cout<<"\n\t\t\tFinal Price: Php "<<ftotal;
             	cout<<endl;
                }
	            else
	            ftotal=total;
				cout<<"\n\t\t\tFinal Price: Php "<<ftotal;
			    cout<<endl;
					
				if (pay=='H')
                {
             	cout<<"\n\t\t\tMode of Payment: Cash ";
                }
				else if (pay=='C')
				{
             	cout<<"\n\t\t\tMode of Payment: Credit/Debit Card ";
	      	    }
	            else
				cout<<"\t\t\tNagkaroon ng Problema :< - Please try again";
			    cout<<endl;
			    
			    if (del=='P')
                {
             	cout<<"\n\t\t\tFor PICKUP";
	            cout<<endl;
                }
				else if (del=='D')
				{
                cout<<"\n\t\t\tFor DELIVERY";
                cout<<"\t\t\tAddress: "<<addr;
	            cout<<endl;
	      	    }
	            else
				cout<<"\t\t\tNagkaroon ng Problema :< - Please try again";
			    cout<<endl;
			
				cout<<"\n\t\t\tTHIS COUNTS AS YOUR OFFICIAL RECEIPT INVOICE";
	            cout<<endl;
			    
			    std::cout << R"(

                                     
                                     
                                                                         ¦¦¦¦¦¦¦¦ ¦¦   ¦¦  ¦¦¦¦¦  ¦¦¦    ¦¦ ¦¦   ¦¦     ¦¦    ¦¦  ¦¦¦¦¦¦  ¦¦    ¦¦                                     
                                                                            ¦¦    ¦¦   ¦¦ ¦¦   ¦¦ ¦¦¦¦   ¦¦ ¦¦  ¦¦       ¦¦  ¦¦  ¦¦    ¦¦ ¦¦    ¦¦                                     
                                                                            ¦¦    ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦ ¦¦  ¦¦ ¦¦¦¦¦         ¦¦¦¦   ¦¦    ¦¦ ¦¦    ¦¦                                     
                                                                            ¦¦    ¦¦   ¦¦ ¦¦   ¦¦ ¦¦  ¦¦ ¦¦ ¦¦  ¦¦         ¦¦    ¦¦    ¦¦ ¦¦    ¦¦                                     
                                                                            ¦¦    ¦¦   ¦¦ ¦¦   ¦¦ ¦¦   ¦¦¦¦ ¦¦   ¦¦        ¦¦     ¦¦¦¦¦¦   ¦¦¦¦¦¦                                      
                                                                                                                                              
                                                                                                                                               
                                         ¦¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦      ¦¦    ¦¦  ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦¦¦¦¦   ¦¦¦¦¦¦ ¦¦   ¦¦  ¦¦¦¦¦  ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦ ¦¦ ¦¦ 
                                         ¦¦      ¦¦    ¦¦ ¦¦   ¦¦      ¦¦  ¦¦  ¦¦    ¦¦ ¦¦    ¦¦ ¦¦   ¦¦     ¦¦   ¦¦ ¦¦    ¦¦ ¦¦   ¦¦ ¦¦      ¦¦   ¦¦ ¦¦   ¦¦ ¦¦      ¦¦      ¦¦ ¦¦ ¦¦ 
                                         ¦¦¦¦¦   ¦¦    ¦¦ ¦¦¦¦¦¦        ¦¦¦¦   ¦¦    ¦¦ ¦¦    ¦¦ ¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦¦¦¦¦  ¦¦      ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦   ¦¦ ¦¦ ¦¦ 
                                         ¦¦      ¦¦    ¦¦ ¦¦   ¦¦        ¦¦    ¦¦    ¦¦ ¦¦    ¦¦ ¦¦   ¦¦     ¦¦      ¦¦    ¦¦ ¦¦   ¦¦ ¦¦      ¦¦   ¦¦ ¦¦   ¦¦      ¦¦ ¦¦               
                                         ¦¦       ¦¦¦¦¦¦  ¦¦   ¦¦        ¦¦     ¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦   ¦¦     ¦¦       ¦¦¦¦¦¦  ¦¦   ¦¦  ¦¦¦¦¦¦ ¦¦   ¦¦ ¦¦   ¦¦ ¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦ ¦¦ ¦¦ ¦¦ 
                                                                                                                                              
)" << '\n';


                cout<<"\t\t---------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
						    

	
	   	return 0;
	}
    


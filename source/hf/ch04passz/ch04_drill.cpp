#include "../std_lib_facilities.h"



//hibaüzenet nem megengedett mértékegység megadásakor
void forbidden_unit(string unit){
    if(unit!="cm" && unit!="m" && unit!="in" && unit!="ft")
        cout << "Nem megengedett mertekegyseg";

}



//mértékegység átváltás cm-be
double conversion(double a, string unit){
    if(unit=="m"){
            return a*100;
        }
    if(unit=="in"){
            return a*2.54;
        }
    if(unit=="ft"){
            return a*30.48;
        }
    if(unit=="cm"){
            return a;
    }
}




//fő függvény

int main()
{
         vector<double> dv;

         double a;
         double min;
         double max;
         double sum;
         double smallest;
         double largest;
         int numofval=0;      //number of valuees entered
         char c='a';
         string unit;
         string s1;

         cout << "\nIrj be egy szamot mertekegyseggel egyutt(cm, m, in, ft):\n";
         cin >> a >> unit;
         
         forbidden_unit(unit);
         a=conversion(a,unit);
         unit="cm";

         min=a;
         max=a;
         sum=a/100;
         numofval=1;
         dv.push_back(a/100);       //tárolni a vectorban az első elemet

         cout << "\nA szam:\n"<< a<<unit;
         cout << "\n| -al kilephetsz";
         cin >> c;

// while loop
        while(c!='|'){

         cout << "\nIrj be egy szamot mertekegyseggel egyutt:\n";
         cin >> a >> unit;
         sum+=a/100;
         numofval++;
         dv.push_back(a/100);       //tárolni a vectorban a többi elemet

         forbidden_unit(unit);
         a=conversion(a,unit);
         unit="cm";


         cout << "\nA szam:\n"<< a << " " <<unit;

        if (a<min){
            min=a;
            cout << " a legkisebb szam idaig";
        }
        if (a>max){
            max=a;
            cout << " a legnagyobb szam idaig";
        }


         cout << "\n| karakterrel kilephetsz:";
         cin >> c;
        }

        cout << "---------------------------------------------\n";
        cout << "legkisebb\t"<< min << "\nlegnagyobb\t"<< max <<"\n" << numofval << " szam van\nosszeg:"<<sum << " m\n";


        sort(dv);



        for (auto value: dv)               //vektor kiiratása
            cout << value << " m\n";



         return 0;
}
 // read and write a first name
#include "../std_lib_facilities.h"

int main()
{
         cout << "Enter the name of the person you want to write to\n";
         string first_name;              // first_name is a variable of type string
         cin >> first_name;             // read characters into first_name

         cout << "Enter a friend name\n";
         string friend_name;              // friend_name is a variable of type string
         cin >> friend_name;             // read characters into friend_name

         char friend_sex=0;              // friend_sex is a variable of type char
         cout << "Enter the friend's sex(m male or f feamale)\n";
         cin >> friend_sex;             // read character into friend_sex

         cout << "Enter the age of the recipient\n";
         int age;              // age is a variable of type int
         cin >> age;             // read characters into friend_name


        //letter starts here
         cout << "\nDear " << first_name << ",\nHow are you? I am fine. I miss you.\n" << 
         "I wanted to write to you a long time ago.\nI hope you are doing well.\n\n" << 
         "Have you seen " << friend_name << " lately?\n";
        
        //call me
         if(friend_sex=='m')
            cout << "If you see " << friend_name << " please ask him to call me.\n";
         if(friend_sex=='f')
            cout << "If you see " << friend_name << " please ask her to call me.\n";

        //birthday 1
        if(0<age && age<110){
            cout << "I hear you just had a birthday and you are " << age << " years old.\n";

            //birthday 2
            if(age<12)
                cout << "Next year you will be " << age+1 << ".\n";
            if(age==17)
                cout << "Next year you will be able to vote.\n";
            if(age>70)
                cout << "I hope you are enjoying retirement.\n";
        }
        else
            simple_error("you're kidding!");

        

        //Yours sincerely
        cout << "\nYours sincerely\n\nCseke Vilmos\n";

}
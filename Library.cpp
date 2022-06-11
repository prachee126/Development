#include "Library.h"
using namespace std;
int main()
{
    char str1[20],str2[20];
    int ch=1;
    char str[20];
     char dest[20];
     char c;
    int ret=0;
    bool bret=false;
   
    while(ch>0)
    {
        cout<<"enter choice:\t"<<endl;
       
        cout<<"1:\tstrcpy"<<endl;
        cout<<"2:\tstrncpy"<<endl;
        cout<<"3:\tget exam time"<<endl;
        cout<<"4:\tCopy only capitals"<<endl;
        cout<<"5:\tCopy only small"<<endl;
        cout<<"6:\tConcatenate strings"<<endl;
        cout<<"7:\tCopy revesrse string"<<endl;
        cout<<"8:\tCopy string removing white spaces:"<<endl;
        cout<<"9:\tCopy string toggeling case:"<<endl;//ass28 q3,4,5
        cout<<"10\t Count Captial"<<endl;
        cout<<"11\t Count Small"<<endl;
        cout<<"12\t Count spaces"<<endl;
        cout<<"13\t Count Vowels"<<endl; 
        cout<<"14\t Convert into Small"<<endl;
        cout<<"15\t Convert into Uppercase"<<endl;
        cout<<"16\t Toggle Case"<<endl;
        cout<<"17\t Reverse string"<<endl;
        cout<<"18\t Copy string"<<endl;
        cout<<"19\t Concatinate string"<<endl;
        cout<<"20\t Compare strings"<<endl;
        cout<<"21\t Display Ascii Table"<<endl;
        cout<<"22\t Display Digits from string"<<endl;
        cout<<"23\t Toggle character"<<endl;
        cout<<"24\t Display All alphabetes from given character"<<endl;
        cout<<"25\tCheck special symbol or not"<<endl;
        cout<<"26\tCheck Presence of character"<<endl;
        cout<<"27\tCheck Frequency of character"<<endl;
        cout<<"28\tCheck 1st Occurence"<<endl;
        cout<<"29\tCheck Last Occurence"<<endl;
        
       
        cout<<"0:\t Enter 0 to exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                strcpyX(str1,str2);
                cout<<"source string:"<<str1<<"\n"<<"copied string\t"<<str2<<endl;
                break;
        case 2:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                strncpyX(str1,str2,4);
                cout<<"source string:"<<str1<<"\n"<<"copied string\t"<<str2<<endl;
                break;
        case 3: cout<<"enter Division to get exam time:"<<endl;
                cin>>c;
                CheckDivision(c);
                break;  
        case 4:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                CpyCapitals(str1,str2);
                cout<<"source string:"<<str1<<"\n"<<"copied string\t"<<str2<<endl;
                break;   
        case 5:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                CpySmall(str1,str2);
                cout<<"source string:"<<str1<<"\n"<<"copied string\t"<<str2<<endl;
                break;           
         case 6:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"Enter  string\n";
                cin.getline(str2,20);
                cout<<"source string:"<<str1<<endl;
                strcatX(str1,str2);
                cout<<"concatenated string:\t"<<str1<<endl;
                break;    
        case 7:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"source string:"<<str1<<endl;
                strcpyreverse(str1,str2);
                cout<<"copy reverse string:\t"<<str2<<endl;
                break;
         case 8:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"source string:"<<str1<<endl;
                strcpyRmvSpaces(str1,str2);
                cout<<"copy string removing spaces:\t"<<str2<<endl;
                break;        
        case 9:
                cout<<"Enter  string\n";
                cin.getline(str1,20);
                cin.getline(str1,20);
                cout<<"source string:"<<str1<<endl;
                strcpyChangingCase(str1,str2);
                cout<<"copy string changing case:\t"<<str2<<endl;
                break; 

        case 10: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cin.getline(str,20);
                    ret=CountCapital(str);
                    cout<<"Capital Letters:\t"<<ret<<endl;
                    break;

        case 11: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ret=CountSmall(str);
                    cout<<"small letteres:\t"<<ret<<endl;
                    break;

        case 12: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ret=CountSpaces(str);
                    cout<<"Spaces:\t"<<ret<<endl;
                    break;
        case 13: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ret=CountVowels(str);
                    cout<<"Vowel count:\t"<<ret<<endl;
                    break;
        case 14: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    strlwrX(str);
                    cout<<"Lower case string:\t"<<str<<endl;
                    break;
        case 15: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    struperX(str);
                    cout<<"Upper case string:\t"<<str<<endl;
                    break;                
                                    
        case 16: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ToggleCase(str);
                    cout<<"Toggle case string:\t"<<str<<endl;
                    break;                
        case 17:
                    cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    ReverseString(str);
                    cout<<"Reversed string:\t"<<str<<endl;
                    break;
        case 18: cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cout<<"Enter string"<<endl;
                    cin.getline(dest,20);
                    strcpyX(str,dest);
                    cout<<"source string:"<<str<<"\n"<<"copied string\t"<<dest<<endl;
                    break;
        case 19:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cout<<"Enter string"<<endl;
                    cin.getline(dest,20);
                      cout<<"original string\t"<<str<<endl;  
                     strcatX(str,dest);
                    cout<<" concatenated string:"<<str<<endl;
                    break;
        case 20:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cout<<"Enter string"<<endl;
                    cin.getline(dest,20);
                    bret=strcmpX(str,dest);
                    if(bret==true)
                    {
                        cout<<"equal strings"<<endl;
                    }                              
                    else
                    {
                        cout<<"Not equals"<<endl;
                    }
                    break;
        case 21: DisplayAsciiTable();
                    break;
        case 22:DisplayDigits(str);
                    break;
        case 23: cout<<"Enter character"<<endl;
                    cin>>c; 
                    ToggleCharacter(c);     
                    break; 
        case 24:cout<<"Enter character"<<endl;
                    cin>>c; 
                    Displaycharacters(c);     
                    break;     
        case 25:cout<<"Enter character"<<endl;
                    cin>>c; 
                    CheckSpecialSymbol(c);     
                    break; 
        case 26:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cin.getline(str,20);
                    cout<<"Enter character"<<endl;
                    cin>>c; 
                    bret=CheckPresence(str,c);
                    if(bret==true)
                    {
                        cout<<"present"<<endl;
                    }
                    else
                    {
                        cout<<"not present"<<endl;
                    }
                    break;             
        case 27:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                     cin.getline(str,20);
                    cout<<"Enter character"<<endl;
                    cin>>c; 
                    ret=CountFreq(str,c);
                    cout<<"Frequency of charater:\t"<<ret<<endl;     
                    break;   
        case 28:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cin.getline(str,20);
                    cout<<"Enter character"<<endl;
                    cin>>c; 
                    ret=CheckFirstOccurence(str,c);
                    cout<<"1st occurence of charater:\t"<<ret<<endl;     
                    break;   
        case 29:cout<<"Enter string"<<endl;
                    cin.getline(str,20);
                    cin.getline(str,20);
                    cout<<"Enter character"<<endl;
                    cin>>c; 
                    ret=CheckLastOccurence(str,c);
                    cout<<"Last Occurence of charater:\t"<<ret<<endl;     
                    break;                               
                                                           
        default:cout<<"EXIT"<<endl;    
                break;
        }
    }
    return 0;
}
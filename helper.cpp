#include"Library.h"
using namespace std;
int CountCapital(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

int CountSmall(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

int CountSpaces(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

int CountVowels(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||*str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}

void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}

void struperX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            *str=*str-32;
        }
        str++;
    }
}


void ToggleCase(char *str)
{
    while(*str!='\0')
    {
         if((*str>='a') && (*str<='z'))
        {
            *str=*str-32;
        }
       else if((*str>='A') && (*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}
 
void ReverseString(char *str)
{
    char *end=str;
    char *start=str;
    char s='\0';
    while (*end!='\0')
    {
        end++;
        
    }
    //end is at \0 
    end--;
    
    while(start<end)
    {
        //swap
        s=*end;
        *end=*start;
        *start=s;
      
      //pointer increment decre
        start++;
        end--;
    }
    
}


void strcpyXX(char *str,char *dest)
{
   while(*str!='\0')
    {
        *dest=*str;

        dest++;
        str++;
    }
    *dest='\0';
}

void strcatXX(char *str,char *src)
{
   while(*str!='\0')
    {
        str++;        
    }
    while (*src!='\0')
    {
        *str=*src;
        src++;
        str++;
    }
    *str='\0';
    
}
int strlenx(char *str)
{
    int cnt=0;
    while(*str!='\0')
    {
        cnt++;
        str++;
    }
    return cnt++;
}
bool strcmpX(char *str1,char *str2)
{
    while (*str1!='\0' && *str2!='\0')
    {
            
        if(*str1!=*str2)
        {
            if(*str1>='A' && *str1<='Z')
            {
                *str1=*str1-32;
            }
            else if(*str1>='a' && *str2<='z')
            {
                *str1=*str1+32;
            }
            if(*str1!=*str2)
            {
                break;
            }
            break;
        }
        str1++;
        str2++;
    }

    if(*str1=='\0' && *str2=='\0')
    {
        return true;
    }

    else
    {
        return false;
    }
}
void DisplayAsciiTable()
{
    int i=0;
    for(i=0;i<255;i++)
	{
		printf("%d\t%c\t\n",i,i);
	}
}
void DisplayDigits(char *str)
{
    while(*str!='\0')
    {
        if(*str>=48 && *str<=57)
        {
            cout<<*str<<'\t';
        }
        str++;
    }
}
void ToggleCharacter(char c)
{
    if(c>=65 && c<=90)
    {
        c=c+32;
    }
    else
    if(c>=97 && c<=127)
    {
        c=c-32;
    }
    cout<<"changed case character\t"<<c<<endl;
}

void Displaycharacters(char c)
{
    int i=0;
    
    if(c>=65 && c<=90)
    {
        for(i=c;i<='Z';i++)
        {
            printf("%c\t",i);
        }
    }
    else
    if(c>=97 && c<=122)
    {
        for(i='z';i>='a';i--)
        {
            printf("%c\t",i);
        }
    }
    cout<<'\n';
}
void CheckSpecialSymbol(char c)
{
     if(c>='a' && c<='z' || c>='A' && c<='Z')
     {
         cout<<"Alphabate"<<endl;
     }
     else
     {
         cout<<"Special Symbol"<<endl;
     }
   
}
void CheckCapital(char c)
{
    if(c>='A' && c<='Z')
    {
        cout<<"Capital"<<endl;
    }
}
void CheckSmall(char c)
{
  if(c>='a' && c<='a')
    {
        cout<<"Small"<<endl;
    }   
}
bool CheckPresence(char *str,char c)
{
    bool flag=false;
    while(*str!='\0')
    {
        if(*str==c)
        {
            flag=true;
        }
        str++;
    }
    return flag;
}
int CountFreq(char *str,char c)
{
    
    int cnt=0;
    while(*str!='\0')
    {
        if(*str==c)
        {
            cnt++;
        }
        str++;
    }
    return cnt;
}
int CheckFirstOccurence(char *str,char c)
{
    
    int cnt=0;
    while(*str!='\0')
    {
        if(*str==c)
        {
            break;
        }
        str++;
        cnt++;
    }
    return cnt;
}

int CheckLastOccurence(char *str,char c)
{
    
    int cnt=0,i=0;
    while(*str!='\0')
    {
        if(*str==c)
        {
            cnt=i;
        }
        i++;
        str++;
    }
    return cnt;
}

void CheckDivision(char c)
{
    
    if(c>='a' && c<='z')
    {
        c=c-32;
    }
    switch(c)
    {
        case 'A':cout<<"Exam time:\t7am";
                break;
        case 'B':cout<<"Exam time:\t8:30am";
                break;
        case 'C':cout<<"Exam time:\t10:30am";
                break;
        case 'D':cout<<"Exam time:\t11am";
                break;
        default:cout<<"Enter proper division"<<endl;
                break;
        case 0:break;                                        
    }
    
}
void strcpyX(char *src, char *dest)
{
    while (*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
        
    }
    *dest='\0';
   
}
void strncpyX(char *src,char *dest,int cnt)
{
    while(*src!='\0' && cnt!=0)
    {
        *dest=*src;
        dest++;
        src++;
        cnt--;
    }
    *dest='\0';
}
void CpyCapitals(char *src,char *dest)
{
    while (*src!='\0')
    {
        if (*src>='A' && *src<='Z')
        {
            *dest=*src;
             dest++;
        }
       
        src++;      
    }
    *dest='\0';
}
void CpySmall(char *src,char *dest)
{
    while(*src!='\0')
    {
        if(*src>='a' && *src<='z')
        {
            *dest=*src;
            dest++;
        }
        
        src++;
    }
    *dest='\0';
}
void strcatX(char *src,char *dest)
{
    while (*src!='\0')
    {
        src++;
    }
    while (*dest!='\0')
    {
        *src=*dest;
        src++;
        dest++;
    }
    *src='\0';
    
}
void strcpyreverse(char *src,char *dest)
{
    
    char *end=src;

    while (*end!='\0')
    {
        end++;
    }
    end--;
    
    while (*end!=*src)
    {
        *dest=*end;
        end--;
        dest++;
    }
    if(*end==*src)
    {
        *dest=*end;
    }
    *dest='\0';
    
}
void strcpyRmvSpaces(char *src,char *dest)
{
    while (*src!='\0')
    {
        if(*src!=' ')
        {
            *dest=*src;
            dest++;
        }   
        src++;
    }
    *dest='\0';
    
}

void strcpyChangingCase(char *src,char *dest)
{
    while (*src!='\0')
    {
        if(*src>='a' && *src<='z')
        {
            *src=*src-32;
        }  
        else 
         if(*src>='A' && *src<='Z')
        {
            *src=*src+32;
        }   
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    
}


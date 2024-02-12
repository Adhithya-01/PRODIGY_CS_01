// Ceaser Chiper

#include<iostream>
#include<string.h>
using namespace std;

int main() 
{
    char message[100],ch;
    int i,key;
    cout<<"Enter the message to be encrypted : ";
    cin>>message;
    cout << "Enter the shift(key) value : ";
    cin >> key;
    for(i=0;i<strlen(message);i++)
    {
        ch=message[i];    
        if (ch >= 'a' && ch <= 'z')  //encrypt for lowercase letter
        {
            ch = ch + key;
            if (ch > 'z') 
               ch = ch - 'z' + 'a' - 1;
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')  //encrypt for uppercase letter
        {
            ch = ch + key;
            if (ch > 'Z')
               ch = ch - 'Z' + 'A' - 1;
            message[i] = ch;
        }
    }
    cout<<"Encrypted message : "<<message<<endl;
    for(i=0;i<strlen(message);i++) 
    {
        ch=message[i];
        if(ch >= 'a' && ch <= 'z')  //decrypt for lowercase letter 
        {
            ch = ch - key;
            if(ch < 'a')
               ch = ch + 'z' - 'a' + 1;
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z')  //decrypt for uppercase letter 
        {
            ch = ch - key;
            if(ch < 'A') 
               ch = ch + 'Z' - 'A' + 1;
            message[i] = ch;
        }
    }
    cout <<"Decrypted message : "<<message;
   
}

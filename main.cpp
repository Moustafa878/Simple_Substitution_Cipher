#include <iostream>
#include<string>
using namespace std;

int main()
{

    char arr1[54]= {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z',
                    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'
                   };
    char arr2[54]= {' ','q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m',
                    'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'
                   };
    char arr3[54]= {' ','m','n','b','v','c','x','z','a','s','d','f','q','w','e','r','t','g','y','h','u','j','i','k','o','p','l',
                    'M','N','B','V','C','X','Z','A','S','D','F','Q','W','E','R','T','G','Y','H','U','J','I','K','O','P','L'
                   };
while(true){
    cout<<"\nMNOUR YA KBEER :)"<<endl;
    cout<<"\nWhat do you like to do today? \n 1- Cipher a message \n 2- Decipher a message \n 3- End \n";
    int choose;
    cin>> choose;
    if(choose==1)
    {
        cout<<"DAKHEL KELMT ELSER YA ZMELY:";
        string key;
        cin>>key;
        if(key=="pogba")
        {
            cout<<"enter text:";
            string text;
            cin.ignore();
            getline(cin,text);
            string Cipher_text="";
            for(int i=0; i<=text.length(); i++)
            {
                for(int j=0; j<=54; j++)
                {
                    if(text[i]==arr1[j])
                    {
                        Cipher_text+=arr2[j];

                    }
                }

            }
            cout<<"Cipher text:"<<Cipher_text;
        }
        else if(key=="alexs")
        {
            cout<<"enter text:";
            string text;
            cin.ignore();
            getline(cin,text);
            string Cipher_text="";
            for(int i=0; i<=text.length(); i++)
            {
                for(int j=0; j<=54; j++)
                {
                    if(text[i]==arr1[j])
                    {
                        Cipher_text+=arr3[j];

                    }
                }

            }
            cout<<"Cipher text:"<<Cipher_text;
        }
        else
            cout<<" INTA GASOOS ???!!!";

    }
    else if(choose==2)
    {
        cout<<"DAKHEL KELMT ELSER YA ZMELY:";
        string key;
        cin>>key;
        if(key=="pogba")
        {
            cout<<"enter text:";
            string text;
            cin.ignore();
            getline(cin,text);
            string Decipher_a_message="";
            for(int i=0; i<=text.length(); i++)
            {
                for(int j=0; j<=54; j++)
                {
                    if(text[i]==arr2[j])
                    {
                        Decipher_a_message+=arr1[j];

                    }
                }

            }
            cout<<" Decipher a message :"<< Decipher_a_message ;
        }
        else if(key=="alexs")
        {
            cout<<"enter text:";
            string text;
            cin.ignore();
            getline(cin,text);
            string Decipher_a_message="";
            for(int i=0; i<=text.length(); i++)
            {
                for(int j=0; j<=54; j++)
                {
                    if(text[i]==arr3[j])
                    {
                        Decipher_a_message+=arr1[j];

                    }
                }

            }
            cout<<"Decipher_a_message:"<<Decipher_a_message;
    }
    else
    cout<<"ERORR";
   } else if(choose==3){
        cout<<"SALAAAAAAAM";
        break;
    }

}

            return 0;
}

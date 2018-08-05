#include<bits/stdc++.h>
using namespace std;
class mp
{public :
    char a[20000][2];

    void resethexcode()
    {
        for(unsigned long int i=0;i<20000;i++)
            a[i][0]=a[i][1]='0';
    }
    void addhexcode()
    {
        cout<<"\n enter the memory location from which you want to enter the hex code :";
        unsigned long int y;
        char f[3];
        fflush(stdin);
        cin>>y;
        for(unsigned long int i=y;;i++)
        { l:
            cout<<"\n      enter the data :";
            fflush(stdin);
            cin>>f;
            if(f[0]>='G'||f[1]<='Z')
            {
                cout<<"**********error in data*************";
                cout<<"\n plzz do the task again from cirrent memory location :";
                goto l;
            }
            a[i][0]=f[0];
            a[i][1]=f[1];
            if(strcmp(f,"76")==0)
                break;

        }
    }
    void specforaddsb(char *w,unsigned long int i)
    {
        char r[10];
        for(int j=0;w[j]!=' ';j++);
         r[j]=w[j];
         r[j]='\0';
         if(strcmp(r,"ADD")==0||strcmp(r,"SUB")==0)
         {
          switch(w[j+1])
          {
              case 'B' :a[i][1]='0';
                        break;
              case 'C' :a[i][1]='1';
                        break;
             case 'D' :a[i][1]='2';
                        break;
             case 'E' :a[i][1]='3';
                        break;
            case 'H' :a[i][1]='4';
                        break;
             case 'L' :a[i][1]='5';
                        break;
            case 'M' :a[i][1]='6';
                        break;
            case 'A' :a[i][1]='7';
                        break;
          }
         }
       else
         {
          switch(w[j+1])
          {
              case 'B' :a[i][1]='8';
                        break;
              case 'C' :a[i][1]='9';
                        break;
              case 'D' :a[i][1]='A';
                        break;
              case 'E' :a[i][1]='B';
                        break;
             case 'H' :a[i][1]='C';
                        break;
             case 'L' :a[i][1]='D';
                        break;
            case 'M' :a[i][1]='E';
                        break;
            case 'A' :a[i][1]='F';
                        break;
          }
         }
    }
    void specformov(char *w, unsigned long int i)
    {
        for(int j=0;w[j]!=' ';j++)
            j++;
        switch(w[j])
        {
        case 'C': switch(w[j+2])
                  {
                    case 'B' :a[i][1]='8';
                        break;
                    case 'C' :a[i][1]='9';
                        break;
                    case 'D' :a[i][1]='A';
                        break;
                   case 'E' :a[i][1]='B';
                        break;
                   case 'H' :a[i][1]='C';
                        break;
                   case 'L' :a[i][1]='D';
                        break;
                   case 'M' :a[i][1]='E';
                        break;
                   case 'A' :a[i][1]='F';
                        break;
                   }
                   a[i][0]='4';
                   break;
        case 'B': switch(w[j+2])
                   {
                    case 'B' :a[i][1]='0';
                        break;
                    case 'C' :a[i][1]='1';
                        break;
                    case 'D' :a[i][1]='2';
                        break;
                    case 'E' :a[i][1]='3';
                        break;
                    case 'H' :a[i][1]='4';
                        break;
                    case 'L' :a[i][1]='5';
                        break;
                    case 'M' :a[i][1]='6';
                        break;
                    case 'A' :a[i][1]='7';
                        break;

                   }
                   a[i][0]='4';
                   break;
            case 'D': switch(w[j+2])
                   {
                    case 'B' :a[i][1]='0';
                        break;
                    case 'C' :a[i][1]='1';
                        break;
                    case 'D' :a[i][1]='2';
                        break;
                    case 'E' :a[i][1]='3';
                        break;
                    case 'H' :a[i][1]='4';
                        break;
                    case 'L' :a[i][1]='5';
                        break;
                    case 'M' :a[i][1]='6';
                        break;
                    case 'A' :a[i][1]='7';
                        break;

                   }
                   a[i][0]='5';
                   break;
            case 'E':switch(w[j+2])
                  {
                    case 'B' :a[i][1]='8';
                        break;
                    case 'C' :a[i][1]='9';
                        break;
                    case 'D' :a[i][1]='A';
                        break;
                   case 'E' :a[i][1]='B';
                        break;
                   case 'H' :a[i][1]='C';
                        break;
                   case 'L' :a[i][1]='D';
                        break;
                   case 'M' :a[i][1]='E';
                        break;
                   case 'A' :a[i][1]='F';
                        break;
                   }
                   a[i][0]='5';
                   break;
            case 'H': switch(w[j+2])
                   {
                    case 'B' :a[i][1]='0';
                        break;
                    case 'C' :a[i][1]='1';
                        break;
                    case 'D' :a[i][1]='2';
                        break;
                    case 'E' :a[i][1]='3';
                        break;
                    case 'H' :a[i][1]='4';
                        break;
                    case 'L' :a[i][1]='5';
                        break;
                    case 'M' :a[i][1]='6';
                        break;
                    case 'A' :a[i][1]='7';
                        break;

                   }
                   a[i][0]='6';
                   break;
            case 'L':switch(w[j+2])
                  {
                    case 'B' :a[i][1]='8';
                        break;
                    case 'C' :a[i][1]='9';
                        break;
                    case 'D' :a[i][1]='A';
                        break;
                   case 'E' :a[i][1]='B';
                        break;
                   case 'H' :a[i][1]='C';
                        break;
                   case 'L' :a[i][1]='D';
                        break;
                   case 'M' :a[i][1]='E';
                        break;
                   case 'A' :a[i][1]='F';
                        break;
                   }
                   a[i][0]='6';
                   break;
            case 'M': switch(w[j+2])
                   {
                    case 'B' :a[i][1]='0';
                        break;
                    case 'C' :a[i][1]='1';
                        break;
                    case 'D' :a[i][1]='2';
                        break;
                    case 'E' :a[i][1]='3';
                        break;
                    case 'H' :a[i][1]='4';
                        break;
                    case 'L' :a[i][1]='5';
                        break;
                    case 'A':a[i][1]='7';
                        }
                        a[i][0]='7';
                        break;
            case 'A':switch(w[j+2])
                  {
                    case 'B' :a[i][1]='8';
                        break;
                    case 'C' :a[i][1]='9';
                        break;
                    case 'D' :a[i][1]='A';
                        break;
                   case 'E' :a[i][1]='B';
                        break;
                   case 'H' :a[i][1]='C';
                        break;
                   case 'L' :a[i][1]='D';
                        break;
                   case 'M' :a[i][1]='E';
                        break;
                   }
                   a[i][0]='7';
                   break;
        }
    }
    void writecode(char *w,unsigned long int i)
    {
        int y;
        char r[6];
        for(int j=0;w[j]!=' ';j++)
            r[j]==w[j];
            r[j]='\0';
            if(strcmp(r,"ADD")==0||strcmp(r,"ADC")==0)
                {
                    a[i][0]='8';
                    specforaddsb(w,i);
                }
            else if(strcmp(r,"SUB")==0||strcmp(r,"SBB")==0)
                {
                    a[i][0]='9';
                    specforaddsb(w,i);
                }
            else if(strcmp(r,"MOV")==0)
                {
                    specformov(w,i);
                }
            else if (strcmp(r,"HLT")==0)
            {
                a[i][0]='7';
                a[i][1]='6';
            }
            else if(strcmp(r,"ANA")==0)
            {
                a[i][0]='A';
                 switch(w[j+2])
                   {
                    case 'B' :a[i][1]='0';
                        break;
                    case 'C' :a[i][1]='1';
                        break;
                    case 'D' :a[i][1]='2';
                        break;
                    case 'E' :a[i][1]='3';
                        break;
                    case 'H' :a[i][1]='4';
                        break;
                    case 'L' :a[i][1]='5';
                        break;
                    case 'M':a[i][1]='6';
                             break;
                    case 'A':a[i][1]='7';
                        }

            }
            else if(strcmp(r,"ORA")==0)
            {
                a[i][0]='B';
                 switch(w[j+2])
                   {
                    case 'B' :a[i][1]='0';
                        break;
                    case 'C' :a[i][1]='1';
                        break;
                    case 'D' :a[i][1]='2';
                        break;
                    case 'E' :a[i][1]='3';
                        break;
                    case 'H' :a[i][1]='4';
                        break;
                    case 'L' :a[i][1]='5';
                        break;
                        case 'M':a[i][1]='6';
                             break;

                    case 'A':a[i][1]='7';
                        }

            }
            else if(strcmp(r,"CMP")==0)
            {
                a[i][0]='B';
                switch(w[j+2])
                  {
                    case 'B' :a[i][1]='8';
                        break;
                    case 'C' :a[i][1]='9';
                        break;
                    case 'D' :a[i][1]='A';
                        break;
                   case 'E' :a[i][1]='B';
                        break;
                   case 'H' :a[i][1]='C';
                        break;
                   case 'L' :a[i][1]='D';
                        break;
                   case 'M' :a[i][1]='E';
                        break;
                   }
            }
            else if(strcmp(r,"XRA")==0)
            {

                switch(w[j+2])
                  {
                    case 'B' :a[i][1]='8';
                        break;
                    case 'C' :a[i][1]='9';
                        break;
                    case 'D' :a[i][1]='A';
                        break;
                   case 'E' :a[i][1]='B';
                        break;
                   case 'H' :a[i][1]='C';
                        break;
                   case 'L' :a[i][1]='D';
                        break;
                   case 'M' :a[i][1]='E';
                        break;
                   }
                   a[i][0]='A';
            }
            else if(strcmp(r,"INR")==0)
            {
               switch(w[j+2])
               {
                   case 'B':a[i][0]='0';
                            a[i][1]='4';
                            break;
                   case 'C':a[i][0]='0';
                            a[i][1]='C';
                            break;
                   case 'D':a[i][0]='1';
                            a[i][1]='4';
                            break;
                   case 'E':a[i][0]='1';
                            a[i][1]='C';
                            break;
                    case 'H':a[i][0]='2';
                            a[i][1]='4';
                            break;
                   case 'L':a[i][0]='2';
                            a[i][1]='C';
                            break;
               }
            }
            else if(strcmp(r,"DCR")==0)
            {
                   switch(w[j+2])
               {
                   case 'B':a[i][0]='0';
                            a[i][1]='5';
                            break;
                   case 'C':a[i][0]='0';
                            a[i][1]='D';
                            break;
                   case 'D':a[i][0]='1';
                            a[i][1]='5';
                            break;
                   case 'E':a[i][0]='1';
                            a[i][1]='D';
                            break;
                    case 'H':a[i][0]='2';
                            a[i][1]='5';
                            break;
                   case 'L':a[i][0]='2';
                            a[i][1]='D';
                            break;
               }
            }
            else if(strcmp(r,"INX")==0)
            {
                switch(w[j+2])
                {
                case 'B':a[i][0]='0';
                         a[i][1]='3';
                         break;
                case 'D':a[i][0]='1';
                         a[i][1]='3';
                         break;
                case 'H':a[i][0]='2';
                         a[i][1]='3';
                         break;
                }
            }
            else if(strcmp(r,"DCX")==0)
            {
                switch(w[j+2])
                {
                case 'B':a[i][0]='0';
                         a[i][1]='B';
                         break;
                case 'D':a[i][0]='1';
                         a[i][1]='B';
                         break;
                case 'H':a[i][0]='2';
                         a[i][1]='B';
                         break;
                case 'S':j++;
                         a[i][0]='3';
                         a[i][1]='B';
                         break;
                }
            }
            else if(strcmp(r,"MVI")==0)
            {
                switch(w[j+2])
               {
                   case 'B':a[i][0]='0';
                            a[i][1]='6';
                            break;
                   case 'C':a[i][0]='0';
                            a[i][1]='E';
                            break;
                   case 'D':a[i][0]='1';
                            a[i][1]='6';
                            break;
                   case 'E':a[i][0]='1';
                            a[i][1]='E';
                            break;
                    case 'H':a[i][0]='2';
                            a[i][1]='6';
                            break;
                   case 'L':a[i][0]='2';
                            a[i][1]='E';
                            break;
               }
            }
            else if(strcmp(r,"LXI")==0)
            {
                switch(w[j+2])
                {
                case 'B':a[i][0]='0';
                         a[i][1]='1';
                         break;
                case 'D':a[i][0]='1';
                         a[i][1]='1';
                         break;
                case 'H':a[i][0]='2';
                         a[i][1]='1';
                         break;
                case 'S':a[i][0]='3';
                         a[i][1]='1';
                         j++;
                         break;

                }
            }


    }
     void addusingassembly()
    {
       cout<<"\n enter the memory location from which you want to enter the code in the memory :";
        unsigned long int y;
        char f[10];
        fflush(stdin);
        cin>>y;
        for(unsigned long int i =y;;i++)
        {
            fflush(stdin);
            cout<<" \nenter the assembly code :";
            cin>>f;
            writecode(f,i);
        }
    }
};
void resethexcode(int *a,unsigned long int n);
int main()
{
    mp first;
    char w='y';
    while(w=='y')
    {
        int c;
        cout<<"please choose the process that you want to do :";
        cout<<"\n1.reset all memory locations"
            <<"\n2.add hex code"
            <<"\n3. add using assembly code"
            <<"\n4. run any code present in the memory"
            <<"\n5.see value present at any memory location"
            <<"\n6.check the status of the status flags";
        cin>>c;
        switch(c)
        {
            case 1: first.resethexcode();
                    break;
            case 2 : first.addhexcode();
                     break;
            case 3: first.addusing assembly();
                     break;

        }
    }
}

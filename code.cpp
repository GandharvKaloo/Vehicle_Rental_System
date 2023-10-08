/*
In this particular section we will mention the errors or problems this code is facing. Once the problem is resloved we must delete that mentioning from here too.

* In the line:  cout<<">Enter your full name: "<<endl<<">>";
when we take an input for full name; e.g. Jakob fernandis; (here the fullname includes the first name, last name and a space to differentiate between the two.) when performed so, it directly moves on 4th or 5th parameter of the same block without taking the inputs for the 2nd or 3rd parameter. But when no space is given between names or only the first name is taken as input, it works fine. 



*/

//***declaring headder files and main() function.***
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*home page for each and every user... welcomming him/her on our platform
    .
    .
    .
    .
    .
    */
    
    string category;

    //***HomePage for selecting the Catagory as Host or Client.***
    cout<<"Please select the category."<<endl<<">HOST"<<endl<<">CLIENT"<<endl<<">>";
    cin>>category;
    cout<<endl;

    //***for loop if catagory = HOST.***
    if(category=="Host"||category=="host"||category=="HOST"||category=="hOst"||category=="hoSt"||category=="hosT")
    {
        
        int h_key;

        //***steps for the Host.***
        cout<<"Enter the designated key for the Host: ";
        cin>>h_key;

        if(h_key==180504)
        {
            string isRegstHost;

            cout<<"\nAlready registered as a host?"<<endl;
            cout<<">Yes\n>No\n>>";
            cin>>isRegstHost;
            if(isRegstHost=="YES"||isRegstHost=="yes"||isRegstHost=="Yes")
            {
                //***declearing local variables for Head Host.***
                string isHeadHost;

                cout<<"\nAre you Head Host?"<<endl;
                cout<<">YES\n>NO\n>>";
                cin>>isHeadHost;
                
                if(isHeadHost == "YES"|| isHeadHost == "Yes" || isHeadHost == "yes")
                {
                    int h_securityKey, h_per_key;

                    cout<<"\nEnter the Host's security key: ";
                    cin>>h_securityKey;

                    if(h_securityKey==1805)
                        {
                            cout<<"Enter your Personal Host KEY: ";
                            cin>>h_per_key;
                            
                            //personal host key: 18 belongs to Saksham Gupta.
                            //personal host key: 05 belongs to Gandharv Kaloo.
                            if(h_per_key==18)
                            {
                                {cout<<"Welcome Saksham Gupta!";}
                            }
                            else if(h_per_key==05)
                            {cout<<"Welcome Gandharv Kaloo";}
                            else
                            {cout<<"Invalid personal Host KEY!";}
                        }
                        else
                        {
                            cout<<"Invalid Host's security Key";
                        }
                }

                //***if you are not a Head Host***
                else if(isHeadHost=="NO"||isHeadHost=="No"||isHeadHost=="no")
                {
                    string h_id;

                    cout<<"Please enter your Host ID: ";
                    cin>>h_id;

                    //make a function for predefined hosts named: demo1, demo2 & demo3 make their dummy accounts and add up their details in the function. Then call those functions in this block.
                }
            }

            //***if you are not registered as a Host***
            else if(isRegstHost=="NO"||isRegstHost=="no"||isRegstHost=="No")
            {
                //***declearing local variables for Host***
                string h_name,h_email,h_address,h_veh_catg,h_veh_name,h_veh_rc,ans,h_aadhar,h_bankacc,h_mob;

                //***page for new registration of a Host.***
                cout<<"\nSTART YOUR JOURNEY AS A HOST NOW!"<<endl<<endl<<"Please register before getting started. Quickly Add up few fields."<<endl<<"Let's begin by adding your PERSONAL DETAILS."<<endl<<endl;
                cout<<">Enter your full name: "<<endl<<">>";
                cin.ignore();
                getline(cin, h_name);
                cout<<">Enter your E-mail id: "<<endl<<">>";
                cin>>h_email;
                cout<<">Enter your Mobile Number: "<<endl<<">>";
                cin>>h_mob;
                cout<<">Enter your Aadhar no: "<<endl<<">>";
                cin>>h_aadhar;
                cout<<">Enter your Address: "<<endl<<">>";
                cin.ignore();
                getline(cin, h_address);
                cout<<">Enter your Bank Account Number: "<<endl<<">>";
                cin>>h_bankacc;
                cout<<"\n\nNow let's move towards some quick details of your Vehicle."<<endl<<endl;
                cout<<">Choose your Vehicle category which you want to give on rent: "<<endl<<">2-Wheeler\n>4-Wheeler\n"<<">>";
                cin.ignore();
                getline(cin, h_veh_catg);
                cout<<">Enter the Vehicle's Model Name: "<<endl<<">>";
                cin.ignore();
                getline(cin, h_veh_name);
                cout<<">Enter your Vehicle's registration number: "<<endl<<">>";
                cin>>h_veh_rc;
                cout<<endl<<endl;

                /*HERE I WANT THAT THE PROGRAM WILL SHOW ALL THE FILLED DETAILS OF THE HOST. E.G. NAME, ACC, VEHICLE CATG ETC. AND ASK SAVE OR EDIT. IF SAVE THEN SHOW THE BELOW STATEMENT OF THANKYOU FOR REGISTRATION AND IF EDIT THEN WHERE? AND THEN ALLOWING THE USER TO EDIT THE SPECIFIC PLACE.*/
                cout<<"That's all. Thankyou for registration.";
            }
        }
        else
        {
            cout<<"ERROR! Please enter a valid designated Host key.";
        }
    }
    else if(category=="Client"||category=="client"||category=="CLIENT"||category=="cLient"||category=="clIent"||category=="cliEnt"||category=="clieNt"||category=="clienT")
    {
        int c_key;
        //***decleare variables for client.***
        string c_name,c_address,c_email;
        long int c_mob,c_aadhar,c_bankacc;

        cout<<"Enter the designated key for the client: ";
        cin>>c_key;

        if(c_key==0||c_key==1)
        {
            cout<<"START YOUR JOURNEY AS A CLIENT NOW!"<<endl;
            cout<<"Please register before getting started"<<endl;
        }
        else
        {
            cout<<"Please enter a valid key.";
        }
    }
    else
    {
        cout<<"Invalid Catagory! Try again.";
    }
}
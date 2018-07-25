#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void user1();
void user2();
void user3();
void user4();
void user5();
void user6();
void user7();
void user8();
void user9();
void user10();
void user11();
void user12();
void user13();
void user14();
void user15();
void user16();
void user17();
void user18();
void user19();
void user20();
void user21();
void user22();
void user23();
void user24();
void user25();
void user26();
void user27();
void user28();
void user29();
void user30();
void user31();
void user32();
void user33();
void user34();
void user35();
void user36();
void user37();
void user38();
void user39();
void user40();
void user41();
void user42();
void user43();
void user44();
void user45();
void user46();
void user47();
void user48();
void user49();
void user50();

int main()
{
    printf("****************************BLOOD GROUP MANAGEMENT*****************************\n");
    char user_id[20], password[20], User_or_BG_or_name[50], Name[30], Blood_Group[30], Address[30], Phone[30], Donation[30];
    int count = 0, New;
    printf("Input User ID: ");
    while(scanf("%s", user_id))
    {
        if(!strcmp(user_id, "Exit"))break;
        if(!strcmp(user_id, "musfiqurrahmansayed"))
        {
            printf("Welcome in Blood Group Collection\n");
            printf("Input Password: ");
            while(scanf("%s", password))
            {
               if(!strcmp(password, "Exit")){
                printf("Input User ID: ");
                break;
               }
                if(!strcmp(password, "abcd1234"))
                {
                    printf("Your Access Proved\n");
                    printf("Input Blood Donor's User ID/Blood Group/Address:\n");
                    while(scanf("%s", User_or_BG_or_name)){
                    printf("\n");
                    if(!strcmp(User_or_BG_or_name, "Exit")){
                            printf("Input Password: ");
                            break;
                         }
                    if(!strcmp(User_or_BG_or_name, "Abul")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Dhanmondi")){
                    count++;
                    user1();
                    }
                    if(!strcmp(User_or_BG_or_name, "Sabur")|| !strcmp(User_or_BG_or_name, "A+" ) || !strcmp(User_or_BG_or_name, "Uttara")){
                    count++;
                    user2();
                    }
                    if(!strcmp(User_or_BG_or_name, "Akhil")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Ajimpur")){
                    count++;
                    user3();
                    }
                    if(!strcmp(User_or_BG_or_name, "Azhar")|| !strcmp(User_or_BG_or_name, "AB+") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user4();
                    }
                    if(!strcmp(User_or_BG_or_name, "Ridoy")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Dhanmondi")){
                    count++;
                    user5();
                    }
                    if(!strcmp(User_or_BG_or_name, "Hasib")|| !strcmp(User_or_BG_or_name, "A+") || !strcmp(User_or_BG_or_name, "Mirpur")){
                    count++;
                    user6();
                    }
                    if(!strcmp(User_or_BG_or_name, "Golam")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Bogra")){
                    count++;
                    user7();
                    }
                    if(!strcmp(User_or_BG_or_name, "Sumon")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Bogra")){
                    count++;
                    user8();
                    }
                    if(!strcmp(User_or_BG_or_name, "Ranbir")|| !strcmp(User_or_BG_or_name, "AB+") || !strcmp(User_or_BG_or_name, "Lakhnaw")){
                    count++;
                    user9();
                    }
                    if(!strcmp(User_or_BG_or_name, "Katrina")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Delhi")){
                    count++;
                    user10();
                    }
                    if(!strcmp(User_or_BG_or_name, "Zihad")|| !strcmp(User_or_BG_or_name, "O-") || !strcmp(User_or_BG_or_name, "Mirpur")){
                    count++;
                    user11();
                    }
                    if(!strcmp(User_or_BG_or_name, "Samrat")|| !strcmp(User_or_BG_or_name, "A-") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user12();
                    }
                    if(!strcmp(User_or_BG_or_name, "Herok")|| !strcmp(User_or_BG_or_name, "B-") || !strcmp(User_or_BG_or_name, "Shukrabad")){
                    count++;
                    user13();
                    }
                    if(!strcmp(User_or_BG_or_name, "Rakibul")|| !strcmp(User_or_BG_or_name, "AB-") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user14();
                    }
                    if(!strcmp(User_or_BG_or_name, "Kabbo")|| !strcmp(User_or_BG_or_name, "B-") || !strcmp(User_or_BG_or_name, "Kolabagan")){
                    count++;
                    user15();
                    }
                    if(!strcmp(User_or_BG_or_name, "Sarwar")|| !strcmp(User_or_BG_or_name, "A-") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user16();
                    }
                    if(!strcmp(User_or_BG_or_name, "Sany")|| !strcmp(User_or_BG_or_name, "O-") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user17();
                    }
                    if(!strcmp(User_or_BG_or_name, "Palash")|| !strcmp(User_or_BG_or_name, "A-") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user18();
                    }
                    if(!strcmp(User_or_BG_or_name, "Mamun")|| !strcmp(User_or_BG_or_name, "AB-") || !strcmp(User_or_BG_or_name, "Dhanmondi")){
                    count++;
                    user19();
                    }
                    if(!strcmp(User_or_BG_or_name, "Nahid")|| !strcmp(User_or_BG_or_name, "B-") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user20();
                    }
                    if(!strcmp(User_or_BG_or_name, "Shaon")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Shonirakhra")){
                    count++;
                    user21();
                    }
                    if(!strcmp(User_or_BG_or_name, "Munna")|| !strcmp(User_or_BG_or_name, "A+") || !strcmp(User_or_BG_or_name, "Shukrabad")){
                    count++;
                    user22();
                    }
                    if(!strcmp(User_or_BG_or_name, "Shohan")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Shukrabad")){
                    count++;
                    user23();
                    }
                    if(!strcmp(User_or_BG_or_name, "Robin")|| !strcmp(User_or_BG_or_name, "AB+") || !strcmp(User_or_BG_or_name, "Shukrabad")){
                    count++;
                    user24();
                    }
                    if(!strcmp(User_or_BG_or_name, "Shafin")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Farmgate")){
                    count++;
                    user25();
                    }
                    if(!strcmp(User_or_BG_or_name, "Tamkin")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Malibag")){
                    count++;
                    user26();
                    }
                    if(!strcmp(User_or_BG_or_name, "Morshed")|| !strcmp(User_or_BG_or_name, "A+") || !strcmp(User_or_BG_or_name, "Narayangaonj")){
                    count++;
                    user27();
                    }
                    if(!strcmp(User_or_BG_or_name, "Miraz")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Mohakhali")){
                    count++;
                    user28();
                    }
                    if(!strcmp(User_or_BG_or_name, "Remon")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user29();
                    }
                    if(!strcmp(User_or_BG_or_name, "Kaniz")|| !strcmp(User_or_BG_or_name, "AB+") || !strcmp(User_or_BG_or_name, "Malibag")){
                    count++;
                    user30();
                    }
                    if(!strcmp(User_or_BG_or_name, "Nusrat")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Dhanmondi")){
                    count++;
                    user31();
                    }
                    if(!strcmp(User_or_BG_or_name, "Mehenaz")|| !strcmp(User_or_BG_or_name, "AB-") || !strcmp(User_or_BG_or_name, "Rayerbag")){
                    count++;
                    user32();
                    }
                    if(!strcmp(User_or_BG_or_name, "Nusratullah")|| !strcmp(User_or_BG_or_name, "A-") || !strcmp(User_or_BG_or_name, "Rayerbag")){
                    count++;
                    user33();
                    }
                    if(!strcmp(User_or_BG_or_name, "Juthy")|| !strcmp(User_or_BG_or_name, "B-") || !strcmp(User_or_BG_or_name, "Agargoan")){
                    count++;
                    user34();
                    }
                    if(!strcmp(User_or_BG_or_name, "Fahmida")|| !strcmp(User_or_BG_or_name, "O-") || !strcmp(User_or_BG_or_name, "Mohakhali")){
                    count++;
                    user35();
                    }
                    if(!strcmp(User_or_BG_or_name, "Fahima")|| !strcmp(User_or_BG_or_name, "B-") || !strcmp(User_or_BG_or_name, "Mohammadpur")){
                    count++;
                    user36();
                    }
                    if(!strcmp(User_or_BG_or_name, "Mohema")|| !strcmp(User_or_BG_or_name, "O-") || !strcmp(User_or_BG_or_name, "Savar")){
                    count++;
                    user37();
                    }
                    if(!strcmp(User_or_BG_or_name, "Tahmina")|| !strcmp(User_or_BG_or_name, "A-") || !strcmp(User_or_BG_or_name, "Savar")){
                    count++;
                    user38();
                    }
                    if(!strcmp(User_or_BG_or_name, "Khadija")|| !strcmp(User_or_BG_or_name, "AB-") || !strcmp(User_or_BG_or_name, "Mohakhali")){
                    count++;
                    user39();
                    }
                    if(!strcmp(User_or_BG_or_name, "Lubna")|| !strcmp(User_or_BG_or_name, "O-") || !strcmp(User_or_BG_or_name, "Dhanmondi")){
                    count++;
                    user40();
                    }
                    if(!strcmp(User_or_BG_or_name, "Beauty")|| !strcmp(User_or_BG_or_name, "A+") || !strcmp(User_or_BG_or_name, "Ajimpur")){
                    count++;
                    user41();
                    }
                    if(!strcmp(User_or_BG_or_name, "Maisha")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Gulisthan")){
                    count++;
                    user42();
                    }
                    if(!strcmp(User_or_BG_or_name, "Oyshi")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Kolabagan")){
                    count++;
                    user43();
                    }
                    if(!strcmp(User_or_BG_or_name, "Purnata")|| !strcmp(User_or_BG_or_name, "AB+") || !strcmp(User_or_BG_or_name, "Shukrabad")){
                    count++;
                    user44();
                    }
                    if(!strcmp(User_or_BG_or_name, "Sarmistha")|| !strcmp(User_or_BG_or_name, "A+") || !strcmp(User_or_BG_or_name, "Kolabagan")){
                    count++;
                    user45();
                    }
                    if(!strcmp(User_or_BG_or_name, "Tabassum")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Mohakhali")){
                    count++;
                    user46();
                    }
                    if(!strcmp(User_or_BG_or_name, "Tamanna")|| !strcmp(User_or_BG_or_name, "A+") || !strcmp(User_or_BG_or_name, "Uttara")){
                    count++;
                    user47();
                    }
                    if(!strcmp(User_or_BG_or_name, "Waqiah")|| !strcmp(User_or_BG_or_name, "AB+") || !strcmp(User_or_BG_or_name, "Savar")){
                    count++;
                    user48();
                    }
                    if(!strcmp(User_or_BG_or_name, "Musfiqur")|| !strcmp(User_or_BG_or_name, "B+") || !strcmp(User_or_BG_or_name, "Jigatola")){
                    count;
                    user49();
                    }
                    if(!strcmp(User_or_BG_or_name, "Khawla")|| !strcmp(User_or_BG_or_name, "O+") || !strcmp(User_or_BG_or_name, "Mirpur"))
                    user50();
                    printf("%d People Matched!!\n", count);
                    count = 0;
                }
                }
                else
                    printf("Wrong Password\n");
            }
        }
        else
        {
            printf("Wrong User ID\n");
            printf("Create New Id\nIf You Want to Create New Id\n Press 1\n");
            scanf("%d", &New);
            if(New == 1)
            {
                printf("Input Name: ");
                scanf("%s", Name);
                printf("Input Blood Group: ");
                scanf("%s", Blood_Group);
                printf("Input Address: ");
                scanf("%s", Address);
                printf("Input Phone Number: ");
                scanf("%s", Phone);
                printf("Input Donation Date: ");
                scanf("%s", Donation);
            }

        }
    }
    return 0;
}

void user1()
{
    printf("Name: Md. Abul\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01756876357\n");
    printf("Address: Dhanmondi, Dhaka\n");
    printf("Last Blood Donation Date: 17-07-2018\n");
    printf("\n");
}
void user2()
{
    printf("Name: Md. Sabur\n");
    printf("Blood Group: (A+)Positive\n");
    printf("Phone Number: 01756876354\n");
    printf("Address: Uttara, Dhaka\n");
    printf("Last Blood Donation Date: 23-07-2018\n");
    printf("\n");
}
void user3()
{
    printf("Name: Md. Akhil\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01756876355\n");
    printf("Address: Ajimpur, Dhaka\n");
    printf("Last Blood Donation Date: 27-17-2018\n");
    printf("\n");
}
void user4()
{
    printf("Name: Azhar Ali\n");
    printf("Blood Group: (AB+)Positive\n");
    printf("Phone Number: 01756876358\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 14-02-2018\n");
    printf("\n");
}
void user5()
{
    printf("Name: Md. Ridoy\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01756870357\n");
    printf("Address: Dhanmondi, Dhaka\n");
    printf("Last Blood Donation Date: 04-01-2018\n");
    printf("\n");
}
void user6()
{
    printf("Name: Md. Hasib\n");
    printf("Blood Group: (A+)Positive\n");
    printf("Phone Number: 01756871357\n");
    printf("Address: Mirpur, Dhaka\n");
    printf("Last Blood Donation Date: 09-07-2018\n");
    printf("\n");
}
void user7()
{
    printf("Name: Md. Golam\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01750876357\n");
    printf("Address: Bogra, Dhaka\n");
    printf("Last Blood Donation Date: 01-04-2018\n");
    printf("\n");
}
void user8()
{
    printf("Name: Sumon Ahmed\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01856876357\n");
    printf("Address: Bogra, Dhaka\n");
    printf("Last Blood Donation Date: 04-09-2018\n");
    printf("\n");
}
void user9()
{
    printf("Name: Ranbir Kumar\n");
    printf("Blood Group: (AB+)Positive\n");
    printf("Phone Number: 01756876317\n");
    printf("Address: Lakhnaw, Mumbai\n");
    printf("Last Blood Donation Date: 04-05-2018\n");
    printf("\n");
}
void user10()
{
    printf("Name: Katrina Kife\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01956876357\n");
    printf("Address: Delhi\n");
    printf("Last Blood Donation Date: 19-06-2018\n");
    printf("\n");
}
void user11()
{
    printf("Name: Md. Zihad Sarker\n");
    printf("Blood Group: (O-)Negative\n");
    printf("Phone Number: 01556876357\n");
    printf("Address: Mirpur, Dhaka\n");
    printf("Last Blood Donation Date: 11-07-2018\n");
    printf("\n");
}
void user12()
{
    printf("Name: Samrat Khan\n");
    printf("Blood Group: (A-)Negative\n");
    printf("Phone Number: 01750806357\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 15-07-2018\n");
    printf("\n");
}
void user13()
{
    printf("Name: Herok Kabiraz\n");
    printf("Blood Group: (B-)Negative\n");
    printf("Phone Number: 01556876057\n");
    printf("Address: Shukrabad, Dhaka\n");
    printf("Last Blood Donation Date: 16-07-2018\n");
    printf("\n");
}
void user14()
{
    printf("Name: Rakibul Hasan\n");
    printf("Blood Group: (AB-)Negative\n");
    printf("Phone Number: 01506876057\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 17-07-2018\n");
    printf("\n");
}
void user15()
{
    printf("Name: Shahriyar Kabbo\n");
    printf("Blood Group: (B-)Negative\n");
    printf("Phone Number: 01656876057\n");
    printf("Address: Kolabagan, Dhaka\n");
    printf("Last Blood Donation Date: 16-07-2018\n");
    printf("\n");
}
void user16()
{
    printf("Name: Sarwar Maruf Jebon\n");
    printf("Blood Group: (A-)Negative\n");
    printf("Phone Number: 01500876057\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 19-07-2018\n");
    printf("\n");
}
void user17()
{
    printf("Name: Hasan Jamil Sany\n");
    printf("Blood Group: (O-)Negative\n");
    printf("Phone Number: 01556876057\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 16-07-2018\n");
    printf("\n");
}
void user18()
{
    printf("Name: Palash Miah\n");
    printf("Blood Group: (A-)Negative\n");
    printf("Phone Number: 01556800057\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 02-07-2018\n");
    printf("\n");
}
void user19()
{
    printf("Name: Abdullah Al Mamun\n");
    printf("Blood Group: (AB-)Negative\n");
    printf("Phone Number: 01556806057\n");
    printf("Address: Dhanmondi, Dhaka\n");
    printf("Last Blood Donation Date: 05-07-2018\n");
    printf("\n");
}
void user20()
{
    printf("Name: Nahid Hasan\n");
    printf("Blood Group: (B-)Negative\n");
    printf("Phone Number: 01556576057\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 08-07-2018\n");
    printf("\n");
}
void user21()
{
    printf("Name: Md. Shaon\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01856506057\n");
    printf("Address: Shonirakhra, Dhaka\n");
    printf("Last Blood Donation Date: 01-07-2018\n");
    printf("\n");
}
void user22()
{
    printf("Name: Mahamudur Rahman Munna\n");
    printf("Blood Group: (A+)Positive\n");
    printf("Phone Number: 01856596057\n");
    printf("Address: Shukrabad, Dhaka\n");
    printf("Last Blood Donation Date: 02-07-2018\n");
    printf("\n");
}
void user23()
{
    printf("Name: Md. Shohan\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01856509057\n");
    printf("Address: Shukrabad, Dhaka\n");
    printf("Last Blood Donation Date: 03-07-2018\n");
    printf("\n");
}
void user24()
{
    printf("Name: Md. Robin\n");
    printf("Blood Group: (AB+)Positive\n");
    printf("Phone Number: 01856508057\n");
    printf("Address: Shukrabad, Dhaka\n");
    printf("Last Blood Donation Date: 04-07-2018\n");
    printf("\n");
}
void user25()
{
    printf("Name: Md. Shafin\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01856906057\n");
    printf("Address: Farmgate, Dhaka\n");
    printf("Last Blood Donation Date: 06-07-2018\n");
    printf("\n");
}
void user26()
{
    printf("Name: Taufiqur Rahman Tamkin\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01856506097\n");
    printf("Address: Malibag, Dhaka\n");
    printf("Last Blood Donation Date: 07-07-2018\n");
    printf("\n");
}
void user27()
{
    printf("Name: Golam Morshed\n");
    printf("Blood Group: (A+)Positive\n");
    printf("Phone Number: 01896006057\n");
    printf("Address: Narayangaonj, Dhaka\n");
    printf("Last Blood Donation Date: 01-07-2018\n");
    printf("\n");
}
void user28()
{
    printf("Name: Miraz\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01759506057\n");
    printf("Address: Mohakhali, Dhaka\n");
    printf("Last Blood Donation Date: 20-07-2018\n");
    printf("\n");
}
void user29()
{
    printf("Name: Md. Remon\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01756586057\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 21-07-2018\n");
    printf("\n");
}
void user30()
{
    printf("Name: Kaniz Fatema Mim\n");
    printf("Blood Group: (AB+)Positive\n");
    printf("Phone Number: 01657506057\n");
    printf("Address: Malibag, Dhaka\n");
    printf("Last Blood Donation Date: 22-07-2018\n");
    printf("\n");
}
void user31()
{
    printf("Name: Nusrat Jahan Meem\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01657506077\n");
    printf("Address: Dhanmondi, Dhaka\n");
    printf("Last Blood Donation Date: 23-07-2018\n");
    printf("\n");
}
void user32()
{
    printf("Name: Mehenaz Mim\n");
    printf("Blood Group: (AB-)Negative\n");
    printf("Phone Number: 01659506057\n");
    printf("Address: Rayerbag, Dhaka\n");
    printf("Last Blood Donation Date: 24-07-2018\n");
    printf("\n");
}
void user33()
{
    printf("Name: Nusrat Ullah\n");
    printf("Blood Group: (A-)Negative\n");
    printf("Phone Number: 01559506057\n");
    printf("Address: Rayerbag, Dhaka\n");
    printf("Last Blood Donation Date: 25-07-2018\n");
    printf("\n");
}
void user34()
{
    printf("Name: Juthy Akter\n");
    printf("Blood Group: (B-)Negative\n");
    printf("Phone Number: 01655506057\n");
    printf("Address: Agargaon, Dhaka\n");
    printf("Last Blood Donation Date: 26-07-2018\n");
    printf("\n");
}
void user35()
{
    printf("Name: Fahmida Prova\n");
    printf("Blood Group: (O-)Negative\n");
    printf("Phone Number: 01659556057\n");
    printf("Address: Mohakhali, Dhaka\n");
    printf("Last Blood Donation Date: 27-07-2018\n");
    printf("\n");
}
void user36()
{
    printf("Name: Fahima Akter\n");
    printf("Blood Group: (B-)Negative\n");
    printf("Phone Number: 01959506057\n");
    printf("Address: Mohammadpur, Dhaka\n");
    printf("Last Blood Donation Date: 28-07-2018\n");
    printf("\n");
}
void user37()
{
    printf("Name: Mohema Abedin\n");
    printf("Blood Group: (O-)Negative\n");
    printf("Phone Number: 01959546057\n");
    printf("Address: Savar, Dhaka\n");
    printf("Last Blood Donation Date: 29-07-2018\n");
    printf("\n");
}
void user38()
{
    printf("Name: Tahmina Rimi\n");
    printf("Blood Group: (A-)Negative\n");
    printf("Phone Number: 01959006057\n");
    printf("Address: Savar, Dhaka\n");
    printf("Last Blood Donation Date: 30-07-2018\n");
    printf("\n");
}
void user39()
{
    printf("Name: MST. Khadija\n");
    printf("Blood Group: (AB-)Negative\n");
    printf("Phone Number: 01959507057\n");
    printf("Address: Mohakhali, Dhaka\n");
    printf("Last Blood Donation Date: 31-07-2018\n");
    printf("\n");
}
void user40()
{
    printf("Name: Lubna Afroz\n");
    printf("Blood Group: (O-)Negative\n");
    printf("Phone Number: 01959506357\n");
    printf("Address: Dhanmondi, Dhaka\n");
    printf("Last Blood Donation Date: 19-07-2018\n");
    printf("\n");
}
void user41()
{
    printf("Name: Beauty Banu\n");
    printf("Blood Group: (A+)Positive\n");
    printf("Phone Number: 01652546057\n");
    printf("Address: Ajimpur, Dhaka\n");
    printf("Last Blood Donation Date: 18-07-2018\n");
    printf("\n");
}
void user42()
{
    printf("Name: Noor A Maisha\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01952506057\n");
    printf("Address: Gulisthan, Dhaka\n");
    printf("Last Blood Donation Date: 17-07-2018\n");
    printf("\n");
}
void user43()
{
    printf("Name: Oyshi Tabassum\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01959106057\n");
    printf("Address: Kolabagan, Dhaka\n");
    printf("Last Blood Donation Date: 16-07-2018\n");
    printf("\n");
}
void user44()
{
    printf("Name: Purnata Mojumdar\n");
    printf("Blood Group: (AB+)Positive\n");
    printf("Phone Number: 01657506057\n");
    printf("Address: Shukrabad, Dhaka\n");
    printf("Last Blood Donation Date: 15-07-2018\n");
    printf("\n");
}
void user45()
{
    printf("Name: Sarmishta Halder\n");
    printf("Blood Group: (A+)Positive\n");
    printf("Phone Number: 01659516057\n");
    printf("Address: Kolabagan, Dhaka\n");
    printf("Last Blood Donation Date: 14-07-2018\n");
    printf("\n");
}
void user46()
{
    printf("Name: Tabassum Islam\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01659506257\n");
    printf("Address: Mohakhali, Dhaka\n");
    printf("Last Blood Donation Date: 13-07-2018\n");
    printf("\n");
}
void user47()
{
    printf("Name: Tamannna Nusrat\n");
    printf("Blood Group: (A+)Positive\n");
    printf("Phone Number: 01659306057\n");
    printf("Address: Uttara, Dhaka\n");
    printf("Last Blood Donation Date: 12-07-2018\n");
    printf("\n");
}
void user48()
{
    printf("Name: Waqiah Noor\n");
    printf("Blood Group: (AB+)Positive\n");
    printf("Phone Number: 01651506057\n");
    printf("Address: Savar, Dhaka\n");
    printf("Last Blood Donation Date: 11-07-2018\n");
    printf("\n");
}
void user49()
{
    printf("Name: Musfiqur Sayed\n");
    printf("Blood Group: (B+)Positive\n");
    printf("Phone Number: 01959509057\n");
    printf("Address: Jigatola, Dhaka\n");
    printf("Last Blood Donation Date: 10-07-2018\n");
    printf("\n");
}
void user50()
{
    printf("Name: Khawla Akon\n");
    printf("Blood Group: (O+)Positive\n");
    printf("Phone Number: 01759596057\n");
    printf("Address: Mirpur, Dhaka\n");
    printf("Last Blood Donation Date: 05-07-2018\n");
    printf("\n");
}

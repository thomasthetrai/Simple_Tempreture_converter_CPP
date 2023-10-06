#include <iostream>

/*
int main() {
    //basicallly const makes it so nothing can change the thing you set the variable to
    const double PI = 3.14159;
    const int LIGHT_SPEEED = 299792458;
    const int WIDTH = 1920;


    std::cout << circumfrance << "cm";

    return 0;

}
*/

// namespace first{
//     int x = 1;
// }
// namespace second{
//     int x = 2;
// }

// int main() {
//     using namespace first;
//     using std::cout;

//     int x = 3;

//     cout << second::x;
// }
// #include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
// using text_t = std::string;
// using number_t = int;

// int main(){
//     using namespace std;

//     text_t first = "bro";
//     number_t vn = 5;

//     cout << vn << "\n";
//     cout << first;

//     return 0;
// }

// int main(){
//     using namespace std;
//     int people = 19;
//     int people2 = 19;
//     int people3 = 19;
//     int people4 = 19;
//     int people5 = 19;
//     int people6 = 19;

//     people=1;
//     people2+=1;
//     people3-=1;
//     people4*=2;
//     people5/=2;
//     people6%=1;
    

//     cout << people << endl << people2 << endl << people3 << endl << people4 << endl << people5 << endl << people6;


//     return 0;
// }

// int main() {
//     //Type conversion which has 2 forms
//     // implicit = automatic
//     //explicit = 

//     double correct = 8;
//     double questions = 10;
//     double precentage = correct/questions * 100;    

//     cout << precentage << "%";



// }

// int main() 
// {
//     std::string name;

//     std::cout << "What is you're name: ";
//     std::cin >> name;

//     std::cout << "Hello " << name;

//     return 0;
// }

// int main(){
//     std::string name;
//     int age;
//     std::cout << "What is your age: ";
//     std::cin >> age;

//     std::cout << "What is your name: ";
//     std::getline(std::cin >> std::ws, name);

//     std::cout << "Hello: " << name << "\n";
//     std::cout << "You are " << age << " years old";


//     return 0;
// }
// #include <cmath>

// int main(){

//     double h = 6;
//     double x = 3;
//     double y = 2;
//     double z;
//     // double z = std::max(x, y);
//     // double z = std::min(x, y);
//     // z = pow(0, 0);
//     // z = sqrt(9);
//     // z = abs(-9);
//     z = round(3.5);
//     std::cout << z;
// }


// #include <cmath>

// int main(){
//     double a;
//     double b;
//     double c;
//     double j;
//     double h;
//     double kkk;

//     std::cout << "Enter The Number For Side A: ";
//     std::cin >> a;

//     std::cout << "Enter The Number For Side B: ";
//     std::cin >> b;

//     j = pow(a, 2);
//     h = pow(b, 2);
//     kkk = j + h;
//     c = sqrt(kkk);
//     std::cout << "side c:" << c;
// }

// int main(){

//     int age;
//     std::cout << "How old are you: ";
//     std::cin >> age;

//     if(age >= 65){
//     std::cout << "you too old for this stuff man";
//     }

//     else if(age > 18){
//         std::cout << "Welcome";
//     }

//     else if(age < 0){
//         std::cout << "Error";
//     }

//     else{
//         std::cout << "you too young man";
//     }


// }

// int main(){
// //     int month;

// //     std::cout << "which month: ";
// //     std::cin >> month;

// //     //rather than writing if else 1 million times case is more efficient

// //     switch(month){
// //         case 1:
// //             std::cout << "it is january";
// //             break;
// //         case 2:
// //             std::cout << "it is febraury";
// //             break;
// //         case 3:
// //             std::cout << "it is march";
// //             break;
// //         case 4:
// //             std::cout << "it is april";
// //             break;
// //         case 5:
// //             std::cout << "it is may";
// //             break;
// //         case 6:
// //             std::cout << "it is june";
// //             break;
// //         case 7:
// //             std::cout << "it is july";
// //             break;
// //         case 8:
// //             std::cout << "it is august";
// //             break;
// //         case 9:
// //             std::cout << "it is september";
// //             break;
// //         case 10:
// //             std::cout << "it is october";
// //             break;
// //         case 11:
// //             std::cout << "it is november";
// //             break;
// //         case 12:
// //             std::cout << "it is december";
// //             break;
// //         default:
// //         std::cout << "number in the range of 1 - 12 IDIOT!";
// //     }
// // }
//     char grade;

//     std::cout << "What grade you got haiyaa: ";
//     std::cin >> grade;

//     switch(grade){
//         case 'A':
//             std::cout << "A stand for Average Asian";
//             break;
//         case 'B':
//             std::cout << "What da hail you say? we Asians not Bsians, no food for a month";
//             break;
//         case 'C':
//             std::cout << "I will send you to jesus myself";
//             break;
//         case 'D':
//             std::cout << "You Kidding right? No food or water for a year and you live in basement with calculus";
//             break;
//         case 'E':
//             std::cout << "Hahah so funny, Come i cut of a little from finger";
//             break;
//         case 'F':
//             std::cout << "Hello this is 911 what is the emergency? Hello yes i would like to report a Very brutal murder";
//             break;
//         default:
//             std::cout << "WRITE IN BIG LETTERS DUMB DUMB AND A LETTER THROUGH A - F";
//     }
//    }
// #include <cmath>

// int main(){
//     int choice;

//     std::cout << "\nWelcome to the best calculator in the world!\nWhat could we get started for you today?\n[1] - Addition\n[2] - Subtraktion\n[3] - Multiplication\n[4] - Division\n[5] - To The Power\n[6] - Square root\n[7] - Absolute\n[8] - Round\n[9] - Biggest Number\n[10] - Smallest Number\n[0] - Escape\nEnter: ";
//     std::cin >> choice;

//     switch(choice){
//         case 1:
//         double a;
//         double b;
//         double A;
        
//         std::cout << "Please Enter the first Number: ";
//         std::cin >> a;

//         std::cout << "Please Enter the second Number: ";
//         std::cin >> b;

//         A = a + b;

//         std::cout << a << " + " << b << " = " << A;
//         break;
//         case 2:

//         double a1;
//         double b1;
//         double A1;
        
//         std::cout << "Please Enter the first Number: ";
//         std::cin >> a1;

//         std::cout << "Please Enter the second Number: ";
//         std::cin >> b1;

//         A1 = a1 - b1;

//         std::cout << a1 << " - " << b1 << " = " << A1;
//         break;
//         case 3:

//         double a2;
//         double b2;
//         double A2;
        
//         std::cout << "Please Enter the first Number: ";
//         std::cin >> a2;

//         std::cout << "Please Enter the second Number: ";
//         std::cin >> b2;

//         A2 = a2 * b2;

//         std::cout << a2 << " * " << b2 << " = " << A2;
//         break;
//         case 4:
//         double a3;
//         double b3;
//         double A3;
        
//         std::cout << "Please Enter the first Number: ";
//         std::cin >> a3;

//         std::cout << "Please Enter the second Number: ";
//         std::cin >> b3;

//         A3 = a3 / b3;

//         std::cout << a3 << " / " << b3 << " = " << A3;
//         break;

//         case 5:
//         double a4;
//         double b4;
//         double A4;
        
//         std::cout << "Please Enter the first Number: ";
//         std::cin >> a4;

//         std::cout << "Please Enter the second Number: ";
//         std::cin >> b4;

//         A4 = pow(a4, b4);

//         std::cout << a4 << " To the power of " << b4 << " = " << A4;
//         break;
//         case 6:
//         double a5;
//         double A5;
        
//         std::cout << "Please Enter the Number: ";
//         std::cin >> a5;

//         A5 = sqrt(a5);

//         std::cout << "the square root of " << a5 << " = " << A5;
//         break;
//         case 7:
//         double a6;
//         double b6;
//         double A6;
        
//         std::cout << "Please Enter the Number: ";
//         std::cin >> a6;

//         A6 = abs(a6);

//         std::cout << "the absolute of " << a6 << " = " << A6;
//         break;
//         case 8:
//         double a7;
//         double b7;
//         double A7;
        
//         std::cout << "Please Enter the Number: ";
//         std::cin >> a7;

//         A7 = round(a7);

//         std::cout << a7 << " rounded" << " = " << A7;
//         break;
//         case 9:
//         double a8;
//         double b8;
//         double A8;
        
//         std::cout << "Please Enter the first Number: ";
//         std::cin >> a8;

//         std::cout << "Please Enter the second Number: ";
//         std::cin >> b8;

//         A8 = std::max(a8, b8);

//         std::cout << "the bigger number between " << a8 << " and " << b8 << " = " << A8;
//         break;
//         case 10:
//         double a9;
//         double b9;
//         double A9;
        
//         std::cout << "Please Enter the first Number: ";
//         std::cin >> a9;

//         std::cout << "Please Enter the second Number: ";
//         std::cin >> b9;

//         A9 = std::min(a9, b9);

//         std::cout << "the smaller number between " << a9 << " and " << b9 << " = " << A9;
//         break;
//         case 0:
//         exit;
//         break;
//         default:
//         std::cout << "Not a valid number in the range of 0 - 10";
//         break;
        




//     }
    
// }



// int main(){

// }

// int main(){
//     int age;

//     std::cout << "What is your age: ";
//     std::cin >> age;
//     if(age > 18 && age < 65){
//         std::cout << "Welcome in";
//     }
//     else if(age > 65){
//         std::cout << "you too old for this stuff man";
//     }
// }

// int main(){
//     double temp;
//     char unit;

//     std::cout << "Welcome to the best tempreture comverter in the world\npick a tempreture you would like to convert to\n[F] - Celsius to Farenheit\n[C] - Farenheit to Celsius\nEnter: ";
//     std::cin >> unit;

//     if(unit == 'F' || unit == 'f'){
//         std::cout << "Enter the tempreture you would like to covert in Celsius\nEnter: ";
//         std::cin >> temp;

//         temp = 1.8 * temp + 32;
//         std::cout << "The Tempreture in Farenheit is\n" << temp << " degrees farenheit";

//     }

//     else if(unit == 'C' || unit == 'c'){
//     std::cout << "Enter the tempreture you would like to covert in Celsius\nEnter: ";
//     std::cin >> temp;        

//     temp = (temp - 32) / 1.8;
//     std::cout << "The Tempreture in Celsuis is\n" << temp << " degrees celsius";
    


//     }

//     else{
//         std::cout << "Invalid input"
//     }
// }
int main(){
    double temp;
    char unit;

    std::cout << "Welcome to the best tempreture comverter in the world\npick a tempreture you would like to convert to\n[F] - Celsius to Farenheit\n[C] - Farenheit to Celsius\nEnter: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the tempreture you would like to covert in Celsius\nEnter: ";
        std::cin >> temp;

        temp = 1.8 * temp + 32;
        std::cout << "The Tempreture in Farenheit is\n" << temp << " degrees farenheit";

    }

    else if(unit == 'C' || unit == 'c'){
    std::cout << "Enter the tempreture you would like to covert in Celsius\nEnter: ";
    std::cin >> temp;        

    temp = (temp - 32) / 1.8;
    std::cout << "The Tempreture in Celsuis is\n" << temp << " degrees celsius";
    


    }

    else{
        std::cout << "Invalid input"
    }
}

#include <iostream>
#include<string>


class MotorVehicle{
    public:
        MotorVehicle(std::string vehicle_make, std::string vehicle_fuelType, int vehicle_year)
        : make{vehicle_make}, fuelType{vehicle_fuelType}, yearofManufacture{vehicle_year}{}
        
        std::string getVehicleMake(){
            return make;
        }

        std::string getVehicleFuelType(){
            return fuelType;
        }

        int getVehicleYearOfManufacture(){
            return yearofManufacture;
        }

        std::string getVehilceColor(){
            return color;
        }
        
        int getVehilceEngineCapacity(){
            return engineCapacity;
        }

        void setVehicleMake(std::string vehicleMake){

            if(vehicleMake.length() > 0){

                make = vehicleMake;

            }else{
            
                std::cout << "Vehicle make is empty";
            
            }
            
        }

        void setVehicleFuelType(std::string vehicleType){
            
            if(vehicleType.length() > 0){

                fuelType = vehicleType;

            }else{
            
                std::cout << "Vehicle type is empty";
            
            }
        }

        void setVehicleYearOfManufacture(int vehicleYear){
            
            if(vehicleYear > 0){

                yearofManufacture = vehicleYear;

            }else{
            
                std::cout << "Vehicle year is invalid";
            
            }
        }

        void setVehilceColor(std::string vehicleColor){
            
            if(vehicleColor.length() > 0){

                color = vehicleColor;

            }else{
            
                std::cout << "Vehicle color is empty";
            
            }
        }
        
        void setVehilceEngineCapacity(int vehicleEngine){
            
            if(vehicleEngine > 0){

                engineCapacity = vehicleEngine;

            }else{

                std::cout << "Vehicle engine capacity is invalid";
            
            }
        }

        void displayCarDetails(){

            std::cout << "The following details pertain to your vehicle:" << std::endl;
            std::cout << "Vehicle make: " << make << std::endl;
            std::cout << "Vehicle type: " << fuelType << std::endl;
            std::cout << "Vehicle year: " << yearofManufacture << std::endl;
            std::cout << "Vehicle color: " << color << std::endl;
            std::cout << "Vehicle engine capacity: " << engineCapacity << " cylinder engine" << std::endl;


        }

    private:
        std::string make;
        std::string fuelType;
        int yearofManufacture;
        std::string color{"Chrome Black"};
        int engineCapacity{6};



};
#include <iostream>
#include <string>

class Date{
    public:
        Date(int d_ay, int m_onth, int y_ear)
        :day{d_ay}, year{y_ear}{

            // check whther value for moth given rrangesf rom 1 - 12. If not, default to 1
            if(m_onth > 0 && m_onth <= 12){
                month = m_onth;
            }else{
                month = 1;
            }

        }

        int getDay() {
            return day;
        }

        int getMonth() {
            return month;
        }

        int getYear() {
            return year;
        }

        void setDay(int d_ay) {

            if(d_ay > 0 && d_ay <= 31){
                day = d_ay;
            }else{
                std::cout << "Invalid day format!" <<std::endl;
            }

        }

        void setMonth(int m_onth) {

            if(m_onth > 0 && m_onth <= 12){
                month = m_onth;
            }else{
                std::cout << "Invalid month format!" <<std::endl;
            }
            
        }

        void setYear(int y_ear) {

            if(y_ear >= 0){
                year = y_ear;
            }else{
                std::cout << "Invalid year format!" <<std::endl;
            }
            
        }

        void displayDate() {
            std::cout << "The date today is: " << month << "/" << day << "/" << year << std::endl;
        }


    private:
        int day{0};
        int month{0};
        int year{0};
};
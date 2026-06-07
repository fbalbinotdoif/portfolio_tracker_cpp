#pragma once

namespace portfolio {
    struct Date {
        int day;
        int month;
        int year;
    };

    [[nodiscard]] inline bool operator<(const Date& lhs, const Date& rhs){
        if (lhs.year < rhs.year){
            return true;
        } else if (lhs.year == rhs.year){
            if(lhs.month < rhs.month){
                return true;
            } else if(lhs.month == rhs.month){
                if(lhs.day < rhs.day){
                    return true;
                } else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
}



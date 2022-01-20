/*
CH-230-A
a12_p2.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <string>


class TournamentMember{
private:
    char firstname[36];
    char lastname[36];
    char birthdate[11];
    std::string gender;
    double height;
    static std::string location; //static property used

public:
    TournamentMember(); //empty constructor
    TournamentMember(const char newFirstname[36], const char newLastname[36], const char newBirthdate[11],
    const std::string newGender, const double newHeight);
    TournamentMember(const TournamentMember& ); //copy constructor
    ~TournamentMember(); //destructor
    //setters
    void setFirstname(const char newFirstname[36]);
    void setLastname(char newLastname[36]);
    void setBirthdate(char newBirthdate[11]);
    void setGender(std::string newGender);
    void setHeight(double newHeight);
    //getters
    char getFirstname() const;
    char getLastname() const;
    char getBirthdate() const;
    double getHeight() const;
    std::string getGender() const;

    
    void print();
    static void newLocation(const std::string newlocation);


};

//inline used for setters and getters
inline void TournamentMember::setFirstname(const char newFirstname[36]){
    firstname[36] = newFirstname[36];

}
inline void TournamentMember::setLastname(char newLastname[36]){
    lastname[36] = newLastname[36];
}
inline void TournamentMember::setBirthdate(char newBirthdate[11]){
    birthdate[11] = newBirthdate[11];
}
inline void TournamentMember::setGender(std::string newGender){
    gender = newGender;
}
inline void TournamentMember::setHeight(double newHeight){
    height = newHeight;
}
inline char TournamentMember::getFirstname() const{
    return firstname[36];
}
inline char TournamentMember::getLastname() const{
    return lastname[36];
}
inline char TournamentMember::getBirthdate() const{
    return birthdate[36];
}
inline double TournamentMember::getHeight() const{
    return height;
}
inline std::string TournamentMember::getGender() const{
    return gender;
}
 

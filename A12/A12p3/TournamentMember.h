/*
CH-230-A
a12_p3.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
#include <cstring>


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
      void setLocation(std::string newLocation);
    //getters
    char getFirstname() const;
    char getLastname() const;
    char getBirthdate() const;
    double getHeight() const;
    std::string getGender() const;
    std::string getLocation()const;

    
    void print();
    static void newLocation(const std::string newlocation);

};
class Player : public TournamentMember{
private:
    int number;
    char position[20];
    int goal;
    std::string foot;
public:
    Player(); //empty constructor
    Player(const char newFirstname[36], const char newLastname[36], const char newBirthdate[11],
    const std::string newGender, const double newHeight, const int newNumber, const char newPosition[20], int newGoal, std::string newFoot);
    Player(const Player& );// copy constructor
    ~Player(); //destructor

    void setNumber(int newNumber);
    void setPosition(char newPosition[20]);
    void setGoal(int newGoal);
    void setFoot(std::string newFoot);
  
    int getNumber() const;
    char getPosition() const;
    int getGoal() const;
    std::string getFoot()const;
    void increment(int g);
    void print() const;

};

//inline used for setters and getters
inline void TournamentMember::setFirstname( const char newFirstname[36]){
    strcpy(firstname, newFirstname);

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
inline void TournamentMember::setLocation(std::string newLocation){
    location = newLocation;
}
inline std::string TournamentMember::getLocation() const {
    return location;
}
inline char TournamentMember::getFirstname()const{
    return firstname[36];
}
inline char TournamentMember::getLastname() const{
    return lastname[36];
}
inline char TournamentMember::getBirthdate() const{
    return birthdate[11];
}
inline double TournamentMember::getHeight() const{
    return height;
}
inline std::string TournamentMember::getGender() const{
    return gender;
}
 


inline void Player::setNumber(int newNumber) {
    number = newNumber;
}
inline void Player::setPosition(char newPosition[20]){
    position[20] = newPosition[20];
}
inline void Player::setGoal(int newGoal){
    goal = newGoal;
}
inline void Player::setFoot(std::string newFoot){
    foot = newFoot;
}

inline int Player::getNumber() const{
    return number;
}
inline char Player::getPosition() const{
    return position[20];
}
inline int Player::getGoal()const{
    return goal;
    }
inline std::string Player::getFoot() const{
    return foot;
}

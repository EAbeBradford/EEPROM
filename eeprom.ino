//eeprom notes
//not available everywhare aka not on ardrino zero
//small storage on uno aka 1024 bytes
//basically only store small values infrequently

//can only write to addresses 100000 times 
//DO NOT USE: frequently in loop or in infinate loop that goes fast
#include <EEPROM.h>//making it so we can us the library to store things on ardruno


void setup() {
  // put your setup code here, to run once:
  // first param:adreess range:0-1023
  //2nd param : value one byte from 0-255
    //EEPROM.write(0, 44);
    //EEPROM.write(200, 150);
Serial.begin(9600);
Serial.println(EEPROM.read(0)); //prints 44
Serial.println(EEPROM.read(45));//prints 255(default)

Serial.println(EEPROM.read(200));//prints 150



}

void loop() {
  // put your main code here, to run repeatedly:

}

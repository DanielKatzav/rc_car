//
// Created by daniel on 2/4/24.
//

#ifndef RC_CAR_NRF240L_H
#define RC_CAR_NRF240L_H

#include <iostream>

enum transmitResult
{

};
enum receiveResult
{

};

class nrf240l {
private:

public:
    nrf240l();

    virtual ~nrf240l();

private:


public:
    transmitResult transmitPacket(uint8_t* payload, size_t paload_size);
    receiveResult receivePacket(uint8_t* payload, size_t paload_size);


};


#endif //RC_CAR_NRF240L_H

//
//  contact.hpp
//  CS331_HW03
//
//  Created by Yongqiang Chen on 10/30/19.
//  Copyright © 2019 Yongqiang Chen. All rights reserved.
//

#ifndef contact_h_
#define contact_h_

#include <QObject>

class Contact
{
public:
    int category;
    QString firstName;
    QString lastName;
    QString street;
    QString city;
    QString zipCode;
    QString phoneNumber;

public:
    Contact();
    QString toString();
};

#endif /* contact_hpp */

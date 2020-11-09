//
// Created by Kostantin Alaev on 09.11.2020.
//

#ifndef HOMEWORK9_ALAEV_H
#define HOMEWORK9_ALAEV_H

#include <string>

class Alaev {
public:
    // Init m_txt
    explicit Alaev(std::string input);

    // For hierarchy
    virtual ~Alaev();
protected:
    // buffer
    std::wstring m_txt;
};


#endif //HOMEWORK9_ALAEV_H

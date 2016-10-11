//
// ICrypt.hpp for ICrypt in /Users/noboud_n/Documents/Share/PamModuleCpp/inc/
//
// Made by Nyrandone Noboud-Inpeng
// Login   <noboud_n@epitech.eu>
//
// Started on  Tue Oct 11 15:24:12 2016 Nyrandone Noboud-Inpeng
// Last update Tue Oct 11 16:40:31 2016 Nyrandone Noboud-Inpeng
//

#ifndef ICRYPT_HPP_
# define ICRYPT_HPP_

# include <iostream>

using namespace std;

class ICrypt {

  public:
    virtual               ~ICrypt() {};

    virtual int           init() = 0;
    virtual int           encrypt(const string &) = 0;
    virtual int           decrypt(const string &, int const) = 0;

  private:
    virtual int           getFileContentSize(const string &) = 0;
};

#endif /* !ICRYPT_HPP_ */

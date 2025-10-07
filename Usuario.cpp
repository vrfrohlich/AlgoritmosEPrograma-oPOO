//#ifndef USUARIO_H
//#define USUARIO_H

#include "Usuario.h"
//#include "Album.h"


Usuario::Usuario()
{
    nomeDeUsuario = "";
    senha = "";
    album;
}

/*
Usuario::Usuario (string nomeDeUsuario,  string senha)
{
    this->nomeDeUsuario = nomeDeUsuario;
    this->senha = senha;
   // this->album = album;
}*/

Usuario::~Usuario(){}


string Usuario::getNomeDeUsuario(){
    return nomeDeUsuario;
}

//Estou com dúvidas se é assim mesmo
void Album getAlbum()
{
    return album;
}

//Cadastro de usuario e senha
//Provavelmente isso será armazenado em algum lugar, tem que ver onde 
void cadastrar ()//string nomeDeUsuario,  string senha)
{
                cout << "\nQual o seu nome? " << endl;
                cin >>  nomeDeUsuario;
                cout << "\nCrie uma senha para o seu usuario: " << endl;
                cin >> senha;
                //Provavelmente isso será armazenado em algum lugar, tem que ver onde 

}

//#endif
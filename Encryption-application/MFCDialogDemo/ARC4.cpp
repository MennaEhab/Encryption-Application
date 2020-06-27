#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ARC4.h"
#include <iostream>
#include <sstream>



using namespace std;

/* struct used in convert char* to hex  */

struct HexCharStruct
{
    unsigned char c;
    HexCharStruct(unsigned char _c) : c(_c) { }
};

inline std::ostream& operator<<(std::ostream& o, const HexCharStruct& hs)
{
    return (o << hex << (int)hs.c);
}

inline HexCharStruct hex(unsigned char _c)
{
    return HexCharStruct(_c);
}





std::vector< char > ARC4::prga(int size){
    std::vector< char > keys(size);

    for(int k=0;k<size;k++){

        prgaIndexA=(prgaIndexA+1)%256;
        prgaIndexB=(prgaIndexB+sbox[prgaIndexA])%256;
        swap(sbox,prgaIndexA,prgaIndexB);
        keys[k] = sbox[(sbox[prgaIndexA] + sbox[prgaIndexB]) % 256];
        
    }

    return keys;
}


void ARC4::encrypt(unsigned char * plaintext,unsigned char * ciphertext,int size){

    std::vector< char > keys(size);
    keys =  prga(size);

    for (int i = 0; i < size; i++) 
    {
        ciphertext[i] = keys[i] ^ plaintext[i];
    }
}

ARC4::ARC4(){
}
void ARC4::swap(unsigned char data[],int i ,int j){
    unsigned char temp=data[i];
    data[i]=data[j];
    data[j]=temp;
}


void ARC4::ksa(unsigned char * key){

    int j=0;

    for(int i=0;i<256;i++){
        j=(j+sbox[i]+key[i% sizeKey])%256;
        swap(sbox,i,j);
    }
}


void ARC4::setKey(unsigned char  k[],int size){
    prgaIndexA=0;
    prgaIndexB=0;
    sizeKey=size;

    for(int i=0;i<256;i++){
        sbox[i]=(unsigned char)i;
    }
    ksa(k);
}


std::string ARC4::EncryptedText_to_hexString(unsigned char* encrepted_text, int size)
{
    string Encrypted_string;

    stringstream Encrypted_stream;

    for (int i = 0; i < size; i++)
    {
        Encrypted_stream << hex << hex(encrepted_text[i]) << " " ;
    }

    return Encrypted_string = Encrypted_stream.str();

}
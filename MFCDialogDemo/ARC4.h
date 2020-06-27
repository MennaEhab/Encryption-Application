
#ifndef ARC4_H_
#define ARC4_H_
#include <string>
#include <vector>

    /**
    * RC4 Encryptor utility for decrypting Strings
    * @brief Utility to RC4 encrypt bytes
    */
    class ARC4{
        public:

            ARC4();

            /* function to set the key for encryption */
            void setKey(unsigned char * k,int size);

            /* encryption intiation function  */
            void encrypt(unsigned char * in,unsigned char * out,int size);
         

            /*function to convert the output of encryption to hex string */

            std::string  EncryptedText_to_hexString(unsigned char* encrepted_text, int size);

           
        protected:

            /*Key-scheduling algorithm (KSA) , the intial permutation function of the key*/
            void ksa(unsigned char * key);
            
            void swap(unsigned char data[],int i ,int j);

            /* Pseudo-random generation algorithm  to generate key */

            std::vector< char > prga(int size);

            unsigned char sbox[256];

            int sizeKey,prgaIndexA,prgaIndexB;
    };



#endif /* ARC4_H_ */

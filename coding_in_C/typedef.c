#include <stdio.h>

    typedef struct 
    {
        char nickname[15];
        char password[10];
        int id ;
    }Login;
    int main(){
        Login account1 = {"archerybow1","arrow123",123456789};
        printf("Kullanıcı adı: %s\n",account1.nickname);
        printf("Şifre: %s\n",account1.password);
        printf("id: %d",account1.id);
    return 0;
    }
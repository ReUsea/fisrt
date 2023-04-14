#include<iostream>
#include<stdio.h>
#include<openssl/sm3.h>
#include<openssl/sm9.h>
using namespace std;

int main()
{
    cout<< "hello world"<<endl;
    sm3_ctx_t ctx;
	uint8_t buf[4096];
	size_t len;
	uint8_t dgst[32];
	int i;

	sm3_init(&ctx);
	sm3_update(&ctx, buf, len);
	sm3_final(&ctx, dgst);

	for (i = 0; i < sizeof(dgst); i++) {
		printf("%02x", dgst[i]);
	}
	printf("\n");
	return 0;
    
    int a = 10;
    printf("de");
    return 0;

}
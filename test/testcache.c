/*
 * =====================================================================================
 *
 *       Filename:  testcache.c
 *
 *    Description:  This is for testing the cache.c and cache.h
 *
 *        Version:  1.0
 *        Created:  2012年01月06日 15时42分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  JunBian Chen (mn), junmingabc@gmail.com
 *        Company:  SCUT
 *
 * =====================================================================================
 */
typedef unsigned int		uint32_t;
#include "cache.h"
#include "stdio.h"
#include <stdlib.h>
#include <assert.h>
void testCreateCached(){
	char *name = "imichael";
	cache_t *cache = cache_create(name ,sizeof(uint32_t),sizeof(char*),NULL,NULL);
    assert(cache != NULL);
    printf("uunit32_t :%i\n",sizeof(uint32_t));
    printf("char* size :%i\n",sizeof(char*));
    printf("name :%s\n",cache->name );
    printf("bufsize:%i\n",cache->bufsize);
    printf("freetotal:%i\n",cache->freetotal);
    printf("freecurr:%i\n",cache->freecurr);
    
    cache_destroy(cache);
    return ;

}
int 
main(int argc ,char *argv[]){
testCreateCached();
return 0;
}

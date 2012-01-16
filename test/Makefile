#testcache: testcache.o cache.o 
#	gcc testcache.o cache.o -o testcache
#testcache.o: testcache.c cache.h
#	gcc -c testcache.c 
#cache.o: cache.c cache.h
#	gcc -c cache.c
hash: hash.o
	gcc hash.o -o hash
hash.o: hash.c hash.h memcached.h protocol_binary.h cache.h sasl_defs.h stats.h slabs.h assoc.h items.h trace.h util.h
	gcc -c hash.c

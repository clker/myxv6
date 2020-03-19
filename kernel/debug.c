#include "types.h"
#include "riscv.h"
#include "defs.h"

void dump_mem(void *a, uint64 size){
	int i = 0;
	for(;i<size;a+=8,i+=8){
		printf("%p:%p\n",a,*(uint64*)a);
	}
}

void print_pagetable_content(void *a){
	dump_mem(a,4096);
}
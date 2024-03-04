#include <stdio.h>
#include <stdlib.h>


#include "engine/rpc.h"


int main(int argc, char *argv[])
{

    // sabotuer_engine_init("saboteur_config.json");

    // sabotuer_engine_start();

    char *ret = rpc_exec(argv[1]);
    printf("ret is \'%s\'\n", ret);
    free(ret);

    return 0;
}
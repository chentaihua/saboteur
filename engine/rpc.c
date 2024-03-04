#include "rpc.h"


char *rpc_exec(char *input)
{
    cJSON *root;
    cJSON *ret = cJSON_CreateObject();;
    char *output;

    /* parse json */
    if((root = cJSON_Parse(input)) == NULL)
    {
        cJSON_AddNullToObject(ret, "id");
        cJSON *error = cJSON_AddArrayToObject(ret, "error");
        cJSON_AddNumberToObject(error, "code", -32700);
        cJSON_AddStringToObject(error, "message", "Parse error");
        goto end;
    }

    cJSON_AddNumberToObject(ret, "id", 1);
    cJSON_AddStringToObject(ret, "result", "Parse pass");
    goto end;


end:
    output = cJSON_PrintUnformatted(ret);
    cJSON_Delete(ret);
    return output;
}
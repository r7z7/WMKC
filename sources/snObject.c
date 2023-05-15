#include <snObject.h>

SN_PUBLIC(snError) snObject_new SN_OPEN_API
SN_FUNC_OF((snObject **obj, snSize _memory_size, snBool _Clear_memory))
{
    if(!(*obj = (snObject *)malloc(sizeof(snObject)))) {
        return snErr_Memory;
    }

    if(_memory_size) {
        if(!((*obj)->buf = (snByte *)malloc(_memory_size))) {
            return snErr_Memory;
        }
        if(_Clear_memory) {
            memset((*obj)->buf, 0x00, _memory_size);
        }
    } else {
        (*obj)->buf = snNull;
        (*obj)->size = 0;
    }
    (*obj)->memory_size = _memory_size;

    return snErr_OK;
}

SN_PUBLIC(snVoid) snObject_release SN_OPEN_API
SN_FUNC_OF((snObject **obj, sn_u32 instruction))
{
    if(instruction == SN_RELEASE_NORMAL) {
        free((*obj)->buf);
        (*obj)->buf = snNull;
    }
    free(*obj);
    *obj = snNull;
}
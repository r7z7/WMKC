#include <snKey.h>

SN_PRIVATE_CONST(snByte) snKey_SBOX[256] = {
    0x63, 0x10, 0x6f, 0xcc, 0x70, 0x2b, 0xfc, 0x40, 0xda, 0x5b, 0x31, 0xaf, 0x54, 0xc0, 0xdd, 0xfa,
    0x16, 0xbf, 0x8f, 0x1c, 0x61, 0xf9, 0x77, 0xf6, 0x85, 0x5a, 0x4c, 0x1b, 0x30, 0x27, 0x01, 0x4e,
    0x9d, 0x71, 0xf3, 0x6d, 0x7a, 0x15, 0x73, 0x60, 0x92, 0xce, 0x37, 0x72, 0x32, 0x35, 0xea, 0xa3,
    0x84, 0x68, 0x3f, 0x55, 0x0a, 0x0b, 0x24, 0xe0, 0x4f, 0x5f, 0x69, 0x67, 0x59, 0x8e, 0xf1, 0x21,
    0xf5, 0x49, 0xe5, 0x4d, 0x80, 0xa6, 0x6a, 0x0f, 0xf7, 0x8c, 0xc1, 0xc6, 0xa0, 0x08, 0xab, 0xd3,
    0x05, 0xf4, 0x3a, 0x9a, 0x91, 0x0d, 0x4b, 0xd0, 0x6e, 0x79, 0x07, 0xd2, 0x87, 0x11, 0xf0, 0x1a,
    0xc7, 0xb7, 0x03, 0x39, 0x1d, 0x53, 0x28, 0xbd, 0xec, 0xb8, 0xfe, 0x04, 0x9c, 0x7e, 0x62, 0x06,
    0xd5, 0xe4, 0x7c, 0xfb, 0x74, 0x9f, 0xca, 0x18, 0xff, 0xb2, 0x0c, 0xa1, 0x86, 0x36, 0xc8, 0x9e,
    0xb0, 0x9b, 0x2e, 0x33, 0x48, 0x09, 0xdf, 0xef, 0x23, 0x3d, 0xc9, 0xa4, 0x56, 0xb5, 0x8b, 0xa2,
    0x3c, 0x76, 0x82, 0xb3, 0x2a, 0x26, 0x83, 0x98, 0x64, 0x81, 0xbe, 0xe6, 0x38, 0xe1, 0xf8, 0x58,
    0xb4, 0xd1, 0xc2, 0x96, 0xdb, 0x93, 0x19, 0xac, 0x52, 0xae, 0x0e, 0xe3, 0xa8, 0x51, 0x88, 0xd6,
    0xeb, 0x22, 0x20, 0x8d, 0x1e, 0x2d, 0x3e, 0x43, 0xc3, 0x78, 0x45, 0xa7, 0xde, 0x57, 0x44, 0xbb,
    0x13, 0xa9, 0x94, 0x14, 0x7f, 0x25, 0x7b, 0x5d, 0x42, 0x34, 0xee, 0x97, 0xb9, 0x29, 0xed, 0x2f,
    0xd9, 0xad, 0xfd, 0xe9, 0xc5, 0xd4, 0x99, 0xbc, 0xe8, 0xc4, 0xd7, 0xcd, 0xd8, 0xdc, 0xf2, 0x02,
    0x89, 0x90, 0x50, 0x1f, 0x41, 0xb1, 0xba, 0x8a, 0x95, 0xb6, 0xe2, 0xcb, 0xa5, 0x6b, 0x6c, 0x46,
    0x5c, 0x65, 0x75, 0x2c, 0x5e, 0x3b, 0x7d, 0x12, 0xaa, 0x17, 0xcf, 0x47, 0xe7, 0x4a, 0x00, 0x66
};

SN_PRIVATE_CONST(snByte) snKey_RSBOX[256] = {
    0xfe, 0x1e, 0xdf, 0x62, 0x6b, 0x50, 0x6f, 0x5a, 0x4d, 0x85, 0x34, 0x35, 0x7a, 0x55, 0xaa, 0x47,
    0x01, 0x5d, 0xf7, 0xc0, 0xc3, 0x25, 0x10, 0xf9, 0x77, 0xa6, 0x5f, 0x1b, 0x13, 0x64, 0xb4, 0xe3,
    0xb2, 0x3f, 0xb1, 0x88, 0x36, 0xc5, 0x95, 0x1d, 0x66, 0xcd, 0x94, 0x05, 0xf3, 0xb5, 0x82, 0xcf,
    0x1c, 0x0a, 0x2c, 0x83, 0xc9, 0x2d, 0x7d, 0x2a, 0x9c, 0x63, 0x52, 0xf5, 0x90, 0x89, 0xb6, 0x32,
    0x07, 0xe4, 0xc8, 0xb7, 0xbe, 0xba, 0xef, 0xfb, 0x84, 0x41, 0xfd, 0x56, 0x1a, 0x43, 0x1f, 0x38,
    0xe2, 0xad, 0xa8, 0x65, 0x0c, 0x33, 0x8c, 0xbd, 0x9f, 0x3c, 0x19, 0x09, 0xf0, 0xc7, 0xf4, 0x39,
    0x27, 0x14, 0x6e, 0x00, 0x98, 0xf1, 0xff, 0x3b, 0x31, 0x3a, 0x46, 0xed, 0xee, 0x23, 0x58, 0x02,
    0x04, 0x21, 0x2b, 0x26, 0x74, 0xf2, 0x91, 0x16, 0xb9, 0x59, 0x24, 0xc6, 0x72, 0xf6, 0x6d, 0xc4,
    0x44, 0x99, 0x92, 0x96, 0x30, 0x18, 0x7c, 0x5c, 0xae, 0xe0, 0xe7, 0x8e, 0x49, 0xb3, 0x3d, 0x12,
    0xe1, 0x54, 0x28, 0xa5, 0xc2, 0xe8, 0xa3, 0xcb, 0x97, 0xd6, 0x53, 0x81, 0x6c, 0x20, 0x7f, 0x75,
    0x4c, 0x7b, 0x8f, 0x2f, 0x8b, 0xec, 0x45, 0xbb, 0xac, 0xc1, 0xf8, 0x4e, 0xa7, 0xd1, 0xa9, 0x0b,
    0x80, 0xe5, 0x79, 0x93, 0xa0, 0x8d, 0xe9, 0x61, 0x69, 0xcc, 0xe6, 0xbf, 0xd7, 0x67, 0x9a, 0x11,
    0x0d, 0x4a, 0xa2, 0xb8, 0xd9, 0xd4, 0x4b, 0x60, 0x7e, 0x8a, 0x76, 0xeb, 0x03, 0xdb, 0x29, 0xfa,
    0x57, 0xa1, 0x5b, 0x4f, 0xd5, 0x70, 0xaf, 0xda, 0xdc, 0xd0, 0x08, 0xa4, 0xdd, 0x0e, 0xbc, 0x86,
    0x37, 0x9d, 0xea, 0xab, 0x71, 0x42, 0x9b, 0xfc, 0xd8, 0xd3, 0x2e, 0xb0, 0x68, 0xce, 0xca, 0x87,
    0x5e, 0x3e, 0xde, 0x22, 0x51, 0x40, 0x17, 0x48, 0x9e, 0x15, 0x0f, 0x73, 0x06, 0xd2, 0x6a, 0x78
};

SN_PRIVATE(snVoid) _snKey_SubBytes
SN_FUNC_OF((snKey_state *buf))
{
    (*buf)[0][0] = snKey_SBOX[(*buf)[0][0]];
    (*buf)[0][1] = snKey_SBOX[(*buf)[0][1]];
    (*buf)[1][0] = snKey_SBOX[(*buf)[1][0]];
    (*buf)[1][1] = snKey_SBOX[(*buf)[1][1]];
}

SN_PRIVATE(snVoid) _snKey_InvSubBytes
SN_FUNC_OF((snKey_state *buf))
{
    (*buf)[0][0] = snKey_RSBOX[(*buf)[0][0]];
    (*buf)[0][1] = snKey_RSBOX[(*buf)[0][1]];
    (*buf)[1][0] = snKey_RSBOX[(*buf)[1][0]];
    (*buf)[1][1] = snKey_RSBOX[(*buf)[1][1]];
}

SN_PRIVATE(snVoid) _snKey_MatrixRows
SN_FUNC_OF((snKey_state *buf))
{
    static snByte swap;
    swap = (*buf)[0][0];
    (*buf)[0][0] = (*buf)[0][1];
    (*buf)[0][1] = swap;
    swap = (*buf)[1][0];
    (*buf)[1][0] = (*buf)[1][1];
    (*buf)[1][1] = swap;
}

SN_PRIVATE(snVoid) _snKey_MatrixMixs
SN_FUNC_OF((snKey_state *buf))
{
    (*buf)[0][0] = (*buf)[0][0] ^ (*buf)[0][1] ^ (*buf)[1][0];
    (*buf)[0][1] = (*buf)[0][1] ^ (*buf)[1][0] ^ (*buf)[1][1];
    (*buf)[1][0] = (*buf)[1][0] ^ (*buf)[1][1] ^ (*buf)[0][0];
    (*buf)[1][1] = (*buf)[1][1] ^ (*buf)[0][0] ^ (*buf)[0][1];
}

SN_PRIVATE(snVoid) _snKey_InvMatrixMixs
SN_FUNC_OF((snKey_state *buf))
{
    (*buf)[1][1] = (*buf)[1][1] ^ (*buf)[0][0] ^ (*buf)[0][1];
    (*buf)[1][0] = (*buf)[1][0] ^ (*buf)[1][1] ^ (*buf)[0][0];
    (*buf)[0][1] = (*buf)[0][1] ^ (*buf)[1][0] ^ (*buf)[1][1];
    (*buf)[0][0] = (*buf)[0][0] ^ (*buf)[0][1] ^ (*buf)[1][0];
}

SN_PRIVATE(snVoid) _snKey_Cipher
SN_FUNC_OF((snKey_state *buf))
{
    for(sn_u32 x = 0; x < SN_KEY_ROUND; ++x) {
        _snKey_MatrixRows(buf);
        _snKey_SubBytes(buf);
        _snKey_MatrixMixs(buf);
    }
}

SN_PRIVATE(snVoid) _snKey_InvCipher
SN_FUNC_OF((snKey_state *buf))
{
    for(sn_u32 x = 0; x < SN_KEY_ROUND; ++x) {
        _snKey_InvMatrixMixs(buf);
        _snKey_InvSubBytes(buf);
        _snKey_MatrixRows(buf);
    }
}

SN_PUBLIC(snError) snKey_new SN_OPEN_API
SN_FUNC_OF((snKey_ctx **obj, snByte *key, snSize keySize, snBool mode))
{
    if(!(*obj)) {
        if(!((*obj) = (snKey_ctx *)malloc(sizeof(snKey_ctx)))) {
            return snErr_Memory;
        }
    }

    if(key && keySize) {
        if(!(*obj)->key) {
            if(!((*obj)->key = (snByte *)malloc(keySize))) {
                return snErr_Memory;
            }
        }
        memcpy((*obj)->key, key, keySize);
        (*obj)->size = keySize;
        (*obj)->mode = mode;
    }

    return snErr_OK;
}

SN_PUBLIC(snError) snKey_release SN_OPEN_API
SN_FUNC_OF((snKey_ctx **obj, sn_u32 instruction))
{
    if(instruction == SN_RELEASE_NORMAL) {
        free((*obj)->key);
        (*obj)->key = snNull;
    }
    free((*obj));
    (*obj) = snNull;

    return snErr_OK;
}

SN_PUBLIC(snVoid) snKey_CryptKey SN_OPEN_API
SN_FUNC_OF((snKey_ctx *obj))
{
    static snSize x;

    if(obj->mode) {
        for(x = 0; x < obj->size; x += 4)
            _snKey_Cipher((snKey_state *)(obj->key + x));
    } else {
        for(x = 0; x < obj->size; x += 4)
            _snKey_InvCipher((snKey_state *)(obj->key + x));
    }
}

SN_PUBLIC(snError) snKey_loadKey SN_OPEN_API
SN_FUNC_OF((snKey_ctx *obj, const snChar *fn))
{
    
}

SN_PUBLIC(snError) snKey_saveKey SN_OPEN_API
SN_FUNC_OF((snKey_ctx *obj, const snChar *fn))
{
    static snBase64_ctx *base64 = snNull;
    static snFile_ctx *file = snNull;
    snBase64_new(&base64);
    snFile_new(&file);

    // base64->src = obj->key;
    // base64->srcSize = obj->size;

    if(obj->mode == SN_KEY_MODE_ENCRYPT) {
        snKey_CryptKey(obj);
    }


    snBase64_release(&base64, SN_RELEASE_NO);
    snFile_release(&file, false);
}

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_Simon_catt2009_Sm2CryptoCls */

#ifndef _Included_com_Simon_catt2009_Sm2CryptoCls
#define _Included_com_Simon_catt2009_Sm2CryptoCls
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    SignBySm2Privatekey
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_SignBySm2Privatekey
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    VerifySm2SignatureByCert
 * Signature: ([B[B[B)I
 */
JNIEXPORT jint JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_VerifySm2SignatureByCert
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    VerifySm2SignatureByPubKey
 * Signature: ([B[B[B)I
 */
JNIEXPORT jint JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_VerifySm2SignatureByPubKey
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    GenerateSm2KeyPair
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_GenerateSm2KeyPair___3B
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    GenerateSm2KeyPair
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_GenerateSm2KeyPair___3B_3B
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    CalcSm2PublicKeyFromPrivateKey
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_CalcSm2PublicKeyFromPrivateKey
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    DecryptBySm2PrivateKey
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_DecryptBySm2PrivateKey
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    EncryptBySm2PublicKey
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_EncryptBySm2PublicKey
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    EncryptBySm2Cert
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_EncryptBySm2Cert
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    GetPublicKeyFromSm2Cert
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_GetPublicKeyFromSm2Cert
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    Sm3Hash
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_Sm3Hash
  (JNIEnv *, jobject, jbyteArray);



/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    getLibVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_getLibVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    getLastError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_getLastError
  (JNIEnv *, jobject);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    sm2PubKeyDerEncode
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_sm2PubKeyDerEncode
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    sm2PubkeyDerDecode
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_sm2PubkeyDerDecode
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    sm2PrivateKeyDerEncode
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_sm2PrivateKeyDerEncode
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    sm2PrivateKeyDerDecode
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_sm2PrivateKeyDerDecode
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    sm2CipherDerEncode
 * Signature: ([B[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_sm2CipherDerEncode
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    sm2CipherDerDecode
 * Signature: ([B[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_sm2CipherDerDecode
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    sm2SignatureDerEncode
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_sm2SignatureDerEncode
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_Simon_catt2009_Sm2CryptoCls
 * Method:    sm2SignatureDerDecode
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Simon_1catt2009_Sm2CryptoCls_sm2SignatureDerDecode
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif

#include <jni.h>

JNIEXPORT jstring JNICALL
Java_loipn_helloandroidjni_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "Hello From Jni");
}
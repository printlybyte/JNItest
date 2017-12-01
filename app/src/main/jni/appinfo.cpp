//
// Created by Administrator on 2017/11/21.
//
#include <stdio.h>
#include <jni.h>
#include <stdlib.h>
#include <com_mj_jnitest_JNIUtils.h>

JNIEXPORT jstring JNICALL Java_com_mj_jnitest_JNIUtils_getString(JNIEnv * env, jclass jclass){
    return env -> NewStringUTF(" THIS   JNI");
}
JNIEXPORT jstring JNICALL Java_com_mj_jnitest_JNIUtils_getString2(JNIEnv * env, jclass jclass){
    return env -> NewStringUTF(" THIS   JNI2");
}


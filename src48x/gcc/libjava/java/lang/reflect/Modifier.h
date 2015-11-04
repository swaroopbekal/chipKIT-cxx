
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_reflect_Modifier__
#define __java_lang_reflect_Modifier__

#pragma interface

#include <java/lang/Object.h>

class java::lang::reflect::Modifier : public ::java::lang::Object
{

public:
  Modifier();
  static jboolean isAbstract(jint);
  static jboolean isFinal(jint);
  static jboolean isInterface(jint);
  static jboolean isNative(jint);
  static jboolean isPrivate(jint);
  static jboolean isProtected(jint);
  static jboolean isPublic(jint);
  static jboolean isStatic(jint);
  static jboolean isStrict(jint);
  static jboolean isSynchronized(jint);
  static jboolean isTransient(jint);
  static jboolean isVolatile(jint);
  static ::java::lang::String * toString(jint);
public: // actually package-private
  static ::java::lang::StringBuilder * toString(jint, ::java::lang::StringBuilder *);
  static ::java::lang::StringBuffer * toString(jint, ::java::lang::StringBuffer *);
public:
  static const jint PUBLIC = 1;
  static const jint PRIVATE = 2;
  static const jint PROTECTED = 4;
  static const jint STATIC = 8;
  static const jint FINAL = 16;
  static const jint SYNCHRONIZED = 32;
  static const jint VOLATILE = 64;
  static const jint TRANSIENT = 128;
  static const jint NATIVE = 256;
  static const jint INTERFACE = 512;
  static const jint ABSTRACT = 1024;
  static const jint STRICT = 2048;
public: // actually package-private
  static const jint SUPER = 32;
  static const jint ALL_FLAGS = 4095;
  static const jint BRIDGE = 64;
  static const jint VARARGS = 128;
  static const jint SYNTHETIC = 4096;
  static const jint ENUM = 16384;
  static const jint INVISIBLE = 32768;
  static const jint INTERPRETED = 4096;
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_reflect_Modifier__
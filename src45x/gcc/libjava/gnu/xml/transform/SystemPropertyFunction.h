
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_transform_SystemPropertyFunction__
#define __gnu_xml_transform_SystemPropertyFunction__

#pragma interface

#include <gnu/xml/xpath/Expr.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace transform
      {
          class SystemPropertyFunction;
      }
      namespace xpath
      {
          class Expr;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class QName;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class gnu::xml::transform::SystemPropertyFunction : public ::gnu::xml::xpath::Expr
{

public: // actually package-private
  SystemPropertyFunction();
public:
  ::java::lang::Object * evaluate(::java::util::List *);
  void setArguments(::java::util::List *);
  ::java::lang::Object * evaluate(::org::w3c::dom::Node *, jint, jint);
public: // actually package-private
  ::java::lang::Object * systemProperty(::javax::xml::namespace$::QName *);
public:
  ::gnu::xml::xpath::Expr * clone(::java::lang::Object *);
  jboolean references(::javax::xml::namespace$::QName *);
public: // actually package-private
  ::java::util::List * __attribute__((aligned(__alignof__( ::gnu::xml::xpath::Expr)))) args;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_transform_SystemPropertyFunction__
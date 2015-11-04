
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_peer_PopupMenuPeer__
#define __java_awt_peer_PopupMenuPeer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Event;
        class Font;
        class MenuItem;
      namespace peer
      {
          class PopupMenuPeer;
      }
    }
  }
}

class java::awt::peer::PopupMenuPeer : public ::java::lang::Object
{

public:
  virtual void show(::java::awt::Component *, jint, jint) = 0;
  virtual void show(::java::awt::Event *) = 0;
  virtual void addItem(::java::awt::MenuItem *) = 0;
  virtual void addSeparator() = 0;
  virtual void delItem(jint) = 0;
  virtual void disable() = 0;
  virtual void enable() = 0;
  virtual void setEnabled(jboolean) = 0;
  virtual void setLabel(::java::lang::String *) = 0;
  virtual void dispose() = 0;
  virtual void setFont(::java::awt::Font *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_awt_peer_PopupMenuPeer__
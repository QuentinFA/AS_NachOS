#ifdef CHANGED
#ifndef SYNCHCONSOLE_H
#define SYNCHCONSOLE_H

#include "copyright.h"
#include "utility.h"
#include "console.h"
#include "synch.h"

class SynchConsole {
   public:
      SynchConsole(char *readFile, char *writeFile);
      // initialize the hardware console device
      ~SynchConsole();
      void SynchPutChar(const char ch);
      char SynchGetChar();
      // clean up console emulation
      // Unix putchar(3S)
      // Unix getchar(3S)
      void SynchPutString(const char *s); // Unix puts(3S)
      void SynchGetString(char *s, int n);

      void SynchPutInt(int n);
      int SynchGetInt(int* res);


   private:
      Console *console;
      Semaphore *read;
      Semaphore *write;
};

#endif // SYNCHCONSOLE_H
#endif // CHANGED

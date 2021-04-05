/**
 * @file Main.cpp
 *
 *   Main Code
 *
 * @version $Revision$
 * @author JLJuang <juangjl2009@gmail.com>
 * @note Copyright (c) 2021, JSoftLab, all rights reserved.
 * @note
*/
///------------------------------------------///
///  Include Area
///------------------------------------------///
#include "Global.h"

///-------------------------------------------------///
/// @Function: Main Init
/// @Brief: Main Init
///-------------------------------------------------///
void MainInit()
{  
  printf("\r\n");
	printf("\tSummation(V1.0)\r\n");
  printf("\tprogrammed by JL JUANG\r\n");
}

///-------------------------------------------------///
/// @Function: Main
/// @Brief: Main Entry
///-------------------------------------------------///
int main( int argc, char *argv[] )
{
  const JINT iStart = 1;
  const JINT iEnd   = 100;  
  JINT i    = 0;
  JINT iSum = 0;

  MainInit();

  ///--------------------------///
  /// Main function
  ///--------------------------///
  for(i = iStart; i <= iEnd; i = i + 1)
  {
    iSum = iSum + i;
  }
  printf("\t The Sumation from %d to %d equals %d\r\n", iStart, iEnd, iSum);


  return 0;
}

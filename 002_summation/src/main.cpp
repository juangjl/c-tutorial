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

///------------------------------------------///
///  Macro area
///------------------------------------------///
#define SUMMATION_START_VALUE   (1)
#define SUMMATION_STEPS         (100)

///-------------------------------------------------///
/// @Function: Main Init
/// @Brief: Main Init
///-------------------------------------------------///
void MainInit(void)
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
  JINT iStart = SUMMATION_START_VALUE;
  JINT iCount = SUMMATION_STEPS;

  JINT i      = 0;
  JINT iSum   = 0;
  JINT iVal   = 0;

  JFLOAT fAvg = 0.0;

  MainInit();

  ///--------------------------///
  /// Summation
  ///--------------------------///
  for(i = 0 ; i < iCount; i = i + 1)
  {
    iVal = (i + iStart);
    iSum = iSum + iVal;
  }
  printf("\tThe Sumation from %d to %d equals %d\r\n", iStart, iVal,  iSum);

  ///--------------------------///
  /// Average
  ///--------------------------///
  fAvg = (JFLOAT)(iSum) / (JFLOAT) (iCount);
  printf("\tAverage =  %0.1f\r\n", fAvg);

  return 0;
}

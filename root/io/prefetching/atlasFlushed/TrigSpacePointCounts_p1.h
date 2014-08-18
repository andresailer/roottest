//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigSpacePointCounts_p1_h
#define TrigSpacePointCounts_p1_h
class TrigSpacePointCounts_p1;

#include "TNamed.h"

class TrigSpacePointCounts_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   int         m_pixSPcnt;    //
   int         m_pixCL1cnt;    //
   int         m_pixCL2cnt;    //
   int         m_pixCLmin3cnt;    //
   int         m_SPpixBarr_cnt;    //
   int         m_SPpixECAcnt;      //
   int         m_SPpixECCcnt;      //
   int         m_sctSPcnt;         //
   int         m_SPsctBarr_cnt;    //
   int         m_SPsctECAcnt;      //
   int         m_SPsctECCcnt;      //

   TrigSpacePointCounts_p1();
   TrigSpacePointCounts_p1(const TrigSpacePointCounts_p1 & );
   virtual ~TrigSpacePointCounts_p1();

};
#endif
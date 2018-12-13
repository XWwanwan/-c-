#include "timee.h"
using namespace std;
timee::timee()
{
    time_t rawtime;
        struct tm *ptminfo;

        time(&rawtime);
        ptminfo = localtime(&rawtime);
        hour=ptminfo->tm_hour ;
        minute=ptminfo->tm_min + 1;
        second=ptminfo->tm_sec;
}

#include <aygshell.h>


void ShowSIP(void)
{
    BOOL    fRes = FALSE;
    SIPINFO    si;

    memset(&si, 0, sizeof(si));

    si.cbSize = sizeof(si);

    if (SHSipInfo(SPI_GETSIPINFO, 0, &si, 0))
    {
        si.fdwFlags |= SIPF_ON;
        fRes = SHSipInfo(SPI_SETSIPINFO, 0, &si, 0);
    }
}

void HideSIP(void)
{
    BOOL    fRes = FALSE;
    SIPINFO    si;

    memset(&si, 0, sizeof(si));

    si.cbSize = sizeof(si);

    if (SHSipInfo(SPI_GETSIPINFO, 0, &si, 0))
    {
        si.fdwFlags &= ~SIPF_ON;
        fRes = SHSipInfo(SPI_SETSIPINFO, 0, &si, 0);
    }
}
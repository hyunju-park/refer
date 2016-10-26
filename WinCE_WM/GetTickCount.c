DWORD GetTestFUNCTION()
{
    //Test Function 
    DWORD   dwStartTick;
    DWORD   dwEndTick;

    dwStartTick = GetTickCount();
    TestFunction();
    dwEndTick = GetTickCount();
    return dwEndTick - dwStartTick;
}


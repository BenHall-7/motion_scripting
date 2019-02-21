void func_2239()
{
    func_20(0);
    GroundModuleImpl(0x2710, 0x1);
}

void func_2240()
{
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
}

void func_2241()
{
    func_20(0);
    GroundModuleImpl(0x2710, 0x2);
}

void func_2242()
{
    if (global18 == 0)
    {
        func_2243();
    }
    else
    {
        func_2244();
    }
}

void func_2243()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x10000086);
    if (!WorkModuleImpl.is_flag(0x20000078))
    {
        func_22(var0, 0, 1.0f);
        WorkModuleImpl.on_flag2(0x20000078);
    }
    else
    {
        func_23(var0);
    }
}

void func_2244()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x10000087);
    if (!WorkModuleImpl.is_flag(0x20000078))
    {
        func_22(var0, 0, 1.0f);
        WorkModuleImpl.on_flag2(0x20000078);
    }
    else
    {
        func_23(var0);
    }
}

void func_2245()
{
    WorkModuleImpl.off_flag2(0x20000078);
}

void func_2246()
{
    WorkModuleImpl.off_flag2(0x20000079);
    WorkModuleImpl.off_flag2(0x2000007a);
    WorkModuleImpl.off_flag2(0x2000007b);
    WorkModuleImpl.off_flag2(0x2000007c);
}

int func_2247()
{
    if (WorkModuleImpl.is_flag(0x20000079) || WorkModuleImpl.is_flag(0x2000007a) || WorkModuleImpl.is_flag(0x2000007b) || WorkModuleImpl.is_flag(0x2000007c))
    {
        return 0x1;
    }
    return 0;
}

int func_2248()
{
    if (WorkModuleImpl.is_flag(0x20000079) && global18 == 0x2 || WorkModuleImpl.is_flag(0x2000007a) && global18 == 0 || WorkModuleImpl.is_flag(0x2000007b) && MotionModuleImpl.is_end())
    {
        return 0x1;
    }
    if (WorkModuleImpl.is_flag(0x2000007c))
    {
        
    }
    return 0;
}

void func_2249()
{
    WorkModuleImpl.off_flag2(0x20000044);
    func_583();
}

void func_2250()
{
    int var0;
    int var1;
    int var2;
    var0 = 0;
    if (global4 == 0x18)
    {
        var1 = WorkModuleImpl.get_int(0x11000002) - 0x68;
        var2 = 0x6d + var1;
        if (var2 == 0x6d && WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            WorkModuleImpl.on_flag2(0x2000004e);
            var0 = 0x1;
        }
        else if (var2 == 0x6e && WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            WorkModuleImpl.on_flag2(0x2000004e);
            var0 = 0x1;
        }
        else if (var2 == 0x6f && WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            WorkModuleImpl.on_flag2(0x2000004e);
            var0 = 0x1;
        }
        else if (var2 == 0x70 && WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            WorkModuleImpl.on_flag2(0x2000004e);
            var0 = 0x1;
        }
        else if (var2 == 0x71 && WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            WorkModuleImpl.on_flag2(0x2000004e);
            var0 = 0x1;
        }
    }
    func_586();
    if (var0 == 0x1)
    {
        WorkModuleImpl.off_flag2(0x2000004e);
    }
}

void main()
{
    printf("ENTRY This Fighter is driven by msc.");
    func_0();
    global0 = sys_7(0);
    global1 = sys_7(0x1);
    func_2254();
    sys_0(0x2, func_1);
    sys_0(0x3, func_5);
    sys_0(0x4, func_10);
    set_main(func_73);
}

void func_2252()
{
    func_112();
    func_113();
    func_114();
    func_115();
    func_116();
    func_117();
    func_118();
    func_119();
    func_120();
    func_121();
    func_122();
}

void func_2253()
{
    global48 = 0;
    global32 = 0;
    global38 = 0;
    global24 = 0;
    global31 = 0;
    global29 = 0;
    global45 = 0;
    global50 = 0;
    global22 = 0;
    global51 = 0xffffffff;
    global52 = 0xffffffff;
    global53 = 0xffffffff;
    global54 = 0xffffffff;
    global55 = 0xffffffff;
    global33 = 0;
    global28 = 0;
    global25 = 0;
    global27 = 0;
    global26 = 0;
    global37 = 0;
    global11 = func_79;
    global12 = func_80;
    global14 = func_82;
    global13 = func_81;
    global21 = func_107;
    sys_0(0x7, func_36);
    sys_21(0x32, 0x2f, 0x10000083, 0x20000078);
}

void func_2254()
{
    global7 = 0x16f;
    func_2252();
    func_2255();
    func_2253();
    global22 = func_2260;
}

void func_2255()
{
    sv_set_mem(0x1, 0, 0x152, func_2261);
    sv_set_mem(0x1, 0x1, 0x152, func_2262);
    sv_set_mem(0x1, 0x2, 0x152, func_2264);
    sv_set_mem(0x1, 0, 0x153, func_2297);
    sv_set_mem(0x1, 0x1, 0x153, func_2298);
    sv_set_mem(0x1, 0x2, 0x153, func_2301);
    sv_set_mem(0x1, 0, 0x154, func_2390);
    sv_set_mem(0x1, 0x1, 0x154, func_2391);
    sv_set_mem(0x1, 0x2, 0x154, func_2393);
    sv_set_mem(0x1, 0, 0x155, func_2462);
    sv_set_mem(0x1, 0x1, 0x155, func_2463);
    sv_set_mem(0x1, 0x2, 0x155, func_2466);
    sv_set_mem(0x1, 0, 0x157, func_2277);
    sv_set_mem(0x1, 0x1, 0x157, func_2278);
    sv_set_mem(0x1, 0x2, 0x157, func_2282);
    sv_set_mem(0x1, 0, 0x158, func_2283);
    sv_set_mem(0x1, 0x1, 0x158, func_2284);
    sv_set_mem(0x1, 0x2, 0x158, func_2287);
    sv_set_mem(0x1, 0, 0x159, func_2288);
    sv_set_mem(0x1, 0x1, 0x159, func_2289);
    sv_set_mem(0x1, 0x2, 0x159, func_2292);
    sv_set_mem(0x1, 0, 0x15a, func_2302);
    sv_set_mem(0x1, 0x1, 0x15a, func_2303);
    sv_set_mem(0x1, 0x2, 0x15a, func_2305);
    sv_set_mem(0x1, 0, 0x15b, func_2307);
    sv_set_mem(0x1, 0x1, 0x15b, func_2308);
    sv_set_mem(0x1, 0x2, 0x15b, func_2312);
    sv_set_mem(0x1, 0, 0x15c, func_2313);
    sv_set_mem(0x1, 0x1, 0x15c, func_2314);
    sv_set_mem(0x1, 0x2, 0x15c, func_2316);
    sv_set_mem(0x1, 0, 0x15d, func_2322);
    sv_set_mem(0x1, 0x1, 0x15d, func_2323);
    sv_set_mem(0x1, 0x2, 0x15d, func_2325);
    sv_set_mem(0x1, 0, 0x15e, func_2317);
    sv_set_mem(0x1, 0x1, 0x15e, func_2318);
    sv_set_mem(0x1, 0x2, 0x15e, func_2321);
    sv_set_mem(0x1, 0, 0x15f, func_2335);
    sv_set_mem(0x1, 0x1, 0x15f, func_2342);
    sv_set_mem(0x1, 0x2, 0x15f, func_2357);
    sv_set_mem(0x1, 0, 0x160, func_2336);
    sv_set_mem(0x1, 0x1, 0x160, func_2346);
    sv_set_mem(0x1, 0x2, 0x160, func_2358);
    sv_set_mem(0x1, 0, 0x161, func_2337);
    sv_set_mem(0x1, 0x1, 0x161, func_2350);
    sv_set_mem(0x1, 0x2, 0x161, func_2359);
    sv_set_mem(0x1, 0, 0x162, func_2338);
    sv_set_mem(0x1, 0x1, 0x162, func_2353);
    sv_set_mem(0x1, 0x2, 0x162, func_2360);
    sv_set_mem(0x1, 0, 0x163, func_2394);
    sv_set_mem(0x1, 0x1, 0x163, func_2395);
    sv_set_mem(0x1, 0x2, 0x163, func_2397);
    sv_set_mem(0x1, 0, 0x164, func_2398);
    sv_set_mem(0x1, 0x1, 0x164, func_2399);
    sv_set_mem(0x1, 0x2, 0x164, func_2401);
    sv_set_mem(0x1, 0, 0x165, func_2402);
    sv_set_mem(0x1, 0x1, 0x165, func_2403);
    sv_set_mem(0x1, 0x2, 0x165, func_2405);
    sv_set_mem(0x1, 0, 0x166, func_2425);
    sv_set_mem(0x1, 0x1, 0x166, func_2426);
    sv_set_mem(0x1, 0x2, 0x166, func_2429);
    sv_set_mem(0x1, 0, 0x167, func_2430);
    sv_set_mem(0x1, 0x1, 0x167, func_2431);
    sv_set_mem(0x1, 0x2, 0x167, func_2433);
    sv_set_mem(0x1, 0, 0x168, func_2434);
    sv_set_mem(0x1, 0x1, 0x168, func_2435);
    sv_set_mem(0x1, 0x2, 0x168, func_2437);
    sv_set_mem(0x1, 0, 0x169, func_2447);
    sv_set_mem(0x1, 0x1, 0x169, func_2452);
    sv_set_mem(0x1, 0x2, 0x169, func_2458);
    sv_set_mem(0x1, 0, 0x16a, func_2448);
    sv_set_mem(0x1, 0x1, 0x16a, func_2454);
    sv_set_mem(0x1, 0x2, 0x16a, func_2459);
    sv_set_mem(0x1, 0, 0x16b, func_2467);
    sv_set_mem(0x1, 0x1, 0x16b, func_2468);
    sv_set_mem(0x1, 0x2, 0x16b, func_2471);
    sv_set_mem(0x1, 0, 0x16c, func_2484);
    sv_set_mem(0x1, 0x1, 0x16c, func_2485);
    sv_set_mem(0x1, 0x2, 0x16c, func_2491);
    sv_set_mem(0x1, 0, 0x156, func_2495);
    sv_set_mem(0x1, 0x1, 0x156, func_2497);
    sv_set_mem(0x1, 0x2, 0x156, func_2499);
    sv_set_mem(0x1, 0, 0x16d, func_2500);
    sv_set_mem(0x1, 0x1, 0x16d, func_2501);
    sv_set_mem(0x1, 0x2, 0x16d, func_2504);
    sv_set_mem(0x1, 0, 0x16e, func_2505);
    sv_set_mem(0x1, 0x1, 0x16e, func_2506);
    sv_set_mem(0x1, 0x2, 0x16e, func_2509);
    sv_set_mem(0x1, 0x6, 0xe, func_2249);
    sv_set_mem(0x1, 0x6, 0x10, func_2249);
    sv_set_mem(0x1, 0x3, 0x18, func_2250);
}

void func_2256(int arg0)
{
    if (arg0 == 0)
    {
        sv_set_mem(0x1, 0x3, 0x152, func_2265);
    }
    else if (arg0 == 0x1)
    {
        
    }
    else if (arg0 == 0x2)
    {
        
    }
    else if (arg0 == 0x4)
    {
        sv_set_mem(0x1, 0x3, 0x153, func_2326);
        sv_set_mem(0x1, 0x3, 0x15a, func_2327);
        sv_set_mem(0x1, 0x3, 0x15b, func_2328);
        sv_set_mem(0x1, 0x3, 0x15c, func_2329);
        sv_set_mem(0x1, 0x3, 0x15d, func_2330);
        sv_set_mem(0x1, 0x3, 0x15e, func_2332);
    }
    else if (arg0 == 0x5)
    {
        sv_set_mem(0x1, 0x3, 0x153, func_2361);
        sv_set_mem(0x1, 0x3, 0x15f, func_2361);
        sv_set_mem(0x1, 0x3, 0x160, func_2361);
        sv_set_mem(0x1, 0x3, 0x161, func_2361);
        sv_set_mem(0x1, 0x3, 0x162, func_2361);
    }
    else if (arg0 == 0x6)
    {
        sv_set_mem(0x1, 0x3, 0x153, func_2389);
    }
    else if (arg0 == 0x8)
    {
        sv_set_mem(0x1, 0x3, 0x154, func_2406);
        sv_set_mem(0x1, 0x3, 0x163, func_2409);
        sv_set_mem(0x1, 0x3, 0x164, func_2412);
        sv_set_mem(0x1, 0x3, 0x165, func_2415);
    }
    else if (arg0 == 0x9)
    {
        sv_set_mem(0x1, 0x3, 0x154, func_2438);
        sv_set_mem(0x1, 0x3, 0x166, func_2438);
        sv_set_mem(0x1, 0x3, 0x167, func_2438);
        sv_set_mem(0x1, 0x3, 0x168, func_2438);
    }
    else if (arg0 == 0xa)
    {
        sv_set_mem(0x1, 0x3, 0x16a, func_2461);
    }
    else if (arg0 == 0xc)
    {
        
    }
    else if (arg0 == 0xd)
    {
        sv_set_mem(0x1, 0x3, 0x155, func_2476);
    }
    else if (arg0 == 0xe)
    {
        sv_set_mem(0x1, 0x3, 0x16c, func_2492);
    }
    sv_set_mem(0x1, 0x3, 0x156, func_2496);
}

void func_2257(int arg0)
{
    if (arg0 == 0)
    {
        sv_set_mem(0x1, 0x4, 0x152, func_2266);
    }
    else if (arg0 == 0x1)
    {
        
    }
    else if (arg0 == 0x2)
    {
        
    }
    else if (arg0 == 0x4)
    {
        sv_set_mem(0x1, 0x4, 0x15c, func_2331);
        sv_set_mem(0x1, 0x4, 0x15e, func_2333);
    }
    else if (arg0 == 0x5)
    {
        sv_set_mem(0x1, 0x4, 0x153, func_2368);
        sv_set_mem(0x1, 0x4, 0x15f, func_2368);
        sv_set_mem(0x1, 0x4, 0x160, func_2368);
        sv_set_mem(0x1, 0x4, 0x161, func_2368);
        sv_set_mem(0x1, 0x4, 0x162, func_2368);
    }
    else if (arg0 == 0x6)
    {
        
    }
    else if (arg0 == 0x8)
    {
        sv_set_mem(0x1, 0x4, 0x154, func_2407);
        sv_set_mem(0x1, 0x4, 0x163, func_2410);
        sv_set_mem(0x1, 0x4, 0x164, func_2413);
        sv_set_mem(0x1, 0x4, 0x165, func_2416);
    }
    else if (arg0 == 0x9)
    {
        sv_set_mem(0x1, 0x4, 0x154, func_2440);
        sv_set_mem(0x1, 0x4, 0x166, func_2440);
        sv_set_mem(0x1, 0x4, 0x167, func_2440);
        sv_set_mem(0x1, 0x4, 0x168, func_2440);
    }
    else if (arg0 == 0xa)
    {
        
    }
    else if (arg0 == 0xc)
    {
        
    }
    else if (arg0 == 0xd)
    {
        sv_set_mem(0x1, 0x4, 0x155, func_2477);
    }
    else if (arg0 == 0xe)
    {
        sv_set_mem(0x1, 0x4, 0x16c, func_2493);
    }
}

void func_2258(int arg0)
{
    if (arg0 == 0)
    {
        
    }
    else if (arg0 == 0x1)
    {
        
    }
    else if (arg0 == 0x2)
    {
        
    }
    else if (arg0 == 0x4)
    {
        
    }
    else if (arg0 == 0x5)
    {
        sv_set_mem(0x1, 0x5, 0x153, func_2374);
        sv_set_mem(0x1, 0x5, 0x15f, func_2374);
        sv_set_mem(0x1, 0x5, 0x160, func_2374);
        sv_set_mem(0x1, 0x5, 0x161, func_2374);
        sv_set_mem(0x1, 0x5, 0x162, func_2374);
    }
    else if (arg0 == 0x6)
    {
        
    }
    else if (arg0 == 0x8)
    {
        
    }
    else if (arg0 == 0x9)
    {
        sv_set_mem(0x1, 0x5, 0x154, func_2442);
        sv_set_mem(0x1, 0x5, 0x166, func_2442);
        sv_set_mem(0x1, 0x5, 0x167, func_2442);
        sv_set_mem(0x1, 0x5, 0x168, func_2442);
    }
    else if (arg0 == 0xa)
    {
        
    }
    else if (arg0 == 0xc)
    {
        
    }
    else if (arg0 == 0xd)
    {
        
    }
    else if (arg0 == 0xe)
    {
        
    }
}

void func_2259(int arg0)
{
    if (arg0 == 0)
    {
        
    }
    else if (arg0 == 0x1)
    {
        
    }
    else if (arg0 == 0x2)
    {
        
    }
    else if (arg0 == 0x4)
    {
        
    }
    else if (arg0 == 0x5)
    {
        sv_set_mem(0x1, 0x6, 0x153, func_2381);
        sv_set_mem(0x1, 0x6, 0x15f, func_2381);
        sv_set_mem(0x1, 0x6, 0x160, func_2381);
        sv_set_mem(0x1, 0x6, 0x161, func_2381);
        sv_set_mem(0x1, 0x6, 0x162, func_2381);
    }
    else if (arg0 == 0x6)
    {
        
    }
    else if (arg0 == 0x8)
    {
        sv_set_mem(0x1, 0x6, 0x154, func_2408);
        sv_set_mem(0x1, 0x6, 0x163, func_2411);
        sv_set_mem(0x1, 0x6, 0x164, func_2414);
        sv_set_mem(0x1, 0x6, 0x165, func_2417);
    }
    else if (arg0 == 0x9)
    {
        
    }
    else if (arg0 == 0xa)
    {
        
    }
    else if (arg0 == 0xc)
    {
        
    }
    else if (arg0 == 0xd)
    {
        sv_set_mem(0x1, 0x6, 0x155, func_2479);
    }
    else if (arg0 == 0xe)
    {
        
    }
}

void func_2260()
{
    int var0;
    int var1;
    int var2;
    var0 = WorkModuleImpl.get_int(0x10000046);
    var1 = WorkModuleImpl.get_int(0x10000047);
    printf("sub_change_special_command command %d, to: %d", var0, var1);
    if (var0 && var1 >= 0 && var1 < 0x10)
    {
        var2 = 0;
        while (var2 < 0x9)
        {
            sv_set_mem(0x1, var2, var0, 0);
            var2++;
        }
        if (var1 == 0)
        {
            sv_set_mem(0x1, 0, var0, func_2261);
            sv_set_mem(0x1, 0x1, var0, func_2262);
            sv_set_mem(0x1, 0x2, var0, func_2264);
        }
        else if (var1 == 0x1)
        {
            sv_set_mem(0x1, 0, var0, func_2267);
            sv_set_mem(0x1, 0x1, var0, func_2268);
            sv_set_mem(0x1, 0x2, var0, func_2270);
        }
        else if (var1 == 0x2)
        {
            sv_set_mem(0x1, 0, var0, func_2272);
            sv_set_mem(0x1, 0x1, var0, func_2273);
            sv_set_mem(0x1, 0x2, var0, func_2276);
        }
        else if (var1 == 0x4)
        {
            sv_set_mem(0x1, 0, var0, func_2297);
            sv_set_mem(0x1, 0x1, var0, func_2298);
            sv_set_mem(0x1, 0x2, var0, func_2301);
        }
        else if (var1 == 0x5)
        {
            sv_set_mem(0x1, 0, var0, func_2334);
            sv_set_mem(0x1, 0x1, var0, func_2339);
            sv_set_mem(0x1, 0x2, var0, func_2356);
        }
        else if (var1 == 0x6)
        {
            sv_set_mem(0x1, 0, var0, func_2385);
            sv_set_mem(0x1, 0x1, var0, func_2386);
            sv_set_mem(0x1, 0x2, var0, func_2388);
        }
        else if (var1 == 0x8)
        {
            sv_set_mem(0x1, 0, var0, func_2390);
            sv_set_mem(0x1, 0x1, var0, func_2391);
            sv_set_mem(0x1, 0x2, var0, func_2393);
        }
        else if (var1 == 0x9)
        {
            sv_set_mem(0x1, 0, var0, func_2419);
            sv_set_mem(0x1, 0x1, var0, func_2420);
            sv_set_mem(0x1, 0x2, var0, func_2424);
        }
        else if (var1 == 0xa)
        {
            sv_set_mem(0x1, 0, var0, func_2446);
            sv_set_mem(0x1, 0x1, var0, func_2449);
            sv_set_mem(0x1, 0x2, var0, func_2457);
        }
        else if (var1 == 0xc)
        {
            sv_set_mem(0x1, 0, var0, func_2462);
            sv_set_mem(0x1, 0x1, var0, func_2463);
            sv_set_mem(0x1, 0x2, var0, func_2466);
        }
        else if (var1 == 0xd)
        {
            sv_set_mem(0x1, 0, var0, func_2472);
            sv_set_mem(0x1, 0x1, var0, func_2473);
            sv_set_mem(0x1, 0x2, var0, func_2478);
        }
        else if (var1 == 0xe)
        {
            sv_set_mem(0x1, 0, var0, func_2480);
            sv_set_mem(0x1, 0x1, var0, func_2481);
            sv_set_mem(0x1, 0x2, var0, func_2483);
        }
        func_2256(var1);
        func_2257(var1);
        func_2258(var1);
        func_2259(var1);
        sys_21(0x3e9, var1);
        printf("success !");
    }
}

int func_2261()
{
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x11192, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2262()
{
    int var0;
    func_2246();
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.off_flag2(0x2100000e);
    WorkModuleImpl.set_int(0x211, 0x10000086);
    WorkModuleImpl.set_int(0x212, 0x10000087);
    WorkModuleImpl.off_flag2(0x20000078);
    var0 = (int)WorkModuleImplFloat.get_float(0x5000007);
    WorkModuleImpl.set_int(var0, 0x11000002);
    func_78(func_2263);
}

int func_2263()
{
    int var0;
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    var0 = StatusModuleImpl(0x6);
    if (MotionModuleImpl.is_end())
    {
        if (WorkModuleImpl.is_flag(0x2100000d) && global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            func_16(0xe, 0);
            return 0x1;
        }
    }
    if (!func_2247())
    {
        if (global18 == 0)
        {
            func_20(0);
            GroundModuleImpl(0x2710, 0x2);
            func_2243();
            WorkModuleImpl.on_flag2(0x2100000d);
            WorkModuleImpl.off_flag2(0x2100000e);
            WorkModuleImpl.on_flag2(0x20000079);
            if (var0 == 0)
            {
                KineticModuleImpl.change_kinetic_type(0x10);
                EffectModuleImpl(0x2710, 0x1000006, 0, 3.0f + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0.5f + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0);
            }
        }
        else
        {
            func_20(0x2);
            GroundModuleImpl(0x2710, 0x5);
            func_2244();
            WorkModuleImpl.off_flag2(0x2100000d);
            WorkModuleImpl.on_flag2(0x2100000e);
            WorkModuleImpl.on_flag2(0x2000007a);
            if (var0 == 0)
            {
                KineticModuleImpl.change_kinetic_type(0);
            }
        }
    }
    if (func_2248())
    {
        func_2246();
    }
    return 0x1;
}

void func_2264()
{
    
}

void func_2265()
{
    if (StatusModuleImpl(0x1) == 0x2)
    {
        KineticModuleImpl.change_kinetic_type(0x65);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0x10);
    }
}

void func_2266()
{
    if (global18 == 0x2)
    {
        WorkModuleImpl.dec_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) < 0)
        {
            global16 = 0;
        }
    }
}

int func_2267()
{
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x11192, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2268()
{
    func_78(func_2269);
}

void func_2269()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2271();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (global18 == 0 && func_39() != 0)
        {
            return;
        }
        else if (global18 == 0x2 && func_41() != 0)
        {
            return;
        }
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_2270()
{
    ArticleModuleImpl.remove(0x2);
}

void func_2271()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x9);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x213);
        }
        else
        {
            func_22(0x213, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x214);
        }
        else
        {
            func_22(0x214, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

int func_2272()
{
    printf("status_pre_SpecialN3");
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1192, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2273()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.off_flag2(0x2100000e);
    func_78(func_2274);
}

void func_2274()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2275();
    }
    if (MotionModuleImpl.is_end())
    {
        if (ControlModuleImpl(0x2713, 0x1))
        {
            func_16(0x158, 0x1);
            return;
        }
        else
        {
            func_16(0x157, 0);
            return;
        }
    }
}

void func_2275()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x215);
        }
        else
        {
            func_22(0x215, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x219);
        }
        else
        {
            func_22(0x219, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2276()
{
    
}

int func_2277()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2278()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    if (!StopModuleImpl(0x1))
    {
        func_2280();
    }
    global16 = func_2280;
    func_78(func_2279);
}

void func_2279()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2281();
    }
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        func_16(0x159, 0);
        return;
    }
    if (ControlModuleImpl(0x2713, 0x1))
    {
        func_16(0x158, 0x1);
        return;
    }
}

void func_2280()
{
    int var0;
    int var1;
    WorkModuleImpl.inc_int(0x11000002);
    var0 = WorkModuleImpl.get_int(0x11000002);
    var1 = (int)(WorkModuleImplFloat.get_float(0x500000a) / WorkModuleImplFloat.get_float(0x500000e));
    if (var0 >= var1)
    {
        WorkModuleImpl.on_flag2(0x2100000e);
    }
}

void func_2281()
{
    float var0;
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_24(0x216);
        }
        else
        {
            func_22(0x216, 0, 1.0f);
            var0 = WorkModuleImplFloat.get_float(0x500000e);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x500000e));
            ColorBlendModuleImpl(0x7, var0);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_24(0x21a);
        }
        else
        {
            func_22(0x21a, 0, 1.0f);
            var0 = WorkModuleImplFloat.get_float(0x500000e);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x500000e));
            ColorBlendModuleImpl(0x7, var0);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2282()
{
    ColorBlendModuleImpl(0x7, 1.0f);
}

int func_2283()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2284()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_78(func_2285);
}

void func_2285()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2286();
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_2286()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x10);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x217);
        }
        else
        {
            func_22(0x217, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x21b);
        }
        else
        {
            func_22(0x21b, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2287()
{
    DamageModuleImpl(0xb, 0, (float)0 + 0);
}

int func_2288()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2289()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_78(func_2290);
}

void func_2290()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2291();
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_2291()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x10);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x218);
        }
        else
        {
            func_22(0x218, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x21c);
        }
        else
        {
            func_22(0x21c, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2292()
{
    
}

float func_2293(int arg0)
{
    float var1;
    float var2;
    float var3;
    var1 = (float)MotionModuleImpl.get_end_frame(arg0) + 1.0f;
    var2 = (float)WorkModuleImpl.get_int(0x16000007);
    var3 = var1 / var2;
    return var3;
}

void func_2294()
{
    if (global18 == 0)
    {
        func_2295();
    }
    else
    {
        func_2296();
    }
}

void func_2295()
{
    int var0;
    float var1;
    var0 = WorkModuleImpl.get_int(0x10000086);
    var1 = func_2293(var0);
    if (!WorkModuleImpl.is_flag(0x20000078))
    {
        func_22(var0, 0, var1);
        WorkModuleImpl.on_flag2(0x20000078);
    }
    else
    {
        func_23(var0);
    }
}

void func_2296(float arg0)
{
    int var1;
    var1 = WorkModuleImpl.get_int(0x10000087);
    arg0 = func_2293(var1);
    if (!WorkModuleImpl.is_flag(0x20000078))
    {
        func_22(var1, 0, arg0);
        WorkModuleImpl.on_flag2(0x20000078);
    }
    else
    {
        func_23(var1);
    }
}

int func_2297()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2298()
{
    if (ControlModuleImpl(0x4) <= WorkModuleImpl.get_int(0x12000064))
    {
        WorkModuleImpl.on_flag2(0x2100000d);
        sys_21(0x55, 0x1, 0x18);
    }
    func_33();
    WorkModuleImpl.off_flag2(0x21000013);
    WorkModuleImpl.off_flag2(0x20000078);
    WorkModuleImpl.set_int(0x21d, 0x10000086);
    WorkModuleImpl.set_int(0x223, 0x10000087);
    func_2242();
    func_78(func_2299);
}

void func_2299()
{
    float var0;
    if (MotionModuleImpl.is_end())
    {
        func_16(0x15a, 0);
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2300();
    }
    func_2242();
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    if (PostureModuleImplFloat.get_lr() > (float)0)
    {
        if (var0 < (float)0)
        {
            KineticModuleImpl.set_speed(0x3, 0, 0);
            KineticModuleImpl.set_accel(0x3, 0, 0);
        }
    }
    else if (var0 > (float)0)
    {
        KineticModuleImpl.set_speed(0x3, 0, 0);
        KineticModuleImpl.set_accel(0x3, 0, 0);
    }
}

void func_2300()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x9);
        func_20(0);
        WorkModuleImpl.off_flag2(0x21000014);
        KineticModuleImpl.change_kinetic_type(0x6);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        func_20(0x2);
        WorkModuleImpl.on_flag2(0x21000014);
    }
}

void func_2301()
{
    
}

int func_2302()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0, 0x200, 0);
    return 0;
}

void func_2303()
{
    func_2246();
    WorkModuleImpl.off_flag2(0x20000078);
    WorkModuleImpl.set_int(0x21e, 0x10000086);
    WorkModuleImpl.set_int(0x224, 0x10000087);
    if (!StopModuleImpl(0x1))
    {
        func_2306();
    }
    global16 = func_2306;
    func_78(func_2304);
}

void func_2304()
{
    int var0;
    float var1;
    float var2;
    var0 = (int)WorkModuleImplFloat.get_float(0x6000003);
    if (WorkModuleImpl.get_int(0x11000002) >= var0)
    {
        WorkModuleImpl.set_float(1.0f + 0, 0x36);
        func_16(0x15b, 0);
        return 0x1;
    }
    if (ControlModuleImpl(0x2713, 0x1))
    {
        var1 = (float)WorkModuleImpl.get_int(0x11000002) * 1.0f / (float)var0;
        WorkModuleImpl.set_float(var1 + 0, 0x36);
        func_16(0x15b, 0x1);
        return 0x1;
    }
    if (!func_2247())
    {
        func_2242();
        if (global18 == 0)
        {
            if (WorkModuleImpl.is_flag(0x21000014))
            {
                WorkModuleImpl.on_flag2(0x21000013);
            }
            WorkModuleImpl.off_flag2(0x21000014);
            KineticModuleImpl.change_kinetic_type(0x6);
            GroundModuleImpl(0x2710, 0x9);
            func_20(0);
            WorkModuleImpl.on_flag2(0x20000079);
        }
        else
        {
            if (!WorkModuleImpl.is_flag(0x21000014))
            {
                WorkModuleImpl.on_flag2(0x21000013);
            }
            WorkModuleImpl.on_flag2(0x21000014);
            KineticModuleImpl.change_kinetic_type(0xa);
            GroundModuleImpl(0x2710, 0x5);
            func_20(0x2);
            WorkModuleImpl.on_flag2(0x2000007a);
        }
    }
    if (func_2248())
    {
        func_2246();
    }
    var2 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    if (PostureModuleImplFloat.get_lr() > (float)0)
    {
        if (var2 < (float)0)
        {
            KineticModuleImpl.set_speed(0x3, 0, 0);
            KineticModuleImpl.set_accel(0x3, 0, 0);
        }
    }
    else if (var2 > (float)0)
    {
        KineticModuleImpl.set_speed(0x3, 0, 0);
        KineticModuleImpl.set_accel(0x3, 0, 0);
    }
}

void func_2305()
{
    
}

void func_2306()
{
    int var0;
    var0 = (int)WorkModuleImplFloat.get_float(0x6000003);
    if (WorkModuleImpl.get_int(0x11000002) < var0)
    {
        WorkModuleImpl.inc_int(0x11000002);
    }
}

int func_2307()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0, 0x200, 0);
    return 0;
}

void func_2308()
{
    WorkModuleImpl.off_flag2(0x20000078);
    WorkModuleImpl.set_int(0x21f, 0x10000086);
    WorkModuleImpl.set_int(0x225, 0x10000087);
    if (!StopModuleImpl(0x1))
    {
        func_2309();
    }
    global16 = func_2309;
    func_78(func_2310);
}

void func_2309()
{
    WorkModuleImpl.dec_int(0x11000003);
}

void func_2310()
{
    if (WorkModuleImpl.get_int(0x11000003) <= 0)
    {
        func_16(0x15c, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x15c, 0);
        return 0x1;
    }
    func_2294();
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2311();
    }
}

void func_2311()
{
    int var0;
    float var1;
    float var2;
    if (global18 == 0)
    {
        var0 = 0xf;
        if (KineticModuleImpl.get_kinetic_type() != var0)
        {
            var1 = KineticModuleImplFloat.get_sum_speed_x(0x1);
            var2 = KineticModuleImplFloat.get_sum_speed_y(0x1);
            KineticModuleImpl.change_kinetic_type(var0);
            KineticModuleImpl.set_speed(0, 0, 0);
            KineticModuleImpl.enable_energy(0x3);
            KineticModuleImpl(0xe, 0x3, 0, var1, var2, 0, 0, 0);
        }
        GroundModuleImpl(0x2710, 0x1);
        func_20(0);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        KineticModuleImpl.set_accel(0x1, -WorkModuleImplFloat.get_float(0x3000018));
        KineticModuleImpl.enable_energy(0);
        if (KineticModuleImpl.get_kinetic_type() != 0xa)
        {
            KineticModuleImpl(0xe, 0, 0x4, 0, 0, 0, 0, 0);
        }
        GroundModuleImpl(0x2710, 0x5);
        func_20(0x2);
    }
}

void func_2312()
{
    
}

int func_2313()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x7, 0x2, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0, 0x200, 0);
    return 0;
}

void func_2314()
{
    WorkModuleImpl.off_flag2(0x21000011);
    GroundModuleImpl(0x2710, 0x5);
    func_20(0x2);
    func_22(0x220, 0, 1.0f);
    func_78(func_2315);
}

void func_2315()
{
    printf("status_SpecialS1Attack_Main");
    if (func_56())
    {
        return 0x1;
    }
    if (WorkModuleImpl.is_flag(0x21000011))
    {
        func_16(0x15d, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (WorkModuleImpl.is_flag(0x21000011))
        {
            func_16(0x15d, 0);
            return 0x1;
        }
        else
        {
            func_16(0x15e, 0);
            return 0x1;
        }
    }
}

void func_2316()
{
    
}

int func_2317()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x100);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0, 0x200, 0);
    return 0;
}

void func_2318()
{
    func_2246();
    WorkModuleImpl.off_flag2(0x20000078);
    WorkModuleImpl.set_int(0x222, 0x10000086);
    WorkModuleImpl.set_int(0x226, 0x10000087);
    WorkModuleImpl.set_int(0x2, 0x11000004);
    if (!StopModuleImpl(0x1))
    {
        func_2320();
    }
    global16 = func_2320;
    func_78(func_2319);
}

void func_2319()
{
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (WorkModuleImpl.check_strans(0x1e00009a))
        {
            func_16(0, 0);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e00009b))
        {
            func_16(0x10, 0);
            return 0x1;
        }
    }
    if (!func_2247())
    {
        func_2242();
        if (global18 == 0)
        {
            KineticModuleImpl.change_kinetic_type(0x6);
            GroundModuleImpl(0x2710, 0x2);
            func_20(0);
            WorkModuleImpl.strans_on(0x1e00009a);
            WorkModuleImpl.strans_off(0x1e00009b);
            WorkModuleImpl.on_flag2(0x20000079);
        }
        else
        {
            KineticModuleImpl.change_kinetic_type(0xa);
            KineticModuleImpl.enable_energy(0x2);
            KineticModuleImpl(0xe, 0x2, 0, 0, 0, 0, 0, 0);
            KineticModuleImpl.mul_x_speed_max(0x2, WorkModuleImplFloat.get_float(0x3000014) * 8.0f);
            KineticModuleImpl.set_max_speed(0x2, WorkModuleImplFloat.get_float(0x3000016), 100.0f);
            KineticModuleImpl.set_limit_speed(0x2, WorkModuleImplFloat.get_float(0x3000016) * WorkModuleImplFloat.get_float(0x6000014), 0);
            GroundModuleImpl(0x2710, 0x5);
            func_20(0x2);
            WorkModuleImpl.strans_on(0x1e00009b);
            WorkModuleImpl.strans_off(0x1e00009a);
            WorkModuleImpl.on_flag2(0x2000007a);
        }
    }
    if (func_2248())
    {
        func_2246();
    }
}

void func_2320()
{
    if (global18 == 0)
    {
        if (WorkModuleImpl.get_int(0x11000004) != 0)
        {
            
        }
    }
    if (global18 == 0)
    {
        WorkModuleImpl.set_int(0, 0x11000004);
    }
    else
    {
        WorkModuleImpl.set_int(0x2, 0x11000004);
    }
}

void func_2321()
{
    if (global6 == 0x10)
    {
        WorkModuleImpl.on_flag2(0x20000044);
    }
}

int func_2322()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0, 0x200, 0x1000);
    return 0;
}

void func_2323()
{
    float var0;
    float var1;
    func_22(0x221, 0, 1.0f);
    KineticModuleImpl.change_kinetic_type(0xa);
    GroundModuleImpl(0x2710, 0x5);
    func_20(0x2);
    var0 = WorkModuleImplFloat.get_float(0x600000e);
    var1 = WorkModuleImplFloat.get_float(0x600000f);
    KineticModuleImpl.set_friction(0x3, 0.019999999552965164f, 0);
    KineticModuleImpl.set_speed(0x3, var0 * PostureModuleImplFloat.get_lr(), 0);
    KineticModuleImpl.set_limit_speed(0x3, 10.0f, 0);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.set_speed(0x1, var1);
    func_78(func_2324);
}

void func_2324()
{
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x10, 0);
    }
    if (global18 == 0)
    {
        func_16(0x16, 0);
    }
}

void func_2325()
{
    
}

void func_2326()
{
    float var0;
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    if (global18 == 0x2)
    {
        KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
        KineticModuleImpl.set_accel(0x1, -WorkModuleImplFloat.get_float(0x6000002));
        KineticModuleImpl.enable_energy(0x1);
        KineticModuleImpl(0xe, 0x3, 0x6, var0 * WorkModuleImplFloat.get_float(0x6000000), 0, 0, 0, 0);
        KineticModuleImpl.set_accel(0x3, -WorkModuleImplFloat.get_float(0x6000001) * PostureModuleImplFloat.get_lr(), 0);
        KineticModuleImpl.set_friction(0x3, 0, 0);
        KineticModuleImpl.enable_energy(0x3);
        KineticModuleImpl(0xe, 0x2, 0xb, 0, 0, 0, 0, 0);
        KineticModuleImpl.disable_energy(0x2);
        KineticModuleImpl(0xe, 0, 0x4, 0, 0, 0, 0, 0);
        KineticModuleImpl.disable_energy(0);
    }
    else
    {
        KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
        KineticModuleImpl.disable_energy(0x1);
        KineticModuleImpl(0xe, 0x3, 0, 0, 0, 0, 0, 0);
        KineticModuleImpl.disable_energy(0x3);
        KineticModuleImpl(0xe, 0x2, 0xb, 0, 0, 0, 0, 0);
        KineticModuleImpl.disable_energy(0x2);
        KineticModuleImpl(0xe, 0, 0x2, 0, 0, 0, 0, 0);
        KineticModuleImpl.disable_energy(0);
    }
}

void func_2327()
{
    int var0;
    WorkModuleImpl.set_int(0, 0x11000002);
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        var0 = (int)WorkModuleImplFloat.get_float(0x6000004);
        WorkModuleImpl.set_int(var0, 0x11000002);
    }
}

void func_2328()
{
    float var0;
    float var1;
    float var2;
    float var3;
    int var4;
    float var5;
    float var6;
    var0 = WorkModuleImplFloat.get_float(0x6000003);
    var1 = (float)WorkModuleImpl.get_int(0x11000002);
    var2 = (float)WorkModuleImpl.get_int(0x16000007);
    var3 = var1 / var0;
    var3 = func_15(var3, 0, 1.0f);
    WorkModuleImpl.set_float(var3 + 0, 0x1000006);
    var4 = (int)(var2 * var3);
    WorkModuleImpl.set_int(var4, 0x11000003);
    if (global18 == 0)
    {
        var5 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var6 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        KineticModuleImpl.change_kinetic_type(0xf);
        KineticModuleImpl.set_speed(0, 0, 0);
        KineticModuleImpl.enable_energy(0x3);
        KineticModuleImpl(0xe, 0x3, 0, var5, var6, 0, 0, 0);
    }
    else
    {
        var5 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var6 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        KineticModuleImpl.change_kinetic_type(0xa);
        KineticModuleImpl.set_speed(0x3, var5, 0);
        KineticModuleImpl.set_speed(0x1, var6);
        KineticModuleImpl.set_accel(0x1, -WorkModuleImplFloat.get_float(0x3000018));
        KineticModuleImpl.enable_energy(0);
        KineticModuleImpl(0xe, 0, 0x4, 0, 0, 0, 0, 0);
    }
}

void func_2329()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    var0 = WorkModuleImplFloat.get_float(0x6000003);
    var1 = (float)WorkModuleImpl.get_int(0x11000002) + 0;
    var2 = WorkModuleImplFloat.get_float(0x6000008);
    var3 = (WorkModuleImplFloat.get_float(0x6000009) - WorkModuleImplFloat.get_float(0x6000008)) / var0;
    var4 = var2 + var3 * var1;
    var4 *= PostureModuleImplFloat.get_lr();
    KineticModuleImpl(0xe, 0x3, 0x16, var4, 0, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x3);
    var5 = WorkModuleImplFloat.get_float(0x600000a);
    var6 = WorkModuleImplFloat.get_float(0x600000b) - var5;
    var7 = var5 + var6 * var1 / var0;
    KineticModuleImpl(0xe, 0x1, 0, 0, var7, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x1);
    KineticModuleImpl(0xe, 0x2, 0xb, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl(0xe, 0, 0x2, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000002), 0x10000088);
}

void func_2330()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    printf("sub_special_s1_hit_uniq_process_init_status");
    if (WorkModuleImpl.is_flag(0x21000010) == 0)
    {
        var0 = WorkModuleImplFloat.get_float(0x6000005);
        var1 = (float)WorkModuleImpl.get_int(0x10000088) + 0;
        var2 = (WorkModuleImplFloat.get_float(0x6000006) - var0) / WorkModuleImplFloat.get_float(0x6000003);
        var3 = var0 + var1 * var2;
        var4 = var3 / 9.0f;
        AttackModuleImpl(0x2728, var4);
        WorkModuleImpl.on_flag2(0x21000010);
    }
}

void func_2331()
{
    float var0;
    float var1;
    printf("sub_special_s1_attack_uniq_process_exec_status");
    if (WorkModuleImpl.is_flag(0x2100000f) != 0)
    {
        
    }
    else
    {
        var0 = WorkModuleImplFloat.get_float(0x600000c);
        var1 = WorkModuleImplFloat.get_float(0x600000d);
        KineticModuleImpl.set_accel(0x1, -var0);
        KineticModuleImpl.set_limit_speed(0x1, var1);
    }
}

void func_2332()
{
    float var0;
    float var1;
    float var2;
    float var3;
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    var2 = WorkModuleImplFloat.get_float(0x6000010);
    var3 = var0 * var2;
    KineticModuleImpl(0xe, 0x3, 0x6, var3, 0, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x3);
    KineticModuleImpl.disable_energy(0x2);
}

void func_2333()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    if (global18 == 0x2)
    {
        var0 = WorkModuleImplFloat.get_float(0x6000013);
        KineticModuleImpl.set_accel(0x1, -var0);
        KineticModuleImpl.enable_energy(0x1);
    }
    else if (global18 == 0)
    {
        var1 = WorkModuleImplFloat.get_float(0x6000003);
        var2 = (float)WorkModuleImpl.get_int(0x11000002) + 0;
        var3 = WorkModuleImplFloat.get_float(0x6000011);
        var4 = WorkModuleImplFloat.get_float(0x6000012);
        var5 = var3 + var4 * var2 / var1;
        KineticModuleImpl.set_friction(0x3, var5, 0);
    }
}

int func_2334()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0, 0x200, 0x1000);
    return 0;
}

int func_2335()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0x1000, 0x200, 0);
    return 0;
}

int func_2336()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0, 0x200, 0);
    return 0;
}

int func_2337()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0, 0x200, 0);
    return 0;
}

int func_2338()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x412, 0, 0x200, 0);
    return 0;
}

void func_2339()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2341();
    func_78(func_2340);
}

void func_2340()
{
    func_33();
    if (MotionModuleImpl.is_end())
    {
        if (ControlModuleImpl(0x2713, 0x1))
        {
            func_16(0x160, 0x1);
            return;
        }
        else
        {
            func_16(0x15f, 0);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2341();
    }
    func_2367();
}

void func_2341()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x227);
        }
        else
        {
            func_22(0x227, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x22c);
        }
        else
        {
            func_22(0x227, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2342()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2344();
    if (!StopModuleImpl(0x1))
    {
        func_2345();
    }
    global16 = func_2345;
    func_78(func_2343);
}

void func_2343()
{
    if (ControlModuleImpl(0x2713, 0x1))
    {
        func_16(0x160, 0x1);
        return;
    }
    if (StatusModuleImpl(0x6) == 0 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2344();
    }
    if (0 < func_2367())
    {
        return;
    }
}

void func_2344()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x228);
        }
        else
        {
            func_22(0x228, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x22d);
        }
        else
        {
            func_22(0x22d, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2345()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    if (WorkModuleImpl.is_flag(0x2100000e) == 0)
    {
        WorkModuleImpl.inc_int(0x11000003);
        var0 = (float)WorkModuleImpl.get_int(0x1600001d) + 0;
        var1 = (float)WorkModuleImpl.get_int(0x11000003) + 0;
        var2 = var1 / var0;
        WorkModuleImpl.set_float(var2 + 0, 0x1000008);
        if (var0 <= var1)
        {
            WorkModuleImpl.on_flag2(0x2100000e);
            SoundModuleImpl(0x2710, 0x81b006a);
        }
    }
    if (!WorkModuleImpl.is_flag(0x2100000f))
    {
        WorkModuleImpl.inc_int(0x11000004);
        var3 = (float)WorkModuleImpl.get_int(0x11000004) + 0;
        var4 = (float)WorkModuleImpl.get_int(0x1600001b) + 0;
        if (var4 <= var3)
        {
            WorkModuleImpl.on_flag2(0x2100000f);
        }
    }
}

void func_2346()
{
    int var0;
    WorkModuleImpl.off_flag2(0x2100000d);
    var0 = WorkModuleImpl.get_int(0x16000016);
    WorkModuleImpl.set_int(var0, 0x11000005);
    func_2348();
    if (!StopModuleImpl(0x1))
    {
        func_2349();
    }
    global16 = func_2349;
    func_78(func_2347);
}

void func_2347()
{
    int var0;
    if (func_56())
    {
        return;
    }
    if (func_641())
    {
        return;
    }
    var0 = WorkModuleImpl.get_int(0x11000005);
    if (var0 <= 0)
    {
        func_16(0x162, 0x1);
        return;
    }
    if (StatusModuleImpl(0x6) == 0 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2348();
    }
    func_2367();
}

void func_2348()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        func_100(0);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x229);
        }
        else
        {
            func_22(0x229, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        func_100(0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x22e);
        }
        else
        {
            func_22(0x22e, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2349()
{
    WorkModuleImpl.dec_int(0x11000005);
}

void func_2350()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2352();
    func_78(func_2351);
}

void func_2351()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0x1);
            return;
        }
        else if (global18 == 0x2)
        {
            func_16(0x10, 0x1);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2352();
    }
    func_2367();
}

void func_2352()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x22a);
        }
        else
        {
            func_22(0x22a, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x22f);
        }
        else
        {
            func_22(0x22f, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2353()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2355();
    func_78(func_2354);
}

void func_2354()
{
    if (func_56())
    {
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0x1);
            return;
        }
        else
        {
            func_16(0x10, 0x1);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2355();
    }
    func_2367();
}

void func_2355()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        func_100(0);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x22b);
        }
        else
        {
            func_22(0x22b, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        func_100(0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x230);
        }
        else
        {
            func_22(0x230, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2356()
{
    
}

void func_2357()
{
    
}

void func_2358()
{
    
}

void func_2359()
{
    
}

void func_2360()
{
    printf("--status_end_SpecialS2End(Next Status=%d)", global6);
    if (global6 == 0x10)
    {
        WorkModuleImpl.on_flag2(0x20000044);
    }
}

void func_2361()
{
    if (global4 == 0x153)
    {
        func_2362();
    }
    else if (global4 == 0x15f)
    {
        func_2363();
    }
    else if (global4 == 0x160)
    {
        func_2364();
    }
    else if (global4 == 0x161)
    {
        func_2365();
        func_2366();
    }
    else if (global4 == 0x162)
    {
        func_2366();
    }
}

void func_2362()
{
    float var0;
    float var1;
    float var2;
    float var3;
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    var2 = var0;
    var3 = var1;
    if (global18 == 0x2)
    {
        if (var3 < 0)
        {
            var3 *= WorkModuleImplFloat.get_float(0x6000015);
            KineticModuleImpl(0xe, 0x1, 0, 0, var3, 0, 0, 0);
            KineticModuleImpl.enable_energy(0x1);
        }
    }
}

void func_2363()
{
    
}

void func_2364()
{
    float var0;
    int var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    var0 = PostureModuleImplFloat.get_lr();
    func_2382();
    var1 = WorkModuleImpl.get_int(0x11000004);
    var2 = WorkModuleImplFloat.get_float(0x6000027);
    if (global18 == 0x2)
    {
        var3 = WorkModuleImplFloat.get_float(0x6000018);
        var4 = WorkModuleImplFloat.get_float(0x600001a);
        var5 = (var3 + (float)var1 * var4) * var0;
        var6 = WorkModuleImplFloat.get_float(0x600001f);
        KineticModuleImpl(0xe, 0x3, 0x6, var5 * var2, 0, 0, 0, 0);
        KineticModuleImpl.set_friction(0x3, var6 * var2, 0);
        WorkModuleImpl.set_int(0x2, 0x11000002);
    }
    else
    {
        var3 = WorkModuleImplFloat.get_float(0x6000017);
        var4 = WorkModuleImplFloat.get_float(0x6000019);
        var5 = (var3 + (float)var1 * var4) * var0;
        var7 = WorkModuleImplFloat.get_float(0x600001e);
        KineticModuleImpl(0xe, 0x3, 0, var5 * var2, 0, 0, 0, 0);
        KineticModuleImpl.set_friction(0x3, var7 * var2, 0);
        WorkModuleImpl.set_int(0, 0x11000002);
    }
    KineticModuleImpl.set_limit_speed(0x3, -1.0f, 0);
    KineticModuleImpl.enable_energy(0x3);
    sys_35(0x1, 0x1);
    sys_35(0x1, 0x2);
    sys_35(0x1, 0);
}

void func_2365()
{
    int var0;
    float var1;
    float var2;
    var0 = WorkModuleImpl.get_int(0x11000003);
    var1 = WorkModuleImplFloat.get_float(0x600001c);
    var2 = (float)var0 * var1;
    AttackModuleImpl(0x272d, var2);
}

void func_2366()
{
    float var0;
    float var1;
    float var2;
    float var3;
    int var4;
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    var2 = var0;
    var3 = var1;
    var4 = 0;
    if (global18 == 0x2)
    {
        if (global4 == 0x161)
        {
            var2 *= WorkModuleImplFloat.get_float(0x6000021);
        }
        else
        {
            var2 *= WorkModuleImplFloat.get_float(0x6000023);
        }
        var4 = 0x6;
        KineticModuleImpl(0xe, 0x1, 0, 0, var3, 0, 0, 0);
        KineticModuleImpl.enable_energy(0x1);
    }
    else
    {
        if (global4 == 0x161)
        {
            var2 *= WorkModuleImplFloat.get_float(0x6000020);
        }
        else
        {
            var2 *= WorkModuleImplFloat.get_float(0x6000022);
        }
        var4 = 0;
        sys_35(0x1, 0x1);
    }
    KineticModuleImpl(0xe, 0x3, var4, var2, 0, 0, 0, 0);
    KineticModuleImpl.set_limit_speed(0x3, -1.0f, 0);
    KineticModuleImpl.enable_energy(0x3);
    WorkModuleImpl.set_int(global18, 0x11000002);
}

int func_2367()
{
    if (global3 == 0)
    {
        if (func_2376() != 0)
        {
            return 0x1;
        }
    }
    if (func_2377() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2368()
{
    if (global4 == 0x153 || global4 == 0x15f)
    {
        func_2370();
    }
    else if (global4 == 0x160)
    {
        func_2371();
    }
    else if (global4 == 0x161)
    {
        func_2372();
        func_2373();
    }
    else if (global4 == 0x162)
    {
        func_2373();
    }
}

void func_2369(int arg0)
{
    int var1;
    var1 = WorkModuleImpl.get_int(0x11000006);
    if (var1 >= 0)
    {
        SoundModuleImpl(0x2715, var1);
        WorkModuleImpl.set_int(0, 0x11000006);
    }
    var1 = SoundModuleImpl(0x2710, arg0);
    WorkModuleImpl.set_int(var1, 0x11000006);
}

void func_2370()
{
    if (WorkModuleImpl.is_flag(0x21000013) == 0)
    {
        if (WorkModuleImpl.is_flag(0x2100000e) && WorkModuleImpl.is_flag(0x2100000f))
        {
            EffectModuleImpl(0x1f, 0x39, 0);
            WorkModuleImpl.on_flag2(0x21000013);
        }
    }
}

void func_2371()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    if (func_56())
    {
        return 0x1;
    }
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    var2 = var0;
    var3 = var1;
    var4 = WorkModuleImplFloat.get_float(0x6000027);
    if (global18 != WorkModuleImpl.get_int(0x11000002))
    {
        if (global18 == 0x2)
        {
            var5 = WorkModuleImplFloat.get_float(0x600001f);
            KineticModuleImpl(0xe, 0x3, 0x6, var2, 0, 0, 0, 0);
            KineticModuleImpl.set_friction(0x3, var5 * var4, 0);
        }
        else
        {
            var6 = WorkModuleImplFloat.get_float(0x600001e);
            KineticModuleImpl(0xe, 0x3, 0, var2, 0, 0, 0, 0);
            KineticModuleImpl.set_friction(0x3, var6 * var4, 0);
        }
        KineticModuleImpl.set_limit_speed(0x3, -1.0f, 0);
        KineticModuleImpl.enable_energy(0x3);
        WorkModuleImpl.set_int(global18, 0x11000002);
        sys_35(0x1, 0x1);
        sys_35(0x1, 0x2);
        sys_35(0x1, 0);
    }
}

void func_2372()
{
    
}

void func_2373()
{
    float var0;
    float var1;
    if (global18 != WorkModuleImpl.get_int(0x11000002))
    {
        var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        if (global18 == 0x2)
        {
            KineticModuleImpl(0xe, 0x3, 0x6, var0, 0, 0, 0, 0);
            KineticModuleImpl(0xe, 0x1, 0, 0, var1, 0, 0, 0);
            KineticModuleImpl.enable_energy(0x1);
        }
        else
        {
            KineticModuleImpl(0xe, 0x3, 0, var0, 0, 0, 0, 0);
            sys_35(0x1, 0x1);
        }
        KineticModuleImpl.set_limit_speed(0x3, -1.0f, 0);
        KineticModuleImpl.enable_energy(0x3);
        WorkModuleImpl.set_int(global18, 0x11000002);
        sys_35(0x1, 0x2);
        sys_35(0x1, 0);
    }
}

void func_2374()
{
    
}

void func_2375()
{
    
}

int func_2376()
{
    return 0;
}

int func_2377()
{
    if (global4 == 0x160)
    {
        if (global18 == 0)
        {
            if (GroundModuleImpl(0x2724) == 0x1)
            {
                func_16(0x162, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

void func_2378()
{
    
}

void func_2379()
{
    
}

void func_2380()
{
    
}

void func_2381()
{
    int var0;
    if (global6 != 0x15f)
    {
        var0 = WorkModuleImpl.get_int(0x11000006);
        if (var0 >= 0)
        {
            SoundModuleImpl(0x2715, var0);
        }
    }
}

void func_2382()
{
    float var0;
    float var1;
    float var2;
    float var3;
    var0 = WorkModuleImplFloat.get_float(0x6000026);
    var1 = 0;
    var2 = WorkModuleImplFloat.get_float(0x6000025);
    var3 = WorkModuleImplFloat.get_float(0x6000024);
    sys_31(0x1, 0, 0, 0x2, var0, var1, var2, var3, 0x2, 0x7, 0x7, 0, 0xf, 0xf, 0, 0, 0, 0, 0);
}

void func_2383()
{
    WorkModuleImpl.off_flag2(0x20000044);
    func_583();
}

int func_2384()
{
    if (StatusModuleImpl(0x6) != 0 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        return 0x1;
    }
    return 0;
}

int func_2385()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x11412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2386()
{
    func_33();
    WorkModuleImpl.set_int(0x231, 0x11000002);
    WorkModuleImpl.set_int(0x232, 0x11000003);
    func_78(func_2387);
}

void func_2387()
{
    int var0;
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (MotionModuleImpl.is_end() != 0)
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return 0x1;
        }
    }
    if (func_2384() && global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x9);
        var0 = WorkModuleImpl.get_int(0x11000002);
        if (WorkModuleImpl.is_flag(0x2100000d) != 0)
        {
            func_23(var0);
        }
        else
        {
            func_22(var0, 0, 1.0f);
            WorkModuleImpl.on_flag(0x2100000d);
        }
    }
    else if (global18 != 0 && func_2384())
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        var0 = WorkModuleImpl.get_int(0x11000003);
        if (WorkModuleImpl.is_flag(0x2100000d) != 0)
        {
            func_23(var0);
        }
        else
        {
            func_22(var0, 0, 1.0f);
            WorkModuleImpl.on_flag(0x2100000d);
        }
    }
}

void func_2388()
{
    ArticleModuleImpl.remove(0x1);
}

void func_2389()
{
    float var0;
    float var1;
    float var2;
    int var3;
    var0 = WorkModuleImplFloat.get_float(0x2000007);
    var1 = WorkModuleImplFloat.get_float(0x2000009);
    var1 += (float)WorkModuleImpl.get_int(0x12000008);
    var2 = func_13(global48);
    var3 = ControlModuleImpl(0x4);
    if (var2 >= var0 && (float)var3 < var1)
    {
        WorkModuleImpl.on_flag(0x2100000e);
        sys_21(0x55, 0x1, 0x18);
    }
}

int func_2390()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1422, 0x1000, 0x100, 0x1000);
    return 0;
}

void func_2391()
{
    func_2246();
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000003) + 0, 0x1000004);
    WorkModuleImpl.off_flag2(0x20000078);
    WorkModuleImpl.set_int(0x233, 0x10000086);
    WorkModuleImpl.set_int(0x237, 0x10000087);
    func_2418();
    func_78(func_2392);
}

void func_2392()
{
    if (func_56())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x163, 0);
        return 0x1;
    }
    if (!func_2247())
    {
        func_2418();
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x1);
            func_20(0);
            WorkModuleImpl.on_flag2(0x20000079);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
            func_20(0x2);
            WorkModuleImpl.on_flag2(0x2000007a);
        }
    }
    if (func_2248())
    {
        func_2246();
    }
}

void func_2393()
{
    
}

int func_2394()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0x3, 0x1, 0xffffe000, 0xfffffffc, 0xffffffd0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0);
    return 0;
}

void func_2395()
{
    func_2246();
    WorkModuleImpl.off_flag2(0x20000078);
    WorkModuleImpl.set_int(0x238, 0x10000086);
    WorkModuleImpl.set_int(0x238, 0x10000087);
    func_2418();
    func_78(func_2396);
}

void func_2396()
{
    if (func_56())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x164, 0);
        return 0x1;
    }
    if (global18 == 0 && MotionModuleImplFloat.get_frame() > 1.0f)
    {
        func_16(0x165, 0);
        return 0x1;
    }
}

void func_2397()
{
    
}

int func_2398()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0x3, 0x1, 0xffffe000, 0xfffffffc, 0xffffffd0, 0x2);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0);
    return 0;
}

void func_2399()
{
    func_2246();
    WorkModuleImpl.off_flag2(0x20000078);
    WorkModuleImpl.set_int(0x239, 0x10000086);
    WorkModuleImpl.set_int(0x239, 0x10000087);
    func_2418();
    func_78(func_2400);
}

void func_2400()
{
    if (func_56())
    {
        return 0x1;
    }
    if (global18 == 0)
    {
        func_16(0x165, 0);
        return 0x1;
    }
}

void func_2401()
{
    
}

int func_2402()
{
    StatusModuleImpl(0x5, 0, 0x6, 0x1, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffd0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0);
    return 0;
}

void func_2403()
{
    func_2246();
    WorkModuleImpl.off_flag2(0x20000078);
    WorkModuleImpl.set_int(0x236, 0x10000086);
    WorkModuleImpl.set_int(0x236, 0x10000087);
    func_2418();
    func_78(func_2404);
}

void func_2404()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end() && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0x10, 0);
        return 0x1;
    }
}

void func_2405()
{
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000002) + 0, 0);
}

void func_2406()
{
    int var0;
    var0 = global18;
    WorkModuleImpl.set_int(var0, 0x11000004);
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl.disable_energy(0);
    KineticModuleImpl.disable_energy(0x1);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl.disable_energy(0x3);
    KineticModuleImpl.enable_energy(0x2);
    KineticModuleImpl(0xe, 0x2, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.mul_x_speed_max(0x2, WorkModuleImplFloat.get_float(0x3000014) * WorkModuleImplFloat.get_float(0x7000004));
    KineticModuleImpl.set_max_speed(0x2, WorkModuleImplFloat.get_float(0x3000016), 100.0f);
}

void func_2407()
{
    
}

void func_2408()
{
    if (global6 == 0x163)
    {
        
    }
    else
    {
        EffectModuleImpl(0xa, 0x8000, 0, 0x1);
    }
}

void func_2409()
{
    KineticModuleImpl.change_kinetic_type(0x13);
    KineticModuleImpl.enable_energy(0x2);
    KineticModuleImpl(0xe, 0x2, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.mul_x_speed_max(0x2, WorkModuleImplFloat.get_float(0x3000014) * WorkModuleImplFloat.get_float(0x7000004));
    KineticModuleImpl.set_max_speed(0x2, WorkModuleImplFloat.get_float(0x3000016), 100.0f);
}

void func_2410()
{
    int var0;
    float var1;
    float var2;
    var0 = WorkModuleImpl.get_int(0x11000004);
    if (var0 == 0x2)
    {
        var1 = KineticModuleImplFloat.get_speed_y(0);
        var2 = 1.0f;
        if (var1 > 0)
        {
            var2 = WorkModuleImplFloat.get_float(0x7000000);
            var2 *= WorkModuleImplFloat.get_float(0x7000003);
        }
        KineticModuleImpl.set_trans_mul(0, var2);
    }
    if (WorkModuleImpl.is_flag(0x2100000f) == 0x1)
    {
        KineticModuleImpl.clear_speed(0x2);
        KineticModuleImpl.disable_energy(0x2);
        WorkModuleImpl.off_flag2(0x2100000f);
    }
}

void func_2411()
{
    if (global6 == 0x164 || global6 == 0x165)
    {
        
    }
    else
    {
        EffectModuleImpl(0xa, 0x8000, 0, 0x1);
    }
}

void func_2412()
{
    
}

void func_2413()
{
    
}

void func_2414()
{
    if (global6 == 0x165)
    {
        
    }
    else
    {
        EffectModuleImpl(0xa, 0x8000, 0, 0x1);
    }
}

void func_2415()
{
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl.disable_energy(0);
    KineticModuleImpl.disable_energy(0x1);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl.disable_energy(0x3);
}

void func_2416()
{
    
}

void func_2417()
{
    
}

void func_2418()
{
    if (global18 == 0)
    {
        if (!WorkModuleImpl.is_flag(0x20000078))
        {
            func_22(WorkModuleImpl.get_int(0x10000086), 0, 1.0f);
            WorkModuleImpl.on_flag2(0x20000078);
        }
        else
        {
            func_23(WorkModuleImpl.get_int(0x10000086));
        }
    }
    else if (!WorkModuleImpl.is_flag(0x20000078))
    {
        func_22(WorkModuleImpl.get_int(0x10000087), 0, 1.0f);
        WorkModuleImpl.on_flag2(0x20000078);
    }
    else
    {
        func_23(WorkModuleImpl.get_int(0x10000087));
    }
}

int func_2419()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x14, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1422, 0x1000, 0x100, 0x1000);
    return 0;
}

void func_2420()
{
    int var0;
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x17000006), 0x11000002);
    var0 = 0;
    var0 = !var0;
    GroundModuleImpl(0x2713, var0);
    func_2423();
    if (!StopModuleImpl(0x1))
    {
        func_2422();
    }
    global16 = func_2422;
    func_78(func_2421);
}

void func_2421()
{
    int var0;
    int var1;
    if (MotionModuleImpl.is_end())
    {
        func_16(0x166, 0);
        return;
    }
    var0 = StatusModuleImpl(0x6);
    var1 = 0;
    if (!var0)
    {
        if (global19 == 0)
        {
            if (global18 == 0x2)
            {
                var1 = 0x1;
            }
        }
        else if (global18 == 0)
        {
            var1 = 0x1;
        }
    }
    if (var1)
    {
        func_2423();
    }
    func_2439();
}

void func_2422()
{
    WorkModuleImpl.dec_int(0x11000002);
}

void func_2423()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
        KineticModuleImpl.change_kinetic_type(0x6);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x23a);
        }
        else
        {
            func_22(0x23a, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x23b);
        }
        else
        {
            func_22(0x23b, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2424()
{
    func_2444();
}

int func_2425()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0);
    return 0;
}

void func_2426()
{
    int var0;
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.set_int(0, 0x11000003);
    var0 = 0;
    var0 = !var0;
    GroundModuleImpl(0x2713, var0);
    if (!StopModuleImpl(0x1))
    {
        func_2428();
    }
    global16 = func_2428;
    func_78(func_2427);
}

void func_2427()
{
    int var0;
    int var1;
    if (func_56())
    {
        return 0x1;
    }
    if (WorkModuleImpl.get_int(0x11000003) > WorkModuleImpl.get_int(0x17000009))
    {
        func_16(0x167, 0);
        return;
    }
    var0 = StatusModuleImpl(0x6);
    var1 = 0;
    if (!var0)
    {
        if (global19 == 0)
        {
            if (global18 == 0x2)
            {
                var1 = 0x1;
            }
        }
    }
    if (var1 || var0)
    {
        if (global18 == 0)
        {
            WorkModuleImpl.off_flag2(0x2100000e);
            GroundModuleImpl(0x2710, 0x1);
            KineticModuleImpl.change_kinetic_type(0xd);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x23c);
            }
            else
            {
                func_22(0x23c, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
            func_100(0);
        }
        else
        {
            WorkModuleImpl.on_flag2(0x2100000e);
            GroundModuleImpl(0x2710, 0x5);
            KineticModuleImpl.change_kinetic_type(0xd);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x23c);
            }
            else
            {
                func_22(0x23c, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
            func_100(0x2);
        }
    }
    func_2439();
}

void func_2428()
{
    int var0;
    WorkModuleImpl.inc_int(0x11000003);
    if (WorkModuleImpl.get_int(0x11000003) > WorkModuleImpl.get_int(0x1700000a))
    {
        var0 = 0x1;
        var0 = !var0;
        GroundModuleImpl(0x2713, var0);
    }
}

void func_2429()
{
    func_2444();
}

int func_2430()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0xc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0);
    return 0;
}

void func_2431()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0xf);
        func_22(0x23d, 0, 1.0f);
        WorkModuleImpl.strans_on(0x1e00009a);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
        func_22(0x23e, 0, 1.0f);
        WorkModuleImpl.strans_on(0x1e00001b);
    }
    func_78(func_2432);
}

void func_2432()
{
    int var0;
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    var0 = MotionModuleImpl.is_end();
    if (global19 == 0 && global18 == 0x2)
    {
        func_16(0x10, 0);
        return;
    }
    else if (global18 == 0 && var0)
    {
        func_16(0, 0);
        return;
    }
    if (global19 == 0x2 && global18 == 0)
    {
        func_16(0x19, 0);
        return;
    }
    else if (global18 == 0x2 && var0)
    {
        func_16(0x10, 0);
        return;
    }
    func_2439();
}

void func_2433()
{
    func_2444();
}

int func_2434()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x420, 0, 0x100, 0);
    return 0;
}

void func_2435()
{
    func_22(0x23f, 0, 1.0f);
    WorkModuleImpl.strans_off(0x1e00001b);
    func_78(func_2436);
}

void func_2436()
{
    int var0;
    int var1;
    if (func_56())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0x2)
        {
            func_16(0x10, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00001b))
    {
        if (global18 == 0)
        {
            func_16(0x16, 0);
            return;
        }
    }
    var0 = StatusModuleImpl(0x6);
    var1 = 0;
    if (!var0)
    {
        if (global19 == 0)
        {
            if (global18 == 0x2)
            {
                var1 = 0x1;
            }
        }
        else if (global18 == 0)
        {
            var1 = 0x1;
        }
    }
    if (var1 || var0)
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x1);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
            WorkModuleImpl.strans_on(0x1e00001b);
        }
    }
    func_2439();
}

void func_2437()
{
    func_2444();
}

void func_2438()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    float var8;
    float var9;
    int var10;
    float var11;
    if (global4 == 0x154)
    {
        var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        var0 *= WorkModuleImplFloat.get_float(0x7000005);
        KineticModuleImpl(0xe, 0x3, 0x6, var0, 0, 0, 0, 0);
        KineticModuleImpl.enable_energy(0x3);
        if (WorkModuleImpl.get_int(0x17000006) != 0)
        {
            KineticModuleImpl.set_speed(0x1, 0);
            KineticModuleImpl.enable_energy(0x1);
        }
        sys_35(0x1, 0x2);
        sys_35(0x1, 0);
    }
    else if (global4 == 0x166)
    {
        var2 = WorkModuleImplFloat.get_float(0x34);
        var3 = WorkModuleImplFloat.get_float(0x35);
        var4 = 90.0f * 3.1415927410125732f / (float)0xb4;
        var0 = 0;
        var1 = 0;
        var5 = WorkModuleImplFloat.get_float(0x700000c);
        var6 = 0.5f;
        if (func_13(var2) > 0.125f)
        {
            PostureModuleImpl.set_stick_lr();
            PostureModuleImpl.update_rot_y();
        }
        var7 = PostureModuleImplFloat.get_lr();
        if (global18 == 0)
        {
            var8 = GroundModuleImplFloat(0x5, 0x8);
            var9 = GroundModuleImplFloat(0x6, 0x8);
            var10 = 0x1;
            if (func_13(var2) + func_13(var3) < var6)
            {
                
            }
            else
            {
                var11 = Math.angle_difference(var8, var9, var2, var3);
                if (var11 >= 90.0f * 3.1415927410125732f / (float)0xb4)
                {
                    var10 = 0;
                }
            }
            if (var10 == 0)
            {
                var0 = var5 * var7;
                var1 = 0;
                var4 = Math.atan2(-var8 * var7, var9);
            }
            else
            {
                func_20(0x2);
                GroundModuleImpl(0x2710, 0x5);
            }
        }
        global19 = global18;
        global18 = StatusModuleImpl(0x1);
        if (global18 == 0x2)
        {
            if (func_13(var2) + func_13(var3) >= var6)
            {
                var4 = Math.atan2(var3, var2 * var7);
            }
            var0 = var5 * Math.cos(var4) * var7;
            var1 = var5 * Math.sin(var4);
            KineticModuleImpl.set_accel(0x1, 0);
            KineticModuleImpl.disable_energy(0x1);
        }
        KineticModuleImpl.set_speed(0x3, var0, var1);
        KineticModuleImpl.enable_energy(0x3);
        WorkModuleImpl.set_float(var4, 0x1000006);
        WorkModuleImpl.set_float(var4 * (float)0xb4 / 3.1415927410125732f + 0, 0x1000007);
    }
    else if (global4 == 0x167)
    {
        
    }
    else if (global4 == 0x168)
    {
        var0 = KineticModuleImplFloat.get_speed_x(0x3);
        sys_35(0x1, 0x3);
        KineticModuleImpl.set_speed(0x3, var0 * WorkModuleImplFloat.get_float(0x7000010), 0);
        KineticModuleImpl.set_accel(0x3, 0, 0);
        KineticModuleImpl.set_friction(0x3, WorkModuleImplFloat.get_float(0x7000011), 0);
        KineticModuleImpl.enable_energy(0x3);
        KineticModuleImpl.set_speed(0, 0, 0);
        KineticModuleImpl.disable_energy(0);
        KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
        KineticModuleImpl.set_speed(0x1, WorkModuleImplFloat.get_float(0x7000012));
        KineticModuleImpl.set_accel(0x1, -WorkModuleImplFloat.get_float(0x7000013));
        KineticModuleImpl.enable_energy(0x1);
    }
}

void func_2439()
{
    if (!global3)
    {
        func_2443();
    }
}

void func_2440()
{
    int var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    float var8;
    float var9;
    float var10;
    float var11;
    float var12;
    float var13;
    if (global4 == 0x154)
    {
        if (global18 == 0x2)
        {
            if (WorkModuleImpl.get_int(0x17000006) != 0)
            {
                var0 = WorkModuleImpl.get_int(0x11000002);
                if (var0 <= 0)
                {
                    KineticModuleImpl.set_accel(0x1, -WorkModuleImplFloat.get_float(0x7000008));
                }
                else
                {
                    KineticModuleImpl.set_accel(0x1, 0);
                }
            }
            KineticModuleImpl.set_friction(0x3, WorkModuleImplFloat.get_float(0x7000007), 0);
        }
        func_2441();
    }
    else if (global4 == 0x166)
    {
        var1 = WorkModuleImplFloat.get_float(0x1000006);
        if (global18 == 0x2)
        {
            
        }
        else
        {
            var2 = GroundModuleImplFloat(0x5, 0x8);
            var3 = GroundModuleImplFloat(0x6, 0x8);
            var1 = Math.atan2(-var2 * PostureModuleImplFloat.get_lr(), var3);
            var4 = PostureModuleImplFloat.get_lr();
            var5 = KineticModuleImplFloat.get_sum_speed_x(0x1);
            var6 = KineticModuleImplFloat.get_sum_speed_y(0x1);
            var7 = Math.sqrt(var5 * var5 + var6 * var6);
            var8 = var7 * Math.cos(var1) * var4;
            var9 = var7 * Math.sin(var1);
            KineticModuleImpl.set_speed(0x3, var8, var9);
        }
        WorkModuleImpl.set_float(var1, 0x1000006);
        WorkModuleImpl.set_float(var1 * (float)0xb4 / 3.1415927410125732f + 0, 0x1000007);
        var0 = WorkModuleImpl.get_int(0x11000003);
        if (var0 > WorkModuleImpl.get_int(0x1700000b))
        {
            var10 = WorkModuleImplFloat.get_float(0x700000d);
            var11 = func_13(var10 * Math.cos(var1));
            var12 = func_13(var10 * Math.sin(var1));
            KineticModuleImpl.set_friction(0x3, var11, var12);
        }
        else
        {
            KineticModuleImpl.set_friction(0x3, 0, 0);
        }
    }
    else if (global4 == 0x167)
    {
        var1 = WorkModuleImplFloat.get_float(0x1000006);
        var13 = var1 * (float)0xb4 / 3.1415927410125732f;
        if (!global3)
        {
            if (var13 > 0)
            {
                var13 -= 10.0f;
                if (var13 < 0)
                {
                    var13 = 0;
                }
            }
            else if (var13 < 0)
            {
                var13 += 10.0f;
                if (var13 > 0)
                {
                    var13 = 0;
                }
            }
        }
        WorkModuleImpl.set_float(var13 * 3.1415927410125732f / (float)0xb4 + 0, 0x1000006);
        WorkModuleImpl.set_float(var13 + 0, 0x1000007);
    }
}

void func_2441()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    int var6;
    float var7;
    int var8;
    float var9;
    int var10;
    float var11;
    float var12;
    float var13;
    float var14;
    float var15;
    var0 = MotionModuleImplFloat.get_frame() + 1.0f;
    if (var0 >= (float)0x15)
    {
        if (!WorkModuleImpl.is_flag(0x2100000f))
        {
            WorkModuleImpl.set_float(global48 + 0, 0x34);
            WorkModuleImpl.set_float(global32 + 0, 0x35);
            if (func_13(global48) > 0.125f)
            {
                PostureModuleImpl.set_stick_lr();
                PostureModuleImpl.update_rot_y();
            }
            var1 = 90.0f * 3.1415927410125732f / (float)0xb4;
            var2 = 0.5f;
            var3 = PostureModuleImplFloat.get_lr();
            if (global18 == 0)
            {
                var4 = GroundModuleImplFloat(0x5, 0x8);
                var5 = GroundModuleImplFloat(0x6, 0x8);
                var6 = 0x1;
                if (func_13(global48) + func_13(global32) < var2)
                {
                    
                }
                else
                {
                    var7 = Math.angle_difference(var4, var5, global48, global32);
                    if (var7 >= 90.0f * 3.1415927410125732f / (float)0xb4)
                    {
                        var6 = 0;
                    }
                }
                if (var6 == 0)
                {
                    var1 = Math.atan2(-var4 * var3, var5);
                }
                else
                {
                    var8 = 0x1;
                }
            }
            else
            {
                var8 = 0x1;
            }
            if (var8)
            {
                if (func_13(global48) + func_13(global32) >= var2)
                {
                    var1 = Math.atan2(global32, global48 * var3);
                }
            }
            var9 = 360.0f - var1 * (float)0xb4 / 3.1415927410125732f;
            if (var9 > 360.0f)
            {
                var9 -= 360.0f;
            }
            else if (var9 > 180.0f)
            {
                var9 = -(var1 * (float)0xb4 / 3.1415927410125732f);
            }
            WorkModuleImpl.set_float(var9 + 0, 0x1000008);
            WorkModuleImpl.on_flag2(0x2100000f);
        }
        var10 = MotionModuleImpl.get_end_frame();
        var11 = (float)var10;
        var12 = var11 - (float)0x15;
        var13 = var11 - var0;
        var13 = var12 - var13;
        var14 = WorkModuleImplFloat.get_float(0x1000008) / var12;
        var15 = var14 * var13;
        WorkModuleImpl.set_float(var15 + 0, 0x1000007);
        FighterUtil(0x6, var15);
    }
}

void func_2442()
{
    
}

void func_2443()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    if (global4 == 0x166)
    {
        if (WorkModuleImpl.is_flag(0x2100000e) && global18 == 0)
        {
            var0 = GroundModuleImplFloat(0x5, 0x8);
            var1 = GroundModuleImplFloat(0x6, 0x8);
            var2 = KineticModuleImplFloat.get_sum_speed_x(0x1);
            var3 = KineticModuleImplFloat.get_sum_speed_y(0x1);
            var4 = Math.angle_difference(var0, var1, var2, var3);
            var5 = WorkModuleImplFloat.get_float(0x700000f);
            if (var4 >= (var5 + 90.0f) * 3.1415927410125732f / (float)0xb4)
            {
                func_16(0x168, 0);
                return;
            }
            else
            {
                
            }
        }
        else
        {
            
        }
    }
    else
    {
        
    }
}

void func_2444()
{
    int var0;
    float var1;
    if (global4 == 0x166 || global4 == 0x168)
    {
        if (global18 == 0x2)
        {
            var0 = WorkModuleImpl.get_int(0x17000014);
            WorkModuleImpl.set_float((float)var0 + 0, 0);
            var1 = WorkModuleImplFloat.get_float(0x700000e);
            WorkModuleImpl.set_float(var1, 0x1);
            WorkModuleImpl.on_flag(0x20000003);
        }
    }
}

int func_2445()
{
    if (StatusModuleImpl(0x6) != 0 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        return 0x1;
    }
    return 0;
}

int func_2446()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1422, 0x1000, 0x100, 0x1000);
    return 0;
}

int func_2447()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0x40, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0);
    return 0;
}

int func_2448()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0x40, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0);
    return 0;
}

void func_2449()
{
    WorkModuleImpl.strans_on(0x1e00009a);
    WorkModuleImpl.strans_on(0x1e00009b);
    WorkModuleImpl.set_float(0, 0x1000006);
    WorkModuleImpl.set_float((float)WorkModuleImpl.get_int(0x1700001e) + 0, 0);
    func_78(func_2450);
}

int func_2450()
{
    float var0;
    int var1;
    var0 = WorkModuleImplFloat.get_float(0x7000017);
    MotionModuleImpl.set_motion_rate(var0);
    if (func_56())
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0)
    {
        if (MotionModuleImpl.is_end())
        {
            if (global18 == 0x2 && WorkModuleImpl.is_flag(0x2100000d) == 0x1)
            {
                WorkModuleImpl.off_flag2(0x2100000d);
                WorkModuleImpl.strans_off(0x1e00009a);
                WorkModuleImpl.strans_off(0x1e00009b);
                var1 = WorkModuleImpl.get_int(0x10000002);
                WorkModuleImpl.set_int(var1, 0x10000001);
                GroundModuleImpl(0x2711, 0x4);
                KineticModuleImpl.change_kinetic_type(0x64);
                GroundModuleImpl(0x2710, 0x5);
                func_20(0x2);
                func_22(0x243, 0, 1.0f);
                callFunc3(func_2451);
            }
        }
        if (WorkModuleImpl.check_strans(0x1e00009a) != 0)
        {
            if (MotionModuleImpl.is_end() != 0)
            {
                if (ControlModuleImpl(0x2712, 0x1) != 0)
                {
                    func_16(0x169, 0x1);
                    return 0x1;
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e00009b) != 0)
        {
            if (MotionModuleImpl.is_end() != 0)
            {
                func_16(0x16a, 0);
                return 0x1;
            }
        }
    }
    if (func_2445() && global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x9);
        func_20(0);
        func_22(0x240, 0, 1.0f);
        WorkModuleImpl.on_flag(0x2100000d);
    }
    else if (func_2445() && global18 != 0 || global18 == 0x2)
    {
        if (StatusModuleImpl(0x6) != 0)
        {
            WorkModuleImpl.strans_off(0x1e00009a);
            WorkModuleImpl.strans_off(0x1e00009b);
            var1 = WorkModuleImpl.get_int(0x10000002);
            WorkModuleImpl.set_int(var1, 0x10000001);
            GroundModuleImpl(0x2711, 0x4);
            KineticModuleImpl.change_kinetic_type(0x64);
            GroundModuleImpl(0x2710, 0x5);
            func_20(0x2);
            if (WorkModuleImpl.is_flag(0x2100000d) != 0)
            {
                func_23(0x243);
            }
            else
            {
                func_22(0x243, 0, 1.0f);
            }
            callFunc3(func_2451);
        }
    }
    return 0;
}

void func_2451()
{
    if (func_56())
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00009a) != 0)
    {
        if (MotionModuleImpl.is_end() != 0)
        {
            if (ControlModuleImpl(0x2712, 0x1) != 0)
            {
                func_16(0x169, 0x1);
                return 0x1;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00009b) != 0)
    {
        if (MotionModuleImpl.is_end() != 0)
        {
            func_16(0x16a, 0);
            return 0x1;
        }
    }
    if (MotionModuleImpl.is_end() != 0)
    {
        func_16(0x10, 0);
        return 0x1;
    }
    if (global18 == 0)
    {
        func_16(0x19, 0);
        return 0x1;
    }
}

void func_2452()
{
    func_22(0x242, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_2460();
    }
    global16 = func_2460;
    func_78(func_2453);
}

void func_2453()
{
    int var0;
    if (func_56())
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    var0 = WorkModuleImpl.get_int(0x17000015);
    if (MotionModuleImpl.is_end() != 0 || ControlModuleImpl(0x2713, 0x1) != 0 || WorkModuleImplFloat.get_float(0x1000006) >= (float)var0)
    {
        func_16(0x16a, 0x1);
        return 0x1;
    }
}

void func_2454()
{
    WorkModuleImpl.strans_on(0x1e000004);
    WorkModuleImpl.strans_on(0x1e000000);
    func_78(func_2455);
}

void func_2455()
{
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (func_2445() && global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x9);
        if (WorkModuleImpl.is_flag(0x2100000d) != 0)
        {
            func_23(0x241);
        }
        else
        {
            func_22(0x241, 0, 1.0f);
            WorkModuleImpl.on_flag(0x2100000d);
        }
        WorkModuleImpl.strans_on(0x1e000000);
        WorkModuleImpl.strans_off(0x1e000004);
        return;
    }
    else if (func_2445())
    {
        if (global18 == 0)
        {
            func_16(0x19, 0);
            return 0x1;
        }
        KineticModuleImpl.change_kinetic_type(0x64);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d) != 0)
        {
            func_23(0x243);
        }
        else
        {
            func_22(0x243, 0, 1.0f);
            WorkModuleImpl.on_flag(0x2100000d);
        }
        WorkModuleImpl.strans_on(0x1e000004);
        WorkModuleImpl.strans_off(0x1e000000);
        set_main(func_2456);
    }
    if (WorkModuleImpl.check_strans(0x1e000004) != 0)
    {
        if (MotionModuleImpl.is_end() != 0)
        {
            func_16(0x10, 0);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000000) != 0)
    {
        if (MotionModuleImpl.is_end() != 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
}

int func_2456()
{
    if (WorkModuleImpl.check_strans(0x1e000004) != 0)
    {
        if (MotionModuleImpl.is_end() != 0)
        {
            func_16(0x10, 0x1);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000000) != 0)
    {
        if (MotionModuleImpl.is_end() != 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
    if (func_2445())
    {
        if (global18 == 0)
        {
            func_16(0x19, 0x1);
            return 0x1;
        }
    }
    return 0;
}

void func_2457()
{
    
}

void func_2458()
{
    
}

void func_2459()
{
    
}

void func_2460()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x7000017);
    WorkModuleImpl.add_float(1.0f / var0, 0x1000006);
}

void func_2461()
{
    float var0;
    float var1;
    float var2;
    float var3;
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    var1 = (float)WorkModuleImpl.get_int(0x17000015);
    var2 = WorkModuleImplFloat.get_float(0x7000016);
    var3 = var0 / var1 * (var2 - 1.0f) + 1.0f;
    AttackModuleImpl(0x2728, var3);
}

int func_2462()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0, 0x400, 0x1000);
    return 0;
}

void func_2463()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2465();
    func_78(func_2464);
}

void func_2464()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2465();
    }
    if (WorkModuleImpl.is_flag(0x21000011) == 0x1)
    {
        if (WorkModuleImpl.is_flag(0x21000012) == 0)
        {
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x800000e));
            WorkModuleImpl.on_flag2(0x21000012);
        }
    }
    else if (WorkModuleImpl.is_flag(0x21000012) == 0x1)
    {
        MotionModuleImpl.set_motion_rate(1.0f);
        WorkModuleImpl.off_flag2(0x21000012);
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
        }
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
    }
}

void func_2465()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x10);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_24(0x244);
        }
        else
        {
            func_22(0x244, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_24(0x246);
        }
        else
        {
            func_22(0x246, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2466()
{
    
}

int func_2467()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2468()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2470();
    func_78(func_2469);
}

void func_2469()
{
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2470();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_2470()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x10);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x245);
        }
        else
        {
            func_22(0x245, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x247);
        }
        else
        {
            func_22(0x247, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2471()
{
    
}

int func_2472()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0x1000, 0x400, 0x1000);
    return 0;
}

void func_2473()
{
    func_33();
    func_78(func_2474);
}

void func_2474()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2475();
    }
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (global18 == 0 && func_39() != 0)
        {
            return;
        }
        else if (global18 == 0x2 && func_41() != 0)
        {
            return;
        }
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_2475()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x9);
        func_100(0);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x248);
        }
        else
        {
            func_22(0x248, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        func_100(0x4);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x249);
            KineticModuleImpl.change_kinetic_type(0xa);
        }
        else
        {
            func_22(0x249, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2476()
{
    int var0;
    float var1;
    float var2;
    var0 = MotionModuleImpl.get_motion();
    if (var0 != 0x248)
    {
        WorkModuleImpl.off_flag2(0x2100000f);
    }
    else
    {
        WorkModuleImpl.on_flag2(0x2100000f);
    }
    if (StatusModuleImpl(0x1) == 0x2)
    {
        var1 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var2 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        var1 *= WorkModuleImplFloat.get_float(0x800000f);
        KineticModuleImpl(0xe, 0x3, 0x6, var1, 0, 0, 0, 0);
        KineticModuleImpl.set_friction(0x3, WorkModuleImplFloat.get_float(0x8000010), 0);
        KineticModuleImpl.enable_energy(0x3);
        KineticModuleImpl(0xe, 0x1, 0, 0, var2, 0, 0, 0);
        KineticModuleImpl.enable_energy(0x1);
        sys_35(0x1, 0x2);
        sys_35(0x1, 0);
    }
    else
    {
        
    }
}

void func_2477()
{
    float var0;
    float var1;
    float var2;
    float var3;
    if (StatusModuleImpl(0x1) == 0x2)
    {
        KineticModuleImpl.enable_energy(0x1);
        if (WorkModuleImpl.is_flag2(0x2100000e) == 0x1)
        {
            if (WorkModuleImpl.is_flag2(0x2100000f) == 0)
            {
                WorkModuleImpl.on_flag2(0x2100000f);
                if (WorkModuleImpl.is_flag2(0x2000007d) == 0)
                {
                    var0 = KineticModuleImplFloat.get_speed_y(0x1);
                    var0 = WorkModuleImplFloat.get_float(0x8000011);
                    KineticModuleImpl.set_speed(0x1, var0);
                    WorkModuleImpl.on_flag2(0x2000007d);
                }
            }
            var1 = -WorkModuleImplFloat.get_float(0x8000012);
            var2 = WorkModuleImplFloat.get_float(0x8000013);
            KineticModuleImpl.set_accel(0x1, var1);
            KineticModuleImpl.set_limit_speed(0x1, var2);
        }
        else
        {
            var1 = -WorkModuleImplFloat.get_float(0x3000018);
            var3 = WorkModuleImplFloat.get_float(0x3000019);
            KineticModuleImpl.set_accel(0x1, var1);
            KineticModuleImpl.set_limit_speed(0x1, var3);
        }
    }
}

void func_2478()
{
    
}

void func_2479()
{
    
}

int func_2480()
{
    StatusModuleImpl(0x5, 0xffffffff, 0, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0x80000, 0x400, 0x1000);
    return 0;
}

void func_2481()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.off_flag2(0x2100000e);
    WorkModuleImpl.off_flag2(0x2100000f);
    WorkModuleImpl.off_flag2(0x21000010);
    WorkModuleImpl.off_flag2(0x21000011);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x18000015), 0x11000003);
    WorkModuleImpl.set_float(1.0f + 0, 0x1000006);
    if (global18 == 0)
    {
        WorkModuleImpl.set_int(0, 0x11000002);
        func_22(0x24a, 0, 1.0f);
        KineticModuleImpl.change_kinetic_type(0xf);
        func_2239();
        GroundModuleImpl(0x2710, 0x2);
    }
    else
    {
        WorkModuleImpl.set_int(0x2, 0x11000002);
        func_22(0x24d, 0, 1.0f);
        KineticModuleImpl.change_kinetic_type(0x11);
        func_2240();
    }
    func_78(func_2482);
}

void func_2482()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0x16c, 0);
        return;
    }
    if (WorkModuleImpl.get_int(0x11000002) == 0)
    {
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            if (global18 == 0)
            {
                GroundModuleImpl(0x2710, 0x1);
            }
            WorkModuleImpl.off_flag2(0x2100000e);
        }
        if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
        {
            if (global18 == 0)
            {
                KineticModuleImpl.change_kinetic_type(0xf);
                func_2239();
                return;
            }
            else
            {
                KineticModuleImpl.change_kinetic_type(0x11);
                func_2240();
                return;
            }
        }
    }
    else if (global18 == 0 && GroundModuleImpl(0x2722, 0x8))
    {
        func_16(0x16c, 0);
        return;
    }
}

void func_2483()
{
    
}

int func_2484()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2485()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0 && global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        func_22(0x24b, 0, WorkModuleImplFloat.get_float(0x8000016));
        func_78(func_2486);
    }
    else if (var0 == 0 && global18 == 0x2)
    {
        func_22(0x24c, 0, 1.0f);
        if (!StopModuleImpl(0x1))
        {
            func_2488();
        }
        global16 = func_2488;
        func_78(func_2487);
    }
    else if (var0 == 0x2 && global18 == 0)
    {
        func_2241();
        KineticModuleImpl.change_kinetic_type(0x6);
        func_22(0x24e, 0, WorkModuleImplFloat.get_float(0x8000017));
        func_78(func_2489);
    }
    else if (var0 == 0x2 && global18 == 0x2)
    {
        func_22(0x24f, 0, 1.0f);
        WorkModuleImpl.strans_on(0x1e00009a);
        WorkModuleImpl.strans_off(0x1e00009b);
        WorkModuleImpl.strans_off(0x1e00009c);
        func_78(func_2490);
    }
}

void func_2486()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0, 0);
        return;
    }
}

void func_2487()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
}

void func_2488()
{
    if (WorkModuleImpl.is_flag(0x21000010))
    {
        KineticModuleImpl.change_kinetic_type(0);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0x11);
    }
}

void func_2489()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0, 0);
        return;
    }
}

void func_2490()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00009a))
    {
        if (MotionModuleImpl.is_end())
        {
            func_16(0xe, 0);
            return;
        }
        if (global18 == 0)
        {
            if (WorkModuleImpl.is_flag(0x21000011) == 0)
            {
                func_2241();
                KineticModuleImpl.change_kinetic_type(0x6);
                func_22(0x24e, 0, 1.0f);
                WorkModuleImpl.strans_off(0x1e00009a);
                WorkModuleImpl.strans_on(0x1e00009b);
                WorkModuleImpl.strans_on(0x1e00009c);
            }
            else
            {
                WorkModuleImpl.set_float((float)WorkModuleImpl.get_int(0x1800001a) + 0, 0);
                func_16(0x19, 0);
                return 0x1;
            }
        }
    }
    else
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
        if (MotionModuleImpl.is_end())
        {
            func_16(0, 0);
            return;
        }
    }
}

void func_2491()
{
    
}

void func_2492()
{
    int var0;
    float var1;
    float var2;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0 && global18 == 0)
    {
        var1 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var2 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        KineticModuleImpl(0xe, 0x3, 0, var1, 0, 0, 0, 0);
        KineticModuleImpl.enable_energy(0x3);
        KineticModuleImpl.disable_energy(0);
    }
    else if (var0 == 0x2 && global18 == 0x2)
    {
        var1 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var2 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        KineticModuleImpl(0x2);
        KineticModuleImpl(0xe, 0x1, 0, 0, var2, 0, 0, 0);
        KineticModuleImpl(0xe, 0x3, 0x9, var1, 0, 0, 0, 0);
        KineticModuleImpl.enable_energy(0x1);
        KineticModuleImpl.enable_energy(0x3);
    }
}

void func_2493()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0 && global18 == 0)
    {
        func_2494(0x8000018, 0x3000007);
    }
    else if (var0 == 0x2 && global18 == 0)
    {
        func_2494(0x8000019, 0x3000007);
    }
}

void func_2494(int arg0, int arg1)
{
    float var2;
    var2 = 1.0f;
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        var2 = WorkModuleImplFloat.get_float(arg0);
    }
    else
    {
        var2 = WorkModuleImplFloat.get_float(arg1);
    }
    KineticModuleImpl.set_friction(0x3, var2, 0);
}

int func_2495()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1442, 0x1013e2, 0, 0);
    return 0;
}

void func_2496()
{
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x1);
    KineticModuleImpl.set_speed(0x2, 0, 0);
    KineticModuleImpl.set_controller_accel_add(0);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl.set_speed(0, 0, 0);
    KineticModuleImpl.disable_energy(0);
    KineticModuleImpl(0xe, 0x3, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x3);
}

void func_2497()
{
    sys_21(0x25);
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x3);
    if (global18 == 0)
    {
        func_22(0x250, 0, 1.0f);
    }
    else
    {
        func_22(0x253, 0, 1.0f);
    }
    func_78(func_2498);
}

void func_2498()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0x16d);
        return;
    }
}

void func_2499()
{
    func_2510();
}

int func_2500()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10442, 0x1003e2, 0, 0);
    return 0;
}

void func_2501()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x3);
    if (global18 == 0)
    {
        func_22(0x251, 0, 1.0f);
    }
    else
    {
        func_22(0x254, 0, 1.0f);
    }
    var0 = PostureModuleImplFloat.get_pos_x();
    var1 = PostureModuleImplFloat.get_pos_y() + 8.0f;
    var2 = PostureModuleImplFloat.get_pos_z();
    var3 = 1.0f;
    if (PostureModuleImplFloat.get_lr() == -1.0f)
    {
        var3 = -1.0f;
    }
    var4 = 400.0f;
    var4 *= PostureModuleImplFloat.get_scale();
    sys_21(0x3ef, var0, var1, var2, var3, 0, 0, var4, 5.0f, 40.0f, 80.0f, 640.0f, -0.019999999552965164f, 0.800000011920929f);
    var5 = 0;
    WorkModuleImpl.set_float(var5 + 0, 0x37);
    sys_21(0x3f1, var5);
    if (!StopModuleImpl(0x1))
    {
        func_2503();
    }
    global16 = func_2503;
    func_78(func_2502);
}

void func_2502()
{
    if ((float)WorkModuleImpl.get_int(0x14000000) <= global9)
    {
        func_16(0x16e);
        return;
    }
}

void func_2503()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x37);
    if (var0 < 0.800000011920929f)
    {
        var0 += 0.03999999910593033f;
        if (var0 >= 0.800000011920929f)
        {
            var0 = 0.800000011920929f;
        }
        sys_21(0x3f1, var0);
        WorkModuleImpl.set_float(var0 + 0, 0x37);
    }
}

void func_2504()
{
    if (global6 != 0x16e)
    {
        sys_21(0x3f0);
    }
    func_2510();
}

int func_2505()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x440, 0x1003e2, 0, 0);
    return 0;
}

void func_2506()
{
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x3);
    if (global18 == 0)
    {
        func_22(0x252, 0, 1.0f);
    }
    else
    {
        func_22(0x255, 0, 1.0f);
    }
    if (!StopModuleImpl(0x1))
    {
        func_2508();
    }
    global16 = func_2508;
    func_78(func_2507);
}

void func_2507()
{
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
        else
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_2508()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x37);
    if (var0 > 0)
    {
        var0 -= 0.019999999552965164f;
        if (var0 <= 0)
        {
            var0 = 0;
        }
        sys_21(0x3f1, var0);
        WorkModuleImpl.set_float(var0 + 0, 0x37);
    }
}

void func_2509()
{
    sys_21(0x3f0);
    sys_21(0x26);
    func_111();
}

void func_2510()
{
    if (global6 == 0x156 || global6 == 0x16d || global6 == 0x16e)
    {
        
    }
    else
    {
        HitModuleImpl(0x2710, 0);
        sys_21(0x26);
    }
}


int func_2239()
{
    return StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0;
}

void func_2240(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(arg2);
        GroundModuleImpl(0x2710, arg5);
        if (WorkModuleImpl.is_flag2(arg4))
        {
            func_23(arg0);
        }
        else
        {
            func_22(arg0, 0, 1.0f);
            WorkModuleImpl.on_flag2(arg4);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(arg3);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(arg4))
        {
            func_23(arg1);
        }
        else
        {
            func_22(arg1, 0, 1.0f);
            WorkModuleImpl.on_flag2(arg4);
        }
    }
}

void main()
{
    printf("ENTRY This Fighter is driven by msc.");
    func_0();
    global0 = sys_7(0);
    global1 = sys_7(0x1);
    func_2244();
    sys_0(0x2, func_1);
    sys_0(0x3, func_5);
    sys_0(0x4, func_10);
    set_main(func_73);
}

void func_2242()
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

void func_2243()
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

void func_2244()
{
    global7 = 0x166;
    func_2242();
    func_2245();
    func_2246();
    func_2247();
    func_2248();
    func_2249();
    func_2250();
    func_2251();
    func_2243();
    func_2252();
    global26 = func_2253;
}

void func_2245()
{
    sv_set_mem(0x1, 0, 0x156, func_2377);
    sv_set_mem(0x1, 0x1, 0x156, func_2378);
    sv_set_mem(0x1, 0x2, 0x156, func_2380);
    sv_set_mem(0x1, 0, 0x161, func_2383);
    sv_set_mem(0x1, 0x1, 0x161, func_2384);
    sv_set_mem(0x1, 0x2, 0x161, func_2386);
    sv_set_mem(0x1, 0, 0x162, func_2390);
    sv_set_mem(0x1, 0x1, 0x162, func_2391);
    sv_set_mem(0x1, 0x2, 0x162, func_2393);
    sv_set_mem(0x1, 0, 0x163, func_2396);
    sv_set_mem(0x1, 0x1, 0x163, func_2397);
    sv_set_mem(0x1, 0x2, 0x163, func_2399);
    sv_set_mem(0x1, 0, 0x165, func_2403);
    sv_set_mem(0x1, 0x1, 0x165, func_2404);
    sv_set_mem(0x1, 0x2, 0x165, func_2406);
}

void func_2246()
{
    sv_set_mem(0x1, 0, 0x1, func_2314);
    sv_set_mem(0x1, 0, 0x25, func_2273);
    sv_set_mem(0x1, 0, 0x26, func_2256);
    sv_set_mem(0x1, 0, 0x27, func_2257);
    sv_set_mem(0x1, 0, 0x28, func_2274);
    sv_set_mem(0x1, 0, 0x29, func_2275);
    sv_set_mem(0x1, 0, 0x2a, func_2258);
    sv_set_mem(0x1, 0, 0x2b, func_2259);
    sv_set_mem(0x1, 0, 0x31, func_2260);
    sv_set_mem(0x1, 0, 0x2e, func_2261);
    sv_set_mem(0x1, 0, 0x34, func_2262);
    sv_set_mem(0x1, 0, 0x92, func_2263);
    sv_set_mem(0x1, 0, 0x93, func_2264);
    sv_set_mem(0x1, 0, 0x94, func_2265);
    sv_set_mem(0x1, 0, 0x97, func_2266);
    sv_set_mem(0x1, 0, 0x98, func_2267);
    sv_set_mem(0x1, 0, 0x98, func_2267);
    sv_set_mem(0x1, 0, 0x98, func_2267);
    sv_set_mem(0x1, 0, 0xa1, func_2268);
    sv_set_mem(0x1, 0, 0x152, func_2269);
    sv_set_mem(0x1, 0, 0x153, func_2270);
    sv_set_mem(0x1, 0, 0x154, func_2271);
    sv_set_mem(0x1, 0, 0x155, func_2272);
    sv_set_mem(0x1, 0, 0x157, func_2373);
    sv_set_mem(0x1, 0, 0x158, func_2363);
    sv_set_mem(0x1, 0, 0x2d, func_2285);
    sv_set_mem(0x1, 0, 0x159, func_2318);
    sv_set_mem(0x1, 0, 0x15a, func_2322);
    sv_set_mem(0x1, 0, 0x15c, func_2347);
    sv_set_mem(0x1, 0, 0x15d, func_2334);
    sv_set_mem(0x1, 0, 0x15e, func_2339);
    sv_set_mem(0x1, 0, 0x15f, func_2330);
    sv_set_mem(0x1, 0, 0x160, func_2343);
}

void func_2247()
{
    sv_set_mem(0x1, 0x1, 0x1, func_2276);
    sv_set_mem(0x1, 0x1, 0x34, func_2280);
    sv_set_mem(0x1, 0x1, 0x29, func_2283);
    sv_set_mem(0x1, 0x1, 0x2d, func_2286);
    sv_set_mem(0x1, 0x1, 0x152, func_2352);
    sv_set_mem(0x1, 0x1, 0x153, func_2356);
    sv_set_mem(0x1, 0x1, 0x155, func_2371);
    sv_set_mem(0x1, 0x1, 0x154, func_2359);
    sv_set_mem(0x1, 0x1, 0x157, func_2374);
    sv_set_mem(0x1, 0x1, 0x158, func_2365);
    sv_set_mem(0x1, 0x1, 0x159, func_2319);
    sv_set_mem(0x1, 0x1, 0x15a, func_2323);
    sv_set_mem(0x1, 0x1, 0x15c, func_2348);
    sv_set_mem(0x1, 0x1, 0x15d, func_2335);
    sv_set_mem(0x1, 0x1, 0x15e, func_2340);
    sv_set_mem(0x1, 0x1, 0x15f, func_2331);
    sv_set_mem(0x1, 0x1, 0x160, func_2344);
    sv_set_mem(0x1, 0x1, 0x3f, func_2295);
    sv_set_mem(0x1, 0x1, 0x74, func_2296);
    sv_set_mem(0x1, 0x1, 0x4b, func_2297);
    sv_set_mem(0x1, 0x1, 0x4d, func_2298);
    sv_set_mem(0x1, 0x1, 0x64, func_2299);
    sv_set_mem(0x1, 0x1, 0x65, func_2300);
    sv_set_mem(0x1, 0x1, 0xa2, func_2301);
    sv_set_mem(0x1, 0x1, 0xcd, func_2294);
    sv_set_mem(0x1, 0x1, 0xa7, func_2302);
    sv_set_mem(0x1, 0x1, 0x104, func_2303);
}

void func_2248()
{
    sv_set_mem(0x1, 0x2, 0x34, func_2282);
    sv_set_mem(0x1, 0x2, 0x31, func_2287);
    sv_set_mem(0x1, 0x2, 0x32, func_2288);
    sv_set_mem(0x1, 0x2, 0x33, func_2289);
    sv_set_mem(0x1, 0x2, 0x2e, func_2290);
    sv_set_mem(0x1, 0x2, 0x2f, func_2291);
    sv_set_mem(0x1, 0x2, 0x30, func_2292);
    sv_set_mem(0x1, 0x2, 0x152, func_2354);
    sv_set_mem(0x1, 0x2, 0x154, func_2362);
    sv_set_mem(0x1, 0x2, 0x157, func_2376);
    sv_set_mem(0x1, 0x2, 0x159, func_2321);
    sv_set_mem(0x1, 0x2, 0x15a, func_2325);
    sv_set_mem(0x1, 0x2, 0x15c, func_2350);
    sv_set_mem(0x1, 0x2, 0x15d, func_2338);
    sv_set_mem(0x1, 0x2, 0x15e, func_2342);
    sv_set_mem(0x1, 0x2, 0x15f, func_2333);
    sv_set_mem(0x1, 0x2, 0x160, func_2346);
    sv_set_mem(0x1, 0x2, 0x14d, func_2293);
    sv_set_mem(0x1, 0x2, 0x8c, func_2304);
}

void func_2249()
{
    sv_set_mem(0x1, 0x3, 0x1, func_2315);
    sv_set_mem(0x1, 0x3, 0x158, func_2364);
    sv_set_mem(0x1, 0x3, 0x155, func_2370);
    sv_set_mem(0x1, 0x3, 0x156, func_2381);
    sv_set_mem(0x1, 0x3, 0x161, func_2387);
    sv_set_mem(0x1, 0x3, 0x162, func_2394);
    sv_set_mem(0x1, 0x3, 0x163, func_2400);
    sv_set_mem(0x1, 0x3, 0x165, func_2407);
}

void func_2250()
{
    sv_set_mem(0x1, 0x4, 0x1, func_2316);
    sv_set_mem(0x1, 0x4, 0x16, func_2278);
    sv_set_mem(0x1, 0x4, 0x161, func_2388);
}

void func_2251()
{
    sv_set_mem(0x1, 0x6, 0x19, func_2279);
    sv_set_mem(0x1, 0x6, 0x16, func_2279);
    sv_set_mem(0x1, 0x6, 0x17, func_2279);
    sv_set_mem(0x1, 0x6, 0x18, func_2279);
    sv_set_mem(0x1, 0x6, 0x158, func_2368);
    sv_set_mem(0x1, 0x6, 0x156, func_2382);
    sv_set_mem(0x1, 0x6, 0x161, func_2389);
    sv_set_mem(0x1, 0x6, 0x162, func_2395);
    sv_set_mem(0x1, 0x6, 0x163, func_2402);
    sv_set_mem(0x1, 0x6, 0x165, func_2410);
}

void func_2252()
{
    global51 = 0x211;
    global52 = 0x221;
    global53 = 0x229;
    global54 = 0x235;
    global55 = 0x245;
}

int func_2253()
{
    if (global18 != 0x2)
    {
        return 0x1;
    }
    if (func_2254())
    {
        return 0x1;
    }
    return !WorkModuleImpl.is_flag(0x20000079);
}

int func_2254()
{
    return ArticleModuleImpl.is_exist(0x3) == 0x1 && WorkModuleImpl.is_flag2(0x20000078) == 0;
}

int func_2255()
{
    if (func_2254())
    {
        StatusModuleImpl(0x2711, 0x157);
        return 0x1;
    }
    return 0;
}

int func_2256()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_335();
}

int func_2257()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_245();
}

int func_2258()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_248();
}

int func_2259()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_249();
}

int func_2260()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_253();
}

int func_2261()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_257();
}

int func_2262()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_261();
}

int func_2263()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_1726();
}

int func_2264()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_1733();
}

int func_2265()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_1739();
}

int func_2266()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_1756();
}

int func_2267()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_1326();
}

int func_2268()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_1354();
}

int func_2269()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_2351();
}

int func_2270()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_2355();
}

int func_2271()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_2358();
}

int func_2272()
{
    if (func_2255())
    {
        return 0x1;
    }
    return func_2369();
}

int func_2273()
{
    if (func_2255())
    {
        return 0x1;
    }
    StatusModuleImpl(0x2711, 0x159);
    return 0x1;
}

int func_2274()
{
    if (func_2255())
    {
        return 0x1;
    }
    StatusModuleImpl(0x2711, 0x15a);
    return 0x1;
}

int func_2275()
{
    if (func_2255())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0x11, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x92, 0, 0x2, 0x40);
    return 0;
}

void func_2276()
{
    WorkModuleImpl.on_flag2(0x2100000d);
    WorkModuleImpl.strans_group_on(0x1f000000);
    WorkModuleImpl.strans_group_on(0x1f000001);
    WorkModuleImpl.strans_group_on(0x1f000002);
    WorkModuleImpl.strans_group_on(0x1f000003);
    WorkModuleImpl.strans_group_on(0x1f000004);
    WorkModuleImpl.strans_group_on(0x1f000005);
    WorkModuleImpl.strans_group_on(0x1f000006);
    WorkModuleImpl.strans_group_on(0x1f000007);
    WorkModuleImpl(0x1b, 0x1e00002f);
    WorkModuleImpl(0x1b, 0x1e00003c);
    WorkModuleImpl.strans_off(0x1e00000b);
    func_78(func_2277);
}

void func_2277()
{
    func_710();
}

void func_2278()
{
    float var0;
    func_590();
    if (global4 == 0x16)
    {
        if (WorkModuleImpl.is_flag(0x2000007f))
        {
            var0 = (float)WorkModuleImpl.get_int(0x14000003);
            if (MotionModuleImplFloat.get_frame() < var0)
            {
                WorkModuleImpl.off_flag(0x2100000d);
            }
        }
    }
}

void func_2279()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_592();
}

void func_2280()
{
    int var0;
    func_314();
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0x68)
    {
        func_2308(0x1, 0);
        func_78(func_2281);
        return;
    }
    else if (var0 == 0x6b || var0 == 0x6c)
    {
        sys_21(0x55, 0x1, 0x1c);
    }
    func_78(func_319);
}

void func_2281()
{
    int var0;
    var0 = func_2309(0x1, 0);
    if (var0)
    {
        func_16(0xe, 0);
        return;
    }
    if (global18 == 0)
    {
        func_16(0x160, 0);
        return;
    }
}

void func_2282()
{
    int var0;
    func_334();
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0x68)
    {
        if (!func_2305(global6))
        {
            func_2310();
        }
    }
}

void func_2283()
{
    func_22(0x5c, 0, 1.0f);
    WorkModuleImpl.strans_group_on(0x1f000008);
    WorkModuleImpl.on_flag2(0x2000007f);
    func_78(func_2284);
}

void func_2284()
{
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
    if (MotionModuleImplFloat(0xb) < -0.0010000000474974513f && func_55())
    {
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
}

int func_2285()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0x4, 0x4, 0x1c1, 0x860);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x300b2, 0, 0x40, 0);
    return 0;
}

void func_2286()
{
    func_291(0);
    func_78(func_293);
}

void func_2287()
{
    if (ItemModuleImpl(0x4) == 0x1 && global6 != 0x33 && global6 != 0x32)
    {
        sys_21(0x3e8, 0x1, 0, 0);
    }
    func_328();
}

void func_2288()
{
    if (ItemModuleImpl(0x4) == 0x1 && global6 != 0x33)
    {
        sys_21(0x3e8, 0x1, 0, 0);
    }
    func_329();
}

void func_2289()
{
    if (ItemModuleImpl(0x4) == 0x1)
    {
        sys_21(0x3e8, 0x1, 0, 0);
    }
    func_330();
}

void func_2290()
{
    if (ItemModuleImpl(0x4) == 0x1 && global6 != 0x30 && global6 != 0x2f)
    {
        sys_21(0x3e8, 0x1, 0, 0);
    }
    func_331();
}

void func_2291()
{
    if (ItemModuleImpl(0x4) == 0x1 && global6 != 0x30)
    {
        sys_21(0x3e8, 0x1, 0, 0);
    }
    func_332();
}

void func_2292()
{
    if (ItemModuleImpl(0x4) == 0x1)
    {
        sys_21(0x3e8, 0x1, 0, 0);
    }
    func_333();
}

void func_2293()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0x1ab || var0 == 0x1ac)
    {
        VisibilityModuleImpl(0x2710, 0x1);
    }
    func_691();
}

void func_2294()
{
    WorkModuleImpl.off_flag2(0x20000079);
    WorkModuleImpl.set_int(0, 0x10000086);
    func_1844();
}

void func_2295()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_1091();
}

void func_2296()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_165();
}

void func_2297()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_915();
}

void func_2298()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_921();
}

void func_2299()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_1698();
}

void func_2300()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_1702();
}

void func_2301()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_1370();
}

void func_2302()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_2105();
}

void func_2303()
{
    WorkModuleImpl.off_flag2(0x2000007f);
    func_1992();
}

void func_2304()
{
    if (global18 == 0)
    {
        WorkModuleImpl.off_flag2(0x2000007f);
    }
    func_1187();
}

int func_2305(int arg0)
{
    return arg0 == 0x159 || arg0 == 0x15a || arg0 == 0x15b || arg0 == 0x15c || arg0 == 0x15d || arg0 == 0x15e || arg0 == 0x15f || arg0 == 0x160;
}

void func_2306()
{
    if (MotionModuleImpl(0x15, 0x4) == 0xffffffff)
    {
        return MotionModuleImpl.is_end();
    }
    else
    {
        return MotionModuleImpl(0x1a, 0x4);
    }
}

void func_2307(int arg0, int arg1, int arg2, int arg3, int arg4)
{
    int var5;
    int var6;
    int var7;
    float var8;
    float var9;
    int var10;
    float var11;
    var5 = 0;
    var6 = 0;
    if (arg3)
    {
        if (arg1 == 0x1)
        {
            var5 = 0x248;
        }
        else if (arg1 == 0x2)
        {
            var5 = 0x249;
            var6 = 0x1;
        }
        else if (arg1 == 0x3)
        {
            var5 = 0x24a;
        }
    }
    else if (arg0)
    {
        if (arg1 == 0x1)
        {
            var5 = 0x24b;
        }
        else if (arg1 == 0x2)
        {
            var5 = 0x68;
        }
        else if (arg1 == 0x3)
        {
            var5 = 0x24c;
        }
    }
    else if (arg1 == 0x1)
    {
        var5 = 0x245;
    }
    else if (arg1 == 0x2)
    {
        var5 = 0x246;
    }
    else if (arg1 == 0x3)
    {
        var5 = 0x247;
    }
    if (var6 == 0x1)
    {
        WorkModuleImpl.on_flag2(0x2000007c);
        WorkModuleImpl.on_flag2(0x2000007d);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x2000007c);
        WorkModuleImpl.off_flag2(0x2000007d);
    }
    var7 = MotionModuleImpl(0x15, 0x4) != 0xffffffff;
    var8 = 0;
    if (arg2)
    {
        if (var7)
        {
            var8 = MotionModuleImplFloat(0xd, 0x4);
        }
        else
        {
            var8 = MotionModuleImplFloat.get_frame();
        }
    }
    if (var7)
    {
        MotionModuleImpl(0x18, 0x4);
    }
    var9 = 1.0f;
    if (arg3)
    {
        var10 = 0;
        if (arg2)
        {
            MotionModuleImpl(0x17, 0x4, var5, var10, var8, var9, 0x1);
        }
        else
        {
            MotionModuleImpl(0x17, 0x4, var5, var10, var8, var9);
        }
    }
    else if (arg4)
    {
        var11 = 6.0f;
        if (arg2)
        {
            if (MotionModuleImpl.get_motion() != var5)
            {
                MotionModuleImpl.change_motion(var5, var8, var9, var11);
            }
        }
        else
        {
            MotionModuleImpl(0x1, var5, var8, var9, var11);
        }
    }
    else if (arg2)
    {
        if (MotionModuleImpl.get_motion() != var5)
        {
            MotionModuleImpl.change_motion(var5, var8, var9);
        }
    }
    else
    {
        MotionModuleImpl(0x1, var5, var8, var9);
    }
}

void func_2308(int arg0, int arg1, int arg2)
{
    int var3;
    var3 = WorkModuleImpl.get_int(0x10000083) == 0;
    if (var3)
    {
        WorkModuleImpl.set_int(0x1, 0x10000083);
        WorkModuleImpl.set_int(0, 0x10000084);
        WorkModuleImpl.on_flag2(0x2000007a);
        WorkModuleImpl.off_flag2(0x2000007b);
        WorkModuleImpl.off_flag2(0x2000007e);
        ControlModuleImpl(0x271b);
        ControlModuleImpl(0x271f);
        if (global4 != 0x34)
        {
            sys_21(0xd, 0x2, 0x1, 0x1);
        }
    }
    func_2307(arg0, WorkModuleImpl.get_int(0x10000083), !var3, arg1, arg2);
}

int func_2309(int arg0, int arg1)
{
    int var2;
    int var3;
    int var4;
    var2 = 0;
    var3 = WorkModuleImpl.get_int(0x10000083);
    if (var3 == 0)
    {
        var2 = 0x1;
        return var2;
    }
    if (WorkModuleImpl.is_flag(0x2000007a))
    {
        if (global38 & 0x1)
        {
            WorkModuleImpl.on_flag2(0x2000007b);
        }
    }
    var4 = func_2306();
    if (var3 == 0x1)
    {
        if (var4)
        {
            func_2307(arg0, 0x2, 0, arg1);
            sys_21(0x55, 0x1, 0x1c);
            var3 = 0x2;
        }
    }
    else if (var3 == 0x2)
    {
        if (var4)
        {
            WorkModuleImpl.inc_int(0x10000084);
            if (WorkModuleImpl.get_int(0x10000084) < 0x3 && WorkModuleImpl.is_flag(0x2000007b))
            {
                func_2307(arg0, 0x2, 0, arg1);
                sys_21(0x55, 0x1, 0x1c);
                ControlModuleImpl(0x271b);
                ControlModuleImpl(0x271f);
                WorkModuleImpl.off_flag2(0x2000007b);
                WorkModuleImpl.off_flag2(0x2000007e);
            }
            else
            {
                func_2307(arg0, 0x3, 0, arg1);
                var3 = 0x3;
            }
        }
    }
    else if (var3 == 0x3)
    {
        if (var4)
        {
            var3 = 0;
            var2 = 0x1;
        }
    }
    WorkModuleImpl.set_int(var3, 0x10000083);
    return var2;
}

void func_2310()
{
    if (MotionModuleImpl(0x15, 0x4) != 0xffffffff)
    {
        MotionModuleImpl(0x19, 0x4);
    }
    WorkModuleImpl.set_int(0, 0x10000083);
    WorkModuleImpl.off_flag2(0x2000007e);
    WorkModuleImpl.off_flag2(0x2000007c);
    WorkModuleImpl.off_flag2(0x2000007d);
}

int func_2311()
{
    if (WorkModuleImpl.get_int(0x10000083) == 0x2 && WorkModuleImpl.is_flag(0x2000007e) && WorkModuleImpl.get_int(0x10000084) < 0x2)
    {
        return 0x1;
    }
    return 0;
}

void func_2312()
{
    int var0;
    int var1;
    WorkModuleImpl.off_flag2(0x2000007e);
    var0 = 0;
    var1 = 0x1;
    func_2308(var0, var1, 0);
    WorkModuleImpl.off_flag2(0x2000007b);
    WorkModuleImpl.off_flag2(0x2000007c);
    if (MotionModuleImpl(0x15, 0x4) != 0xffffffff)
    {
        MotionModuleImpl(0x18, 0x4);
    }
}

void func_2313()
{
    int var0;
    var0 = MotionModuleImpl.get_end_frame(0x246);
    MotionModuleImpl.change_motion(0x246, (float)var0 * 1.0f, 1.0f);
}

int func_2314()
{
    int var0;
    int var1;
    int var2;
    if (global5 == 0x15a)
    {
        var0 = 0xffffffff;
        var1 = 0xffffffff;
        var2 = 0xffffffff;
    }
    else
    {
        var0 = 0;
        var1 = 0;
        var2 = 0;
    }
    return func_698(var0, var1, var2);
}

void func_2315()
{
    if (global5 != 0x15a)
    {
        func_765();
    }
}

void func_2316()
{
    func_766(0xc, 0xb, 0xa, func_2317);
}

int func_2317(int arg0, int arg1)
{
    return arg1 == 0xc && arg0 == 0x24f || arg1 == 0xb && arg0 == 0x24e || arg1 == 0xa && arg0 == 0x24d;
}

int func_2318()
{
    int var0;
    int var1;
    var0 = 0x20;
    if (WorkModuleImpl.get_int(0x10000083) != 0)
    {
        var0 = 0;
    }
    var1 = 0;
    if (func_2305(global5) == 0x1 || global5 == 0x34)
    {
        var1 = 0x400;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0, 0, 0, 0x40 | var1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x200010, 0x1, var0);
    return 0;
}

void func_2319()
{
    int var0;
    int var1;
    int var2;
    ControlModuleImpl(0x271b);
    WorkModuleImpl.strans_on(0x1e000000);
    var0 = 0;
    var1 = 0;
    if (global5 == 0x15a)
    {
        var2 = 0x1;
    }
    else
    {
        var2 = 0;
    }
    func_2308(var0, var1, var2);
    func_78(func_2320);
}

void func_2320()
{
    int var0;
    int var1;
    var0 = func_2309(0, 0);
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
    if (StatusModuleImpl(0x6))
    {
        return;
    }
    if (var0)
    {
        if (WorkModuleImpl.check_strans(0x1e000000) && global18 == 0)
        {
            func_16(0, 0);
            return;
        }
    }
    if (global18 == 0x2)
    {
        if (var0)
        {
            var1 = 0xe;
        }
        else
        {
            var1 = 0x15f;
        }
        func_16(var1, 0);
        return;
    }
    if (0x1 && global24 & 0x200000)
    {
        if (var0)
        {
            var1 = 0xa;
        }
        else
        {
            var1 = 0x15d;
        }
        func_16(var1, 0x1);
        return 0x1;
    }
    if (0x1 && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        if (var0)
        {
            var1 = 0xa;
        }
        else
        {
            var1 = 0x15d;
        }
        func_16(var1, 0x1);
        return 0x1;
    }
    if (0x1)
    {
        if (global24 & 0x40000)
        {
            if (var0)
            {
                
            }
            else if (func_2311() == 0x1)
            {
                var1 = 0x15c;
                func_16(var1, 0x1);
                return 0x1;
            }
        }
    }
    if (0x1 && func_88() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        if (var0)
        {
            var1 = 0x1;
        }
        else
        {
            var1 = 0x15a;
        }
        func_16(var1, 0x1);
        return 0x1;
    }
}

void func_2321()
{
    if (!func_2305(global6))
    {
        func_2310();
    }
}

int func_2322()
{
    int var0;
    int var1;
    int var2;
    int var3;
    if (global5 == 0x1)
    {
        var0 = 0xffffffff;
        var1 = 0xffffffff;
        var2 = 0xffffffff;
    }
    else
    {
        var0 = 0;
        var1 = 0;
        var2 = 0;
    }
    var3 = 0x40;
    if (WorkModuleImpl.get_int(0x10000083) != 0)
    {
        var3 = 0;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, var0, var1, var2, 0x40);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x200010, 0x2, var3);
    return 0;
}

void func_2323()
{
    int var0;
    int var1;
    float var2;
    float var3;
    WorkModuleImpl.strans_on(0x1e00003c);
    var0 = 0;
    var1 = 0x1;
    func_2308(var0, var1);
    if (global5 != 0x1)
    {
        var2 = 1.0f;
        var3 = WorkModuleImplFloat.get_float(0x3000003);
        func_762(var3, 0x24f, 0x1000006, var2, 0x1000007, 0);
        func_763(0x24f, 0x24e, 0x24d, 0x1000006, var2, 0x1000007);
    }
    func_78(func_2324);
}

int func_2324()
{
    float var0;
    int var1;
    int var2;
    var0 = 1.0f;
    func_774(WorkModuleImplFloat.get_float(0x1000006), WorkModuleImplFloat.get_float(0x3000003), WorkModuleImplFloat.get_float(0x3000001), WorkModuleImplFloat.get_float(0x3000002), WorkModuleImplFloat.get_float(0x2000002), 0x1000006, var0, 0x1);
    func_773(0x24f, 0x24e, 0x24d, 0x1000006, var0, 0x1000007, func_2317);
    var1 = func_2309(0, 0x1);
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
    if (var1)
    {
        if (WorkModuleImpl.check_strans(0x1e00003c) && global18 == 0)
        {
            func_16(0x1, 0);
            return;
        }
    }
    if (global18 == 0x2)
    {
        if (var1)
        {
            var2 = 0xe;
        }
        else
        {
            var2 = 0x15f;
        }
        func_16(var2, 0);
        return;
    }
    if (0x1 && global24 & 0x200000)
    {
        if (var1)
        {
            var2 = 0xa;
        }
        else
        {
            var2 = 0x15d;
        }
        func_16(var2, 0x1);
        return 0x1;
    }
    if (0x1 && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        if (var1)
        {
            var2 = 0xa;
        }
        else
        {
            var2 = 0x15d;
        }
        func_16(var2, 0x1);
        return 0x1;
    }
    if (0x1 && func_88() < WorkModuleImplFloat.get_float(0x2000001))
    {
        if (var1)
        {
            var2 = 0;
        }
        else
        {
            var2 = 0x159;
        }
        func_16(var2, 0x1);
        return 0x1;
    }
    return 0;
}

void func_2325()
{
    if (!func_2305(global6))
    {
        func_2310();
    }
}

int func_2326()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0, 0, 0, 0x40);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x200010, 0x1, 0x20);
    return 0;
}

void func_2327()
{
    func_78(func_2328);
}

int func_2328()
{
    return 0;
}

void func_2329()
{
    if (!func_2305(global6))
    {
        func_2310();
    }
}

int func_2330()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0x40);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0x1, 0x200010, 0, 0);
    return 0;
}

void func_2331()
{
    int var0;
    int var1;
    func_75();
    var0 = 0x1;
    var1 = 0;
    func_2308(var0, var1);
    if (global18 == 0)
    {
        func_676();
    }
    func_94();
    KineticModuleImpl.change_kinetic_type(0x13);
    func_78(func_2332);
}

void func_2332()
{
    int var0;
    int var1;
    var0 = func_2309(0x1, 0);
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
    if (var0)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (0x1 && global18 == 0)
    {
        var1 = 0x160;
        func_16(var1, 0);
        return 0x1;
    }
}

void func_2333()
{
    if (!func_2305(global6))
    {
        func_2310();
    }
}

int func_2334()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0, 0, 0, 0x40);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x200010, 0, 0);
    return 0;
}

void func_2335()
{
    int var0;
    int var1;
    if (global32 >= (float)WorkModuleImpl.get_int(0x12000020) || global49 <= 0)
    {
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    func_75();
    var0 = 0;
    var1 = 0x1;
    func_2308(var0, var1);
    func_22(0x18, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_2337();
    }
    global16 = func_2337;
    func_78(func_2336);
}

void func_2336()
{
    int var0;
    int var1;
    var0 = func_2309(0, 0x1);
    if (0x1 && global18 == 0x2)
    {
        if (var0)
        {
            var1 = 0xe;
        }
        else
        {
            var1 = 0x15f;
        }
        func_16(var1, 0);
        return 0x1;
    }
    if (0x1 && MotionModuleImpl.is_end())
    {
        if (var0)
        {
            var1 = 0xb;
        }
        else
        {
            var1 = 0x15e;
        }
        func_16(var1, 0x1);
        return 0x1;
    }
}

void func_2337()
{
    func_547(0x2100000d);
}

void func_2338()
{
    if (!func_2305(global6))
    {
        func_2310();
    }
}

int func_2339()
{
    StatusModuleImpl(0x5, 0x2, 0x1, 0x5, 0, 0x1, 0, 0, 0, 0x40);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0x1, 0x200010, 0, 0);
    return 0;
}

void func_2340()
{
    int var0;
    int var1;
    var0 = 0x1;
    var1 = 0;
    func_2308(var0, var1);
    func_78(func_2341);
}

void func_2341()
{
    int var0;
    int var1;
    var0 = func_2309(0x1, 0);
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
    if (var0)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (0x1 && global18 == 0)
    {
        var1 = 0x160;
        func_16(var1, 0);
        return 0x1;
    }
}

void func_2342()
{
    if (!func_2305(global6))
    {
        func_2310();
    }
}

int func_2343()
{
    int var0;
    var0 = 0;
    if (func_2305(global5) == 0x1 || global5 == 0x34)
    {
        var0 = 0x400;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0, 0, 0, 0x40 | var0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x200010, 0, 0);
    return 0;
}

void func_2344()
{
    int var0;
    int var1;
    var0 = 0;
    var1 = 0;
    func_2308(var0, var1);
    func_78(func_2345);
}

int func_2345()
{
    int var0;
    int var1;
    var0 = func_2309(0, 0);
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
    if (0x1 && global18 == 0x2)
    {
        if (var0)
        {
            var1 = 0xe;
        }
        else
        {
            var1 = 0x15f;
        }
        func_16(var1, 0);
        return 0x1;
    }
    if (0x1 && global24 & 0x200000 && MotionModuleImplFloat.get_frame() > WorkModuleImplFloat.get_float(0x3000028))
    {
        if (var0)
        {
            var1 = 0xa;
        }
        else
        {
            var1 = 0x15d;
        }
        func_16(var1, 0x1);
        return 0x1;
    }
    if (0x1 && global24 & 0x100000 && ControlModuleImpl(0x271c) && MotionModuleImplFloat.get_frame() > WorkModuleImplFloat.get_float(0x3000028))
    {
        if (var0)
        {
            var1 = 0xa;
        }
        else
        {
            var1 = 0x15d;
        }
        func_16(var1, 0x1);
        return 0x1;
    }
    if (0x1)
    {
        if (var0)
        {
            var1 = 0;
        }
        else
        {
            var1 = 0x159;
        }
        func_16(var1, 0);
        return 0x1;
    }
    return 0;
}

void func_2346()
{
    if (!func_2305(global6))
    {
        func_2310();
    }
    WorkModuleImpl.off_flag2(0x20000003);
    WorkModuleImpl.off_flag2(0x2000007f);
}

int func_2347()
{
    StatusModuleImpl(0x5, 0, 0x35, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0x1, 0x200010, 0, 0);
    return 0;
}

void func_2348()
{
    PostureModuleImpl.reverse_lr();
    func_2312();
    func_22(0x250, 0, 1.0f);
    func_78(func_2349);
}

void func_2349()
{
    int var0;
    int var1;
    var0 = 0;
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
    if (global18 == 0x2)
    {
        if (var0)
        {
            var1 = 0xe;
        }
        else
        {
            var1 = 0x15f;
        }
        func_16(var1, 0);
        return 0x1;
    }
    if (global18 == 0 && MotionModuleImpl.is_end())
    {
        func_2313();
        if (var0)
        {
            var1 = 0;
        }
        else
        {
            var1 = 0x159;
        }
        func_16(var1, 0);
        return 0x1;
    }
}

void func_2350()
{
    if (!func_2305(global6))
    {
        func_2310();
    }
    sys_21(0x3e8, 0, 0x1, 0);
    sys_21(0x3e8, 0x1, 0, 0);
}

int func_2351()
{
    int var0;
    func_69();
    var0 = 0x11192;
    if (sys_21(0x89) == 0)
    {
        var0 = 0x10192;
    }
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, var0, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2352()
{
    if (ArticleModuleImpl.is_exist(0xf) == 0x1)
    {
        LinkModuleImpl(0x4, 0x1, 0x4c4, 0);
        WorkModuleImpl.on_flag2(0x2100000e);
    }
    func_78(func_2353);
}

void func_2353()
{
    int var0;
    float var1;
    float var2;
    var0 = 0;
    if (WorkModuleImpl.get_int(0x1000003d) <= 0 && WorkModuleImpl.is_flag(0x2100000f) == 0 && WorkModuleImpl.is_flag(0x21000010) == 0)
    {
        if (global48 * global48 + global32 * global32 >= 0.3499999940395355f * 0.3499999940395355f)
        {
            var1 = PostureModuleImplFloat.get_lr();
            var2 = Math.atan2(global32, global48 * var1);
            if (var2 >= 112.5f * 3.1415927410125732f / (float)0xb4 || var2 <= -112.5f * 3.1415927410125732f / (float)0xb4)
            {
                WorkModuleImpl.on_flag2(0x21000011);
                var0 = 0x1;
            }
            WorkModuleImpl.set_float(global48 + 0, 0x1000006);
            WorkModuleImpl.set_float(global32 + 0, 0x1000007);
            WorkModuleImpl.on_flag2(0x21000010);
        }
    }
    if (func_2239() || var0)
    {
        if (WorkModuleImpl.is_flag(0x21000011))
        {
            func_2240(0x215, 0x21d, 0x6, 0, 0x2100000d, 0x9);
        }
        else
        {
            func_2240(0x211, 0x219, 0x6, 0, 0x2100000d, 0x9);
        }
        if (global18 == 0)
        {
            WorkModuleImpl.off_flag2(0x20000003);
            WorkModuleImpl.off_flag2(0x2000007f);
        }
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

void func_2354()
{
    if (WorkModuleImpl.get_int(0x11000002) != 0)
    {
        sys_21(0x3e9);
    }
}

int func_2355()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2356()
{
    func_33();
    if (ArticleModuleImpl.is_exist(0x1) == 0x1)
    {
        WorkModuleImpl.on_flag2(0x2100000e);
    }
    func_78(func_2357);
}

void func_2357()
{
    if (func_2239())
    {
        func_2240(0x221, 0x225, 0x6, 0, 0x2100000d, 0x9);
        if (global18 == 0)
        {
            WorkModuleImpl.off_flag2(0x20000003);
            WorkModuleImpl.off_flag2(0x2000007f);
        }
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

int func_2358()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x1000004a);
    var1 = 0;
    if (0x1 == var0)
    {
        var1 = 0x1422;
    }
    StatusModuleImpl(0x5, 0xffffffff, 0x65, 0x7, 0, 0x1, 0, 0, 0xc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, var1, 0x1000, 0x100, 0x1000);
    return 0;
}

void func_2359()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x17000000), 0x11000002);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x17000001), 0x11000003);
    if (ArticleModuleImpl.is_exist(0x2) == 0x1)
    {
        LinkModuleImpl(0x4, 0x1, 0x4c5, 0);
    }
    if (ArticleModuleImpl(0x1, 0x2) >= 0x2)
    {
        ArticleModuleImpl(0x2711, 0x2, 0x1);
    }
    ArticleModuleImpl.generate(0x2);
    func_22(0x231, 0, 1.0f);
    if (global18 == 0x2)
    {
        WorkModuleImpl.on_flag(0x2100000d);
    }
    else
    {
        
    }
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
    if (!StopModuleImpl(0x1))
    {
        func_2361();
    }
    global16 = func_2361;
    func_78(func_2360);
}

void func_2360()
{
    int var0;
    if (WorkModuleImpl.get_int(0x11000002) < 0)
    {
        func_16(0x158, 0);
    }
    var0 = WorkModuleImpl.get_int(0x1200007f);
    WorkModuleImpl.set_int(var0, 0x10000012);
}

void func_2361()
{
    if (WorkModuleImpl.get_int(0x11000002) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
        WorkModuleImpl.dec_int(0x11000003);
    }
}

void func_2362()
{
    if (global6 != 0x158)
    {
        ArticleModuleImpl.remove(0x2);
    }
}

int func_2363()
{
    StatusModuleImpl(0x5, 0x2, 0x64, 0x5, 0, 0x1, 0x2000, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x1000, 0x100, 0);
    return 0;
}

void func_2364()
{
    
}

void func_2365()
{
    int var0;
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x17000005), 0x11000002);
    WorkModuleImpl.on_flag(0x20000079);
    var0 = 0x229;
    if (WorkModuleImpl.get_int(0x1000004a) == 0x2)
    {
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            var0 = 0x22d;
        }
    }
    func_22(var0, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_2367();
    }
    global16 = func_2367;
    func_78(func_2366);
}

void func_2366()
{
    float var0;
    if (func_56())
    {
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0)
    {
        var0 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        if (var0 < 0)
        {
            func_16(0x16, 0);
            return;
        }
    }
    else if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
}

void func_2367()
{
    if (WorkModuleImpl.get_int(0x11000002) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
    }
}

void func_2368()
{
    if (WorkModuleImpl.get_int(0x1000004a) == 0x2)
    {
        ArticleModuleImpl(0x2714, 0x2, 0x8);
    }
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000008), 0);
    WorkModuleImpl.on_flag(0x20000003);
}

int func_2369()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0x1000, 0x400, 0x1000);
    return 0;
}

void func_2370()
{
    float var0;
    float var1;
    if (global18 == 0x2)
    {
        var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        var0 *= WorkModuleImplFloat.get_float(0x8000000);
        var1 *= WorkModuleImplFloat.get_float(0x8000001);
        var1 += WorkModuleImplFloat.get_float(0x8000002);
        KineticModuleImpl(0xe, 0x3, 0x6, var0, 0, 0, 0, 0);
        KineticModuleImpl.enable_energy(0x3);
        KineticModuleImpl(0xe, 0x1, 0, 0, var1, 0, 0, 0);
        KineticModuleImpl.enable_energy(0x1);
        sys_35(0x1, 0x2);
        sys_35(0x1, 0);
    }
}

void func_2371()
{
    func_78(func_2372);
}

void func_2372()
{
    if (func_2239())
    {
        func_2240(0x235, 0x23d, 0x6, 0, 0x2100000d, 0x9);
        if (global18 == 0)
        {
            WorkModuleImpl.off_flag2(0x20000003);
            WorkModuleImpl.off_flag2(0x2000007f);
        }
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

int func_2373()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10430, 0x1000, 0x400, 0x1000);
    return 0;
}

void func_2374()
{
    LinkModuleImpl(0x4, 0x1, 0x4c2, 0);
    func_78(func_2375);
}

void func_2375()
{
    if (func_2239())
    {
        func_2240(0x239, 0x241, 0x6, 0, 0x2100000d, 0x1);
        if (global18 == 0)
        {
            WorkModuleImpl.off_flag2(0x20000003);
            WorkModuleImpl.off_flag2(0x2000007f);
        }
    }
    if (WorkModuleImpl.is_flag(0x2100000e) && !WorkModuleImpl.is_flag(0x20000078))
    {
        if (ArticleModuleImpl.is_exist(0x3))
        {
            WorkModuleImpl.on_flag2(0x20000078);
            WorkModuleImpl.disable_strans(0x1e000065);
            ArticleModuleImpl.shoot(0x3);
        }
        WorkModuleImpl.off_flag2(0x2100000e);
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

void func_2376()
{
    LinkModuleImpl(0x4, 0x1, 0x4c3, 0);
}

void func_2377()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x11442, 0x1003e2, 0, 0);
}

void func_2378()
{
    sys_21(0x25);
    JostleModuleImpl(0x2710, 0);
    KineticModuleImpl.clear_speed_all();
    func_33();
    func_78(func_2379);
}

void func_2379()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            WorkModuleImpl.on_flag2(0x21000006);
            KineticModuleImpl.change_kinetic_type(0x6);
            GroundModuleImpl(0x2710, 0x1);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x251);
            }
            else
            {
                func_22(0x251, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
        else
        {
            WorkModuleImpl.on_flag2(0x21000006);
            KineticModuleImpl.change_kinetic_type(0xc);
            GroundModuleImpl(0x2710, 0x5);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x252);
            }
            else
            {
                func_22(0x252, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
    }
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        func_16(0x161, 0);
        return;
    }
    if (WorkModuleImpl.is_flag(0x21000015))
    {
        MotionModuleImpl.set_motion_rate(0);
        if (ArticleModuleImpl.is_exist(0x9) == 0 || WorkModuleImpl.is_flag(0x21000016))
        {
            MotionModuleImpl.set_motion_rate(1.0f);
            WorkModuleImpl.off_flag2(0x21000015);
        }
    }
    else if (MotionModuleImpl.is_end() == 0x1)
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

void func_2380()
{
    
}

void func_2381()
{
    sys_21(0x3ea);
}

void func_2382()
{
    sys_21(0x3eb);
}

int func_2383()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0xffffffff, 0x11, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x20);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2384()
{
    JostleModuleImpl(0x2710, 0);
    GroundModuleImpl(0x2710, 0);
    WorkModuleImpl.on_flag2(0x20000001);
    func_78(func_2385);
}

void func_2385()
{
    if (WorkModuleImpl.is_flag(0x2100000e) == 0)
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

void func_2386()
{
    ArticleModuleImpl.remove(0x9);
}

void func_2387()
{
    sys_21(0x3ec);
}

void func_2388()
{
    sys_21(0x3ed);
}

void func_2389()
{
    sys_21(0x3ee);
}

int func_2390()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0xffffffff, 0x11, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x20);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2391()
{
    JostleModuleImpl(0x2710, 0);
    sys_21(0xc, 0);
    WorkModuleImpl.on_flag2(0x20000001);
    ArticleModuleImpl.generate(0xa);
    ArticleModuleImpl.generate(0xb);
    ArticleModuleImpl.generate(0xc);
    ArticleModuleImpl.generate(0xd);
    ArticleModuleImpl.generate(0xe);
    VisibilityModuleImpl(0x2710, 0x1);
    func_22(0x253, 0, 1.0f);
    func_78(func_2392);
}

void func_2392()
{
    if (global9 >= 247.0f)
    {
        func_16(0x163, 0);
        return;
    }
}

void func_2393()
{
    
}

void func_2394()
{
    sys_21(0x3ef);
}

void func_2395()
{
    sys_21(0x3f0);
    ArticleModuleImpl.remove(0xb);
    ArticleModuleImpl.remove(0xc);
    ArticleModuleImpl.remove(0xd);
    ArticleModuleImpl.remove(0xe);
}

int func_2396()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0xffffffff, 0x11, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x20);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2397()
{
    JostleModuleImpl(0x2710, 0);
    sys_21(0xc, 0);
    WorkModuleImpl.on_flag2(0x20000001);
    VisibilityModuleImpl(0x2710, 0x1);
    func_22(0x254, 0, 1.0f);
    func_78(func_2398);
}

void func_2398()
{
    if (global9 >= 61.0f)
    {
        func_16(0x165, 0);
        return;
    }
    sys_21(0x3f2);
}

void func_2399()
{
    
}

void func_2400()
{
    sys_21(0x3f1);
}

void func_2401()
{
    
}

void func_2402()
{
    sys_21(0x3f3);
}

int func_2403()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x11, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x20);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2404()
{
    JostleModuleImpl(0x2710, 0);
    WorkModuleImpl.on_flag2(0x20000001);
    VisibilityModuleImpl(0x2710, 0x1);
    ArticleModuleImpl.remove(0xa);
    WorkModuleImpl.off_flag2(0x2100000d);
    func_78(func_2405);
}

void func_2405()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (WorkModuleImpl.is_flag(0x2100001a) == 0x1 && WorkModuleImpl.is_flag(0x21000019) == 0)
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x2);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
        }
        WorkModuleImpl.off_flag2(0x2100001a);
        WorkModuleImpl.on_flag2(0x21000019);
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            func_20(0);
            if (WorkModuleImpl.is_flag(0x21000019))
            {
                GroundModuleImpl(0x2710, 0x2);
            }
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x255);
            }
            else
            {
                func_22(0x255, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
        else
        {
            func_20(0x2);
            if (WorkModuleImpl.is_flag(0x21000019))
            {
                GroundModuleImpl(0x2710, 0x5);
            }
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x256);
            }
            else
            {
                func_22(0x256, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
        if (StatusModuleImpl(0x6))
        {
            WorkModuleImpl.on_flag2(0x2100001a);
        }
    }
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
    func_2408();
}

void func_2406()
{
    sys_21(0x26);
    func_111();
}

void func_2407()
{
    sys_21(0x3f4);
}

int func_2408()
{
    if (global3 == 0)
    {
        if (func_2409() != 0)
        {
            return 0x1;
        }
    }
    return 0;
}

int func_2409()
{
    sys_21(0x3f5);
    return 0;
}

void func_2410()
{
    sys_21(0x3f6);
}


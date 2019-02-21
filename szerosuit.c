void main()
{
    printf("ENTRY This Fighter is driven by msc.");
    func_0();
    global0 = sys_7(0);
    global1 = sys_7(0x1);
    func_2243();
    sys_0(0x2, func_1);
    sys_0(0x3, func_5);
    sys_0(0x4, func_10);
    set_main(func_73);
}

void func_2240()
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

void func_2241()
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

int func_2242()
{
    if (global18 == 0x2)
    {
        if (WorkModuleImpl.is_flag(0x20000078))
        {
            WorkModuleImpl.strans_off(0x1e000065);
            printf("STRANS_OFF( FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_LW)");
        }
        else
        {
            
        }
    }
    else
    {
        
    }
    return 0;
}

void func_2243()
{
    global7 = 0x163;
    func_2240();
    func_2245();
    func_2246();
    func_2247();
    func_2248();
    func_2249();
    func_2250();
    func_2251();
    func_2241();
    func_2244();
    global35 = func_2242;
}

void func_2244()
{
    global51 = 0x211;
    global52 = 0x22d;
    global53 = 0x239;
    global54 = 0x241;
    global55 = 0x25d;
}

void func_2245()
{
    sv_set_mem(0x1, 0, 0x152, func_2309);
    sv_set_mem(0x1, 0, 0x153, func_2328);
    sv_set_mem(0x1, 0, 0x154, func_2278);
    sv_set_mem(0x1, 0, 0x155, func_2282);
    sv_set_mem(0x1, 0, 0x156, func_2252);
    sv_set_mem(0x1, 0, 0x16, func_2265);
    sv_set_mem(0x1, 0, 0x157, func_2318);
    sv_set_mem(0x1, 0, 0x158, func_2323);
    sv_set_mem(0x1, 0, 0x159, func_2314);
    sv_set_mem(0x1, 0, 0x15a, func_2301);
    sv_set_mem(0x1, 0, 0x15b, func_2289);
    sv_set_mem(0x1, 0, 0x15c, func_2305);
    sv_set_mem(0x1, 0, 0x15d, func_2285);
    sv_set_mem(0x1, 0, 0x15e, func_2297);
    sv_set_mem(0x1, 0, 0x15f, func_2293);
    sv_set_mem(0x1, 0, 0x161, func_2256);
    sv_set_mem(0x1, 0, 0x162, func_2261);
}

void func_2246()
{
    sv_set_mem(0x1, 0x1, 0x152, func_2310);
    sv_set_mem(0x1, 0x1, 0x153, func_2330);
    sv_set_mem(0x1, 0x1, 0x154, func_2279);
    sv_set_mem(0x1, 0x1, 0x155, func_2283);
    sv_set_mem(0x1, 0x1, 0x156, func_2253);
    sv_set_mem(0x1, 0x1, 0x157, func_2319);
    sv_set_mem(0x1, 0x1, 0x158, func_2324);
    sv_set_mem(0x1, 0x1, 0x159, func_2315);
    sv_set_mem(0x1, 0x1, 0x15a, func_2302);
    sv_set_mem(0x1, 0x1, 0x15b, func_2290);
    sv_set_mem(0x1, 0x1, 0x15c, func_2306);
    sv_set_mem(0x1, 0x1, 0x15d, func_2286);
    sv_set_mem(0x1, 0x1, 0x15e, func_2298);
    sv_set_mem(0x1, 0x1, 0x15f, func_2294);
    sv_set_mem(0x1, 0x1, 0x161, func_2257);
    sv_set_mem(0x1, 0x1, 0x162, func_2262);
    sv_set_mem(0x1, 0x1, 0xf1, func_2334);
    sv_set_mem(0x1, 0x1, 0x36, func_2266);
    sv_set_mem(0x1, 0x1, 0x38, func_2268);
    sv_set_mem(0x1, 0x1, 0xf2, func_2269);
    sv_set_mem(0x1, 0x1, 0xf3, func_2270);
    sv_set_mem(0x1, 0x1, 0xf4, func_2271);
    sv_set_mem(0x1, 0x1, 0xf5, func_2273);
}

void func_2247()
{
    sv_set_mem(0x1, 0x2, 0x152, func_2313);
    sv_set_mem(0x1, 0x2, 0x153, func_2333);
    sv_set_mem(0x1, 0x2, 0x154, func_2281);
    sv_set_mem(0x1, 0x2, 0x155, func_2284);
    sv_set_mem(0x1, 0x2, 0x156, func_2255);
    sv_set_mem(0x1, 0x2, 0x157, func_2322);
    sv_set_mem(0x1, 0x2, 0x158, func_2327);
    sv_set_mem(0x1, 0x2, 0x159, func_2317);
    sv_set_mem(0x1, 0x2, 0x15a, func_2284);
    sv_set_mem(0x1, 0x2, 0x15b, func_2292);
    sv_set_mem(0x1, 0x2, 0x15c, func_2308);
    sv_set_mem(0x1, 0x2, 0x15d, func_2288);
    sv_set_mem(0x1, 0x2, 0x15e, func_2300);
    sv_set_mem(0x1, 0x2, 0x15f, func_2296);
    sv_set_mem(0x1, 0x2, 0x161, func_2259);
    sv_set_mem(0x1, 0x2, 0x162, func_2264);
    sv_set_mem(0x1, 0x2, 0x2d, func_2275);
    sv_set_mem(0x1, 0x2, 0x33, func_2276);
    sv_set_mem(0x1, 0x2, 0x34, func_2277);
    sv_set_mem(0x1, 0x2, 0x39, func_2274);
}

void func_2248()
{
    sv_set_mem(0x1, 0x3, 0x152, func_2335);
    sv_set_mem(0x1, 0x3, 0x153, func_2335);
    sv_set_mem(0x1, 0x3, 0x154, func_2335);
    sv_set_mem(0x1, 0x3, 0x155, func_2346);
    sv_set_mem(0x1, 0x3, 0x157, func_2335);
    sv_set_mem(0x1, 0x3, 0x158, func_2335);
    sv_set_mem(0x1, 0x3, 0x159, func_2335);
    sv_set_mem(0x1, 0x3, 0x15a, func_2346);
    sv_set_mem(0x1, 0x3, 0x15b, func_2368);
    sv_set_mem(0x1, 0x3, 0x15c, func_2379);
    sv_set_mem(0x1, 0x3, 0x15d, func_2357);
    sv_set_mem(0x1, 0x3, 0x15e, func_2346);
    sv_set_mem(0x1, 0x3, 0x15f, func_2346);
}

void func_2249()
{
    sv_set_mem(0x1, 0x4, 0x152, func_2337);
    sv_set_mem(0x1, 0x4, 0x153, func_2337);
    sv_set_mem(0x1, 0x4, 0x154, func_2337);
    sv_set_mem(0x1, 0x4, 0x155, func_2348);
    sv_set_mem(0x1, 0x4, 0x157, func_2337);
    sv_set_mem(0x1, 0x4, 0x158, func_2337);
    sv_set_mem(0x1, 0x4, 0x159, func_2337);
    sv_set_mem(0x1, 0x4, 0x15a, func_2348);
    sv_set_mem(0x1, 0x4, 0x15b, func_2370);
    sv_set_mem(0x1, 0x4, 0x15c, func_2381);
    sv_set_mem(0x1, 0x4, 0x15d, func_2359);
    sv_set_mem(0x1, 0x4, 0x15e, func_2348);
    sv_set_mem(0x1, 0x4, 0x15f, func_2348);
}

void func_2250()
{
    sv_set_mem(0x1, 0x5, 0x152, func_2338);
    sv_set_mem(0x1, 0x5, 0x153, func_2338);
    sv_set_mem(0x1, 0x5, 0x154, func_2338);
    sv_set_mem(0x1, 0x5, 0x155, func_2349);
    sv_set_mem(0x1, 0x5, 0x157, func_2338);
    sv_set_mem(0x1, 0x5, 0x158, func_2338);
    sv_set_mem(0x1, 0x5, 0x159, func_2338);
    sv_set_mem(0x1, 0x5, 0x15a, func_2349);
    sv_set_mem(0x1, 0x5, 0x15b, func_2371);
    sv_set_mem(0x1, 0x5, 0x15c, func_2382);
    sv_set_mem(0x1, 0x5, 0x15d, func_2360);
    sv_set_mem(0x1, 0x5, 0x15e, func_2349);
    sv_set_mem(0x1, 0x5, 0x15f, func_2349);
}

void func_2251()
{
    sv_set_mem(0x1, 0x6, 0x152, func_2345);
    sv_set_mem(0x1, 0x6, 0x153, func_2345);
    sv_set_mem(0x1, 0x6, 0x154, func_2345);
    sv_set_mem(0x1, 0x6, 0x155, func_2356);
    sv_set_mem(0x1, 0x6, 0x157, func_2345);
    sv_set_mem(0x1, 0x6, 0x158, func_2345);
    sv_set_mem(0x1, 0x6, 0x159, func_2345);
    sv_set_mem(0x1, 0x6, 0x15a, func_2356);
    sv_set_mem(0x1, 0x6, 0x15b, func_2378);
    sv_set_mem(0x1, 0x6, 0x15c, func_2389);
    sv_set_mem(0x1, 0x6, 0x15d, func_2367);
    sv_set_mem(0x1, 0x6, 0x15e, func_2356);
    sv_set_mem(0x1, 0x6, 0x15f, func_2356);
}

int func_2252()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1442, 0x5403ea, 0, 0);
    return 0;
}

void func_2253()
{
    sys_21(0x25);
    if (global18 == 0)
    {
        func_22(0x25d, 0, 1.0f);
    }
    else
    {
        func_22(0x25e, 0, 1.0f);
    }
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    sys_21(0x29);
    WorkModuleImpl.on_flag2(0x20000001);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x1);
    KineticModuleImpl.set_speed(0x2, 0, 0);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl.set_speed(0, 0, 0);
    KineticModuleImpl.disable_energy(0);
    KineticModuleImpl(0xe, 0x3, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x3);
    sys_21(0x8c);
    func_78(func_2254);
}

void func_2254()
{
    if (global9 >= 69.0f)
    {
        func_16(0x161, 0);
    }
}

void func_2255()
{
    ArticleModuleImpl.remove(0x4);
    sys_21(0x8d);
}

int func_2256()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0x10442, 0x5403ea, 0, 0);
    return 0;
}

void func_2257()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x1000006e);
    if (var0 > 0)
    {
        EffectModuleImpl(0x6, var0);
        WorkModuleImpl.set_int(0, 0x1000006e);
    }
    VisibilityModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    sys_21(0x29);
    WorkModuleImpl.on_flag2(0x20000001);
    CameraModuleImpl(0x2713, 50.0f, -50.0f, 50.0f, -50.0f);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x1);
    KineticModuleImpl.set_speed(0x2, 0, 0);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl.set_speed(0, 0, 0);
    KineticModuleImpl.disable_energy(0);
    KineticModuleImpl(0xe, 0x3, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x3);
    ArticleModuleImpl.generate(0x3);
    WorkModuleImpl.set_int(0, 0x11000002);
    WorkModuleImpl.set_int(0, 0x11000003);
    WorkModuleImpl.set_int(0, 0x11000004);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1400000c), 0x11000005);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1400000d), 0x11000006);
    var1 = (int)(WorkModuleImplFloat.get_float(0x400000e) * 60.0f);
    WorkModuleImpl.set_int(var1, 0x11000007);
    if (!StopModuleImpl(0x1))
    {
        func_2260();
    }
    global16 = func_2260;
    func_78(func_2258);
}

void func_2258()
{
    WorkModuleImpl.add_float(global48, 0x1000023);
    WorkModuleImpl.add_float(global32, 0x1000024);
}

void func_2259()
{
    CameraModuleImpl(0x2711);
}

void func_2260()
{
    if (WorkModuleImpl.get_int(0x11000007) > 0)
    {
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000007) - 0x1, 0x11000007);
    }
    if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        if (WorkModuleImpl.get_int(0x11000002) > 0)
        {
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000002) - 0x1, 0x11000002);
        }
        if (WorkModuleImpl.get_int(0x11000002) == 0)
        {
            ArticleModuleImpl(0x2714, 0x5, 0x1);
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x14000006), 0x11000003);
            return;
        }
    }
    else if (WorkModuleImpl.get_int(0x11000003) > 0)
    {
        if (WorkModuleImpl.get_int(0x11000003) > 0)
        {
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000003) - 0x1, 0x11000003);
        }
        if (WorkModuleImpl.get_int(0x11000003) == 0x6)
        {
            CameraModuleImpl(0x2710, 0x4);
        }
        if (WorkModuleImpl.get_int(0x11000003) == 0)
        {
            ArticleModuleImpl.remove(0x5);
            if (WorkModuleImpl.get_int(0x11000006) > 0)
            {
                WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000006) - 0x1, 0x11000006);
            }
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1400000b), 0x11000004);
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1400000c) - 0x1, 0x11000005);
            return;
        }
    }
    else
    {
        if (WorkModuleImpl.get_int(0x11000006) == 0)
        {
            func_16(0x162, 0);
            return;
        }
        if (WorkModuleImpl.get_int(0x11000007) == 0)
        {
            func_16(0x162, 0);
            return;
        }
        if (WorkModuleImpl.get_int(0x11000004) > 0)
        {
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000004) - 0x1, 0x11000004);
        }
        if (WorkModuleImpl.get_int(0x11000005) > 0)
        {
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000005) - 0x1, 0x11000005);
        }
        if (WorkModuleImpl.get_int(0x11000005) == 0 || WorkModuleImpl.get_int(0x11000004) == 0 && (ControlModuleImpl(0x2710, 0) || ControlModuleImpl(0x2710, 0x1)))
        {
            ArticleModuleImpl.generate(0x5);
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x14000005), 0x11000002);
            return;
        }
    }
}

int func_2261()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0x442, 0x5403ea, 0, 0);
    return 0;
}

void func_2262()
{
    VisibilityModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    sys_21(0x29);
    WorkModuleImpl.on_flag2(0x20000001);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x1);
    KineticModuleImpl.set_speed(0x2, 0, 0);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl.set_speed(0, 0, 0);
    KineticModuleImpl.disable_energy(0);
    KineticModuleImpl(0xe, 0x3, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x3);
    ArticleModuleImpl(0x2714, 0x3, 0x1);
    func_78(func_2263);
}

void func_2263()
{
    if (global9 >= 30.0f)
    {
        if (global18 == 0)
        {
            func_16(0, 0);
        }
        else
        {
            func_16(0xe, 0);
        }
    }
}

void func_2264()
{
    VisibilityModuleImpl(0x2710, 0x1);
    sys_21(0xc, 0x1);
    ArticleModuleImpl.remove(0x3);
    sys_21(0x26);
}

void func_2265()
{
    if (func_478())
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x20000079))
    {
        WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x800000d) + 0, 0);
        StatusModuleImpl(0x2711, 0x19);
        return 0x1;
        WorkModuleImpl.off_flag2(0x20000079);
    }
}

void func_2266()
{
    if (0x39 == global5)
    {
        PostureModuleImpl(0x271a);
    }
    ArticleModuleImpl(0x2713, 0x2, 0x4);
    func_78(func_2267);
}

void func_2267()
{
    if (global18 == 0x2)
    {
        func_16(0x3d, 0);
        return 0x1;
    }
}

void func_2268()
{
    printf("status_CatchDashPullDisguise");
    WorkModuleImpl.on_flag2(0x2100000d);
    func_2266();
}

void func_2269()
{
    WorkModuleImpl.set_int(0x2, 0x11000002);
    WorkModuleImpl.set_int(0x7, 0x11000004);
    func_129();
}

void func_2270()
{
    WorkModuleImpl.set_int(0x2, 0x11000002);
    WorkModuleImpl.set_int(0x7d1, 0x11000004);
    func_134();
}

void func_2271()
{
    WorkModuleImpl.set_int(0x6, 0x11000003);
    func_139();
}

void func_2272()
{
    func_143(0x2, 0x3);
}

void func_2273()
{
    ItemModuleImpl(0xf, 0);
    WorkModuleImpl.set_int(0x91, 0x11000005);
    func_144(func_2272);
}

void func_2274()
{
    
}

void func_2275()
{
    ArticleModuleImpl.remove(0x2);
}

void func_2276()
{
    ArticleModuleImpl.remove(0x2);
}

void func_2277()
{
    ArticleModuleImpl.remove(0x2);
    func_334();
}

int func_2278()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1422, 0, 0x100, 0x1000);
    return 0;
}

void func_2279()
{
    int var0;
    WorkModuleImpl.set_int(0x239, 0x11000002);
    WorkModuleImpl.set_int(0x23d, 0x11000003);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000000) + 0, 0x1000006);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000002) + 0, 0x1000007);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000001) + 0, 0x1000008);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000005) + 0, 0x100000d);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000004) + 0, 0x100000a);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000003) + 0, 0x1000009);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000006) + 0, 0x100000b);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000009) + 0, 0x100000c);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000007) + 0, 0x100000e);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000008) + 0, 0x100000f);
    var0 = (int)WorkModuleImplFloat.get_float(0x700000a);
    WorkModuleImpl.set_int(var0, 0x11000005);
    WorkModuleImpl.set_int(0x10, 0x11000004);
    func_2391();
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x700000a) + 0, 0);
    WorkModuleImpl.strans_off(0x1e00001e);
    func_78(func_2280);
}

void func_2280()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    printf("SZeroSuit status_SpecialHi_Main");
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (!StatusModuleImpl(0x6))
    {
        if (global18 == 0 && 7.0f < MotionModuleImplFloat.get_frame() && !WorkModuleImpl.is_flag(0x2100000d))
        {
            func_16(0x19);
        }
    }
    func_2392();
    if (WorkModuleImpl.is_flag(0x2100000e) && !WorkModuleImpl.is_flag(0x2100000d) && KineticModuleImpl.get_kinetic_type() != 0x13)
    {
        KineticModuleImpl.change_kinetic_type(0x13);
        var0 = WorkModuleImplFloat.get_float(0x1);
        if (var0 != 1.0f)
        {
            KineticModuleImpl.mul_x_speed_max(0x2, var0);
        }
        KineticModuleImpl.disable_energy(0);
        var1 = WorkModuleImplFloat.get_float(0x100000e);
        var2 = WorkModuleImplFloat.get_float(0x100000f);
        if (0 <= var1 && var1 != 1.0f)
        {
            var3 = KineticModuleImplFloat.get_speed_x(0x2);
            KineticModuleImpl.set_speed(0x2, var3 * var1, 0);
        }
        if (0 <= var2 && var2 != 1.0f)
        {
            var4 = KineticModuleImplFloat.get_speed_y(0x1);
            KineticModuleImpl.set_speed(0x1, var4 * var2);
        }
        WorkModuleImpl.strans_on(0x1e00001e);
    }
}

void func_2281()
{
    
}

int func_2282()
{
    printf("status_pre_SpecialLw()");
    StatusModuleImpl(0x5, 0xffffffff, 0x12, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0x1000, 0x400, 0x1000);
    return 0;
}

void func_2283()
{
    printf("status_SpecialLw()");
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x18000000), 0x11000002);
    WorkModuleImpl.on_flag2(0x20000078);
    WorkModuleImpl.strans_off(0x1e000065);
    func_2302();
}

void func_2284()
{
    int var0;
    var0 = 0x1;
    var0 = !var0;
    GroundModuleImpl(0x2713, var0);
}

int func_2285()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2286()
{
    printf("status_SpecialLwFlip()");
    func_22(0x251, 0, 1.0f);
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
    WorkModuleImpl.strans_group_on(0x1f000008);
    WorkModuleImpl.strans_group_on(0x1f000009);
    WorkModuleImpl.strans_group_on(0x1f00000a);
    WorkModuleImpl.strans_group_on(0x1f00000b);
    WorkModuleImpl.strans_group_on(0x1f00000d);
    WorkModuleImpl.strans_group_on(0x1f00000e);
    WorkModuleImpl.strans_group_on(0x1f00000f);
    WorkModuleImpl.strans_group_on(0x1f000010);
    func_78(func_2287);
}

void func_2287()
{
    printf("status_SpecialLwFlip_Main()");
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        printf("status_SpecialLwFlip_Main() => FIGHTER_STATUS_KIND_FALL");
        func_16(0xe, 0);
        return;
    }
    if (global18 == 0)
    {
        printf("status_SpecialLwFlip_Main() => FIGHTER_STATUS_KIND_LANDING");
        func_16(0x16, 0);
        return;
    }
    func_2358();
}

void func_2288()
{
    
}

int func_2289()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2290()
{
    func_22(0x249, 0, 1.0f);
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
    KineticModuleImpl.change_kinetic_type(0xa);
    func_78(func_2291);
}

void func_2291()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.is_flag(0x20000079))
        {
            WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x800000d) + 0, 0);
            func_16(0x19, 0);
        }
        else
        {
            func_16(0x15f, 0);
        }
        return;
    }
    func_2369();
}

void func_2292()
{
    
}

int func_2293()
{
    StatusModuleImpl(0x5, 0, 0x6, 0x1, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2294()
{
    func_22(0x259, 0, 1.0f);
    func_78(func_2295);
}

void func_2295()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    func_2347();
}

void func_2296()
{
    
}

int func_2297()
{
    printf("status_pre_SpecialLwLanding()");
    StatusModuleImpl(0x5, 0, 0x6, 0x1, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2298()
{
    printf("status_SpecialLwLanding()");
    func_22(0x255, 0, 1.0f);
    func_78(func_2299);
}

void func_2299()
{
    printf("status_SpecialLwLanding_Main()");
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    func_2347();
}

void func_2300()
{
    
}

int func_2301()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2302()
{
    int var0;
    printf("status_SpecialLwStart()");
    WorkModuleImpl.set_int(0, 0x11000005);
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.off_flag2(0x2100000e);
    WorkModuleImpl.off_flag2(0x21000010);
    WorkModuleImpl.off_flag2(0x21000012);
    WorkModuleImpl.off_flag2(0x21000013);
    WorkModuleImpl.off_flag2(0x21000014);
    WorkModuleImpl.off_flag2(0x21000011);
    if (global18 == 0)
    {
        func_22(0x241, 0, 1.0f);
    }
    else
    {
        func_22(0x245, 0, 1.0f);
    }
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
    KineticModuleImpl.change_kinetic_type(0x11);
    KineticModuleImpl(0xe, 0x3, 0x16, 0, 0, 0, 0, 0);
    KineticModuleImpl.set_speed(0x3, 0, 0);
    KineticModuleImpl.enable_energy(0x3);
    var0 = 0;
    var0 = !var0;
    GroundModuleImpl(0x2713, var0);
    func_78(func_2303);
}

void func_2303()
{
    printf("status_SpecialLwStart_Main()");
    if (func_56())
    {
        return 0x1;
    }
    func_2304();
    if (global18 == 0)
    {
        func_16(0x15e, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
    if (WorkModuleImpl.is_flag(0x2100000d) && WorkModuleImpl.is_flag(0x21000013))
    {
        func_16(0x15b, 0);
        return;
    }
    func_2347();
}

void func_2304()
{
    printf("status_SpecialLwStartUniq()");
    if (global48 < -0.10000000149011612f || 0.10000000149011612f < global48)
    {
        KineticModuleImpl.set_speed(0x3, global48 * WorkModuleImplFloat.get_float(0x800000a), 0);
    }
    if (WorkModuleImpl.is_flag(0x21000010) && WorkModuleImpl.get_int(0x11000002) > 0 && (global32 >= 0.5f || ControlModuleImpl(0x2712, 0x2)) && !GroundModuleImpl(0x2722, 0x1) && !GroundModuleImpl(0x2722, 0x10) && !GroundModuleImpl(0x2722, 0x20))
    {
        if (GroundModuleImpl(0x2722, 0x2) || GroundModuleImpl(0x2722, 0x4))
        {
            PostureModuleImpl(0x2710);
            PostureModuleImpl(0x2719);
            func_16(0x15a, 0x1);
            WorkModuleImpl.dec_int(0x11000002);
        }
    }
    if (WorkModuleImpl.is_flag(0x21000012))
    {
        if (ControlModuleImpl(0x2710, 0x1))
        {
            WorkModuleImpl.on_flag2(0x21000013);
        }
        else if (ControlModuleImpl(0x2710, 0))
        {
            WorkModuleImpl.on_flag2(0x21000013);
        }
        if (global24 & 0x200000)
        {
            WorkModuleImpl.on_flag2(0x21000014);
        }
        if (global24 & 0x100000)
        {
            if (ControlModuleImpl(0x271c))
            {
                WorkModuleImpl.on_flag2(0x21000014);
            }
        }
    }
}

int func_2305()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2306()
{
    printf("status_SpecialLwStep()");
    func_22(0x24d, 0, 1.0f);
    func_78(func_2307);
}

void func_2307()
{
    printf("status_SpecialLwStep_Main()");
    if (MotionModuleImpl.is_end())
    {
        func_16(0x15d, 0);
        return;
    }
    func_2380();
}

void func_2308()
{
    
}

int func_2309()
{
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x11000, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2310()
{
    printf("SZeroSuit status_SpecialN");
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0x6);
        func_22(0x211, 0, 1.0f);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
        func_22(0x21d, 0, 1.0f);
    }
    func_78(func_2311);
}

void func_2311()
{
    printf("SZeroSuit status_SpecialN_Main");
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2312();
    }
    if (MotionModuleImpl.is_end())
    {
        if (ControlModuleImpl(0x2712, 0x1))
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

void func_2312()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0x6);
        func_23(0x211);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
        func_23(0x21d);
    }
}

void func_2313()
{
    printf("SZeroSuit status_end_SpecialN");
}

int func_2314()
{
    StatusModuleImpl(0x5, 0, 0x6, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10192, 0, 0x80, 0);
    return 0;
}

void func_2315()
{
    printf("SZeroSuit status_SpecialNLanding_Main");
    func_22(0x229, 0, 1.0f);
    func_78(func_2316);
}

void func_2316()
{
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_2317()
{
    printf("SZeroSuit status_end_SpecialNLanding");
}

int func_2318()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0x4000, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10192, 0, 0x80, 0);
    return 0;
}

void func_2319()
{
    printf("SZeroSuit status_SpecialNShoot");
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0x6);
        func_22(0x215, 0, 1.0f);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
        func_22(0x221, 0, 1.0f);
    }
    func_78(func_2320);
}

void func_2320()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    printf("SZeroSuit status_SpecialNShoot_Main");
    if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2321();
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

void func_2321()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0x6);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_16(0x159, 0);
            return;
        }
        else
        {
            func_23(0x215);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
        func_23(0x221);
    }
}

void func_2322()
{
    printf("SZeroSuit status_end_SpecialNShoot");
}

int func_2323()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10192, 0, 0x80, 0);
    return 0;
}

void func_2324()
{
    float var0;
    printf("SZeroSuit status_SpecialNShootH");
    var0 = WorkModuleImplFloat.get_float(0x5000000);
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0x6);
        func_22(0x219, 0, var0);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
        func_22(0x225, 0, var0);
    }
    func_78(func_2325);
}

void func_2325()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    printf("SZeroSuit status_SpecialNShootH_Main");
    if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2326();
    }
    if (MotionModuleImpl.is_end())
    {
        WorkModuleImpl.on_flag2(0x2100000e);
        func_16(0x157, 0);
        return;
    }
    else if (ControlModuleImpl(0x2713, 0x1))
    {
        func_16(0x157, 0);
        return;
    }
}

void func_2326()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0x6);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_16(0x159, 0);
            return;
        }
        else
        {
            func_23(0x219);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
        func_23(0x225);
    }
}

void func_2327()
{
    printf("SZeroSuit status_end_SpecialNShootH");
}

int func_2328()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x1, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2329()
{
    int var0;
    WorkModuleImpl.strans_group_on(0x1f000008);
    WorkModuleImpl.set_int(0xb4, 0x11000003);
    if (MotionModuleImpl(0x22, 0x91))
    {
        func_22(0x91, 0, 1.0f);
    }
    if (!StopModuleImpl(0x1))
    {
        func_124();
    }
    global16 = func_124;
    var0 = WorkModuleImpl.get_int(0x11000004);
    if (var0 >= 0x2)
    {
        GroundModuleImpl(0x2712, var0);
        WorkModuleImpl.strans_group_off(0x1f000009);
    }
}

void func_2330()
{
    if (func_56())
    {
        return 0x1;
    }
    WorkModuleImpl.set_int(0x2, 0x11000002);
    WorkModuleImpl.set_int(0x2, 0x11000004);
    ArticleModuleImpl.generate(0x2);
    if (global18 == 0)
    {
        func_22(0x22d, 0, 1.0f);
        ArticleModuleImpl(0x2715, 0x2, 0xc);
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0x6);
    }
    else
    {
        func_2329();
        WorkModuleImpl.strans_group_off(0x1f000008);
        func_22(0x231, 0, 1.0f);
        ArticleModuleImpl(0x2715, 0x2, 0x10);
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
    }
    func_33();
    func_78(func_2331);
}

void func_2331()
{
    int var0;
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    var0 = StatusModuleImpl(0x6);
    if (!var0)
    {
        func_126();
    }
    if (var0 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2332();
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

void func_2332()
{
    float var0;
    float var1;
    if (global18 == 0)
    {
        func_23(0x22d);
        LinkModuleImpl(0x4, 0x3, 0x4c2, 0);
        GroundModuleImpl(0x2710, 0x2);
        KineticModuleImpl.change_kinetic_type(0x6);
        var0 = sys_40(0xb);
        var1 = KineticModuleImplFloat.get_speed(0x3);
        if (sys_40(0x8) < var1)
        {
            var0 *= WorkModuleImplFloat.get_float(0x2000003);
        }
        KineticModuleImpl.set_friction(0x3, var0, 0);
        KineticModuleImpl.set_limit_speed(0x3, sys_40(0xc), 0);
    }
    else
    {
        func_23(0x231);
        LinkModuleImpl(0x4, 0x3, 0x4c2, 0);
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0xa);
    }
}

void func_2333()
{
    func_127();
}

void func_2334()
{
    WorkModuleImpl.set_int(0x2, 0x11000002);
    WorkModuleImpl.set_int(0x2, 0x11000004);
    func_125();
}

void func_2335()
{
    
}

int func_2336()
{
    if (global3 == 0)
    {
        if (func_2340() != 0)
        {
            return 0x1;
        }
    }
    if (func_2341() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2337()
{
    
}

void func_2338()
{
    
}

void func_2339()
{
    
}

int func_2340()
{
    return 0;
}

int func_2341()
{
    return 0;
}

void func_2342()
{
    
}

void func_2343()
{
    
}

void func_2344()
{
    
}

void func_2345()
{
    
}

void func_2346()
{
    printf("sub_uniq_process_SpecialLw_init()");
    JostleModuleImpl(0x2712, 0xb);
    JostleModuleImpl(0, 0xb, WorkModuleImplFloat.get_float(0x8000006), WorkModuleImplFloat.get_float(0x8000007), WorkModuleImplFloat.get_float(0x8000008), WorkModuleImplFloat.get_float(0x8000009));
}

int func_2347()
{
    printf("sub_uniq_process_SpecialLw_main");
    if (global3 == 0)
    {
        if (func_2351() != 0)
        {
            return 0x1;
        }
    }
    if (func_2352() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2348()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x800000c);
    KineticModuleImpl.set_trans_mul(0, var0);
}

void func_2349()
{
    
}

void func_2350()
{
    
}

int func_2351()
{
    return 0;
}

int func_2352()
{
    int var0;
    float var1;
    int var2;
    int var3;
    var0 = WorkModuleImpl.get_int(0x11000005);
    var1 = WorkModuleImplFloat.get_float(0x800000b);
    var2 = (int)var1;
    if ((WorkModuleImpl.is_flag(0x21000014) || var2 < var0) && !WorkModuleImpl.is_flag(0x21000013) && WorkModuleImpl.is_flag(0x2100000e))
    {
        JostleModuleImpl(0x3, 0xb, 0x11000004);
        var3 = WorkModuleImpl.get_int(0x11000004);
        if (0x50000000 != var3)
        {
            WorkModuleImpl.set_int(var3, 0x11000003);
            func_16(0x15c, 0);
            return;
        }
    }
    WorkModuleImpl.inc_int(0x11000005);
    return 0;
}

void func_2353()
{
    
}

void func_2354()
{
    
}

void func_2355()
{
    
}

void func_2356()
{
    if (global6 == 0x155 || global6 == 0x15a || global6 == 0x15b || global6 == 0x15c || global6 == 0x15d || global6 == 0x15e || global6 == 0x15f)
    {
        return;
    }
    if (global4 == 0x15e || global4 == 0x15f)
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x21000011))
    {
        PostureModuleImpl(0x2710);
        PostureModuleImpl(0x2719);
    }
}

void func_2357()
{
    float var0;
    float var1;
    printf("sub_uniq_process_SpecialLwFlip_init");
    KineticModuleImpl.change_kinetic_type(0x1);
    var0 = WorkModuleImplFloat.get_float(0x8000001) * global48;
    var1 = WorkModuleImplFloat.get_float(0x8000002);
    KineticModuleImpl.set_speed(0x2, var0, 0);
    KineticModuleImpl.set_speed(0x1, var1);
}

int func_2358()
{
    if (global3 == 0)
    {
        if (func_2362() != 0)
        {
            return 0x1;
        }
    }
    if (func_2363() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2359()
{
    
}

void func_2360()
{
    
}

void func_2361()
{
    
}

int func_2362()
{
    return 0;
}

int func_2363()
{
    return 0;
}

void func_2364()
{
    
}

void func_2365()
{
    
}

void func_2366()
{
    
}

void func_2367()
{
    printf("sub_uniq_process_SpecialLwFlip_exit");
    if (WorkModuleImpl.is_flag(0x21000011))
    {
        PostureModuleImpl(0x2719);
    }
}

void func_2368()
{
    
}

int func_2369()
{
    if (global3 == 0)
    {
        if (func_2373() != 0)
        {
            return 0x1;
        }
    }
    if (func_2374() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2370()
{
    int var0;
    int var1;
    float var2;
    float var3;
    var0 = (int)func_14(PostureModuleImplFloat.get_lr());
    var1 = (int)func_14(global48);
    var2 = func_13(global48);
    var3 = WorkModuleImplFloat.get_float(0x8000003);
    if (var2 >= var3)
    {
        if (var0 == var1)
        {
            WorkModuleImpl.on_flag2(0x21000016);
        }
    }
    if (WorkModuleImpl.is_flag(0x21000015))
    {
        WorkModuleImpl.off_flag2(0x21000015);
        if (WorkModuleImpl.is_flag(0x21000016))
        {
            PostureModuleImpl(0x2710);
            PostureModuleImpl(0x2719);
        }
    }
}

void func_2371()
{
    
}

void func_2372()
{
    
}

int func_2373()
{
    return 0;
}

int func_2374()
{
    return 0;
}

void func_2375()
{
    
}

void func_2376()
{
    
}

void func_2377()
{
    
}

void func_2378()
{
    if (global6 == 0x155 || global6 == 0x15a || global6 == 0x15b || global6 == 0x15c || global6 == 0x15d || global6 == 0x15e || global6 == 0x15f)
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x21000011))
    {
        PostureModuleImpl(0x2710);
        PostureModuleImpl(0x2719);
    }
}

void func_2379()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000003);
    if (0xffffffff != var0)
    {
        printf("==--------------SpecialLw Step(%d)", var0);
        if (sys_21(0x59, var0))
        {
            printf("==--------------Tread");
            if (LinkModuleImpl(0x5, 0x3, var0))
            {
                LinkModuleImpl(0x3, 0x3, 0x6, 0x11000004, 0x1000007, 0x21000010);
                if (WorkModuleImpl.is_flag2(0x21000010))
                {
                    LinkModuleImpl(0x7, 0x3, 0, WorkModuleImpl.get_int(0x11000004), 0x5);
                }
                else
                {
                    WorkModuleImpl.off_flag2(0x2100000d);
                    PostureModuleImpl.set_pos(WorkModuleImplFloat.get_float(0x1000007), WorkModuleImplFloat.get_float(0x1000008), PostureModuleImplFloat.get_pos_z());
                }
            }
        }
    }
}

int func_2380()
{
    if (global3 == 0)
    {
        if (func_2384() != 0)
        {
            return 0x1;
        }
    }
    if (func_2385() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2381()
{
    
}

void func_2382()
{
    
}

void func_2383()
{
    
}

int func_2384()
{
    return 0;
}

int func_2385()
{
    return 0;
}

void func_2386()
{
    
}

void func_2387()
{
    
}

void func_2388()
{
    
}

void func_2389()
{
    if (LinkModuleImpl(0x2, 0x3) == 0x1)
    {
        if (LinkModuleImpl(0x8) == 0x1)
        {
            LinkModuleImpl(0x9);
            LinkModuleImpl(0xb);
        }
        LinkModuleImpl(0x6, 0x3);
    }
    if (global6 == 0x155 || global6 == 0x15b || global6 == 0x15c || global6 == 0x15d || global6 == 0x15e || global6 == 0x15f)
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x21000011))
    {
        PostureModuleImpl.reverse_lr();
        PostureModuleImpl.update_rot_y();
    }
}

void func_2390()
{
    float var0;
    float var1;
    float var2;
    float var3;
    if (WorkModuleImpl.is_flag2(0x2100000e) == 0 && WorkModuleImpl.is_flag2(0x2100000d) == 0x1)
    {
        WorkModuleImpl.on_flag2(0x2100000e);
        KineticModuleImpl.change_kinetic_type(0x42);
        func_94();
        if (!WorkModuleImpl.is_flag(0x21000011))
        {
            sys_21(0x17, 0x4);
        }
    }
    else if (global1 != 0x19 && WorkModuleImpl.is_flag(0x2100000e) && !WorkModuleImpl.is_flag(0x2100000d) && KineticModuleImpl.get_kinetic_type() != 0xa)
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        var0 = WorkModuleImplFloat.get_float(0x100000e);
        var1 = WorkModuleImplFloat.get_float(0x100000f);
        if (var0 > 0 && var0 != 1.0f)
        {
            var2 = KineticModuleImplFloat.get_speed_x(0x3);
            KineticModuleImpl.set_speed(0x3, var2 * var0, 0);
        }
        if (var1 > 0 && var1 != 1.0f)
        {
            var3 = KineticModuleImplFloat.get_speed_y(0x1);
            KineticModuleImpl.set_speed(0x1, var3 * var1);
        }
    }
    if (WorkModuleImpl.is_flag2(0x2100000f) == 0x1)
    {
        WorkModuleImpl.off_flag2(0x2100000f);
        printf("super_jump_punch_uniq x abs: %f LR_STICK_X: %f", func_84(), WorkModuleImplFloat.get_float(0x1000006));
        if (func_84() > WorkModuleImplFloat.get_float(0x1000006))
        {
            func_33();
        }
    }
}

void func_2391()
{
    float var0;
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x100000c), 0x1);
    var0 = (float)WorkModuleImpl.get_int(0x11000005);
    WorkModuleImpl.set_float(var0, 0);
    WorkModuleImpl.on_flag2(0x20000003);
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x40);
        func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
    }
    else
    {
        func_94();
        KineticModuleImpl.change_kinetic_type(0x41);
        WorkModuleImpl.on_flag2(0x21000010);
        func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
        WorkModuleImpl.strans_off(0x1e000002);
    }
    WorkModuleImpl.strans_on(0x1e00001e);
    if (!StopModuleImpl(0x1))
    {
        func_2390();
    }
    global16 = func_2390;
}

void func_2392()
{
    if (func_56() == 0x1)
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00001e) == 0x1 && global18 == 0)
    {
        if (WorkModuleImpl.is_flag2(0x2100000d) == 0x1)
        {
            if (MotionModuleImplFloat(0xb) < 0)
            {
                func_16(0x19, 0);
            }
        }
        else if (WorkModuleImpl.is_flag(0x2100000e))
        {
            if (KineticModuleImplFloat.get_sum_speed_y(0x1) < 0)
            {
                func_16(0x19, 0);
            }
        }
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(WorkModuleImpl.get_int(0x11000004), 0);
    }
}


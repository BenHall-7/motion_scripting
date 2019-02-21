void main()
{
    printf("ENTRY This Fighter is driven by msc.");
    func_0();
    global0 = sys_7(0);
    global1 = sys_7(0x1);
    func_2242();
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

void func_2242()
{
    global7 = 0x161;
    func_2240();
    func_2247();
    func_2248();
    func_2249();
    func_2250();
    func_2251();
    func_2253();
    func_2243();
    func_2244();
    func_2241();
    func_2246();
}

void func_2243()
{
    sv_set_mem(0x1, 0, 0x1c, func_2245);
    sv_set_mem(0x1, 0, 0x153, func_2285);
    sv_set_mem(0x1, 0x1, 0x153, func_2286);
    sv_set_mem(0x1, 0x2, 0x153, func_2288);
    sv_set_mem(0x1, 0, 0x154, func_2306);
    sv_set_mem(0x1, 0x1, 0x154, func_2307);
    sv_set_mem(0x1, 0x2, 0x154, func_2309);
    sv_set_mem(0x1, 0, 0x155, func_2311);
    sv_set_mem(0x1, 0x1, 0x155, func_2312);
    sv_set_mem(0x1, 0x2, 0x155, func_2315);
    sv_set_mem(0x1, 0, 0x156, func_2366);
    sv_set_mem(0x1, 0x1, 0x156, func_2367);
    sv_set_mem(0x1, 0x2, 0x156, func_2369);
    sv_set_mem(0x1, 0, 0x15c, func_2294);
    sv_set_mem(0x1, 0x1, 0x15c, func_2295);
    sv_set_mem(0x1, 0x2, 0x15c, func_2297);
    sv_set_mem(0x1, 0, 0x15d, func_2298);
    sv_set_mem(0x1, 0x1, 0x15d, func_2299);
    sv_set_mem(0x1, 0x2, 0x15d, func_2301);
    sv_set_mem(0x1, 0, 0x15e, func_2302);
    sv_set_mem(0x1, 0x1, 0x15e, func_2303);
    sv_set_mem(0x1, 0x2, 0x15e, func_2305);
    sv_set_mem(0x1, 0, 0x15f, func_2316);
    sv_set_mem(0x1, 0x1, 0x15f, func_2317);
    sv_set_mem(0x1, 0x2, 0x15f, func_2320);
    sv_set_mem(0x1, 0, 0x160, func_2370);
    sv_set_mem(0x1, 0x1, 0x160, func_2371);
    sv_set_mem(0x1, 0x2, 0x160, func_2373);
}

void func_2244()
{
    
}

int func_2245()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0xc000, 0xec, 0xc0, 0x40);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x2000, 0, 0);
    return 0;
}

void func_2246()
{
    global51 = 0x211;
    global52 = 0x21d;
    global53 = 0x22f;
    global54 = 0x231;
    global55 = 0x237;
}

void func_2247()
{
    sv_set_mem(0x1, 0, 0x152, func_2254);
    sv_set_mem(0x1, 0, 0x157, func_2255);
    sv_set_mem(0x1, 0, 0x158, func_2265);
    sv_set_mem(0x1, 0, 0x159, func_2270);
    sv_set_mem(0x1, 0, 0x15a, func_2275);
    sv_set_mem(0x1, 0, 0x15b, func_2280);
}

void func_2248()
{
    sv_set_mem(0x1, 0x1, 0x152, func_2256);
    sv_set_mem(0x1, 0x1, 0x157, func_2259);
    sv_set_mem(0x1, 0x1, 0x158, func_2266);
    sv_set_mem(0x1, 0x1, 0x159, func_2271);
    sv_set_mem(0x1, 0x1, 0x15a, func_2276);
    sv_set_mem(0x1, 0x1, 0x15b, func_2281);
}

void func_2249()
{
    sv_set_mem(0x1, 0x2, 0x152, func_2263);
    sv_set_mem(0x1, 0x2, 0x157, func_2264);
    sv_set_mem(0x1, 0x2, 0x158, func_2269);
    sv_set_mem(0x1, 0x2, 0x159, func_2274);
    sv_set_mem(0x1, 0x2, 0x15a, func_2279);
    sv_set_mem(0x1, 0x2, 0x15b, func_2284);
}

void func_2250()
{
    sv_set_mem(0x1, 0x3, 0x152, func_2355);
    sv_set_mem(0x1, 0x3, 0x157, func_2344);
    sv_set_mem(0x1, 0x3, 0x158, func_2321);
    sv_set_mem(0x1, 0x3, 0x159, func_2321);
    sv_set_mem(0x1, 0x3, 0x15a, func_2321);
    sv_set_mem(0x1, 0x3, 0x15b, func_2332);
}

void func_2251()
{
    sv_set_mem(0x1, 0x4, 0x152, func_2357);
    sv_set_mem(0x1, 0x4, 0x157, func_2346);
    sv_set_mem(0x1, 0x4, 0x158, func_2323);
    sv_set_mem(0x1, 0x4, 0x159, func_2323);
    sv_set_mem(0x1, 0x4, 0x15a, func_2323);
    sv_set_mem(0x1, 0x4, 0x15b, func_2334);
}

void func_2252()
{
    sv_set_mem(0x1, 0x5, 0x152, func_2358);
    sv_set_mem(0x1, 0x5, 0x157, func_2347);
    sv_set_mem(0x1, 0x5, 0x158, func_2324);
    sv_set_mem(0x1, 0x5, 0x159, func_2324);
    sv_set_mem(0x1, 0x5, 0x15a, func_2324);
    sv_set_mem(0x1, 0x5, 0x15b, func_2335);
}

void func_2253()
{
    sv_set_mem(0x1, 0x6, 0x152, func_2365);
    sv_set_mem(0x1, 0x6, 0x157, func_2354);
    sv_set_mem(0x1, 0x6, 0x158, func_2331);
    sv_set_mem(0x1, 0x6, 0x159, func_2331);
    sv_set_mem(0x1, 0x6, 0x15a, func_2331);
    sv_set_mem(0x1, 0x6, 0x15b, func_2342);
}

int func_2254()
{
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1192, 0x1000, 0x80, 0x1000);
    return 0;
}

int func_2255()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2256()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.off_flag2(0x2100000e);
    func_2258();
    func_78(func_2257);
}

void func_2257()
{
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
    if (StatusModuleImpl(0x6) == 0)
    {
        if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
        {
            func_2258();
        }
    }
    func_2356();
}

void func_2258()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x211);
        }
        else
        {
            func_22(0x211, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x217);
        }
        else
        {
            func_22(0x217, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2259()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    if (!StopModuleImpl(0x1))
    {
        func_2261();
    }
    global16 = func_2261;
    func_2262();
    func_78(func_2260);
}

void func_2260()
{
    float var0;
    float var1;
    float var2;
    float var3;
    if (ControlModuleImpl(0x2713, 0x1))
    {
        var0 = WorkModuleImplFloat.get_float(0x1000006);
        var1 = (float)WorkModuleImpl.get_int(0x15000000) * 30.0f;
        var2 = (float)WorkModuleImpl.get_int(0x15000001) * 30.0f;
        var3 = (float)WorkModuleImpl.get_int(0x15000002) * 30.0f;
        if (var0 >= var3)
        {
            func_16(0x15b, 0);
            return;
        }
        else if (var0 >= var2)
        {
            func_16(0x15a, 0);
            return;
        }
        else if (var0 >= var1)
        {
            func_16(0x159, 0);
            return;
        }
        else
        {
            func_16(0x158, 0);
            return;
        }
    }
    else
    {
        var0 = WorkModuleImplFloat.get_float(0x1000006);
        var3 = (float)WorkModuleImpl.get_int(0x15000002) * 30.0f;
        if (var0 >= var3)
        {
            func_16(0x15b, 0);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0)
    {
        if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
        {
            func_2262();
        }
    }
    func_2345();
}

void func_2261()
{
    float var0;
    float var1;
    WorkModuleImpl.add_float(WorkModuleImplFloat.get_float(0x5000008), 0x1000006);
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    var1 = (float)WorkModuleImpl.get_int(0x15000002) * 30.0f;
    if (var1 <= var0)
    {
        WorkModuleImpl.on_flag2(0x2100000e);
    }
}

void func_2262()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x5000008);
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_24(0x212);
        }
        else
        {
            func_22(0x212, 0, var0);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x218);
        }
        else
        {
            func_22(0x218, 0, var0);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2263()
{
    
}

void func_2264()
{
    
}

int func_2265()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2266()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2268();
    func_78(func_2267);
}

void func_2267()
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
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0)
    {
        if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
        {
            func_2268();
        }
    }
    func_2322();
}

void func_2268()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
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
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
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

void func_2269()
{
    DamageModuleImpl(0xb, 0, (float)0 + 0);
}

int func_2270()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2271()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2273();
    func_78(func_2272);
}

void func_2272()
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
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0)
    {
        if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
        {
            func_2273();
        }
    }
    func_2322();
}

void func_2273()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x214);
        }
        else
        {
            func_22(0x214, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x21a);
        }
        else
        {
            func_22(0x21a, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2274()
{
    DamageModuleImpl(0xb, 0, (float)0 + 0);
}

int func_2275()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2276()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2278();
    func_78(func_2277);
}

void func_2277()
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
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0)
    {
        if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
        {
            func_2278();
        }
    }
    func_2322();
}

void func_2278()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
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
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
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

void func_2279()
{
    DamageModuleImpl(0xb, 0, (float)0 + 0);
}

int func_2280()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2281()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2283();
    func_78(func_2282);
}

void func_2282()
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
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0)
    {
        if (global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
        {
            func_2283();
        }
    }
    func_2333();
}

void func_2283()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x216);
        }
        else
        {
            func_22(0x216, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
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

void func_2284()
{
    
}

int func_2285()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2286()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_33();
    func_2290();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0x15c, 0x11000004);
    if (!StopModuleImpl(0x1))
    {
        func_2291();
    }
    global16 = func_2291;
    WorkModuleImpl.set_int(0x21d, 0x11000002);
    WorkModuleImpl.set_int(0x226, 0x11000003);
    func_78(func_2287);
}

void func_2287()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2292();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (func_2293())
    {
        return;
    }
}

void func_2288()
{
    
}

void func_2289()
{
    if (!(WorkModuleImpl.is_flag(0x21000010) || WorkModuleImpl.is_flag(0x2100000f)))
    {
        if (ControlModuleImpl(0x2710, 0x1))
        {
            if (WorkModuleImpl.is_flag(0x2100000e))
            {
                WorkModuleImpl.on_flag2(0x2100000f);
                if (WorkModuleImpl.get_int(0x16000002) != 0)
                {
                    if (global32 <= WorkModuleImplFloat.get_float(0x200001a))
                    {
                        WorkModuleImpl.on_flag2(0x21000013);
                    }
                    else if (-global32 <= WorkModuleImplFloat.get_float(0x200001a))
                    {
                        WorkModuleImpl.on_flag2(0x21000012);
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
                WorkModuleImpl.on_flag2(0x21000010);
            }
        }
    }
}

void func_2290()
{
    WorkModuleImpl.off_flag2(0x2100000e);
    WorkModuleImpl.off_flag2(0x2100000f);
    WorkModuleImpl.off_flag2(0x21000010);
    WorkModuleImpl.off_flag2(0x21000011);
}

void func_2291()
{
    func_2289();
}

void func_2292()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(WorkModuleImpl.get_int(0x11000002));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(WorkModuleImpl.get_int(0x11000003));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

int func_2293()
{
    if (WorkModuleImpl.is_flag(0x2100000f) && WorkModuleImpl.is_flag(0x21000011))
    {
        func_16(WorkModuleImpl.get_int(0x11000004), 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return 0x1;
        }
    }
    return 0;
}

int func_2294()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0, 0x200, 0);
    return 0;
}

void func_2295()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2290();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0x15d, 0x11000004);
    if (!StopModuleImpl(0x1))
    {
        func_2291();
    }
    global16 = func_2291;
    if (WorkModuleImpl.is_flag(0x21000012))
    {
        WorkModuleImpl.set_int(0x21e, 0x11000002);
        WorkModuleImpl.set_int(0x227, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x21f, 0x11000002);
        WorkModuleImpl.set_int(0x228, 0x11000003);
    }
    WorkModuleImpl.off_flag2(0x21000012);
    WorkModuleImpl.off_flag2(0x21000013);
    func_78(func_2296);
}

void func_2296()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2292();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (func_2293())
    {
        return;
    }
}

void func_2297()
{
    
}

int func_2298()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0, 0x200, 0);
    return 0;
}

void func_2299()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2290();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0x15e, 0x11000004);
    if (!StopModuleImpl(0x1))
    {
        func_2291();
    }
    global16 = func_2291;
    if (WorkModuleImpl.is_flag(0x21000012))
    {
        WorkModuleImpl.set_int(0x220, 0x11000002);
        WorkModuleImpl.set_int(0x229, 0x11000003);
    }
    else if (WorkModuleImpl.is_flag(0x21000013))
    {
        WorkModuleImpl.set_int(0x222, 0x11000002);
        WorkModuleImpl.set_int(0x22b, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x221, 0x11000002);
        WorkModuleImpl.set_int(0x22a, 0x11000003);
    }
    WorkModuleImpl.off_flag2(0x21000012);
    WorkModuleImpl.off_flag2(0x21000013);
    func_78(func_2300);
}

void func_2300()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2292();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (func_2293())
    {
        return;
    }
}

void func_2301()
{
    
}

int func_2302()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0, 0x200, 0);
    return 0;
}

void func_2303()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    if (WorkModuleImpl.is_flag(0x21000012))
    {
        WorkModuleImpl.set_int(0x223, 0x11000002);
        WorkModuleImpl.set_int(0x22c, 0x11000003);
    }
    else if (WorkModuleImpl.is_flag(0x21000013))
    {
        WorkModuleImpl.set_int(0x225, 0x11000002);
        WorkModuleImpl.set_int(0x22e, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x224, 0x11000002);
        WorkModuleImpl.set_int(0x22d, 0x11000003);
    }
    func_78(func_2304);
}

void func_2304()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2292();
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
        }
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
    }
}

void func_2305()
{
    
}

int func_2306()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0x1000);
    return 0;
}

void func_2307()
{
    WorkModuleImpl.strans_group_on(0x1f000009);
    WorkModuleImpl.strans_on(0x1e00001e);
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        func_22(0x22f, 0, 1.0f);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        func_22(0x230, 0, 1.0f);
    }
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000001) + 0, 0);
    if (!StopModuleImpl(0x1))
    {
        func_2310();
    }
    global16 = func_2310;
    func_78(func_2308);
}

void func_2308()
{
    float var0;
    float var1;
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_41() != 0)
    {
        return 0x1;
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.is_flag(0x21000010) == 0x1)
        {
            var0 = KineticModuleImplFloat.get_sum_speed_y(0x1);
            if (var0 < -0.0010000000474974513f)
            {
                func_16(0x10, 0);
                return;
            }
        }
    }
    else if (MotionModuleImpl.is_end())
    {
        func_16(0x10, 0);
        return;
    }
    if (WorkModuleImpl.is_flag(0x2100000e) == 0x1)
    {
        var1 = func_13(global48);
        if (var1 > WorkModuleImplFloat.get_float(0x2000061))
        {
            PostureModuleImpl.set_stick_lr();
            PostureModuleImpl.update_rot_y();
            WorkModuleImpl.set_float(0 + 0, 0x1000006);
        }
    }
}

void func_2309()
{
    
}

void func_2310()
{
    if (!WorkModuleImpl.is_flag(0x2100000f))
    {
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            GroundModuleImpl(0x2710, 0x5);
            func_20(0x2);
            KineticModuleImpl.change_kinetic_type(0x12);
            WorkModuleImpl.on_flag2(0x2100000f);
            WorkModuleImpl.on_flag2(0x21000012);
        }
    }
}

int func_2311()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0, 0x400, 0x1000);
    return 0;
}

void func_2312()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2314();
    func_78(func_2313);
}

void func_2313()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2314();
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

void func_2314()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x10);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_24(0x231);
        }
        else
        {
            func_22(0x231, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_24(0x233);
        }
        else
        {
            func_22(0x233, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2315()
{
    
}

int func_2316()
{
    printf("status_pre_SpecialLwHit");
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2317()
{
    printf("status_SpecialLwHit");
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2319();
    func_78(func_2318);
}

void func_2318()
{
    printf("status_SpecialLwHit_Main");
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2319();
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

void func_2319()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x10);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x232);
        }
        else
        {
            func_22(0x232, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x234);
        }
        else
        {
            func_22(0x234, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2320()
{
    printf("status_end_SpecialLwHit");
}

void func_2321()
{
    KineticModuleImpl.enable_energy(0);
}

int func_2322()
{
    if (global3 == 0)
    {
        if (func_2326() != 0)
        {
            return 0x1;
        }
    }
    if (func_2327() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2323()
{
    
}

void func_2324()
{
    
}

void func_2325()
{
    
}

int func_2326()
{
    return 0;
}

int func_2327()
{
    int var0;
    float var1;
    int var2;
    int var3;
    float var4;
    var0 = WorkModuleImpl.get_int(0x15000003);
    var1 = (float)var0 + WorkModuleImplFloat.get_float(0x1000006) / 30.0f * (float)WorkModuleImpl.get_int(0x15000004);
    var2 = AttackModuleImpl(0x271c);
    var3 = 0;
    while (var3 < var2)
    {
        if (AttackModuleImpl(0, var3) == 0x1)
        {
            var4 = AttackModuleImplFloat(0, var3, 0);
            if (0.0010000000474974513f < var4)
            {
                AttackModuleImpl(0x271a, var3, var1, 0);
            }
        }
        var3++;
    }
    return 0;
}

void func_2328()
{
    
}

void func_2329()
{
    
}

void func_2330()
{
    
}

void func_2331()
{
    
}

void func_2332()
{
    KineticModuleImpl.enable_energy(0);
}

int func_2333()
{
    if (global3 == 0)
    {
        if (func_2337() != 0)
        {
            return 0x1;
        }
    }
    if (func_2338() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2334()
{
    
}

void func_2335()
{
    
}

void func_2336()
{
    
}

int func_2337()
{
    return 0;
}

int func_2338()
{
    float var0;
    if (AttackModuleImpl(0, 0) == 0x1)
    {
        if (!WorkModuleImpl.is_flag(0x2100000f))
        {
            var0 = WorkModuleImplFloat.get_float(0x5000007);
            DamageModuleImpl(0x9, var0);
            WorkModuleImpl.on_flag(0x2100000f);
        }
    }
    return 0;
}

void func_2339()
{
    
}

void func_2340()
{
    
}

void func_2341()
{
    
}

void func_2342()
{
    
}

int func_2343()
{
    int var0;
    var0 = MotionModuleImpl.get_end_frame(0x212);
    if (0x8 == global1)
    {
        var0 = MotionModuleImpl.get_end_frame(0x49b);
    }
    return var0;
}

void func_2344()
{
    int var0;
    int var1;
    int var2;
    var0 = func_2343();
    var1 = WorkModuleImpl.get_int(0x15000002) * var0;
    WorkModuleImpl.set_int(var1, 0x11000002);
    var2 = 0xc230044;
    SoundModuleImpl(0x2717, var2);
}

int func_2345()
{
    if (global3 == 0)
    {
        if (func_2349() != 0)
        {
            return 0x1;
        }
    }
    if (func_2350() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2346()
{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    var0 = func_2343();
    var1 = (int)WorkModuleImplFloat.get_float(0x1000006);
    var2 = var1 / var0;
    var3 = WorkModuleImpl.get_int(0x15000000);
    var4 = WorkModuleImpl.get_int(0x15000001);
    var5 = WorkModuleImpl.get_int(0x15000002);
    if (var2 < var3 - 0x1)
    {
        WorkModuleImpl.set_int(0, 0x11000006);
    }
    else if (var2 < var4 - 0x1)
    {
        WorkModuleImpl.set_int(0x1, 0x11000006);
    }
    else if (var2 < var5 - 0x1)
    {
        WorkModuleImpl.set_int(0x2, 0x11000006);
    }
    else if (var2 == var5 - 0x1)
    {
        WorkModuleImpl.set_int(0x3, 0x11000006);
    }
}

void func_2347()
{
    
}

void func_2348()
{
    
}

int func_2349()
{
    return 0;
}

int func_2350()
{
    return 0;
}

void func_2351()
{
    
}

void func_2352()
{
    
}

void func_2353()
{
    
}

void func_2354()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000005);
    if (var0 >= 0)
    {
        SoundModuleImpl(0x2718);
    }
}

void func_2355()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    var2 = var0 * WorkModuleImplFloat.get_float(0x5000005);
    var3 = var1;
    var4 = WorkModuleImplFloat.get_float(0x5000006);
    if (StatusModuleImpl(0x1) == 0x2)
    {
        KineticModuleImpl(0xe, 0x3, 0x6, var2, 0, 0, 0, 0);
        KineticModuleImpl.set_accel(0x3, 0, 0);
        KineticModuleImpl.set_friction(0x3, var4, 0);
        KineticModuleImpl.set_max_speed(0x3, 0, 0);
        KineticModuleImpl.enable_energy(0x3);
        if (var3 < 0)
        {
            var3 = 0;
        }
        KineticModuleImpl(0xe, 0x1, 0, 0, var3, 0, 0, 0);
        KineticModuleImpl.enable_energy(0x1);
        WorkModuleImpl.set_int(0x2, 0x11000003);
    }
    else
    {
        KineticModuleImpl(0xe, 0x3, 0, var2, 0, 0, 0, 0);
        KineticModuleImpl.set_accel(0x3, 0, 0);
        KineticModuleImpl.set_friction(0x3, var4, 0);
        KineticModuleImpl.set_max_speed(0x3, 0, 0);
        KineticModuleImpl.enable_energy(0x3);
        WorkModuleImpl.set_int(0, 0x11000003);
    }
    sys_35(0x1, 0x2);
    sys_35(0x1, 0);
}

int func_2356()
{
    if (global3 == 0)
    {
        if (func_2360() != 0)
        {
            return 0x1;
        }
    }
    if (func_2361() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2357()
{
    int var0;
    float var1;
    float var2;
    float var3;
    var0 = WorkModuleImpl.get_int(0x11000003);
    if (StatusModuleImpl(0x1) != var0)
    {
        var1 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var2 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        var3 = WorkModuleImplFloat.get_float(0x5000006);
        if (StatusModuleImpl(0x1) == 0x2)
        {
            KineticModuleImpl(0xe, 0x3, 0x6, var1, 0, 0, 0, 0);
            KineticModuleImpl.set_accel(0x3, 0, 0);
            KineticModuleImpl.set_friction(0x3, var3, 0);
            KineticModuleImpl.set_max_speed(0x3, 0, 0);
            KineticModuleImpl.enable_energy(0x3);
            KineticModuleImpl(0xe, 0x1, 0, 0, var2, 0, 0, 0);
            KineticModuleImpl.enable_energy(0x1);
            WorkModuleImpl.set_int(0x2, 0x11000003);
        }
        else
        {
            KineticModuleImpl(0xe, 0x3, 0, var1, 0, 0, 0, 0);
            KineticModuleImpl.set_max_speed(0x3, 0, 0);
            KineticModuleImpl.enable_energy(0x3);
            sys_35(0x1, 0x1);
            WorkModuleImpl.set_int(0, 0x11000003);
        }
    }
}

void func_2358()
{
    
}

void func_2359()
{
    
}

int func_2360()
{
    return 0;
}

int func_2361()
{
    return 0;
}

void func_2362()
{
    
}

void func_2363()
{
    
}

void func_2364()
{
    
}

void func_2365()
{
    
}

int func_2366()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2367()
{
    sys_21(0x25);
    JostleModuleImpl(0x2712, 0x1, 0);
    JostleModuleImpl(0x2712, 0x2, 0);
    JostleModuleImpl(0x2712, 0x3, 0);
    JostleModuleImpl(0x2712, 0x4, 0);
    JostleModuleImpl(0x2712, 0x5, 0);
    JostleModuleImpl(0x2712, 0x6, 0);
    JostleModuleImpl(0x2712, 0x7, 0);
    JostleModuleImpl(0x2712, 0x8, 0);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x1);
    KineticModuleImpl(0xe, 0x2, 0xb, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl.enable_energy(0);
    KineticModuleImpl(0xe, 0, 0x2, 0, 0, 0, 0, 0);
    if (global18 == 0)
    {
        func_22(0x235, 0, 1.0f);
    }
    if (global18 == 0x2)
    {
        func_22(0x236, 0, 1.0f);
    }
    func_78(func_2368);
}

void func_2368()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0x160, 0);
        return;
    }
}

void func_2369()
{
    if (global6 != 0x160)
    {
        sys_21(0x26);
    }
}

int func_2370()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0x7fff8, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2371()
{
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x1);
    KineticModuleImpl(0xe, 0x2, 0xb, 0, 0, 0, 0, 0);
    KineticModuleImpl.disable_energy(0x2);
    KineticModuleImpl.enable_energy(0);
    KineticModuleImpl(0xe, 0, 0x4, 0, 0, 0, 0, 0);
    if (global18 == 0)
    {
        func_22(0x237, 0, 1.0f);
    }
    if (global18 == 0x2)
    {
        func_22(0x238, 0, 1.0f);
    }
    sys_21(0x8c);
    func_78(func_2372);
}

void func_2372()
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
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_2373()
{
    sys_21(0x26);
    sys_21(0x8d);
    if (global18 == 0)
    {
        JostleModuleImpl(0x2712, 0x1, 0x1);
        JostleModuleImpl(0x2712, 0x2, 0);
        JostleModuleImpl(0x2712, 0x3, 0x1);
        JostleModuleImpl(0x2712, 0x4, 0x1);
        JostleModuleImpl(0x2712, 0x5, 0);
        JostleModuleImpl(0x2712, 0x6, 0x1);
        JostleModuleImpl(0x2712, 0x7, 0x1);
        JostleModuleImpl(0x2712, 0x8, 0x1);
    }
    if (global18 == 0x2)
    {
        JostleModuleImpl(0x2712, 0x1, 0x1);
        JostleModuleImpl(0x2712, 0x2, 0x1);
        JostleModuleImpl(0x2712, 0x3, 0x1);
        JostleModuleImpl(0x2712, 0x4, 0);
        JostleModuleImpl(0x2712, 0x5, 0x1);
        JostleModuleImpl(0x2712, 0x6, 0x1);
        JostleModuleImpl(0x2712, 0x7, 0x1);
        JostleModuleImpl(0x2712, 0x8, 0);
    }
    KineticModuleImpl.clear_speed(0x6);
    KineticModuleImpl.enable_energy(0x6);
    KineticModuleImpl.clear_speed(0x6);
    KineticModuleImpl.clear_speed(0x2);
    KineticModuleImpl.clear_speed(0x1);
    KineticModuleImpl.clear_speed(0);
}


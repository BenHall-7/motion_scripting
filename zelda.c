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
    global7 = 0x15d;
    func_2240();
    func_2244();
    func_2245();
    func_2246();
    func_2247();
    func_2248();
    func_2241();
    func_2243();
}

void func_2243()
{
    global51 = 0x211;
    global52 = 0x219;
    global53 = 0x231;
    global54 = 0x241;
    global55 = 0x259;
}

void func_2244()
{
    sv_set_mem(0x1, 0, 0x152, func_2249);
    sv_set_mem(0x1, 0x1, 0x152, func_2250);
    sv_set_mem(0x1, 0x2, 0x152, func_2253);
    sv_set_mem(0x1, 0, 0x153, func_2261);
    sv_set_mem(0x1, 0x1, 0x153, func_2262);
    sv_set_mem(0x1, 0x2, 0x153, func_2264);
    sv_set_mem(0x1, 0, 0x154, func_2277);
    sv_set_mem(0x1, 0x1, 0x154, func_2278);
    sv_set_mem(0x1, 0x2, 0x154, func_2280);
    sv_set_mem(0x1, 0, 0x155, func_2299);
    sv_set_mem(0x1, 0x1, 0x155, func_2300);
    sv_set_mem(0x1, 0x2, 0x155, func_2302);
    sv_set_mem(0x1, 0, 0x156, func_2312);
    sv_set_mem(0x1, 0x1, 0x156, func_2313);
    sv_set_mem(0x1, 0x2, 0x156, func_2316);
    sv_set_mem(0x1, 0, 0x157, func_2272);
    sv_set_mem(0x1, 0x1, 0x157, func_2273);
    sv_set_mem(0x1, 0x2, 0x157, func_2275);
    sv_set_mem(0x1, 0, 0x158, func_2267);
    sv_set_mem(0x1, 0x1, 0x158, func_2268);
    sv_set_mem(0x1, 0x2, 0x158, func_2270);
    sv_set_mem(0x1, 0, 0x159, func_2282);
    sv_set_mem(0x1, 0x1, 0x159, func_2283);
    sv_set_mem(0x1, 0x2, 0x159, func_2286);
    sv_set_mem(0x1, 0, 0x15a, func_2287);
    sv_set_mem(0x1, 0x1, 0x15a, func_2288);
    sv_set_mem(0x1, 0x2, 0x15a, func_2290);
    sv_set_mem(0x1, 0, 0x15b, func_2303);
    sv_set_mem(0x1, 0x1, 0x15b, func_2304);
    sv_set_mem(0x1, 0x2, 0x15b, func_2307);
    sv_set_mem(0x1, 0, 0x15c, func_2308);
    sv_set_mem(0x1, 0x1, 0x15c, func_2309);
    sv_set_mem(0x1, 0x2, 0x15c, func_2311);
}

void func_2245()
{
    sv_set_mem(0x1, 0x3, 0x152, func_2254);
    sv_set_mem(0x1, 0x3, 0x153, func_2266);
    sv_set_mem(0x1, 0x3, 0x15a, func_2291);
}

void func_2246()
{
    sv_set_mem(0x1, 0x4, 0x152, func_2256);
    sv_set_mem(0x1, 0x4, 0x15a, func_2293);
}

void func_2247()
{
    sv_set_mem(0x1, 0x5, 0x152, func_2259);
    sv_set_mem(0x1, 0x5, 0x15a, func_2296);
}

void func_2248()
{
    sv_set_mem(0x1, 0x6, 0x152, func_2260);
    sv_set_mem(0x1, 0x6, 0x15a, func_2297);
}

int func_2249()
{
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1192, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2250()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x15000000), 0x11000002);
    if (!StopModuleImpl(0x1))
    {
        func_2252();
    }
    global16 = func_2252;
    func_78(func_2251);
}

void func_2251()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x9);
            KineticModuleImpl.change_kinetic_type(0x6);
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
            KineticModuleImpl.change_kinetic_type(0x64);
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
    }
    if (MotionModuleImpl.is_end() == 0x1)
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

void func_2252()
{
    if (global18 != 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) <= 0)
        {
            KineticModuleImpl.enable_energy(0x1);
        }
        else
        {
            KineticModuleImpl.disable_energy(0x1);
        }
    }
}

void func_2253()
{
    
}

void func_2254()
{
    float var0;
    float var1;
    if (global18 != 0)
    {
        var0 = WorkModuleImplFloat.get_float(0x5000001);
        var1 = KineticModuleImplFloat.get_sum_speed_x(0xffffffff);
        KineticModuleImpl.clear_speed_all();
        KineticModuleImpl.set_speed(0x3, var1 / var0, 0);
        KineticModuleImpl.enable_energy(0x3);
    }
}

int func_2255()
{
    if (global3 == 0)
    {
        if (func_2257() != 0)
        {
            return 0x1;
        }
    }
    if (func_2258() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2256()
{
    int var0;
    var0 = 0;
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        ShieldModuleImpl(0, 0x3, var0, 0x1, 0x3);
        WorkModuleImpl.off_flag2(0x2100000e);
    }
    if (WorkModuleImpl.is_flag(0x2100000f))
    {
        ShieldModuleImpl(0, 0x3, var0, 0, 0x3);
        WorkModuleImpl.off_flag2(0x2100000f);
    }
}

int func_2257()
{
    return 0;
}

int func_2258()
{
    return 0;
}

void func_2259()
{
    
}

void func_2260()
{
    ShieldModuleImpl(0, 0x3, 0, 0x1, 0x3);
}

int func_2261()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x11412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2262()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x16000001), 0x11000003);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x16000000), 0x11000004);
    WorkModuleImpl.off_flag2(0x2100000d);
    func_33();
    if (!StopModuleImpl(0x1))
    {
        func_2265();
    }
    global16 = func_2265;
    func_78(func_2263);
}

void func_2263()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            KineticModuleImpl.change_kinetic_type(0x6);
            GroundModuleImpl(0x2710, 0x9);
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
        else
        {
            KineticModuleImpl.change_kinetic_type(0x65);
            GroundModuleImpl(0x2710, 0x5);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x225);
            }
            else
            {
                func_22(0x225, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x157, 0);
        return;
    }
    if (!StatusModuleImpl(0x6) && ControlModuleImpl(0x2713, 0x1) && WorkModuleImpl.get_int(0x11000004) <= 0 && ArticleModuleImpl.is_exist(0))
    {
        func_16(0x158, 0x1);
        return;
    }
}

void func_2264()
{
    
}

void func_2265()
{
    WorkModuleImpl.dec_int(0x11000003);
    if (ArticleModuleImpl.is_exist(0))
    {
        WorkModuleImpl.dec_int(0x11000004);
    }
    if (WorkModuleImpl.get_int(0x11000003) >= 0)
    {
        KineticModuleImpl.disable_energy(0x1);
    }
    else
    {
        KineticModuleImpl.enable_energy(0x1);
    }
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        ArticleModuleImpl.generate(0);
        WorkModuleImpl.off_flag2(0x2100000e);
    }
}

void func_2266()
{
    if (global18 != 0)
    {
        KineticModuleImpl.clear_speed(0x1);
    }
}

int func_2267()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10412, 0, 0x200, 0);
    return 0;
}

void func_2268()
{
    float var0;
    WorkModuleImpl.off_flag2(0x2100000d);
    var0 = WorkModuleImplFloat.get_float(0x6000005);
    if (var0 != 0)
    {
        WorkModuleImpl.set_float(var0 + 0, 0);
    }
    if (!StopModuleImpl(0x1))
    {
        func_2271();
    }
    global16 = func_2271;
    func_78(func_2269);
}

void func_2269()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            KineticModuleImpl.change_kinetic_type(0x6);
            GroundModuleImpl(0x2710, 0x9);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x221);
            }
            else
            {
                func_22(0x221, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
        else
        {
            KineticModuleImpl.change_kinetic_type(0x65);
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
    if (MotionModuleImpl.is_end() == 0x1)
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
        if (global18 == 0x2)
        {
            if (WorkModuleImplFloat.get_float(0x6000005) == 0)
            {
                func_16(0xe, 0);
                return;
            }
            else
            {
                func_16(0x10, 0);
                return;
            }
        }
    }
}

void func_2270()
{
    
}

void func_2271()
{
    if (WorkModuleImpl.is_flag(0x2100000f))
    {
        if (ArticleModuleImpl.is_exist(0))
        {
            ArticleModuleImpl(0x2713, 0, 0x1);
        }
        WorkModuleImpl.off_flag2(0x2100000f);
    }
    if (global18 != 0)
    {
        WorkModuleImpl.dec_int(0x11000003);
        if (WorkModuleImpl.get_int(0x11000003) >= 0)
        {
            KineticModuleImpl.disable_energy(0x1);
        }
        else
        {
            KineticModuleImpl.enable_energy(0x1);
        }
    }
}

int func_2272()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10412, 0, 0x200, 0);
    return 0;
}

void func_2273()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    if (!StopModuleImpl(0x1))
    {
        func_2276();
    }
    global16 = func_2276;
    func_78(func_2274);
}

void func_2274()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            KineticModuleImpl.change_kinetic_type(0x6);
            GroundModuleImpl(0x2710, 0x9);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x21d);
            }
            else
            {
                func_22(0x21d, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
        else
        {
            KineticModuleImpl.change_kinetic_type(0x65);
            GroundModuleImpl(0x2710, 0x5);
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
    }
    if (WorkModuleImpl.get_int(0x11000004) <= 0)
    {
        if (ControlModuleImpl(0x2713, 0x1))
        {
            func_16(0x158, 0x1);
        }
        else if (ArticleModuleImpl.is_exist(0) == 0)
        {
            func_16(0x158, 0);
        }
        return 0x1;
    }
}

void func_2275()
{
    
}

void func_2276()
{
    WorkModuleImpl.dec_int(0x11000004);
    if (global18 != 0)
    {
        WorkModuleImpl.dec_int(0x11000003);
        if (WorkModuleImpl.get_int(0x11000003) >= 0)
        {
            KineticModuleImpl.disable_energy(0x1);
        }
        else
        {
            KineticModuleImpl.enable_energy(0x1);
        }
    }
}

int func_2277()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1422, 0, 0x100, 0x1000);
    return 0;
}

void func_2278()
{
    func_78(func_2279);
}

void func_2279()
{
    int var0;
    if (func_56())
    {
        return 0x1;
    }
    var0 = StatusModuleImpl(0x6);
    if (var0 == 0 && MotionModuleImpl.is_end())
    {
        func_16(0x159, 0);
        return;
    }
    if (var0 == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x1);
            KineticModuleImpl.change_kinetic_type(0x6);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x231);
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
            KineticModuleImpl.change_kinetic_type(0x66);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_23(0x239);
            }
            else
            {
                func_22(0x239, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
    }
}

void func_2280()
{
    WorkModuleImpl.set_int(GroundModuleImpl(0x18), 0x11000004);
}

void func_2281()
{
    float var0;
    float var1;
    if (global18 == 0)
    {
        KineticModuleImpl.clear_speed_all();
    }
    else
    {
        var0 = KineticModuleImplFloat.get_sum_speed_x(0xffffffff);
        var1 = KineticModuleImplFloat.get_sum_speed_y(0xffffffff);
        var0 = var0 / WorkModuleImplFloat.get_float(0x7000000);
        var1 = var1 / WorkModuleImplFloat.get_float(0x7000001);
        KineticModuleImpl.clear_speed_all();
        KineticModuleImpl.set_speed(0x3, var0, 0);
        KineticModuleImpl.enable_energy(0x3);
        KineticModuleImpl.set_speed(0x1, var1);
        KineticModuleImpl.enable_energy(0x1);
    }
}

int func_2282()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x2);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0x10040000, 0x100, 0);
    return 0;
}

void func_2283()
{
    int var0;
    HitModuleImpl(0x2710, 0x2);
    VisibilityModuleImpl(0x2710, 0);
    sys_21(0xa, 0);
    sys_21(0xc, 0);
    var0 = 0;
    var0 = !var0;
    GroundModuleImpl(0x2713, var0);
    func_100(WorkModuleImpl.get_int(0x11000004));
    WorkModuleImpl.set_int(0, 0x11000002);
    if (!StopModuleImpl(0x1))
    {
        func_2285();
    }
    global16 = func_2285;
    func_78(func_2284);
}

void func_2284()
{
    if (func_56())
    {
        return 0x1;
    }
    if (WorkModuleImpl.get_int(0x11000002) >= WorkModuleImpl.get_int(0x17000004))
    {
        func_16(0x15a, 0);
        return;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x1);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
        }
    }
}

void func_2285()
{
    int var0;
    int var1;
    WorkModuleImpl.inc_int(0x11000002);
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == WorkModuleImpl.get_int(0x17000005))
    {
        var1 = 0x1;
        var1 = !var1;
        GroundModuleImpl(0x2713, var1);
    }
    if (var0 == WorkModuleImpl.get_int(0x17000006))
    {
        func_100(0x2);
    }
}

void func_2286()
{
    
}

int func_2287()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x422, 0, 0x100, 0);
    return 0;
}

void func_2288()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
        func_22(0x235, 0, 1.0f);
        WorkModuleImpl.set_int(0, 0x11000003);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        func_22(0x23d, 0, 1.0f);
        WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x700000d) + 0, 0);
        WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x700000c) + 0, 0x1);
        WorkModuleImpl.set_int(0x2, 0x11000003);
    }
    func_78(func_2289);
}

void func_2289()
{
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (WorkModuleImpl.get_int(0x11000003) == 0)
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
        if (MotionModuleImpl.is_end() == 0x1)
        {
            func_16(0, 0);
            return;
        }
    }
    else
    {
        if (MotionModuleImpl.is_end() == 0x1)
        {
            func_16(0x10, 0);
            return;
        }
        if (global18 == 0)
        {
            func_16(0x19, 0);
            return;
        }
    }
    func_2292();
}

void func_2290()
{
    VisibilityModuleImpl(0x2710, 0x1);
}

void func_2291()
{
    float var0;
    float var1;
    float var2;
    var0 = WorkModuleImplFloat.get_float(0x700000b);
    var1 = KineticModuleImplFloat.get_sum_speed_x(0xffffffff);
    var2 = KineticModuleImplFloat.get_sum_speed_y(0xffffffff);
    KineticModuleImpl.clear_speed_all();
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        KineticModuleImpl.set_speed(0x3, var1 * var0, 0);
        KineticModuleImpl.enable_energy(0x3);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xb);
        KineticModuleImpl.set_speed(0x3, var1 * var0, var2 * var0);
        KineticModuleImpl.set_limit_speed(0x3, KineticModuleImplFloat.get_limit_speed_x(0x3), -1.0f);
        KineticModuleImpl.enable_energy(0x3);
        KineticModuleImpl.disable_energy(0x1);
    }
    VisibilityModuleImpl(0x2710, 0x1);
}

int func_2292()
{
    if (global3 == 0)
    {
        if (func_2294() != 0)
        {
            return 0x1;
        }
    }
    if (func_2295() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_2293()
{
    
}

int func_2294()
{
    float var0;
    float var1;
    float var2;
    if (global18 != 0)
    {
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
            var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
            KineticModuleImpl.set_speed(0x1, var1);
            KineticModuleImpl.enable_energy(0x1);
            var2 = WorkModuleImplFloat.get_float(0x3000016) * WorkModuleImplFloat.get_float(0x700000a);
            if (var0 < -var2)
            {
                var0 = -var2;
            }
            else if (var0 > var2)
            {
                var0 = var2;
            }
            var1 = 0;
            KineticModuleImpl.set_speed(0x3, var0, var1);
        }
        else
        {
            var0 = KineticModuleImplFloat.get_speed_x(0x3);
            var1 = KineticModuleImplFloat.get_speed_y(0x3);
            var1 = var1 - var1 / 10.0f;
            KineticModuleImpl.set_speed(0x3, var0, var1);
        }
    }
    return 0;
}

int func_2295()
{
    return 0;
}

void func_2296()
{
    
}

void func_2297()
{
    
}

int func_2298(int arg0, int arg1, int arg2, int arg3, int arg4)
{
    int var5;
    int var6;
    int var7;
    if (arg0 == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            func_20(0);
            GroundModuleImpl(0x2710, 0x9);
            KineticModuleImpl.change_kinetic_type(arg3);
            var5 = arg1;
            var6 = arg2;
        }
        else
        {
            func_20(0x2);
            GroundModuleImpl(0x2710, 0x5);
            KineticModuleImpl.change_kinetic_type(arg4);
            var5 = arg2;
            var6 = arg1;
        }
        var7 = MotionModuleImpl.get_motion() - WorkModuleImpl.get_int(0x1000004b);
        if (var7 != var5)
        {
            if (var7 == var6)
            {
                func_23(var5);
            }
            else
            {
                func_22(var5, 0, 1.0f);
            }
        }
        return 0x1;
    }
    return 0;
}

int func_2299()
{
    StatusModuleImpl(0x5, 0xffffffff, 0xffffffff, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0x1000, 0x400, 0x1000);
    return 0;
}

void func_2300()
{
    if (ArticleModuleImpl.is_exist(0x2))
    {
        WorkModuleImpl.on_flag2(0x2100000f);
    }
    else
    {
        ArticleModuleImpl.generate(0x2);
    }
    WorkModuleImpl.off_flag2(0x2100000e);
    func_78(func_2301);
}

void func_2301()
{
    int var0;
    int var1;
    var0 = StatusModuleImpl(0x6);
    if (var0 == 0)
    {
        if (ControlModuleImpl(0x2713, 0x1))
        {
            WorkModuleImpl.on_flag2(0x2100000e);
        }
        if (MotionModuleImpl.is_end())
        {
            if (WorkModuleImpl.is_flag(0x2100000f))
            {
                var1 = 0x15c;
            }
            else
            {
                var1 = 0x15b;
            }
            func_16(var1, 0);
            return 0x1;
        }
    }
    func_2298(var0, 0x241, 0x245, 0x6, 0xa);
}

void func_2302()
{
    if (WorkModuleImpl.is_flag(0x2100000f) == 0)
    {
        if (global6 == 0x15b)
        {
            ArticleModuleImpl(0x2714, 0x2, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2714, 0x2, 0x4);
        }
    }
}

int func_2303()
{
    StatusModuleImpl(0x5, 0xffffffff, 0xffffffff, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2304()
{
    WorkModuleImpl.set_int(0, 0x11000002);
    if (!StopModuleImpl(0x1))
    {
        func_2306();
    }
    global16 = func_2306;
    func_78(func_2305);
}

void func_2305()
{
    float var0;
    int var1;
    int var2;
    if (ControlModuleImpl(0x2713, 0x1) || WorkModuleImpl.is_flag(0x2100000e))
    {
        func_16(0x15c, 0x1);
        return 0x1;
    }
    var0 = WorkModuleImplFloat.get_float(0x8000000);
    var1 = (int)(var0 * 7.0f);
    var2 = WorkModuleImpl.get_int(0x11000002);
    if (var2 >= var1)
    {
        if (WorkModuleImpl.is_flag(0x21000010) == 0)
        {
            ArticleModuleImpl(0x2715, 0x2, 0x8 + WorkModuleImpl.get_int(0x1000004b));
            WorkModuleImpl.on_flag2(0x21000010);
        }
        if (var2 >= WorkModuleImpl.get_int(0x18000001) + var1)
        {
            func_16(0x15c, 0x1);
            return 0x1;
        }
    }
    func_2298(StatusModuleImpl(0x6), 0x249, 0x24d, 0x6, 0xa);
}

void func_2306()
{
    WorkModuleImpl.inc_int(0x11000002);
}

void func_2307()
{
    float var0;
    float var1;
    int var2;
    if (global6 == 0x15c)
    {
        var0 = (float)WorkModuleImpl.get_int(0x11000002);
        var1 = var0 / WorkModuleImplFloat.get_float(0x8000000);
        if (var1 > 7.0f)
        {
            var1 = 7.0f;
        }
        var2 = (int)var1;
        var1 = (float)var2;
        WorkModuleImpl.set_float(var1 + 0, 0x1000006);
        ArticleModuleImpl(0x271a, 0x2);
        sys_21(0x55, 0x1, 0x1c);
    }
    else
    {
        ArticleModuleImpl(0x2714, 0x2, 0x4);
    }
    PhysicsModuleImpl(0x8);
}

int func_2308()
{
    StatusModuleImpl(0x5, 0xffffffff, 0xffffffff, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2309()
{
    func_78(func_2310);
}

void func_2310()
{
    int var0;
    int var1;
    var0 = StatusModuleImpl(0x6);
    if (var0 == 0)
    {
        if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
        {
            return 0x1;
        }
        if (MotionModuleImpl.is_end())
        {
            if (global18 == 0)
            {
                var1 = 0;
            }
            else
            {
                var1 = 0xe;
            }
            func_16(var1, 0);
            return 0x1;
        }
    }
    if (func_2298(var0, 0x251, 0x255, 0x6, 0xa))
    {
        if (global18 == 0x2 && var0)
        {
            KineticModuleImpl.set_speed(0x1, WorkModuleImplFloat.get_float(0x8000002));
        }
    }
}

void func_2311()
{
    
}

int func_2312()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0x10000, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1442, 0x1003e2, 0, 0);
    return 0;
}

void func_2313()
{
    sys_21(0x25);
    KineticModuleImpl.change_kinetic_type(0x33);
    ArticleModuleImpl.generate(0x3);
    WorkModuleImpl.off_flag2(0x2100000d);
    sys_21(0x88, 0);
    func_2315();
    func_78(func_2314);
}

void func_2314()
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
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2315();
    }
}

void func_2315()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x259);
            ArticleModuleImpl(0x2715, 0x3, 0, 0x1);
        }
        else
        {
            func_22(0x259, 0, 1.0f);
            ArticleModuleImpl(0x2715, 0x3, 0, 0);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x25a);
            ArticleModuleImpl(0x2715, 0x3, 0x1, 0x1);
        }
        else
        {
            func_22(0x25a, 0, 1.0f);
            ArticleModuleImpl(0x2715, 0x3, 0x1, 0);
        }
    }
    WorkModuleImpl.on_flag2(0x2100000d);
}

void func_2316()
{
    ArticleModuleImpl(0x2711, 0x3);
    if (ArticleModuleImpl.is_exist(0x4))
    {
        ArticleModuleImpl.remove(0x4);
    }
    sys_21(0x26);
    sys_21(0x88, 0x1);
    if (WorkModuleImpl.is_flag(0x21000010))
    {
        func_111();
    }
}


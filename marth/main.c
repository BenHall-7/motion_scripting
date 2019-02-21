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
    func_2243();
    func_2244();
    func_2241();
    func_2246();
}

void func_2243()
{
    sv_set_mem(0x1, 0, 0x1c, func_2245);
    sv_set_mem(0x1, 0, 0x152, func_2282);
    sv_set_mem(0x1, 0x1, 0x152, func_2283);
    sv_set_mem(0x1, 0x2, 0x152, func_2286);
    sv_set_mem(0x1, 0, 0x153, func_2303);
    sv_set_mem(0x1, 0x1, 0x153, func_2304);
    sv_set_mem(0x1, 0x2, 0x153, func_2306);
    sv_set_mem(0x1, 0, 0x154, func_2267);
    sv_set_mem(0x1, 0x1, 0x154, func_2268);
    sv_set_mem(0x1, 0x2, 0x154, func_2270);
    sv_set_mem(0x1, 0, 0x155, func_2272);
    sv_set_mem(0x1, 0x1, 0x155, func_2273);
    sv_set_mem(0x1, 0x2, 0x155, func_2276);
    sv_set_mem(0x1, 0, 0x156, func_2247);
    sv_set_mem(0x1, 0x1, 0x156, func_2248);
    sv_set_mem(0x1, 0x2, 0x156, func_2251);
    sv_set_mem(0x1, 0, 0x157, func_2297);
    sv_set_mem(0x1, 0x1, 0x157, func_2298);
    sv_set_mem(0x1, 0x2, 0x157, func_2302);
    sv_set_mem(0x1, 0, 0x158, func_2287);
    sv_set_mem(0x1, 0x1, 0x158, func_2288);
    sv_set_mem(0x1, 0x2, 0x158, func_2291);
    sv_set_mem(0x1, 0, 0x159, func_2292);
    sv_set_mem(0x1, 0x1, 0x159, func_2293);
    sv_set_mem(0x1, 0x2, 0x159, func_2296);
    sv_set_mem(0x1, 0, 0x15a, func_2312);
    sv_set_mem(0x1, 0x1, 0x15a, func_2313);
    sv_set_mem(0x1, 0x2, 0x15a, func_2315);
    sv_set_mem(0x1, 0, 0x15b, func_2316);
    sv_set_mem(0x1, 0x1, 0x15b, func_2317);
    sv_set_mem(0x1, 0x2, 0x15b, func_2319);
    sv_set_mem(0x1, 0, 0x15c, func_2320);
    sv_set_mem(0x1, 0x1, 0x15c, func_2321);
    sv_set_mem(0x1, 0x2, 0x15c, func_2323);
    sv_set_mem(0x1, 0, 0x15d, func_2277);
    sv_set_mem(0x1, 0x1, 0x15d, func_2278);
    sv_set_mem(0x1, 0x2, 0x15d, func_2281);
    sv_set_mem(0x1, 0, 0x15e, func_2252);
    sv_set_mem(0x1, 0x1, 0x15e, func_2253);
    sv_set_mem(0x1, 0x2, 0x15e, func_2256);
    sv_set_mem(0x1, 0, 0x15f, func_2257);
    sv_set_mem(0x1, 0x1, 0x15f, func_2258);
    sv_set_mem(0x1, 0x2, 0x15f, func_2261);
    sv_set_mem(0x1, 0, 0x160, func_2262);
    sv_set_mem(0x1, 0x1, 0x160, func_2263);
    sv_set_mem(0x1, 0x2, 0x160, func_2266);
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
    global52 = 0x231;
    global53 = 0x279;
    global54 = 0x281;
    global55 = 0x291;
}

int func_2247()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0x3fffc0, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1442, 0x1003e2, 0, 0);
    return 0;
}

void func_2248()
{
    sys_21(0x25);
    JostleModuleImpl(0x2710, 0);
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.set_int(0x291, 0x11000002);
    WorkModuleImpl.set_int(0x295, 0x11000003);
    func_2250();
    func_78(func_2249);
}

void func_2249()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x15e, 0);
        return;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2250();
    }
}

void func_2250()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
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

void func_2251()
{
    if (global6 != 0x15e)
    {
        sys_21(0x26);
    }
}

int func_2252()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0x3fffc0, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2253()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    JostleModuleImpl(0x2710, 0);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x14000001), 0x11000004);
    if (!StopModuleImpl(0x1))
    {
        func_2254();
    }
    global16 = func_2254;
    WorkModuleImpl.set_int(0x292, 0x11000002);
    WorkModuleImpl.set_int(0x292, 0x11000003);
    func_2250();
    func_78(func_2255);
}

void func_2254()
{
    WorkModuleImpl.dec_int(0x11000004);
}

void func_2255()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (ControlModuleImpl(0x2710, 0x1))
    {
        func_16(0x160, 0);
        return;
    }
    if (ControlModuleImpl(0x2710, 0))
    {
        func_16(0x160, 0);
        return;
    }
    if (WorkModuleImpl.get_int(0x11000004) <= 0)
    {
        func_16(0x15f, 0);
        return;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2250();
    }
}

void func_2256()
{
    if (global6 != 0x15f && global6 != 0x160)
    {
        sys_21(0x26);
    }
}

int func_2257()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0x3fffc0, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2258()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    JostleModuleImpl(0x2710, 0);
    WorkModuleImpl.set_int(0x293, 0x11000002);
    WorkModuleImpl.set_int(0x296, 0x11000003);
    func_2260();
    func_78(func_2259);
}

void func_2259()
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
        func_2260();
    }
}

void func_2260()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
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
        KineticModuleImpl.change_kinetic_type(0x11);
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

void func_2261()
{
    sys_21(0x26);
}

int func_2262()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0x3fffc0, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
    return 0;
}

void func_2263()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    JostleModuleImpl(0x2710, 0);
    WorkModuleImpl.set_int(0x294, 0x11000002);
    WorkModuleImpl.set_int(0x297, 0x11000003);
    sys_21(0x8c);
    func_2265();
    func_78(func_2264);
}

void func_2264()
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
        func_2265();
    }
}

void func_2265()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag(0x2100000d))
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
        KineticModuleImpl.change_kinetic_type(0x11);
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

void func_2266()
{
    sys_21(0x26);
    sys_21(0x8d);
    func_111();
}

int func_2267()
{
    int var0;
    if (WorkModuleImpl.get_int(0x1000004a) == 0x2)
    {
        var0 = 0;
    }
    else
    {
        var0 = 0x422;
    }
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, var0, 0x1000, 0x100, 0x1000);
    return 0;
}

void func_2268()
{
    WorkModuleImpl.strans_group_on(0x1f000009);
    WorkModuleImpl.strans_on(0x1e00001e);
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        func_22(0x279, 0, 1.0f);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        func_22(0x27d, 0, 1.0f);
    }
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000001) + 0, 0);
    if (!StopModuleImpl(0x1))
    {
        func_2271();
    }
    global16 = func_2271;
    func_78(func_2269);
}

void func_2269()
{
    float var0;
    if (func_56())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_41() != 0)
    {
        return 0x1;
    }
    if (global18 == 0 && WorkModuleImpl.check_strans(0x1e00001e))
    {
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            var0 = MotionModuleImplFloat(0xb);
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
}

void func_2270()
{
    
}

void func_2271()
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

int func_2272()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0, 0x400, 0x1000);
    return 0;
}

void func_2273()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2275();
    func_78(func_2274);
}

void func_2274()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2275();
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

void func_2275()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x10);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_24(0x281);
        }
        else
        {
            func_22(0x281, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_24(0x289);
        }
        else
        {
            func_22(0x289, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2276()
{
    
}

int func_2277()
{
    printf("status_pre_SpecialLwHit");
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x432, 0, 0x400, 0);
    return 0;
}

void func_2278()
{
    printf("status_SpecialLwHit");
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2280();
    func_78(func_2279);
}

void func_2279()
{
    printf("status_SpecialLwHit_Main");
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2280();
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

void func_2280()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x10);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x285);
        }
        else
        {
            func_22(0x285, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x28d);
        }
        else
        {
            func_22(0x28d, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2281()
{
    printf("status_end_SpecialLwHit");
}

int func_2282()
{
    printf("status_pre_SpecialN");
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1192, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2283()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.off_flag2(0x2100000e);
    func_78(func_2284);
}

void func_2284()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2285();
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

void func_2285()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
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
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x221);
        }
        else
        {
            func_22(0x221, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2286()
{
    
}

int func_2287()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2288()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_78(func_2289);
}

void func_2289()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2290();
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

void func_2290()
{
    float var0;
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        var0 = sys_40(0xb);
        KineticModuleImpl.set_friction(0x3, var0, 0);
        GroundModuleImpl(0x2710, 0x2);
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
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        var0 = sys_40(0xd);
        KineticModuleImpl.set_friction(0x3, var0, 0);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
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

void func_2291()
{
    DamageModuleImpl(0xb, 0, (float)0 + 0);
}

int func_2292()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2293()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_78(func_2294);
}

void func_2294()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2295();
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

void func_2295()
{
    float var0;
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        var0 = sys_40(0xb);
        KineticModuleImpl.set_friction(0x3, var0, 0);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
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
        KineticModuleImpl.change_kinetic_type(0xa);
        var0 = sys_40(0xd);
        KineticModuleImpl.set_friction(0x3, var0, 0);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
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

void func_2296()
{
    
}

int func_2297()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
    return 0;
}

void func_2298()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    if (!StopModuleImpl(0x1))
    {
        func_2300();
    }
    global16 = func_2300;
    func_78(func_2299);
}

void func_2299()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2301();
    }
    if (ControlModuleImpl(0x2713, 0x1))
    {
        func_16(0x158, 0x1);
        return;
    }
    else if (WorkModuleImpl.is_flag(0x2100000e))
    {
        func_16(0x159, 0);
        return;
    }
}

void func_2300()
{
    int var0;
    int var1;
    WorkModuleImpl.inc_int(0x11000002);
    var0 = WorkModuleImpl.get_int(0x11000002);
    var1 = (int)(WorkModuleImplFloat.get_float(0x5000000) / WorkModuleImplFloat.get_float(0x5000004));
    if (var0 >= var1)
    {
        WorkModuleImpl.on_flag2(0x2100000e);
    }
}

void func_2301()
{
    float var0;
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_24(0x215);
        }
        else
        {
            func_22(0x215, 0, 1.0f);
            var0 = WorkModuleImplFloat.get_float(0x5000004);
            MotionModuleImpl.set_motion_rate(var0);
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
            func_24(0x225);
        }
        else
        {
            func_22(0x225, 0, 1.0f);
            var0 = WorkModuleImplFloat.get_float(0x5000004);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x5000004));
            ColorBlendModuleImpl(0x7, var0);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2302()
{
    ColorBlendModuleImpl(0x7, 1.0f);
}

int func_2303()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2304()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_33();
    func_2308();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0x15a, 0x11000004);
    if (!StopModuleImpl(0x1))
    {
        func_2309();
    }
    global16 = func_2309;
    WorkModuleImpl.set_int(0x231, 0x11000002);
    WorkModuleImpl.set_int(0x255, 0x11000003);
    func_78(func_2305);
}

void func_2305()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2310();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (func_2311())
    {
        return;
    }
}

void func_2306()
{
    
}

void func_2307()
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

void func_2308()
{
    WorkModuleImpl.off_flag2(0x2100000e);
    WorkModuleImpl.off_flag2(0x2100000f);
    WorkModuleImpl.off_flag2(0x21000010);
    WorkModuleImpl.off_flag2(0x21000011);
}

void func_2309()
{
    func_2307();
}

void func_2310()
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

int func_2311()
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

int func_2312()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0, 0x200, 0);
    return 0;
}

void func_2313()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2308();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0x15b, 0x11000004);
    if (!StopModuleImpl(0x1))
    {
        func_2309();
    }
    global16 = func_2309;
    if (WorkModuleImpl.is_flag(0x21000012))
    {
        WorkModuleImpl.set_int(0x235, 0x11000002);
        WorkModuleImpl.set_int(0x259, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x239, 0x11000002);
        WorkModuleImpl.set_int(0x25d, 0x11000003);
    }
    WorkModuleImpl.off_flag2(0x21000012);
    WorkModuleImpl.off_flag2(0x21000013);
    func_78(func_2314);
}

void func_2314()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2310();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (func_2311())
    {
        return;
    }
}

void func_2315()
{
    
}

int func_2316()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0, 0x200, 0);
    return 0;
}

void func_2317()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_2308();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0x15c, 0x11000004);
    if (!StopModuleImpl(0x1))
    {
        func_2309();
    }
    global16 = func_2309;
    if (WorkModuleImpl.is_flag(0x21000012))
    {
        WorkModuleImpl.set_int(0x23d, 0x11000002);
        WorkModuleImpl.set_int(0x261, 0x11000003);
    }
    else if (WorkModuleImpl.is_flag(0x21000013))
    {
        WorkModuleImpl.set_int(0x245, 0x11000002);
        WorkModuleImpl.set_int(0x269, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x241, 0x11000002);
        WorkModuleImpl.set_int(0x265, 0x11000003);
    }
    WorkModuleImpl.off_flag2(0x21000012);
    WorkModuleImpl.off_flag2(0x21000013);
    func_78(func_2318);
}

void func_2318()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2310();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (func_2311())
    {
        return;
    }
}

void func_2319()
{
    
}

int func_2320()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0, 0x200, 0);
    return 0;
}

void func_2321()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    if (WorkModuleImpl.is_flag(0x21000012))
    {
        WorkModuleImpl.set_int(0x249, 0x11000002);
        WorkModuleImpl.set_int(0x26d, 0x11000003);
    }
    else if (WorkModuleImpl.is_flag(0x21000013))
    {
        WorkModuleImpl.set_int(0x251, 0x11000002);
        WorkModuleImpl.set_int(0x275, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x24d, 0x11000002);
        WorkModuleImpl.set_int(0x271, 0x11000003);
    }
    func_78(func_2322);
}

void func_2322()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2310();
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

void func_2323()
{
    
}


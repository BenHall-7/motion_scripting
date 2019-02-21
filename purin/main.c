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
    global7 = 0x160;
    func_2240();
    func_2243();
    func_2244();
    func_2245();
    func_2246();
    func_2247();
    func_2248();
    func_2241();
    func_2249();
}

void func_2243()
{
    sv_set_mem(0x1, 0, 0x152, func_2265);
    sv_set_mem(0x1, 0, 0x157, func_2268);
    sv_set_mem(0x1, 0, 0x158, func_2271);
    sv_set_mem(0x1, 0, 0x159, func_2274);
    sv_set_mem(0x1, 0, 0x15a, func_2277);
    sv_set_mem(0x1, 0, 0x15b, func_2280);
    sv_set_mem(0x1, 0, 0x15c, func_2282);
    sv_set_mem(0x1, 0, 0x15d, func_2285);
    sv_set_mem(0x1, 0, 0x153, func_2252);
    sv_set_mem(0x1, 0, 0x155, func_2260);
    sv_set_mem(0x1, 0, 0x154, func_2256);
    sv_set_mem(0x1, 0, 0x156, func_2288);
    sv_set_mem(0x1, 0, 0x15e, func_2293);
    sv_set_mem(0x1, 0, 0x15f, func_2298);
}

void func_2244()
{
    sv_set_mem(0x1, 0x1, 0x152, func_2266);
    sv_set_mem(0x1, 0x1, 0x157, func_2269);
    sv_set_mem(0x1, 0x1, 0x158, func_2272);
    sv_set_mem(0x1, 0x1, 0x159, func_2275);
    sv_set_mem(0x1, 0x1, 0x15a, func_2278);
    sv_set_mem(0x1, 0x1, 0x15b, func_2281);
    sv_set_mem(0x1, 0x1, 0x15c, func_2283);
    sv_set_mem(0x1, 0x1, 0x15d, func_2286);
    sv_set_mem(0x1, 0x1, 0x153, func_2253);
    sv_set_mem(0x1, 0x1, 0x155, func_2261);
    sv_set_mem(0x1, 0x1, 0x154, func_2257);
    sv_set_mem(0x1, 0x1, 0x156, func_2289);
    sv_set_mem(0x1, 0x1, 0x15e, func_2294);
    sv_set_mem(0x1, 0x1, 0x15f, func_2299);
}

void func_2245()
{
    sv_set_mem(0x1, 0x2, 0x156, func_2292);
    sv_set_mem(0x1, 0x2, 0x15e, func_2297);
    sv_set_mem(0x1, 0x2, 0x15f, func_2302);
}

void func_2246()
{
    
}

void func_2247()
{
    
}

void func_2248()
{
    
}

void func_2249()
{
    global51 = 0x211;
    global52 = 0x25d;
    global53 = 0x265;
    global54 = 0x275;
    global55 = 0x285;
}

void func_2250()
{
    int var0;
    var0 = global6;
    if (var0 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0xa);
    }
    else if (var0 == 0x1)
    {
        
    }
    else if (var0 == 0x2)
    {
        KineticModuleImpl.change_kinetic_type(0);
    }
    KineticModuleImpl.clear_speed(0);
    KineticModuleImpl.disable_energy(0);
}

void func_2251()
{
    int var0;
    var0 = global6;
    if (WorkModuleImpl.is_flag2(0x21000010))
    {
        func_2250();
    }
}

void func_2252()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0x1000, 0x200, 0x1000);
}

void func_2253()
{
    printf("status_special_s");
    if (!StopModuleImpl(0x1))
    {
        func_2251();
    }
    global16 = func_2251;
    func_78(func_2254);
}

void func_2254()
{
    if (func_56())
    {
        return;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2255();
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
    }
}

void func_2255()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0xf);
        GroundModuleImpl(0x2710, 0x2);
        func_100(0);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x25d);
        }
        else
        {
            func_22(0x25d, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        func_2250();
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000e))
        {
            func_100(0x2);
        }
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x261);
        }
        else
        {
            func_22(0x261, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2256()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1422, 0, 0x100, 0x1000);
}

void func_2257()
{
    if (PostureModuleImplFloat.get_lr() == 1.0f)
    {
        WorkModuleImpl.set_int(0x269, 0x11000002);
        WorkModuleImpl.set_int(0x271, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x269, 0x11000002);
        WorkModuleImpl.set_int(0x271, 0x11000003);
    }
    func_78(func_2258);
}

void func_2258()
{
    if (func_56())
    {
        return;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2259();
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
    }
}

void func_2259()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000f))
        {
            func_23(WorkModuleImpl.get_int(0x11000002));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000f);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000f))
        {
            func_23(WorkModuleImpl.get_int(0x11000003));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000f);
        }
    }
}

void func_2260()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0, 0x400, 0x1000);
}

void func_2261()
{
    if (PostureModuleImplFloat.get_lr() == 1.0f)
    {
        WorkModuleImpl.set_int(0x279, 0x11000002);
        WorkModuleImpl.set_int(0x281, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x275, 0x11000002);
        WorkModuleImpl.set_int(0x27d, 0x11000003);
    }
    func_2263();
    func_78(func_2262);
}

void func_2262()
{
    if (func_56())
    {
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2263();
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
    }
}

void func_2263()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x2);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(WorkModuleImpl.get_int(0x11000002));
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000006));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000006));
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(WorkModuleImpl.get_int(0x11000003));
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000006));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000006));
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2264()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x9);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_22(WorkModuleImpl.get_int(0x11000017), 0, 1.0f);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000016));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000017), 0, 1.0f);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000016));
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_22(WorkModuleImpl.get_int(0x11000018), 0, 1.0f);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000016));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000018), 0, 1.0f);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000016));
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2265()
{
    printf("status_pre_special_n");
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1192, 0x2, 0x80, 0x1000);
}

void func_2266()
{
    printf("status_special_n");
    WorkModuleImpl.off_flag2(0x21000013);
    if (PostureModuleImplFloat.get_lr() == 1.0f)
    {
        WorkModuleImpl.set_int(0x215, 0x11000017);
        WorkModuleImpl.set_int(0x239, 0x11000018);
    }
    else
    {
        WorkModuleImpl.set_int(0x215, 0x11000017);
        WorkModuleImpl.set_int(0x239, 0x11000018);
    }
    func_2264();
    func_78(func_2267);
}

void func_2267()
{
    printf("status_special_n_main");
    if (func_56())
    {
        return;
    }
    WorkModuleImpl.set_float(1.0f, 0x1000016);
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2264();
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x157, 0);
    }
}

void func_2268()
{
    printf("status_pre_special_n_hold");
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
}

void func_2269()
{
    printf("status_special_n_hold");
    WorkModuleImpl.off_flag2(0x21000013);
    WorkModuleImpl.set_int(0x219, 0x11000017);
    WorkModuleImpl.set_int(0x23d, 0x11000018);
    WorkModuleImpl.set_float(0, 0x1000016);
    func_78(func_2270);
}

void func_2270()
{
    printf("status_special_n_hold_main");
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2264();
    }
    if (ControlModuleImpl(0x2713, 0x1))
    {
        if (global18 == 0)
        {
            func_16(0x159);
        }
        else if (global18 == 0x2)
        {
            func_16(0x15a);
        }
    }
}

void func_2271()
{
    printf("status_pre_special_n_hold_max");
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
}

void func_2272()
{
    printf("status_special_n_hold_max");
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.set_int(0x21d, 0x11000017);
    WorkModuleImpl.set_int(0x241, 0x11000018);
    WorkModuleImpl.set_float(0, 0x1000016);
    func_78(func_2273);
}

void func_2273()
{
    printf("status_special_n_hold_max_main");
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2264();
    }
    if (ControlModuleImpl(0x2713, 0x1))
    {
        if (global18 == 0)
        {
            func_16(0x159);
        }
        else if (global18 == 0x2)
        {
            func_16(0x15a);
        }
    }
}

void func_2274()
{
    printf("status_pre_special_n_roll");
    StatusModuleImpl(0x5, 0, 0x32, 0x1, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
}

void func_2275()
{
    printf("status_special_n_roll");
    WorkModuleImpl.off_flag2(0x2100000d);
    GroundModuleImpl(0x2710, 0x1);
    func_22(0x221, 0, 1.0f);
    MotionModuleImpl.set_motion_rate(0);
    func_78(func_2276);
}

void func_2276()
{
    printf("status_special_n_roll_main");
    if (func_56())
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0x15a);
    }
}

void func_2277()
{
    printf("status_pre_special_n_roll_air");
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0, 0x4, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
}

void func_2278()
{
    printf("status_special_n_roll_air");
    WorkModuleImpl.off_flag2(0x21000013);
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
    func_22(0x245, 0, 1.0f);
    MotionModuleImpl.set_motion_rate(0);
    func_78(func_2279);
}

void func_2279()
{
    printf("status_special_n_roll_air_main");
    if (func_56())
    {
        return;
    }
    if (global18 == 0)
    {
        func_20(0);
        GroundModuleImpl(0x2710, 0x1);
    }
    else
    {
        func_20(0x2);
        GroundModuleImpl(0x2710, 0x5);
    }
}

void func_2280()
{
    printf("status_pre_special_n_turn");
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
}

void func_2281()
{
    printf("status_special_n_turn");
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.set_int(0x229, 0x11000017);
    WorkModuleImpl.set_int(0x24d, 0x11000018);
    WorkModuleImpl.set_float(0, 0x1000016);
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2264();
    }
}

void func_2282()
{
    printf("status_pre_special_n_end");
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
}

void func_2283()
{
    printf("status_special_n_end");
    WorkModuleImpl.off_flag2(0x2100000d);
    if (PostureModuleImplFloat.get_lr() == 1.0f)
    {
        WorkModuleImpl.set_int(0x231, 0x11000017);
        WorkModuleImpl.set_int(0x255, 0x11000018);
    }
    else
    {
        WorkModuleImpl.set_int(0x231, 0x11000017);
        WorkModuleImpl.set_int(0x255, 0x11000018);
    }
    WorkModuleImpl.set_float(1.0f, 0x1000016);
    func_78(func_2284);
}

void func_2284()
{
    printf("status_special_n_end_main");
    if (func_56())
    {
        return;
    }
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2264();
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
    }
}

void func_2285()
{
    printf("status_pre_special_n_hit_end");
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x192, 0, 0x80, 0);
}

void func_2286()
{
    printf("status_special_n_hit_end");
    func_22(0x259, 0, 1.0f);
    WorkModuleImpl.set_float(0, 0x1000016);
    func_78(func_2287);
}

void func_2287()
{
    if (func_56())
    {
        return;
    }
    if (global18 == 0)
    {
        func_16(0x19, 0);
    }
}

void func_2288()
{
    printf("status_pre_final");
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x442, 0x1003e2, 0, 0);
}

void func_2289()
{
    printf("status_final");
    WorkModuleImpl.off_flag2(0x2100000d);
    sys_21(0x25);
    JostleModuleImpl(0x2710, 0);
    if (PostureModuleImplFloat.get_lr() == 1.0f)
    {
        WorkModuleImpl.set_int(0x286, 0x11000002);
        WorkModuleImpl.set_int(0x28b, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x286, 0x11000002);
        WorkModuleImpl.set_int(0x28b, 0x11000003);
    }
    sys_21(0x3e8, 0x1);
    func_2291();
    func_78(func_2290);
}

void func_2290()
{
    printf("status_final_main");
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2291();
    }
}

void func_2291()
{
    printf("sub_final_mtrans");
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(WorkModuleImpl.get_int(0x11000002));
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000008));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000008));
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    else
    {
        printf("final_mtrans_air");
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(WorkModuleImpl.get_int(0x11000003));
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000008));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000008));
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2292()
{
    if (global6 != 0x15e)
    {
        sys_21(0x3e8, 0);
        sys_21(0x26);
    }
}

void func_2293()
{
    printf("status_pre_final_wait");
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0x1, 0x442, 0x1003e2, 0, 0);
}

void func_2294()
{
    printf("status_final_wait");
    WorkModuleImpl.off_flag2(0x2100000d);
    JostleModuleImpl(0x2710, 0);
    func_78(func_2295);
}

void func_2295()
{
    printf("status_final_wait_main");
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2296();
    }
}

void func_2296()
{
    printf("status_final_wait_mtrans");
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
        func_22(0x287, 0, 1.0f);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        func_22(0x28c, 0, 1.0f);
    }
}

void func_2297()
{
    if (global6 != 0x15f)
    {
        sys_21(0x3e8, 0);
        sys_21(0x26);
    }
}

void func_2298()
{
    printf("status_pre_final_end");
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0x1, 0x442, 0x1003e2, 0, 0);
}

void func_2299()
{
    printf("status_final_end");
    WorkModuleImpl.off_flag2(0x2100000d);
    JostleModuleImpl(0x2710, 0);
    if (PostureModuleImplFloat.get_lr() == 1.0f)
    {
        WorkModuleImpl.set_int(0x289, 0x11000002);
        WorkModuleImpl.set_int(0x28e, 0x11000003);
    }
    else
    {
        WorkModuleImpl.set_int(0x289, 0x11000002);
        WorkModuleImpl.set_int(0x28e, 0x11000003);
    }
    func_78(func_2300);
}

void func_2300()
{
    printf("status_final_end_main");
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2301();
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
        }
        else if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
    }
}

void func_2301()
{
    printf("sub_final_end_mtrans");
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
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
        if (WorkModuleImpl.is_flag2(0x2100000d))
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

void func_2302()
{
    sys_21(0x3e8, 0);
    sys_21(0x26);
    func_111();
}


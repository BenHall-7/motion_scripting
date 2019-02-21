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
    global7 = 0x157;
    global22 = func_2248;
    func_2240();
    func_2243();
    func_2244();
    func_2245();
    func_2246();
    func_2241();
    func_2247();
}

void func_2243()
{
    sv_set_mem(0x1, 0, 0x152, func_2253);
    sv_set_mem(0x1, 0x1, 0x152, func_2255);
    sv_set_mem(0x1, 0x2, 0x152, func_2263);
    sv_set_mem(0x1, 0, 0x153, func_2254);
    sv_set_mem(0x1, 0x1, 0x153, func_2258);
    sv_set_mem(0x1, 0x2, 0x153, func_2264);
    sv_set_mem(0x1, 0, 0x154, func_2266);
    sv_set_mem(0x1, 0x1, 0x154, func_2267);
    sv_set_mem(0x1, 0x2, 0x154, func_2269);
    sv_set_mem(0x1, 0, 0x155, func_2270);
    sv_set_mem(0x1, 0x1, 0x155, func_2271);
    sv_set_mem(0x1, 0x2, 0x155, func_2274);
    sv_set_mem(0x1, 0, 0x156, func_2275);
    sv_set_mem(0x1, 0x1, 0x156, func_2276);
    sv_set_mem(0x1, 0x2, 0x156, func_2279);
    sv_set_mem(0x1, 0x1, 0x6a, func_2251);
    sv_set_mem(0x1, 0x2, 0x6a, func_2252);
    sv_set_mem(0x1, 0x3, 0x18, func_2250);
    sv_set_mem(0x1, 0x2, 0x18, func_2249);
}

void func_2244()
{
    sv_set_mem(0x1, 0x3, 0x153, func_2261);
}

void func_2245()
{
    sv_set_mem(0x1, 0x4, 0x153, func_2262);
}

void func_2246()
{
    sv_set_mem(0x1, 0x6, 0x153, func_2265);
}

void func_2247()
{
    global51 = 0x211;
    global52 = 0x219;
    global53 = 0x221;
    global54 = 0x229;
    global55 = 0x231;
}

void func_2248()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x10000046);
    var1 = WorkModuleImpl.get_int(0x10000047);
    printf("sub_change_special_command command %d, to: %d (ex 227 is SpecialN)", var0, var1);
    if (var0 == 0x153)
    {
        if (var1 >= 0x4 && var1 <= 0x7)
        {
            WorkModuleImpl.set_int(var1 - 0x4, 0x10000049);
        }
        sys_21(0x3e8);
    }
}

void func_2249()
{
    if (WorkModuleImpl.get_int(0x11000002) == 0x6b)
    {
        MotionModuleImpl(0x31);
    }
    func_539();
}

void func_2250()
{
    if (WorkModuleImpl.get_int(0x11000002) == 0x6b)
    {
        MotionModuleImpl(0x32);
    }
    func_586();
}

void func_2251()
{
    MotionModuleImpl(0x32);
    func_637();
}

void func_2252()
{
    MotionModuleImpl(0x31);
    func_640();
}

int func_2253()
{
    func_69();
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x11192, 0x1000, 0x80, 0x1000);
    return 0;
}

int func_2254()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2255()
{
    func_78(func_2256);
}

void func_2256()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2257();
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

void func_2257()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x9);
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
        KineticModuleImpl.change_kinetic_type(0);
        GroundModuleImpl(0x2710, 0x5);
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
}

void func_2258()
{
    func_33();
    func_78(func_2259);
}

void func_2259()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2260();
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

void func_2260()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x9);
        func_100(0);
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
        GroundModuleImpl(0x2710, 0x5);
        func_100(0x4);
        if (WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_23(0x21d);
            KineticModuleImpl.change_kinetic_type(0xa);
        }
        else
        {
            func_22(0x21d, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_2261()
{
    int var0;
    float var1;
    float var2;
    var0 = MotionModuleImpl.get_motion();
    if (var0 != 0x219 && var0 != 0x21a && var0 != 0x21b && var0 != 0x21c)
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
        var1 /= WorkModuleImplFloat.get_float(0x6000000);
        KineticModuleImpl(0xe, 0x3, 0x6, var1, 0, 0, 0, 0);
        KineticModuleImpl.set_friction(0x3, WorkModuleImplFloat.get_float(0x6000001), 0);
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

void func_2262()
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
                var0 = KineticModuleImplFloat.get_speed_y(0x1);
                if (WorkModuleImpl.is_flag2(0x20000078) == 0)
                {
                    WorkModuleImpl.on_flag2(0x20000078);
                    var0 = WorkModuleImplFloat.get_float(0x6000002);
                }
                else
                {
                    var0 = 0;
                }
                KineticModuleImpl.set_speed(0x1, var0);
            }
            var1 = -WorkModuleImplFloat.get_float(0x6000003);
            var2 = WorkModuleImplFloat.get_float(0x6000004);
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

void func_2263()
{
    
}

void func_2264()
{
    
}

void func_2265()
{
    ArticleModuleImpl.remove(0x2);
}

int func_2266()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x1000004a);
    var1 = 0x1422;
    if (0x1 == var0)
    {
        var1 = 0;
    }
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, var1, 0, 0x100, 0x1000);
    return 0;
}

void func_2267()
{
    int var0;
    WorkModuleImpl.set_int(0x221, 0x11000002);
    WorkModuleImpl.set_int(0x225, 0x11000003);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000000), 0x1000006);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000001), 0x1000007);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000002), 0x1000008);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000007), 0x100000d);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000009), 0x100000a);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000008), 0x1000009);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x700000a), 0x100000b);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000005), 0x100000c);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x17000006), 0x11000005);
    var0 = WorkModuleImpl.get_int(0x1000004a) + 0x8;
    if (var0 == 0x8 || var0 == 0x9)
    {
        WorkModuleImpl.on_flag2(0x21000011);
    }
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000003) + 0, 0x100000e);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000004) + 0, 0x100000f);
    printf("parameter test landing frame: %d pass mul: %f air pass mul: %f", WorkModuleImpl.get_int(0x17000006), WorkModuleImplFloat.get_float(0x7000007), WorkModuleImplFloat.get_float(0x700000a));
    printf("stick x: %f dir stick x: %f dir mul: %f", WorkModuleImplFloat.get_float(0x7000000), WorkModuleImplFloat.get_float(0x7000001), WorkModuleImplFloat.get_float(0x7000002));
    printf("fall x mul: %f accel y: %f", WorkModuleImplFloat.get_float(0x7000005), WorkModuleImplFloat.get_float(0x7000009));
    WorkModuleImpl.set_int(0x10, 0x11000004);
    func_2281();
    func_78(func_2268);
}

void func_2268()
{
    func_2282();
}

void func_2269()
{
    
}

int func_2270()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1432, 0x1000, 0x400, 0x1000);
    return 0;
}

void func_2271()
{
    func_2273();
    func_78(func_2272);
}

void func_2272()
{
    int var0;
    int var1;
    int var2;
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000000))
    {
        if (MotionModuleImpl.is_end())
        {
            func_16(0, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000002))
    {
        if (MotionModuleImpl.is_end())
        {
            func_16(0xe, 0);
            return;
        }
    }
    var0 = 0;
    if (!StatusModuleImpl(0x6))
    {
        var1 = WorkModuleImpl.get_int(0x11000002);
        if (global19 != var2)
        {
            if (global18 == var1)
            {
                var0 = 0x1;
            }
        }
    }
    if (var0)
    {
        func_2273();
    }
}

void func_2273()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x64);
        GroundModuleImpl(0x2710, 0x1);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_23(0x229);
        }
        else
        {
            func_22(0x229, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
        WorkModuleImpl.strans_on(0x1e000000);
        WorkModuleImpl.strans_off(0x1e000002);
        WorkModuleImpl.set_int(0x2, 0x11000002);
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
        WorkModuleImpl.strans_on(0x1e000002);
        WorkModuleImpl.strans_off(0x1e000000);
        WorkModuleImpl.set_int(0, 0x11000002);
    }
}

void func_2274()
{
    
}

int func_2275()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1442, 0x1003e2, 0, 0);
    return 0;
}

void func_2276()
{
    sys_21(0x25);
    JostleModuleImpl(0x2710, 0);
    WorkModuleImpl.strans_on(0x1e000000);
    WorkModuleImpl.strans_on(0x1e000002);
    func_78(func_2277);
}

void func_2277()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_2278();
    }
    if (WorkModuleImpl.check_strans(0x1e000000))
    {
        if (MotionModuleImpl.is_end())
        {
            if (global18 == 0)
            {
                func_16(0, 0);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000002))
    {
        if (MotionModuleImpl.is_end())
        {
            if (global18 == 0x2)
            {
                func_16(0xe, 0);
                return;
            }
        }
    }
}

void func_2278()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0xf);
        GroundModuleImpl(0x2710, 0x1);
        if (WorkModuleImpl.is_flag2(0x2100000d))
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
        KineticModuleImpl.change_kinetic_type(0x11);
        GroundModuleImpl(0x2710, 0x5);
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
}

void func_2279()
{
    ArticleModuleImpl.shoot(0x4);
    sys_21(0x26);
    func_111();
}

void func_2280()
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

void func_2281()
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
        func_2280();
    }
    global16 = func_2280;
}

void func_2282()
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


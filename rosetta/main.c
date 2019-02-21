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
    global7 = 0x15c;
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
    sv_set_mem(0x1, 0, 0x152, func_2259);
    sv_set_mem(0x1, 0x1, 0x152, func_2260);
    sv_set_mem(0x1, 0x2, 0x152, func_2262);
    sv_set_mem(0x1, 0, 0x157, func_2263);
    sv_set_mem(0x1, 0x1, 0x157, func_2264);
    sv_set_mem(0x1, 0x2, 0x157, func_2267);
    sv_set_mem(0x1, 0, 0x158, func_2268);
    sv_set_mem(0x1, 0x1, 0x158, func_2269);
    sv_set_mem(0x1, 0x2, 0x158, func_2271);
    sv_set_mem(0x1, 0, 0x159, func_2272);
    sv_set_mem(0x1, 0x1, 0x159, func_2273);
    sv_set_mem(0x1, 0x2, 0x159, func_2275);
    sv_set_mem(0x1, 0, 0x153, func_2276);
    sv_set_mem(0x1, 0x1, 0x153, func_2277);
    sv_set_mem(0x1, 0x2, 0x153, func_2279);
    sv_set_mem(0x1, 0, 0x154, func_2282);
    sv_set_mem(0x1, 0x1, 0x154, func_2283);
    sv_set_mem(0x1, 0x2, 0x154, func_2286);
    sv_set_mem(0x1, 0, 0x15a, func_2287);
    sv_set_mem(0x1, 0x1, 0x15a, func_2288);
    sv_set_mem(0x1, 0x2, 0x15a, func_2291);
    sv_set_mem(0x1, 0, 0x15b, func_2292);
    sv_set_mem(0x1, 0x1, 0x15b, func_2293);
    sv_set_mem(0x1, 0x2, 0x15b, func_2296);
    sv_set_mem(0x1, 0x4, 0x15a, func_2281);
    sv_set_mem(0x1, 0x4, 0x15b, func_2281);
    sv_set_mem(0x1, 0x5, 0x15a, func_2281);
    sv_set_mem(0x1, 0x5, 0x15b, func_2281);
    sv_set_mem(0x1, 0, 0x155, func_2297);
    sv_set_mem(0x1, 0x1, 0x155, func_2298);
    sv_set_mem(0x1, 0x2, 0x155, func_2300);
    sv_set_mem(0x1, 0, 0x156, func_2301);
    sv_set_mem(0x1, 0x1, 0x156, func_2302);
    sv_set_mem(0x1, 0x2, 0x156, func_2304);
}

void func_2244()
{
    
}

void func_2245()
{
    sv_set_mem(0x1, 0x2, 0x29, func_2252);
    sv_set_mem(0x1, 0x2, 0x34, func_2253);
    sv_set_mem(0x1, 0x2, 0x1f, func_2254);
    sv_set_mem(0x1, 0x2, 0x20, func_2255);
    sv_set_mem(0x1, 0x2, 0x21, func_2256);
    sv_set_mem(0x1, 0x2, 0x22, func_2257);
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
    global52 = 0x231;
    global53 = 0x239;
    global54 = 0x249;
    global55 = 0x251;
}

void func_2250(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
    int var6;
    if (arg0 == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            func_20(0);
            GroundModuleImpl(0x2710, arg5);
            KineticModuleImpl.change_kinetic_type(arg3);
            var6 = arg1;
        }
        else
        {
            func_20(0x2);
            GroundModuleImpl(0x2710, 0x5);
            KineticModuleImpl.change_kinetic_type(arg4);
            var6 = arg2;
        }
        if (arg0 == 0)
        {
            func_23(var6);
        }
        else
        {
            func_22(var6, 0, 1.0f);
        }
    }
}

int func_2251()
{
    int var0;
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (global18 == 0)
        {
            if (func_39())
            {
                return 0x1;
            }
        }
        else if (global18 == 0x2)
        {
            if (func_41())
            {
                return 0x1;
            }
        }
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            var0 = 0;
        }
        else
        {
            var0 = 0xe;
        }
        func_16(var0, 0);
        return 0x1;
    }
    return 0;
}

void func_2252()
{
    ArticleModuleImpl.remove(0x2);
    func_323();
}

void func_2253()
{
    ArticleModuleImpl.remove(0x2);
    func_334();
}

void func_2254()
{
    VisibilityModuleImpl(0x2710, 0x1);
    func_380();
}

void func_2255()
{
    VisibilityModuleImpl(0x2710, 0x1);
    func_381();
}

void func_2256()
{
    VisibilityModuleImpl(0x2710, 0x1);
    func_382();
}

void func_2257()
{
    VisibilityModuleImpl(0x2710, 0x1);
    func_384();
}

void func_2258(int arg0, int arg1, int arg2, int arg3, int arg4, float arg5, int arg6)
{
    int var7;
    if (arg0 == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x9);
            KineticModuleImpl.change_kinetic_type(arg3);
            var7 = arg1;
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
            KineticModuleImpl.change_kinetic_type(arg4);
            var7 = arg2;
        }
        if (arg0 == 0)
        {
            func_23(var7);
            MotionModuleImpl.set_motion_rate(arg6);
        }
        else if (arg5 > 0)
        {
            func_26(var7, arg5, arg6);
        }
        else
        {
            func_22(var7, 0, arg6);
        }
    }
}

int func_2259()
{
    float var0;
    float var1;
    float var2;
    func_69();
    var0 = WorkModuleImplFloat.get_float(0x5000004);
    var1 = (float)MotionModuleImpl.get_end_frame(0x215) + 1.0f;
    var2 = var1 / var0;
    WorkModuleImpl.set_float(var2 + 0, 0x2f);
    if (sys_21(0x3e8, 0x4cc) == 0)
    {
        StatusModuleImpl(0x2711, 0x159);
        return 0x1;
    }
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x11192, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2260()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    func_78(func_2261);
}

void func_2261()
{
    int var0;
    var0 = StatusModuleImpl(0x6);
    if (ControlModuleImpl(0x2713, 0x1))
    {
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        WorkModuleImpl.set_float(MotionModuleImplFloat.get_frame() + 0, 0x1000006);
        func_16(0x157, 0);
        return 0x1;
    }
    func_2258(var0, 0x211, 0x221, 0x64, 0x65, 0, 1.0f);
}

void func_2262()
{
    if (global6 == 0x157)
    {
        sys_21(0x3e8, 0x4ce);
    }
    else
    {
        sys_21(0x3e8, 0x4cd);
    }
}

int func_2263()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10192, 0, 0x80, 0);
    return 0;
}

void func_2264()
{
    WorkModuleImpl.set_int(0x215, 0x11000002);
    WorkModuleImpl.set_int(0x225, 0x11000003);
    WorkModuleImpl.set_float(0 + 0, 0x1000007);
    if (!StopModuleImpl(0x1))
    {
        func_2266();
    }
    global16 = func_2266;
    func_78(func_2265);
}

void func_2265()
{
    int var0;
    if (ControlModuleImpl(0x2713, 0x1) || WorkModuleImpl.is_flag(0x2100000d))
    {
        func_16(0x158, 0x1);
        return 0x1;
    }
    var0 = StatusModuleImpl(0x6);
    if (var0 == 0)
    {
        if (MotionModuleImpl.is_end())
        {
            WorkModuleImpl.set_int(0x219, 0x11000002);
            WorkModuleImpl.set_int(0x229, 0x11000003);
            WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x5000004) + 0, 0x1000007);
            var0 = 0x1;
        }
    }
    func_2258(var0, WorkModuleImpl.get_int(0x11000002), WorkModuleImpl.get_int(0x11000003), 0x6, 0xa, 0, WorkModuleImplFloat.get_float(0x2f));
}

void func_2266()
{
    WorkModuleImpl.add_float(1.0f, 0x1000007);
}

void func_2267()
{
    if (global6 != 0x158)
    {
        sys_21(0x3e8, 0x4cd);
    }
    PhysicsModuleImpl(0x8);
}

int func_2268()
{
    StatusModuleImpl(0x5, 0xffffffff, 0xffffffff, 0x7, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10192, 0, 0x80, 0);
    return 0;
}

void func_2269()
{
    func_78(func_2270);
}

void func_2270()
{
    int var0;
    float var1;
    float var2;
    float var3;
    var0 = StatusModuleImpl(0x6);
    if (var0 == 0)
    {
        if (func_2251())
        {
            return 0x1;
        }
        if (WorkModuleImpl.is_flag(0x2100000f))
        {
            WorkModuleImpl.off_flag2(0x2100000f);
            WorkModuleImpl.on_flag2(0x21000010);
            var1 = WorkModuleImplFloat.get_float(0x1000007);
            var2 = WorkModuleImplFloat.get_float(0x5000004);
            var3 = var1 / var2;
            if (var3 > 1.0f)
            {
                var3 = 1.0f;
            }
            sys_21(0x3e8, 0x4cf, var3);
        }
    }
    func_2258(var0, 0x211, 0x221, 0x64, 0x65, WorkModuleImplFloat.get_float(0x1000006), 1.0f);
}

void func_2271()
{
    if (WorkModuleImpl.is_flag(0x21000010) == 0)
    {
        sys_21(0x3e8, 0x4cd);
    }
}

int func_2272()
{
    StatusModuleImpl(0x5, 0xffffffff, 0xffffffff, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1, 0x1000, 0x80, 0x1000);
    return 0;
}

void func_2273()
{
    func_78(func_2274);
}

void func_2274()
{
    int var0;
    var0 = StatusModuleImpl(0x6);
    if (var0 == 0 && func_2251())
    {
        return 0x1;
    }
    func_2258(var0, 0x21d, 0x22d, 0x6, 0xa, 0, 1.0f);
}

void func_2275()
{
    
}

int func_2276()
{
    StatusModuleImpl(0x5, 0xffffffff, 0xffffffff, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1412, 0x1000, 0x200, 0x1000);
    return 0;
}

void func_2277()
{
    sys_21(0x3e8, 0x4d0, PostureModuleImplFloat.get_lr(), global48);
    func_78(func_2278);
}

void func_2278()
{
    func_2250(StatusModuleImpl(0x6), 0x231, 0x235, 0x6, 0xa, 0x9);
    if (func_2251())
    {
        return 0x1;
    }
}

void func_2279()
{
    sys_21(0x3e8, 0x4d1);
}

int func_2280()
{
    if (WorkModuleImpl.get_int(0x1000004a) == 0x2)
    {
        return 0x422;
    }
    return 0;
}

void func_2281()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x1000007);
    FighterUtil(0x6, 90.0f - var0);
}

int func_2282()
{
    StatusModuleImpl(0x5, 0xffffffff, 0xffffffff, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, func_2280() | 0x1000, 0, 0x100, 0x1000);
    return 0;
}

void func_2283()
{
    PostureModuleImpl(0x271c, WorkModuleImplFloat.get_float(0x7000002));
    PostureModuleImpl.update_rot_y();
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x3000018) * WorkModuleImplFloat.get_float(0x700000d) + 0, 0x1000008);
    if (!StopModuleImpl(0x1))
    {
        func_2285();
    }
    global16 = func_2285;
    func_78(func_2284);
}

void func_2284()
{
    func_2250(StatusModuleImpl(0x6), 0x239, 0x245, 0x66, 0x67, 0x1);
    if (MotionModuleImpl.is_end())
    {
        WorkModuleImpl.set_float(global48 + 0, 0x1000006);
        WorkModuleImpl.set_int(global18, 0x11000002);
        func_16(0x15a, 0);
        return 0x1;
    }
}

void func_2285()
{
    if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
    {
        WorkModuleImpl.off_flag2(0x2100000d);
        if (func_84() > WorkModuleImplFloat.get_float(0x7000002))
        {
            func_33();
        }
    }
}

void func_2286()
{
    
}

int func_2287()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0x1, 0, 0x4, 0x1c0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, func_2280(), 0, 0x100, 0);
    return 0;
}

void func_2288()
{
    float var0;
    float var1;
    float var2;
    float var3;
    var0 = WorkModuleImplFloat.get_float(0x1000006) * PostureModuleImplFloat.get_lr();
    var1 = WorkModuleImplFloat.get_float(0x7000005);
    if (var0 > 0)
    {
        var2 = WorkModuleImplFloat.get_float(0x7000004);
        var1 = var1 + (var2 - var1) * var0;
    }
    else if (var0 < 0)
    {
        var3 = WorkModuleImplFloat.get_float(0x7000006);
        var1 = var1 + (var3 - var1) * var0 * -1.0f;
    }
    WorkModuleImpl.set_float(var1 + 0, 0x1000009);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x7000008) + WorkModuleImplFloat.get_float(0x7000009) * var0 * -1.0f + 0, 0x100000a);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x700000a) + 0, 0x100000b);
    sys_21(0x3e8, 0x4d2);
    KineticModuleImpl.change_kinetic_type(0x68);
    func_22(0x23d, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_2290();
    }
    global16 = func_2290;
    func_78(func_2289);
}

void func_2289()
{
    if (func_56())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x15b, 0);
        return 0x1;
    }
}

void func_2290()
{
    float var0;
    float var1;
    float var2;
    float var3;
    WorkModuleImpl.inc_int(0x11000003);
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    if (var0 != 0 && var1 != 0)
    {
        var2 = PostureModuleImplFloat.get_lr();
        var3 = Math.atan2(var1, var0 * var2);
        var3 = var3 * (float)0xb4 / 3.1415927410125732f;
        WorkModuleImpl.set_float(var3 + 0, 0x1000007);
    }
}

void func_2291()
{
    if (global6 != 0x15b)
    {
        sys_21(0x3e8, 0x4d3, global4, global6, WorkModuleImpl.get_int(0x11000003));
        ModelModuleImpl(0x2, 0x2);
    }
}

int func_2292()
{
    StatusModuleImpl(0x5, 0x2, 0x69, 0x5, 0, 0x1, 0, 0x4, 0x1c0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, func_2280(), 0, 0x100, 0);
    return 0;
}

void func_2293()
{
    func_22(0x241, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_2295();
    }
    global16 = func_2295;
    func_78(func_2294);
}

void func_2294()
{
    if (func_56())
    {
        return 0x1;
    }
    if (global18 == 0 && !WorkModuleImpl.is_flag(0x2100000d))
    {
        func_16(0x19, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x10, 0);
        return 0x1;
    }
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
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

void func_2295()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x1000007);
    if (var0 > 90.0f)
    {
        var0 -= 5.0f;
        if (var0 < 90.0f)
        {
            var0 = 90.0f;
        }
    }
    else if (var0 < 90.0f)
    {
        var0 += 5.0f;
        if (var0 > 90.0f)
        {
            var0 = 90.0f;
        }
    }
    WorkModuleImpl.set_float(var0 + 0, 0x1000007);
    WorkModuleImpl.inc_int(0x11000003);
}

void func_2296()
{
    if (global6 == 0x10 || global6 == 0x19)
    {
        WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x700000f) + 0, 0);
        WorkModuleImpl.on_flag2(0x20000003);
    }
    if (global6 != 0x10)
    {
        sys_21(0x3e8, 0x4d3, global4, global6, WorkModuleImpl.get_int(0x11000003));
    }
    ModelModuleImpl(0x2, 0x2);
}

int func_2297()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x1000004b);
    var1 = 0;
    if (0x1 == var0 || 0x2 == var0)
    {
        var1 = 0x1432;
    }
    StatusModuleImpl(0x5, 0xffffffff, 0xffffffff, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, var1, 0x1000, 0x400, 0x1000);
    return 0;
}

void func_2298()
{
    float var0;
    float var1;
    func_2250(0x1, 0x249, 0x24d, 0x6, 0x6a, 0x9);
    JostleModuleImpl(0x2712, 0xb, 0x1);
    var0 = WorkModuleImplFloat.get_float(0x8000004);
    var1 = WorkModuleImplFloat.get_float(0x8000003);
    sys_31(0, 0, 0, 0, var0, 0, var1, 0, 0x1, 0x1d, 0x3, 0, 0xf, 0xf, 0, 0x1, 0, 0);
    sys_31(0x5, 0, 0, 0x5, 0x2);
    ArticleModuleImpl.generate(0x1);
    sys_21(0x3e8, 0x4d4);
    func_78(func_2299);
}

void func_2299()
{
    if (func_2251())
    {
        return 0x1;
    }
    if (!StatusModuleImpl(0x6))
    {
        func_2250(0, 0x249, 0x24d, 0x6, 0x6a, 0x9);
    }
}

void func_2300()
{
    ArticleModuleImpl.remove(0x1);
}

int func_2301()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1442, 0x1003e2, 0, 0);
    return 0;
}

void func_2302()
{
    int var0;
    sys_21(0x25);
    JostleModuleImpl(0x2710, 0);
    if (global18 == 0)
    {
        var0 = 0x251;
    }
    else
    {
        var0 = 0x252;
    }
    func_22(var0, 0, 1.0f);
    func_78(func_2303);
}

void func_2303()
{
    int var0;
    if (ArticleModuleImpl.is_exist(0x3) == 0 && MotionModuleImplFloat.get_frame() >= 40.0f)
    {
        ArticleModuleImpl.generate(0x3);
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            var0 = 0;
        }
        else
        {
            var0 = 0xe;
        }
        func_16(var0, 0);
        return 0x1;
    }
}

void func_2304()
{
    sys_21(0x69);
    EffectModuleImpl(0x2725, 0x20000);
    CameraModuleImpl(0x2718);
}


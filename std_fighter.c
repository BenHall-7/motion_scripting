int global0;
int global1;
int global2;
int global3;
int global4;
int global5;
int global6;
int global7;
int global8;
float global9;
float global10;
int global11;
int global12;
int global13;
int global14;
int global15;
int global16;
int global17;
int global18;
int global19;
float global20;
int global21;
int global22;
int global23;
int global24;
int global25;
int global26;
int global27;
int global28;
int global29;
int global30;
int global31;
float global32;
int global33;
int global34;
int global35;
int global36;
int global37;
int global38;
int global39;
int global40;
int global41;
int global42;
int global43;
int global44;
int global45;
int global46;
int global47;
float global48;
int global49;
float global50;
int global51;
int global52;
int global53;
int global54;
int global55;
int global56;
int global57;
int global58;
int global59;
int global60;
int global61;

void func_0()
{
    global0 = 0;
    global1 = 0;
    global2 = 0;
    global3 = 0;
    global4 = 0xffffffff;
    global5 = 0xffffffff;
    global6 = 0xffffffff;
    global7 = 0x100;
    global8 = 0;
    global9 = global10 = 0;
    global11 = 0;
    global12 = 0;
    global13 = 0;
    global14 = 0;
    global15 = 0;
    global16 = 0;
    global17 = 0;
    global18 = 0;
    global19 = 0;
    global20 = 0;
    global21 = 0;
}

void func_1()
{
    printf("sys_line_status_end_init");
    callFunc3(func_2);
}

void func_2()
{
    printf("sys_line_status_end_control");
    global6 = StatusModuleImpl(0x9);
    if (global6 >= global7)
    {
        printf("Warning : @g_status_kind_next_(%d) >= @g_status_kind_max_(%d)", global6, global7);
        return;
    }
    func_18();
    func_3(global4);
}

void func_3(int arg0)
{
    int var1;
    if (sys_5(0x5))
    {
        sys_1(0x5);
    }
    func_4();
    if (arg0 >= 0)
    {
        var1 = sv_get_mem(0x1, 0x2, arg0);
        if (var1 != 0)
        {
            (*var1)();
        }
        var1 = sv_get_mem(0x1, 0x6, arg0);
        if (var1 != 0)
        {
            (*var1)();
        }
    }
}

void func_4()
{
    if (sys_5(0x1))
    {
        sys_1(0x1);
    }
    if (sys_5(0x6))
    {
        sys_1(0x6);
    }
}

void func_5()
{
    printf("sys_line_status_shift_init");
    callFunc3(func_6);
}

void func_6()
{
    int var0;
    printf("sys_line_status_shift_control");
    if (global6 != global4 && global6 != 0xffffffff || StatusModuleImpl(0x6))
    {
        if (global6 >= global7)
        {
            printf("Warning : @g_status_kind_next_(%d) >= @g_status_kind_max_(%d)", global6, global7);
            return;
        }
        global8 = 0x1;
        global5 = global4;
        global4 = global6;
        if (func_7(global4))
        {
            global4 = StatusModuleImpl(0x7);
            func_7(global4);
        }
        func_8(global4);
        var0 = sv_get_mem(0x1, 0x3, global4);
        if (var0 != 0)
        {
            global2 = var0;
        }
        global9 = global10 = 0;
        global16 = 0;
        if (global12 != 0)
        {
            (*global12)();
        }
    }
}

int func_7(int arg0)
{
    int var1;
    int var2;
    printf("sub_pre_status_msc: LINE_STATUS_SHIFT status_now:%d", arg0);
    if (arg0 < 0)
    {
        printf("[Error]sub_pre_status_msc undefined status_now");
        return 0;
    }
    var1 = 0;
    var2 = sv_get_mem(0x1, 0, arg0);
    if (var2 != 0)
    {
        var1 = (*var2)();
    }
    else
    {
        var1 = 0;
    }
    return var1;
}

void func_8(int arg0)
{
    int var1;
    printf("sub_set_status_msc: LINE_STATUS_SHIFT status_now:%d", arg0);
    if (arg0 < 0)
    {
        printf("[Error]sub_set_status_msc undefined status_now");
        return;
    }
    var1 = sv_get_mem(0x1, 0x1, arg0);
    if (var1 != 0)
    {
        sys_0(0x5, var1);
    }
    func_9(arg0);
}

void func_9(int arg0)
{
    int var1;
    if (arg0 < 0)
    {
        return;
    }
    var1 = sv_get_mem(0x1, 0x7, arg0);
    if (var1 != 0)
    {
        sys_0(0x1, var1);
    }
    var1 = sv_get_mem(0x1, 0x8, arg0);
    if (var1 != 0)
    {
        sys_0(0x6, var1);
    }
}

void func_10()
{
    printf("sys_line_status_system_init");
    printf("PLATFORM CAFE");
    callFunc3(func_11);
}

void func_11()
{
    if (StopModuleImpl(0x1) == 0)
    {
        if (global8 == 0 && global9 < 1000000.0f)
        {
            if (sys_49(0x2) == 0x1)
            {
                global9 += sys_4C(0);
                global3 = 0x1;
            }
            else
            {
                global9 = global10 + 1.0f;
                global10 = global9;
                global3 = 0;
            }
        }
        else
        {
            global3 = sys_49(0x2);
        }
    }
    else
    {
        global3 = 0x1;
    }
    if (global14 != 0)
    {
        (*global14)();
    }
    global18 = StatusModuleImpl(0x1);
    global20 = MotionModuleImplFloat.get_frame();
    if (global2 != 0)
    {
        (*global2)();
        global2 = 0;
    }
    if (!global3)
    {
        if (global15 != 0)
        {
            (*global15)();
        }
        if (global16 != 0)
        {
            (*global16)();
        }
    }
    global8 = 0;
}

int func_12(int arg0)
{
    if (arg0 < 0)
    {
        return -arg0;
    }
    return arg0;
}

float func_13(float arg0)
{
    if (arg0 < (float)0)
    {
        return -arg0;
    }
    return arg0;
}

void func_14(float arg0)
{
    if (arg0 < 0)
    {
        return -1.0f;
    }
    else
    {
        return 1.0f;
    }
}

float func_15(float arg0, float arg1, float arg2)
{
    if (arg0 < arg1)
    {
        return arg1;
    }
    else if (arg0 > arg2)
    {
        return arg2;
    }
    return arg0;
}

void func_16(int arg0, int arg1)
{
    if (global11)
    {
        (*global11)(arg0, arg1);
    }
}

void func_17(int arg0, int arg1)
{
    StatusModuleImpl(0x3, arg0, arg1);
}

void func_18()
{
    int var0;
    int var1;
    if (global13)
    {
        (*global13)(var0, var1);
    }
}

int func_19(int arg0, int arg1)
{
    sys_21(0x19, arg0, arg1);
    return 0x1;
}

void func_20(int arg0)
{
    StatusModuleImpl(0x2, arg0);
    global19 = global18;
    global18 = arg0;
}

void func_21(int arg0, int arg1)
{
    StatusModuleImpl(0x2, arg0, arg1);
    global19 = global18;
    global18 = arg0;
}

void func_22(int arg0, float arg1, int arg2)
{
    int var3;
    var3 = arg0;
    if (global21)
    {
        var3 = (*global21)(arg0);
    }
    MotionModuleImpl(0x1, var3, arg1, arg2);
    global20 = arg1;
}

void func_23(int arg0)
{
    int var1;
    var1 = arg0;
    if (global21)
    {
        var1 = (*global21)(arg0);
    }
    MotionModuleImpl.change_motion(var1);
    global20 = MotionModuleImplFloat.get_frame();
}

void func_24(int arg0)
{
    int var1;
    var1 = arg0;
    if (global21)
    {
        var1 = (*global21)(arg0);
    }
    MotionModuleImpl(0x25, var1);
}

void func_25(int arg0)
{
    int var1;
    var1 = arg0;
    if (global21)
    {
        var1 = (*global21)(arg0);
    }
    MotionModuleImpl(0x26, var1);
}

void func_26(int arg0, int arg1, int arg2)
{
    int var3;
    var3 = arg0;
    if (global21)
    {
        var3 = (*global21)(arg0);
    }
    MotionModuleImpl(0x26, var3, arg1, arg2);
}

void func_27(int arg0)
{
    int var1;
    var1 = arg0;
    if (global21)
    {
        var1 = (*global21)(arg0);
    }
    MotionModuleImpl.change_motion(var1, MotionModuleImplFloat.get_frame());
}

void func_28(int arg0, float arg1, int arg2)
{
    int var3;
    var3 = arg0;
    if (global21)
    {
        var3 = (*global21)(arg0);
    }
    MotionModuleImpl(0x2b, var3, arg1, arg2);
    global20 = arg1;
}

void func_29(int arg0, float arg1, int arg2, int arg3)
{
    int var4;
    var4 = arg0;
    if (global21)
    {
        var4 = (*global21)(arg0);
    }
    MotionModuleImpl(0x1, var4, arg1, arg2, arg3);
    global20 = arg1;
}

int func_30(int arg0)
{
    if (randint(0, arg0) == 0)
    {
        return 0x1;
    }
    return 0;
}

int func_31(int arg0)
{
    int var1;
    var1 = MotionModuleImpl.get_motion();
    if (var1 == arg0 || var1 == arg0 + 0x1 || var1 == arg0 + 0x2 || var1 == arg0 + 0x3)
    {
        return 0x1;
    }
    return 0;
}

int func_32(int arg0, int arg1)
{
    if (arg0 == arg1 || arg0 == arg1 + 0x1 || arg0 == arg1 + 0x2 || arg0 == arg1 + 0x3)
    {
        return 0x1;
    }
    return 0;
}

void func_33()
{
    PostureModuleImpl(0x271c);
    PostureModuleImpl.update_rot_y();
}

int func_34()
{
    if (global18 == 0)
    {
        if (GroundModuleImpl(0xd))
        {
            return 0x1;
        }
    }
    return 0;
}

void func_35(int arg0, float arg1, int arg2)
{
    int var3;
    var3 = arg0;
    if (global21)
    {
        var3 = (*global21)(arg0);
    }
    MotionModuleImpl(0x38, var3, arg1, arg2);
    global20 = arg1;
}

void func_36()
{
    printf("sys_line_waza_customize_init");
    callFunc3(func_37);
}

void func_37()
{
    printf("sys_line_waza_customize_control");
    if (global22)
    {
        (*global22)();
    }
}

void func_38()
{
    WorkModuleImpl.strans_group_on(0x1f000000);
    WorkModuleImpl.strans_group_on(0x1f000001);
    WorkModuleImpl.strans_group_on(0x1f000002);
    WorkModuleImpl.strans_group_on(0x1f000003);
    WorkModuleImpl.strans_group_on(0x1f000004);
    WorkModuleImpl.strans_group_on(0x1f000005);
    WorkModuleImpl.strans_group_on(0x1f000006);
    WorkModuleImpl.strans_group_on(0x1f000007);
}

int func_39()
{
    if (func_43())
    {
        return 0x1;
    }
    if (func_44())
    {
        return 0x1;
    }
    if (func_46())
    {
        return 0x1;
    }
    if (func_47())
    {
        return 0x1;
    }
    if (func_48())
    {
        return 0x1;
    }
    if (func_49())
    {
        return 0x1;
    }
    if (func_51())
    {
        return 0x1;
    }
    if (func_52())
    {
        return 0x1;
    }
    return 0;
}

void func_40()
{
    WorkModuleImpl.strans_group_on(0x1f000008);
    WorkModuleImpl.strans_group_on(0x1f00000a);
    WorkModuleImpl.strans_group_on(0x1f00000b);
    WorkModuleImpl.strans_group_on(0x1f00000c);
    WorkModuleImpl.strans_group_on(0x1f00000d);
    WorkModuleImpl.strans_group_on(0x1f00000e);
    WorkModuleImpl.strans_group_on(0x1f00000f);
    WorkModuleImpl.strans_group_on(0x1f000010);
    WorkModuleImpl.strans_group_on(0x1f000011);
}

int func_41()
{
    if (func_55())
    {
        return 0x1;
    }
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        func_16(0xd8, 0);
        return 0x1;
    }
    if (func_56())
    {
        return 0x1;
    }
    if (func_567())
    {
        return 0x1;
    }
    if (func_58())
    {
        return 0x1;
    }
    if (func_59())
    {
        return 0x1;
    }
    if (func_61())
    {
        return 0x1;
    }
    if (func_62())
    {
        return 0x1;
    }
    if (func_63())
    {
        return 0x1;
    }
    if (func_65())
    {
        return 0x1;
    }
    if (func_66())
    {
        return 0x1;
    }
    if (func_67())
    {
        return 0x1;
    }
    return 0;
}

int func_42()
{
    if (WorkModuleImpl.is_flag(0x2000001b))
    {
        StatusModuleImpl(0x2711, 0x57);
        return 0x1;
    }
    return 0;
}

int func_43()
{
    if (func_71(global23))
    {
        return 0x1;
    }
    if (global18 != 0)
    {
        return 0;
    }
    if (func_60())
    {
        return 0x1;
    }
    if (global24 & 0x2000)
    {
        if (WorkModuleImpl.check_strans(0x1e000063))
        {
            if (func_72(global25))
            {
                func_16(0x153, 0x1);
                return 0x1;
            }
        }
    }
    if (global24 & 0x4000)
    {
        if (WorkModuleImpl.check_strans(0x1e000064))
        {
            if (func_72(global26))
            {
                func_16(0x154, 0x1);
                return 0x1;
            }
        }
    }
    if (global24 & 0x8000)
    {
        if (WorkModuleImpl.check_strans(0x1e000065))
        {
            if (func_72(global27))
            {
                func_16(0x155, 0x1);
                return 0x1;
            }
        }
    }
    if (global24 & 0x1000)
    {
        if (WorkModuleImpl.check_strans(0x1e000094))
        {
            if (global1 == 0x38)
            {
                if (sys_21(0x61))
                {
                    func_16(0x156, 0x1);
                    return 0x1;
                }
                else if (WorkModuleImpl.is_flag(0x20000006) && WorkModuleImpl.is_flag(0x20000008))
                {
                    func_16(0x164, 0x1);
                    return 0x1;
                }
            }
            else if (sys_21(0x61))
            {
                func_16(0x156, 0x1);
                return 0x1;
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000062))
        {
            if (func_72(global28))
            {
                func_16(0x152, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

int func_44()
{
    return func_45();
}

int func_45()
{
    if (global18 != 0)
    {
        return 0;
    }
    if ((global24 & 0x20000000) != 0 && WorkModuleImpl.check_strans(0x1e000076) == 0x1 && ItemModuleImpl(0x4) == 0x1 && ItemModuleImpl(0x5, 0x800000) == 0)
    {
        func_16(0x8c, 0);
        return 0x1;
    }
    if ((global29 & 0x1bf) != 0 && WorkModuleImpl.check_strans(0x1e000074) == 0x1)
    {
        if (ItemModuleImpl(0x5, 0x8) == 0x1 || ItemModuleImpl(0x5, 0x2) == 0x1 && ItemModuleImpl(0x1a) <= 0)
        {
            func_16(0x8c, 0);
            return 0x1;
        }
    }
    return 0;
}

int func_46()
{
    if (global18 != 0)
    {
        return 0;
    }
    if (global24 & 0x20000000)
    {
        if (WorkModuleImpl.check_strans(0x1e00006d))
        {
            func_16(0x35, 0x1);
            return 0x1;
        }
    }
    return 0;
}

int func_47()
{
    if (func_71(global30))
    {
        return 0x1;
    }
    if (global18 != 0)
    {
        return 0;
    }
    if (global24 & 0x1)
    {
        if (ItemModuleImpl(0x11) == 0x6f)
        {
            func_16(0x10d, 0x1);
            return 0x1;
        }
    }
    if ((global24 & 0x10) != 0)
    {
        if (WorkModuleImpl.check_strans(0x1e00007b) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0x1)
        {
            func_16(0x94, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000082) == 0x1 && ItemModuleImpl(0x5, 0x2) == 0x1)
        {
            func_16(0x98, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000059))
        {
            func_16(0x2b, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x20)
    {
        if (WorkModuleImpl.check_strans(0x1e00005c))
        {
            func_16(0x31, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x40)
    {
        if (WorkModuleImpl.check_strans(0x1e00005f))
        {
            func_16(0x2e, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x4)
    {
        if (WorkModuleImpl.check_strans(0x1e000056))
        {
            func_16(0x29, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x1)
    {
        if (WorkModuleImpl.check_strans(0x1e000072))
        {
            if (0 < ItemModuleImpl(0))
            {
                if (ItemModuleImpl(0x22))
                {
                    func_16(0x8a, 0x1);
                    return 0x1;
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000073))
        {
            if (0 < ItemModuleImpl(0x1))
            {
                if (ItemModuleImpl(0x4) == 0)
                {
                    func_16(0x8b, 0x1);
                    return 0x1;
                }
            }
        }
    }
    else if (sys_21(0x86, 0x1))
    {
        if (WorkModuleImpl.check_strans(0x1e000072))
        {
            if (0 < ItemModuleImpl(0))
            {
                if (ItemModuleImpl(0x22))
                {
                    func_16(0x8a, 0);
                    return 0x1;
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000073))
        {
            if (0 < ItemModuleImpl(0x1))
            {
                if (ItemModuleImpl(0x4) == 0)
                {
                    func_16(0x8b, 0);
                    return 0x1;
                }
            }
        }
    }
    if ((global24 & 0x2) != 0 && WorkModuleImpl.check_strans(0x1e00007d) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0x1)
    {
        func_16(0x93, 0x1);
        return 0x1;
    }
    if (global24 & 0x8)
    {
        if (WorkModuleImpl.check_strans(0x1e000057))
        {
            func_16(0x2a, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x2)
    {
        if (WorkModuleImpl.check_strans(0x1e000081) == 0x1 && ItemModuleImpl(0x5, 0x2) == 0x1)
        {
            func_16(0x98, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000055))
        {
            func_16(0x28, 0x1);
            return 0x1;
        }
    }
    if ((global24 & 0x1) != 0)
    {
        if (WorkModuleImpl.check_strans(0x1e00007e) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0x1)
        {
            func_16(0x92, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000080) == 0x1 && ItemModuleImpl(0x5, 0x2) == 0x1)
        {
            func_16(0x98, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000053))
        {
            if (WorkModuleImpl.get_int(0x13000106) == 0x3)
            {
                func_16(0x26, 0x1);
                return 0x1;
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000052))
        {
            func_16(0x25, 0x1);
            return 0x1;
        }
    }
    return 0;
}

int func_48()
{
    if (global18 != 0)
    {
        return 0;
    }
    if (global24 & 0x1000000)
    {
        if (WorkModuleImpl.check_strans(0x1e000026))
        {
            func_16(0x1f, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x2000000)
    {
        if (WorkModuleImpl.check_strans(0x1e000027))
        {
            func_16(0x20, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x4000000)
    {
        if (WorkModuleImpl.check_strans(0x1e000028))
        {
            func_16(0x21, 0x1);
            return 0x1;
        }
    }
    return 0;
}

int func_49()
{
    if (global18 != 0)
    {
        return 0;
    }
    if (WorkModuleImpl.check_strans(0x1e000029))
    {
        if (func_50())
        {
            func_16(0x1b, 0x1);
            return 0x1;
        }
    }
    return 0;
}

int func_50()
{
    if (ControlModuleImpl(0x2712, 0x3))
    {
        return 0x1;
    }
    return 0;
}

int func_51()
{
    int var0;
    int var1;
    if (global18 != 0)
    {
        return 0;
    }
    if (global24 & 0x200000)
    {
        if (WorkModuleImpl.check_strans(0x1e00002c))
        {
            func_16(0xa, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x100000)
    {
        if (WorkModuleImpl.check_strans(0x1e00002b))
        {
            if (ControlModuleImpl(0x271c))
            {
                var0 = ControlModuleImpl(0x14, 0, 0x14);
                var1 = ControlModuleImpl(0x15);
                WorkModuleImpl.set_int(var1 - var0, 0x1000007b);
                func_16(0xa, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

int func_52(int arg0)
{
    if (global18 != 0)
    {
        return 0;
    }
    if (global31 & 0x2)
    {
        if (WorkModuleImpl.check_strans(0x1e000039) && sys_21(0x80) == 0x1)
        {
            func_16(0x14d, 0);
            return 0x1;
        }
    }
    if (global31 & 0x4)
    {
        if (WorkModuleImpl.check_strans(0x1e00003b) && sys_21(0x80) == 0x1)
        {
            func_16(0x14d, 0);
            return 0x1;
        }
    }
    if (global31 & 0x1)
    {
        if (WorkModuleImpl.check_strans(0x1e00003a) && sys_21(0x80) == 0x1)
        {
            func_16(0x14d, 0);
            return 0x1;
        }
    }
    if (global24 & 0x80000)
    {
        if (WorkModuleImpl.check_strans(0x1e000031))
        {
            func_16(0x7, 0x1);
            return 0x1;
        }
    }
    if (global24 & 0x20000)
    {
        if (WorkModuleImpl.check_strans(0x1e00002d))
        {
            func_16(0x3, 0x1);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000034))
    {
        if (func_53())
        {
            if (arg0 == 0)
            {
                func_16(0x11, 0x1);
            }
            else
            {
                func_16(0x12, 0x1);
            }
            return 0x1;
        }
    }
    if (global24 & 0x40000)
    {
        if (WorkModuleImpl.check_strans(0x1e00002f))
        {
            func_16(0x6, 0x1);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00003c))
    {
        if (func_54())
        {
            func_16(0x1, 0x1);
            return 0x1;
        }
    }
    return 0;
}

int func_53()
{
    if (global32 <= WorkModuleImplFloat.get_float(0x200001a))
    {
        return 0x1;
    }
    return 0;
}

int func_54()
{
    if (func_88() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        if (global32 > WorkModuleImplFloat.get_float(0x200001a))
        {
            return 0x1;
        }
    }
    return 0;
}

int func_55()
{
    if (global18 != 0)
    {
        return 0;
    }
    if (func_71(global33))
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00001c))
    {
        if (WorkModuleImpl.get_int(0x1000000d) < WorkModuleImpl.get_int(0x13000029))
        {
            func_16(0x17, 0);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00001b))
    {
        func_16(0x16, 0);
        return 0x1;
    }
    return 0;
}

int func_56()
{
    if (func_71(global34))
    {
        return 0;
    }
    if (global18 == 0x2 && GroundModuleImpl(0x2725) && global32 > WorkModuleImplFloat.get_float(0x200006c) && WorkModuleImpl.check_strans(0x1e00001f) && GroundModuleImpl(0x2724) && WorkModuleImpl.get_int(0x10000003) == 0)
    {
        WorkModuleImpl.on_flag2(0x2100000b);
        func_16(0x72, 0x1);
        return 0x1;
    }
    else if (WorkModuleImpl.is_flag(0x2100000b) == 0x1)
    {
        printf("DELETE_CHANGE_STATUS_REQUEST !!!!!!!");
        WorkModuleImpl.off_flag2(0x2100000b);
        StatusModuleImpl(0xc);
    }
    return 0;
}

int func_57()
{
    if (global18 == 0x2 && WorkModuleImpl.check_strans(0x1e00001f) && GroundModuleImpl(0x2724) && GroundModuleImpl(0x2725))
    {
        func_16(0x72, 0);
        return 0x1;
    }
    return 0;
}

int func_58()
{
    if (func_71(global35))
    {
        return 0x1;
    }
    if (global18 != 0x2)
    {
        return 0;
    }
    if (func_60())
    {
        return 0x1;
    }
    if (global24 & 0x4000)
    {
        if (WorkModuleImpl.check_strans(0x1e000064))
        {
            if (func_72(global26))
            {
                func_16(0x154, 0x1);
                return 0x1;
            }
        }
    }
    if (global24 & 0x8000)
    {
        if (WorkModuleImpl.check_strans(0x1e000065))
        {
            if (func_72(global27))
            {
                func_16(0x155, 0x1);
                return 0x1;
            }
        }
    }
    if (global24 & 0x2000)
    {
        if (WorkModuleImpl.check_strans(0x1e000063))
        {
            if (func_72(global25))
            {
                func_16(0x153, 0x1);
                return 0x1;
            }
        }
    }
    if (global24 & 0x1000)
    {
        if (WorkModuleImpl.check_strans(0x1e000094))
        {
            if (global1 == 0x38)
            {
                if (sys_21(0x61))
                {
                    func_16(0x156, 0x1);
                    return 0x1;
                }
                else if (WorkModuleImpl.is_flag(0x20000006) && WorkModuleImpl.is_flag(0x20000008))
                {
                    func_16(0x164, 0x1);
                    return 0x1;
                }
            }
            else if (sys_21(0x61))
            {
                func_16(0x156, 0x1);
                return 0x1;
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000062))
        {
            if (func_72(global28))
            {
                func_16(0x152, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

int func_59()
{
    if (func_71(global36))
    {
        return 0x1;
    }
    if (global18 != 0x2)
    {
        return 0;
    }
    if ((global24 & 0x20000000) != 0 && WorkModuleImpl.check_strans(0x1e000076) == 0x1 && ItemModuleImpl(0x4) == 0x1 && ItemModuleImpl(0x5, 0x800000) == 0)
    {
        func_16(0x8c, 0);
        return 0x1;
    }
    if ((global29 & 0x1fe00) != 0 && WorkModuleImpl.check_strans(0x1e000074) == 0x1)
    {
        if (ItemModuleImpl(0x5, 0x8) == 0x1 || ItemModuleImpl(0x5, 0x2) == 0x1 && ItemModuleImpl(0x1a) <= 0)
        {
            func_16(0x8c, 0);
            return 0x1;
        }
    }
    return 0;
}

int func_60()
{
    if (WorkModuleImpl.is_flag(0x20000074) == 0)
    {
        return 0;
    }
    if (func_71(global37))
    {
        return 0x1;
    }
    return 0;
}

int func_61()
{
    int var0;
    if (global18 != 0x2)
    {
        return 0;
    }
    if (global38 & 0x1)
    {
        if (WorkModuleImpl.check_strans(0x1e000051))
        {
            if (WorkModuleImpl.get_int(0x1300011f) != 0)
            {
                if (ControlModuleImpl(0x2712, 0x3))
                {
                    var0 = LinkModuleImpl(0x2, 0x3);
                    if (!var0)
                    {
                        func_16(0xf1, 0x1);
                        return 0x1;
                    }
                }
            }
        }
    }
    return 0;
}

int func_62()
{
    if (func_71(global39))
    {
        return 0x1;
    }
    if (global18 != 0x2)
    {
        return 0;
    }
    if (global24 & 0x400000)
    {
        if (WorkModuleImpl.check_strans(0x1e00003d))
        {
            func_16(0x22, 0x1);
            return 0x1;
        }
    }
    return 0;
}

int func_63()
{
    if (func_71(global40))
    {
        return 0x1;
    }
    if (global18 != 0x2)
    {
        return 0;
    }
    if ((global24 & 0x1) != 0)
    {
        if (WorkModuleImpl.check_strans(0x1e00008a) == 0x1 && func_64() == 0x1)
        {
            func_16(0xa1, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000061))
        {
            func_16(0x34, 0x1);
            return 0x1;
        }
    }
    return 0;
}

int func_64()
{
    if ((global29 & 0x600) != 0)
    {
        if (ItemModuleImpl(0x4) == 0x1)
        {
            if (ItemModuleImpl(0x5, 0x2) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0)
            {
                return 0x1;
            }
        }
    }
    return 0;
}

int func_65()
{
    if (func_71(global41))
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        if (global24 & 0x100000 && WorkModuleImpl.check_strans(0x1e000040) && ControlModuleImpl(0x271c) && WorkModuleImpl.get_int(0x10000007) == 0 && func_83() >= WorkModuleImplFloat.get_float(0x20000b6) && sys_21(0x18))
        {
            func_16(0xb3, 0x1);
            return 0x1;
        }
        if (global38 & 0x10 && WorkModuleImpl.check_strans(0x1e000041) && WorkModuleImpl.get_int(0x10000007) == 0 && func_83() >= WorkModuleImplFloat.get_float(0x20000b6) && sys_21(0x18))
        {
            func_16(0xb3, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000042) && sys_21(0x18, 0x1))
        {
            func_16(0xb3, 0);
            return 0x1;
        }
    }
    return 0;
}

int func_66()
{
    if (func_71(global42))
    {
        return 0x1;
    }
    if (global18 != 0x2)
    {
        return 0;
    }
    if (WorkModuleImpl.get_int(0x1300011e) == 0x1)
    {
        if (func_97() != 0)
        {
            func_16(0x6c, 0x1);
            return 0x1;
        }
    }
    if (WorkModuleImpl.get_int(0x1300011d) == 0x1)
    {
        if (func_98() != 0)
        {
            func_16(0x6b, 0x1);
            return 0x1;
        }
    }
    return 0;
}

int func_67()
{
    if (func_71(global43))
    {
        return 0x1;
    }
    if (global18 != 0x2)
    {
        return 0;
    }
    if (WorkModuleImpl.get_int(0x1300010c) == 0x1)
    {
        if (global24 & 0x100000)
        {
            if (WorkModuleImpl.check_strans(0x1e00003e))
            {
                if (WorkModuleImpl.get_int(0x10000001) < WorkModuleImpl.get_int(0x10000002))
                {
                    if (ControlModuleImpl(0x271c))
                    {
                        func_16(0xc, 0x1);
                        return 0x1;
                    }
                }
            }
        }
        if (global24 & 0x200000)
        {
            if (WorkModuleImpl.check_strans(0x1e00003f))
            {
                if (WorkModuleImpl.get_int(0x10000001) < WorkModuleImpl.get_int(0x10000002))
                {
                    func_16(0xc, 0x1);
                    return 0x1;
                }
            }
        }
    }
    else
    {
        if (global24 & 0x200000)
        {
            if (WorkModuleImpl.check_strans(0x1e000044))
            {
                if (WorkModuleImpl.get_int(0x10000001) == 0x1)
                {
                    func_16(0xd, 0x1);
                    return 0x1;
                }
            }
        }
        if (global24 & 0x100000)
        {
            if (WorkModuleImpl.check_strans(0x1e000043))
            {
                if (WorkModuleImpl.get_int(0x10000001) == 0x1)
                {
                    if (ControlModuleImpl(0x271c))
                    {
                        func_16(0xd, 0x1);
                        return 0x1;
                    }
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000045) && func_68() && WorkModuleImpl.get_int(0x10000001) < WorkModuleImpl.get_int(0x10000002))
        {
            func_16(0xd, 0x1);
            return 0x1;
        }
    }
    if (func_71(global44))
    {
        return 0x1;
    }
    return 0;
}

int func_68()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x1300010c);
    if (var0 == 0x2)
    {
        if (WorkModuleImpl.get_int(0x10000001) >= 0x2 && (ControlModuleImpl(0x2712, 0x2) || global32 >= WorkModuleImplFloat.get_float(0x200001f) && ControlModuleImpl(0x271c)))
        {
            if (global4 != 0xd && global4 != 0xa4 || WorkModuleImpl.is_flag(0x2100000e) == 0x1)
            {
                if (global5 == 0xb3 && KineticModuleImplFloat.get_sum_speed_y(0x1) > 0)
                {
                    return 0;
                }
                return 0x1;
            }
        }
    }
    else if (var0 == 0x3)
    {
        if (WorkModuleImpl.get_int(0x10000001) >= 0x2 && (global24 & 0x200000 || global32 >= WorkModuleImplFloat.get_float(0x200001f) && ControlModuleImpl(0x271c)))
        {
            if (global4 != 0xd && global4 != 0xa4 || WorkModuleImpl.is_flag(0x2100000e) == 0x1)
            {
                if (global5 == 0xb3 && KineticModuleImplFloat.get_sum_speed_y(0x1) > 0)
                {
                    return 0;
                }
                return 0x1;
            }
        }
    }
    return 0;
}

void func_69()
{
    if (global18 == 0x2)
    {
        if (global31 & 0x20000)
        {
            PostureModuleImpl(0x2710);
        }
    }
}

void func_70()
{
    func_69();
}

int func_71(int arg0)
{
    if (arg0)
    {
        return (*arg0)();
    }
    return 0;
}

int func_72(int arg0)
{
    if (arg0)
    {
        return (*arg0)();
    }
    return 0x1;
}

void func_73()
{
    printf("sys_line_system_init");
    callFunc3(func_74);
}

void func_74()
{
    int var0;
    int var1;
    global19 = global18;
    global18 = StatusModuleImpl(0x1);
    func_77();
    global38 = ControlModuleImpl(0x9);
    global24 = ControlModuleImpl(0xa, 0);
    global31 = ControlModuleImpl(0xa, 0x1);
    global29 = ControlModuleImpl(0xa, 0x2);
    global45 = ControlModuleImpl(0xa, 0x3);
    var0 = StatusModuleImpl(0);
    if (var0 != 0xffffffff)
    {
        if (!(StopModuleImpl(0x1) || sys_49(0x3)))
        {
            var1 = sv_get_mem(0x1, 0x4, var0);
            if (var1 != 0)
            {
                (*var1)();
            }
        }
        else
        {
            var1 = sv_get_mem(0x1, 0x5, var0);
            if (var1 != 0)
            {
                (*var1)();
            }
        }
    }
}

void func_75()
{
    ControlModuleImpl(0x2719);
    global46 = 0xfe;
}

void func_76()
{
    ControlModuleImpl(0x271a);
    global47 = 0xfe;
}

void func_77()
{
    global48 = ControlModuleImplFloat.get_stick_x();
    global32 = ControlModuleImplFloat.get_stick_y();
    global46 = ControlModuleImpl(0x2);
    global47 = ControlModuleImpl(0x3);
    global49 = ControlModuleImpl(0);
}

void func_78(int arg0)
{
    if (ControlModuleImpl(0xc))
    {
        ControlModuleImpl(0xb);
        global38 = ControlModuleImpl(0x9);
        global24 = ControlModuleImpl(0xa, 0);
        global31 = ControlModuleImpl(0xa, 0x1);
        global29 = ControlModuleImpl(0xa, 0x2);
        global45 = ControlModuleImpl(0xa, 0x3);
    }
    if (arg0)
    {
        callFunc3(arg0);
    }
}

void func_79(int arg0, int arg1)
{
    int var2;
    global50 = 0;
    global15 = 0;
    var2 = StatusModuleImpl(0xd);
    if (var2 == 0xd0 || var2 == 0xd2 || var2 == 0xfe)
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x2000004d))
    {
        if (func_108(arg0) == 0x1)
        {
            if (global18 == 0)
            {
                arg0 = 0x83;
            }
            else if (global18 == 0x2 || global18 == 0x1)
            {
                arg0 = 0x10;
            }
        }
    }
    StatusModuleImpl(0x3, arg0, arg1);
}

void func_80()
{
    global50 = 0;
    global15 = 0;
}

void func_81()
{
    float var0;
    if (WorkModuleImpl.is_flag(0x21000001))
    {
        if (global50 <= 2.0f)
        {
            if (FighterUtil(0x23, global6) || global6 == 0x152 || global6 == 0x153 || global6 == 0x154 || global6 == 0x155)
            {
                var0 = -WorkModuleImplFloat.get_float(0x3000019);
                KineticModuleImpl.set_speed(0x1, var0);
                WorkModuleImpl.off_flag2(0x21000001);
            }
        }
    }
}

void func_82()
{
    if (!global3)
    {
        if (WorkModuleImpl.is_flag(0x21000001))
        {
            if (global50 < 1000000.0f)
            {
                global50 += 1.0f;
            }
        }
    }
    if (global8 || ControlModuleImpl(0x13))
    {
        global38 = ControlModuleImpl(0x9);
        global24 = ControlModuleImpl(0xa, 0);
        global31 = ControlModuleImpl(0xa, 0x1);
        global29 = ControlModuleImpl(0xa, 0x2);
        global45 = ControlModuleImpl(0xa, 0x3);
    }
}

float func_83()
{
    float var0;
    int var1;
    float var2;
    var0 = WorkModuleImplFloat.get_float(0x300015f);
    var1 = WorkModuleImpl.get_int(0x10000006);
    if (var1 > 0)
    {
        var2 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        var0 += var2 * WorkModuleImplFloat.get_float(0x2000024);
        var0 *= Math.exp(WorkModuleImplFloat.get_float(0x20000b5), var1 + 0x1);
    }
    return var0;
}

float func_84()
{
    return func_13(global48);
}

float func_85()
{
    return func_13(global32);
}

float func_86()
{
    return func_13(ControlModuleImplFloat.get_stick_prev_x());
}

float func_87()
{
    return func_13(ControlModuleImplFloat.get_stick_prev_y());
}

float func_88()
{
    float var0;
    float var1;
    var0 = PostureModuleImplFloat.get_lr();
    var1 = global48 * var0;
    return var1;
}

float func_89()
{
    float var0;
    float var1;
    var0 = PostureModuleImplFloat.get_lr();
    var1 = global48 * -var0;
    return var1;
}

float func_90()
{
    return KineticModuleImplFloat.get_sum_speed(0x1);
}

float func_91()
{
    return KineticModuleImplFloat.get_sum_speed_y(0x1);
}

float func_92()
{
    return KineticModuleImplFloat.get_damage_speed_x();
}

float func_93()
{
    return KineticModuleImplFloat.get_damage_speed_y();
}

void func_94()
{
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
}

int func_95()
{
    if (StopModuleImpl(0) == 0x1 || WorkModuleImpl.get_int(0x11000003) > 0)
    {
        return 0x1;
    }
    return 0;
}

int func_96()
{
    int var0;
    var0 = 0;
    if (ControlModuleImplFloat.get_clatter(var0) <= 0)
    {
        return 0x1;
    }
    return 0;
}

int func_97()
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
    float var10;
    float var11;
    var0 = (float)0xffffffff;
    var1 = (float)0x1;
    var2 = 0;
    var3 = 0;
    if (GroundModuleImpl(0x2722, 0x2) != 0)
    {
        if (GroundModuleImpl(0xf, 0x2) == 0)
        {
            return 0;
        }
        var2 = var1;
    }
    else if (GroundModuleImpl(0x2722, 0x4) != 0)
    {
        if (GroundModuleImpl(0xf, 0x4) == 0)
        {
            return 0;
        }
        var2 = var0;
    }
    if (var2 != 0)
    {
        if (WorkModuleImpl.get_int(0x1000000b) <= 0)
        {
            var4 = WorkModuleImplFloat.get_float(0x20000af);
            if (var2 == var1 && global48 <= -var4 || var2 == var0 && global48 >= var4)
            {
                var5 = KineticModuleImplFloat.get_sum_speed_y(0x1);
                if (var5 > 0)
                {
                    return 0;
                }
                var6 = (float)0;
                var7 = (float)0;
                if (var2 == var1)
                {
                    var6 = GroundModuleImplFloat(0x5, 0x2);
                    var7 = GroundModuleImplFloat(0x6, 0x2);
                }
                else
                {
                    var6 = GroundModuleImplFloat(0x5, 0x4);
                    var7 = GroundModuleImplFloat(0x6, 0x4);
                }
                var8 = Math.atan2(var6, var7);
                var9 = var8 * -var2 * (float)0xb4 / 3.1415927410125732f + 90.0f;
                var10 = WorkModuleImplFloat.get_float(0x20000b8);
                var11 = WorkModuleImplFloat.get_float(0x20000b9);
                if (var9 < var10 && var9 > var11)
                {
                    return 0x1;
                }
            }
        }
    }
    return 0;
}

int func_98()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    if (!WorkModuleImpl.is_flag(0x2000006c))
    {
        var0 = (float)0xffffffff;
        var1 = (float)0x1;
        var2 = 0;
        if (GroundModuleImpl(0x2722, 0x2) != 0)
        {
            if (GroundModuleImpl(0xf, 0x2) == 0)
            {
                return 0;
            }
            var2 = var1;
        }
        else if (GroundModuleImpl(0x2722, 0x4) != 0)
        {
            if (GroundModuleImpl(0xf, 0x4) == 0)
            {
                return 0;
            }
            var2 = var0;
        }
        if (var2 != 0)
        {
            if (var2 != WorkModuleImplFloat.get_float(0x2) || WorkModuleImpl.get_int(0x10000005) <= 0)
            {
                var3 = WorkModuleImplFloat.get_float(0x3000073);
                var4 = KineticModuleImplFloat.get_sum_speed_x(0x1);
                if (func_13(var4) >= var3)
                {
                    var5 = WorkModuleImplFloat.get_float(0x20000af);
                    var6 = WorkModuleImplFloat.get_float(0x200001f);
                    if (var2 == var1 && (global48 >= var5 || global24 & 0x8000000) || var2 == var0 && (global48 <= -var5 || global24 & 0x10000000))
                    {
                        return 0x1;
                    }
                }
            }
        }
    }
    return 0;
}

int func_99()
{
    float var0;
    float var1;
    float var2;
    float var3;
    if (GroundModuleImpl(0x2724) && GroundModuleImpl(0x2725) && WorkModuleImpl.get_int(0x10000003) == 0)
    {
        var0 = GroundModuleImplFloat(0x7);
        var1 = GroundModuleImplFloat(0x1);
        var2 = PostureModuleImplFloat.get_pos_x();
        var3 = func_14(var1 - var2);
        if (var0 != var3)
        {
            return 0x1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void func_100(int arg0)
{
    if (arg0 != 0)
    {
        WorkModuleImpl.strans_group_on(0x1f000009);
    }
    else
    {
        WorkModuleImpl.strans_group_off(0x1f000009);
    }
    GroundModuleImpl(0x2711, arg0);
}

void func_101()
{
    KineticModuleImpl.change_kinetic_type(0x6);
    func_20(0);
    GroundModuleImpl(0x2710, 0x1);
}

void func_102()
{
    KineticModuleImpl.change_kinetic_type(0);
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
}

void func_103()
{
    if (!WorkModuleImpl.is_flag(0x20000004))
    {
        ItemModuleImpl(0x6, 0, 0, 0xffffffff, 0x1);
        if (ItemModuleImpl(0x3))
        {
            WorkModuleImpl.on_flag2(0x20000004);
            ControlModuleImpl(0x271b);
            ControlModuleImpl(0x271f);
            global24 = 0;
            global31 = 0;
            global29 = 0;
            global45 = 0;
            global38 = 0;
        }
    }
}

void func_104()
{
    if ((global29 & 0x100000) != 0)
    {
        func_103();
    }
    else if (sys_21(0x86, 0x1))
    {
        func_103();
    }
}

void func_105()
{
    if (ItemModuleImpl(0x4) == 0x1 && (global29 & 0x20000) != 0 && ItemModuleImpl(0x5, 0x800000) == 0)
    {
        ItemModuleImpl(0x7, 0, 0, WorkModuleImplFloat.get_float(0x300003d));
        sys_21(0x1c, 0x10);
        ControlModuleImpl(0x271b);
        ControlModuleImpl(0x271f);
        global24 = 0;
        global31 = 0;
        global29 = 0;
        global45 = 0;
        WorkModuleImpl.on_flag2(0x20000004);
    }
}

void func_106()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        func_20(0);
        GroundModuleImpl(0x2710, 0x1);
        if (func_32(MotionModuleImpl.get_motion(), WorkModuleImpl.get_int(0x11000003)) == 0x1)
        {
            func_23(WorkModuleImpl.get_int(0x11000002));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
        }
        WorkModuleImpl.off_flag2(0x2100000d);
        WorkModuleImpl.set_int(0x2, 0x11000004);
        WorkModuleImpl.strans_on(0x1e000000);
        WorkModuleImpl.strans_off(0x1e000002);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0);
        func_20(0x2);
        GroundModuleImpl(0x2710, 0x5);
        if (func_32(MotionModuleImpl.get_motion(), WorkModuleImpl.get_int(0x11000002)) == 0x1)
        {
            func_23(WorkModuleImpl.get_int(0x11000003));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
        }
        WorkModuleImpl.off_flag2(0x2100000d);
        WorkModuleImpl.set_int(0, 0x11000004);
        WorkModuleImpl.strans_off(0x1e000000);
        WorkModuleImpl.strans_on(0x1e000002);
    }
}

int func_107(int arg0)
{
    int var1;
    var1 = arg0;
    if (global51 != 0xffffffff)
    {
        if (var1 >= global51 && var1 < global52)
        {
            var1 += WorkModuleImpl.get_int(0x10000048);
        }
        else if (var1 >= global52 && var1 < global53)
        {
            var1 += WorkModuleImpl.get_int(0x10000049);
        }
        else if (var1 >= global53 && var1 < global54)
        {
            var1 += WorkModuleImpl.get_int(0x1000004a);
        }
        else if (var1 >= global54 && var1 < global55)
        {
            var1 += WorkModuleImpl.get_int(0x1000004b);
        }
    }
    return var1;
}

int func_108(int arg0)
{
    if (arg0 >= 0x25 && arg0 <= 0x2a || arg0 == 0x2b || arg0 == 0x2e || arg0 == 0x31 || FighterUtil(0x23, arg0) || arg0 == 0x35 || arg0 == 0x37 || arg0 == 0x75 || arg0 == 0x81 || arg0 == 0x87 || arg0 == 0x8c || arg0 == 0x8d || arg0 == 0x91 || arg0 == 0x92 || arg0 == 0x93 || arg0 == 0x94 || arg0 == 0x97 || arg0 >= 0x98 && arg0 <= 0xa2 || arg0 >= 0x152 && arg0 <= 0x156)
    {
        return 0x1;
    }
    return 0;
}

int func_109()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    return WorkModuleImpl.is_flag2(0x2000000b) == 0 && WorkModuleImpl.is_flag2(0x20000032) == 0 && var0 != 0;
}

void func_110()
{
    sys_21(0x78);
}

void func_111()
{
    if (global6 == 0xe)
    {
        WorkModuleImpl.on_flag2(0x2000005f);
    }
}

void func_112()
{
    sv_set_mem(0x1, 0, 0xbf, func_1670);
    sv_set_mem(0x1, 0x1, 0xbf, func_1671);
    sv_set_mem(0x1, 0x2, 0xbf, func_1673);
    sv_set_mem(0x1, 0, 0xc0, func_1674);
    sv_set_mem(0x1, 0x1, 0xc0, func_1676);
    sv_set_mem(0x1, 0x2, 0xc0, func_1678);
    sv_set_mem(0x1, 0, 0xc1, func_1679);
    sv_set_mem(0x1, 0x1, 0xc1, func_1680);
    sv_set_mem(0x1, 0x2, 0xc1, func_1682);
    sv_set_mem(0x1, 0, 0xc2, func_1765);
    sv_set_mem(0x1, 0x1, 0xc2, func_1767);
    sv_set_mem(0x1, 0x2, 0xc2, func_1769);
    sv_set_mem(0x1, 0, 0xc3, func_1776);
    sv_set_mem(0x1, 0x1, 0xc3, func_1777);
    sv_set_mem(0x1, 0x2, 0xc3, func_1779);
    sv_set_mem(0x1, 0, 0xc4, func_1788);
    sv_set_mem(0x1, 0x1, 0xc4, func_1789);
    sv_set_mem(0x1, 0x2, 0xc4, func_1791);
    sv_set_mem(0x1, 0, 0xf6, func_1963);
    sv_set_mem(0x1, 0x1, 0xf6, func_1964);
    sv_set_mem(0x1, 0x2, 0xf6, func_1967);
    sv_set_mem(0x1, 0, 0xfa, func_1831);
    sv_set_mem(0x1, 0x1, 0xfa, func_1832);
    sv_set_mem(0x1, 0x2, 0xfa, func_1834);
    sv_set_mem(0x1, 0, 0xcc, func_1837);
    sv_set_mem(0x1, 0x1, 0xcc, func_1838);
    sv_set_mem(0x1, 0x2, 0xcc, func_1840);
    sv_set_mem(0x1, 0, 0xcd, func_1843);
    sv_set_mem(0x1, 0x1, 0xcd, func_1844);
    sv_set_mem(0x1, 0x2, 0xcd, func_1846);
    sv_set_mem(0x1, 0, 0x1a, func_481);
    sv_set_mem(0x1, 0x1, 0x1a, func_520);
    sv_set_mem(0x1, 0x2, 0x1a, func_540);
    sv_set_mem(0x1, 0, 0x102, func_1983);
    sv_set_mem(0x1, 0x1, 0x102, func_1984);
    sv_set_mem(0x1, 0x2, 0x102, func_1986);
    sv_set_mem(0x1, 0, 0x103, func_1987);
    sv_set_mem(0x1, 0x1, 0x103, func_1988);
    sv_set_mem(0x1, 0x2, 0x103, func_1990);
    sv_set_mem(0x1, 0, 0x11b, func_2195);
    sv_set_mem(0x1, 0x1, 0x11b, func_2196);
    sv_set_mem(0x1, 0x2, 0x11b, func_2198);
    sv_set_mem(0x1, 0, 0xce, func_1849);
    sv_set_mem(0x1, 0x1, 0xce, func_1850);
    sv_set_mem(0x1, 0x2, 0xce, func_1852);
    sv_set_mem(0x1, 0, 0xcf, func_1855);
    sv_set_mem(0x1, 0x1, 0xcf, func_1856);
    sv_set_mem(0x1, 0x2, 0xcf, func_1858);
    sv_set_mem(0x1, 0, 0x141, func_1861);
    sv_set_mem(0x1, 0x1, 0x141, func_1862);
    sv_set_mem(0x1, 0x2, 0x141, func_1864);
    sv_set_mem(0x1, 0, 0x11f, func_2201);
    sv_set_mem(0x1, 0x1, 0x11f, func_2202);
    sv_set_mem(0x1, 0x2, 0x11f, func_2204);
    sv_set_mem(0x1, 0, 0x120, func_2205);
    sv_set_mem(0x1, 0x1, 0x120, func_2206);
    sv_set_mem(0x1, 0x2, 0x120, func_2208);
    sv_set_mem(0x1, 0, 0x121, func_2209);
    sv_set_mem(0x1, 0x1, 0x121, func_2210);
    sv_set_mem(0x1, 0x2, 0x121, func_2212);
    sv_set_mem(0x1, 0, 0x126, func_2221);
    sv_set_mem(0x1, 0x1, 0x126, func_2222);
    sv_set_mem(0x1, 0x2, 0x126, func_2224);
    sv_set_mem(0x1, 0, 0x127, func_2225);
    sv_set_mem(0x1, 0x1, 0x127, func_2226);
    sv_set_mem(0x1, 0x2, 0x127, func_2228);
}

void func_113()
{
    sv_set_mem(0x1, 0, 0, func_670);
    sv_set_mem(0x1, 0, 0x1, func_697);
    sv_set_mem(0x1, 0, 0x2, func_699);
    sv_set_mem(0x1, 0, 0xa, func_469);
    sv_set_mem(0x1, 0, 0xb, func_472);
    sv_set_mem(0x1, 0, 0xc, func_474);
    sv_set_mem(0x1, 0, 0xd, func_475);
    sv_set_mem(0x1, 0, 0xe, func_476);
    sv_set_mem(0x1, 0, 0xf, func_477);
    sv_set_mem(0x1, 0, 0x10, func_977);
    sv_set_mem(0x1, 0, 0x16, func_478);
    sv_set_mem(0x1, 0, 0x17, func_479);
    sv_set_mem(0x1, 0, 0x18, func_480);
    sv_set_mem(0x1, 0, 0x19, func_978);
    sv_set_mem(0x1, 0, 0x3, func_700);
    sv_set_mem(0x1, 0, 0x4, func_701);
    sv_set_mem(0x1, 0, 0x5, func_702);
    sv_set_mem(0x1, 0, 0x6, func_705);
    sv_set_mem(0x1, 0, 0x7, func_706);
    sv_set_mem(0x1, 0, 0x8, func_707);
    sv_set_mem(0x1, 0, 0x9, func_708);
    sv_set_mem(0x1, 0, 0x11, func_593);
    sv_set_mem(0x1, 0, 0x12, func_594);
    sv_set_mem(0x1, 0, 0x13, func_595);
    sv_set_mem(0x1, 0, 0x14, func_596);
    sv_set_mem(0x1, 0, 0x15, func_597);
    sv_set_mem(0x1, 0, 0x1b, func_388);
    sv_set_mem(0x1, 0, 0x1c, func_389);
    sv_set_mem(0x1, 0, 0x1d, func_390);
    sv_set_mem(0x1, 0, 0x1e, func_391);
    sv_set_mem(0x1, 0, 0x1f, func_361);
    sv_set_mem(0x1, 0, 0x20, func_362);
    sv_set_mem(0x1, 0, 0x21, func_363);
    sv_set_mem(0x1, 0, 0x22, func_365);
    sv_set_mem(0x1, 0, 0x23, func_349);
    sv_set_mem(0x1, 0, 0x24, func_353);
    sv_set_mem(0x1, 0, 0x59, func_392);
    sv_set_mem(0x1, 0, 0x5a, func_393);
    sv_set_mem(0x1, 0, 0x5b, func_394);
    sv_set_mem(0x1, 0, 0x5c, func_395);
    sv_set_mem(0x1, 0, 0x5d, func_396);
    sv_set_mem(0x1, 0, 0x5e, func_397);
    sv_set_mem(0x1, 0, 0x5f, func_841);
    sv_set_mem(0x1, 0, 0x60, func_846);
    sv_set_mem(0x1, 0, 0x61, func_850);
    sv_set_mem(0x1, 0, 0x62, func_854);
    sv_set_mem(0x1, 0, 0x63, func_833);
    sv_set_mem(0x1, 0, 0x64, func_1697);
    sv_set_mem(0x1, 0, 0x65, func_1701);
    sv_set_mem(0x1, 0, 0x66, func_1705);
    sv_set_mem(0x1, 0, 0x67, func_1710);
    sv_set_mem(0x1, 0, 0x68, func_1715);
    sv_set_mem(0x1, 0, 0x71, func_671);
    sv_set_mem(0x1, 0, 0x69, func_633);
    sv_set_mem(0x1, 0, 0x6a, func_634);
    sv_set_mem(0x1, 0, 0x6b, func_643);
    sv_set_mem(0x1, 0, 0x6c, func_648);
    sv_set_mem(0x1, 0, 0x6d, func_653);
    sv_set_mem(0x1, 0, 0x6e, func_658);
    sv_set_mem(0x1, 0, 0x6f, func_662);
    sv_set_mem(0x1, 0, 0x70, func_666);
    sv_set_mem(0x1, 0, 0x72, func_147);
    sv_set_mem(0x1, 0, 0x73, func_148);
    sv_set_mem(0x1, 0, 0x74, func_149);
    sv_set_mem(0x1, 0, 0x75, func_150);
    sv_set_mem(0x1, 0, 0x76, func_151);
    sv_set_mem(0x1, 0, 0x77, func_152);
    sv_set_mem(0x1, 0, 0x78, func_153);
    sv_set_mem(0x1, 0, 0x79, func_154);
    sv_set_mem(0x1, 0, 0x7a, func_155);
    sv_set_mem(0x1, 0, 0x108, func_156);
    sv_set_mem(0x1, 0, 0x7b, func_1019);
    sv_set_mem(0x1, 0, 0x7c, func_1019);
    sv_set_mem(0x1, 0, 0x7d, func_157);
    sv_set_mem(0x1, 0, 0x7e, func_482);
    sv_set_mem(0x1, 0, 0x7f, func_483);
    sv_set_mem(0x1, 0, 0x80, func_484);
    sv_set_mem(0x1, 0, 0x81, func_485);
    sv_set_mem(0x1, 0, 0x82, func_486);
    sv_set_mem(0x1, 0, 0x83, func_1930);
    sv_set_mem(0x1, 0, 0x84, func_1934);
    sv_set_mem(0x1, 0, 0x85, func_1938);
    sv_set_mem(0x1, 0, 0x86, func_1943);
    sv_set_mem(0x1, 0, 0x87, func_1947);
    sv_set_mem(0x1, 0, 0x88, func_1951);
    sv_set_mem(0x1, 0, 0x89, func_1955);
    sv_set_mem(0x1, 0, 0x25, func_244);
    sv_set_mem(0x1, 0, 0x26, func_335);
    sv_set_mem(0x1, 0, 0x27, func_245);
    sv_set_mem(0x1, 0, 0x28, func_246);
    sv_set_mem(0x1, 0, 0x29, func_247);
    sv_set_mem(0x1, 0, 0x2a, func_248);
    sv_set_mem(0x1, 0, 0x2b, func_249);
    sv_set_mem(0x1, 0, 0x2c, func_250);
    sv_set_mem(0x1, 0, 0x2d, func_252);
    sv_set_mem(0x1, 0, 0x31, func_253);
    sv_set_mem(0x1, 0, 0x32, func_254);
    sv_set_mem(0x1, 0, 0x33, func_256);
    sv_set_mem(0x1, 0, 0x2e, func_257);
    sv_set_mem(0x1, 0, 0x2f, func_258);
    sv_set_mem(0x1, 0, 0x30, func_260);
    sv_set_mem(0x1, 0, 0x34, func_261);
    sv_set_mem(0x1, 0, 0x35, func_1032);
    sv_set_mem(0x1, 0, 0x36, func_1037);
    sv_set_mem(0x1, 0, 0x37, func_1044);
    sv_set_mem(0x1, 0, 0x38, func_1050);
    sv_set_mem(0x1, 0, 0x39, func_1054);
    sv_set_mem(0x1, 0, 0x3a, func_1059);
    sv_set_mem(0x1, 0, 0x3b, func_1066);
    sv_set_mem(0x1, 0, 0x3c, func_1071);
    sv_set_mem(0x1, 0, 0x3d, func_1076);
    sv_set_mem(0x1, 0, 0x3e, func_1080);
    sv_set_mem(0x1, 0, 0x3f, func_1087);
    sv_set_mem(0x1, 0, 0x40, func_1099);
    sv_set_mem(0x1, 0, 0x41, func_1110);
    sv_set_mem(0x1, 0, 0x42, func_1119);
    sv_set_mem(0x1, 0, 0x43, func_1124);
    sv_set_mem(0x1, 0, 0x44, func_1128);
    sv_set_mem(0x1, 0, 0x45, func_783);
    sv_set_mem(0x1, 0, 0x46, func_788);
    sv_set_mem(0x1, 0, 0x47, func_793);
    sv_set_mem(0x1, 0, 0x48, func_794);
    sv_set_mem(0x1, 0, 0x49, func_900);
    sv_set_mem(0x1, 0, 0x4a, func_908);
    sv_set_mem(0x1, 0, 0x4b, func_913);
    sv_set_mem(0x1, 0, 0x4c, func_795);
    sv_set_mem(0x1, 0, 0x4d, func_920);
    sv_set_mem(0x1, 0, 0x4e, func_924);
    sv_set_mem(0x1, 0, 0x4f, func_928);
    sv_set_mem(0x1, 0, 0x50, func_932);
    sv_set_mem(0x1, 0, 0x51, func_936);
    sv_set_mem(0x1, 0, 0x52, func_973);
    sv_set_mem(0x1, 0, 0x53, func_969);
    sv_set_mem(0x1, 0, 0x54, func_940);
    sv_set_mem(0x1, 0, 0x55, func_944);
    sv_set_mem(0x1, 0, 0x56, func_948);
    sv_set_mem(0x1, 0, 0x57, func_952);
    sv_set_mem(0x1, 0, 0x58, func_956);
    sv_set_mem(0x1, 0, 0xb3, func_1143);
    sv_set_mem(0x1, 0, 0xb4, func_1151);
    sv_set_mem(0x1, 0, 0xb5, func_1156);
    sv_set_mem(0x1, 0, 0xb6, func_1160);
    sv_set_mem(0x1, 0, 0xb7, func_1165);
    sv_set_mem(0x1, 0, 0x8a, func_1172);
    sv_set_mem(0x1, 0, 0x8b, func_1193);
    sv_set_mem(0x1, 0, 0x8c, func_1177);
    sv_set_mem(0x1, 0, 0x8d, func_1188);
    sv_set_mem(0x1, 0, 0x8e, func_1207);
    sv_set_mem(0x1, 0, 0x8f, func_1198);
    sv_set_mem(0x1, 0, 0x90, func_1202);
    sv_set_mem(0x1, 0, 0x91, func_1212);
    sv_set_mem(0x1, 0, 0x92, func_1726);
    sv_set_mem(0x1, 0, 0x93, func_1733);
    sv_set_mem(0x1, 0, 0x94, func_1739);
    sv_set_mem(0x1, 0, 0x96, func_1745);
    sv_set_mem(0x1, 0, 0x95, func_1751);
    sv_set_mem(0x1, 0, 0x97, func_1756);
    sv_set_mem(0x1, 0, 0x98, func_1326);
    sv_set_mem(0x1, 0, 0x99, func_1330);
    sv_set_mem(0x1, 0, 0x9a, func_1334);
    sv_set_mem(0x1, 0, 0x9b, func_1338);
    sv_set_mem(0x1, 0, 0x9c, func_1342);
    sv_set_mem(0x1, 0, 0x9d, func_1346);
    sv_set_mem(0x1, 0, 0x9e, func_1350);
    sv_set_mem(0x1, 0, 0x9f, func_1360);
    sv_set_mem(0x1, 0, 0xa0, func_1365);
    sv_set_mem(0x1, 0, 0xa1, func_1354);
    sv_set_mem(0x1, 0, 0xa2, func_1369);
    sv_set_mem(0x1, 0, 0xa3, func_568);
    sv_set_mem(0x1, 0, 0xa4, func_572);
    sv_set_mem(0x1, 0, 0xa5, func_577);
    sv_set_mem(0x1, 0, 0xa6, func_1216);
    sv_set_mem(0x1, 0, 0xc5, func_822);
    sv_set_mem(0x1, 0, 0xc6, func_828);
    sv_set_mem(0x1, 0, 0xd0, func_1220);
    sv_set_mem(0x1, 0, 0xd1, func_1224);
    sv_set_mem(0x1, 0, 0xd2, func_1228);
    sv_set_mem(0x1, 0, 0xd3, func_1251);
    sv_set_mem(0x1, 0, 0xd4, func_1255);
    sv_set_mem(0x1, 0, 0xd5, func_1259);
    sv_set_mem(0x1, 0, 0xd6, func_1264);
    sv_set_mem(0x1, 0, 0xd7, func_1268);
    sv_set_mem(0x1, 0, 0xd8, func_1272);
    sv_set_mem(0x1, 0, 0xd9, func_1276);
    sv_set_mem(0x1, 0, 0xda, func_1010);
    sv_set_mem(0x1, 0, 0xdb, func_837);
    sv_set_mem(0x1, 0, 0xdd, func_1285);
    sv_set_mem(0x1, 0, 0xde, func_1289);
    sv_set_mem(0x1, 0, 0xb1, func_211);
    sv_set_mem(0x1, 0, 0xb2, func_227);
    sv_set_mem(0x1, 0, 0x14c, func_212);
    sv_set_mem(0x1, 0, 0x14f, func_2157);
    sv_set_mem(0x1, 0, 0xb8, func_1583);
    sv_set_mem(0x1, 0, 0xb9, func_1594);
    sv_set_mem(0x1, 0, 0xba, func_1605);
    sv_set_mem(0x1, 0, 0xbb, func_1616);
    sv_set_mem(0x1, 0, 0xbc, func_1627);
    sv_set_mem(0x1, 0, 0xe9, func_1638);
    sv_set_mem(0x1, 0, 0xea, func_1643);
    sv_set_mem(0x1, 0, 0xeb, func_1648);
    sv_set_mem(0x1, 0, 0xbd, func_1653);
    sv_set_mem(0x1, 0, 0xbe, func_1659);
    sv_set_mem(0x1, 0, 0x109, func_1666);
    sv_set_mem(0x1, 0, 0xdf, func_1867);
    sv_set_mem(0x1, 0, 0xe3, func_1871);
    sv_set_mem(0x1, 0, 0xe2, func_1875);
    sv_set_mem(0x1, 0, 0xe5, func_1879);
    sv_set_mem(0x1, 0, 0xe4, func_1883);
    sv_set_mem(0x1, 0, 0xe0, func_1887);
    sv_set_mem(0x1, 0, 0xc7, func_1809);
    sv_set_mem(0x1, 0, 0xc8, func_1801);
    sv_set_mem(0x1, 0, 0xc9, func_1816);
    sv_set_mem(0x1, 0, 0xca, func_1824);
    sv_set_mem(0x1, 0, 0xcb, func_1827);
    sv_set_mem(0x1, 0, 0x14d, func_686);
    sv_set_mem(0x1, 0, 0x14e, func_692);
    sv_set_mem(0x1, 0, 0xe6, func_1898);
    sv_set_mem(0x1, 0, 0xe7, func_1891);
    sv_set_mem(0x1, 0, 0xe8, func_1895);
    sv_set_mem(0x1, 0, 0xec, func_1901);
    sv_set_mem(0x1, 0, 0xed, func_1908);
    sv_set_mem(0x1, 0, 0xef, func_1916);
    sv_set_mem(0x1, 0, 0xf0, func_1920);
    sv_set_mem(0x1, 0, 0xee, func_1912);
    sv_set_mem(0x1, 0, 0xf1, func_123);
    sv_set_mem(0x1, 0, 0xf2, func_128);
    sv_set_mem(0x1, 0, 0xf3, func_132);
    sv_set_mem(0x1, 0, 0xf4, func_138);
    sv_set_mem(0x1, 0, 0xf5, func_142);
    sv_set_mem(0x1, 0, 0xf7, func_1968);
    sv_set_mem(0x1, 0, 0xf8, func_1233);
    sv_set_mem(0x1, 0, 0x10e, func_1237);
    sv_set_mem(0x1, 0, 0xf9, func_1293);
    sv_set_mem(0x1, 0, 0xfe, func_1507);
    sv_set_mem(0x1, 0, 0xfb, func_1513);
    sv_set_mem(0x1, 0, 0xfc, func_1518);
    sv_set_mem(0x1, 0, 0xfd, func_1523);
    sv_set_mem(0x1, 0, 0xff, func_1977);
    sv_set_mem(0x1, 0, 0x100, func_1297);
    sv_set_mem(0x1, 0, 0x114, func_1301);
    sv_set_mem(0x1, 0, 0x101, func_1972);
    sv_set_mem(0x1, 0, 0x10a, func_1305);
    sv_set_mem(0x1, 0, 0x10b, func_1309);
    sv_set_mem(0x1, 0, 0x10c, func_1313);
    sv_set_mem(0x1, 0, 0x10d, func_1319);
    if (!sys_7(0xd))
    {
        sv_set_mem(0x1, 0, 0x14b, func_1959);
    }
    sv_set_mem(0x1, 0, 0xa7, func_2104);
    sv_set_mem(0x1, 0, 0xa8, func_2108);
    sv_set_mem(0x1, 0, 0xa9, func_2112);
    sv_set_mem(0x1, 0, 0xaa, func_2116);
    sv_set_mem(0x1, 0, 0xab, func_2120);
    sv_set_mem(0x1, 0, 0xac, func_2124);
    sv_set_mem(0x1, 0, 0xad, func_2128);
    sv_set_mem(0x1, 0, 0xae, func_2132);
    sv_set_mem(0x1, 0, 0xaf, func_2137);
    sv_set_mem(0x1, 0, 0xb0, func_2142);
    sv_set_mem(0x1, 0, 0x104, func_1991);
    sv_set_mem(0x1, 0, 0x105, func_1996);
    sv_set_mem(0x1, 0, 0x106, func_2001);
    sv_set_mem(0x1, 0, 0x107, func_2006);
    sv_set_mem(0x1, 0, 0x10f, func_2010);
    sv_set_mem(0x1, 0, 0x128, func_2173);
    sv_set_mem(0x1, 0, 0x129, func_2180);
    sv_set_mem(0x1, 0, 0x12a, func_2186);
    sv_set_mem(0x1, 0, 0x12b, func_2173);
    sv_set_mem(0x1, 0, 0x12c, func_2180);
    sv_set_mem(0x1, 0, 0x12d, func_2186);
    sv_set_mem(0x1, 0, 0x12e, func_2173);
    sv_set_mem(0x1, 0, 0x12f, func_2180);
    sv_set_mem(0x1, 0, 0x130, func_2186);
    sv_set_mem(0x1, 0, 0x131, func_2173);
    sv_set_mem(0x1, 0, 0x132, func_2192);
    sv_set_mem(0x1, 0, 0x133, func_2193);
    sv_set_mem(0x1, 0, 0x134, func_2173);
    sv_set_mem(0x1, 0, 0x135, func_2180);
    sv_set_mem(0x1, 0, 0x136, func_2186);
    sv_set_mem(0x1, 0, 0x124, func_2213);
    sv_set_mem(0x1, 0, 0x125, func_2217);
    sv_set_mem(0x1, 0, 0x122, func_2190);
    sv_set_mem(0x1, 0, 0x137, func_2150);
    sv_set_mem(0x1, 0, 0x138, func_2153);
    sv_set_mem(0x1, 0, 0x139, func_2230);
    sv_set_mem(0x1, 0, 0x13a, func_793);
    sv_set_mem(0x1, 0, 0x13d, func_788);
    sv_set_mem(0x1, 0, 0x13b, func_2191);
    sv_set_mem(0x1, 0, 0x13c, func_2174);
    sv_set_mem(0x1, 0, 0x13e, func_2175);
    sv_set_mem(0x1, 0, 0x13f, func_2180);
    sv_set_mem(0x1, 0, 0x140, func_2186);
    sv_set_mem(0x1, 0, 0x147, func_2235);
    sv_set_mem(0x1, 0, 0x110, func_2015);
    sv_set_mem(0x1, 0, 0x111, func_2020);
    sv_set_mem(0x1, 0, 0x112, func_2024);
    sv_set_mem(0x1, 0, 0x113, func_2028);
    sv_set_mem(0x1, 0, 0x118, func_2044);
    sv_set_mem(0x1, 0, 0x119, func_2049);
    sv_set_mem(0x1, 0, 0x11a, func_2053);
    sv_set_mem(0x1, 0, 0x115, func_2032);
    sv_set_mem(0x1, 0, 0x116, func_2036);
    sv_set_mem(0x1, 0, 0x117, func_2040);
    sv_set_mem(0x1, 0, 0x11c, func_2057);
    sv_set_mem(0x1, 0, 0x11d, func_2062);
    sv_set_mem(0x1, 0, 0x11e, func_2066);
    sv_set_mem(0x1, 0, 0x142, func_2070);
    sv_set_mem(0x1, 0, 0x143, func_2075);
    sv_set_mem(0x1, 0, 0x144, func_2079);
    sv_set_mem(0x1, 0, 0x145, func_2083);
    sv_set_mem(0x1, 0, 0x146, func_2087);
    sv_set_mem(0x1, 0, 0x148, func_2091);
    sv_set_mem(0x1, 0, 0x149, func_2096);
    sv_set_mem(0x1, 0, 0x14a, func_2100);
}

void func_114()
{
    sv_set_mem(0x1, 0x1, 0, func_672);
    sv_set_mem(0x1, 0x1, 0x1, func_709);
    sv_set_mem(0x1, 0x1, 0x2, func_711);
    sv_set_mem(0x1, 0x1, 0xa, func_487);
    sv_set_mem(0x1, 0x1, 0xb, func_492);
    sv_set_mem(0x1, 0x1, 0xc, func_495);
    sv_set_mem(0x1, 0x1, 0xd, func_498);
    sv_set_mem(0x1, 0x1, 0xe, func_501);
    sv_set_mem(0x1, 0x1, 0xf, func_504);
    sv_set_mem(0x1, 0x1, 0x10, func_979);
    sv_set_mem(0x1, 0x1, 0x16, func_507);
    sv_set_mem(0x1, 0x1, 0x17, func_513);
    sv_set_mem(0x1, 0x1, 0x18, func_517);
    sv_set_mem(0x1, 0x1, 0x19, func_981);
    sv_set_mem(0x1, 0x1, 0x3, func_713);
    sv_set_mem(0x1, 0x1, 0x4, func_716);
    sv_set_mem(0x1, 0x1, 0x5, func_720);
    sv_set_mem(0x1, 0x1, 0x6, func_723);
    sv_set_mem(0x1, 0x1, 0x7, func_725);
    sv_set_mem(0x1, 0x1, 0x8, func_727);
    sv_set_mem(0x1, 0x1, 0x9, func_731);
    sv_set_mem(0x1, 0x1, 0x11, func_598);
    sv_set_mem(0x1, 0x1, 0x12, func_601);
    sv_set_mem(0x1, 0x1, 0x13, func_605);
    sv_set_mem(0x1, 0x1, 0x14, func_607);
    sv_set_mem(0x1, 0x1, 0x15, func_609);
    sv_set_mem(0x1, 0x1, 0x1b, func_399);
    sv_set_mem(0x1, 0x1, 0x1c, func_405);
    sv_set_mem(0x1, 0x1, 0x1d, func_409);
    sv_set_mem(0x1, 0x1, 0x1e, func_412);
    sv_set_mem(0x1, 0x1, 0x1f, func_366);
    sv_set_mem(0x1, 0x1, 0x20, func_369);
    sv_set_mem(0x1, 0x1, 0x21, func_371);
    sv_set_mem(0x1, 0x1, 0x22, func_375);
    sv_set_mem(0x1, 0x1, 0x23, func_350);
    sv_set_mem(0x1, 0x1, 0x24, func_354);
    sv_set_mem(0x1, 0x1, 0x59, func_416);
    sv_set_mem(0x1, 0x1, 0x5a, func_418);
    sv_set_mem(0x1, 0x1, 0x5b, func_420);
    sv_set_mem(0x1, 0x1, 0x5c, func_422);
    sv_set_mem(0x1, 0x1, 0x5d, func_425);
    sv_set_mem(0x1, 0x1, 0x5e, func_427);
    sv_set_mem(0x1, 0x1, 0x5f, func_842);
    sv_set_mem(0x1, 0x1, 0x60, func_847);
    sv_set_mem(0x1, 0x1, 0x61, func_851);
    sv_set_mem(0x1, 0x1, 0x62, func_855);
    sv_set_mem(0x1, 0x1, 0x63, func_834);
    sv_set_mem(0x1, 0x1, 0x64, func_1698);
    sv_set_mem(0x1, 0x1, 0x65, func_1702);
    sv_set_mem(0x1, 0x1, 0x66, func_1706);
    sv_set_mem(0x1, 0x1, 0x67, func_1711);
    sv_set_mem(0x1, 0x1, 0x68, func_1716);
    sv_set_mem(0x1, 0x1, 0x71, func_674);
    sv_set_mem(0x1, 0x1, 0x69, func_635);
    sv_set_mem(0x1, 0x1, 0x6a, func_637);
    sv_set_mem(0x1, 0x1, 0x6b, func_644);
    sv_set_mem(0x1, 0x1, 0x6c, func_649);
    sv_set_mem(0x1, 0x1, 0x6d, func_654);
    sv_set_mem(0x1, 0x1, 0x6e, func_659);
    sv_set_mem(0x1, 0x1, 0x6f, func_663);
    sv_set_mem(0x1, 0x1, 0x70, func_667);
    sv_set_mem(0x1, 0x1, 0x72, func_158);
    sv_set_mem(0x1, 0x1, 0x73, func_161);
    sv_set_mem(0x1, 0x1, 0x74, func_165);
    sv_set_mem(0x1, 0x1, 0x75, func_167);
    sv_set_mem(0x1, 0x1, 0x76, func_169);
    sv_set_mem(0x1, 0x1, 0x77, func_171);
    sv_set_mem(0x1, 0x1, 0x78, func_173);
    sv_set_mem(0x1, 0x1, 0x79, func_175);
    sv_set_mem(0x1, 0x1, 0x7a, func_177);
    sv_set_mem(0x1, 0x1, 0x108, func_180);
    sv_set_mem(0x1, 0x1, 0x7b, func_1022);
    sv_set_mem(0x1, 0x1, 0x7c, func_1023);
    sv_set_mem(0x1, 0x1, 0x7d, func_183);
    sv_set_mem(0x1, 0x1, 0x7e, func_521);
    sv_set_mem(0x1, 0x1, 0x7f, func_523);
    sv_set_mem(0x1, 0x1, 0x80, func_525);
    sv_set_mem(0x1, 0x1, 0x81, func_527);
    sv_set_mem(0x1, 0x1, 0x82, func_529);
    sv_set_mem(0x1, 0x1, 0x83, func_1931);
    sv_set_mem(0x1, 0x1, 0x84, func_1935);
    sv_set_mem(0x1, 0x1, 0x85, func_1939);
    sv_set_mem(0x1, 0x1, 0x86, func_1944);
    sv_set_mem(0x1, 0x1, 0x87, func_1948);
    sv_set_mem(0x1, 0x1, 0x88, func_1952);
    sv_set_mem(0x1, 0x1, 0x89, func_1956);
    sv_set_mem(0x1, 0x1, 0x25, func_263);
    sv_set_mem(0x1, 0x1, 0x26, func_336);
    sv_set_mem(0x1, 0x1, 0x27, func_272);
    sv_set_mem(0x1, 0x1, 0x28, func_275);
    sv_set_mem(0x1, 0x1, 0x29, func_278);
    sv_set_mem(0x1, 0x1, 0x2a, func_281);
    sv_set_mem(0x1, 0x1, 0x2b, func_286);
    sv_set_mem(0x1, 0x1, 0x2c, func_288);
    sv_set_mem(0x1, 0x1, 0x2d, func_290);
    sv_set_mem(0x1, 0x1, 0x31, func_295);
    sv_set_mem(0x1, 0x1, 0x32, func_298);
    sv_set_mem(0x1, 0x1, 0x33, func_301);
    sv_set_mem(0x1, 0x1, 0x2e, func_303);
    sv_set_mem(0x1, 0x1, 0x2f, func_305);
    sv_set_mem(0x1, 0x1, 0x30, func_307);
    sv_set_mem(0x1, 0x1, 0x34, func_315);
    sv_set_mem(0x1, 0x1, 0x35, func_1034);
    sv_set_mem(0x1, 0x1, 0x36, func_1039);
    sv_set_mem(0x1, 0x1, 0x37, func_1046);
    sv_set_mem(0x1, 0x1, 0x38, func_1051);
    sv_set_mem(0x1, 0x1, 0x39, func_1056);
    sv_set_mem(0x1, 0x1, 0x3a, func_1061);
    sv_set_mem(0x1, 0x1, 0x3b, func_1067);
    sv_set_mem(0x1, 0x1, 0x3c, func_1073);
    sv_set_mem(0x1, 0x1, 0x3d, func_1077);
    sv_set_mem(0x1, 0x1, 0x3e, func_1082);
    sv_set_mem(0x1, 0x1, 0x3f, func_1091);
    sv_set_mem(0x1, 0x1, 0x40, func_1101);
    sv_set_mem(0x1, 0x1, 0x41, func_1112);
    sv_set_mem(0x1, 0x1, 0x42, func_1121);
    sv_set_mem(0x1, 0x1, 0x43, func_1125);
    sv_set_mem(0x1, 0x1, 0x44, func_1130);
    sv_set_mem(0x1, 0x1, 0x45, func_784);
    sv_set_mem(0x1, 0x1, 0x46, func_789);
    sv_set_mem(0x1, 0x1, 0x47, func_798);
    sv_set_mem(0x1, 0x1, 0x48, func_813);
    sv_set_mem(0x1, 0x1, 0x49, func_901);
    sv_set_mem(0x1, 0x1, 0x4a, func_910);
    sv_set_mem(0x1, 0x1, 0x4b, func_915);
    sv_set_mem(0x1, 0x1, 0x4c, func_815);
    sv_set_mem(0x1, 0x1, 0x4d, func_921);
    sv_set_mem(0x1, 0x1, 0x4e, func_925);
    sv_set_mem(0x1, 0x1, 0x4f, func_929);
    sv_set_mem(0x1, 0x1, 0x50, func_933);
    sv_set_mem(0x1, 0x1, 0x51, func_937);
    sv_set_mem(0x1, 0x1, 0x52, func_974);
    sv_set_mem(0x1, 0x1, 0x53, func_970);
    sv_set_mem(0x1, 0x1, 0x54, func_941);
    sv_set_mem(0x1, 0x1, 0x55, func_945);
    sv_set_mem(0x1, 0x1, 0x56, func_949);
    sv_set_mem(0x1, 0x1, 0x57, func_953);
    sv_set_mem(0x1, 0x1, 0x58, func_957);
    sv_set_mem(0x1, 0x1, 0xb3, func_1145);
    sv_set_mem(0x1, 0x1, 0xb4, func_1152);
    sv_set_mem(0x1, 0x1, 0xb5, func_1157);
    sv_set_mem(0x1, 0x1, 0xb6, func_1161);
    sv_set_mem(0x1, 0x1, 0xb7, func_1167);
    sv_set_mem(0x1, 0x1, 0x8a, func_1173);
    sv_set_mem(0x1, 0x1, 0x8b, func_1194);
    sv_set_mem(0x1, 0x1, 0x8c, func_1182);
    sv_set_mem(0x1, 0x1, 0x8d, func_1189);
    sv_set_mem(0x1, 0x1, 0x8e, func_1208);
    sv_set_mem(0x1, 0x1, 0x8f, func_1199);
    sv_set_mem(0x1, 0x1, 0x90, func_1204);
    sv_set_mem(0x1, 0x1, 0x91, func_1213);
    sv_set_mem(0x1, 0x1, 0x92, func_1729);
    sv_set_mem(0x1, 0x1, 0x93, func_1735);
    sv_set_mem(0x1, 0x1, 0x94, func_1741);
    sv_set_mem(0x1, 0x1, 0x96, func_1747);
    sv_set_mem(0x1, 0x1, 0x95, func_1752);
    sv_set_mem(0x1, 0x1, 0x97, func_1758);
    sv_set_mem(0x1, 0x1, 0x98, func_1327);
    sv_set_mem(0x1, 0x1, 0x99, func_1331);
    sv_set_mem(0x1, 0x1, 0x9a, func_1335);
    sv_set_mem(0x1, 0x1, 0x9b, func_1339);
    sv_set_mem(0x1, 0x1, 0x9c, func_1343);
    sv_set_mem(0x1, 0x1, 0x9d, func_1347);
    sv_set_mem(0x1, 0x1, 0x9e, func_1351);
    sv_set_mem(0x1, 0x1, 0x9f, func_1361);
    sv_set_mem(0x1, 0x1, 0xa0, func_1366);
    sv_set_mem(0x1, 0x1, 0xa1, func_1357);
    sv_set_mem(0x1, 0x1, 0xa2, func_1370);
    sv_set_mem(0x1, 0x1, 0xa3, func_569);
    sv_set_mem(0x1, 0x1, 0xa4, func_573);
    sv_set_mem(0x1, 0x1, 0xa5, func_578);
    sv_set_mem(0x1, 0x1, 0xa6, func_1217);
    sv_set_mem(0x1, 0x1, 0xc5, func_823);
    sv_set_mem(0x1, 0x1, 0xc6, func_829);
    sv_set_mem(0x1, 0x1, 0xd0, func_1221);
    sv_set_mem(0x1, 0x1, 0xd1, func_1225);
    sv_set_mem(0x1, 0x1, 0xd2, func_1229);
    sv_set_mem(0x1, 0x1, 0xd3, func_1252);
    sv_set_mem(0x1, 0x1, 0xd4, func_1256);
    sv_set_mem(0x1, 0x1, 0xd5, func_1260);
    sv_set_mem(0x1, 0x1, 0xd6, func_1265);
    sv_set_mem(0x1, 0x1, 0xd7, func_1269);
    sv_set_mem(0x1, 0x1, 0xd8, func_1273);
    sv_set_mem(0x1, 0x1, 0xd9, func_1277);
    sv_set_mem(0x1, 0x1, 0xda, func_1012);
    sv_set_mem(0x1, 0x1, 0xdb, func_838);
    sv_set_mem(0x1, 0x1, 0xdd, func_1286);
    sv_set_mem(0x1, 0x1, 0xde, func_1290);
    sv_set_mem(0x1, 0x1, 0xb1, func_213);
    sv_set_mem(0x1, 0x1, 0xb2, func_228);
    sv_set_mem(0x1, 0x1, 0x14c, func_216);
    sv_set_mem(0x1, 0x1, 0x14f, func_2158);
    sv_set_mem(0x1, 0x1, 0xb8, func_1584);
    sv_set_mem(0x1, 0x1, 0xb9, func_1595);
    sv_set_mem(0x1, 0x1, 0xba, func_1606);
    sv_set_mem(0x1, 0x1, 0xbb, func_1617);
    sv_set_mem(0x1, 0x1, 0xbc, func_1628);
    sv_set_mem(0x1, 0x1, 0xe9, func_1639);
    sv_set_mem(0x1, 0x1, 0xea, func_1644);
    sv_set_mem(0x1, 0x1, 0xeb, func_1649);
    sv_set_mem(0x1, 0x1, 0xbd, func_1654);
    sv_set_mem(0x1, 0x1, 0xbe, func_1660);
    sv_set_mem(0x1, 0x1, 0x109, func_1667);
    sv_set_mem(0x1, 0x1, 0xdf, func_1868);
    sv_set_mem(0x1, 0x1, 0xe3, func_1872);
    sv_set_mem(0x1, 0x1, 0xe2, func_1876);
    sv_set_mem(0x1, 0x1, 0xe5, func_1880);
    sv_set_mem(0x1, 0x1, 0xe4, func_1884);
    sv_set_mem(0x1, 0x1, 0xe0, func_1888);
    sv_set_mem(0x1, 0x1, 0xc7, func_1810);
    sv_set_mem(0x1, 0x1, 0xc8, func_1802);
    sv_set_mem(0x1, 0x1, 0xc9, func_1817);
    sv_set_mem(0x1, 0x1, 0xca, func_1825);
    sv_set_mem(0x1, 0x1, 0xcb, func_1828);
    sv_set_mem(0x1, 0x1, 0x14d, func_687);
    sv_set_mem(0x1, 0x1, 0x14e, func_693);
    sv_set_mem(0x1, 0x1, 0xe6, func_1899);
    sv_set_mem(0x1, 0x1, 0xe7, func_1892);
    sv_set_mem(0x1, 0x1, 0xe8, func_1896);
    sv_set_mem(0x1, 0x1, 0xec, func_1902);
    sv_set_mem(0x1, 0x1, 0xed, func_1909);
    sv_set_mem(0x1, 0x1, 0xef, func_1917);
    sv_set_mem(0x1, 0x1, 0xf0, func_1921);
    sv_set_mem(0x1, 0x1, 0xee, func_1913);
    sv_set_mem(0x1, 0x1, 0xf1, func_125);
    sv_set_mem(0x1, 0x1, 0xf2, func_129);
    sv_set_mem(0x1, 0x1, 0xf3, func_134);
    sv_set_mem(0x1, 0x1, 0xf4, func_139);
    sv_set_mem(0x1, 0x1, 0xf5, func_144);
    sv_set_mem(0x1, 0x1, 0xf7, func_1969);
    sv_set_mem(0x1, 0x1, 0xf8, func_1234);
    sv_set_mem(0x1, 0x1, 0x10e, func_1238);
    sv_set_mem(0x1, 0x1, 0xf9, func_1294);
    sv_set_mem(0x1, 0x1, 0xfe, func_1508);
    sv_set_mem(0x1, 0x1, 0xfb, func_1514);
    sv_set_mem(0x1, 0x1, 0xfc, func_1519);
    sv_set_mem(0x1, 0x1, 0xfd, func_1524);
    sv_set_mem(0x1, 0x1, 0xff, func_1979);
    sv_set_mem(0x1, 0x1, 0x100, func_1298);
    sv_set_mem(0x1, 0x1, 0x114, func_1302);
    sv_set_mem(0x1, 0x1, 0x101, func_1973);
    sv_set_mem(0x1, 0x1, 0x10a, func_1306);
    sv_set_mem(0x1, 0x1, 0x10b, func_1310);
    sv_set_mem(0x1, 0x1, 0x10c, func_1314);
    sv_set_mem(0x1, 0x1, 0x10d, func_1320);
    if (!sys_7(0xd))
    {
        sv_set_mem(0x1, 0x1, 0x14b, func_1960);
    }
    sv_set_mem(0x1, 0x1, 0xa7, func_2105);
    sv_set_mem(0x1, 0x1, 0xa8, func_2109);
    sv_set_mem(0x1, 0x1, 0xa9, func_2113);
    sv_set_mem(0x1, 0x1, 0xaa, func_2117);
    sv_set_mem(0x1, 0x1, 0xab, func_2121);
    sv_set_mem(0x1, 0x1, 0xac, func_2125);
    sv_set_mem(0x1, 0x1, 0xad, func_2129);
    sv_set_mem(0x1, 0x1, 0xae, func_2133);
    sv_set_mem(0x1, 0x1, 0xaf, func_2138);
    sv_set_mem(0x1, 0x1, 0xb0, func_2143);
    sv_set_mem(0x1, 0x1, 0x104, func_1992);
    sv_set_mem(0x1, 0x1, 0x105, func_1997);
    sv_set_mem(0x1, 0x1, 0x106, func_2002);
    sv_set_mem(0x1, 0x1, 0x107, func_2007);
    sv_set_mem(0x1, 0x1, 0x10f, func_2011);
    sv_set_mem(0x1, 0x1, 0x128, func_2176);
    sv_set_mem(0x1, 0x1, 0x129, func_2181);
    sv_set_mem(0x1, 0x1, 0x12a, func_2187);
    sv_set_mem(0x1, 0x1, 0x12b, func_2176);
    sv_set_mem(0x1, 0x1, 0x12c, func_2181);
    sv_set_mem(0x1, 0x1, 0x12d, func_2187);
    sv_set_mem(0x1, 0x1, 0x12e, func_2176);
    sv_set_mem(0x1, 0x1, 0x12f, func_2181);
    sv_set_mem(0x1, 0x1, 0x130, func_2187);
    sv_set_mem(0x1, 0x1, 0x131, func_2176);
    sv_set_mem(0x1, 0x1, 0x132, func_2181);
    sv_set_mem(0x1, 0x1, 0x133, func_2187);
    sv_set_mem(0x1, 0x1, 0x134, func_2176);
    sv_set_mem(0x1, 0x1, 0x135, func_2181);
    sv_set_mem(0x1, 0x1, 0x136, func_2187);
    sv_set_mem(0x1, 0x1, 0x124, func_2214);
    sv_set_mem(0x1, 0x1, 0x125, func_2218);
    sv_set_mem(0x1, 0x1, 0x137, func_2151);
    sv_set_mem(0x1, 0x1, 0x138, func_2154);
    sv_set_mem(0x1, 0x1, 0x139, func_2231);
    sv_set_mem(0x1, 0x1, 0x13a, func_798);
    sv_set_mem(0x1, 0x1, 0x13d, func_789);
    sv_set_mem(0x1, 0x1, 0x13b, func_2181);
    sv_set_mem(0x1, 0x1, 0x13c, func_2176);
    sv_set_mem(0x1, 0x1, 0x13e, func_2177);
    sv_set_mem(0x1, 0x1, 0x13f, func_2182);
    sv_set_mem(0x1, 0x1, 0x140, func_2187);
    sv_set_mem(0x1, 0x1, 0x147, func_2236);
    sv_set_mem(0x1, 0x1, 0x110, func_2016);
    sv_set_mem(0x1, 0x1, 0x111, func_2021);
    sv_set_mem(0x1, 0x1, 0x112, func_2025);
    sv_set_mem(0x1, 0x1, 0x113, func_2029);
    sv_set_mem(0x1, 0x1, 0x118, func_2045);
    sv_set_mem(0x1, 0x1, 0x119, func_2050);
    sv_set_mem(0x1, 0x1, 0x11a, func_2054);
    sv_set_mem(0x1, 0x1, 0x115, func_2033);
    sv_set_mem(0x1, 0x1, 0x116, func_2037);
    sv_set_mem(0x1, 0x1, 0x117, func_2041);
    sv_set_mem(0x1, 0x1, 0x11c, func_2058);
    sv_set_mem(0x1, 0x1, 0x11d, func_2063);
    sv_set_mem(0x1, 0x1, 0x11e, func_2067);
    sv_set_mem(0x1, 0x1, 0x142, func_2071);
    sv_set_mem(0x1, 0x1, 0x143, func_2076);
    sv_set_mem(0x1, 0x1, 0x144, func_2080);
    sv_set_mem(0x1, 0x1, 0x145, func_2084);
    sv_set_mem(0x1, 0x1, 0x146, func_2088);
    sv_set_mem(0x1, 0x1, 0x148, func_2092);
    sv_set_mem(0x1, 0x1, 0x149, func_2097);
    sv_set_mem(0x1, 0x1, 0x14a, func_2101);
}

void func_115()
{
    sv_set_mem(0x1, 0x2, 0, func_679);
    sv_set_mem(0x1, 0x2, 0x1, func_733);
    sv_set_mem(0x1, 0x2, 0x2, func_734);
    sv_set_mem(0x1, 0x2, 0xa, func_531);
    sv_set_mem(0x1, 0x2, 0xb, func_532);
    sv_set_mem(0x1, 0x2, 0xc, func_533);
    sv_set_mem(0x1, 0x2, 0xd, func_534);
    sv_set_mem(0x1, 0x2, 0xe, func_535);
    sv_set_mem(0x1, 0x2, 0xf, func_536);
    sv_set_mem(0x1, 0x2, 0x10, func_988);
    sv_set_mem(0x1, 0x2, 0x16, func_537);
    sv_set_mem(0x1, 0x2, 0x17, func_538);
    sv_set_mem(0x1, 0x2, 0x18, func_539);
    sv_set_mem(0x1, 0x2, 0x19, func_989);
    sv_set_mem(0x1, 0x2, 0x3, func_735);
    sv_set_mem(0x1, 0x2, 0x4, func_736);
    sv_set_mem(0x1, 0x2, 0x5, func_737);
    sv_set_mem(0x1, 0x2, 0x6, func_738);
    sv_set_mem(0x1, 0x2, 0x7, func_739);
    sv_set_mem(0x1, 0x2, 0x8, func_740);
    sv_set_mem(0x1, 0x2, 0x9, func_741);
    sv_set_mem(0x1, 0x2, 0x11, func_611);
    sv_set_mem(0x1, 0x2, 0x12, func_612);
    sv_set_mem(0x1, 0x2, 0x13, func_613);
    sv_set_mem(0x1, 0x2, 0x14, func_614);
    sv_set_mem(0x1, 0x2, 0x15, func_615);
    sv_set_mem(0x1, 0x2, 0x1b, func_429);
    sv_set_mem(0x1, 0x2, 0x1c, func_430);
    sv_set_mem(0x1, 0x2, 0x1d, func_431);
    sv_set_mem(0x1, 0x2, 0x1e, func_432);
    sv_set_mem(0x1, 0x2, 0x1f, func_380);
    sv_set_mem(0x1, 0x2, 0x20, func_381);
    sv_set_mem(0x1, 0x2, 0x21, func_382);
    sv_set_mem(0x1, 0x2, 0x22, func_384);
    sv_set_mem(0x1, 0x2, 0x23, func_352);
    sv_set_mem(0x1, 0x2, 0x24, func_356);
    sv_set_mem(0x1, 0x2, 0x59, func_433);
    sv_set_mem(0x1, 0x2, 0x5a, func_434);
    sv_set_mem(0x1, 0x2, 0x5b, func_435);
    sv_set_mem(0x1, 0x2, 0x5c, func_436);
    sv_set_mem(0x1, 0x2, 0x5d, func_437);
    sv_set_mem(0x1, 0x2, 0x5e, func_438);
    sv_set_mem(0x1, 0x2, 0x5f, func_844);
    sv_set_mem(0x1, 0x2, 0x60, func_849);
    sv_set_mem(0x1, 0x2, 0x61, func_853);
    sv_set_mem(0x1, 0x2, 0x62, func_857);
    sv_set_mem(0x1, 0x2, 0x63, func_836);
    sv_set_mem(0x1, 0x2, 0x64, func_1700);
    sv_set_mem(0x1, 0x2, 0x65, func_1704);
    sv_set_mem(0x1, 0x2, 0x66, func_1709);
    sv_set_mem(0x1, 0x2, 0x67, func_1714);
    sv_set_mem(0x1, 0x2, 0x68, func_1718);
    sv_set_mem(0x1, 0x2, 0x71, func_680);
    sv_set_mem(0x1, 0x2, 0x69, func_639);
    sv_set_mem(0x1, 0x2, 0x6a, func_640);
    sv_set_mem(0x1, 0x2, 0x6b, func_646);
    sv_set_mem(0x1, 0x2, 0x6c, func_652);
    sv_set_mem(0x1, 0x2, 0x6d, func_657);
    sv_set_mem(0x1, 0x2, 0x6e, func_661);
    sv_set_mem(0x1, 0x2, 0x6f, func_665);
    sv_set_mem(0x1, 0x2, 0x70, func_669);
    sv_set_mem(0x1, 0x2, 0x72, func_185);
    sv_set_mem(0x1, 0x2, 0x73, func_186);
    sv_set_mem(0x1, 0x2, 0x74, func_187);
    sv_set_mem(0x1, 0x2, 0x75, func_188);
    sv_set_mem(0x1, 0x2, 0x76, func_189);
    sv_set_mem(0x1, 0x2, 0x77, func_190);
    sv_set_mem(0x1, 0x2, 0x78, func_191);
    sv_set_mem(0x1, 0x2, 0x79, func_192);
    sv_set_mem(0x1, 0x2, 0x7a, func_193);
    sv_set_mem(0x1, 0x2, 0x108, func_194);
    sv_set_mem(0x1, 0x2, 0x7b, func_1026);
    sv_set_mem(0x1, 0x2, 0x7c, func_1026);
    sv_set_mem(0x1, 0x2, 0x7d, func_195);
    sv_set_mem(0x1, 0x2, 0x7e, func_541);
    sv_set_mem(0x1, 0x2, 0x7f, func_542);
    sv_set_mem(0x1, 0x2, 0x80, func_543);
    sv_set_mem(0x1, 0x2, 0x81, func_544);
    sv_set_mem(0x1, 0x2, 0x82, func_545);
    sv_set_mem(0x1, 0x2, 0x83, func_1933);
    sv_set_mem(0x1, 0x2, 0x84, func_1937);
    sv_set_mem(0x1, 0x2, 0x85, func_1942);
    sv_set_mem(0x1, 0x2, 0x86, func_1946);
    sv_set_mem(0x1, 0x2, 0x87, func_1950);
    sv_set_mem(0x1, 0x2, 0x88, func_1954);
    sv_set_mem(0x1, 0x2, 0x89, func_1958);
    sv_set_mem(0x1, 0x2, 0x25, func_320);
    sv_set_mem(0x1, 0x2, 0x26, func_339);
    sv_set_mem(0x1, 0x2, 0x27, func_321);
    sv_set_mem(0x1, 0x2, 0x28, func_322);
    sv_set_mem(0x1, 0x2, 0x29, func_323);
    sv_set_mem(0x1, 0x2, 0x2a, func_324);
    sv_set_mem(0x1, 0x2, 0x2b, func_325);
    sv_set_mem(0x1, 0x2, 0x2c, func_326);
    sv_set_mem(0x1, 0x2, 0x2d, func_327);
    sv_set_mem(0x1, 0x2, 0x31, func_328);
    sv_set_mem(0x1, 0x2, 0x32, func_329);
    sv_set_mem(0x1, 0x2, 0x33, func_330);
    sv_set_mem(0x1, 0x2, 0x2e, func_331);
    sv_set_mem(0x1, 0x2, 0x2f, func_332);
    sv_set_mem(0x1, 0x2, 0x30, func_333);
    sv_set_mem(0x1, 0x2, 0x34, func_334);
    sv_set_mem(0x1, 0x2, 0x35, func_1036);
    sv_set_mem(0x1, 0x2, 0x36, func_1043);
    sv_set_mem(0x1, 0x2, 0x37, func_1049);
    sv_set_mem(0x1, 0x2, 0x38, func_1053);
    sv_set_mem(0x1, 0x2, 0x39, func_1058);
    sv_set_mem(0x1, 0x2, 0x3a, func_1065);
    sv_set_mem(0x1, 0x2, 0x3b, func_1070);
    sv_set_mem(0x1, 0x2, 0x3c, func_1075);
    sv_set_mem(0x1, 0x2, 0x3d, func_1079);
    sv_set_mem(0x1, 0x2, 0x3e, func_1086);
    sv_set_mem(0x1, 0x2, 0x3f, func_1098);
    sv_set_mem(0x1, 0x2, 0x40, func_1109);
    sv_set_mem(0x1, 0x2, 0x41, func_1118);
    sv_set_mem(0x1, 0x2, 0x42, func_1123);
    sv_set_mem(0x1, 0x2, 0x43, func_1127);
    sv_set_mem(0x1, 0x2, 0x44, func_1134);
    sv_set_mem(0x1, 0x2, 0x45, func_787);
    sv_set_mem(0x1, 0x2, 0x46, func_792);
    sv_set_mem(0x1, 0x2, 0x47, func_818);
    sv_set_mem(0x1, 0x2, 0x48, func_819);
    sv_set_mem(0x1, 0x2, 0x49, func_903);
    sv_set_mem(0x1, 0x2, 0x4a, func_912);
    sv_set_mem(0x1, 0x2, 0x4b, func_917);
    sv_set_mem(0x1, 0x2, 0x4c, func_821);
    sv_set_mem(0x1, 0x2, 0x4d, func_923);
    sv_set_mem(0x1, 0x2, 0x4e, func_927);
    sv_set_mem(0x1, 0x2, 0x4f, func_931);
    sv_set_mem(0x1, 0x2, 0x50, func_935);
    sv_set_mem(0x1, 0x2, 0x51, func_939);
    sv_set_mem(0x1, 0x2, 0x52, func_976);
    sv_set_mem(0x1, 0x2, 0x53, func_972);
    sv_set_mem(0x1, 0x2, 0x54, func_943);
    sv_set_mem(0x1, 0x2, 0x55, func_947);
    sv_set_mem(0x1, 0x2, 0x56, func_951);
    sv_set_mem(0x1, 0x2, 0x57, func_955);
    sv_set_mem(0x1, 0x2, 0x58, func_959);
    sv_set_mem(0x1, 0x2, 0xb3, func_1147);
    sv_set_mem(0x1, 0x2, 0xb4, func_1154);
    sv_set_mem(0x1, 0x2, 0xb5, func_1159);
    sv_set_mem(0x1, 0x2, 0xb6, func_1163);
    sv_set_mem(0x1, 0x2, 0xb7, func_1169);
    sv_set_mem(0x1, 0x2, 0x8a, func_1175);
    sv_set_mem(0x1, 0x2, 0x8b, func_1196);
    sv_set_mem(0x1, 0x2, 0x8c, func_1187);
    sv_set_mem(0x1, 0x2, 0x8d, func_1192);
    sv_set_mem(0x1, 0x2, 0x8e, func_1210);
    sv_set_mem(0x1, 0x2, 0x8f, func_1201);
    sv_set_mem(0x1, 0x2, 0x90, func_1206);
    sv_set_mem(0x1, 0x2, 0x91, func_1215);
    sv_set_mem(0x1, 0x2, 0x92, func_1732);
    sv_set_mem(0x1, 0x2, 0x93, func_1737);
    sv_set_mem(0x1, 0x2, 0x94, func_1744);
    sv_set_mem(0x1, 0x2, 0x96, func_1750);
    sv_set_mem(0x1, 0x2, 0x95, func_1755);
    sv_set_mem(0x1, 0x2, 0x97, func_1760);
    sv_set_mem(0x1, 0x2, 0x98, func_1329);
    sv_set_mem(0x1, 0x2, 0x99, func_1333);
    sv_set_mem(0x1, 0x2, 0x9a, func_1337);
    sv_set_mem(0x1, 0x2, 0x9b, func_1341);
    sv_set_mem(0x1, 0x2, 0x9c, func_1345);
    sv_set_mem(0x1, 0x2, 0x9d, func_1349);
    sv_set_mem(0x1, 0x2, 0x9e, func_1353);
    sv_set_mem(0x1, 0x2, 0x9f, func_1364);
    sv_set_mem(0x1, 0x2, 0xa0, func_1368);
    sv_set_mem(0x1, 0x2, 0xa1, func_1359);
    sv_set_mem(0x1, 0x2, 0xa2, func_1372);
    sv_set_mem(0x1, 0x2, 0xa3, func_571);
    sv_set_mem(0x1, 0x2, 0xa4, func_576);
    sv_set_mem(0x1, 0x2, 0xa5, func_580);
    sv_set_mem(0x1, 0x2, 0xa6, func_1219);
    sv_set_mem(0x1, 0x2, 0xc5, func_827);
    sv_set_mem(0x1, 0x2, 0xc6, func_832);
    sv_set_mem(0x1, 0x2, 0xd0, func_1223);
    sv_set_mem(0x1, 0x2, 0xd1, func_1227);
    sv_set_mem(0x1, 0x2, 0xd2, func_1232);
    sv_set_mem(0x1, 0x2, 0xd3, func_1254);
    sv_set_mem(0x1, 0x2, 0xd4, func_1258);
    sv_set_mem(0x1, 0x2, 0xd5, func_1263);
    sv_set_mem(0x1, 0x2, 0xd6, func_1267);
    sv_set_mem(0x1, 0x2, 0xd7, func_1271);
    sv_set_mem(0x1, 0x2, 0xd8, func_1275);
    sv_set_mem(0x1, 0x2, 0xd9, func_1280);
    sv_set_mem(0x1, 0x2, 0xdb, func_840);
    sv_set_mem(0x1, 0x2, 0xdd, func_1288);
    sv_set_mem(0x1, 0x2, 0xde, func_1292);
    sv_set_mem(0x1, 0x2, 0xb1, func_218);
    sv_set_mem(0x1, 0x2, 0xb2, func_233);
    sv_set_mem(0x1, 0x2, 0x14c, func_219);
    sv_set_mem(0x1, 0x2, 0x14f, func_2160);
    sv_set_mem(0x1, 0x2, 0xb8, func_1586);
    sv_set_mem(0x1, 0x2, 0xb9, func_1597);
    sv_set_mem(0x1, 0x2, 0xba, func_1608);
    sv_set_mem(0x1, 0x2, 0xbb, func_1619);
    sv_set_mem(0x1, 0x2, 0xbc, func_1630);
    sv_set_mem(0x1, 0x2, 0xe9, func_1642);
    sv_set_mem(0x1, 0x2, 0xea, func_1647);
    sv_set_mem(0x1, 0x2, 0xeb, func_1652);
    sv_set_mem(0x1, 0x2, 0xbd, func_1656);
    sv_set_mem(0x1, 0x2, 0xbe, func_1662);
    sv_set_mem(0x1, 0x2, 0x109, func_1669);
    sv_set_mem(0x1, 0x2, 0xdf, func_1870);
    sv_set_mem(0x1, 0x2, 0xe3, func_1874);
    sv_set_mem(0x1, 0x2, 0xe2, func_1878);
    sv_set_mem(0x1, 0x2, 0xe5, func_1882);
    sv_set_mem(0x1, 0x2, 0xe4, func_1886);
    sv_set_mem(0x1, 0x2, 0xe0, func_1890);
    sv_set_mem(0x1, 0x2, 0xc7, func_1812);
    sv_set_mem(0x1, 0x2, 0xc8, func_1804);
    sv_set_mem(0x1, 0x2, 0xc9, func_1820);
    sv_set_mem(0x1, 0x2, 0xca, func_1826);
    sv_set_mem(0x1, 0x2, 0xcb, func_1830);
    sv_set_mem(0x1, 0x2, 0x14d, func_691);
    sv_set_mem(0x1, 0x2, 0x14e, func_691);
    sv_set_mem(0x1, 0x2, 0xec, func_1904);
    sv_set_mem(0x1, 0x2, 0xed, func_1911);
    sv_set_mem(0x1, 0x2, 0xef, func_1919);
    sv_set_mem(0x1, 0x2, 0xf0, func_1923);
    sv_set_mem(0x1, 0x2, 0xee, func_1915);
    sv_set_mem(0x1, 0x2, 0xf1, func_127);
    sv_set_mem(0x1, 0x2, 0xf2, func_131);
    sv_set_mem(0x1, 0x2, 0xf3, func_137);
    sv_set_mem(0x1, 0x2, 0xf4, func_141);
    sv_set_mem(0x1, 0x2, 0xf5, func_146);
    sv_set_mem(0x1, 0x2, 0xf7, func_1971);
    sv_set_mem(0x1, 0x2, 0xf8, func_1236);
    sv_set_mem(0x1, 0x2, 0x10e, func_1240);
    sv_set_mem(0x1, 0x2, 0xf9, func_1296);
    sv_set_mem(0x1, 0x2, 0xfe, func_1512);
    sv_set_mem(0x1, 0x2, 0xfb, func_1517);
    sv_set_mem(0x1, 0x2, 0xfc, func_1522);
    sv_set_mem(0x1, 0x2, 0xfd, func_1526);
    sv_set_mem(0x1, 0x2, 0xff, func_1981);
    sv_set_mem(0x1, 0x2, 0x100, func_1300);
    sv_set_mem(0x1, 0x2, 0x114, func_1304);
    sv_set_mem(0x1, 0x2, 0x101, func_1976);
    sv_set_mem(0x1, 0x2, 0x10a, func_1308);
    sv_set_mem(0x1, 0x2, 0x10b, func_1312);
    sv_set_mem(0x1, 0x2, 0x10c, func_1316);
    sv_set_mem(0x1, 0x2, 0x10d, func_1323);
    if (!sys_7(0xd))
    {
        sv_set_mem(0x1, 0x2, 0x14b, func_1962);
    }
    sv_set_mem(0x1, 0x2, 0xa7, func_2107);
    sv_set_mem(0x1, 0x2, 0xa8, func_2111);
    sv_set_mem(0x1, 0x2, 0xa9, func_2115);
    sv_set_mem(0x1, 0x2, 0xaa, func_2119);
    sv_set_mem(0x1, 0x2, 0xab, func_2123);
    sv_set_mem(0x1, 0x2, 0xac, func_2127);
    sv_set_mem(0x1, 0x2, 0xad, func_2131);
    sv_set_mem(0x1, 0x2, 0xae, func_2135);
    sv_set_mem(0x1, 0x2, 0xaf, func_2140);
    sv_set_mem(0x1, 0x2, 0xb0, func_2145);
    sv_set_mem(0x1, 0x2, 0x104, func_1995);
    sv_set_mem(0x1, 0x2, 0x105, func_2000);
    sv_set_mem(0x1, 0x2, 0x106, func_2004);
    sv_set_mem(0x1, 0x2, 0x107, func_2009);
    sv_set_mem(0x1, 0x2, 0x10f, func_2013);
    sv_set_mem(0x1, 0x2, 0x128, func_2179);
    sv_set_mem(0x1, 0x2, 0x129, func_2184);
    sv_set_mem(0x1, 0x2, 0x12a, func_2189);
    sv_set_mem(0x1, 0x2, 0x12b, func_2179);
    sv_set_mem(0x1, 0x2, 0x12c, func_2184);
    sv_set_mem(0x1, 0x2, 0x12d, func_2189);
    sv_set_mem(0x1, 0x2, 0x12e, func_2179);
    sv_set_mem(0x1, 0x2, 0x12f, func_2184);
    sv_set_mem(0x1, 0x2, 0x130, func_2189);
    sv_set_mem(0x1, 0x2, 0x131, func_2179);
    sv_set_mem(0x1, 0x2, 0x132, func_2184);
    sv_set_mem(0x1, 0x2, 0x133, func_2189);
    sv_set_mem(0x1, 0x2, 0x134, func_2179);
    sv_set_mem(0x1, 0x2, 0x135, func_2184);
    sv_set_mem(0x1, 0x2, 0x136, func_2189);
    sv_set_mem(0x1, 0x2, 0x124, func_2216);
    sv_set_mem(0x1, 0x2, 0x125, func_2220);
    sv_set_mem(0x1, 0x2, 0x137, func_2152);
    sv_set_mem(0x1, 0x2, 0x138, func_2156);
    sv_set_mem(0x1, 0x2, 0x139, func_2233);
    sv_set_mem(0x1, 0x2, 0x13a, func_818);
    sv_set_mem(0x1, 0x2, 0x13d, func_792);
    sv_set_mem(0x1, 0x2, 0x13b, func_2184);
    sv_set_mem(0x1, 0x2, 0x13c, func_2179);
    sv_set_mem(0x1, 0x2, 0x13e, func_2179);
    sv_set_mem(0x1, 0x2, 0x13f, func_2185);
    sv_set_mem(0x1, 0x2, 0x140, func_2189);
    sv_set_mem(0x1, 0x2, 0x147, func_2238);
    sv_set_mem(0x1, 0x2, 0x110, func_2018);
    sv_set_mem(0x1, 0x2, 0x111, func_2023);
    sv_set_mem(0x1, 0x2, 0x112, func_2027);
    sv_set_mem(0x1, 0x2, 0x113, func_2031);
    sv_set_mem(0x1, 0x2, 0x118, func_2047);
    sv_set_mem(0x1, 0x2, 0x119, func_2052);
    sv_set_mem(0x1, 0x2, 0x11a, func_2056);
    sv_set_mem(0x1, 0x2, 0x115, func_2035);
    sv_set_mem(0x1, 0x2, 0x116, func_2039);
    sv_set_mem(0x1, 0x2, 0x117, func_2043);
    sv_set_mem(0x1, 0x2, 0x11c, func_2060);
    sv_set_mem(0x1, 0x2, 0x11d, func_2065);
    sv_set_mem(0x1, 0x2, 0x11e, func_2069);
    sv_set_mem(0x1, 0x2, 0x142, func_2073);
    sv_set_mem(0x1, 0x2, 0x143, func_2078);
    sv_set_mem(0x1, 0x2, 0x144, func_2082);
    sv_set_mem(0x1, 0x2, 0x145, func_2086);
    sv_set_mem(0x1, 0x2, 0x146, func_2090);
    sv_set_mem(0x1, 0x2, 0x148, func_2094);
    sv_set_mem(0x1, 0x2, 0x149, func_2099);
    sv_set_mem(0x1, 0x2, 0x14a, func_2103);
}

void func_116()
{
    sv_set_mem(0x1, 0x3, 0xd, func_585);
    sv_set_mem(0x1, 0x3, 0x1f, func_385);
    sv_set_mem(0x1, 0x3, 0x20, func_385);
    sv_set_mem(0x1, 0x3, 0x21, func_385);
    sv_set_mem(0x1, 0x3, 0x22, func_385);
    sv_set_mem(0x1, 0x3, 0x1b, func_447);
    sv_set_mem(0x1, 0x3, 0x1c, func_439);
    sv_set_mem(0x1, 0x3, 0x1e, func_459);
    sv_set_mem(0x1, 0x3, 0x59, func_468);
    sv_set_mem(0x1, 0x3, 0x6c, func_1721);
    sv_set_mem(0x1, 0x3, 0x6d, func_1721);
    sv_set_mem(0x1, 0x3, 0x6e, func_1721);
    sv_set_mem(0x1, 0x3, 0x6f, func_1721);
    sv_set_mem(0x1, 0x3, 0x70, func_1721);
    sv_set_mem(0x1, 0x3, 0x2b, func_344);
    sv_set_mem(0x1, 0x3, 0x2c, func_344);
    sv_set_mem(0x1, 0x3, 0x2d, func_344);
    sv_set_mem(0x1, 0x3, 0x31, func_344);
    sv_set_mem(0x1, 0x3, 0x32, func_344);
    sv_set_mem(0x1, 0x3, 0x33, func_344);
    sv_set_mem(0x1, 0x3, 0x2e, func_344);
    sv_set_mem(0x1, 0x3, 0x2f, func_344);
    sv_set_mem(0x1, 0x3, 0x30, func_344);
    sv_set_mem(0x1, 0x3, 0x72, func_203);
    sv_set_mem(0x1, 0x3, 0x73, func_196);
    sv_set_mem(0x1, 0x3, 0x74, func_196);
    sv_set_mem(0x1, 0x3, 0x75, func_196);
    sv_set_mem(0x1, 0x3, 0x76, func_196);
    sv_set_mem(0x1, 0x3, 0x77, func_196);
    sv_set_mem(0x1, 0x3, 0x78, func_196);
    sv_set_mem(0x1, 0x3, 0x79, func_196);
    sv_set_mem(0x1, 0x3, 0x7a, func_196);
    sv_set_mem(0x1, 0x3, 0x108, func_207);
    sv_set_mem(0x1, 0x3, 0x7b, func_1027);
    sv_set_mem(0x1, 0x3, 0x7c, func_1027);
    sv_set_mem(0x1, 0x3, 0x45, func_858);
    sv_set_mem(0x1, 0x3, 0x46, func_858);
    sv_set_mem(0x1, 0x3, 0x47, func_858);
    sv_set_mem(0x1, 0x3, 0x48, func_858);
    sv_set_mem(0x1, 0x3, 0x49, func_906);
    sv_set_mem(0x1, 0x3, 0x4a, func_909);
    sv_set_mem(0x1, 0x3, 0x4b, func_914);
    sv_set_mem(0x1, 0x3, 0x4c, func_894);
    sv_set_mem(0x1, 0x3, 0x4d, func_968);
    sv_set_mem(0x1, 0x3, 0x4e, func_990);
    sv_set_mem(0x1, 0x3, 0x4f, func_968);
    sv_set_mem(0x1, 0x3, 0x57, func_991);
    sv_set_mem(0x1, 0x3, 0x57, func_991);
    sv_set_mem(0x1, 0x3, 0x58, func_994);
    sv_set_mem(0x1, 0x3, 0xb1, func_220);
    sv_set_mem(0x1, 0x3, 0x10, func_581);
    sv_set_mem(0x1, 0x3, 0x19, func_586);
    sv_set_mem(0x1, 0x3, 0x5d, func_858);
    sv_set_mem(0x1, 0x3, 0x60, func_858);
    sv_set_mem(0x1, 0x3, 0x61, func_858);
    sv_set_mem(0x1, 0x3, 0x63, func_858);
    sv_set_mem(0x1, 0x3, 0xa, func_584);
    sv_set_mem(0x1, 0x3, 0xe, func_581);
    sv_set_mem(0x1, 0x3, 0xf, func_581);
    sv_set_mem(0x1, 0x3, 0x16, func_586);
    sv_set_mem(0x1, 0x3, 0x17, func_586);
    sv_set_mem(0x1, 0x3, 0x18, func_586);
    sv_set_mem(0x1, 0x3, 0x1a, func_586);
    sv_set_mem(0x1, 0x3, 0xb2, func_234);
    sv_set_mem(0x1, 0x3, 0x11, func_622);
    sv_set_mem(0x1, 0x3, 0x12, func_622);
    sv_set_mem(0x1, 0x3, 0x13, func_626);
    sv_set_mem(0x1, 0x3, 0x14, func_626);
    sv_set_mem(0x1, 0x3, 0x69, func_1721);
    sv_set_mem(0x1, 0x3, 0x6a, func_1721);
    sv_set_mem(0x1, 0x3, 0x14f, func_2161);
    sv_set_mem(0x1, 0x3, 0x1, func_765);
    sv_set_mem(0x1, 0x3, 0x2, func_777);
    sv_set_mem(0x1, 0x3, 0x3, func_743);
    sv_set_mem(0x1, 0x3, 0x4, func_750);
    sv_set_mem(0x1, 0x3, 0x5, func_753);
    sv_set_mem(0x1, 0x3, 0x6, func_756);
    sv_set_mem(0x1, 0x3, 0x7, func_756);
    sv_set_mem(0x1, 0x3, 0x8, func_759);
    sv_set_mem(0x1, 0x3, 0x9, func_753);
    sv_set_mem(0x1, 0x3, 0x6b, func_1721);
    sv_set_mem(0x1, 0x3, 0xb3, func_1148);
    sv_set_mem(0x1, 0x3, 0xb7, func_1170);
    sv_set_mem(0x1, 0x3, 0x36, func_1038);
    sv_set_mem(0x1, 0x3, 0x38, func_1038);
    sv_set_mem(0x1, 0x3, 0x3a, func_1060);
    sv_set_mem(0x1, 0x3, 0x3b, func_1060);
    sv_set_mem(0x1, 0x3, 0x3c, func_1072);
    sv_set_mem(0x1, 0x3, 0x3e, func_1081);
    sv_set_mem(0x1, 0x3, 0x3f, func_1089);
    sv_set_mem(0x1, 0x3, 0x40, func_1100);
    sv_set_mem(0x1, 0x3, 0x41, func_1111);
    sv_set_mem(0x1, 0x3, 0x42, func_1120);
    sv_set_mem(0x1, 0x3, 0x44, func_1129);
    sv_set_mem(0x1, 0x3, 0xb8, func_1587);
    sv_set_mem(0x1, 0x3, 0xb9, func_1598);
    sv_set_mem(0x1, 0x3, 0xba, func_1609);
    sv_set_mem(0x1, 0x3, 0xbb, func_1620);
    sv_set_mem(0x1, 0x3, 0xbc, func_1631);
    sv_set_mem(0x1, 0x3, 0xbd, func_1657);
    sv_set_mem(0x1, 0x3, 0xbe, func_1663);
    sv_set_mem(0x1, 0x3, 0xec, func_1089);
    sv_set_mem(0x1, 0x3, 0xee, func_1089);
    sv_set_mem(0x1, 0x3, 0x8b, func_999);
    sv_set_mem(0x1, 0x3, 0x8e, func_999);
    sv_set_mem(0x1, 0x3, 0x8f, func_999);
    sv_set_mem(0x1, 0x3, 0x90, func_999);
    sv_set_mem(0x1, 0x3, 0x96, func_1761);
    sv_set_mem(0x1, 0x3, 0x95, func_1761);
    sv_set_mem(0x1, 0x3, 0x98, func_1537);
    sv_set_mem(0x1, 0x3, 0x99, func_1537);
    sv_set_mem(0x1, 0x3, 0x9a, func_1537);
    sv_set_mem(0x1, 0x3, 0x9b, func_1537);
    sv_set_mem(0x1, 0x3, 0x9c, func_1537);
    sv_set_mem(0x1, 0x3, 0x9d, func_1537);
    sv_set_mem(0x1, 0x3, 0x9e, func_1537);
    sv_set_mem(0x1, 0x3, 0x9f, func_1537);
    sv_set_mem(0x1, 0x3, 0xa0, func_1537);
    sv_set_mem(0x1, 0x3, 0xa1, func_1537);
    sv_set_mem(0x1, 0x3, 0xa2, func_1537);
    sv_set_mem(0x1, 0x3, 0xd3, func_1003);
    sv_set_mem(0x1, 0x3, 0xd4, func_1003);
    sv_set_mem(0x1, 0x3, 0xd5, func_1003);
    sv_set_mem(0x1, 0x3, 0xd6, func_1003);
    sv_set_mem(0x1, 0x3, 0xd7, func_1003);
    sv_set_mem(0x1, 0x3, 0xd8, func_1003);
    sv_set_mem(0x1, 0x3, 0xd9, func_1003);
    sv_set_mem(0x1, 0x3, 0xda, func_1011);
    sv_set_mem(0x1, 0x3, 0xdb, func_918);
    sv_set_mem(0x1, 0x3, 0xbf, func_1683);
    sv_set_mem(0x1, 0x3, 0xc0, func_1683);
    sv_set_mem(0x1, 0x3, 0xc1, func_1690);
    sv_set_mem(0x1, 0x3, 0x64, func_1721);
    sv_set_mem(0x1, 0x3, 0x65, func_1721);
    sv_set_mem(0x1, 0x3, 0x66, func_1721);
    sv_set_mem(0x1, 0x3, 0x67, func_1721);
    sv_set_mem(0x1, 0x3, 0x68, func_1721);
    sv_set_mem(0x1, 0x3, 0x71, func_677);
    sv_set_mem(0x1, 0x3, 0xc2, func_1770);
    sv_set_mem(0x1, 0x3, 0xc3, func_1780);
    sv_set_mem(0x1, 0x3, 0xc4, func_1792);
    sv_set_mem(0x1, 0x3, 0xc8, func_1805);
    sv_set_mem(0x1, 0x3, 0xc7, func_1813);
    sv_set_mem(0x1, 0x3, 0xc9, func_1821);
    sv_set_mem(0x1, 0x3, 0xfa, func_1835);
    sv_set_mem(0x1, 0x3, 0xcc, func_1841);
    sv_set_mem(0x1, 0x3, 0xcd, func_1847);
    sv_set_mem(0x1, 0x3, 0xce, func_1853);
    sv_set_mem(0x1, 0x3, 0xcf, func_1859);
    sv_set_mem(0x1, 0x3, 0x141, func_1865);
    sv_set_mem(0x1, 0x3, 0xff, func_1978);
    sv_set_mem(0x1, 0x3, 0x10e, func_1241);
    sv_set_mem(0x1, 0x3, 0x10c, func_1317);
    sv_set_mem(0x1, 0x3, 0x139, func_858);
    sv_set_mem(0x1, 0x3, 0x13a, func_858);
    sv_set_mem(0x1, 0x3, 0x13d, func_858);
    sv_set_mem(0x1, 0x3, 0x110, func_2019);
    sv_set_mem(0x1, 0x3, 0x118, func_2048);
    sv_set_mem(0x1, 0x3, 0x11c, func_2061);
    sv_set_mem(0x1, 0x3, 0x142, func_2074);
    sv_set_mem(0x1, 0x3, 0x148, func_2095);
}

void func_117()
{
    sv_set_mem(0x1, 0x4, 0x1, func_767);
    sv_set_mem(0x1, 0x4, 0x34, func_340);
    sv_set_mem(0x1, 0x4, 0x72, func_205);
    sv_set_mem(0x1, 0x4, 0x73, func_198);
    sv_set_mem(0x1, 0x4, 0x74, func_198);
    sv_set_mem(0x1, 0x4, 0x75, func_198);
    sv_set_mem(0x1, 0x4, 0x76, func_198);
    sv_set_mem(0x1, 0x4, 0x77, func_198);
    sv_set_mem(0x1, 0x4, 0x78, func_198);
    sv_set_mem(0x1, 0x4, 0x79, func_198);
    sv_set_mem(0x1, 0x4, 0x7a, func_198);
    sv_set_mem(0x1, 0x4, 0x108, func_208);
    sv_set_mem(0x1, 0x4, 0x7b, func_1029);
    sv_set_mem(0x1, 0x4, 0x7c, func_1029);
    sv_set_mem(0x1, 0x4, 0x45, func_859);
    sv_set_mem(0x1, 0x4, 0x46, func_859);
    sv_set_mem(0x1, 0x4, 0x47, func_859);
    sv_set_mem(0x1, 0x4, 0x48, func_859);
    sv_set_mem(0x1, 0x4, 0x49, func_907);
    sv_set_mem(0x1, 0x4, 0x4a, func_907);
    sv_set_mem(0x1, 0x4, 0x4b, func_907);
    sv_set_mem(0x1, 0x4, 0x4c, func_898);
    sv_set_mem(0x1, 0x4, 0xb1, func_221);
    sv_set_mem(0x1, 0x4, 0x58, func_995);
    sv_set_mem(0x1, 0x4, 0x10, func_582);
    sv_set_mem(0x1, 0x4, 0x19, func_590);
    sv_set_mem(0x1, 0x4, 0x5d, func_859);
    sv_set_mem(0x1, 0x4, 0x60, func_859);
    sv_set_mem(0x1, 0x4, 0x61, func_859);
    sv_set_mem(0x1, 0x4, 0x63, func_859);
    sv_set_mem(0x1, 0x4, 0xe, func_582);
    sv_set_mem(0x1, 0x4, 0xf, func_582);
    sv_set_mem(0x1, 0x4, 0x16, func_590);
    sv_set_mem(0x1, 0x4, 0x17, func_590);
    sv_set_mem(0x1, 0x4, 0x18, func_590);
    sv_set_mem(0x1, 0x4, 0x1a, func_590);
    sv_set_mem(0x1, 0x4, 0xb2, func_241);
    sv_set_mem(0x1, 0x4, 0x11, func_623);
    sv_set_mem(0x1, 0x4, 0x12, func_623);
    sv_set_mem(0x1, 0x4, 0x13, func_627);
    sv_set_mem(0x1, 0x4, 0x14, func_627);
    sv_set_mem(0x1, 0x4, 0x2, func_778);
    sv_set_mem(0x1, 0x4, 0x3, func_744);
    sv_set_mem(0x1, 0x4, 0x4, func_751);
    sv_set_mem(0x1, 0x4, 0x5, func_754);
    sv_set_mem(0x1, 0x4, 0x6, func_757);
    sv_set_mem(0x1, 0x4, 0x7, func_757);
    sv_set_mem(0x1, 0x4, 0x8, func_760);
    sv_set_mem(0x1, 0x4, 0x9, func_754);
    sv_set_mem(0x1, 0x4, 0x1b, func_449);
    sv_set_mem(0x1, 0x4, 0x1c, func_441);
    sv_set_mem(0x1, 0x4, 0x1e, func_461);
    sv_set_mem(0x1, 0x4, 0x1d, func_457);
    sv_set_mem(0x1, 0x4, 0xb7, func_1171);
    sv_set_mem(0x1, 0x4, 0x3f, func_1093);
    sv_set_mem(0x1, 0x4, 0x40, func_1102);
    sv_set_mem(0x1, 0x4, 0x41, func_1115);
    sv_set_mem(0x1, 0x4, 0xb8, func_1589);
    sv_set_mem(0x1, 0x4, 0xb9, func_1600);
    sv_set_mem(0x1, 0x4, 0xba, func_1611);
    sv_set_mem(0x1, 0x4, 0xbb, func_1622);
    sv_set_mem(0x1, 0x4, 0xbc, func_1633);
    sv_set_mem(0x1, 0x4, 0xec, func_1907);
    sv_set_mem(0x1, 0x4, 0xee, func_1093);
    sv_set_mem(0x1, 0x4, 0xbe, func_1664);
    sv_set_mem(0x1, 0x4, 0x8b, func_1000);
    sv_set_mem(0x1, 0x4, 0x8e, func_1000);
    sv_set_mem(0x1, 0x4, 0x8f, func_1000);
    sv_set_mem(0x1, 0x4, 0x90, func_1000);
    sv_set_mem(0x1, 0x4, 0x98, func_1540);
    sv_set_mem(0x1, 0x4, 0x99, func_1540);
    sv_set_mem(0x1, 0x4, 0x9a, func_1540);
    sv_set_mem(0x1, 0x4, 0x9b, func_1540);
    sv_set_mem(0x1, 0x4, 0x9c, func_1540);
    sv_set_mem(0x1, 0x4, 0x9d, func_1540);
    sv_set_mem(0x1, 0x4, 0x9e, func_1540);
    sv_set_mem(0x1, 0x4, 0x9f, func_1540);
    sv_set_mem(0x1, 0x4, 0xa0, func_1540);
    sv_set_mem(0x1, 0x4, 0xa1, func_1540);
    sv_set_mem(0x1, 0x4, 0xa2, func_1540);
    sv_set_mem(0x1, 0x4, 0xd3, func_1004);
    sv_set_mem(0x1, 0x4, 0xd4, func_1004);
    sv_set_mem(0x1, 0x4, 0xd5, func_1004);
    sv_set_mem(0x1, 0x4, 0xd6, func_1004);
    sv_set_mem(0x1, 0x4, 0xd7, func_1004);
    sv_set_mem(0x1, 0x4, 0xd8, func_1004);
    sv_set_mem(0x1, 0x4, 0xd9, func_1004);
    sv_set_mem(0x1, 0x4, 0xdb, func_859);
    sv_set_mem(0x1, 0x4, 0xc2, func_1771);
    sv_set_mem(0x1, 0x4, 0xc3, func_1782);
    sv_set_mem(0x1, 0x4, 0xc4, func_1794);
    sv_set_mem(0x1, 0x4, 0xc8, func_1806);
    sv_set_mem(0x1, 0x4, 0xc7, func_1814);
    sv_set_mem(0x1, 0x4, 0xc9, func_1822);
    sv_set_mem(0x1, 0x4, 0x10e, func_1242);
    sv_set_mem(0x1, 0x4, 0x41, func_1115);
    sv_set_mem(0x1, 0x4, 0x71, func_678);
    sv_set_mem(0x1, 0x4, 0xa, func_489);
    sv_set_mem(0x1, 0x4, 0x6c, func_1723);
    sv_set_mem(0x1, 0x4, 0x6d, func_1723);
    sv_set_mem(0x1, 0x4, 0x66, func_1723);
    sv_set_mem(0x1, 0x4, 0x67, func_1723);
    sv_set_mem(0x1, 0x4, 0x6b, func_1723);
    sv_set_mem(0x1, 0x4, 0x139, func_2234);
    sv_set_mem(0x1, 0x4, 0x13a, func_859);
    sv_set_mem(0x1, 0x4, 0x13d, func_859);
}

void func_118()
{
    sv_set_mem(0x1, 0x5, 0x1c, func_443);
    sv_set_mem(0x1, 0x5, 0x1b, func_453);
    sv_set_mem(0x1, 0x5, 0x1e, func_463);
    sv_set_mem(0x1, 0x5, 0x1d, func_458);
    sv_set_mem(0x1, 0x5, 0x6c, func_1722);
    sv_set_mem(0x1, 0x5, 0x6d, func_1722);
    sv_set_mem(0x1, 0x5, 0x66, func_1722);
    sv_set_mem(0x1, 0x5, 0x67, func_1722);
    sv_set_mem(0x1, 0x5, 0x6b, func_1722);
    sv_set_mem(0x1, 0x5, 0x18, func_591);
    sv_set_mem(0x1, 0x5, 0xb8, func_1592);
    sv_set_mem(0x1, 0x5, 0xb9, func_1603);
    sv_set_mem(0x1, 0x5, 0xba, func_1614);
    sv_set_mem(0x1, 0x5, 0xbb, func_1625);
    sv_set_mem(0x1, 0x5, 0xbc, func_1636);
    sv_set_mem(0x1, 0x5, 0x45, func_860);
    sv_set_mem(0x1, 0x5, 0x46, func_860);
    sv_set_mem(0x1, 0x5, 0x47, func_860);
    sv_set_mem(0x1, 0x5, 0x48, func_892);
    sv_set_mem(0x1, 0x5, 0x57, func_860);
    sv_set_mem(0x1, 0x5, 0x10e, func_1243);
    sv_set_mem(0x1, 0x5, 0x139, func_860);
    sv_set_mem(0x1, 0x5, 0x13a, func_860);
    sv_set_mem(0x1, 0x5, 0x13d, func_860);
}

void func_119()
{
    sv_set_mem(0x1, 0x6, 0x1c, func_445);
    sv_set_mem(0x1, 0x6, 0x1b, func_451);
    sv_set_mem(0x1, 0x6, 0x1e, func_466);
    sv_set_mem(0x1, 0x6, 0x6c, func_1725);
    sv_set_mem(0x1, 0x6, 0x6d, func_1725);
    sv_set_mem(0x1, 0x6, 0x6e, func_1725);
    sv_set_mem(0x1, 0x6, 0x6f, func_1725);
    sv_set_mem(0x1, 0x6, 0x70, func_1725);
    sv_set_mem(0x1, 0x6, 0x2b, func_347);
    sv_set_mem(0x1, 0x6, 0x2c, func_348);
    sv_set_mem(0x1, 0x6, 0x2d, func_348);
    sv_set_mem(0x1, 0x6, 0x33, func_348);
    sv_set_mem(0x1, 0x6, 0x32, func_348);
    sv_set_mem(0x1, 0x6, 0x30, func_348);
    sv_set_mem(0x1, 0x6, 0x2f, func_348);
    sv_set_mem(0x1, 0x6, 0x34, func_342);
    sv_set_mem(0x1, 0x6, 0x72, func_206);
    sv_set_mem(0x1, 0x6, 0x73, func_201);
    sv_set_mem(0x1, 0x6, 0x74, func_201);
    sv_set_mem(0x1, 0x6, 0x75, func_201);
    sv_set_mem(0x1, 0x6, 0x77, func_201);
    sv_set_mem(0x1, 0x6, 0x76, func_201);
    sv_set_mem(0x1, 0x6, 0x78, func_201);
    sv_set_mem(0x1, 0x6, 0x79, func_201);
    sv_set_mem(0x1, 0x6, 0x7a, func_201);
    sv_set_mem(0x1, 0x6, 0x108, func_209);
    sv_set_mem(0x1, 0x6, 0x7b, func_1031);
    sv_set_mem(0x1, 0x6, 0x7c, func_1031);
    sv_set_mem(0x1, 0x6, 0x45, func_861);
    sv_set_mem(0x1, 0x6, 0x46, func_861);
    sv_set_mem(0x1, 0x6, 0x47, func_889);
    sv_set_mem(0x1, 0x6, 0x48, func_893);
    sv_set_mem(0x1, 0x6, 0x49, func_889);
    sv_set_mem(0x1, 0x6, 0x4a, func_889);
    sv_set_mem(0x1, 0x6, 0x4b, func_889);
    sv_set_mem(0x1, 0x6, 0x57, func_993);
    sv_set_mem(0x1, 0x6, 0xb1, func_224);
    sv_set_mem(0x1, 0x6, 0x10, func_583);
    sv_set_mem(0x1, 0x6, 0x19, func_592);
    sv_set_mem(0x1, 0x6, 0x5d, func_861);
    sv_set_mem(0x1, 0x6, 0x60, func_861);
    sv_set_mem(0x1, 0x6, 0x61, func_861);
    sv_set_mem(0x1, 0x6, 0x63, func_861);
    sv_set_mem(0x1, 0x6, 0xe, func_583);
    sv_set_mem(0x1, 0x6, 0xf, func_583);
    sv_set_mem(0x1, 0x6, 0x16, func_592);
    sv_set_mem(0x1, 0x6, 0x17, func_592);
    sv_set_mem(0x1, 0x6, 0x18, func_592);
    sv_set_mem(0x1, 0x6, 0x1a, func_592);
    sv_set_mem(0x1, 0x6, 0xb2, func_243);
    sv_set_mem(0x1, 0x6, 0x11, func_625);
    sv_set_mem(0x1, 0x6, 0x12, func_625);
    sv_set_mem(0x1, 0x6, 0x13, func_628);
    sv_set_mem(0x1, 0x6, 0x14, func_628);
    sv_set_mem(0x1, 0x6, 0x69, func_1725);
    sv_set_mem(0x1, 0x6, 0x6a, func_1725);
    sv_set_mem(0x1, 0x6, 0x14f, func_2163);
    sv_set_mem(0x1, 0x6, 0x1, func_768);
    sv_set_mem(0x1, 0x6, 0x2, func_779);
    sv_set_mem(0x1, 0x6, 0x3, func_745);
    sv_set_mem(0x1, 0x6, 0x4, func_752);
    sv_set_mem(0x1, 0x6, 0x5, func_755);
    sv_set_mem(0x1, 0x6, 0x6, func_758);
    sv_set_mem(0x1, 0x6, 0x7, func_758);
    sv_set_mem(0x1, 0x6, 0x8, func_761);
    sv_set_mem(0x1, 0x6, 0x9, func_755);
    sv_set_mem(0x1, 0x6, 0x6b, func_1725);
    sv_set_mem(0x1, 0x6, 0xb3, func_1150);
    sv_set_mem(0x1, 0x6, 0xb4, func_1155);
    sv_set_mem(0x1, 0x6, 0xb6, func_1164);
    sv_set_mem(0x1, 0x6, 0x36, func_1042);
    sv_set_mem(0x1, 0x6, 0x38, func_1042);
    sv_set_mem(0x1, 0x6, 0x3a, func_1064);
    sv_set_mem(0x1, 0x6, 0x3b, func_1064);
    sv_set_mem(0x1, 0x6, 0x3e, func_1085);
    sv_set_mem(0x1, 0x6, 0x3f, func_1097);
    sv_set_mem(0x1, 0x6, 0x40, func_1097);
    sv_set_mem(0x1, 0x6, 0x41, func_1097);
    sv_set_mem(0x1, 0x6, 0x44, func_1133);
    sv_set_mem(0x1, 0x6, 0xb8, func_1593);
    sv_set_mem(0x1, 0x6, 0xb9, func_1604);
    sv_set_mem(0x1, 0x6, 0xba, func_1615);
    sv_set_mem(0x1, 0x6, 0xbb, func_1626);
    sv_set_mem(0x1, 0x6, 0xbc, func_1637);
    sv_set_mem(0x1, 0x6, 0xbd, func_1658);
    sv_set_mem(0x1, 0x6, 0xbe, func_1665);
    sv_set_mem(0x1, 0x6, 0x8b, func_1001);
    sv_set_mem(0x1, 0x6, 0x8e, func_1001);
    sv_set_mem(0x1, 0x6, 0x8f, func_1001);
    sv_set_mem(0x1, 0x6, 0x90, func_1001);
    sv_set_mem(0x1, 0x6, 0x96, func_1762);
    sv_set_mem(0x1, 0x6, 0x95, func_1762);
    sv_set_mem(0x1, 0x6, 0x98, func_1543);
    sv_set_mem(0x1, 0x6, 0x99, func_1543);
    sv_set_mem(0x1, 0x6, 0x9a, func_1543);
    sv_set_mem(0x1, 0x6, 0x9b, func_1543);
    sv_set_mem(0x1, 0x6, 0x9c, func_1543);
    sv_set_mem(0x1, 0x6, 0x9d, func_1543);
    sv_set_mem(0x1, 0x6, 0x9e, func_1543);
    sv_set_mem(0x1, 0x6, 0x9f, func_1543);
    sv_set_mem(0x1, 0x6, 0xa0, func_1543);
    sv_set_mem(0x1, 0x6, 0xa1, func_1543);
    sv_set_mem(0x1, 0x6, 0xa2, func_1543);
    sv_set_mem(0x1, 0x6, 0xd3, func_1006);
    sv_set_mem(0x1, 0x6, 0xd4, func_1006);
    sv_set_mem(0x1, 0x6, 0xd5, func_1006);
    sv_set_mem(0x1, 0x6, 0xd6, func_1006);
    sv_set_mem(0x1, 0x6, 0xd7, func_1006);
    sv_set_mem(0x1, 0x6, 0xd8, func_1006);
    sv_set_mem(0x1, 0x6, 0xd9, func_1006);
    sv_set_mem(0x1, 0x6, 0xda, func_1015);
    sv_set_mem(0x1, 0x6, 0xdb, func_919);
    sv_set_mem(0x1, 0x6, 0xbf, func_1689);
    sv_set_mem(0x1, 0x6, 0xc0, func_1689);
    sv_set_mem(0x1, 0x6, 0xc1, func_1696);
    sv_set_mem(0x1, 0x6, 0x64, func_1725);
    sv_set_mem(0x1, 0x6, 0x65, func_1725);
    sv_set_mem(0x1, 0x6, 0x66, func_1725);
    sv_set_mem(0x1, 0x6, 0x67, func_1725);
    sv_set_mem(0x1, 0x6, 0x68, func_1725);
    sv_set_mem(0x1, 0x6, 0x68, func_1725);
    sv_set_mem(0x1, 0x6, 0xc2, func_1775);
    sv_set_mem(0x1, 0x6, 0xc3, func_1786);
    sv_set_mem(0x1, 0x6, 0xc4, func_1798);
    sv_set_mem(0x1, 0x6, 0xc8, func_1808);
    sv_set_mem(0x1, 0x6, 0xc7, func_1815);
    sv_set_mem(0x1, 0x6, 0xc9, func_1823);
    sv_set_mem(0x1, 0x6, 0xfa, func_1836);
    sv_set_mem(0x1, 0x6, 0xcc, func_1842);
    sv_set_mem(0x1, 0x6, 0xcd, func_1848);
    sv_set_mem(0x1, 0x6, 0xce, func_1854);
    sv_set_mem(0x1, 0x6, 0xcf, func_1860);
    sv_set_mem(0x1, 0x6, 0x141, func_1866);
    sv_set_mem(0x1, 0x6, 0x10e, func_1244);
    sv_set_mem(0x1, 0x6, 0x139, func_861);
    sv_set_mem(0x1, 0x6, 0x13a, func_889);
    sv_set_mem(0x1, 0x6, 0x13d, func_861);
}

void func_120()
{
    
}

void func_121()
{
    sv_set_mem(0x1, 0x8, 0xb1, func_223);
    sv_set_mem(0x1, 0x8, 0x3f, func_1096);
    sv_set_mem(0x1, 0x8, 0x40, func_1108);
    sv_set_mem(0x1, 0x8, 0x41, func_1117);
    sv_set_mem(0x1, 0x8, 0xf6, func_1966);
    sv_set_mem(0x1, 0x8, 0xec, func_1096);
    sv_set_mem(0x1, 0x8, 0xee, func_1096);
}

void func_122()
{
    sv_set_mem(0x1, 0x3, 0x127, sv_get_mem(0x1, 0x3, 0x47));
    sv_set_mem(0x1, 0x4, 0x127, sv_get_mem(0x1, 0x4, 0x47));
    sv_set_mem(0x1, 0x6, 0x127, sv_get_mem(0x1, 0x6, 0x47));
    sv_set_mem(0x1, 0x5, 0x127, sv_get_mem(0x1, 0x5, 0x47));
    sv_set_mem(0x1, 0x7, 0x127, sv_get_mem(0x1, 0x7, 0x47));
    sv_set_mem(0x1, 0x8, 0x127, sv_get_mem(0x1, 0x8, 0x47));
}

int func_123()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0x1, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0x1, 0, 0x1, 0x832, 0x4002, 0x1000, 0x20000);
    return 0;
}

void func_124()
{
    WorkModuleImpl.dec_int(0x11000003);
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        WorkModuleImpl.on_flag2(0x2100000e);
    }
    if (WorkModuleImpl.is_flag(0x2100000e) && !WorkModuleImpl.is_flag(0x2100000d))
    {
        GroundModuleImpl(0x2712, 0);
        WorkModuleImpl.off_flag2(0x2100000e);
    }
}

void func_125()
{
    int var0;
    int var1;
    WorkModuleImpl.strans_group_on(0x1f000008);
    var0 = WorkModuleImpl.get_int(0x120000c1);
    if (global5 == 0x22)
    {
        var0 = WorkModuleImpl.get_int(0x120000bf);
    }
    var0 -= 0x1;
    WorkModuleImpl.set_int(var0, 0x10000076);
    WorkModuleImpl.strans_off(0x1e00001c);
    if (MotionModuleImpl(0x22, 0x91))
    {
        func_22(0x91, 0, 1.0f);
    }
    if (!StopModuleImpl(0x1))
    {
        func_124();
    }
    global16 = func_124;
    var1 = WorkModuleImpl.get_int(0x11000004);
    if (var1 >= 0x2)
    {
        GroundModuleImpl(0x2712, var1);
        WorkModuleImpl.strans_group_off(0x1f000009);
    }
    func_78(func_126);
}

int func_126()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (func_55())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (func_99() == 0x1 && WorkModuleImpl.is_flag2(0x2100000d))
    {
        func_16(0xf2, 0);
        return 0x1;
    }
    return 0;
}

void func_127()
{
    if (global6 != 0xf3 && global6 != 0xf2)
    {
        ArticleModuleImpl.remove(WorkModuleImpl.get_int(0x11000002));
    }
}

int func_128()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x4, 0, 0, 0, 0xc, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0x1, 0, 0x1, 0, 0x4002, 0, 0);
    return 0;
}

void func_129()
{
    WorkModuleImpl.strans_group_on(0x1f000008);
    WorkModuleImpl.set_int(0x95, 0x11000005);
    if (!WorkModuleImpl.is_flag(0x21000010))
    {
        func_22(0x92, 0, 1.0f);
        MotionModuleImpl.set_motion_rate(0);
    }
    ArticleModuleImpl(0x2713, WorkModuleImpl.get_int(0x11000002), WorkModuleImpl.get_int(0x11000004));
    func_78(func_130);
}

void func_130()
{
    if (func_55())
    {
        return 0x1;
    }
}

void func_131()
{
    if (global6 != 0xf3 && global6 != 0xf5)
    {
        ArticleModuleImpl.remove(WorkModuleImpl.get_int(0x11000002));
    }
}

int func_132()
{
    StatusModuleImpl(0x5, 0x2, 0x58, 0x7, 0, 0, 0, 0xc, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0x1, 0, 0x1, 0, 0x2, 0, 0);
    return 0;
}

void func_133()
{
    if (global9 >= 1.0f)
    {
        WorkModuleImpl.dec_int(0x11000003);
        if (ControlModuleImplFloat.get_stick_prev_y() > WorkModuleImplFloat.get_float(0x200001a))
        {
            WorkModuleImpl.on_flag2(0x21000013);
        }
    }
}

void func_134()
{
    float var0;
    float var1;
    float var2;
    var0 = GroundModuleImplFloat(0x7);
    PostureModuleImpl.set_lr(-var0);
    PostureModuleImpl.update_rot_y();
    func_22(0x93, 0, 1.0f);
    WorkModuleImpl.inc_int(0x10000044);
    WorkModuleImpl.strans_group_on(0x1f000008);
    if (!StopModuleImpl(0x1))
    {
        func_133();
    }
    global16 = func_133;
    sys_21(0x6a);
    GroundModuleImpl(0x8, 0x1);
    var1 = KineticModuleImplFloat.get_speed_x(0x3);
    var2 = KineticModuleImplFloat.get_speed_y(0x3);
    WorkModuleImpl.set_float(var1, 0x1000006);
    WorkModuleImpl.set_float(var2, 0x1000007);
    func_78(func_136);
}

void func_135()
{
    float var0;
    float var1;
    float var2;
    var0 = KineticModuleImplFloat.get_speed_x(0x3);
    var1 = WorkModuleImplFloat.get_float(0x3000016);
    if (func_13(var0) > var1)
    {
        if (var0 > 0)
        {
            var2 = var1 - var0;
        }
        else
        {
            var2 = -var1 - var0;
        }
        KineticModuleImpl.add_speed(0x3, var2, 0);
    }
}

void func_136()
{
    if (global9 >= 1.0f)
    {
        if (func_55())
        {
            func_135();
            return 0x1;
        }
        if (!GroundModuleImpl(0x2724))
        {
            func_16(0xe, 0);
            return;
        }
        if (WorkModuleImpl.is_flag(0x2100000f))
        {
            func_16(0xe, 0);
            return;
        }
        if (ControlModuleImpl(0x2710, 0) || ControlModuleImpl(0x2710, 0x1) || ControlModuleImpl(0x2710, 0x2) || WorkModuleImpl.get_int(0x11000003) <= 0)
        {
            func_16(0xf4, 0);
            return;
        }
        if (global24 & 0x100000)
        {
            func_16(0xf4, 0);
            return;
        }
        if (ControlModuleImplFloat.get_stick_y() <= WorkModuleImplFloat.get_float(0x200001a) && WorkModuleImpl.is_flag(0x21000013))
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_137()
{
    float var0;
    float var1;
    if (global6 != 0xf4)
    {
        ArticleModuleImpl.remove(WorkModuleImpl.get_int(0x11000002));
        PostureModuleImpl.set_rot(0, 0, 0);
        if (global9 <= 5.0f)
        {
            var0 = WorkModuleImplFloat.get_float(0x1000006);
            var1 = WorkModuleImplFloat.get_float(0x1000007);
            KineticModuleImpl.set_speed(0x3, var0, var1);
        }
    }
}

int func_138()
{
    StatusModuleImpl(0x5, 0x2, 0x59, 0x7, 0, 0, 0x50000, 0x14, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0x1, 0, 0x1, 0, 0x2, 0, 0);
    return 0;
}

void func_139()
{
    float var0;
    float var1;
    float var2;
    WorkModuleImpl.strans_group_on(0x1f000008);
    ArticleModuleImpl(0x2713, WorkModuleImpl.get_int(0x11000002), WorkModuleImpl.get_int(0x11000003));
    sys_21(0x72, 0x94);
    var0 = (float)MotionModuleImpl.get_end_frame();
    var1 = (float)WorkModuleImpl.get_int(0x11000005);
    MotionModuleImpl.set_motion_rate(var0 / var1);
    var2 = (float)WorkModuleImpl.get_int(0x11000006);
    if (var2 >= 0)
    {
        MotionModuleImpl.set_frame(var2);
    }
    GroundModuleImpl(0x8, 0x1);
    func_78(func_140);
}

void func_140()
{
    if (func_55())
    {
        func_135();
        return 0x1;
    }
    if (WorkModuleImpl.is_flag(0x2100000f))
    {
        func_16(0xe, 0);
        return;
    }
    if (!GroundModuleImpl(0x2724))
    {
        func_16(0xe, 0);
        return;
    }
}

void func_141()
{
    ArticleModuleImpl.remove(WorkModuleImpl.get_int(0x11000002));
    PostureModuleImpl.set_rot(0, 0, 0);
}

int func_142()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0, 0, 0, 0x24, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0x1, 0, 0x1, 0, 0x2, 0, 0);
    return 0;
}

void func_143(int arg0, int arg1)
{
    if (!WorkModuleImpl.is_flag(0x21000010) && global9 >= (float)WorkModuleImpl.get_int(0x11000007))
    {
        ArticleModuleImpl(0x2714, arg0, arg1);
        WorkModuleImpl.on_flag2(0x21000010);
    }
}

void func_144(int arg0)
{
    WorkModuleImpl.strans_group_on(0x1f000008);
    if (!StopModuleImpl(0x1))
    {
        (*arg0)();
    }
    global16 = arg0;
    func_78(func_145);
}

void func_145()
{
    if (func_55())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_146()
{
    ArticleModuleImpl.remove(WorkModuleImpl.get_int(0x11000002));
}

int func_147()
{
    StatusModuleImpl(0x5, 0x1, 0x14, 0x4, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4002, 0, 0);
    return 0;
}

int func_148()
{
    StatusModuleImpl(0x5, 0x1, 0x15, 0x4, 0, 0x1, 0, 0, 0, 0x60);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4002, 0, 0);
    return 0;
}

int func_149()
{
    StatusModuleImpl(0x5, 0x1, 0x15, 0x4, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x1004002, 0, 0);
    return 0;
}

int func_150()
{
    StatusModuleImpl(0x5, 0x1, 0x16, 0x4, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1, 0x4002, 0x10, 0x200);
    return 0;
}

int func_151()
{
    StatusModuleImpl(0x5, 0x1, 0x16, 0x4, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4002, 0, 0);
    return 0;
}

int func_152()
{
    StatusModuleImpl(0x5, 0x1, 0x16, 0x4, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4002, 0, 0x1);
    return 0;
}

int func_153()
{
    StatusModuleImpl(0x5, 0x1, 0x15, 0x4, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4002, 0, 0);
    return 0;
}

int func_154()
{
    StatusModuleImpl(0x5, 0x2, 0x4, 0x5, 0x4, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0, 0, 0x4);
    return 0;
}

int func_155()
{
    StatusModuleImpl(0x5, 0x2, 0x5, 0x5, 0x4, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0, 0, 0);
    return 0;
}

int func_156()
{
    StatusModuleImpl(0x5, 0x2, 0x17, 0x5, 0, 0x1, 0x82, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4, 0, 0);
    return 0;
}

int func_157()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_158()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1200006d), 0x11000002);
    func_78(func_159);
}

void func_159()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (!GroundModuleImpl(0x2724))
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (WorkModuleImpl.get_int(0x11000002) <= 0 || GroundModuleImplFloat(0x2) <= GroundModuleImplFloat(0x11))
    {
        func_16(0x73, 0);
        return 0x1;
    }
    if (global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
}

void func_160()
{
    MotionModuleImpl.set_motion_rate(1.0f);
}

void func_161()
{
    func_162();
    func_78(func_164);
}

void func_162()
{
    func_160();
}

int func_163()
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
    if (!GroundModuleImpl(0x2724))
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x74, 0);
        return 0x1;
    }
    func_197();
    return 0;
}

void func_164()
{
    if (func_163())
    {
        return 0x1;
    }
}

void func_165()
{
    sys_21(0xa, 0x1, WorkModuleImpl.get_int(0x12000095));
    WorkModuleImpl.strans_on(0x1e00004c);
    WorkModuleImpl.strans_on(0x1e00004b);
    WorkModuleImpl.strans_on(0x1e000046);
    WorkModuleImpl.strans_on(0x1e000047);
    WorkModuleImpl.strans_on(0x1e000048);
    WorkModuleImpl.strans_on(0x1e000049);
    WorkModuleImpl.strans_on(0x1e000002);
    func_22(0x104, 0, 1.0f);
    WorkModuleImpl.set_float(0, 0);
    WorkModuleImpl.off_flag(0x20000003);
    if (global5 == 0xf4)
    {
        if (GroundModuleImpl(0x2724))
        {
            GroundModuleImpl(0x12);
        }
    }
    func_78(func_166);
}

void func_166()
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
    if (!GroundModuleImpl(0x2724))
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.is_flag2(0x2100000f))
    {
        func_16(0x4c, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00004c))
    {
        if (global18 == 0x1)
        {
            if (global38 & 0x10)
            {
                func_16(0x78, 0x1);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00004b))
    {
        if (global18 == 0x1)
        {
            if (WorkModuleImpl.is_flag2(0x21000011))
            {
                func_16(0x78, 0x1);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000046))
    {
        if (global18 == 0x1)
        {
            if (global38 & 0x1)
            {
                func_16(0x75, 0x1);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000047))
    {
        if (global18 == 0x1)
        {
            if (global38 & 0x4)
            {
                func_16(0x75, 0x1);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000048))
    {
        if (global18 == 0x1)
        {
            if (global38 & 0x40)
            {
                func_16(0x77, 0x1);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000049))
    {
        if (global18 == 0x1)
        {
            if (WorkModuleImpl.is_flag2(0x2100000d))
            {
                func_16(0x76, 0);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000002))
    {
        if (global18 == 0x1)
        {
            if (WorkModuleImpl.is_flag2(0x21000013))
            {
                func_16(0x108, 0);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000002))
    {
        if (global18 == 0x1)
        {
            if (WorkModuleImpl.is_flag2(0x2100000e))
            {
                func_16(0xe, 0);
                return;
            }
        }
    }
    func_197();
}

void func_167()
{
    func_22(0x106, 0, 1.0f);
    sys_21(0xd, 0x2, 0x52);
    func_78(func_168);
}

void func_168()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
        if (global18 == 0x1)
        {
            func_16(0xe, 0);
            return;
        }
    }
    func_197();
}

void func_169()
{
    func_22(0x105, 0, 1.0f);
    func_78(func_170);
}

void func_170()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        printf("status_CliffClimb_Main SITUATION_KIND_AIR");
        func_16(0xe, 0);
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
        if (global18 == 0x1)
        {
            func_16(0xe, 0);
            return;
        }
    }
    func_197();
}

void func_171()
{
    func_22(0x107, 0, 1.0f);
    func_78(func_172);
}

void func_172()
{
    float var0;
    float var1;
    float var2;
    float var3;
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        if (GroundModuleImpl(0x2716) == 0)
        {
            func_16(0xe, 0);
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
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0x1)
        {
            func_16(0xe, 0);
            return;
        }
    }
    var0 = GroundModuleImplFloat(0x2);
    var1 = PostureModuleImplFloat.get_pos_y();
    if (var1 > var0 - 10.0f)
    {
        var2 = KineticModuleImplFloat.get_speed_x(0);
        var3 = KineticModuleImplFloat.get_speed_y(0);
        if (var3 < 0)
        {
            KineticModuleImpl.set_speed(0, var2, 0);
        }
    }
    func_197();
}

void func_173()
{
    ControlModuleImpl(0x271f);
    ControlModuleImpl(0x271b);
    func_76();
    WorkModuleImpl.strans_on(0x1e00004b);
    func_22(0x108, 0, 1.0f);
    func_78(func_174);
}

void func_174()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00004b))
    {
        if (MotionModuleImpl.is_end())
        {
            func_16(0x79, 0);
            return;
        }
    }
    func_197();
}

void func_175()
{
    ControlModuleImpl(0x271f);
    func_40();
    func_564();
    WorkModuleImpl.strans_group_off(0x1f00000a);
    WorkModuleImpl.strans_group_off(0x1f00000b);
    WorkModuleImpl.strans_group_off(0x1f00000e);
    func_22(0x109, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_179();
    }
    global16 = func_179;
    func_78(func_176);
}

void func_176()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global9 > 1.0f)
    {
        if (func_41())
        {
            return;
        }
    }
    if (func_565())
    {
        return;
    }
    if (func_58())
    {
        return 0x1;
    }
    if (func_59())
    {
        return 0x1;
    }
    if (func_63())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
    if (global9 > 1.0f)
    {
        func_555();
    }
    func_197();
}

void func_177()
{
    func_175();
    func_78(func_178);
}

void func_178()
{
    func_176();
}

void func_179()
{
    if (WorkModuleImpl.get_int(0x11000003) <= 0)
    {
        WorkModuleImpl.strans_group_on(0x1f00000a);
        WorkModuleImpl.strans_group_on(0x1f00000b);
        WorkModuleImpl.strans_group_on(0x1f00000e);
        func_105();
        func_104();
    }
    func_550();
}

void func_180()
{
    int var0;
    int var1;
    float var2;
    float var3;
    float var4;
    float var5;
    WorkModuleImpl.set_int(0, 0x10000057);
    var0 = 0xcd;
    if (global1 == 0x3a || global1 == 0x3c)
    {
        var0 = 0x24;
    }
    var1 = WorkModuleImpl.get_int(0x1200007d);
    var2 = (float)MotionModuleImpl.get_end_frame(var0);
    func_22(var0, 0, var2 / (float)var1);
    var3 = WorkModuleImplFloat.get_float(0x200007b);
    var4 = WorkModuleImplFloat.get_float(0x200007c);
    var5 = WorkModuleImplFloat.get_float(0x3000018);
    KineticModuleImpl(0x2710, -var3, var4 * var5, 0);
    ShakeModuleImpl(0, 0, 0x5, 0, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_182();
    }
    global16 = func_182;
    func_78(func_181);
}

void func_181()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
    if (func_41())
    {
        return;
    }
}

void func_182()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x10000057);
    var1 = WorkModuleImpl.get_int(0x1200007d);
    if (var0 >= var1)
    {
        func_40();
        if (var0 == var1)
        {
            KineticModuleImpl(0xe, 0x2, 0, 0, 0, 0, 0, 0);
            KineticModuleImpl.enable_energy(0x2);
        }
    }
    WorkModuleImpl.inc_int(0x10000057);
    func_550();
}

void func_183()
{
    KineticModuleImpl(0x2717, 0x2);
    WorkModuleImpl.strans_on(0x1e00000d);
    func_22(0x102, 0, 1.0f);
    func_78(func_184);
}

void func_184()
{
    if (func_56())
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        if (MotionModuleImpl.is_end() == 0x1)
        {
            func_16(0x4c, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00000d))
    {
        if (global18 == 0)
        {
            func_16(0x4d);
            return;
        }
    }
    if (global9 == 8.0f)
    {
        KineticModuleImpl(0x2718, 0x2);
    }
}

void func_185()
{
    
}

void func_186()
{
    
}

void func_187()
{
    
}

void func_188()
{
    
}

void func_189()
{
    
}

void func_190()
{
    
}

void func_191()
{
    if (global6 != 0x79)
    {
        if (global18 != 0x1 && global18 != 0x2)
        {
            WorkModuleImpl.set_int(0, 0x10000044);
        }
        if (global18 == 0 || global18 == 0x6)
        {
            WorkModuleImpl.on_flag(0x20000059);
        }
    }
}

void func_192()
{
    if (global18 == 0 || global18 == 0x6)
    {
        WorkModuleImpl.on_flag(0x20000059);
    }
}

void func_193()
{
    if (global18 == 0 || global18 == 0x6)
    {
        WorkModuleImpl.on_flag(0x20000059);
    }
}

void func_194()
{
    
}

void func_195()
{
    
}

void func_196()
{
    int var0;
    int var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    float var8;
    float var9;
    float var10;
    int var11;
    float var12;
    float var13;
    float var14;
    float var15;
    int var16;
    float var17;
    float var18;
    float var19;
    float var20;
    int var21;
    if (GroundModuleImpl(0x2724))
    {
        var0 = 0x1;
        var1 = 0;
        if (global4 == 0x73)
        {
            var2 = PostureModuleImplFloat.get_lr();
            var3 = GroundModuleImplFloat(0x1);
            var4 = GroundModuleImplFloat(0x2);
            var5 = PostureModuleImplFloat.get_pos_z();
            var6 = MotionModuleImplFloat(0x7);
            var7 = MotionModuleImplFloat(0x8);
            var8 = var3 + var7 * var2;
            var9 = var4 + var6;
            var10 = var5;
            ControlModuleImpl(0x2714, 0xd, 0);
            if (WorkModuleImpl.is_flag(0x20000059) == 0x1)
            {
                HitModuleImpl(0, 0x2);
            }
            var1 = 0x1;
        }
        else if (global4 == 0x75 || global4 == 0x76 || global4 == 0x77 || global4 == 0x78)
        {
            var1 = 0x1;
        }
        else if (global4 == 0x74)
        {
            var11 = (int)((float)WorkModuleImpl.get_int(0x1200006f) * WorkModuleImplFloat.get_float(0x30000fc));
            WorkModuleImpl.set_int(var11, 0x11000002);
            if (WorkModuleImpl.is_flag(0x20000059) == 0x1)
            {
                var12 = (float)WorkModuleImpl.get_int(0x12000076);
                var13 = (float)WorkModuleImpl.get_int(0x12000077);
                var14 = (float)WorkModuleImpl.get_int(0x12000078);
                var15 = (float)WorkModuleImpl.get_int(0x12000079);
                var16 = WorkModuleImpl.get_int(0x1200007a);
                var17 = (float)WorkModuleImpl.get_int(0x10000055);
                var18 = var12 * var17 / var13;
                if (var18 > var12)
                {
                    var18 = var12;
                }
                else if (var18 < (float)0)
                {
                    var18 = (float)0;
                }
                var19 = DamageModuleImplFloat(0);
                var20 = var14 - var14 * var19 / var15;
                if (var20 > var14)
                {
                    var20 = var14;
                }
                else if (var20 < (float)0)
                {
                    var20 = (float)0;
                }
                var21 = (int)(var18 + var20);
                if (var21 < var16)
                {
                    var21 = var16;
                }
                HitModuleImpl(0x2, var21);
                WorkModuleImpl.off_flag(0x20000059);
            }
            var1 = 0x1;
        }
        else if (global4 == 0x79)
        {
            var0 = 0;
        }
        if (var0 == 0x1)
        {
            WorkModuleImpl.on_flag(0x20000002);
        }
        if (var1 == 0x1)
        {
            GroundModuleImpl(0x2717, 0xe, 0x1);
        }
    }
}

void func_197()
{
    if (!global3)
    {
        func_199();
    }
}

void func_198()
{
    float var0;
    float var1;
    float var2;
    if (global4 == 0x74)
    {
        var0 = WorkModuleImplFloat.get_float(0x2000071);
        if (func_13(global48) >= var0 || func_13(global32) >= var0)
        {
            if (global32 >= WorkModuleImplFloat.get_float(0x200001f) && global47 < WorkModuleImpl.get_int(0x12000020))
            {
                if (WorkModuleImpl.is_flag(0x21000010))
                {
                    WorkModuleImpl.on_flag(0x21000011);
                }
            }
            else if (WorkModuleImpl.is_flag(0x21000010))
            {
                var1 = ControlModuleImplFloat.get_stick_angle();
                var2 = WorkModuleImplFloat.get_float(0x2000072);
                if (var1 > var2)
                {
                    if (global32 >= WorkModuleImplFloat.get_float(0x200001f))
                    {
                        WorkModuleImpl.on_flag(0x2100000d);
                    }
                }
                else if (var1 > -var2 && global48 * PostureModuleImplFloat.get_lr() >= 0)
                {
                    WorkModuleImpl.on_flag(0x2100000d);
                }
                else
                {
                    WorkModuleImpl.on_flag(0x2100000e);
                }
            }
        }
        else
        {
            WorkModuleImpl.on_flag(0x21000010);
        }
        if (WorkModuleImpl.get_int(0x11000002) > 0)
        {
            WorkModuleImpl.dec_int(0x11000002);
        }
        if (WorkModuleImpl.get_int(0x11000002) <= 0)
        {
            WorkModuleImpl.on_flag(0x2100000f);
        }
    }
}

void func_199()
{
    int var0;
    if (global4 == 0x74)
    {
        if (GroundModuleImpl(0x2722, 0x8))
        {
            func_20(0);
            func_16(0, 0);
        }
    }
    else if (global4 == 0x74 || global4 == 0x73 || global4 == 0x75 || global4 == 0x76 || global4 == 0x77 || global4 == 0x78)
    {
        if (GroundModuleImpl(0x2724))
        {
            var0 = 0;
            if (KineticModuleImpl(0x9, 0))
            {
                if (MotionModuleImplFloat(0x8) >= 0.30000001192092896f && MotionModuleImplFloat(0x7) >= -0.029999999329447746f)
                {
                    var0 = 0x1;
                }
            }
            if (var0)
            {
                KineticModuleImpl(0xa, 0);
                GroundModuleImpl(0x2717, 0xe, 0);
                func_20(0);
                GroundModuleImpl(0x2710, 0x2);
                GroundModuleImpl(0x3);
                GroundModuleImpl(0x13);
                WorkModuleImpl.on_flag(0x21000012);
            }
        }
        else if (global18 == 0)
        {
            if (GroundModuleImpl(0x9) == 0x4)
            {
                KineticModuleImpl(0xa, 0);
                GroundModuleImpl(0x2717, 0xe, 0);
                GroundModuleImpl(0x2710, 0x2);
                WorkModuleImpl.on_flag(0x21000012);
            }
        }
        else if (global18 == 0x1)
        {
            func_20(0x2);
            func_16(0xe, 0);
        }
    }
}

void func_200(int arg0)
{
    if (WorkModuleImpl.is_flag(0x20000002))
    {
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x12000073), 0x10000003);
        HitModuleImpl(0x2, 0);
    }
    WorkModuleImpl.off_flag2(0x20000002);
    if (arg0)
    {
        WorkModuleImpl.off_flag(0x20000002);
        GroundModuleImpl(0x13);
        HitModuleImpl(0x2, 0);
    }
}

void func_201()
{
    func_200(func_202(global6));
}

int func_202(int arg0)
{
    if (arg0 == 0x73 || arg0 == 0x74 || arg0 == 0x75 || arg0 == 0x76 || arg0 == 0x77 || arg0 == 0x78)
    {
        return 0;
    }
    return 0x1;
}

void func_203()
{
    KineticModuleImpl(0xe, 0x5, 0, 0, 0, 0, 0, 0);
    func_204(0x103);
}

void func_204(int arg0)
{
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    if (GroundModuleImpl(0x2724))
    {
        sys_21(0x6f);
        var1 = ModelModuleImplFloat(0, 0x3);
        var2 = ModelModuleImplFloat(0x1, 0x3);
        var3 = GroundModuleImplFloat(0x7);
        var3 = -var3;
        PostureModuleImpl.set_lr(var3);
        GroundModuleImpl(0x2717, 0xe, 0x1);
        func_22(arg0, 0, 1.0f);
        MotionModuleImpl.set_motion_rate(0);
        PostureModuleImpl.update_rot_y();
        var4 = ModelModuleImplFloat(0x3, 0x3, var1);
        var5 = ModelModuleImplFloat(0x4, 0x3, var2);
        var6 = PostureModuleImplFloat.get_pos_z();
        PostureModuleImpl.set_pos(var4, var5, var6);
        GroundModuleImpl(0x2717, 0xe, 0x1);
        GroundModuleImpl(0x11);
        WorkModuleImpl.off_flag2(0x2100000b);
        sys_21(0x55, 0x1, 0x1b);
    }
}

void func_205()
{
    WorkModuleImpl.dec_int(0x11000002);
}

void func_206()
{
    if (func_202(global6))
    {
        GroundModuleImpl(0x13);
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x12000073), 0x10000003);
        GroundModuleImpl(0x13);
    }
    PostureModuleImpl.set_rot(0, 0, 0);
}

void func_207()
{
    
}

void func_208()
{
    
}

void func_209()
{
    
}

void func_210(int arg0)
{
    float var1;
    float var2;
    float var3;
    if (StageData(0x10) > 10.0f)
    {
        return;
    }
    var1 = func_13(arg0);
    if (var1 > 0)
    {
        var2 = 1.0f - (var1 - 0) / 340.0f;
        var3 = (1.0f - 0.5f) * var2 + 0.5f;
        if (var3 > 1.0f)
        {
            var3 = 1.0f;
        }
        PostureModuleImpl.set_scale(var3);
    }
}

int func_211()
{
    StatusModuleImpl(0x5, 0x5, 0x33, 0, 0, 0, 0, 0, 0, 0x100);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x3e2, 0, 0);
    return 0;
}

int func_212()
{
    StatusModuleImpl(0x5, 0x5, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x403e0, 0, 0);
    return 0;
}

void func_213()
{
    func_214();
    func_78(func_215);
}

void func_214()
{
    HitModuleImpl(0x2710, 0x3);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0x10);
    ShadowModuleImpl(0x1);
    sys_21(0x29);
}

void func_215()
{
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        func_16(0x14c, 0);
        return 0x1;
    }
}

void func_216()
{
    MotionModuleImpl(0x1, 0, 0, 0, 0);
    JostleModuleImpl(0x2710, 0);
    CameraModuleImpl(0x2717, 0);
    HitModuleImpl(0x2710, 0x3);
    ItemModuleImpl(0xf, 0);
    VisibilityModuleImpl(0x2710, 0);
    sys_21(0x29);
    ShadowModuleImpl(0x1);
    PhysicsModuleImpl(0x1);
    sys_21(0x68, 0);
    func_78(func_217);
}

void func_217()
{
    
}

void func_218()
{
    
}

void func_219()
{
    CameraModuleImpl(0x2717, 0x1);
    HitModuleImpl(0x2710, 0);
    VisibilityModuleImpl(0x2710, 0x1);
    EffectModuleImpl(0x2733, 0, 0);
}

void func_220()
{
    int var0;
    int var1;
    int var2;
    float var3;
    float var4;
    int var5;
    float var6;
    float var7;
    float var8;
    float var9;
    float var10;
    float var11;
    float var12;
    float var13;
    float var14;
    float var15;
    int var16;
    float var17;
    int var18;
    int var19;
    int var20;
    int var21;
    float var22;
    int var23;
    int var24;
    int var25;
    int var26;
    int var27;
    float var28;
    int var29;
    float var30;
    float var31;
    int var32;
    float var33;
    float var34;
    float var35;
    float var36;
    float var37;
    float var38;
    float var39;
    float var40;
    float var41;
    float var42;
    float var43;
    int var44;
    int var45;
    float var46;
    float var47;
    float var48;
    int var49;
    float var50;
    float var51;
    float var52;
    float var53;
    int var54;
    int var55;
    float var56;
    float var57;
    float var58;
    float var59;
    int var60;
    int var61;
    float var62;
    float var63;
    float var64;
    float var65;
    float var66;
    float var67;
    float var68;
    float var69;
    float var70;
    float var71;
    float var72;
    float var73;
    float var74;
    float var75;
    float var76;
    float var77;
    float var78;
    float var79;
    WorkModuleImpl.set_int(0, 0x1000002e);
    var0 = WorkModuleImpl.get_int(0x10000000);
    var1 = WorkModuleImpl.get_int(0x1000002d);
    var2 = 0;
    var3 = var4 = 0;
    var5 = WorkModuleImpl.is_flag(0x2000001a);
    if (var5 == 0x1)
    {
        var6 = WorkModuleImplFloat.get_float(0x2c);
        var7 = WorkModuleImplFloat.get_float(0x2d);
        var8 = WorkModuleImplFloat.get_float(0x2e);
    }
    else
    {
        var6 = ModelModuleImplFloat(0, 0x3);
        var7 = ModelModuleImplFloat(0x1, 0x3);
        var8 = ModelModuleImplFloat(0x2, 0x3);
    }
    WorkModuleImpl.set_int(0xffffffff, 0x11000008);
    WorkModuleImpl.set_int(0xffffffff, 0x11000009);
    if (var5)
    {
        var9 = StageData(0x2);
        var10 = StageData(0x3);
        var11 = StageData(0);
        var12 = StageData(0x1);
        var13 = var6;
        var14 = var7;
        var13 = StageData(0x14, var6, var7, 0x1000010);
        var14 = WorkModuleImplFloat.get_float(0x1000010);
        var15 = WorkModuleImplFloat.get_float(0x200012c);
        if (sys_7(0x13))
        {
            var15 = 0;
        }
        var16 = GroundModuleImpl(0x14, var6, var7, var8, 0, var15);
        if (var16 == 0xffffffff)
        {
            if (var1 != 0xffffffff)
            {
                if (var1 == 0)
                {
                    var14 = var9 + 0.009999999776482582f;
                }
                else if (var1 == 0x1)
                {
                    var14 = var10 - 0.009999999776482582f;
                }
                else if (var1 == 0x2)
                {
                    var13 = var11 - 0.009999999776482582f;
                }
                else if (var1 == 0x3)
                {
                    var13 = var12 + 0.009999999776482582f;
                }
                var6 = StageData(0x15, var13, var14, 0x1000010);
                var7 = WorkModuleImplFloat.get_float(0x1000010);
                var16 = GroundModuleImpl(0x14, var6, var7, var8, 0, WorkModuleImplFloat.get_float(0x200012c));
            }
        }
        if (var16 == 0x2)
        {
            if (var14 > var9)
            {
                var14 = var9;
            }
            if (var14 < var10)
            {
                var14 = var10;
            }
            var13 = var11 - 0.009999999776482582f;
            var3 = 50.0f;
            var6 = StageData(0x15, var13, var14, 0x1000010);
            var7 = WorkModuleImplFloat.get_float(0x1000010);
            func_226(var6, var7, var8, 0, 0x1);
        }
        else if (var16 == 0x3)
        {
            if (var14 > var9)
            {
                var14 = var9;
            }
            if (var14 < var10)
            {
                var14 = var10;
            }
            var13 = var12 + 0.009999999776482582f;
            var3 = -50.0f;
            var6 = StageData(0x15, var13, var14, 0x1000010);
            var7 = WorkModuleImplFloat.get_float(0x1000010);
            var17 = 180.0f * 3.1415927410125732f / (float)0xb4;
            func_226(var6, var7, var8, var17, 0x1);
        }
        else if (var16 == 0x1)
        {
            if (var13 > var12)
            {
                var13 = var12;
            }
            if (var13 < var11)
            {
                var13 = var11;
            }
            var14 = var10 - 0.009999999776482582f;
            var4 = 70.0f;
            var6 = StageData(0x15, var13, var14, 0x1000010);
            var7 = WorkModuleImplFloat.get_float(0x1000010);
            var17 = 90.0f * 3.1415927410125732f / (float)0xb4;
            func_226(var6, var7, var8, var17, 0x1);
        }
        else if (var16 == 0)
        {
            if (var13 > var12)
            {
                var13 = var12;
            }
            if (var13 < var11)
            {
                var13 = var11;
            }
            var14 = var9 + 0.009999999776482582f;
            var4 = -60.0f;
            var6 = StageData(0x15, var13, var14, 0x1000010);
            var7 = WorkModuleImplFloat.get_float(0x1000010);
            if (sys_7(0x11) == 0 && WorkModuleImpl.is_flag(0x20000027) == 0)
            {
                if (sys_7(0x12) == 0)
                {
                    var2 = 0;
                }
                else
                {
                    var2 = 0x1;
                }
            }
            else
            {
                var2 = 0x1;
            }
            var18 = 0;
            var19 = sys_7(0x7);
            var20 = FighterUtil(0x15);
            var21 = FighterUtil(0x16);
            if (var21 >= randint(0, 0x64) + 0x1)
            {
                var18 = 0x1;
            }
            if (sys_7(0x8) == 0x3)
            {
                var18 = 0x1;
            }
            if (WorkModuleImpl.is_flag(0x2000005b))
            {
                var18 = 0;
            }
            if (FighterUtil(0x13) == 0xffffffff)
            {
                var18 = 0;
            }
            if (var18)
            {
                if (var19 <= 0)
                {
                    var22 = WorkModuleImplFloat.get_float(0x3000131);
                    var23 = FighterUtil(0x11);
                    WorkModuleImpl.set_float(var22 + 0, 0x100000f);
                    WorkModuleImpl.set_int(var23, 0x1100000a);
                }
                else if (FighterUtil(0x12))
                {
                    var23 = FighterUtil(0x11);
                    var24 = WorkModuleImpl.get_int(0x1100000a);
                    if (var23 != var24)
                    {
                        var18 = 0;
                    }
                }
                else
                {
                    var18 = 0;
                }
            }
            if (var18)
            {
                var2 = 0x2;
            }
            else if (var20 >= randint(0, 0x64) + 0x1)
            {
                var2 = 0x1;
            }
            if (sys_7(0x9) == 0)
            {
                if (var2 == 0x2)
                {
                    var2 = 0;
                }
            }
            if (sys_7(0xa) == 0)
            {
                if (var2 == 0x1)
                {
                    var2 = 0;
                }
            }
            if (sys_7(0x4))
            {
                var2 = 0;
            }
            if (global5 == 0x124)
            {
                var2 = 0;
            }
            if (WorkModuleImpl.is_flag(0x20000061) && sys_7(0x8) == 0)
            {
                var2 = 0;
                WorkModuleImpl.off_flag2(0x20000061);
            }
            if (WorkModuleImpl.is_flag(0x20000062))
            {
                var2 = 0;
                WorkModuleImpl.off_flag2(0x20000062);
            }
            if (sys_7(0x8) == 0x1)
            {
                var2 = 0;
            }
            else if (sys_7(0x8) == 0x2)
            {
                var2 = 0x1;
            }
            var17 = 270.0f * 3.1415927410125732f / (float)0xb4;
            func_226(var6, var7, var8, var17, 0x1);
        }
    }
    else if (var1 == 0x6)
    {
        func_226(var6, var7, var8, var17, 0x1);
    }
    WorkModuleImpl.set_int(var2, 0x1000002e);
    if (var2 == 0)
    {
        CameraModuleImpl(0x2, 0);
        VisibilityModuleImpl(0x2710, 0);
        func_22(0, 0, 1.0f);
        SoundModuleImpl(0x2718, 0x47);
        var25 = 0x47;
        if (global1 == 0x32)
        {
            var25 = 0x23d00a0;
        }
        SoundModuleImpl(0x2710, var25, 0x1, 0x1, 0x1);
        var26 = WorkModuleImpl.get_int(0x1300004c);
        var27 = SoundModuleImpl(0x2727, 0);
        if (var26 != 0 && randint(0, var26) == 0)
        {
            var27 = SoundModuleImpl(0x2727, 0x1);
        }
        SoundModuleImpl(0x2710, var27, 0x1, 0x1, 0x1);
        if (sys_7(0xf))
        {
            CameraModuleImpl(0x3, 0x6);
        }
        else
        {
            CameraModuleImpl(0x3, 0x5);
        }
        func_225();
        if (var5)
        {
            var28 = WorkModuleImplFloat.get_float(0x200012c);
            var29 = EffectModuleImpl(0x1e, var6, var7, var8, var28);
            var30 = EffectModuleImplFloat(0, var6, var7, var8, var28);
            var31 = 1.0f;
            if (var29 == 0x1)
            {
                var31 = WorkModuleImplFloat.get_float(0x200012d);
            }
            EffectModuleImpl(0x3, 0x1000016, var6, var7, var8, 0, 0, 3.1415927410125732f * var30, var31 * 1.0f, 0, FighterUtil(0x8));
            if (global1 == 0x32)
            {
                var3 = 70.0f * Math.sin(-3.1415927410125732f * var30);
                var4 = 70.0f * Math.cos(-3.1415927410125732f * var30);
                var32 = WorkModuleImpl.get_int(0x1000003c);
                if (var32 < 0)
                {
                    var32 = 0;
                }
                else if (var32 > 0x7)
                {
                    var32 = 0x7;
                }
                EffectModuleImpl(0x3, 0x3320028 + var32, var6 + var3, var7 + var4, var8, 0, 0, 0, var31 * 1.0f, 0, 0xffffffff);
            }
            var33 = Math.sin(3.1415927410125732f * var30);
            var34 = Math.cos(3.1415927410125732f * var30);
            var35 = var33;
            var36 = -var34 * 16.0f / 9.0f;
            var37 = -var33;
            var38 = var34 * 16.0f / 9.0f;
            var39 = 0.5f;
            var40 = 1.5f;
            var41 = 0.5f;
            var42 = 1.5f;
            if (var30 > 0.4000000059604645f && var30 < 0.6000000238418579f || var30 > 1.399999976158142f && var30 < 1.600000023841858f)
            {
                var35 = -1.0f;
                var36 = 0;
                var37 = 1.0f;
                var38 = 0;
                var39 *= 9.0f / 16.0f;
                var40 *= 9.0f / 16.0f;
                var41 *= 9.0f / 16.0f;
                var42 *= 9.0f / 16.0f;
            }
            EffectModuleImpl(0x2735, 0, var35, var36, var37, var38, var39, var40, var41, var42, 0x1, 0x2);
            var43 = PostureModuleImplFloat.get_lr();
            var44 = WorkModuleImpl.get_int(0x1200012b) + 0x8;
            CameraModuleImpl(0x271e, var0, var43, var44);
            CameraModuleImpl(0x2, 0);
        }
        else
        {
            var45 = WorkModuleImpl.get_int(0x130000cb);
            var46 = ModelModuleImplFloat(0, var45);
            var47 = ModelModuleImplFloat(0x1, var45);
            var48 = ModelModuleImplFloat(0x2, var45);
            EffectModuleImpl(0x3, 0x10000ae, var46, var47, var48, 0, 0, 0, 1.0f, 0, 0xffffffff);
            sys_21(0x7f);
            if (global1 == 0x32)
            {
                var32 = WorkModuleImpl.get_int(0x1000003c);
                if (var32 < 0)
                {
                    var32 = 0;
                }
                else if (var32 > 0x7)
                {
                    var32 = 0x7;
                }
                EffectModuleImpl(0x3, 0x3320028 + var32, var46, var47, var48, 0, 0, 0, 1.0f, 0, 0xffffffff);
            }
        }
    }
    else if (var2 == 0x1)
    {
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x12000130), 0x11000003);
        WorkModuleImpl.set_int(0, 0x11000002);
        var27 = SoundModuleImpl(0x2727, 0x2);
        SoundModuleImpl(0x2710, var27, 0x1, 0x1, 0x1);
        if (var49 == 0xc5)
        {
            WorkModuleImpl.on_flag2(0x2100000e);
            ControlModuleImpl(0x19, 0x2, 0, 0, 0x3);
        }
        else
        {
            func_22(0x2e, 0, 1.0f);
        }
        WorkModuleImpl.on_flag2(0x2000001f);
        WorkModuleImpl.set_int(0, 0x10000021);
        var50 = (StageData(0xc) * WorkModuleImplFloat.get_float(0x2000134) - PostureModuleImplFloat.get_pos_y()) / (float)WorkModuleImpl.get_int(0x12000131);
        WorkModuleImpl.set_float(var50 + 0, 0x1000007);
        var51 = WorkModuleImplFloat.get_float(0x2000133) / (float)WorkModuleImpl.get_int(0x12000131);
        WorkModuleImpl.set_float(var51 + 0, 0x1000008);
        WorkModuleImpl.set_float(PostureModuleImplFloat.get_scale() + 0, 0x1000011);
    }
    else if (var2 == 0x2)
    {
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x12000137), 0x11000003);
        WorkModuleImpl.set_int(0, 0x11000002);
        WorkModuleImpl.on_flag2(0x2100000f);
        if (var49 == 0xc5)
        {
            WorkModuleImpl.on_flag2(0x2100000e);
            ControlModuleImpl(0x19, 0x2, 0, 0, 0x3);
        }
        else
        {
            func_22(0x2e, 0, 1.0f);
        }
        var52 = 0;
        var53 = 0;
        var54 = WorkModuleImpl.get_int(0x11000008);
        if (var54 == 0)
        {
            var52 = -10.0f;
        }
        else if (var54 == 0x1)
        {
            var52 = 0;
        }
        else if (var54 == 0x2)
        {
            var52 = 10.0f;
        }
        var55 = 0xb4;
        var56 = (float)(randint(0, var55 * 0x2) - var55);
        var57 = WorkModuleImplFloat.get_float(0x300012f) - 90.0f;
        var58 = WorkModuleImplFloat.get_float(0x3000130) - 90.0f;
        var59 = var58 - var57;
        var60 = (int)(var59 / ((float)0x3 + 0));
        var61 = FighterUtil(0x14);
        if (var61 == 0)
        {
            var56 = var57 + (float)randint(0, var60) + 0;
        }
        else if (var61 == 0x1)
        {
            var56 = var57 + (float)(var60 * 0x1) + (float)randint(0, var60) + 0;
        }
        else if (var61 == 0x2)
        {
            var56 = var57 + (float)(var60 * 0x2) + (float)randint(0, var60) + 0;
        }
        WorkModuleImpl.set_float(var56 + 0, 0x100000e);
        var62 = ModelModuleImplFloat(0, 0);
        var63 = ModelModuleImplFloat(0x1, 0);
        var64 = ModelModuleImplFloat(0, 0x2);
        var65 = ModelModuleImplFloat(0x1, 0x2);
        var66 = Math.norm_vector3(var62 - var64, var63 - var65, 0);
        var67 = var66;
        var68 = var66;
        var67 -= WorkModuleImplFloat.get_float(0x300012e);
        var68 -= WorkModuleImplFloat.get_float(0x300012e);
        var53 -= Math.cos(var56 * 3.1415927410125732f / (float)0xb4) * var68;
        var53 += WorkModuleImplFloat.get_float(0x3000132);
        var69 = WorkModuleImplFloat.get_float(0x100000f);
        var70 = var52 + WorkModuleImplFloat.get_float(0x200013c);
        var71 = var53 + WorkModuleImplFloat.get_float(0x200013d);
        var72 = WorkModuleImplFloat.get_float(0x200013e);
        WorkModuleImpl.set_float(var70 + 0, 0x100000a);
        WorkModuleImpl.set_float(var71 + 0, 0x100000b);
        WorkModuleImpl.set_float(var72 + 0, 0x100000c);
        var73 = var52;
        var74 = var53;
        var75 = -30.0f - var69;
        var76 = (float)WorkModuleImpl.get_int(0x12000138);
        printf("*****************************$FL_end_x:%f\n*******************************", var73);
        var77 = (var73 - var70) / var76;
        var78 = (var74 - var71) / var76;
        var79 = (var75 - var72) / var76;
        WorkModuleImpl.set_float(var77 + 0, 0x1000006);
        WorkModuleImpl.set_float(var78 + 0, 0x1000007);
        WorkModuleImpl.set_float(var79 + 0, 0x1000008);
        func_22(0xfa, 0, 0);
        MotionModuleImpl.turn_back(0);
        MotionModuleImpl.set_motion_rate(0);
        MotionModuleImpl.set_frame(0);
        CameraModuleImpl(0x2, 0);
        sys_21(0x68, 0x1, 0.25f, 0.25f, 0.25f, 0.25f);
        sys_21(0x83, 0x1);
    }
    WorkModuleImpl.set_int(0, 0x11000006);
}

void func_221()
{
    int var0;
    int var1;
    int var2;
    int var3;
    float var4;
    float var5;
    float var6;
    float var7;
    int var8;
    float var9;
    float var10;
    float var11;
    float var12;
    float var13;
    float var14;
    float var15;
    float var16;
    float var17;
    var0 = WorkModuleImpl.get_int(0x11000006);
    var1 = WorkModuleImpl.get_int(0x1000002e);
    if (var0 == 0)
    {
        if (var1 == 0)
        {
            var0 = func_222();
        }
        else if (var1 == 0x1)
        {
            var2 = WorkModuleImpl.get_int(0x11000002);
            if (var2 == 0)
            {
                var3 = WorkModuleImpl.get_int(0x11000003);
                var3++;
                WorkModuleImpl.set_int(var3, 0x11000003);
                if (var3 > WorkModuleImpl.get_int(0x12000131))
                {
                    var4 = PostureModuleImplFloat.get_pos_x();
                    var5 = PostureModuleImplFloat.get_pos_y();
                    var6 = PostureModuleImplFloat.get_pos_z();
                    WorkModuleImpl.set_int(0x1, 0x11000002);
                    EffectModuleImpl(0x3, 0x1000069, var4, var5, var6, 0, 0, 0, WorkModuleImplFloat.get_float(0x3000031), 0, 0);
                    SoundModuleImpl(0x2710, 0x58, 0, 0x1, 0x1);
                    var0 = func_222();
                }
                else
                {
                    var4 = PostureModuleImplFloat.get_pos_x();
                    var5 = PostureModuleImplFloat.get_pos_y();
                    var6 = PostureModuleImplFloat.get_pos_z();
                    var5 += WorkModuleImplFloat.get_float(0x1000007);
                    var6 += WorkModuleImplFloat.get_float(0x1000008);
                    PostureModuleImpl.set_pos(var4, var5, var6);
                    func_210(var6);
                    if (WorkModuleImpl.is_flag(0x2100000e))
                    {
                        var7 = WorkModuleImplFloat.get_float(0x1000009);
                        var7 += WorkModuleImplFloat.get_float(0x2000135);
                        WorkModuleImpl.set_float(var7 + 0, 0x1000009);
                        FighterUtil(0x6, var7);
                    }
                }
            }
        }
        else if (var1 == 0x2)
        {
            var3 = WorkModuleImpl.get_int(0x11000003);
            var3++;
            WorkModuleImpl.set_int(var3, 0x11000003);
            if (WorkModuleImpl.is_flag(0x2100000e))
            {
                var7 = WorkModuleImplFloat.get_float(0x1000009);
                var7 += WorkModuleImplFloat.get_float(0x2000146);
                WorkModuleImpl.set_float(var7 + 0, 0x1000009);
                FighterUtil(0x6, var7);
            }
            var2 = WorkModuleImpl.get_int(0x11000002);
            if (var2 == 0)
            {
                var8 = WorkModuleImpl.get_int(0x12000138);
                if (var3 > var8)
                {
                    WorkModuleImpl.set_int(0, 0x11000003);
                    WorkModuleImpl.set_int(0x1, 0x11000002);
                    var9 = WorkModuleImplFloat.get_float(0x100000a);
                    var10 = WorkModuleImplFloat.get_float(0x100000b);
                    var11 = WorkModuleImplFloat.get_float(0x100000c);
                    var11 *= 30.0f / StageData(0x10);
                    var4 = StageData(0x4, var9, var10, var11);
                    var5 = StageData(0x5, var9, var10, var11);
                    var6 = StageData(0x6, var9, var10, var11);
                    EffectModuleImpl(0x2732, 0x1, 0, 10.0f, 10.0f, var4, var5, var6, 0, 0);
                    CameraModuleImpl(0x3, 0x6);
                    func_225();
                    var4 = PostureModuleImplFloat.get_pos_x();
                    var5 = PostureModuleImplFloat.get_pos_y();
                    var6 = PostureModuleImplFloat.get_pos_z();
                    var12 = 90.0f * 3.1415927410125732f / (float)0xb4;
                    func_226(var4, var5, var6, var12, 0);
                    SoundModuleImpl(0x2710, 0x143, 0x1, 0x1, 0x1);
                    func_22(0xfa, 0, 1.0f);
                    MotionModuleImpl.turn_back(0);
                    FighterUtil(0x17);
                }
                else
                {
                    var13 = WorkModuleImplFloat.get_float(0x100000a) + WorkModuleImplFloat.get_float(0x1000006);
                    var14 = WorkModuleImplFloat.get_float(0x100000b) + WorkModuleImplFloat.get_float(0x1000007);
                    var15 = WorkModuleImplFloat.get_float(0x100000c) + WorkModuleImplFloat.get_float(0x1000008);
                    WorkModuleImpl.set_float(var13 + 0, 0x100000a);
                    WorkModuleImpl.set_float(var14 + 0, 0x100000b);
                    WorkModuleImpl.set_float(var15 + 0, 0x100000c);
                }
            }
            else if (var2 == 0x1)
            {
                if (var3 > 0x14)
                {
                    WorkModuleImpl.set_int(0x2, 0x11000002);
                    WorkModuleImpl.set_int(0, 0x11000003);
                    WorkModuleImpl.set_float(0 + 0, 0x1000006);
                    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x2000142) + 0, 0x1000007);
                    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x2000145) + 0, 0x1000008);
                    WorkModuleImpl.set_float(0 + 0, 0x1000007);
                    if (sys_7(0x5) == 0)
                    {
                        CameraModuleImpl(0x2721, 0x1);
                    }
                }
            }
            else if (var2 == 0x2)
            {
                if (var3 > 0x50)
                {
                    WorkModuleImpl.set_int(0x3, 0x11000002);
                    WorkModuleImpl.set_int(0, 0x11000003);
                    SoundModuleImpl(0x2710, 0x47, 0, 0x1, 0x1);
                    if (sys_7(0xf))
                    {
                        CameraModuleImpl(0x3, 0x6);
                    }
                    else
                    {
                        CameraModuleImpl(0x3, 0x5);
                    }
                    ControlModuleImpl(0x2714, 0xe, 0);
                    var0 = func_222();
                }
                else
                {
                    var16 = WorkModuleImplFloat.get_float(0x1000007);
                    var17 = sys_35(0, var16, 0.03999999910593033f, WorkModuleImplFloat.get_float(0x2000144), WorkModuleImplFloat.get_float(0x300001a));
                    var16 += var17;
                    WorkModuleImpl.set_float(var16 + 0, 0x1000006);
                    var13 = WorkModuleImplFloat.get_float(0x100000a);
                    var14 = WorkModuleImplFloat.get_float(0x100000b) - var16;
                    var15 = WorkModuleImplFloat.get_float(0x100000c);
                    WorkModuleImpl.set_float(var13 + 0, 0x100000a);
                    WorkModuleImpl.set_float(var14 + 0, 0x100000b);
                    WorkModuleImpl.set_float(var15 + 0, 0x100000c);
                    WorkModuleImpl.set_float(var16 + 0, 0x1000007);
                }
            }
        }
    }
    WorkModuleImpl.set_int(var0, 0x11000006);
    if (var0 == 0x2)
    {
        WorkModuleImpl.on_flag2(0x2100000d);
        if (sys_7(0x5) == 0)
        {
            if (sys_7(0x7) == 0)
            {
                CameraModuleImpl(0x2721, 0);
            }
        }
    }
}

int func_222()
{
    return 0x2;
}

void func_223()
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
    int var9;
    int var10;
    int var11;
    int var12;
    int var13;
    float var14;
    float var15;
    if (WorkModuleImpl.is_flag(0x2100000f))
    {
        var0 = WorkModuleImplFloat.get_float(0x100000a);
        var1 = WorkModuleImplFloat.get_float(0x100000b);
        var2 = WorkModuleImplFloat.get_float(0x100000c);
        var2 *= 30.0f / StageData(0x10);
        var3 = StageData(0x4, var0, var1, var2);
        var4 = StageData(0x5, var0, var1, var2);
        var5 = StageData(0x6, var0, var1, var2);
        ModelModuleImpl(0x7, 0, var3, var4, var5);
        var6 = StageData(0x7);
        var7 = StageData(0x8);
        var8 = StageData(0x9);
        if (PostureModuleImplFloat.get_lr() < 0)
        {
            var7 += 90.0f;
        }
        else
        {
            var7 -= 90.0f;
        }
        var9 = WorkModuleImpl.get_int(0x11000006);
        var10 = WorkModuleImpl.get_int(0x1000002e);
        var11 = WorkModuleImpl.get_int(0x11000003);
        var12 = WorkModuleImpl.get_int(0x11000002);
        var13 = WorkModuleImpl.get_int(0x12000138);
        if (var9 == 0 && var10 == 0x2 && var12 == 0 && var11 <= var13)
        {
            var14 = WorkModuleImplFloat.get_float(0x100000d);
            var15 = sys_8(0x2) * sys_4C(0);
            var14 += WorkModuleImplFloat.get_float(0x2000310) * var15;
            WorkModuleImpl.set_float(var14 + 0, 0x100000d);
            var6 += var14;
        }
        var8 += WorkModuleImplFloat.get_float(0x100000e);
        PostureModuleImpl.set_rot(var6, var7, var8);
        if (var9 == 0 && var10 == 0x2)
        {
            if (var12 == 0)
            {
                
            }
            else if (var12 == 0x1)
            {
                EffectModuleImpl(0x2734, 0x1, 10.0f, 10.0f, var3, var4, var5, 0);
            }
        }
    }
}

void func_224()
{
    int var0;
    int var1;
    int var2;
    var0 = WorkModuleImpl.get_int(0x11000005);
    if (var0 != 0)
    {
        EffectModuleImpl(0x6, var0);
        WorkModuleImpl.set_int(0, 0x11000005);
    }
    var1 = WorkModuleImpl.get_int(0x1000002e);
    var2 = (int)0;
    if (var1 == 0)
    {
        var2 = WorkModuleImpl.get_int(0x1200012b);
    }
    else if (var1 == 0x1)
    {
        var2 = WorkModuleImpl.get_int(0x1200012b);
    }
    else if (var1 == 0x2)
    {
        var2 = WorkModuleImpl.get_int(0x1200013b);
    }
    WorkModuleImpl.set_int(var2, 0x1000002f);
    WorkModuleImpl.on_flag(0x20000000);
    if (var1 == 0x2)
    {
        sys_21(0x83, 0);
    }
    else if (var1 == 0x1)
    {
        PostureModuleImpl.set_scale(WorkModuleImplFloat.get_float(0x1000011));
    }
}

void func_225()
{
    FighterUtil(0x1c);
}

void func_226(int arg0, int arg1, int arg2, int arg3, int arg4)
{
    FighterUtil(0x1a, arg0, arg1, arg2, arg3, arg4);
}

int func_227()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x403e2, 0, 0);
    return 0;
}

void func_228()
{
    func_230();
    func_78(func_229);
}

void func_229()
{
    if (func_231())
    {
        return;
    }
    func_681();
    if (func_41())
    {
        return 0x1;
    }
    func_240();
}

void func_230()
{
    CameraModuleImpl(0x2719);
    sys_21(0xa, 0x1);
    JostleModuleImpl(0x2710, 0);
    VisibilityModuleImpl(0x2710, 0x1);
    sys_21(0x29);
    MotionModuleImpl(0x1, 0, 0, 1.0f, 0);
    if (!StopModuleImpl(0x1))
    {
        func_232();
    }
    global16 = func_232;
}

void func_231()
{
    if (WorkModuleImpl.get_int(0x11000004) > WorkModuleImpl.get_int(0x12000148))
    {
        func_16(0xe, 0);
        return 0x1;
    }
}

void func_232()
{
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        WorkModuleImpl.inc_int(0x11000004);
        if (global32 <= WorkModuleImplFloat.get_float(0x200001a))
        {
            func_16(0xe, 0x1);
            return 0x1;
        }
        if (func_88() <= WorkModuleImplFloat.get_float(0x2000006))
        {
            func_16(0xe, 0x1);
            return 0x1;
        }
        if (func_84() >= WorkModuleImplFloat.get_float(0x2000001))
        {
            func_16(0xe, 0x1);
            return 0x1;
        }
        if (!WorkModuleImpl.is_flag(0x2100000e))
        {
            func_40();
            sys_21(0xc, 0x1);
            WorkModuleImpl.on_flag(0x2100000e);
        }
    }
}

void func_233()
{
    
}

void func_234()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    int var6;
    int var7;
    float var8;
    int var9;
    var0 = PostureModuleImplFloat.get_pos_x();
    var1 = PostureModuleImplFloat.get_pos_y();
    var2 = PostureModuleImplFloat.get_pos_z();
    var3 = var0;
    var4 = var1;
    var5 = var2;
    var6 = WorkModuleImpl.get_int(0x10000000);
    if (WorkModuleImpl.is_flag(0x20000027))
    {
        
    }
    else if (WorkModuleImpl.is_flag(0x20000021))
    {
        
    }
    else
    {
        var7 = WorkModuleImpl.get_int(0x12000147);
        CameraModuleImpl(0x2, 0);
        var0 = var0 + 0;
        var1 = var1 + 100.0f;
        var2 = 0;
        PostureModuleImpl.set_pos(var0, var1, var2);
        WorkModuleImpl.set_int(0, 0x11000002);
        WorkModuleImpl.set_int(var7, 0x11000003);
        WorkModuleImpl.set_float(var0, 0x1000006);
        WorkModuleImpl.set_float(var1, 0x1000007);
        WorkModuleImpl.set_float(var3, 0x1000008);
        WorkModuleImpl.set_float(var4, 0x1000009);
        WorkModuleImpl.on_flag(0x20000001);
        if (!WorkModuleImpl.is_flag(0x20000033))
        {
            var8 = PostureModuleImplFloat.get_lr();
            var9 = (int)0;
            CameraModuleImpl(0x271f, var6, var3, var4 + (float)var9, var5, var8, var7, 0.09399999678134918f);
            func_237(var0, var1, var2);
        }
        func_236(var6);
        GroundModuleImpl(0x1c, 0);
    }
    HitModuleImpl(0, 0x3);
    sys_21(0x79, 0, 0x8);
}

void func_235()
{
    printf("status_Rebirth sub_end_move");
    WorkModuleImpl.on_flag(0x2100000d);
    WorkModuleImpl.off_flag(0x20000001);
    GroundModuleImpl(0x2710, 0x5);
    CameraModuleImpl(0x2, 0x1);
}

void func_236(int arg0)
{
    
}

void func_237(int arg0, int arg1, int arg2)
{
    float var3;
    int var4;
    var3 = WorkModuleImplFloat.get_float(0x3000062);
    var4 = EffectModuleImpl(0x3, 0x1000061, arg0, arg1, arg2, 0, 0, 0, var3, 0, 0xffffffff);
    WorkModuleImpl.set_int(var4, 0x11000005);
}

void func_238(int arg0, int arg1, int arg2)
{
    int var3;
    var3 = WorkModuleImpl.get_int(0x11000005);
    if (var3 != 0)
    {
        EffectModuleImpl(0x17, var3, arg0, arg1, arg2);
    }
}

void func_239()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000005);
    if (var0 != 0)
    {
        EffectModuleImpl(0x6, var0);
        WorkModuleImpl.set_int(0, 0x11000005);
    }
}

void func_240()
{
    if (!global3)
    {
        func_242();
    }
}

void func_241()
{
    int var0;
    int var1;
    if (!WorkModuleImpl.is_flag(0x21000011) && global9 > 1.0f)
    {
        printf("sub_rebirth_uniq_process_exec_status FIGHTER_EFFECT_KIND_REBIRTH");
        EffectModuleImpl(0x1f, 0x21, 0);
        WorkModuleImpl.on_flag2(0x21000011);
    }
    if (!WorkModuleImpl.is_flag(0x2100000d))
    {
        var0 = WorkModuleImpl.get_int(0x11000002);
        var1 = WorkModuleImpl.get_int(0x11000003);
        var0++;
        WorkModuleImpl.set_int(var0, 0x11000002);
        if (var0 > var1)
        {
            func_235();
            FighterUtil(0xe);
        }
        else if (!WorkModuleImpl.is_flag(0x21000010))
        {
            FighterUtil(0xf, WorkModuleImplFloat.get_float(0x1000006), WorkModuleImplFloat.get_float(0x1000007), 0, WorkModuleImplFloat.get_float(0x1000008), WorkModuleImplFloat.get_float(0x1000009), 0, var0, var1);
        }
    }
    else
    {
        FighterUtil(0xe);
    }
}

void func_242()
{
    int var0;
    int var1;
    float var2;
    float var3;
    float var4;
    if (!WorkModuleImpl.is_flag(0x2100000d))
    {
        if (!WorkModuleImpl.is_flag(0x2100000f))
        {
            var0 = WorkModuleImpl.get_int(0x11000002);
            var1 = WorkModuleImpl.get_int(0x11000003);
            if (var0 > var1 / 0x2)
            {
                sys_21(0x31);
                sys_21(0x54);
                WorkModuleImpl.on_flag(0x2100000f);
            }
        }
    }
    if (!WorkModuleImpl.is_flag(0x20000033))
    {
        var2 = PostureModuleImplFloat.get_pos_x();
        var3 = PostureModuleImplFloat.get_pos_y();
        var4 = PostureModuleImplFloat.get_pos_z();
        func_238(var2, var3, var4);
    }
}

void func_243()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x10000000);
    func_239();
    WorkModuleImpl.off_flag(0x20000001);
    if (!WorkModuleImpl.is_flag(0x20000027))
    {
        var1 = (int)((float)WorkModuleImpl.get_int(0x12000149) * WorkModuleImplFloat.get_float(0x30000fd));
        HitModuleImpl(0x1, var1, 0);
    }
    CameraModuleImpl(0x2, 0x1);
    FighterUtil(0x19, 0);
}

int func_244()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x9, 0, 0x1, 2.0f, 0x40, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1, 0, 0x1, 0);
    return 0;
}

int func_245()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x52, 0, 0x4, 0x80);
    return 0;
}

int func_246()
{
    int var0;
    var0 = 0x1062;
    if (sys_21(0x89) == 0)
    {
        var0 = 0x62;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, var0, 0, 0x2, 0x40);
    return 0;
}

int func_247()
{
    int var0;
    var0 = 0x1092;
    if (sys_21(0x89) == 0)
    {
        var0 = 0x92;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, var0, 0, 0x2, 0x40);
    return 0;
}

int func_248()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x9, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x10a2, 0, 0x2, 0x40);
    return 0;
}

int func_249()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0x180, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x210b2, 0, 0, 0x800);
    return 0;
}

int func_250()
{
    func_251(0, 0x4, 0x1c0);
    return 0;
}

void func_251(int arg0, int arg1, int arg2)
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, arg0, arg1, arg2, 0x9c0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x200b2, 0, 0, 0);
}

int func_252()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0x4, 0x4, 0x1c1, 0x860);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x200b2, 0, 0x40, 0);
    return 0;
}

int func_253()
{
    StatusModuleImpl(0x5, 0, 0x6, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x210c2, 0, 0, 0x800);
    return 0;
}

int func_254()
{
    func_255(0, 0x4, 0x1c0);
    return 0;
}

int func_255(int arg0, int arg1, int arg2)
{
    StatusModuleImpl(0x5, 0, 0x6, 0x2, 0, 0x1, arg0, arg1, arg2, 0x9c0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x200c2, 0, 0, 0);
    return 0;
}

int func_256()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0x4, 0x4, 0x1c1, 0x860);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x200c2, 0, 0x40, 0);
    return 0;
}

int func_257()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x210d2, 0, 0, 0x800);
    return 0;
}

int func_258()
{
    func_259(0, 0x4, 0x1c0);
    return 0;
}

int func_259(int arg0, int arg1, int arg2)
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, arg0, arg1, arg2, 0x9c0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x200d2, 0, 0, 0);
    return 0;
}

int func_260()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0x4, 0x4, 0x1c1, 0x860);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x200d2, 0, 0x40, 0);
    return 0;
}

int func_261()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0, 0x1, 0x2002, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4000, 0x8, 0x100);
    return 0;
}

void func_262()
{
    if (global5 != 0x25)
    {
        WorkModuleImpl.set_int(0, 0x11000006);
    }
    if (ComboModuleImpl(0) >= WorkModuleImpl.get_int(0x13000107))
    {
        ComboModuleImpl(0x2);
    }
    WorkModuleImpl.strans_on(0x1e000053);
}

void func_263()
{
    int var0;
    func_262();
    var0 = WorkModuleImpl.get_int(0x13000106);
    if (!StopModuleImpl(0x1))
    {
        func_268();
    }
    global15 = func_268;
    if (var0 == 0)
    {
        if (ControlModuleImpl(0x2712, 0) == 0x1 && WorkModuleImpl.is_flag(0x21000013) == 0x1)
        {
            WorkModuleImpl.on_flag2(0x2100001a);
        }
        if (!StopModuleImpl(0x1))
        {
            func_266();
        }
        global16 = func_266;
    }
    else if (var0 == 0x1)
    {
        if (!StopModuleImpl(0x1))
        {
            func_267();
        }
        global16 = func_267;
    }
    else if (var0 == 0x2)
    {
        if (!StopModuleImpl(0x1))
        {
            func_267();
        }
        global16 = func_267;
    }
    func_78(func_270);
}

void func_264()
{
    if (!global3)
    {
        if (ControlModuleImpl(0x2710, 0) || ControlModuleImpl(0x2711, 0))
        {
            WorkModuleImpl.inc_int(0x11000003);
        }
    }
    else if (ControlModuleImpl(0x2726, 0) || ControlModuleImpl(0x2727, 0))
    {
        WorkModuleImpl.inc_int(0x11000003);
    }
}

void func_265()
{
    if (global38 & 0x1)
    {
        WorkModuleImpl.on_flag2(0x21000010);
    }
}

void func_266()
{
    if (ControlModuleImpl(0x2712, 0) == 0x1)
    {
        if (WorkModuleImpl.is_flag(0x21000013) == 0x1)
        {
            WorkModuleImpl.on_flag2(0x2100001a);
            WorkModuleImpl.on_flag2(0x2100001e);
        }
    }
    func_265();
}

void func_267()
{
    func_265();
    if (global38 & 0x1 && WorkModuleImpl.is_flag(0x2100000d) == 0x1)
    {
        WorkModuleImpl.on_flag2(0x21000012);
    }
    if (ControlModuleImpl(0x2712, 0) == 0x1)
    {
        if (AttackModuleImpl(0x2727))
        {
            if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
            {
                WorkModuleImpl.on_flag2(0x21000012);
            }
        }
        else
        {
            if (WorkModuleImpl.is_flag(0x21000013) == 0x1 && WorkModuleImpl.is_flag(0x21000019) == 0)
            {
                WorkModuleImpl.on_flag2(0x2100001a);
                WorkModuleImpl.on_flag2(0x2100001e);
                ComboModuleImpl(0x2);
            }
            if (WorkModuleImpl.is_flag(0x2100000e) == 0x1)
            {
                WorkModuleImpl.on_flag2(0x21000012);
                if (ControlModuleImpl(0x2710, 0) == 0x1)
                {
                    WorkModuleImpl.on_flag2(0x2100001f);
                }
            }
        }
    }
    else
    {
        WorkModuleImpl.on_flag2(0x21000019);
    }
    if (WorkModuleImpl.is_flag(0x2100001d) == 0x1 && WorkModuleImpl.is_flag(0x21000012) == 0x1 && ComboModuleImpl(0) == WorkModuleImpl.get_int(0x13000107))
    {
        WorkModuleImpl.on_flag2(0x2100001a);
        ComboModuleImpl(0x2);
        if (WorkModuleImpl.is_flag(0x2100000e) == 0x1 && WorkModuleImpl.is_flag(0x2100001f) == 0)
        {
            WorkModuleImpl.on_flag2(0x2100001e);
        }
    }
}

void func_268()
{
    if (StatusModuleImpl(0x6))
    {
        func_269();
    }
    else if (ComboModuleImpl(0) < WorkModuleImpl.get_int(0x13000107) && WorkModuleImpl.is_flag(0x21000012) == 0x1)
    {
        func_269();
    }
}

void func_269()
{
    int var0;
    int var1;
    int var2;
    int var3;
    ControlModuleImpl(0x271b);
    AttackModuleImpl(0x2719);
    AttackModuleImpl(0x2724);
    CancelModuleImpl.disable_cancel();
    ControlModuleImpl(0x271f);
    var0 = WorkModuleImpl.is_flag(0x2100000e);
    WorkModuleImpl.off_flag2(0x21000012);
    WorkModuleImpl.off_flag2(0x21000013);
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.off_flag2(0x2100000e);
    WorkModuleImpl.off_flag2(0x21000010);
    WorkModuleImpl.off_flag2(0x21000019);
    WorkModuleImpl.off_flag2(0x2100001a);
    WorkModuleImpl.off_flag2(0x21000011);
    ComboModuleImpl(0x1, 0);
    var1 = ComboModuleImpl(0);
    var2 = WorkModuleImpl.get_int(0x13000106);
    if (var1 == 0x1)
    {
        func_22(FighterUtil.is_hammer_status(), 0, 1.0f);
        if (global1 != 0x34)
        {
            sys_21(0xd, 0x2, 0x1, 0x1);
        }
        var3 = 0x1;
        if (WorkModuleImpl.is_flag(0x2100001e) && global5 == 0x25)
        {
            var3 = 0;
        }
        if (var3)
        {
            sys_21(0x1c, 0x5);
        }
    }
    else if (var1 == 0x2)
    {
        func_22(0x51, 0, 1.0f);
        sys_21(0xd, 0x2, 0x2);
        KineticModuleImpl.clear_speed(0);
        sys_21(0xe);
        var3 = 0x1;
        if (var0 && WorkModuleImpl.is_flag(0x2100001f) == 0)
        {
            var3 = 0;
        }
        if (var3)
        {
            sys_21(0x1c, 0x5);
        }
    }
    else if (var1 == 0x3)
    {
        func_22(0x52, 0, 1.0f);
        sys_21(0xd, 0x2, 0x3);
        sys_21(0xe);
        var3 = 0x1;
        if (var0 && WorkModuleImpl.is_flag(0x2100001f) == 0)
        {
            var3 = 0;
        }
        if (var3)
        {
            sys_21(0x1c, 0x5);
        }
    }
    WorkModuleImpl.off_flag2(0x2100001e);
    WorkModuleImpl.off_flag2(0x2100001f);
}

void func_270()
{
    int var0;
    func_264();
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (WorkModuleImpl.get_int(0x13000108) != 0)
    {
        if (AttackModuleImpl(0x2727))
        {
            if (WorkModuleImpl.is_flag(0x21000011))
            {
                if (ControlModuleImpl(0x2712, 0))
                {
                    if (ComboModuleImpl(0) >= WorkModuleImpl.get_int(0x13000107))
                    {
                        if (WorkModuleImpl.is_flag(0x2100000d))
                        {
                            if (global18 == 0)
                            {
                                func_16(0x26, 0x1);
                                return 0x1;
                            }
                        }
                    }
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000053))
        {
            if (WorkModuleImpl.is_flag(0x21000011))
            {
                if (WorkModuleImpl.get_int(0x11000003) >= WorkModuleImpl.get_int(0x13000056))
                {
                    if (global18 == 0)
                    {
                        printf("ATTACK 100 2 100_COUNT: %d, ENABLE_CNT: %d", WorkModuleImpl.get_int(0x11000003), WorkModuleImpl.get_int(0x13000056));
                        func_16(0x26, 0);
                        return 0x1;
                    }
                }
            }
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    var0 = WorkModuleImpl.get_int(0x13000106);
    if (var0 == 0)
    {
        if (WorkModuleImpl.is_flag(0x2100001a) == 0x1)
        {
            func_16(0x25, 0);
            return;
        }
    }
    else if (var0 == 0x1)
    {
        if (WorkModuleImpl.is_flag(0x2100001a) == 0x1)
        {
            func_16(0x25, 0);
            return;
        }
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0, 0);
        return;
    }
}

void func_271()
{
    if (WorkModuleImpl.get_int(0x11000002) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) < 0)
        {
            WorkModuleImpl.strans_off(0x1e00006f);
            WorkModuleImpl.strans_off(0x1e00006e);
        }
    }
    WorkModuleImpl.inc_int(0x11000003);
    if (WorkModuleImpl.get_int(0x11000003) <= WorkModuleImpl.get_int(0x120001ef))
    {
        func_103();
    }
    if (WorkModuleImpl.get_int(0x11000003) >= WorkModuleImpl.get_int(0x1300000c) && WorkModuleImpl.is_flag(0x2100000d) == 0)
    {
        WorkModuleImpl.strans_off(0x1e00005c);
        WorkModuleImpl.on_flag2(0x2100000d);
    }
}

void func_272()
{
    func_22(0x56, 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e00006f);
    WorkModuleImpl.strans_on(0x1e00006e);
    WorkModuleImpl.strans_on(0x1e00005c);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000e0), 0x11000002);
    WorkModuleImpl.off_flag2(0x2100000d);
    if (!StopModuleImpl(0x1))
    {
        func_271();
    }
    global16 = func_271;
    func_78(func_273);
}

void func_273()
{
    int var0;
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00006f) == 0x1 && func_88() <= WorkModuleImplFloat.get_float(0x2000014) && ControlModuleImpl(0x2712, 0x3) == 0x1 && global18 == 0 && ItemModuleImpl(0x4) == 0)
    {
        func_16(0x39, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00006e) == 0x1 && ControlModuleImpl(0x2712, 0x3) == 0x1 && global18 == 0 && ItemModuleImpl(0x4) == 0)
    {
        func_16(0x37, 0x1);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        var0 = WorkModuleImpl.get_int(0x1300011c);
        if (var0 == 0x1)
        {
            func_16(0x12, 0);
        }
        else
        {
            func_16(0, 0);
        }
    }
}

void func_274()
{
    if (global38 & 0x1 && WorkModuleImpl.is_flag(0x2100000f) == 0x1)
    {
        WorkModuleImpl.on_flag2(0x21000010);
    }
}

void func_275()
{
    if (global5 == 0x8)
    {
        KineticModuleImpl.change_kinetic_type(0x7);
        if (global1 == 0x38)
        {
            KineticModuleImpl(0xe, 0, 0x2, 0, 0, 0, 0, 0);
            KineticModuleImpl.enable_energy(0);
        }
    }
    ControlModuleImpl(0x271b);
    if (!StopModuleImpl(0x1))
    {
        func_274();
    }
    global16 = func_274;
    func_33();
    KineticModuleImpl.set_trans_lr(0, PostureModuleImplFloat.get_lr());
    func_78(func_277);
}

void func_276()
{
    int var0;
    float var1;
    ControlModuleImpl(0x271b);
    ControlModuleImpl(0x271f);
    WorkModuleImpl.off_flag2(0x2100000d);
    WorkModuleImpl.off_flag2(0x21000010);
    WorkModuleImpl.on_flag2(0x2100000f);
    ComboModuleImpl(0x1, 0x1);
    var0 = ComboModuleImpl(0);
    if (var0 == 0x1)
    {
        var1 = ControlModuleImplFloat.get_stick_angle();
        if (MotionModuleImpl.is_exist(0x57) == 0x1 && var1 > WorkModuleImplFloat.get_float(0x2000032))
        {
            func_22(0x57, 0, 1.0f);
        }
        else if (MotionModuleImpl.is_exist(0x5b) == 0x1 && var1 < WorkModuleImplFloat.get_float(0x2000033))
        {
            func_22(0x5b, 0, 1.0f);
        }
        else
        {
            func_22(FighterUtil(0x1f), 0, 1.0f);
        }
    }
    else if (var0 == 0x2)
    {
        func_22(0x59, 0, 1.0f);
        sys_21(0xd, 0x2, 0x7);
        sys_21(0xe);
        sys_21(0x1c, 0x6);
    }
    else if (var0 == 0x3)
    {
        func_22(0x5a, 0, 1.0f);
        sys_21(0xd, 0x2, 0x8);
        sys_21(0xe);
        sys_21(0x1c, 0x6);
    }
}

void func_277()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (StatusModuleImpl(0x6) == 0x1 || ComboModuleImpl(0) < WorkModuleImpl.get_int(0x13000109) && WorkModuleImpl.is_flag(0x21000010) == 0x1 && WorkModuleImpl.is_flag(0x2100000d) == 0x1)
    {
        func_276();
    }
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

void func_278()
{
    func_22(FighterUtil(0x20), 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_274();
    }
    global16 = func_274;
    func_78(func_279);
}

void func_279()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x21000010) == 0x1)
    {
        if (StatusModuleImpl(0x6) == 0x1 || ComboModuleImpl(0) < WorkModuleImpl.get_int(0x13000109) && WorkModuleImpl.is_flag(0x21000010) == 0x1 && WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            func_276();
        }
    }
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

void func_280()
{
    func_22(FighterUtil(0x21), 0, 1.0f);
    WorkModuleImpl(0x1b, 0x1e000034);
    WorkModuleImpl(0x1b, 0x1e00002f);
}

void func_281()
{
    func_280();
    if (!StopModuleImpl(0x1))
    {
        func_274();
    }
    global16 = func_274;
    func_78(func_282);
}

int func_282()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return 0x1;
    }
    if (WorkModuleImpl.is_flag(0x21000010) == 0x1)
    {
        if (StatusModuleImpl(0x6) == 0x1 || ComboModuleImpl(0) < WorkModuleImpl.get_int(0x13000109) && WorkModuleImpl.is_flag(0x21000010) == 0x1 && WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            func_276();
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0x12, 0);
        return 0x1;
    }
    return 0;
}

void func_283()
{
    WorkModuleImpl.dec_int(0x11000005);
}

void func_284()
{
    if (global4 == 0x2c || global4 == 0x2d)
    {
        if (TurnModuleImpl(0) && TurnModuleImpl(0x1) == 0)
        {
            if (PostureModuleImplFloat.get_lr() != WorkModuleImplFloat.get_float(0x1000007))
            {
                TurnModuleImpl(0x2);
                WorkModuleImpl.set_float(PostureModuleImplFloat.get_lr(), 0x1000007);
            }
            if (PostureModuleImplFloat.get_lr() != WorkModuleImplFloat.get_float(0x1000008))
            {
                KineticModuleImpl.set_trans_lr(0, WorkModuleImplFloat.get_float(0x1000008));
            }
        }
    }
}

void func_285()
{
    if (TurnModuleImpl(0) && TurnModuleImpl(0x1) == 0)
    {
        if (PostureModuleImplFloat.get_lr() == WorkModuleImplFloat.get_float(0x1000007))
        {
            if (PostureModuleImplFloat.get_lr() == 1.0f)
            {
                sys_21(0x67, 1.0f);
            }
            else if (PostureModuleImplFloat.get_lr() == -1.0f)
            {
                sys_21(0x67, -1.0f);
            }
        }
        TurnModuleImpl(0x2711);
    }
}

void func_286()
{
    if (global5 == 0x8)
    {
        KineticModuleImpl.change_kinetic_type(0x7);
    }
    WorkModuleImpl.strans_on(0x1e00005a);
    WorkModuleImpl.strans_on(0x1e000058);
    PostureModuleImpl.update_rot_y();
    func_22(0x5f, 0, 1.0f);
    func_78(func_287);
}

void func_287()
{
    int var0;
    var0 = WorkModuleImpl.is_flag(0x2100001b);
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00005a) != 0 && var0 == 0x1 && ControlModuleImpl(0x2712, 0))
    {
        func_16(0x2c, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000058) && var0 == 0x1)
    {
        func_16(0x2d, 0);
        return 0x1;
    }
}

void func_288()
{
    float var0;
    float var1;
    int var2;
    float var3;
    if (!StopModuleImpl(0x1))
    {
        func_283();
    }
    global16 = func_283;
    var0 = WorkModuleImplFloat.get_float(0x30000e1);
    var1 = (float)WorkModuleImpl.get_int(0x1300005b);
    var2 = (int)(var1 / var0);
    WorkModuleImpl.set_int(var2, 0x11000008);
    var3 = WorkModuleImplFloat.get_float(0x25);
    if (var3 > 0)
    {
        var2 = (int)((float)var2 * var3);
    }
    var0 = var1 / (float)var2;
    WorkModuleImpl.set_int(var2, 0x11000005);
    WorkModuleImpl.set_int(var2, 0x11000009);
    func_22(0x62, 0, var0);
    func_78(func_289);
}

void func_289()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    else if (global18 == 0)
    {
        if (WorkModuleImpl.get_int(0x11000005) <= 0 || !ControlModuleImpl(0x2712, 0))
        {
            func_16(0x2d, 0x1);
            return 0x1;
        }
    }
}

void func_290()
{
    func_291(0x1);
    WorkModuleImpl.on_flag2(0x2100001c);
    func_78(func_293);
}

void func_291(int arg0)
{
    float var1;
    if (arg0 == 0x1)
    {
        var1 = ControlModuleImplFloat.get_stick_angle();
        if (MotionModuleImpl.is_exist(0x5e) == 0x1 && var1 > WorkModuleImplFloat.get_float(0x2000038))
        {
            WorkModuleImpl.set_int(0x5e, 0x11000002);
        }
        else if (MotionModuleImpl.is_exist(0x61) == 0x1 && var1 < WorkModuleImplFloat.get_float(0x2000039))
        {
            WorkModuleImpl.set_int(0x61, 0x11000002);
        }
        else
        {
            WorkModuleImpl.set_int(0x5f, 0x11000002);
        }
    }
    else
    {
        WorkModuleImpl.set_int(0x5f, 0x11000002);
    }
}

void func_292()
{
    int var0;
    int var1;
    float var2;
    ControlModuleImpl(0x271b);
    WorkModuleImpl.off_flag2(0x2100000d);
    ComboModuleImpl(0x1, 0x2);
    var0 = ComboModuleImpl(0);
    if (var0 == 0x1)
    {
        var1 = WorkModuleImpl.get_int(0x11000002);
        var2 = WorkModuleImplFloat.get_float(0x1000006);
        MotionModuleImpl(0x26, var1, var2, 1.0f);
    }
    else if (var0 == 0x2)
    {
        func_22(0x60, 0, 1.0f);
        sys_21(0xe);
        sys_21(0x1c, 0xb);
    }
}

void func_293()
{
    if (StatusModuleImpl(0x6) == 0x1 || ComboModuleImpl(0) < WorkModuleImpl.get_int(0x1300010a) && global38 & 0x1 && WorkModuleImpl.is_flag(0x2100000d) == 0x1)
    {
        func_292();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
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

void func_294(int arg0)
{
    WorkModuleImpl.strans_on(0x1e00005d);
    WorkModuleImpl.strans_on(0x1e00005b);
    func_22(arg0, 0, 1.0f);
    func_78(func_296);
}

void func_295()
{
    func_294(0x63);
}

int func_296()
{
    int var0;
    var0 = WorkModuleImpl.is_flag(0x2100001b);
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00005d) != 0 && var0 == 0x1 && ControlModuleImpl(0x2712, 0))
    {
        func_16(0x32, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00005b) != 0 && var0 == 0x1)
    {
        func_16(0x33, 0);
        return 0x1;
    }
    return 0;
}

void func_297(int arg0)
{
    float var1;
    float var2;
    int var3;
    float var4;
    if (!StopModuleImpl(0x1))
    {
        func_283();
    }
    global16 = func_283;
    var1 = WorkModuleImplFloat.get_float(0x30000e1);
    var2 = (float)WorkModuleImpl.get_int(0x1300005c);
    var3 = (int)(var2 / var1);
    WorkModuleImpl.set_int(var3, 0x11000008);
    var4 = WorkModuleImplFloat.get_float(0x25);
    if (var4 > 0)
    {
        var3 = (int)((float)var3 * var4);
    }
    var1 = var2 / (float)var3;
    WorkModuleImpl.set_int(var3, 0x11000005);
    WorkModuleImpl.set_int(var3, 0x11000009);
    func_22(arg0, 0, var1);
    func_78(func_299);
}

void func_298()
{
    func_297(0x64);
}

int func_299()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    else if (global18 == 0)
    {
        if (WorkModuleImpl.get_int(0x11000005) <= 0 || !ControlModuleImpl(0x2712, 0))
        {
            func_16(0x33, 0x1);
            return 0x1;
        }
    }
    return 0;
}

void func_300(int arg0)
{
    float var1;
    WorkModuleImpl.on_flag2(0x2100001c);
    var1 = WorkModuleImplFloat.get_float(0x1000006);
    MotionModuleImpl(0x26, arg0, var1, 1.0f);
    func_78(func_302);
}

void func_301()
{
    func_300(0x63);
}

void func_302()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
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

void func_303()
{
    WorkModuleImpl.strans_on(0x1e000060);
    WorkModuleImpl.strans_on(0x1e00005e);
    func_22(0x65, 0, 1.0f);
    func_78(func_304);
}

void func_304()
{
    int var0;
    var0 = WorkModuleImpl.is_flag(0x2100001b);
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000060) != 0 && var0 == 0x1 && ControlModuleImpl(0x2712, 0))
    {
        func_16(0x2f, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00005e) != 0 && var0 == 0x1)
    {
        func_16(0x30, 0);
        return 0x1;
    }
}

void func_305()
{
    float var0;
    float var1;
    int var2;
    float var3;
    if (!StopModuleImpl(0x1))
    {
        func_283();
    }
    global16 = func_283;
    var0 = WorkModuleImplFloat.get_float(0x30000e1);
    var1 = (float)WorkModuleImpl.get_int(0x1300005d);
    var2 = (int)(var1 / var0);
    WorkModuleImpl.set_int(var2, 0x11000008);
    var3 = WorkModuleImplFloat.get_float(0x25);
    if (var3 > 0)
    {
        var2 = (int)((float)var2 * var3);
    }
    var0 = var1 / (float)var2;
    WorkModuleImpl.set_int(var2, 0x11000005);
    WorkModuleImpl.set_int(var2, 0x11000009);
    func_22(0x67, 0, var0);
    func_78(func_306);
}

int func_306()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    else if (global18 == 0)
    {
        if (WorkModuleImpl.get_int(0x11000005) <= 0 || !ControlModuleImpl(0x2712, 0))
        {
            func_16(0x30, 0x1);
            return 0x1;
        }
    }
    return 0;
}

void func_307()
{
    WorkModuleImpl.on_flag2(0x2100001c);
    func_78(func_309);
}

void func_308()
{
    int var0;
    int var1;
    float var2;
    ControlModuleImpl(0x271b);
    WorkModuleImpl.off_flag2(0x2100000d);
    ComboModuleImpl(0x1, 0x2);
    var0 = ComboModuleImpl(0);
    if (var0 == 0x1)
    {
        var1 = 0x65;
        var2 = WorkModuleImplFloat.get_float(0x1000006);
        MotionModuleImpl(0x26, var1, var2, 1.0f);
    }
    else if (var0 == 0x2)
    {
        func_22(0x66, 0, 1.0f);
        sys_21(0xe);
        sys_21(0x1c, 0xb);
    }
}

void func_309()
{
    if (StatusModuleImpl(0x6) == 0x1 || ComboModuleImpl(0) < WorkModuleImpl.get_int(0x1300010b) && global38 & 0x1 && WorkModuleImpl.is_flag(0x2100000d) == 0x1)
    {
        func_308();
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
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

void func_310()
{
    int var0;
    var0 = 0x68;
    var0 = func_311();
    func_22(var0, 0, 1.0f);
    WorkModuleImpl.set_int(var0, 0x11000002);
}

int func_311()
{
    int var0;
    int var1;
    var0 = 0x68;
    var1 = ControlModuleImpl(0x10);
    if (var1 == 0x1)
    {
        sys_21(0xd, 0x2, 0xe);
    }
    else if (var1 == 0x2)
    {
        var0 = 0x69;
        sys_21(0xd, 0x2, 0xf);
    }
    else if (var1 == 0x3)
    {
        var0 = 0x6a;
        sys_21(0xd, 0x2, 0x12);
    }
    else if (var1 == 0x4)
    {
        var0 = 0x6b;
        sys_21(0xd, 0x2, 0x13);
    }
    else if (var1 == 0x5)
    {
        var0 = 0x6c;
        sys_21(0xd, 0x2, 0x14);
    }
    return var0;
}

void func_312(int arg0)
{
    ControlModuleImpl(0x271b);
    WorkModuleImpl.strans_group_on(0x1f000008);
    if (!StopModuleImpl(0x1))
    {
        func_316();
    }
    global16 = func_316;
    if (arg0 == 0x1)
    {
        func_310();
    }
    ControlModuleImpl(0x11);
}

void func_313()
{
    if (func_55())
    {
        return 0x1;
    }
}

void func_314()
{
    func_312(0x1);
}

void func_315()
{
    func_314();
    func_78(func_319);
}

void func_316()
{
    WorkModuleImpl.inc_int(0x11000003);
    if (WorkModuleImpl.get_int(0x11000003) <= WorkModuleImpl.get_int(0x120001f0))
    {
        func_103();
    }
    func_550();
}

void func_317()
{
    if (global18 == 0)
    {
        if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            func_16(0x18, 0);
        }
        else
        {
            func_16(0x16, 0);
        }
        return 0x1;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (func_313())
    {
        return 0x1;
    }
}

int func_318()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    func_317();
    return 0;
}

void func_319()
{
    if (func_318())
    {
        return;
    }
    func_555();
    if (!global3)
    {
        func_341();
    }
}

void func_320()
{
    
}

void func_321()
{
    
}

void func_322()
{
    
}

void func_323()
{
    
}

void func_324()
{
    
}

void func_325()
{
    int var0;
    WorkModuleImpl.set_float(MotionModuleImplFloat.get_frame() + 0, 0x1000006);
    var0 = global6;
    if (var0 == 0x2c)
    {
        KineticModuleImpl.set_speed(0, 0, 0);
    }
}

void func_326()
{
    PhysicsModuleImpl(0x8);
}

void func_327()
{
    
}

void func_328()
{
    func_325();
}

void func_329()
{
    PhysicsModuleImpl(0x8);
}

void func_330()
{
    
}

void func_331()
{
    func_325();
}

void func_332()
{
    PhysicsModuleImpl(0x8);
}

void func_333()
{
    
}

void func_334()
{
    
}

int func_335()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x9, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x42, 0, 0x1, 0x20000000);
    return 0;
}

void func_336()
{
    if (MotionModuleImpl.is_exist(0x53))
    {
        func_22(0x53, 0, 1.0f);
    }
    WorkModuleImpl.set_int(0, 0x11000007);
    func_78(func_337);
}

void func_337()
{
    int var0;
    int var1;
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    var0 = WorkModuleImpl.get_int(0x11000007);
    if (var0 == 0)
    {
        var1 = MotionModuleImpl.get_motion();
        if (var1 != 0x53 || MotionModuleImpl.is_end())
        {
            WorkModuleImpl.on_flag2(0x21000015);
            WorkModuleImpl.off_flag2(0x21000016);
            WorkModuleImpl.off_flag2(0x21000017);
            func_22(0x54, 0, 1.0f);
            WorkModuleImpl.set_int(0x1, 0x11000007);
        }
    }
    else if (var0 == 0x1)
    {
        if (!StopModuleImpl(0x1))
        {
            func_338();
        }
        global16 = func_338;
        if (!WorkModuleImpl.is_flag(0x21000015))
        {
            func_22(0x55, 0, 1.0f);
            WorkModuleImpl.set_int(0x2, 0x11000007);
        }
    }
    else if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
    }
}

void func_338()
{
    if (ControlModuleImpl(0x2710, 0) || ControlModuleImpl(0x2711, 0))
    {
        WorkModuleImpl.on_flag2(0x21000010);
    }
    if (WorkModuleImpl.is_flag(0x21000018))
    {
        if (WorkModuleImpl.is_flag(0x21000016))
        {
            WorkModuleImpl.off_flag2(0x21000016);
            if (WorkModuleImpl.is_flag(0x21000010))
            {
                WorkModuleImpl.off_flag2(0x21000010);
            }
            else if (ControlModuleImpl(0x2713, 0))
            {
                WorkModuleImpl.off_flag2(0x21000015);
            }
        }
    }
    else if (MotionModuleImpl(0xb))
    {
        WorkModuleImpl.on_flag2(0x21000018);
    }
    if (WorkModuleImpl.is_flag(0x21000021))
    {
        WorkModuleImpl.off_flag2(0x21000021);
        if (WorkModuleImpl.get_int(0x11000004) > 0)
        {
            WorkModuleImpl.dec_int(0x11000004);
            if (WorkModuleImpl.get_int(0x11000004) == 0)
            {
                WorkModuleImpl.off_flag2(0x21000015);
            }
        }
    }
}

void func_339()
{
    
}

void func_340()
{
    FighterUtil(0x1);
}

void func_341()
{
    FighterUtil.check_cloud_through_out();
}

void func_342()
{
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        if (global6 == 0x18 || global6 == 0x16 || global6 == 0x17)
        {
            KineticModuleImpl.clear_speed_all();
        }
    }
}

void func_343()
{
    if (global4 == 0x2b)
    {
        if (TurnModuleImpl(0) && TurnModuleImpl(0x1) == 0)
        {
            if (PostureModuleImplFloat.get_lr() != WorkModuleImplFloat.get_float(0x1000008))
            {
                sys_21(0x67, WorkModuleImplFloat.get_float(0x1000008));
                KineticModuleImpl.set_trans_lr(0, WorkModuleImplFloat.get_float(0x1000008));
            }
        }
    }
    else if (global4 == 0x2c || global4 == 0x2d)
    {
        func_284();
    }
}

void func_344()
{
    int var0;
    float var1;
    func_343();
    var0 = global4;
    if (var0 == 0x2e || var0 == 0x31 || var0 == 0x2b || var0 == 0x94)
    {
        if (WorkModuleImplFloat.get_float(0x25) > 0)
        {
            DamageModuleImpl(0xb, 0x2, WorkModuleImplFloat.get_float(0x27) + 0);
        }
    }
    else if (var0 == 0x2f || var0 == 0x32 || var0 == 0x2c || var0 == 0x96)
    {
        var1 = WorkModuleImplFloat.get_float(0x200003f);
        DamageModuleImpl(0xa, var1);
        EffectModuleImpl(0x1f, 0x19, 0);
        if (sys_21(0x6e, 0x31) == 0x1)
        {
            func_346();
        }
    }
    else if (var0 == 0x30 || var0 == 0x33 || var0 == 0x2d || var0 == 0x95)
    {
        func_345();
    }
}

void func_345()
{
    float var0;
    float var1;
    float var2;
    float var3;
    int var4;
    int var5;
    int var6;
    var0 = 1.0f;
    if (WorkModuleImpl.is_flag(0x21000002))
    {
        var1 = WorkModuleImplFloat.get_float(0x1000000);
        var2 = WorkModuleImplFloat.get_float(0x200003e);
        var0 = (var2 - 1.0f) * var1 + 1.0f;
    }
    var3 = WorkModuleImplFloat.get_float(0x26);
    if (var3 > 1.0f)
    {
        var0 *= var3;
    }
    AttackModuleImpl(0x2728, var0);
    if (sys_21(0x6e, 0x31) == 0x1 && WorkModuleImplFloat.get_float(0x25) <= 0)
    {
        var4 = 0x1;
        if (var5 == 0x95)
        {
            var6 = ItemModuleImpl(0x11);
            if (var6 == 0x33 || var6 == 0x34)
            {
                var4 = 0;
            }
        }
        if (var4)
        {
            DamageModuleImpl(0xb, 0, 0);
        }
    }
    if (sys_21(0x86, 0xa))
    {
        if (var5 != 0x95)
        {
            if (randint(0, 0x64) < WorkModuleImpl.get_int(0x1200033d))
            {
                AttackModuleImpl(0x272e, WorkModuleImplFloat.get_float(0x200033e));
                WorkModuleImpl.on_flag2(0x21000020);
            }
        }
    }
}

void func_346()
{
    int var0;
    int var1;
    float var2;
    float var3;
    float var4;
    var0 = sys_21(0x77, 0x31);
    var1 = 0x9000087 + var0 - 0x1;
    var2 = WorkModuleImplFloat.get_float(var1);
    if (WorkModuleImplFloat.get_float(0x25) > 0)
    {
        var3 = WorkModuleImplFloat.get_float(0x27);
        if (var2 < var3)
        {
            var2 = var3;
        }
    }
    DamageModuleImpl(0xb, 0x2, var2 + 0);
    var4 = DamageModuleImplFloat(0xc);
    var1 = 0x9000084 + var0 - 0x1;
    var4 *= WorkModuleImplFloat.get_float(var1);
    DamageModuleImpl(0x10, var4);
}

void func_347()
{
    if (global4 == 0x2b || global4 == 0x2c || global4 == 0x2d)
    {
        if (global6 != 0x2b && global6 != 0x2c && global6 != 0x2d)
        {
            func_285();
        }
    }
}

void func_348()
{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    float var6;
    float var7;
    float var8;
    float var9;
    int var10;
    int var11;
    int var12;
    float var13;
    func_347();
    var0 = global4;
    var1 = global6;
    var2 = 0;
    if (var0 == 0x2f || var0 == 0x32 || var0 == 0x2c || var0 == 0x96)
    {
        var2 = 0x1;
    }
    if (var1 == 0x30 || var1 == 0x33 || var1 == 0x2d || var1 == 0x95)
    {
        if (var2 == 0x1)
        {
            if (var1 == 0x95)
            {
                var3 = 0x11000005;
                var4 = 0x11000007;
                var5 = 0x11000006;
            }
            else
            {
                var3 = 0x11000005;
                var4 = 0x11000009;
                var5 = 0x11000008;
            }
            var6 = (float)WorkModuleImpl.get_int(var3);
            var7 = (float)WorkModuleImpl.get_int(var4);
            if (var6 < 0)
            {
                var6 = 0;
            }
            var6 = var7 - var6;
            var8 = 0;
            var9 = (float)WorkModuleImpl.get_int(var5);
            if (var9 > 0)
            {
                var8 = var6 / var9;
            }
            WorkModuleImpl.set_float(var8 + 0, 0x1000000);
            if (var1 == 0x95)
            {
                var10 = ItemModuleImpl(0x11);
                if (var10 != 0x3a)
                {
                    var11 = (int)var6;
                    WorkModuleImpl.set_int(var11, 0x11000004);
                }
                else
                {
                    var12 = func_1740() + 0x2;
                    var13 = (float)MotionModuleImpl.get_end_frame(var12);
                    var11 = (int)(var8 * var13);
                    WorkModuleImpl.set_int(var11, 0x11000004);
                }
            }
            WorkModuleImpl.on_flag2(0x21000002);
        }
        else
        {
            WorkModuleImpl.set_float(0 + 0, 0x1000000);
            WorkModuleImpl.off_flag2(0x21000002);
        }
    }
    if (var2 == 0x1)
    {
        EffectModuleImpl(0x20, 0x19);
    }
    if (WorkModuleImpl.is_flag(0x21000020))
    {
        AttackModuleImpl(0x272e, 1.0f);
        WorkModuleImpl.off_flag2(0x21000020);
    }
}

int func_349()
{
    StatusModuleImpl(0x5, 0, 0x4b, 0x1, 0, 0x1, 0, 0, 0xe, 0x6c0);
    StatusModuleImpl(0x2713, 0x1, 0, 0x1, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_350()
{
    MotionModuleImpl.set_motion_rate(0);
    func_78(func_351);
}

void func_351()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (global9 > 1.0f)
    {
        func_16(0x24, 0);
        return;
    }
}

void func_352()
{
    
}

int func_353()
{
    StatusModuleImpl(0x5, 0, 0x4b, 0x1, 0, 0x1, 0, 0, 0xe, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0x1, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_354()
{
    func_22(0x4f, 0, WorkModuleImplFloat.get_float(0x1000003));
    func_78(func_355);
}

void func_355()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return;
    }
}

void func_356()
{
    
}

void func_357()
{
    int var0;
    float var1;
    var0 = MotionModuleImpl.get_motion();
    var1 = MotionModuleImplFloat.get_frame();
    func_310();
    if (var0 == 0x1d || var0 == 0x1e)
    {
        if (WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            MotionModuleImpl.add_2nd_motion(var0, 0, var1, 1.0f);
            MotionModuleImpl(0x13, 1.0f);
        }
        KineticModuleImpl.change_kinetic_type(0x50);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0x13);
    }
}

void func_358()
{
    func_340();
}

void func_359()
{
    func_341();
    if (MotionModuleImpl(0x14))
    {
        KineticModuleImpl.change_kinetic_type(0x13);
    }
}

void func_360()
{
    func_342();
}

int func_361()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0x400000);
    return 0;
}

int func_362()
{
    if (func_364())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x80000, 0, 0x400001);
    return 0;
}

int func_363()
{
    if (func_364())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0, 0, 0x10, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x80000, 0, 0x400001);
    return 0;
}

int func_364()
{
    if (ItemModuleImpl(0x4) == 0x1)
    {
        if (ControlModuleImpl(0x9) & 0x1)
        {
            if (ItemModuleImpl(0x5, 0x800000) == 0)
            {
                func_16(0x8c, 0);
                return 0x1;
            }
        }
    }
    return 0;
}

int func_365()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0x400002);
    return 0;
}

void func_366()
{
    func_76();
    func_22(0x4b, 0, 1.0f);
    ControlModuleImpl(0x2714, 0x18, 0);
    if (!StopModuleImpl(0x1))
    {
        func_368();
    }
    global16 = func_368;
    func_78(func_367);
}

void func_367()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
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
}

void func_368()
{
    WorkModuleImpl.inc_int(0x11000002);
    if (WorkModuleImpl.get_int(0x11000004) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000004);
        if (WorkModuleImpl.get_int(0x11000004) < 0)
        {
            WorkModuleImpl.strans_off(0x1e00006f);
            WorkModuleImpl.strans_off(0x1e00006e);
        }
    }
}

void func_369()
{
    float var0;
    if (global5 == 0x3)
    {
        WorkModuleImpl.strans_on(0x1e00006e);
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000e0), 0x11000004);
    }
    func_373();
    var0 = 1.0f;
    if (sys_21(0x86, 0x4))
    {
        var0 = WorkModuleImplFloat.get_float(0x2000333);
    }
    func_22(0x4c, 0, var0);
    func_78(func_370);
}

void func_370()
{
    if (func_374())
    {
        return;
    }
}

void func_371()
{
    float var0;
    if (global5 == 0x4 || global5 == 0x3 || global5 == 0x8)
    {
        WorkModuleImpl.strans_on(0x1e00006f);
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000e2), 0x11000004);
    }
    else if (global5 == 0x1b)
    {
        WorkModuleImpl.strans_on(0x1e00006f);
        WorkModuleImpl.inc_int(0x11000004);
    }
    func_373();
    var0 = 1.0f;
    if (sys_21(0x86, 0x4))
    {
        var0 = WorkModuleImplFloat.get_float(0x2000333);
    }
    func_22(0x4d, 0, var0);
    func_78(func_372);
}

void func_372()
{
    if (func_374())
    {
        return;
    }
}

void func_373()
{
    func_75();
    WorkModuleImpl.strans_on(0x1e000074);
    ControlModuleImpl(0x2714, 0x18, 0);
    if (!StopModuleImpl(0x1))
    {
        func_368();
    }
    global16 = func_368;
}

void func_374()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000074))
    {
        if (global38 & 0x1)
        {
            if (ItemModuleImpl(0x4) == 0x1)
            {
                if (ItemModuleImpl(0x5, 0x800000) == 0)
                {
                    if (WorkModuleImpl.get_int(0x11000002) <= WorkModuleImpl.get_int(0x120001f5))
                    {
                        func_16(0x8c, 0);
                        return 0x1;
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00006e) == 0x1 && global38 & 0x1 && ItemModuleImpl(0x4) == 0)
    {
        func_16(0x37, 0x1);
        return;
    }
}

void func_375()
{
    func_376();
    func_22(0x4e, 0, 1.0f);
    func_78(func_377);
}

void func_376()
{
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0, 0x11000002);
    WorkModuleImpl.strans_group_on(0x1f000008);
    WorkModuleImpl.strans_on(0x1e000074);
    WorkModuleImpl.strans_on(0x1e000051);
    WorkModuleImpl.strans_on(0x1e000014);
    WorkModuleImpl.strans_on(0x1e000013);
    WorkModuleImpl.strans_on(0x1e000017);
    WorkModuleImpl.strans_on(0x1e000016);
    WorkModuleImpl.strans_on(0x1e000015);
    WorkModuleImpl.strans_on(0x1e000018);
    WorkModuleImpl.strans_off(0x1e00001c);
    ControlModuleImpl(0x2714, 0x18, 0);
    if (!StopModuleImpl(0x1))
    {
        func_379();
    }
    global16 = func_379;
}

void func_377()
{
    if (func_378())
    {
        return;
    }
}

void func_378()
{
    int var0;
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000074))
    {
        if (global38 & 0x1)
        {
            if (ItemModuleImpl(0x4) == 0x1)
            {
                if (ItemModuleImpl(0x5, 0x800000) == 0)
                {
                    if (WorkModuleImpl.get_int(0x11000002) <= WorkModuleImpl.get_int(0x120001f5))
                    {
                        func_16(0x8c, 0);
                        return 0x1;
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000051))
    {
        if (WorkModuleImpl.get_int(0x1300011f) != 0)
        {
            if (ControlModuleImpl(0x2712, 0x3))
            {
                if (global38 & 0x1)
                {
                    var0 = LinkModuleImpl(0x2, 0x3);
                    if (!var0)
                    {
                        func_16(0xf1, 0x1);
                        return 0x1;
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.is_flag2(0x2100000f))
    {
        if (WorkModuleImpl.check_strans(0x1e000014))
        {
            if (global18 == 0)
            {
                if (func_84() >= WorkModuleImplFloat.get_float(0x2000082))
                {
                    if (WorkModuleImpl.get_int(0x11000002) < WorkModuleImpl.get_int(0x12000081))
                    {
                        func_16(0x65, 0x1);
                        return 0x1;
                    }
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000013))
        {
            if (global18 == 0)
            {
                if (WorkModuleImpl.get_int(0x11000002) < WorkModuleImpl.get_int(0x12000081))
                {
                    func_16(0x64, 0);
                    return 0x1;
                }
            }
        }
    }
    if (WorkModuleImpl.is_flag2(0x21000010))
    {
        if (WorkModuleImpl.check_strans(0x1e000017))
        {
            if (GroundModuleImpl(0x2722, 0x6) == 0x1)
            {
                if (ControlModuleImpl(0x2722, 0x2) < WorkModuleImpl.get_int(0x12000081))
                {
                    if (WorkModuleImpl.get_int(0x11000002) < WorkModuleImpl.get_int(0x12000081))
                    {
                        func_16(0x67, 0);
                        return 0x1;
                    }
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000016))
        {
            if (GroundModuleImpl(0x2722, 0x6) == 0x1)
            {
                if (global32 >= WorkModuleImplFloat.get_float(0x200001f))
                {
                    if (WorkModuleImpl.get_int(0x11000002) < WorkModuleImpl.get_int(0x12000081))
                    {
                        func_16(0x67, 0x1);
                        return 0x1;
                    }
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000015))
        {
            if (GroundModuleImpl(0x2722, 0x6) == 0x1)
            {
                if (WorkModuleImpl.get_int(0x11000002) < WorkModuleImpl.get_int(0x12000081))
                {
                    func_16(0x66, 0);
                    return 0x1;
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000018))
        {
            if (GroundModuleImpl(0x2722, 0x1) == 0x1)
            {
                if (WorkModuleImpl.get_int(0x11000002) < WorkModuleImpl.get_int(0x12000081))
                {
                    func_16(0x68, 0);
                    return 0x1;
                }
            }
        }
    }
    if (func_55())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return 0x1;
    }
}

void func_379()
{
    WorkModuleImpl.inc_int(0x11000002);
    if (WorkModuleImpl.get_int(0x11000002) <= WorkModuleImpl.get_int(0x120001f1))
    {
        func_103();
    }
    if (ItemModuleImpl(0x4) == 0x1)
    {
        if (WorkModuleImpl.get_int(0x11000002) <= WorkModuleImpl.get_int(0x120001f5))
        {
            func_105();
        }
    }
    if (WorkModuleImpl.is_flag2(0x2100000d))
    {
        if (!WorkModuleImpl.is_flag2(0x2100000e))
        {
            KineticModuleImpl.change_kinetic_type(0);
            WorkModuleImpl.on_flag2(0x2100000e);
            sys_21(0x17, 0x4);
        }
        func_550();
    }
    if (WorkModuleImpl.check_strans(0x1e00001c) == 0 && global9 >= (float)WorkModuleImpl.get_int(0x1300002a))
    {
        WorkModuleImpl.strans_on(0x1e00001c);
    }
}

void func_380()
{
    
}

void func_381()
{
    func_383();
}

void func_382()
{
    func_383();
}

void func_383()
{
    KineticModuleImpl.set_speed(0, 0, 0);
}

void func_384()
{
    float var0;
    if (global6 == 0x16 && WorkModuleImpl.check_strans(0x1e00001c) == 0)
    {
        var0 = (float)WorkModuleImpl.get_int(0x120000bf) / WorkModuleImplFloat.get_float(0x20000c0);
        WorkModuleImpl.set_float(var0, 0);
    }
}

void func_385()
{
    int var0;
    if (global4 == 0x22)
    {
        var0 = global5;
        if (var0 == 0x4c)
        {
            WorkModuleImpl.on_flag(0x2100000f);
        }
        else if (var0 == 0x47 || var0 == 0x48 || var0 == 0x49 || var0 == 0x4a || var0 == 0x4b || var0 == 0x13a)
        {
            WorkModuleImpl.on_flag(0x2100000f);
            WorkModuleImpl.on_flag(0x21000010);
            KineticModuleImpl.set_controller_accel_mul(0);
            KineticModuleImpl.set_controller_accel_add(0);
        }
    }
    else
    {
        KineticModuleImpl.clear_speed(0x4);
    }
}

void func_386()
{
    int var0;
    float var1;
    func_385();
    var0 = MotionModuleImpl.get_motion();
    var1 = MotionModuleImplFloat.get_frame();
    func_22(0x4e, 0, 1.0f);
    if (var0 == 0x1d || var0 == 0x1e)
    {
        if (WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            MotionModuleImpl.add_2nd_motion(var0, 0, var1, 1.0f);
            MotionModuleImpl(0x13, 1.0f);
        }
        KineticModuleImpl.change_kinetic_type(0x50);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0x13);
    }
}

void func_387()
{
    if (MotionModuleImpl(0x14))
    {
        KineticModuleImpl.change_kinetic_type(0x13);
    }
}

int func_388()
{
    StatusModuleImpl(0x5, 0, 0x51, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x2000, 0, 0x200000);
    return 0;
}

int func_389()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0xc000, 0xec, 0xc0, 0x42);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x2000, 0, 0);
    return 0;
}

int func_390()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0x4000, 0x68, 0, 0x2);
    StatusModuleImpl(0x2713, 0, 0x1, 0x1, 0, 0, 0, 0, 0, 0);
    return 0;
}

int func_391()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0xc000, 0xcec, 0x1900, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x2000, 0, 0);
    return 0;
}

int func_392()
{
    StatusModuleImpl(0x5, 0x2, 0x23, 0x5, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x2000, 0, 0x1000000);
    return 0;
}

int func_393()
{
    StatusModuleImpl(0x5, 0x2, 0xa, 0x5, 0, 0x1, 0, 0, 0, 0x1a0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x2000, 0, 0);
    return 0;
}

int func_394()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 2.0f, 0, 0x8000, 0x1a0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x2000, 0, 0);
    return 0;
}

int func_395()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 2.0f, 0, 0x8000, 0x1a0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x2000, 0, 0);
    return 0;
}

int func_396()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0x180);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x2000, 0, 0);
    return 0;
}

int func_397()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x2000, 0, 0);
    return 0;
}

void func_398()
{
    sys_21(0x2d);
}

void func_399()
{
    float var0;
    int var1;
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000c4) + 0x2, 0x11000002);
    var0 = (float)WorkModuleImpl.get_int(0x120000d5) + 0;
    var1 = (int)(var0 * WorkModuleImplFloat.get_float(0x30000f9) + 0.5f);
    WorkModuleImpl.set_int(var1, 0x11000003);
    func_22(0x47, 0, 1.0f);
    if (WorkModuleImpl.is_flag(0x2000004e) == 0)
    {
        MotionModuleImpl.add_2nd_motion(0x48);
        MotionModuleImpl(0x5, 0);
    }
    func_401();
    if (!StopModuleImpl(0x1))
    {
        func_403();
    }
    global16 = func_403;
    func_78(func_400);
}

void func_400()
{
    if (WorkModuleImpl.is_flag(0x2100000d) == 0 && global9 > (float)0)
    {
        func_398();
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    if (global18 == 0x2)
    {
        if (GroundModuleImpl(0x2727))
        {
            func_16(0x7d, 0);
            return;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_402())
    {
        return;
    }
    if (WorkModuleImplFloat.get_float(0x3) < 0)
    {
        func_16(0x59, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0x1c, 0);
            return;
        }
    }
}

void func_401()
{
    WorkModuleImpl.strans_on(0x1e000075);
    if (global4 == 0x1b)
    {
        if (global5 == 0x4)
        {
            WorkModuleImpl.strans_on(0x1e00006f);
        }
    }
    if (global4 == 0x1b)
    {
        if (global5 == 0x4)
        {
            WorkModuleImpl.strans_on(0x1e00006e);
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000e0), 0x11000004);
        }
    }
    WorkModuleImpl.strans_on(0x1e00006d);
    WorkModuleImpl.strans_on(0x1e000026);
    WorkModuleImpl.strans_on(0x1e000027);
    WorkModuleImpl.strans_on(0x1e000028);
    WorkModuleImpl.strans_group_on(0x1f000006);
}

int func_402()
{
    if (func_71(global56))
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000075))
    {
        if (ItemModuleImpl(0x4) == 0x1)
        {
            if (ItemModuleImpl(0x5, 0x800000) == 0)
            {
                if (global38 & 0x1)
                {
                    if (global18 == 0)
                    {
                        func_16(0x8c, 0);
                        return 0x1;
                    }
                }
            }
        }
    }
    if (global4 == 0x1b)
    {
        if (global5 == 0x4)
        {
            if (WorkModuleImpl.check_strans(0x1e00006f))
            {
                if (func_88() <= WorkModuleImplFloat.get_float(0x2000014))
                {
                    if (ControlModuleImpl(0x2712, 0))
                    {
                        if (global18 == 0)
                        {
                            if (ItemModuleImpl(0x4) == 0)
                            {
                                func_16(0x39, 0x1);
                                return 0x1;
                            }
                        }
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000026))
    {
        if (global31 & 0x10000)
        {
            if (global18 == 0)
            {
                func_16(0x1f, 0x1);
                return 0x1;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000027))
    {
        if (global31 & 0x4000)
        {
            if (global18 == 0)
            {
                func_16(0x20, 0x1);
                return 0x1;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000028))
    {
        if (global31 & 0x8000)
        {
            if (global18 == 0)
            {
                func_16(0x21, 0x1);
                return 0x1;
            }
        }
    }
    if (global4 == 0x1b)
    {
        if (global5 == 0x4)
        {
            if (WorkModuleImpl.check_strans(0x1e00006e))
            {
                if (ControlModuleImpl(0x2712, 0))
                {
                    if (global18 == 0)
                    {
                        if (ItemModuleImpl(0x4) == 0)
                        {
                            func_16(0x37, 0x1);
                            return 0x1;
                        }
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00006d))
    {
        if (global24 & 0x20000000)
        {
            if (global18 == 0)
            {
                func_16(0x35, 0x1);
                return 0x1;
            }
        }
    }
    if (func_51())
    {
        return 0x1;
    }
    if (global31 & 0x200)
    {
        if (func_34())
        {
            func_16(0x71, 0x1);
            return 0x1;
        }
    }
    return 0;
}

void func_403()
{
    float var0;
    if (WorkModuleImpl.is_flag(0x20000070) == 0)
    {
        var0 = WorkModuleImplFloat.get_float(0x20000c7);
        var0 /= WorkModuleImplFloat.get_float(0x30000f6);
        WorkModuleImpl.sub_float(var0, 0x3);
        if (WorkModuleImplFloat.get_float(0x3) < WorkModuleImplFloat.get_float(0x4))
        {
            WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x4), 0x3);
        }
    }
    if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
    }
    if (WorkModuleImpl.get_int(0x11000003) > 0)
    {
        WorkModuleImpl.dec_int(0x11000003);
    }
    if (WorkModuleImpl.get_int(0x11000004) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000004);
        if (WorkModuleImpl.get_int(0x11000004) < 0)
        {
            WorkModuleImpl.strans_off(0x1e00006f);
            WorkModuleImpl.strans_off(0x1e00006e);
        }
    }
    func_404();
}

void func_404()
{
    WorkModuleImpl.dec_int(0x11000007);
    if (WorkModuleImpl.get_int(0x11000007) <= 0)
    {
        sys_21(0x85);
        WorkModuleImpl.set_int(0x8, 0x11000007);
    }
}

void func_405()
{
    func_401();
    if (!StopModuleImpl(0x1))
    {
        func_407();
    }
    global16 = func_407;
    func_78(func_406);
}

void func_406()
{
    if (global18 == 0x2)
    {
        if (GroundModuleImpl(0x2727))
        {
            func_16(0x7d, 0);
            return;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_402())
    {
        return;
    }
    if (WorkModuleImplFloat.get_float(0x3) < 0)
    {
        func_16(0x59, 0);
        return;
    }
    if (ControlModuleImpl(0x2713, 0x3))
    {
        if (WorkModuleImpl.get_int(0x11000002) <= 0)
        {
            if (global18 == 0)
            {
                func_16(0x1d, 0x1);
                return;
            }
        }
    }
}

void func_407()
{
    func_403();
    if (WorkModuleImpl.get_int(0x11000003) > 0)
    {
        WorkModuleImpl.dec_int(0x11000003);
    }
    if (WorkModuleImpl.get_int(0x11000005) > 0)
    {
        WorkModuleImpl.dec_int(0x11000005);
    }
}

void func_408()
{
    WorkModuleImpl.strans_on(0x1e00002c);
    WorkModuleImpl.strans_on(0x1e00002b);
    if (WorkModuleImpl.get_int(0x11000005) > 0)
    {
        WorkModuleImpl.strans_group_on(0x1f000000);
        WorkModuleImpl.strans_group_on(0x1f000001);
        WorkModuleImpl.strans_group_on(0x1f000003);
    }
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000df), 0x11000009);
}

void func_409()
{
    func_408();
    func_22(0x49, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_411();
    }
    global16 = func_411;
    func_78(func_410);
}

void func_410()
{
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (func_39() != 0)
        {
            return;
        }
    }
    else
    {
        if (func_43())
        {
            return;
        }
        if (func_44())
        {
            return;
        }
        if (func_47())
        {
            return;
        }
    }
    if (global18 == 0x2)
    {
        if (GroundModuleImpl(0x2727))
        {
            func_16(0x7d, 0);
            return;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00002c))
    {
        if (global38 & 0x10)
        {
            if (global18 == 0)
            {
                func_16(0xa, 0x1);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00002b))
    {
        if (global32 >= WorkModuleImplFloat.get_float(0x200001f))
        {
            if (global47 < WorkModuleImpl.get_int(0x12000020))
            {
                if (ControlModuleImpl(0x271c))
                {
                    if (global18 == 0)
                    {
                        func_16(0xa, 0x1);
                        return;
                    }
                }
            }
        }
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
    }
}

void func_411()
{
    if (WorkModuleImpl.get_int(0x11000009) > 0)
    {
        WorkModuleImpl.dec_int(0x11000009);
        if (WorkModuleImpl.get_int(0x11000009) == 0)
        {
            CancelModuleImpl.enable_cancel();
        }
    }
}

void func_412()
{
    func_413(0x1);
    if (!WorkModuleImpl.is_flag(0x2100000f))
    {
        sys_21(0x55, 0x1, 0x4a);
        WorkModuleImpl.on_flag2(0x2100000f);
    }
    func_78(func_414);
}

void func_413(int arg0)
{
    int var1;
    int var2;
    func_75();
    if (WorkModuleImpl.get_int(0x11000003) > 0)
    {
        WorkModuleImpl.set_int(0, 0x11000002);
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000d6), 0x11000005);
        SoundModuleImpl(0x2710, 0xd9);
        if (sys_21(0x6e, 0x37))
        {
            var1 = sys_21(0x77, 0x37);
            var2 = WorkModuleImpl.get_int(0x1900006c + var1 - 0x1);
            WorkModuleImpl.set_int(var2 + 0x1, 0x11000006);
            WorkModuleImpl.off_flag2(0x2100000e);
        }
    }
    else if (arg0 == 0x1)
    {
        sys_21(0x2e);
    }
    WorkModuleImpl.strans_on(0x1e00002a);
    if (!StopModuleImpl(0x1))
    {
        func_415();
    }
    global16 = func_415;
}

void func_414()
{
    if (global18 == 0x2)
    {
        if (GroundModuleImpl(0x2727))
        {
            func_16(0x7d, 0);
            return;
        }
        func_16(0x4c, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00002a))
    {
        if (WorkModuleImpl.get_int(0x11000009) == 0)
        {
            func_16(0x1c, 0);
            return;
        }
    }
    if (WorkModuleImpl.get_int(0x11000009) == 0)
    {
        if (global18 == 0)
        {
            func_16(0x1d, 0);
            return;
        }
    }
    if (WorkModuleImpl.get_int(0x1100000b) >= WorkModuleImpl.get_int(0x12000350))
    {
        if (global18 == 0 && ControlModuleImpl(0x2712, 0x3) == 0x1)
        {
            if (global31 & 0x10000)
            {
                func_16(0x1f, 0x1);
                return 0x1;
            }
            if (global31 & 0x4000)
            {
                func_16(0x20, 0x1);
                return 0x1;
            }
            if (global31 & 0x8000)
            {
                func_16(0x21, 0x1);
                return 0x1;
            }
        }
    }
}

void func_415()
{
    if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
    }
    if (ControlModuleImpl(0x2713, 0x3))
    {
        if (WorkModuleImpl.get_int(0x11000002) <= 0)
        {
            WorkModuleImpl.strans_off(0x1e00002a);
        }
    }
    if (WorkModuleImpl.get_int(0x11000009) > 0)
    {
        WorkModuleImpl.dec_int(0x11000009);
    }
    func_404();
}

void func_416()
{
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x20000c9), 0x3);
    WorkModuleImpl.on_flag2(0x21000003);
    HitModuleImpl(0x2710, 0x2);
    func_22(0xf0, 0, 1.0f);
    SoundModuleImpl(0x2710, 0x62);
    func_78(func_417);
}

void func_417()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0x5a, 0);
        return;
    }
    if (global18 == 0)
    {
        func_16(0x5b, 0);
        return;
    }
}

void func_418()
{
    func_22(0x2e, 0, 1.0f);
    ControlModuleImpl(0x2718, 0x9, 0);
    func_78(func_419);
}

void func_419()
{
    if (global18 == 0)
    {
        func_16(0x5b, 0);
        return;
    }
}

void func_420()
{
    if (FighterUtil.is_body_up())
    {
        WorkModuleImpl.on_flag(0x2100001e);
    }
    else
    {
        WorkModuleImpl.off_flag(0x2100001e);
    }
    if (WorkModuleImpl.is_flag(0x2100001e))
    {
        func_22(0xd5, 0, 1.0f);
    }
    else
    {
        func_22(0xdf, 0, 1.0f);
    }
    func_78(func_421);
}

void func_421()
{
    if (!GroundModuleImpl(0x2722, 0x8))
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0x5c, 0);
            return;
        }
    }
}

void func_422()
{
    int var0;
    if (WorkModuleImpl.is_flag(0x2100001e))
    {
        func_22(0xf3, 0, 1.0f);
    }
    else
    {
        func_22(0xf4, 0, 1.0f);
    }
    var0 = WorkModuleImpl.get_int(0x12000311) + 0x1;
    WorkModuleImpl.set_int(var0, 0x11000011);
    if (!StopModuleImpl(0x1))
    {
        func_424();
    }
    global16 = func_424;
    func_78(func_423);
}

void func_423()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (WorkModuleImpl.is_flag(0x2000006f))
        {
            func_16(0x5e, 0);
            return;
        }
        if (global18 == 0)
        {
            func_16(0x5d, 0);
            return;
        }
    }
}

void func_424()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000011);
    if (var0 > 0)
    {
        var0--;
        if (var0 <= 0 && WorkModuleImpl.is_flag(0x21000022) == 0)
        {
            HitModuleImpl(0x2710, 0);
            WorkModuleImpl.on_flag2(0x21000022);
        }
        WorkModuleImpl.set_int(var0, 0x11000011);
    }
}

void func_425()
{
    func_22(0xf1, 0, 1.0f);
    func_78(func_426);
}

void func_426()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_96() || WorkModuleImpl.is_flag(0x2000006f))
    {
        if (global18 == 0)
        {
            func_16(0x5e, 0);
            return;
        }
    }
}

void func_427()
{
    func_22(0xf5, 0, 1.0f);
    func_78(func_428);
}

void func_428()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (global5 == 0x63)
    {
        if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
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
    }
}

void func_429()
{
    int var0;
    var0 = global6;
    if (var0 == 0x1c || var0 == 0x1e)
    {
        if (WorkModuleImpl.is_flag(0x2100000d) == 0)
        {
            func_398();
        }
    }
    else
    {
        EffectModuleImpl(0x2723, 0x1000013, 0x1, 0x1);
        EffectModuleImpl(0x2723, 0x1000014, 0x1, 0x1);
    }
}

void func_430()
{
    int var0;
    var0 = global6;
    if (var0 == 0x1c || var0 == 0x1e)
    {
        
    }
    else
    {
        EffectModuleImpl(0x2723, 0x1000013, 0x1, 0x1);
        EffectModuleImpl(0x2723, 0x1000014, 0x1, 0x1);
    }
}

void func_431()
{
    
}

void func_432()
{
    int var0;
    func_430();
    var0 = global6;
    if (var0 == 0x1c)
    {
        if (WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            MotionModuleImpl.add_2nd_motion(0x48);
            MotionModuleImpl(0x5, 0);
        }
    }
}

void func_433()
{
    
}

void func_434()
{
    
}

void func_435()
{
    
}

void func_436()
{
    
}

void func_437()
{
    
}

void func_438()
{
    
}

void func_439()
{
    func_440();
}

void func_440()
{
    ShieldModuleImpl(0x2710, 0x2, 0);
}

void func_441()
{
    func_442();
}

void func_442()
{
    func_449();
    func_465();
}

void func_443()
{
    func_444();
}

void func_444()
{
    func_453();
    func_465();
}

void func_445()
{
    func_446();
}

void func_446()
{
    ShieldModuleImpl(0x2711, 0x2, 0);
}

void func_447()
{
    func_448();
}

void func_448()
{
    ShieldModuleImpl(0x2710, 0x2, 0);
    func_455();
}

void func_449()
{
    func_450();
}

void func_450()
{
    func_455();
}

void func_451()
{
    func_452();
}

void func_452()
{
    ShieldModuleImpl(0x2711, 0x2, 0);
}

void func_453()
{
    func_456();
    func_454();
}

void func_454()
{
    if (sys_21(0x5d) == 0x1)
    {
        global46 = 0xfe;
        ControlModuleImpl(0x271f);
        global24 = 0;
        global31 = 0;
        global29 = 0;
    }
    if (WorkModuleImpl.get_int(0x11000003) > 0)
    {
        WorkModuleImpl.dec_int(0x11000003);
    }
}

void func_455()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    if (WorkModuleImpl.is_flag(0x2000004e) == 0)
    {
        var0 = WorkModuleImplFloat.get_float(0x1000006);
        var1 = WorkModuleImplFloat.get_float(0x1000007);
        var2 = ControlModuleImplFloat.get_stick_x_unlimit();
        var3 = ControlModuleImplFloat.get_stick_y_unlimit();
        var2 = var0 + (var2 - var0) * WorkModuleImplFloat.get_float(0x20000d4);
        var3 = var1 + (var3 - var1) * WorkModuleImplFloat.get_float(0x20000d4);
        var4 = Math.sqrt(var2 * var2 + var3 * var3);
        if (var4 > 1.0f)
        {
            var4 = 1.0f;
        }
        MotionModuleImpl.set_weight_rate(1.0f - var4 - MotionModuleImplFloat.get_prev_weight());
        var5 = Math.atan2(var3, var2 * PostureModuleImplFloat.get_lr()) * (float)0xb4 / 3.1415927410125732f;
        if (var5 > 360.0f)
        {
            var5 -= (float)0x168;
        }
        else if (var5 < (float)0)
        {
            var5 += 360.0f;
        }
        MotionModuleImpl.set_2nd_frame(var5);
        WorkModuleImpl.set_float(var2, 0x1000006);
        WorkModuleImpl.set_float(var3, 0x1000007);
    }
    func_456();
}

void func_456()
{
    float var0;
    float var1;
    float var2;
    int var3;
    var0 = WorkModuleImplFloat.get_float(0x3) / WorkModuleImplFloat.get_float(0x20000c2) * WorkModuleImplFloat.get_float(0x20000d3);
    var1 = WorkModuleImplFloat.get_float(0x20000c3);
    var2 = WorkModuleImplFloat.get_float(0x300002d);
    var0 = (var1 + (1.0f - var1) * var0) * var2;
    var3 = 0x1a;
    ModelModuleImpl(0, var3, var0, var0, var0);
}

void func_457()
{
    func_465();
}

void func_458()
{
    func_465();
}

void func_459()
{
    func_460();
    func_456();
}

void func_460()
{
    int var0;
    float var1;
    int var2;
    int var3;
    float var4;
    int var5;
    float var6;
    float var7;
    float var8;
    float var9;
    ShieldModuleImpl(0x2710, 0x2, 0);
    var0 = 0x4a;
    var1 = WorkModuleImplFloat.get_float(0x100000b) * WorkModuleImplFloat.get_float(0x20000cc);
    var2 = WorkModuleImpl.get_int(0x1100000a);
    if (WorkModuleImpl.is_flag(0x20000075) == 0x1)
    {
        var1 *= WorkModuleImplFloat.get_float(0x20000ce);
    }
    if (WorkModuleImpl.get_int(0x11000003) > 0)
    {
        var0 = FighterUtil(0x22);
        var1 *= WorkModuleImplFloat.get_float(0x20000d7);
    }
    var1 += WorkModuleImplFloat.get_float(0x20000cd);
    var3 = (int)var1;
    if (var2 != 0x50000000)
    {
        CaptureModuleImpl(0xc, var2);
        var4 = (float)(var3 + WorkModuleImpl.get_int(0x120000df));
        var4 = var4 * WorkModuleImplFloat.get_float(0x20000cf);
        var5 = (int)var4;
        WorkModuleImpl.set_int(var5, 0x10000082);
    }
    WorkModuleImpl.set_int(var3, 0x11000009);
    var6 = sys_40(0x10, var0);
    func_22(var0, 0, var6);
    var7 = var1 * WorkModuleImplFloat.get_float(0x20000d0);
    if (WorkModuleImpl.get_int(0x11000003) > 0)
    {
        var7 *= WorkModuleImplFloat.get_float(0x20000d8);
    }
    if (var7 > WorkModuleImplFloat.get_float(0x20000d1))
    {
        var7 = WorkModuleImplFloat.get_float(0x20000d1);
    }
    var8 = var7 * -WorkModuleImplFloat.get_float(0x100000c);
    var9 = 0;
    KineticModuleImpl(0xe, 0x4, 0xb, var8, var9, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x4);
}

void func_461()
{
    func_462();
}

void func_462()
{
    func_456();
    func_465();
}

void func_463()
{
    func_464();
}

void func_464()
{
    func_453();
    func_465();
}

void func_465()
{
    int var0;
    int var1;
    float var2;
    float var3;
    int var4;
    float var5;
    float var6;
    var0 = WorkModuleImpl.get_int(0x11000006);
    if (var0 > 0)
    {
        if (WorkModuleImpl.is_flag(0x2100000e) == 0)
        {
            sys_21(0x7b);
            var1 = sys_21(0x77, 0x37);
            var2 = WorkModuleImplFloat.get_float(0x9000069 + var1 - 0x1);
            AttackModuleImpl(0x271a, 0, var2);
            var3 = WorkModuleImplFloat.get_float(0x300002d) * WorkModuleImplFloat.get_float(0x900006f + var1 - 0x1);
            AttackModuleImpl(0x271b, 0, var3);
            sys_21(0x7c);
            var4 = EffectModuleImpl(0x30);
            var5 = WorkModuleImplFloat.get_float(0x1000009);
            var6 = var3 / var5;
            EffectModuleImpl(0x19, var4, var6, var6, var6);
            WorkModuleImpl.on_flag2(0x2100000e);
        }
        var0--;
        if (var0 <= 0)
        {
            AttackModuleImpl(0x2718, 0);
        }
        WorkModuleImpl.set_int(var0, 0x11000006);
    }
}

void func_466()
{
    func_467();
}

void func_467()
{
    ShieldModuleImpl(0x2711, 0x2, 0);
    EffectModuleImpl(0x20, 0x1b);
}

void func_468()
{
    EffectModuleImpl(0x4, 0x1000003, 0x1a);
    ControlModuleImpl(0x2714, 0x19, 0);
}

int func_469()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x10, 0, 0);
    return 0;
}

int func_470()
{
    if (WorkModuleImpl.is_flag2(0x2000000b))
    {
        StatusModuleImpl(0x2711, 0xd7);
        return 0x1;
    }
    else if (WorkModuleImpl.is_flag2(0x2000000f))
    {
        if (WorkModuleImpl.get_int(0x10000041) < 0x2)
        {
            StatusModuleImpl(0x2711, 0xa3);
            return 0x1;
        }
    }
    else if (ItemModuleImpl(0x11) == 0x6c)
    {
        StatusModuleImpl(0x2711, 0xa0);
        return 0x1;
    }
    return 0;
}

void func_471()
{
    int var0;
    var0 = 0x1;
    if (KineticModuleImpl.get_kinetic_type() == var0)
    {
        var0 = 0x32;
    }
    StatusModuleImpl(0x5, 0x2, var0, 0x5, 0x4, 0x1, 0x20, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x1000010, 0, 0x4);
}

int func_472()
{
    if (func_470() != 0)
    {
        return 0x1;
    }
    func_471();
    return 0;
}

int func_473()
{
    if (WorkModuleImpl.is_flag2(0x2000000b))
    {
        StatusModuleImpl(0x2711, 0xd7);
        return 0x1;
    }
    else if (WorkModuleImpl.is_flag2(0x2000000f))
    {
        if (WorkModuleImpl.get_int(0x10000041) < 0x10000041)
        {
            StatusModuleImpl(0x2711, 0xa4);
            return 0x1;
        }
    }
    else if (ItemModuleImpl(0x11) == 0x6c)
    {
        StatusModuleImpl(0x2711, 0xa0);
        return 0x1;
    }
    return 0;
}

int func_474()
{
    if (func_473() != 0)
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x2, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x1000010, 0, 0x8);
    return 0;
}

int func_475()
{
    if (WorkModuleImpl.is_flag2(0x2000000b))
    {
        StatusModuleImpl(0x2711, 0xd7);
        return 0x1;
    }
    else if (WorkModuleImpl.is_flag2(0x2000000f) && WorkModuleImpl.get_int(0x10000041) < 0x2)
    {
        StatusModuleImpl(0x2711, 0xa4);
        return 0x1;
    }
    else if (ItemModuleImpl(0x11) == 0x6c)
    {
        StatusModuleImpl(0x2711, 0xa0);
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x10, 0, 0x8);
    return 0;
}

int func_476()
{
    if (func_548())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0x4, 0x1, 0x82, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x1000010, 0, 0);
    return 0;
}

int func_477()
{
    if (func_548())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0x4, 0x1, 0x82, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x1000010, 0, 0);
    return 0;
}

int func_478()
{
    if (func_558())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, func_559(), 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x10, 0, 0);
    return 0;
}

int func_479()
{
    if (func_558())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, func_559(), 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x10, 0, 0);
    return 0;
}

int func_480()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0x4, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x10, 0x8, 0);
    return 0;
}

int func_481()
{
    return func_478();
}

int func_482()
{
    StatusModuleImpl(0x5, 0x2, 0x8, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x10, 0, 0);
    return 0;
}

int func_483()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0x2, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x10, 0, 0);
    return 0;
}

int func_484()
{
    StatusModuleImpl(0x5, 0, 0x9, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

int func_485()
{
    StatusModuleImpl(0x5, 0x2, 0xa, 0x5, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x542, 0, 0, 0);
    return 0;
}

int func_486()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x10, 0, 0);
    return 0;
}

void func_487()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x1000007b);
    var1 = WorkModuleImpl.get_int(0x12000020) + var0;
    if (global47 >= var1 || global49 <= 0)
    {
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    WorkModuleImpl.set_int(0, 0x1000007b);
    func_76();
    WorkModuleImpl.strans_on(0x1e000002);
    WorkModuleImpl.strans_on(0x1e000064);
    WorkModuleImpl.strans_on(0x1e00005c);
    WorkModuleImpl.strans_on(0x1e000076);
    WorkModuleImpl.strans_on(0x1e000074);
    WorkModuleImpl.strans_off(0x1e000099);
    if (WorkModuleImpl.is_flag(0x2000004c))
    {
        WorkModuleImpl.on_flag2(0x21000005);
    }
    func_78(func_488);
}

void func_488()
{
    if (func_71(global57))
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000099))
    {
        func_16(0xb, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000002))
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000064))
    {
        if (global24 & 0x4000)
        {
            if (global18 == 0)
            {
                func_16(0x154, 0x1);
                return;
            }
        }
    }
    if (func_45())
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00005c))
    {
        if (global31 & 0x8)
        {
            if (global18 == 0)
            {
                func_16(0x31, 0x1);
                return;
            }
        }
    }
}

void func_489()
{
    int var0;
    float var1;
    float var2;
    int var3;
    func_546();
    var0 = MotionModuleImpl.get_motion();
    var1 = MotionModuleImplFloat.get_frame();
    var2 = MotionModuleImplFloat(0xa);
    var3 = MotionModuleImpl.get_end_frame(var0);
    if (var1 + var2 >= (float)var3)
    {
        func_20(0x2);
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.change_kinetic_type(0x1);
        WorkModuleImpl.strans_on(0x1e000099);
    }
}

int func_490(int arg0)
{
    int var1;
    func_76();
    ControlModuleImpl(0x271b);
    func_40();
    func_564();
    if (WorkModuleImpl.is_flag(0x20000039))
    {
        var1 = 0x1a;
    }
    else
    {
        if (func_89() >= WorkModuleImplFloat.get_float(0x2000021))
        {
            if (WorkModuleImpl.is_flag(0x21000005))
            {
                var1 = 0x1c;
            }
            else
            {
                var1 = 0x1b;
            }
        }
        else if (WorkModuleImpl.is_flag(0x21000005))
        {
            var1 = 0x1a;
        }
        else
        {
            var1 = 0x19;
        }
        if (WorkModuleImpl.is_flag(0x20000016))
        {
            SoundModuleImpl(0x2710, 0x350063);
        }
    }
    if (arg0 != 0xffffffff)
    {
        var1 = arg0;
    }
    func_22(var1, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    return var1;
}

void func_491()
{
    if (WorkModuleImpl.is_flag(0x2000004b) == 0x1)
    {
        if (WorkModuleImplFloat.get_float(0x1a) > 0)
        {
            ItemModuleImpl(0x27, 0x63, 0x3);
        }
    }
}

void func_492()
{
    func_491();
    func_490(0xffffffff);
    func_78(func_493);
}

void func_493()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_41())
    {
        return 0x1;
    }
    if (func_565())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return 0x1;
    }
    func_555();
}

void func_494()
{
    if (WorkModuleImpl.is_flag(0x2000004b) == 0x1)
    {
        if (WorkModuleImplFloat.get_float(0x1a) > 0)
        {
            ItemModuleImpl(0x27, 0x63, 0x3);
        }
    }
}

void func_495()
{
    func_494();
    func_496(0, 0);
    func_78(func_497);
}

int func_496(int arg0, int arg1)
{
    int var2;
    func_76();
    ControlModuleImpl(0x271b);
    if (global4 == 0xc)
    {
        WorkModuleImpl.on_flag2(0x2000006c);
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000ad), 0x11000003);
    }
    func_40();
    func_564();
    if (arg1 == 0)
    {
        WorkModuleImpl.inc_int(0x10000001);
    }
    if (WorkModuleImpl.get_int(0x1300010d) != 0)
    {
        if (WorkModuleImpl.is_flag2(0x20000019) == 0)
        {
            WorkModuleImpl.on_flag2(0x2100000f);
        }
    }
    var2 = 0xffffffff;
    if (arg0 != 0)
    {
        var2 = arg0;
    }
    else if (func_89() >= WorkModuleImplFloat.get_float(0x2000021))
    {
        var2 = 0x1e;
    }
    else
    {
        var2 = 0x1d;
    }
    if (var2 != 0xffffffff)
    {
        func_22(var2, 0, 1.0f);
    }
    if (WorkModuleImpl.is_flag2(0x20000016))
    {
        SoundModuleImpl(0x2710, 0x350064);
    }
    WorkModuleImpl.off_flag2(0x2000005c);
    if (!StopModuleImpl(0x1))
    {
        func_551();
    }
    global16 = func_551;
    return var2;
}

int func_497()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_41())
    {
        return 0x1;
    }
    if (func_565())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0x2)
        {
            func_16(0xf, 0);
            return 0x1;
        }
    }
    if (WorkModuleImpl.get_int(0x1300010d) != 0)
    {
        if (WorkModuleImpl.is_flag2(0x20000019) == 0)
        {
            if (func_566())
            {
                return 0x1;
            }
        }
    }
    func_555();
    return 0;
}

void func_498()
{
    int var0;
    func_75();
    func_76();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.inc_int(0x10000001);
    func_40();
    if (WorkModuleImpl.get_int(0x1300010d) != 0)
    {
        if (WorkModuleImpl.is_flag2(0x20000019) == 0)
        {
            WorkModuleImpl.on_flag2(0x2100000f);
        }
    }
    KineticModuleImpl.change_kinetic_type(0x3);
    var0 = func_499();
    func_22(var0, 0, 1.0f);
    WorkModuleImpl.off_flag2(0x2000005c);
    if (!StopModuleImpl(0x1))
    {
        func_552();
    }
    global16 = func_552;
    func_78(func_500);
}

int func_499()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x10000001);
    var1 = WorkModuleImpl.get_int(0x13000022);
    if (var0 > var1)
    {
        var0 = var1;
    }
    if (var0 == 0x2)
    {
        return 0x1f;
    }
    else if (var0 == 0x3)
    {
        return 0x20;
    }
    else if (var0 == 0x4)
    {
        return 0x21;
    }
    else if (var0 == 0x5)
    {
        return 0x22;
    }
    return 0x23;
}

void func_500()
{
    int var0;
    if (func_41())
    {
        return;
    }
    if (WorkModuleImpl.get_int(0x1300010d) != 0)
    {
        if (WorkModuleImpl.is_flag2(0x20000019) == 0)
        {
            if (func_566())
            {
                return;
            }
        }
    }
    var0 = WorkModuleImpl.get_int(0x10000001);
    if (WorkModuleImpl.get_int(0x10000001) == WorkModuleImpl.get_int(0x10000002))
    {
        if (MotionModuleImpl.is_end() && global18 == 0x2)
        {
            func_16(0xf, 0);
            return;
        }
    }
    else if (MotionModuleImpl.is_end() && global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_501()
{
    func_502();
    func_78(func_503);
}

void func_502()
{
    int var0;
    int var1;
    float var2;
    float var3;
    float var4;
    func_40();
    var0 = 0x24;
    var1 = MotionModuleImpl.get_motion();
    WorkModuleImpl.off_flag2(0x2000004f);
    if (global5 == 0x1)
    {
        if (MotionModuleImpl.is_exist(0x30) == 0x1)
        {
            var2 = MotionModuleImplFloat.get_frame();
            var0 = 0x2f;
            if (var1 == 0xa)
            {
                var3 = WorkModuleImplFloat.get_float(0x300010e);
                var4 = WorkModuleImplFloat.get_float(0x300010f);
            }
            else if (var1 == 0xb)
            {
                var3 = WorkModuleImplFloat.get_float(0x3000110);
                var4 = WorkModuleImplFloat.get_float(0x3000111);
            }
            else
            {
                var3 = WorkModuleImplFloat.get_float(0x3000112);
                var4 = WorkModuleImplFloat.get_float(0x3000113);
            }
            if (var3 > var4)
            {
                if (var2 < var4 || var2 >= var3)
                {
                    var0 = 0x30;
                }
            }
            else if (var2 >= var3 && var2 < var4)
            {
                var0 = 0x30;
            }
            WorkModuleImpl.on_flag(0x2100000e);
        }
    }
    else if (global5 == 0x4 || global5 == 0x3)
    {
        if (MotionModuleImpl.is_exist(0x32) == 0x1)
        {
            if (global5 == 0x3)
            {
                var2 = 0;
            }
            else
            {
                var2 = MotionModuleImplFloat.get_frame();
            }
            var0 = 0x31;
            var3 = WorkModuleImplFloat.get_float(0x3000114);
            var4 = WorkModuleImplFloat.get_float(0x3000115);
            if (var3 > var4)
            {
                if (var2 < var4 || var2 >= var3)
                {
                    var0 = 0x32;
                }
            }
            else if (var2 >= var3 && var2 < var4)
            {
                var0 = 0x32;
            }
            WorkModuleImpl.on_flag(0x2100000e);
        }
        WorkModuleImpl.on_flag2(0x2000004f);
    }
    func_22(var0, 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e00002c);
    WorkModuleImpl.strans_on(0x1e00002b);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
}

void func_503()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_549())
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00002c))
    {
        if (!ControlModuleImpl(0x2724))
        {
            if (global24 & 0x10)
            {
                if (WorkModuleImpl.is_flag2(0x2100000d))
                {
                    if (WorkModuleImpl.get_int(0x11000005) <= WorkModuleImpl.get_int(0x12000027))
                    {
                        func_16(0xb, 0x1);
                        return;
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00002b))
    {
        if (global32 >= WorkModuleImplFloat.get_float(0x2000023))
        {
            if (global31 & 0x10)
            {
                if (ControlModuleImpl(0x271c))
                {
                    if (WorkModuleImpl.is_flag2(0x2100000d))
                    {
                        if (WorkModuleImpl.get_int(0x11000005) <= WorkModuleImpl.get_int(0x12000027))
                        {
                            func_16(0xb, 0x1);
                            return;
                        }
                    }
                }
            }
        }
    }
    if (func_41())
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x2100000e) == 0x1)
    {
        if (MotionModuleImpl.is_end() == 0x1)
        {
            func_22(0x24, 0, 1.0f);
            WorkModuleImpl.off_flag(0x2100000e);
        }
    }
    func_555();
}

void func_504()
{
    func_505();
    func_78(func_506);
}

void func_505()
{
    func_40();
    func_22(0x27, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
}

void func_506()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_549())
    {
        return 0x1;
    }
    if (func_41())
    {
        return;
    }
    func_555();
}

void func_507()
{
    func_508();
    func_510();
    func_78(func_511);
}

void func_508()
{
    if (func_109())
    {
        func_562();
        if (!StopModuleImpl(0x1))
        {
            func_560();
        }
        global16 = func_560;
    }
}

float func_509()
{
    float var0;
    float var1;
    float var2;
    float var3;
    if (global5 == 0x22)
    {
        var0 = WorkModuleImplFloat.get_float(0);
        if (var0 != 0)
        {
            var1 = (float)WorkModuleImpl.get_int(0x120000bf) * MotionModuleImplFloat(0x9) - 0.009999999776482582f;
        }
        else
        {
            var1 = WorkModuleImplFloat.get_float(0x3000028);
        }
    }
    else if (global5 == 0x46 || global5 == 0x13d)
    {
        var2 = WorkModuleImplFloat.get_float(0x3000028);
        var3 = (float)WorkModuleImpl.get_int(0x1000003e);
        if (var3 > var2)
        {
            var1 = var3;
        }
        else
        {
            var1 = var2;
        }
    }
    else if (global5 == 0xf1)
    {
        var1 = (float)WorkModuleImpl.get_int(0x10000076);
    }
    else
    {
        var1 = WorkModuleImplFloat.get_float(0x3000028);
    }
    return var1;
}

void func_510()
{
    float var0;
    var0 = func_509();
    WorkModuleImpl.set_float(var0, 0x1000006);
}

void func_511()
{
    if (func_512())
    {
        return;
    }
}

int func_512()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (func_109())
    {
        if (func_563())
        {
            return 0x1;
        }
        if (func_561())
        {
            return 0x1;
        }
    }
    else if (MotionModuleImpl.is_end())
    {
        func_16(0, 0);
        return 0x1;
    }
    return 0;
}

void func_513()
{
    func_514();
    func_78(func_515);
}

void func_514()
{
    func_22(0x3a, 0, 1.0f);
    if (func_109())
    {
        func_562();
        if (!StopModuleImpl(0x1))
        {
            func_560();
        }
        global16 = func_560;
    }
}

void func_515()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_109())
    {
        if (func_563())
        {
            return 0x1;
        }
        if (func_561())
        {
            return 0x1;
        }
    }
    else if (MotionModuleImpl.is_end())
    {
        func_16(0, 0);
        return;
    }
}

void func_516()
{
    if (WorkModuleImpl.is_flag2(0x2100000e) == 0 && WorkModuleImpl.is_flag2(0x2100000d) == 0x1)
    {
        WorkModuleImpl.strans_group_on(0x1f000000);
        WorkModuleImpl.strans_group_on(0x1f000001);
        WorkModuleImpl.strans_group_on(0x1f000002);
        WorkModuleImpl.strans_group_on(0x1f000003);
        WorkModuleImpl.strans_group_on(0x1f000004);
        WorkModuleImpl.strans_group_on(0x1f000005);
        WorkModuleImpl.strans_group_on(0x1f000006);
        WorkModuleImpl.strans_group_on(0x1f000007);
        WorkModuleImpl.on_flag2(0x2100000e);
    }
    if (WorkModuleImpl.is_flag2(0x21000010) == 0x1)
    {
        WorkModuleImpl.strans_on(0x1e00000b);
        WorkModuleImpl.off_flag2(0x21000010);
    }
    else
    {
        WorkModuleImpl.strans_off(0x1e00000b);
    }
}

void func_517()
{
    func_518();
    func_78(func_519);
}

void func_518()
{
    if (func_109())
    {
        if (!StopModuleImpl(0x1))
        {
            func_516();
        }
        global16 = func_516;
    }
}

int func_519()
{
    int var0;
    int var1;
    var0 = func_109();
    if (var0)
    {
        var1 = WorkModuleImpl.is_flag(0x21000009) == 0;
        if (func_43())
        {
            return;
        }
        if (func_44())
        {
            return;
        }
        if (func_46())
        {
            return;
        }
        if (func_47())
        {
            return;
        }
        if (func_48())
        {
            return;
        }
        if (func_49())
        {
            return;
        }
        if (func_51())
        {
            return;
        }
        if (func_52(var1))
        {
            return;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (var0)
    {
        if (func_563() == 0x1)
        {
            return 0x1;
        }
    }
    else if (MotionModuleImpl.is_end())
    {
        func_16(0, 0);
        return 0x1;
    }
    return 0;
}

void func_520()
{
    func_507();
}

void func_521()
{
    ControlModuleImpl(0x271b);
    WorkModuleImpl.strans_on(0x1e000020);
    WorkModuleImpl.strans_on(0x1e000021);
    func_22(0x41, 0, 1.0f);
    func_78(func_522);
}

void func_522()
{
    if (func_56())
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000020))
    {
        if (MotionModuleImpl.is_end())
        {
            if (global18 == 0x2)
            {
                func_16(0x7f, 0);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000021))
    {
        if (global18 == 0)
        {
            func_16(0x80);
            return;
        }
    }
}

void func_523()
{
    WorkModuleImpl.on_flag2(0x20000019);
    WorkModuleImpl.strans_on(0x1e000021);
    WorkModuleImpl.strans_on(0x1e00004f);
    WorkModuleImpl.strans_group_on(0x1f000008);
    func_78(func_524);
}

void func_524()
{
    if (func_56())
    {
        return 0x1;
    }
    if (global18 == 0 && MotionModuleImplFloat.get_frame() >= WorkModuleImplFloat.get_float(0x200004a) && KineticModuleImplFloat.get_sum_speed(0x1) >= WorkModuleImplFloat.get_float(0x200004b))
    {
        func_16(0x80);
        return;
    }
    if (func_55())
    {
        return;
    }
    if (global18 == 0x2)
    {
        if (ControlModuleImpl(0x2710, 0x2) || ControlModuleImpl(0x2710, 0x1) || WorkModuleImpl.is_flag2(0x2100000d))
        {
            func_16(0x82);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00004f))
    {
        if (ControlModuleImpl(0x2710, 0))
        {
            if (global18 == 0x2)
            {
                func_16(0x81);
                return;
            }
        }
    }
}

void func_525()
{
    if (MotionModuleImpl.is_exist(0x46))
    {
        func_22(0x46, 0, 1.0f);
        WorkModuleImpl.strans_on(0x1e00000e);
    }
    else
    {
        WorkModuleImpl.strans_on(0x1e00000f);
    }
    func_78(func_526);
}

void func_526()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_exist(0x46))
    {
        if (WorkModuleImpl.check_strans(0x1e00000e))
        {
            if (MotionModuleImpl.is_end())
            {
                if (global18 == 0)
                {
                    func_16(0x50, 0);
                    return;
                }
            }
        }
    }
    else if (WorkModuleImpl.check_strans(0x1e00000f))
    {
        if (global18 == 0)
        {
            func_16(0x54, 0);
            return;
        }
    }
}

void func_527()
{
    WorkModuleImpl.strans_group_on(0x1f000008);
    func_22(0x44, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_528);
}

void func_528()
{
    if (func_55())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (WorkModuleImpl.get_int(0x10000001) < WorkModuleImpl.get_int(0x10000002))
        {
            func_16(0xf, 0);
            return;
        }
        else
        {
            func_16(0x10, 0);
            return;
        }
    }
}

void func_529()
{
    WorkModuleImpl.strans_group_on(0x1f000008);
    func_22(0x45, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_530);
}

void func_530()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_55())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (WorkModuleImpl.get_int(0x10000001) < WorkModuleImpl.get_int(0x10000002))
        {
            func_16(0xf, 0);
            return;
        }
        else
        {
            func_16(0x10, 0);
            return;
        }
    }
}

void func_531()
{
    
}

void func_532()
{
    
}

void func_533()
{
    WorkModuleImpl.off_flag2(0x2000006c);
}

void func_534()
{
    if (TurnModuleImpl(0) && TurnModuleImpl(0x1) == 0)
    {
        TurnModuleImpl(0x2711);
    }
}

void func_535()
{
    
}

void func_536()
{
    
}

void func_537()
{
    
}

void func_538()
{
    
}

void func_539()
{
    
}

void func_540()
{
    
}

void func_541()
{
    
}

void func_542()
{
    
}

void func_543()
{
    
}

void func_544()
{
    
}

void func_545()
{
    
}

void func_546()
{
    func_547(0x2100000d);
}

void func_547(int arg0)
{
    if (WorkModuleImpl.is_flag(arg0))
    {
        if (ControlModuleImpl(0x2713, 0x2))
        {
            WorkModuleImpl.on_flag2(0x21000005);
        }
    }
    else if (global32 < WorkModuleImplFloat.get_float(0x2000022))
    {
        WorkModuleImpl.on_flag2(0x21000005);
    }
}

int func_548()
{
    if (WorkModuleImpl.is_flag2(0x2000001b))
    {
        StatusModuleImpl(0x2711, 0x4c);
        return 0x1;
    }
    else if (WorkModuleImpl.is_flag2(0x2000000b))
    {
        StatusModuleImpl(0x2711, 0xd8);
        return 0x1;
    }
    else if (ItemModuleImpl(0x11) == 0x6c)
    {
        StatusModuleImpl(0x2711, 0xa1);
        return 0x1;
    }
    return 0;
}

int func_549()
{
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        func_16(0xd8, 0);
        return 0x1;
    }
    return 0;
}

void func_550()
{
    if (WorkModuleImpl.check_strans_group(0x1f00000e))
    {
        func_105();
        func_104();
    }
    func_553();
}

void func_551()
{
    if (ControlModuleImpl(0x2712, 0x2))
    {
        WorkModuleImpl.inc_int(0x11000002);
    }
    else
    {
        WorkModuleImpl.set_int(0, 0x11000002);
    }
    func_550();
    if (WorkModuleImpl.is_flag2(0x2100000f))
    {
        func_557();
    }
    if (WorkModuleImpl.count_down_int(0x11000003))
    {
        WorkModuleImpl.off_flag2(0x2000006c);
    }
}

void func_552()
{
    if (ControlModuleImpl(0x2712, 0x2))
    {
        WorkModuleImpl.inc_int(0x11000002);
    }
    else
    {
        WorkModuleImpl.set_int(0, 0x11000002);
    }
    func_550();
    if (WorkModuleImpl.is_flag(0x2100000f))
    {
        func_557();
    }
}

void func_553()
{
    if (func_554())
    {
        func_76();
        WorkModuleImpl.on_flag2(0x21000001);
        if (WorkModuleImplFloat.get_float(0x24) > 0)
        {
            GroundModuleImpl(0x8, 0x1);
        }
        WorkModuleImpl.on_flag2(0x2000006b);
    }
}

int func_554()
{
    float var0;
    if (WorkModuleImpl.is_flag(0x21000001))
    {
        return 0;
    }
    if (KineticModuleImpl.is_enabled(0x2) == 0 || KineticModuleImpl(0x5, 0x2) == 0x1)
    {
        return 0;
    }
    var0 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    if (global32 <= WorkModuleImplFloat.get_float(0x2000046) && global47 < WorkModuleImpl.get_int(0x12000047) && var0 < 0)
    {
        if (var0 >= -WorkModuleImplFloat.get_float(0x300001b))
        {
            return 0x1;
        }
    }
    return 0;
}

void func_555()
{
    if (WorkModuleImpl.is_flag(0x20000047) == 0)
    {
        return;
    }
    if (func_556())
    {
        WorkModuleImpl.on_flag2(0x21000007);
        WorkModuleImpl.off_flag2(0x21000001);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x21000007);
    }
}

int func_556()
{
    int var0;
    if (WorkModuleImpl.get_int(0x1000006a) <= 0)
    {
        return 0;
    }
    if (KineticModuleImpl.is_enabled(0x2) == 0 || KineticModuleImpl(0x5, 0x2) == 0x1)
    {
        return 0;
    }
    var0 = ControlModuleImpl(0x2712, 0x2);
    if ((var0 || global32 >= WorkModuleImplFloat.get_float(0x200001f)) && func_91() < 0)
    {
        return 0x1;
    }
    if (var0 && global32 <= WorkModuleImplFloat.get_float(0x200001a))
    {
        if (WorkModuleImpl.is_flag(0x21000007) == 0)
        {
            if (KineticModuleImplFloat.get_speed_y(0x1) > 0)
            {
                KineticModuleImpl(0x2719, 0x1);
            }
        }
        return 0x1;
    }
    return 0;
}

void func_557()
{
    float var0;
    float var1;
    if (func_84() >= WorkModuleImplFloat.get_float(0x2000048))
    {
        if (WorkModuleImpl.is_flag2(0x21000011) == 0)
        {
            var0 = (float)global46 * -PostureModuleImplFloat.get_lr();
            if (var0 < (float)WorkModuleImpl.get_int(0x12000049))
            {
                WorkModuleImpl.on_flag2(0x21000011);
            }
        }
        else
        {
            var1 = (float)global46 * PostureModuleImplFloat.get_lr();
            if (var1 < (float)WorkModuleImpl.get_int(0x12000049))
            {
                WorkModuleImpl.on_flag2(0x21000012);
            }
        }
    }
}

int func_558()
{
    float var0;
    if (WorkModuleImpl.is_flag2(0x2000001b))
    {
        StatusModuleImpl(0x2711, 0x4d);
        return 0x1;
    }
    var0 = WorkModuleImplFloat.get_float(0x28);
    if (var0 > 0)
    {
        StatusModuleImpl(0x2711, 0x3);
        return 0x1;
    }
    return 0;
}

int func_559()
{
    if (WorkModuleImpl.is_flag(0x21000001) && WorkModuleImplFloat.get_float(0x24) > 0)
    {
        return 0x10;
    }
    return 0xf;
}

void func_560()
{
    if (WorkModuleImpl.is_flag(0x2100000f))
    {
        WorkModuleImpl(0x1b, 0x1e000036);
        WorkModuleImpl.strans_on(0x1e000034);
        WorkModuleImpl.off_flag2(0x2100000f);
    }
    if (!WorkModuleImpl.is_flag(0x2100000e))
    {
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_38();
            WorkModuleImpl(0x1b, 0x1e000034);
            WorkModuleImpl.strans_on(0x1e000036);
            WorkModuleImpl.on_flag2(0x2100000f);
            WorkModuleImpl.on_flag2(0x2100000e);
        }
    }
    if (WorkModuleImpl.is_flag(0x21000010))
    {
        WorkModuleImpl.strans_on(0x1e00000b);
        WorkModuleImpl.off_flag2(0x21000010);
    }
    else
    {
        WorkModuleImpl.strans_off(0x1e00000b);
    }
}

int func_561()
{
    if (func_39())
    {
        return 0x1;
    }
    if (func_71(global58))
    {
        return 0x1;
    }
    return 0;
}

void func_562()
{
    WorkModuleImpl.on_flag2(0x21000010);
    WorkModuleImpl.strans_off(0x1e00000b);
}

int func_563()
{
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000036))
    {
        if (global32 <= WorkModuleImplFloat.get_float(0x200001a))
        {
            if (global18 == 0)
            {
                func_16(0x12, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

void func_564()
{
    WorkModuleImpl.strans_on(0x1e00001a);
}

int func_565()
{
    if (WorkModuleImpl.check_strans(0x1e00001a))
    {
        if (GroundModuleImpl(0x2722, 0x1))
        {
            if (global18 == 0x2)
            {
                func_16(0x6a, 0);
                return 0x1;
            }
        }
    }
    return 0;
}

int func_566()
{
    if (WorkModuleImpl.get_int(0x11000002) >= WorkModuleImpl.get_int(0x13000025))
    {
        if (WorkModuleImpl.is_flag2(0x21000010))
        {
            if (global18 == 0x2)
            {
                func_16(0x7e, 0x1);
                return 0x1;
            }
        }
    }
    if (WorkModuleImpl.is_flag2(0x21000012))
    {
        if (WorkModuleImpl.is_flag2(0x21000010))
        {
            if (global18 == 0x2)
            {
                func_16(0x7e, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

int func_567()
{
    if (WorkModuleImpl.is_flag(0x2000004b) == 0)
    {
        return 0;
    }
    if (global4 == 0x10a || global4 == 0x10b)
    {
        return 0;
    }
    if ((ControlModuleImpl(0x2712, 0x2) || global32 >= WorkModuleImplFloat.get_float(0x200001f)) && func_91() < 0)
    {
        func_16(0x10a, 0x1);
        return 0x1;
    }
    return 0;
}

int func_568()
{
    StatusModuleImpl(0x5, 0x2, 0x47, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0x762, 0x10, 0x800, 0x4);
    return 0;
}

void func_569()
{
    ControlModuleImpl(0x271a);
    ControlModuleImpl(0x271b);
    ItemModuleImpl(0xf, 0);
    WorkModuleImpl.strans_on(0x1e00001c);
    WorkModuleImpl.strans_on(0x1e00001b);
    func_40();
    WorkModuleImpl.strans_group_off(0x1f000008);
    WorkModuleImpl.inc_int(0x10000041);
    SoundModuleImpl(0x2710, 0x350021);
    if (WorkModuleImpl.is_flag(0x20000016))
    {
        SoundModuleImpl(0x2710, 0x350063);
    }
    func_22(0x15b, 0, 1.0f);
    func_78(func_570);
}

void func_570()
{
    float var0;
    if (func_56())
    {
        return;
    }
    if (func_41())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xa5, 0);
        return;
    }
    if (global18 == 0)
    {
        var0 = KineticModuleImplFloat.get_sum_speed_y(0x1);
        if (WorkModuleImpl.check_strans(0x1e00001c) && WorkModuleImpl.get_int(0x1000000d) < WorkModuleImpl.get_int(0x13000029) && var0 < WorkModuleImplFloat.get_float(0x3000159))
        {
            func_16(0x17, 0);
            return;
        }
        if (WorkModuleImpl.check_strans(0x1e00001b) && var0 < WorkModuleImplFloat.get_float(0x3000159))
        {
            func_16(0x16, 0);
        }
    }
}

void func_571()
{
    
}

int func_572()
{
    StatusModuleImpl(0x5, 0x2, 0x48, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0x762, 0x10, 0x800, 0x8);
    return 0;
}

void func_573()
{
    func_574();
    func_78(func_575);
}

void func_574()
{
    ControlModuleImpl(0x271a);
    ControlModuleImpl(0x271b);
    ItemModuleImpl(0xf, 0);
    WorkModuleImpl.inc_int(0x10000001);
    func_40();
    WorkModuleImpl.inc_int(0x10000041);
    SoundModuleImpl(0x2710, 0x350022);
    if (WorkModuleImpl.is_flag(0x20000016))
    {
        SoundModuleImpl(0x2710, 0x350064);
    }
    WorkModuleImpl.off_flag2(0x2000005c);
    func_22(0x15c, 0, 1.0f);
}

void func_575()
{
    if (func_56())
    {
        return;
    }
    if (func_41())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xa5, 0);
        return;
    }
    func_555();
}

void func_576()
{
    
}

int func_577()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0x762, 0x10, 0, 0);
    return 0;
}

void func_578()
{
    ItemModuleImpl(0xf, 0);
    func_22(0x15d, 0, 1.0f);
    func_40();
    func_78(func_579);
}

void func_579()
{
    if (func_56())
    {
        return;
    }
    if (func_41())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
    func_555();
}

void func_580()
{
    
}

void func_581()
{
    float var0;
    int var1;
    float var2;
    float var3;
    if (global4 == 0xe)
    {
        WorkModuleImpl.set_int(0x25, 0x11000002);
        WorkModuleImpl.set_int(0x26, 0x11000003);
        if (WorkModuleImpl.is_flag(0x2000005f))
        {
            var0 = WorkModuleImplFloat.get_float(0x20000a8);
            KineticModuleImpl.set_speed(0x1, var0);
        }
    }
    else if (global4 == 0xf)
    {
        WorkModuleImpl.set_int(0x28, 0x11000002);
        WorkModuleImpl.set_int(0x29, 0x11000003);
    }
    else if (global4 == 0x10)
    {
        WorkModuleImpl.set_int(0x2b, 0x11000002);
        WorkModuleImpl.set_int(0x2c, 0x11000003);
        var1 = WorkModuleImpl.get_int(0x10000000);
        var2 = PostureModuleImplFloat.get_pos_y();
        AudienceManager.check_tumult_fall_special(var1, var2);
        EffectModuleImpl(0x1f, 0x18, 0);
    }
    WorkModuleImpl.set_int(0xffffffff, 0x11000004);
    WorkModuleImpl.set_float(0, 0x1000006);
    var3 = WorkModuleImplFloat.get_float(0x1);
    if (var3 != 1.0f)
    {
        KineticModuleImpl.mul_x_speed_max(0x2, var3);
    }
    if (global5 == 0x1 || global5 == 0x4 || global5 == 0x3)
    {
        WorkModuleImpl.on_flag2(0x2100000d);
    }
}

void func_582()
{
    float var0;
    float var1;
    float var2;
    float var3;
    int var4;
    float var5;
    int var6;
    if (WorkModuleImpl.is_flag(0x2100000e) == 0)
    {
        if (WorkModuleImpl.is_flag(0x2000004e) == 0)
        {
            var0 = WorkModuleImplFloat.get_float(0x1000006);
            var1 = (global48 - var0) * WorkModuleImplFloat.get_float(0x2000029);
            var0 += var1;
            var2 = func_13(var0);
            WorkModuleImpl.set_float(var0, 0x1000006);
            var3 = MotionModuleImplFloat.get_prev_weight();
            if (var2 < WorkModuleImplFloat.get_float(0x200002a))
            {
                MotionModuleImpl.remove_2nd_motion();
                MotionModuleImpl.set_weight_rate(1.0f - var3);
                WorkModuleImpl.set_int(0xffffffff, 0x11000004);
            }
            else
            {
                var4 = WorkModuleImpl.get_int(0x11000004);
                var5 = var0 * PostureModuleImplFloat.get_lr();
                if (var5 > (float)0)
                {
                    var6 = WorkModuleImpl.get_int(0x11000002);
                }
                else
                {
                    var6 = WorkModuleImpl.get_int(0x11000003);
                }
                if (var6 != var4)
                {
                    MotionModuleImpl.remove_2nd_motion();
                    MotionModuleImpl.add_2nd_motion(var6, 0x1, MotionModuleImplFloat.get_frame());
                    WorkModuleImpl.set_int(var6, 0x11000004);
                }
                MotionModuleImpl.set_weight_rate(1.0f - var2 - var3);
            }
        }
    }
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        WorkModuleImpl.inc_int(0x11000005);
    }
}

void func_583()
{
    MotionModuleImpl.remove_2nd_motion();
    WorkModuleImpl.set_float(1.0f, 0x1);
    if (global4 == 0x10)
    {
        EffectModuleImpl(0x20, 0x18);
    }
}

void func_584()
{
    int var0;
    float var1;
    float var2;
    var0 = WorkModuleImpl.get_int(0x1300000c);
    if (var0 == 0)
    {
        
    }
    var1 = (float)var0;
    var2 = (float)MotionModuleImpl.get_end_frame(0x18) / var1;
    if (var2 < 1.0f)
    {
        var2 += 0.0010000000474974513f;
    }
    func_22(0x18, 0, var2);
}

void func_585()
{
    float var0;
    var0 = PostureModuleImplFloat.get_lr();
    if (global48 * var0 < WorkModuleImplFloat.get_float(0x2000006))
    {
        sys_21(0x1d, var0, 0x1);
    }
}

void func_586()
{
    float var0;
    float var1;
    int var2;
    int var3;
    int var4;
    if (global4 == 0x16 || global4 == 0x1a)
    {
        if (global4 == 0x1a)
        {
            EffectModuleImpl(0x2f, 0x1);
        }
        var0 = 1.0f;
        if (global5 == 0x22)
        {
            var1 = WorkModuleImplFloat.get_float(0);
            if (var1 != 0)
            {
                var2 = MotionModuleImpl.get_end_frame(0x3b);
                var0 = (float)var2 / var1;
            }
        }
        else if (global5 == 0x46 || global5 == 0x13d)
        {
            var1 = (float)WorkModuleImpl.get_int(0x1000003e);
            var2 = MotionModuleImpl.get_end_frame(0x3b);
            if (var1 > (float)var2)
            {
                var0 = (float)var2 / var1;
            }
        }
        func_22(0x3b, 0, var0);
    }
    else if (global4 == 0x17)
    {
        
    }
    else if (global4 == 0x18)
    {
        var3 = WorkModuleImpl.get_int(0x11000002) - 0x68;
        var4 = 0x6d + var3;
        func_587(var4, 0x300001c + var3);
    }
    else if (global4 == 0x19)
    {
        var0 = 1.0f;
        var1 = WorkModuleImplFloat.get_float(0);
        if (var1 != (float)0)
        {
            var2 = MotionModuleImpl.get_end_frame(0x2d);
            var0 = (float)var2 / var1;
        }
        func_22(0x2d, 0, var0);
    }
    if (WorkModuleImpl.is_flag(0x2000004f) == 0x1)
    {
        WorkModuleImpl.on_flag2(0x21000008);
        WorkModuleImpl.off_flag2(0x2000004f);
    }
}

void func_587(int arg0, int arg1)
{
    float var2;
    float var3;
    int var4;
    float var5;
    var2 = WorkModuleImplFloat.get_float(arg1);
    var3 = 1.0f;
    if (var2 != (float)0)
    {
        var4 = MotionModuleImpl.get_end_frame(arg0);
        var5 = var2 + var2 * WorkModuleImplFloat.get_float(0x20000be);
        var3 = (float)var4 / var5;
    }
    func_22(arg0, 0, var3);
}

void func_588()
{
    int var0;
    int var1;
    float var2;
    float var3;
    if (global4 == 0x18)
    {
        var0 = WorkModuleImpl.get_int(0x11000002) - 0x68;
        var1 = 0x6d + var0;
        var2 = 1.0f;
        var3 = WorkModuleImplFloat.get_float(0x300001c + var0);
        if (var3 != (float)0)
        {
            var2 = 1.0f;
        }
        func_22(var1, 0, var2);
    }
    else
    {
        func_586();
    }
}

void func_589(int arg0)
{
    int var1;
    float var2;
    WorkModuleImpl.inc_int(0x11000004);
    var1 = WorkModuleImpl.get_int(0x11000004);
    var2 = WorkModuleImplFloat.get_float(arg0);
    if ((float)var1 >= var2)
    {
        WorkModuleImpl.on_flag(0x2100000d);
    }
}

void func_590()
{
    float var0;
    int var1;
    int var2;
    if (!WorkModuleImpl.is_flag(0x20000003))
    {
        if (global4 == 0x16 || global4 == 0x1a)
        {
            var0 = WorkModuleImplFloat.get_float(0x1000006);
            if (var0 != -1.0f && var0 <= MotionModuleImplFloat.get_frame())
            {
                WorkModuleImpl.on_flag(0x2100000d);
            }
        }
        else if (global4 == 0x17)
        {
            var0 = WorkModuleImplFloat.get_float(0x3000027);
            if (var0 != -1.0f && var0 <= MotionModuleImplFloat.get_frame())
            {
                WorkModuleImpl.on_flag(0x2100000d);
            }
        }
        else if (global4 == 0x18)
        {
            var1 = MotionModuleImpl.get_motion();
            var2 = var1 - 0x6d;
            func_589(0x300001c + var2);
        }
        else if (global4 == 0x19)
        {
            
        }
    }
}

void func_591()
{
    int var0;
    int var1;
    if (!WorkModuleImpl.is_flag(0x20000003))
    {
        if (global4 == 0x18)
        {
            if (WorkModuleImpl.is_flag(0x21000012) == 0)
            {
                var0 = MotionModuleImpl.get_motion();
                var1 = var0 - 0x6d;
                func_589(0x300001c + var1);
            }
        }
    }
}

void func_592()
{
    if (global4 == 0x1a)
    {
        EffectModuleImpl(0x2f, 0);
    }
    WorkModuleImpl.set_float(0, 0);
    WorkModuleImpl.off_flag(0x20000003);
}

int func_593()
{
    if (func_548())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0);
    return 0;
}

int func_594()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x1008010, 0, 0);
    return 0;
}

int func_595()
{
    StatusModuleImpl(0x5, 0, 0xe, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x1000010, 0, 0x8000000);
    return 0;
}

int func_596()
{
    StatusModuleImpl(0x5, 0, 0xe, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x1000010, 0, 0x8000000);
    return 0;
}

int func_597()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0);
    return 0;
}

void func_598()
{
    func_599();
    func_78(func_600);
}

void func_599()
{
    WorkModuleImpl.set_int(0, 0x11000003);
    func_616();
    WorkModuleImpl.strans_group_on(0x1f000002);
    WorkModuleImpl(0x1b, 0x1e00003c);
    func_22(0x33, 0, 1.0f);
}

void func_600()
{
    if (func_549())
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    else if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0x12, 0);
            return;
        }
    }
    if (func_617())
    {
        return;
    }
    if (func_46())
    {
        return;
    }
    if (WorkModuleImpl.get_int(0x11000002) == 0)
    {
        if (global18 == 0)
        {
            func_16(0x71, 0);
            return;
        }
    }
}

void func_601()
{
    sys_21(0xa, 0x1, WorkModuleImpl.get_int(0x12000095));
    func_616();
    WorkModuleImpl.strans_on(0x1e000035);
    WorkModuleImpl(0x1b, 0x1e000062);
    WorkModuleImpl(0x1b, 0x1e000063);
    WorkModuleImpl(0x1b, 0x1e00003c);
    if (WorkModuleImpl.get_int(0x1300011b) == 0x1)
    {
        WorkModuleImpl(0x1b, 0x1e00002d);
        func_618();
        func_620();
    }
    func_604();
    func_78(func_602);
}

void func_602()
{
    int var0;
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_617())
    {
        return;
    }
    if (func_619())
    {
        return 0x1;
    }
    if (func_621())
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000035))
    {
        if (global32 > WorkModuleImplFloat.get_float(0x200001a))
        {
            if (global18 == 0)
            {
                func_16(0x15, 0x1);
                return 0x1;
            }
        }
    }
    var0 = 0;
    if (!StatusModuleImpl(0x6))
    {
        var0 = func_603();
    }
    if (var0)
    {
        func_604();
    }
}

int func_603()
{
    int var0;
    int var1;
    int var2;
    var0 = 0;
    var1 = MotionModuleImpl.get_motion();
    if (var1 == 0x36)
    {
        if (ItemModuleImpl(0x25) != 0x36)
        {
            var0 = 0x1;
        }
    }
    else if (global9 >= 1.0f)
    {
        if (MotionModuleImpl.is_end())
        {
            var0 = 0x1;
        }
        else if (ItemModuleImpl(0x4, 0) && ItemModuleImpl(0x11) == 0x51)
        {
            var2 = ItemModuleImpl(0x19);
            if (var2 != 0xffffffff && var2 != var1)
            {
                var0 = 0x1;
            }
        }
    }
    return var0;
}

void func_604()
{
    int var0;
    if (ItemModuleImpl(0x25) == 0x36)
    {
        func_22(0x36, 0, 1.0f);
    }
    else
    {
        var0 = FighterUtil(0x10, 0x34);
        if (var0 == 0x1)
        {
            func_22(0x35, 0, 1.0f);
        }
        else if (var0 == 0xffffffff)
        {
            MotionModuleImpl(0x2711, 0);
        }
        else
        {
            func_22(0x34, 0, 1.0f);
        }
    }
}

void func_605()
{
    func_616();
    WorkModuleImpl.strans_on(0x1e000057);
    WorkModuleImpl.strans_on(0x1e000035);
    WorkModuleImpl(0x1b, 0x1e000062);
    WorkModuleImpl(0x1b, 0x1e000063);
    WorkModuleImpl(0x1b, 0x1e00003c);
    WorkModuleImpl(0x1b, 0x1e000058);
    func_620();
    func_22(0x37, 0, 1.0f);
    func_78(func_606);
}

void func_606()
{
    float var0;
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_617())
    {
        return;
    }
    if (func_621())
    {
        return 0x1;
    }
    if (global32 <= WorkModuleImplFloat.get_float(0x200001a))
    {
        var0 = func_88();
        if (var0 < WorkModuleImplFloat.get_float(0x200001b) && var0 >= WorkModuleImplFloat.get_float(0x200001d))
        {
            if (global18 == 0)
            {
                func_16(0x12, 0x1);
                return;
            }
        }
    }
    if (global38 & 0x1)
    {
        if (global18 == 0)
        {
            if (WorkModuleImpl.check_strans(0x1e000057))
            {
                func_16(0x2a, 0x1);
                return 0x1;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000035))
    {
        if (global32 > WorkModuleImplFloat.get_float(0x200001a))
        {
            if (global18 == 0)
            {
                func_16(0x15, 0x1);
                return 0x1;
            }
        }
    }
}

void func_607()
{
    func_616();
    WorkModuleImpl.strans_on(0x1e000057);
    WorkModuleImpl.strans_on(0x1e000035);
    WorkModuleImpl(0x1b, 0x1e000062);
    WorkModuleImpl(0x1b, 0x1e000063);
    WorkModuleImpl(0x1b, 0x1e00003c);
    WorkModuleImpl(0x1b, 0x1e000055);
    WorkModuleImpl(0x1b, 0x1e000058);
    func_618();
    func_22(0x38, 0, 1.0f);
    func_78(func_608);
}

void func_608()
{
    float var0;
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_617())
    {
        return;
    }
    if (func_619())
    {
        return 0x1;
    }
    if (global32 <= WorkModuleImplFloat.get_float(0x200001a))
    {
        var0 = func_88();
        if (var0 >= WorkModuleImplFloat.get_float(0x200001d) && var0 < WorkModuleImplFloat.get_float(0x200001b))
        {
            if (global18 == 0)
            {
                func_16(0x12, 0x1);
                return;
            }
        }
    }
    if (global38 & 0x1)
    {
        if (global18 == 0)
        {
            if (WorkModuleImpl.check_strans(0x1e000057))
            {
                func_16(0x2a, 0x1);
                return 0x1;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000035))
    {
        if (global32 > WorkModuleImplFloat.get_float(0x200001a))
        {
            if (global18 == 0)
            {
                func_16(0x15, 0x1);
                return 0x1;
            }
        }
    }
}

void func_609()
{
    func_616();
    WorkModuleImpl(0x1b, 0x1e000062);
    WorkModuleImpl(0x1b, 0x1e000063);
    func_22(0x39, 0, 1.0f);
    func_78(func_610);
}

void func_610()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (func_53())
        {
            func_16(0x11);
            return;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_617())
    {
        return;
    }
    else if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return;
        }
    }
}

void func_611()
{
    
}

void func_612()
{
    
}

void func_613()
{
    
}

void func_614()
{
    
}

void func_615()
{
    
}

void func_616()
{
    WorkModuleImpl.strans_group_on(0x1f000000);
    WorkModuleImpl.strans_group_on(0x1f000001);
    WorkModuleImpl.strans_group_on(0x1f000003);
    WorkModuleImpl.strans_group_on(0x1f000005);
    WorkModuleImpl.strans_group_on(0x1f000006);
    WorkModuleImpl.strans_group_on(0x1f000007);
    WorkModuleImpl(0x1b, 0x1e00002f);
    WorkModuleImpl(0x1b, 0x1e000031);
    WorkModuleImpl(0x1b, 0x1e000034);
}

int func_617()
{
    int var0;
    float var1;
    if (func_43())
    {
        return 0x1;
    }
    if (func_44())
    {
        return 0x1;
    }
    if ((global24 & 0x10) != 0)
    {
        if (WorkModuleImpl.check_strans(0x1e00007b) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0x1)
        {
            func_16(0x94, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000082) == 0x1 && ItemModuleImpl(0x5, 0x2) == 0x1)
        {
            func_16(0x98, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000059))
        {
            func_16(0x2b, 0x1);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000055))
    {
        if (global24 & 0x2)
        {
            var0 = ControlModuleImpl(0x16, 0, 0x1);
            var1 = PostureModuleImplFloat.get_lr();
            printf("status_SquatWait_Main turn_lr: %d, lr: %f", var0, var1);
            if (var0 == 0x1 && var1 != -1.0f || var0 == 0x2 && var1 != 1.0f)
            {
                printf("status_SquatWait_Main 1");
                ControlModuleImpl(0x17, 0, 0x1);
                ControlModuleImpl(0x18, 0, 0x1);
                global24 = ControlModuleImpl(0xa, 0);
            }
            else
            {
                printf("status_SquatWait_Main 2");
                func_16(0x28, 0x1);
                return 0x1;
            }
        }
    }
    if (func_47())
    {
        return 0x1;
    }
    if (func_49())
    {
        return 0x1;
    }
    if (func_51())
    {
        return 0x1;
    }
    if (func_52())
    {
        return 0x1;
    }
    return 0;
}

void func_618()
{
    WorkModuleImpl.strans_on(0x1e000037);
}

int func_619()
{
    if (WorkModuleImpl.check_strans(0x1e000037))
    {
        if (global31 & 0x400)
        {
            if (global18 == 0)
            {
                func_16(0x13, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

void func_620()
{
    WorkModuleImpl.strans_on(0x1e000038);
}

int func_621()
{
    if (WorkModuleImpl.check_strans(0x1e000038))
    {
        if (global31 & 0x800)
        {
            if (global18 == 0)
            {
                func_16(0x14, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

void func_622()
{
    int var0;
    if (StatusModuleImpl(0) == 0x11)
    {
        var0 = 0xffffffff;
        WorkModuleImpl.set_int(var0, 0x11000002);
    }
}

void func_623()
{
    int var0;
    float var1;
    int var2;
    if (StatusModuleImpl(0) == 0x11)
    {
        var0 = WorkModuleImpl.get_int(0x11000002);
        if (var0 > 0)
        {
            WorkModuleImpl.dec_int(0x11000002);
        }
        if (var0 == 0xffffffff && global32 <= WorkModuleImplFloat.get_float(0x2000066) && global47 < WorkModuleImpl.get_int(0x12000067) && GroundModuleImpl(0xd) == 0x1)
        {
            var1 = WorkModuleImplFloat.get_float(0x2000069);
            var2 = (int)(var1 + (float)WorkModuleImpl.get_int(0x11000004));
            WorkModuleImpl.set_int(var2, 0x11000002);
        }
    }
    func_624();
}

void func_624()
{
    int var0;
    int var1;
    float var2;
    if (sys_21(0x6e, 0x4c) == 0x1)
    {
        WorkModuleImpl.inc_int(0x11000003);
        var0 = WorkModuleImpl.get_int(0x11000003);
        var1 = sys_21(0x77, 0x4c);
        if (var0 >= WorkModuleImpl.get_int(0x1900004b + var1 - 0x1))
        {
            WorkModuleImpl.set_int(0, 0x11000003);
            var2 = WorkModuleImplFloat.get_float(0x900004e + var1 - 0x1);
            sys_21(0x1a, var2);
        }
    }
}

void func_625()
{
    
}

void func_626()
{
    float var0;
    float var1;
    float var2;
    float var3;
    int var4;
    float var5;
    int var6;
    float var7;
    float var8;
    var0 = func_629();
    var1 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var2 = (float)0;
    var3 = PostureModuleImplFloat.get_lr();
    if (var1 * var3 < (float)0)
    {
        var2 = 0;
    }
    else
    {
        var2 = var1 / var0;
    }
    WorkModuleImpl.set_float(var2, 0x1000006);
    var4 = func_630();
    var5 = MotionModuleImplFloat.get_transn_translate_end_frame(var4);
    var6 = MotionModuleImpl.get_end_frame(var4);
    if (func_13(var5) < 0.5f)
    {
        var5 = 20.0f;
    }
    var7 = var0 / (var5 / (float)var6);
    var8 = func_13(var7);
    WorkModuleImpl.set_float(var8, 0x1000007);
}

void func_627()
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
    float var10;
    float var11;
    var0 = WorkModuleImplFloat.get_float(0x16);
    var1 = WorkModuleImplFloat.get_float(0x1000006);
    var2 = func_631();
    var3 = WorkModuleImplFloat.get_float(0x3000002);
    var4 = var3 / var0;
    var5 = WorkModuleImplFloat.get_float(0x3000001);
    var6 = var5 / var0;
    var7 = var2 * var6;
    if (var2 > (float)0)
    {
        var7 += var4;
    }
    else
    {
        var7 -= var4;
    }
    var8 = var2;
    var9 = var1 / var8;
    if (var9 > (float)0 && var9 < 1.0f)
    {
        var9 = 1.0f - var9;
        var7 = var9 * WorkModuleImplFloat.get_float(0x2000002) * var7;
    }
    var10 = WorkModuleImplFloat.get_float(0x3000007);
    var11 = var10 / var0;
    if (var8 == (float)0)
    {
        if (func_13(var11) > func_13(var11))
        {
            var7 = -var1;
        }
        else if (var1 > (float)0)
        {
            var7 = -var11;
        }
        else
        {
            var7 = var11;
        }
    }
    else if (var7 > (float)0)
    {
        if (var1 + var7 > var8)
        {
            var7 = -var11;
            if (var1 + var7 < var8)
            {
                var7 = var8 - var1;
            }
        }
    }
    else if (var1 + var7 < var8)
    {
        var7 = var11;
        if (var1 + var7 > var8)
        {
            var7 = var8 - var1;
        }
    }
    WorkModuleImpl.set_float(var1 + var7, 0x1000006);
    func_632();
}

void func_628()
{
    
}

int func_629()
{
    if (StatusModuleImpl(0) == 0x13)
    {
        return WorkModuleImplFloat.get_float(0x16);
    }
    else if (StatusModuleImpl(0) == 0x14)
    {
        return WorkModuleImplFloat.get_float(0x17);
    }
    else
    {
        printf("ASSERT :: FL_get_max_speed() - MA_MSC_STATUS_GET_STATUS_KIND\n");
    }
    return 0;
}

int func_630()
{
    if (StatusModuleImpl(0) == 0x13)
    {
        return 0x37;
    }
    else if (StatusModuleImpl(0) == 0x14)
    {
        return 0x38;
    }
    else
    {
        printf("ASSERT :: get_motion_kind() - MA_MSC_STATUS_GET_STATUS_KIND\n");
    }
    return 0xffffffff;
}

float func_631()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    var0 = global48 * PostureModuleImplFloat.get_lr();
    var1 = (float)0;
    var2 = (float)0;
    var3 = (float)0;
    if (StatusModuleImpl(0) == 0x13)
    {
        var1 = WorkModuleImplFloat.get_float(0x200001b);
        var2 = WorkModuleImplFloat.get_float(0x200001c);
        if (var0 < var1)
        {
            return 0.5f;
        }
        else if (var0 > var2)
        {
            return 1.0f;
        }
    }
    else if (StatusModuleImpl(0) == 0x14)
    {
        var1 = WorkModuleImplFloat.get_float(0x200001d);
        var2 = WorkModuleImplFloat.get_float(0x200001e);
        if (var0 > var1)
        {
            return 0.5f;
        }
        else if (var0 < var2)
        {
            return 1.0f;
        }
    }
    else
    {
        printf("ASSERT :: FL_get_stick_x_rate() - MA_MSC_STATUS_GET_STATUS_KIND\n");
    }
    var4 = var2 - var1;
    if (func_13(var4) > 0)
    {
        var3 = (var0 - var1) / var4;
        var3 = var3 * 0.5f + 0.5f;
    }
    else
    {
        var3 = 1.0f;
    }
    return var3;
}

void func_632()
{
    float var0;
    float var1;
    float var2;
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    var1 = WorkModuleImplFloat.get_float(0x1000007);
    var2 = var0 * var1;
    var2 = func_13(var2);
    MotionModuleImpl.set_motion_rate(var2);
}

int func_633()
{
    StatusModuleImpl(0x5, 0, 0x33, 0x1, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x2, 0, 0);
    return 0;
}

int func_634()
{
    StatusModuleImpl(0x5, 0x2, 0x2d, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0, 0x2, 0, 0);
    return 0;
}

void func_635()
{
    func_78(func_636);
}

void func_636()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (global18 == 0)
    {
        if (MotionModuleImpl.is_end() == 0x1)
        {
            func_16(0, 0);
            return;
        }
    }
}

void func_637()
{
    if (!StopModuleImpl(0x1))
    {
        func_642();
    }
    global16 = func_642;
    MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x20000ac));
    func_78(func_638);
}

void func_638()
{
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
    if (GroundModuleImpl(0x2722, 0x1) != 0x1)
    {
        if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_639()
{
    
}

void func_640()
{
    
}

int func_641()
{
    float var0;
    float var1;
    var0 = (float)0xffffffff;
    var1 = (float)0x1;
    if (GroundModuleImpl(0x2722, 0x2))
    {
        if (PostureModuleImplFloat.get_lr() == var0)
        {
            if (func_90() > WorkModuleImplFloat.get_float(0x3000003))
            {
                if (global18 == 0)
                {
                    func_16(0x69, 0x1);
                    return 0x1;
                }
            }
        }
    }
    if (GroundModuleImpl(0x2722, 0x4))
    {
        if (PostureModuleImplFloat.get_lr() == var1)
        {
            if (func_90() > WorkModuleImplFloat.get_float(0x3000003))
            {
                if (global18 == 0)
                {
                    func_16(0x69, 0x1);
                    return 0x1;
                }
            }
        }
    }
    return 0;
}

void func_642()
{
    if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
    {
        if (MotionModuleImpl.get_motion() != 0x24)
        {
            MotionModuleImpl(0x1, 0x24, 0, 1.0f);
            if (func_41())
            {
                return;
            }
        }
        func_550();
    }
}

int func_643()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0x4, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x2, 0, 0x10);
    return 0;
}

void func_644()
{
    int var0;
    int var1;
    float var2;
    float var3;
    func_75();
    func_76();
    ControlModuleImpl(0x271b);
    var0 = WorkModuleImpl.get_int(0x120000b1);
    WorkModuleImpl.set_int(var0, 0x11000002);
    var1 = WorkModuleImpl.get_int(0x120000b3);
    WorkModuleImpl.set_int(var1, 0x11000004);
    WorkModuleImpl.inc_int(0x10000004);
    var2 = WorkModuleImplFloat.get_float(0x20000b8);
    var3 = WorkModuleImplFloat.get_float(0x20000b9);
    if (!StopModuleImpl(0x1))
    {
        func_647();
    }
    global16 = func_647;
    func_78(func_645);
}

void func_645()
{
    if (MotionModuleImpl.is_end() != 0)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_41())
    {
        return;
    }
}

void func_646()
{
    
}

void func_647()
{
    if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) == 0)
        {
            func_40();
            KineticModuleImpl.change_kinetic_type(0x29);
            MotionModuleImpl.set_motion_rate(1.0f);
        }
    }
    else if (WorkModuleImpl.get_int(0x11000004) > 0)
    {
        WorkModuleImpl.dec_int(0x11000004);
    }
}

int func_648()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x2, 0, 0);
    return 0;
}

void func_649()
{
    WorkModuleImpl.strans_group_on(0x1f00000b);
    WorkModuleImpl.strans_group_on(0x1f00000e);
    if (!StopModuleImpl(0x1))
    {
        func_651();
    }
    global16 = func_651;
    func_78(func_650);
}

void func_650()
{
    if (GroundModuleImpl(0x2728) == 0)
    {
        func_16(0xe, 0);
        return;
    }
    else if (GroundModuleImpl(0x2722, 0x1) != 0)
    {
        func_16(0xe, 0);
        return;
    }
    else if (GroundModuleImpl(0x2722, 0x6) == 0)
    {
        func_16(0xe, 0);
        return;
    }
    if (global18 == 0)
    {
        func_16(0, 0);
        return;
    }
    if (global24 & 0x200000)
    {
        func_16(0x6b, 0x1);
        return;
    }
    if (global32 >= WorkModuleImplFloat.get_float(0x200001f) && WorkModuleImpl.is_flag(0x2100000f))
    {
        func_16(0x6b, 0x1);
        return;
    }
    if (func_88() >= WorkModuleImplFloat.get_float(0x20000af))
    {
        func_16(0x6b, 0x1);
        return;
    }
    if (global32 <= WorkModuleImplFloat.get_float(0x2000046))
    {
        func_16(0x6f, 0x1);
        return;
    }
    if (MotionModuleImpl.is_end() != 0 || WorkModuleImpl.is_flag(0x2100000e) != 0)
    {
        func_16(0x6d, 0);
        return;
    }
    if (func_59())
    {
        return;
    }
    if (func_63())
    {
        return;
    }
    if (func_1724() == 0x1)
    {
        return;
    }
}

void func_651()
{
    if (global32 < WorkModuleImplFloat.get_float(0x2000022))
    {
        WorkModuleImpl.on_flag(0x2100000f);
    }
}

void func_652()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000bd), 0x1000000b);
}

int func_653()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x2, 0, 0);
    return 0;
}

void func_654()
{
    WorkModuleImpl.strans_group_on(0x1f00000b);
    WorkModuleImpl.strans_group_on(0x1f00000e);
    func_23(0xef);
    MotionModuleImpl.set_motion_rate(0);
    if (!StopModuleImpl(0x1))
    {
        func_656();
    }
    global16 = func_656;
    func_78(func_655);
}

void func_655()
{
    if (GroundModuleImpl(0x2722, 0x8) != 0)
    {
        func_16(0, 0);
        return;
    }
    if (GroundModuleImpl(0x2728) == 0)
    {
        func_16(0xe, 0);
        return;
    }
    else if (GroundModuleImpl(0x2722, 0x1) != 0)
    {
        func_16(0xe, 0);
        return;
    }
    else if (GroundModuleImpl(0x2722, 0x6) == 0)
    {
        func_16(0xe, 0);
        return;
    }
    else if (WorkModuleImpl.get_int(0x11000004) <= 0)
    {
        func_16(0xe, 0);
        return;
    }
    if (global24 & 0x200000)
    {
        func_16(0x70, 0x1);
        return;
    }
    if (global32 >= WorkModuleImplFloat.get_float(0x200001f) && WorkModuleImpl.is_flag(0x2100000f))
    {
        func_16(0x70, 0x1);
        return;
    }
    if (func_88() >= WorkModuleImplFloat.get_float(0x20000af))
    {
        func_16(0x6e, 0x1);
        return;
    }
    if (global32 <= WorkModuleImplFloat.get_float(0x2000046))
    {
        func_16(0x6f, 0x1);
        return;
    }
    if (func_59())
    {
        return;
    }
    if (func_63())
    {
        return;
    }
    if (func_1724() == 0x1)
    {
        return;
    }
}

void func_656()
{
    if (WorkModuleImpl.get_int(0x11000004) > 0)
    {
        WorkModuleImpl.dec_int(0x11000004);
    }
    if (global32 < WorkModuleImplFloat.get_float(0x2000022))
    {
        WorkModuleImpl.on_flag(0x2100000f);
    }
}

void func_657()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000bd), 0x1000000b);
}

int func_658()
{
    StatusModuleImpl(0x5, 0x2, 0x2a, 0x5, 0x4, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_659()
{
    func_40();
    func_23(0xef);
    MotionModuleImpl.set_motion_rate(1.0f);
    func_78(func_660);
}

void func_660()
{
    if (func_56())
    {
        return;
    }
    if (func_41())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
}

void func_661()
{
    
}

int func_662()
{
    StatusModuleImpl(0x5, 0x2, 0x2c, 0x5, 0x3, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0, 0, 0);
    return 0;
}

void func_663()
{
    func_40();
    func_23(0xef);
    MotionModuleImpl.set_motion_rate(1.0f);
    func_78(func_664);
}

void func_664()
{
    if (func_56())
    {
        return;
    }
    if (func_41())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
}

void func_665()
{
    
}

int func_666()
{
    StatusModuleImpl(0x5, 0x2, 0x2b, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0, 0, 0);
    return 0;
}

void func_667()
{
    int var0;
    var0 = 0x1;
    func_496(0, var0);
    func_78(func_668);
}

void func_668()
{
    int var0;
    var0 = func_497();
    if (var0)
    {
        return;
    }
}

void func_669()
{
    
}

int func_670()
{
    int var0;
    if (WorkModuleImpl.is_flag(0x2000001b))
    {
        StatusModuleImpl(0x2711, 0x4e);
        return 0x1;
    }
    else if (WorkModuleImpl.is_flag(0x2000000b))
    {
        StatusModuleImpl(0x2711, 0xd3);
        return 0x1;
    }
    else
    {
        var0 = ItemModuleImpl(0x11);
        if (var0 == 0)
        {
            StatusModuleImpl(0x2711, 0xa6);
            return 0x1;
        }
        else if (var0 == 0x6c)
        {
            StatusModuleImpl(0x2711, 0x98);
            return 0x1;
        }
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0x1, 0, 0, 0, 0x1008010, 0, 0);
    return 0;
}

int func_671()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x7, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0, 0, 0, 0);
    return 0;
}

void func_672()
{
    func_684();
    func_682();
    func_78(func_673);
}

void func_673()
{
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        func_16(0xd3, 0);
        return 0x1;
    }
    if (func_685())
    {
        return;
    }
    if (func_681())
    {
        return;
    }
}

void func_674()
{
    func_40();
    WorkModuleImpl.strans_on(0x1e00005f);
    WorkModuleImpl.strans_on(0x1e000065);
    WorkModuleImpl.strans_on(0x1e000076);
    WorkModuleImpl.strans_on(0x1e000074);
    func_22(0xfb, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_675);
}

void func_675()
{
    if (WorkModuleImpl.get_int(0x11000002) == 0)
    {
        if (!WorkModuleImpl.is_flag(0x2100000d))
        {
            WorkModuleImpl.on_flag2(0x2100000d);
            KineticModuleImpl.change_kinetic_type(0x13);
            func_676();
        }
        if (func_41())
        {
            return;
        }
        if (MotionModuleImpl.is_end())
        {
            func_16(0xe, 0);
            return;
        }
    }
    else if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        func_71(global35);
        if (func_72(global27))
        {
            if (WorkModuleImpl.check_strans(0x1e000065))
            {
                if (global24 & 0x8000)
                {
                    func_16(0x155, 0x1);
                    return 0x1;
                }
            }
        }
        if ((global24 & 0x20000000) != 0 && WorkModuleImpl.check_strans(0x1e000076) == 0x1 && ItemModuleImpl(0x4) == 0x1 && ItemModuleImpl(0x5, 0x800000) == 0)
        {
            func_16(0x8c, 0);
            return 0x1;
        }
        if ((global24 & 0x1) != 0 && WorkModuleImpl.check_strans(0x1e000074) == 0x1)
        {
            if (ItemModuleImpl(0x5, 0x8) == 0x1 || ItemModuleImpl(0x5, 0x2) == 0x1 && ItemModuleImpl(0x1a) <= 0)
            {
                func_16(0x8c, 0);
                return 0x1;
            }
        }
        if (global32 <= WorkModuleImplFloat.get_float(0x200003c) && ControlModuleImpl(0x2710, 0))
        {
            if (WorkModuleImpl.check_strans(0x1e00005f))
            {
                func_16(0x2e, 0x1);
                return 0x1;
            }
        }
    }
}

void func_676()
{
    func_76();
    GroundModuleImpl(0x2715);
    func_94();
    KineticModuleImpl(0x2710, 0, WorkModuleImplFloat.get_float(0x2000068));
}

void func_677()
{
    float var0;
    int var1;
    var0 = WorkModuleImplFloat.get_float(0x20000a1);
    var1 = (int)var0;
    WorkModuleImpl.set_int(var1, 0x11000002);
}

void func_678()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 > 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
    }
}

void func_679()
{
    
}

void func_680()
{
    
}

void func_681()
{
    int var0;
    int var1;
    int var2;
    int var3;
    var0 = StatusModuleImpl(0x6);
    var1 = 0;
    if (!var0)
    {
        var2 = MotionModuleImpl.get_motion();
        if (var2 == 0x19a)
        {
            if (MotionModuleImpl.is_end() || WorkModuleImpl.is_flag(0x2000000a) == 0)
            {
                var1 = 0x1;
            }
        }
        else if (var2 == 0x5)
        {
            if (ItemModuleImpl(0x19) != 0x5)
            {
                var1 = 0x1;
            }
        }
        else if (MotionModuleImpl.is_end())
        {
            var1 = 0x1;
        }
        else if (ItemModuleImpl(0x4, 0) && ItemModuleImpl(0x11) == 0x51)
        {
            var3 = ItemModuleImpl(0x19);
            if (var3 != 0xffffffff && var3 != var2)
            {
                var1 = 0x1;
            }
        }
    }
    if (var1)
    {
        func_682();
    }
}

void func_682()
{
    int var0;
    if (func_683() == 0)
    {
        var0 = FighterUtil(0xd, 0);
        if (var0 == 0x1)
        {
            func_22(0x1, 0, 1.0f);
        }
        else if (var0 == 0x2)
        {
            func_22(0x2, 0, 1.0f);
        }
        else if (var0 == 0x3)
        {
            func_22(0x3, 0, 1.0f);
        }
        else if (var0 == 0x4)
        {
            func_22(0x4, 0, 1.0f);
        }
        else if (var0 == 0xffffffff)
        {
            MotionModuleImpl(0x2711, 0);
        }
        else
        {
            func_22(0, 0, 1.0f);
        }
    }
}

int func_683()
{
    if (WorkModuleImpl.is_flag(0x2000000a))
    {
        if (MotionModuleImpl.get_motion() == 0x19a)
        {
            MotionModuleImpl(0x2711, 0);
        }
        else
        {
            func_22(0x19a, 0, 1.0f);
        }
        return 0x1;
    }
    else if (ItemModuleImpl(0x4, 0))
    {
        if (ItemModuleImpl(0x19) == 0x5)
        {
            func_22(0x5, 0, 1.0f);
        }
        else if (MotionModuleImpl.get_motion() == 0)
        {
            MotionModuleImpl(0x2711, 0);
        }
        else
        {
            func_22(0, 0, 1.0f);
        }
        return 0x1;
    }
    return 0;
}

void func_684()
{
    sys_21(0x9);
    sys_21(0xa, 0x1, WorkModuleImpl.get_int(0x12000095));
    sys_21(0xc, 0x1);
    func_38();
}

int func_685()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (func_39())
    {
        return 0x1;
    }
    if (func_694())
    {
        return 0x1;
    }
    return 0;
}

int func_686()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0, 0, 0x4000000);
    return 0;
}

void func_687()
{
    ControlModuleImpl(0x271b);
    if (sys_1F(0x1))
    {
        if (!WorkModuleImpl.is_flag(0x2000005e))
        {
            if (ControlModuleImpl(0x2712, 0x6))
            {
                callFunc3(func_688);
                return;
            }
        }
    }
    sys_21(0x81);
    callFunc3(func_689);
}

void func_688()
{
    if (global9 < 2.0f)
    {
        return;
    }
    if (!ControlModuleImpl(0x2712, 0x6))
    {
        if (sys_1F(0x2))
        {
            WorkModuleImpl.on_flag2(0x2100000d);
            sys_21(0x2b, 0x1);
            func_16(0x14e);
            return;
        }
        else
        {
            WorkModuleImpl.set_int(0x1ab, 0x11000002);
            WorkModuleImpl.set_int(0x1ac, 0x11000003);
        }
    }
    callFunc3(func_689);
}

void func_689()
{
    int var0;
    if (!WorkModuleImpl.is_flag(0x2100000d))
    {
        if (WorkModuleImpl.is_flag(0x2000005e))
        {
            var0 = randint(0, 0x3);
            if (var0 == 0)
            {
                WorkModuleImpl.set_int(0x1a7, 0x11000002);
                WorkModuleImpl.set_int(0x1a8, 0x11000003);
                sys_21(0x2a, 0);
            }
            else if (var0 == 0x1)
            {
                WorkModuleImpl.set_int(0x1ab, 0x11000002);
                WorkModuleImpl.set_int(0x1ac, 0x11000003);
                sys_21(0x2a, 0x1);
            }
            else if (var0 == 0x2)
            {
                WorkModuleImpl.set_int(0x1a9, 0x11000002);
                WorkModuleImpl.set_int(0x1aa, 0x11000003);
                var0 = randint(0, 0x2);
                if (var0 == 0x1)
                {
                    sys_21(0x2a, 0x2);
                }
                else
                {
                    sys_21(0x2a, 0x3);
                }
            }
        }
        else if (global31 & 0x2)
        {
            WorkModuleImpl.set_int(0x1a7, 0x11000002);
            WorkModuleImpl.set_int(0x1a8, 0x11000003);
            sys_21(0x2a, 0);
        }
        else if (global31 & 0x4)
        {
            WorkModuleImpl.set_int(0x1ab, 0x11000002);
            WorkModuleImpl.set_int(0x1ac, 0x11000003);
            sys_21(0x2a, 0x1);
        }
        else if (global31 & 0x1)
        {
            WorkModuleImpl.set_int(0x1a9, 0x11000002);
            WorkModuleImpl.set_int(0x1aa, 0x11000003);
            if (ControlModuleImpl(0x1e) == 0x1)
            {
                sys_21(0x2a, 0x2);
            }
            else
            {
                sys_21(0x2a, 0x3);
            }
        }
        if (MotionModuleImpl.is_exist(WorkModuleImpl.get_int(0x11000003)) == 0x1)
        {
            if (PostureModuleImplFloat.get_lr() == -1.0f)
            {
                func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
            }
            else
            {
                func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
            }
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
        }
    }
    callFunc3(func_690);
}

void func_690()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe);
        return;
    }
    if (!WorkModuleImpl.is_flag(0x2100000d))
    {
        if (MotionModuleImpl.is_end())
        {
            func_16(0);
            return;
        }
    }
}

void func_691()
{
    
}

int func_692()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_693()
{
    
}

int func_694()
{
    float var0;
    var0 = 0.75f;
    if (GroundModuleImpl(0x2726, 0.8600000143051147f) == 0x1)
    {
        if (func_84() < var0)
        {
            if (!WorkModuleImpl.is_flag(0x20000028))
            {
                func_16(0x7b, 0x1);
                return 0x1;
            }
        }
    }
    return 0;
}

int func_695()
{
    float var0;
    var0 = 0.75f;
    if (GroundModuleImpl(0x2726, 0.8600000143051147f) == 0x1)
    {
        if (MotionModuleImpl.is_end())
        {
            if (func_84() < var0)
            {
                if (!WorkModuleImpl.is_flag(0x20000028))
                {
                    func_16(0x7b, 0x1);
                    return 0x1;
                }
            }
        }
    }
    return 0;
}

void func_696()
{
    float var0;
    var0 = MotionModuleImplFloat.get_frame();
    if (var0 > (float)0x2)
    {
        WorkModuleImpl.off_flag2(0x2100000a);
    }
}

int func_697()
{
    return func_698(0, 0, 0);
}

int func_698(int arg0, int arg1, int arg2)
{
    if (WorkModuleImpl.is_flag(0x2000000a))
    {
        StatusModuleImpl(0x2711, 0x4);
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0xe, 0x3, 0, 0x1, arg0, arg1, arg2, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0x8000000);
    return 0;
}

int func_699()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0);
    return 0;
}

int func_700()
{
    StatusModuleImpl(0x5, 0, 0x1b, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0x10000000);
    return 0;
}

int func_701()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0x10000000);
    return 0;
}

int func_702()
{
    StatusModuleImpl(0x5, 0, 0x7, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0);
    return 0;
}

void func_703()
{
    WorkModuleImpl.strans_group_on(0x1f000000);
    WorkModuleImpl.strans_group_on(0x1f000001);
    WorkModuleImpl.strans_group_on(0x1f000002);
    WorkModuleImpl.strans_group_on(0x1f000003);
    WorkModuleImpl.strans_group_on(0x1f000004);
    WorkModuleImpl.strans_group_on(0x1f000005);
    WorkModuleImpl.strans_group_on(0x1f000006);
    WorkModuleImpl.strans_group_on(0x1f000007);
    WorkModuleImpl(0x1b, 0x1e000031);
    WorkModuleImpl(0x1b, 0x1e00002f);
    WorkModuleImpl(0x1b, 0x1e00002d);
    WorkModuleImpl(0x1b, 0x1e00003c);
    WorkModuleImpl(0x1b, 0x1e000027);
    WorkModuleImpl(0x1b, 0x1e000028);
    WorkModuleImpl.on_flag2(0x2100000a);
    func_22(0x10, 0, 1.0f);
}

void func_704()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (global18 == 0 && MotionModuleImpl.is_end())
    {
        func_16(0, 0);
        return 0x1;
    }
    func_696();
    if (func_43())
    {
        return 0x1;
    }
    if (func_44())
    {
        return 0x1;
    }
    if (func_46())
    {
        return 0x1;
    }
    if (func_47())
    {
        return 0x1;
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.is_flag(0x21000010) == 0)
        {
            if (global31 & 0x1000)
            {
                func_16(0x20, 0x1);
                return 0x1;
            }
            if (global31 & 0x2000)
            {
                func_16(0x21, 0x1);
                return 0x1;
            }
        }
    }
    if (func_48())
    {
        return 0x1;
    }
    if (func_49())
    {
        return 0x1;
    }
    if (func_51())
    {
        return 0x1;
    }
    if (func_52())
    {
        return 0x1;
    }
}

int func_705()
{
    StatusModuleImpl(0x5, 0, 0x35, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0);
    return 0;
}

int func_706()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0x10000000);
    return 0;
}

int func_707()
{
    StatusModuleImpl(0x5, 0, 0x1f, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0x10000000);
    return 0;
}

int func_708()
{
    StatusModuleImpl(0x5, 0, 0x7, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x1000010, 0, 0);
    return 0;
}

void func_709()
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
    if (!StopModuleImpl(0x1))
    {
        func_742();
    }
    global16 = func_742;
    func_78(func_710);
}

void func_710()
{
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        func_16(0xd4, 0);
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_694())
    {
        return;
    }
    if (func_43())
    {
        return;
    }
    if (func_44())
    {
        return;
    }
    if (func_46())
    {
        return;
    }
    if (func_47())
    {
        return;
    }
    if (func_48())
    {
        return;
    }
    if (func_49())
    {
        return;
    }
    if (func_51())
    {
        return;
    }
    if (func_52())
    {
        return;
    }
    if (func_84() < WorkModuleImplFloat.get_float(0x2000001))
    {
        if (GroundModuleImplFloat(0) < 1.0f)
        {
            if (global18 == 0)
            {
                func_16(0x2);
                return;
            }
        }
    }
    if (func_88() < 0)
    {
        if (GroundModuleImplFloat(0) < 1.0f)
        {
            if (global18 == 0)
            {
                func_16(0x2);
                return;
            }
        }
    }
    if (func_84() < WorkModuleImplFloat.get_float(0x2000001))
    {
        if (global18 == 0)
        {
            func_16(0, 0x1);
            return;
        }
    }
    if (func_88() < (float)0)
    {
        if (global18 == 0)
        {
            func_16(0, 0x1);
            return;
        }
    }
}

void func_711()
{
    int var0;
    int var1;
    float var2;
    float var3;
    float var4;
    func_684();
    var0 = 0xd;
    var1 = MotionModuleImpl.get_motion();
    if (MotionModuleImpl.is_exist(0xf) == 0x1)
    {
        var2 = MotionModuleImplFloat.get_frame();
        var0 = 0xe;
        if (var1 == 0xa)
        {
            var3 = WorkModuleImplFloat.get_float(0x300010e);
            var4 = WorkModuleImplFloat.get_float(0x300010f);
        }
        else if (var1 == 0xb)
        {
            var3 = WorkModuleImplFloat.get_float(0x3000110);
            var4 = WorkModuleImplFloat.get_float(0x3000111);
        }
        else
        {
            var3 = WorkModuleImplFloat.get_float(0x3000112);
            var4 = WorkModuleImplFloat.get_float(0x3000113);
        }
        if (var3 > var4)
        {
            if (var2 < var4 || var2 >= var3)
            {
                var0 = 0xf;
            }
        }
        else if (var2 >= var3 && var2 < var4)
        {
            var0 = 0xf;
        }
    }
    func_22(var0, 0, 0);
    func_78(func_712);
}

void func_712()
{
    if (func_685())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0, 0);
        return;
    }
}

void func_713()
{
    func_22(0x11, 0, 1.0f);
    WorkModuleImpl.strans_group_on(0x1f000006);
    WorkModuleImpl.strans_on(0x1e000063);
    WorkModuleImpl.strans_on(0x1e000074);
    WorkModuleImpl.strans_on(0x1e000078);
    WorkModuleImpl.strans_on(0x1e000076);
    WorkModuleImpl.strans_on(0x1e000077);
    WorkModuleImpl.strans_on(0x1e00006f);
    WorkModuleImpl.strans_on(0x1e00006e);
    WorkModuleImpl.strans_on(0x1e00007b);
    WorkModuleImpl.strans_on(0x1e000082);
    WorkModuleImpl.strans_on(0x1e00005c);
    WorkModuleImpl.strans_on(0x1e000059);
    WorkModuleImpl.strans_on(0x1e00000b);
    WorkModuleImpl.strans_on(0x1e00007f);
    WorkModuleImpl.strans_on(0x1e000072);
    WorkModuleImpl.strans_on(0x1e000073);
    WorkModuleImpl.strans_on(0x1e000054);
    WorkModuleImpl.strans_on(0x1e000031);
    WorkModuleImpl.strans_on(0x1e000066);
    WorkModuleImpl.strans_on(0x1e000067);
    WorkModuleImpl.strans_on(0x1e000068);
    WorkModuleImpl.strans_on(0x1e000069);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1200000b), 0x11000003);
    func_75();
    if (!StopModuleImpl(0x1))
    {
        func_714();
    }
    global16 = func_714;
    func_78(func_715);
}

void func_714()
{
    if (WorkModuleImpl.get_int(0x11000003) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000003);
        if (WorkModuleImpl.get_int(0x11000003) < 0)
        {
            WorkModuleImpl.strans_off(0x1e000031);
            WorkModuleImpl.strans_on(0x1e000030);
        }
    }
}

void func_715()
{
    float var0;
    if (func_71(global59))
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (func_60())
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000063))
    {
        if (global24 & 0x2000)
        {
            if (func_72(global25))
            {
                func_16(0x153, 0x1);
                return;
            }
        }
    }
    if (global24 & 0x20 && WorkModuleImpl.check_strans(0x1e000074) == 0x1)
    {
        if (ItemModuleImpl(0x5, 0x8) == 0x1 || ItemModuleImpl(0x5, 0x2) == 0x1 && ItemModuleImpl(0x1a) <= 0)
        {
            func_16(0x8c, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000074) == 0x1 && ItemModuleImpl(0x5, 0x8) == 0x1 && (global38 & 0x1) != 0 && WorkModuleImpl.is_flag2(0x2100000d) == 0)
    {
        func_16(0x8c, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000078) == 0x1 && ItemModuleImpl(0x5, 0x8) == 0x1 && (global38 & 0x1) != 0)
    {
        func_16(0x8d, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000076) == 0x1 && ItemModuleImpl(0x4) == 0x1 && (global24 & 0x20000000) != 0 && WorkModuleImpl.is_flag2(0x2100000d) == 0 && ItemModuleImpl(0x5, 0x800000) == 0)
    {
        func_16(0x8c, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000077) == 0x1 && ItemModuleImpl(0x4) == 0x1 && (global24 & 0x20000000) != 0 && ItemModuleImpl(0x5, 0x800000) == 0)
    {
        func_16(0x8d, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00006f) == 0x1 && func_88() <= WorkModuleImplFloat.get_float(0x2000014) && (global24 & 0x20000000) != 0 && ItemModuleImpl(0x4) == 0)
    {
        func_16(0x39, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00006e) == 0x1 && (global24 & 0x20000000) != 0 && ItemModuleImpl(0x4) == 0)
    {
        func_16(0x37, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00007b) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0x1 && (global31 & 0x20) != 0 && WorkModuleImpl.is_flag2(0x2100000d) == 0)
    {
        func_16(0x94, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000082) == 0x1 && ItemModuleImpl(0x5, 0x2) == 0x1 && (global38 & 0x1) != 0 && WorkModuleImpl.is_flag2(0x2100000d) == 0)
    {
        if (ItemModuleImpl(0x1a) <= 0)
        {
            func_16(0x8c, 0);
        }
        else
        {
            func_16(0x98, 0x1);
        }
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000059) == 0x1 && global31 & 0x20 && WorkModuleImpl.is_flag2(0x2100000d) == 0)
    {
        func_16(0x2b, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00007f) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0x1 && (global38 & 0x1) != 0)
    {
        func_16(0x97, 0x1);
        return;
    }
    if (global24 & 0x20)
    {
        if (WorkModuleImpl.check_strans(0x1e00005c))
        {
            func_16(0x31, 0x1);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000054))
    {
        if (global38 & 0x1)
        {
            func_16(0x27, 0x1);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000072) == 0x1 && ItemModuleImpl(0) && ItemModuleImpl(0x22))
    {
        if ((global38 & 0x1) != 0)
        {
            func_16(0x8a, 0x1);
            return;
        }
        else if (sys_21(0x86, 0x1))
        {
            func_16(0x8a, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000073) == 0x1 && ItemModuleImpl(0x1) && ItemModuleImpl(0x4) == 0)
    {
        if ((global38 & 0x1) != 0)
        {
            func_16(0x8b, 0x1);
            return;
        }
        else if (sys_21(0x86, 0x1))
        {
            func_16(0x8b, 0);
            return;
        }
    }
    var0 = MotionModuleImplFloat.get_frame();
    if (WorkModuleImpl.check_strans(0x1e000031) == 0x1 && global24 & 0x80000)
    {
        func_16(0x7, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000030) == 0x1 && global24 & 0x80000)
    {
        func_16(0x8, 0x1);
        return;
    }
    if (global24 & 0x20000 && var0 >= (float)WorkModuleImpl.get_int(0x1200000c))
    {
        func_16(0x3, 0x1);
        return;
    }
    if (ControlModuleImpl(0x2712, 0x3) == 0x1 && WorkModuleImpl.is_flag2(0x2100000e) == 0)
    {
        func_16(0x20, 0x1);
        return;
    }
    if (func_51())
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00000a) == 0x1 && func_88() >= WorkModuleImplFloat.get_float(0x200000e))
    {
        func_16(0x4, 0x1);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        if (GroundModuleImplFloat(0) < 1.0f)
        {
            func_16(0x5, 0);
        }
        else
        {
            func_16(0, 0);
        }
        return;
    }
    if (func_641())
    {
        return;
    }
}

void func_716()
{
    func_22(0x12, 0, 1.0f);
    WorkModuleImpl.strans_group_on(0x1f000000);
    WorkModuleImpl.strans_group_on(0x1f000005);
    WorkModuleImpl.strans_group_on(0x1f000006);
    WorkModuleImpl.strans_on(0x1e000078);
    WorkModuleImpl.strans_on(0x1e000077);
    WorkModuleImpl.strans_on(0x1e000074);
    WorkModuleImpl.strans_on(0x1e00006f);
    WorkModuleImpl.strans_on(0x1e00006e);
    WorkModuleImpl.strans_on(0x1e00007f);
    WorkModuleImpl.strans_on(0x1e00005c);
    WorkModuleImpl.strans_on(0x1e000054);
    WorkModuleImpl.strans_on(0x1e000030);
    if (WorkModuleImpl.is_flag(0x2000000a))
    {
        WorkModuleImpl.strans_on(0x1e000092);
    }
    func_78(func_717);
}

void func_717()
{
    if (func_71(global60))
    {
        return 0x1;
    }
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        func_16(0xd4, 0);
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_43())
    {
        return;
    }
    if (global24 & 0x20 && WorkModuleImpl.check_strans(0x1e000074) == 0x1)
    {
        if (ItemModuleImpl(0x5, 0x8) == 0x1 || ItemModuleImpl(0x5, 0x2) == 0x1 && ItemModuleImpl(0x1a) <= 0)
        {
            func_16(0x8c, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000078) == 0x1 && ItemModuleImpl(0x5, 0x8) == 0x1 && (global38 & 0x1) != 0)
    {
        func_16(0x8d, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000077) == 0x1 && ItemModuleImpl(0x4) == 0x1 && (global24 & 0x20000000) != 0 && ItemModuleImpl(0x5, 0x800000) == 0)
    {
        func_16(0x8d, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00006f) == 0x1 && WorkModuleImplFloat.get_float(0x1000006) <= 0 && func_88() <= WorkModuleImplFloat.get_float(0x2000014) && (global24 & 0x20000000) != 0 && ItemModuleImpl(0x4) == 0)
    {
        func_16(0x39, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00006e) == 0x1 && (global24 & 0x20000000) != 0 && ItemModuleImpl(0x4) == 0)
    {
        func_16(0x37, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00007f) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0x1 && (global38 & 0x1) != 0)
    {
        func_16(0x97, 0x1);
        return;
    }
    if (global24 & 0x20)
    {
        if (WorkModuleImpl.check_strans(0x1e00005c))
        {
            func_16(0x31, 0x1);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000054))
    {
        if (global38 & 0x1)
        {
            func_16(0x27, 0x1);
            return;
        }
    }
    if (func_49())
    {
        return;
    }
    if (func_51())
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000030) == 0x1)
    {
        if (WorkModuleImplFloat.get_float(0x1000006) <= 0 && func_88() <= WorkModuleImplFloat.get_float(0x2000014))
        {
            func_16(0x8, 0x1);
            return;
        }
    }
    if (WorkModuleImpl.is_flag(0x2000000a))
    {
        if (WorkModuleImpl.check_strans(0x1e000092) == 0x1)
        {
            if (func_84() < WorkModuleImplFloat.get_float(0x2000001))
            {
                func_16(0x5, 0x1);
                return;
            }
        }
    }
    else if (func_84() < WorkModuleImplFloat.get_float(0x200000e))
    {
        func_16(0x5, 0x1);
        return;
    }
    if (func_641())
    {
        return;
    }
}

int func_718(float arg0, float arg1, float arg2)
{
    if (arg0 > arg1)
    {
        if (arg2 < arg1 || arg2 >= arg0)
        {
            return 0x1;
        }
    }
    else if (arg2 >= arg0 && arg2 < arg1)
    {
        return 0x1;
    }
    return 0;
}

void func_719()
{
    int var0;
    float var1;
    float var2;
    float var3;
    var0 = 0x13;
    if (MotionModuleImpl.is_exist(0x15) == 0x1)
    {
        var1 = MotionModuleImplFloat.get_frame();
        var0 = 0x14;
        var2 = WorkModuleImplFloat.get_float(0x3000114);
        var3 = WorkModuleImplFloat.get_float(0x3000115);
        if (func_718(var2, var3, var1) == 0x1)
        {
            var0 = 0x15;
        }
        else
        {
            var2 = WorkModuleImplFloat.get_float(0x3000116);
            var3 = WorkModuleImplFloat.get_float(0x3000117);
            if ((var2 != 0 || var3 != 0) && func_718(var2, var3, var1) == 0x1)
            {
                var0 = 0x15;
            }
        }
    }
    func_22(var0, 0, 1.0f);
    WorkModuleImpl.strans_group_on(0x1f000000);
    WorkModuleImpl.strans_group_on(0x1f000006);
    WorkModuleImpl.strans_on(0x1e000072);
    WorkModuleImpl.strans_on(0x1e000073);
    WorkModuleImpl.strans_on(0x1e000078);
    WorkModuleImpl.strans_on(0x1e00007f);
    WorkModuleImpl.strans_on(0x1e00005c);
    WorkModuleImpl.strans_on(0x1e000054);
    if (!StopModuleImpl(0x1))
    {
        func_721();
    }
    global16 = func_721;
}

void func_720()
{
    func_719();
    func_78(func_722);
}

void func_721()
{
    int var0;
    if (WorkModuleImpl.is_flag2(0x21000010) == 0)
    {
        var0 = MotionModuleImplFloat.get_frame() >= sys_45(0x63);
        if (WorkModuleImpl.get_int(0x11000002) > WorkModuleImpl.get_int(0x12000012) || var0)
        {
            if (var0 == 0)
            {
                WorkModuleImpl.strans_off(0x1e000063);
                WorkModuleImpl.strans_off(0x1e000064);
                WorkModuleImpl.strans_off(0x1e000065);
                WorkModuleImpl.strans_off(0x1e000094);
                WorkModuleImpl.strans_off(0x1e000062);
                WorkModuleImpl.strans_off(0x1e000076);
                WorkModuleImpl.strans_off(0x1e000074);
            }
            WorkModuleImpl.strans_off(0x1e000078);
            WorkModuleImpl.strans_off(0x1e00007f);
            WorkModuleImpl.strans_off(0x1e000054);
            WorkModuleImpl.on_flag2(0x21000010);
        }
    }
    WorkModuleImpl.inc_int(0x11000002);
}

void func_722()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (func_43())
    {
        return;
    }
    if (func_49())
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000072) == 0x1 && ItemModuleImpl(0) && ItemModuleImpl(0x22) && global18 == 0)
    {
        if ((global38 & 0x1) != 0)
        {
            func_16(0x8a, 0x1);
            return;
        }
        else if (sys_21(0x86, 0x1))
        {
            func_16(0x8a, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000073) == 0x1 && ItemModuleImpl(0x1) && ItemModuleImpl(0x4) == 0 && global18 == 0)
    {
        if ((global38 & 0x1) != 0)
        {
            func_16(0x8b, 0x1);
            return;
        }
        else if (sys_21(0x86, 0x1))
        {
            func_16(0x8b, 0);
            return;
        }
    }
    if (global24 & 0x20)
    {
        if (ItemModuleImpl(0x5, 0x8) == 0x1 || ItemModuleImpl(0x5, 0x2) == 0x1 && ItemModuleImpl(0x1a) <= 0)
        {
            func_16(0x8c, 0);
            return;
        }
    }
    func_45();
    if (WorkModuleImpl.check_strans(0x1e00007f) == 0x1 && ItemModuleImpl(0x5, 0x4) == 0x1 && (global38 & 0x1) != 0 && global18 == 0)
    {
        func_16(0x97, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000078) == 0x1 && ItemModuleImpl(0x5, 0x8) == 0x1 && (global38 & 0x1) != 0 && global18 == 0)
    {
        func_16(0x8d, 0x1);
        return;
    }
    if (global24 & 0x20)
    {
        if (WorkModuleImpl.check_strans(0x1e00005c))
        {
            func_16(0x31, 0x1);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000054) == 0x1 && global38 & 0x1)
    {
        func_16(0x27, 0x1);
        return;
    }
    if (func_51())
    {
        return;
    }
    if (WorkModuleImpl.is_flag2(0x2100000f) == 0x1 && func_88() <= WorkModuleImplFloat.get_float(0x2000014))
    {
        func_16(0x8, 0x1);
        return;
    }
    if (func_695())
    {
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0, 0);
        return;
    }
}

void func_723()
{
    func_703();
    func_78(func_724);
}

void func_724()
{
    float var0;
    if (func_71(global61))
    {
        return 0x1;
    }
    if (func_704())
    {
        return 0x1;
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                var0 = WorkModuleImplFloat.get_float(0x2000007);
                if (global48 * -WorkModuleImplFloat.get_float(0x1000006) >= var0)
                {
                    func_16(0x3, 0x1);
                    return 0x1;
                }
            }
        }
    }
}

void func_725()
{
    func_703();
    WorkModuleImpl.strans_on(0x1e000032);
    func_78(func_726);
}

void func_726()
{
    float var0;
    if (func_71(global61))
    {
        return 0x1;
    }
    if (func_704())
    {
        return 0x1;
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.check_strans(0x1e000032))
        {
            if (WorkModuleImpl.is_flag(0x2100000e))
            {
                if (WorkModuleImpl.is_flag(0x2100000d))
                {
                    var0 = WorkModuleImplFloat.get_float(0x2000007);
                    if (global48 * -WorkModuleImplFloat.get_float(0x1000006) >= var0)
                    {
                        func_16(0x3, 0x1);
                        return 0x1;
                    }
                }
            }
        }
    }
}

void func_727()
{
    func_728();
    func_78(func_730);
}

void func_728()
{
    int var0;
    func_22(0x16, 0, 1.0f);
    var0 = WorkModuleImpl.get_int(0x13000050);
    WorkModuleImpl.set_int(var0, 0x11000002);
    WorkModuleImpl.strans_on(0x1e00006f);
    WorkModuleImpl.set_int(0, 0x10000056);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000e2), 0x11000003);
    WorkModuleImpl.strans_on(0x1e000063);
    WorkModuleImpl.strans_on(0x1e000055);
    WorkModuleImpl.strans_on(0x1e000059);
    WorkModuleImpl.strans_on(0x1e00007d);
    WorkModuleImpl.strans_on(0x1e00007b);
    WorkModuleImpl.strans_on(0x1e000028);
    WorkModuleImpl.strans_on(0x1e000074);
    WorkModuleImpl.strans_on(0x1e000084);
    WorkModuleImpl.strans_on(0x1e000088);
    WorkModuleImpl.strans_on(0x1e00007b);
    WorkModuleImpl.strans_on(0x1e000066);
    WorkModuleImpl.strans_on(0x1e000067);
    WorkModuleImpl.strans_on(0x1e000068);
    WorkModuleImpl.strans_on(0x1e000069);
    WorkModuleImpl.on_flag2(0x2100000a);
    WorkModuleImpl.strans_group_on(0x1f000006);
    if (!StopModuleImpl(0x1))
    {
        func_729();
    }
    global16 = func_729;
}

void func_729()
{
    if (WorkModuleImpl.get_int(0x11000002) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) < 0)
        {
            PostureModuleImpl.reverse_lr();
        }
    }
    if (WorkModuleImpl.get_int(0x11000003) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000003);
        if (WorkModuleImpl.get_int(0x11000003) < 0)
        {
            WorkModuleImpl.strans_off(0x1e00006f);
        }
    }
    WorkModuleImpl.inc_int(0x10000056);
    func_696();
}

void func_730()
{
    float var0;
    float var1;
    float var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;
    float var8;
    float var9;
    if (func_71(global59))
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return 0x1;
    }
    if (func_60())
    {
        return 0x1;
    }
    var0 = PostureModuleImplFloat.get_lr();
    var1 = global48 * var0;
    var2 = ControlModuleImplFloat.get_stick_x();
    var3 = WorkModuleImpl.get_int(0x12000017);
    var4 = WorkModuleImpl.get_int(0x12000018);
    var5 = WorkModuleImpl.get_int(0x10000056);
    var6 = 0;
    if (var5 >= var3 && var5 <= var3 + var4)
    {
        if (func_88() > 0)
        {
            var6 = 0x1;
        }
    }
    if (var6 == 0x1)
    {
        if (WorkModuleImpl.check_strans(0x1e000063))
        {
            if (func_72(global25))
            {
                if (global24 & 0x2000)
                {
                    func_16(0x153, 0x1);
                    return 0x1;
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e00007b) && ItemModuleImpl(0x5, 0x4) == 0x1)
        {
            if (global24 & 0x10)
            {
                func_16(0x94, 0x1);
                return 0x1;
            }
        }
        if (WorkModuleImpl.check_strans(0x1e00007d) && ItemModuleImpl(0x5, 0x4) == 0x1)
        {
            if (global24 & 0x2)
            {
                func_16(0x93, 0x1);
                return 0x1;
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000074) && ItemModuleImpl(0x5, 0x8) == 0x1)
        {
            if (global24 & 0x2)
            {
                func_16(0x8c, 0);
                return 0x1;
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000088) && ItemModuleImpl(0x5, 0x2) == 0x1)
        {
            if (global24 & 0x10)
            {
                if (ItemModuleImpl(0x1a) <= 0)
                {
                    func_16(0x8c, 0);
                    return 0x1;
                }
                else
                {
                    func_16(0x98, 0x1);
                    return 0x1;
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000084) && ItemModuleImpl(0x5, 0x2) == 0x1)
        {
            if (global24 & 0x2)
            {
                if (ItemModuleImpl(0x1a) <= 0)
                {
                    func_16(0x8c, 0);
                    return 0x1;
                }
                else
                {
                    func_16(0x98, 0x1);
                    return 0x1;
                }
            }
        }
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.check_strans(0x1e00006f))
        {
            if (global24 & 0x20000000)
            {
                if (ItemModuleImpl(0x4) == 0)
                {
                    func_16(0x39, 0x1);
                    return 0x1;
                }
            }
        }
    }
    if (var6 == 0x1)
    {
        if (WorkModuleImpl.check_strans(0x1e000059))
        {
            if (global24 & 0x10)
            {
                var7 = ControlModuleImpl(0x16, 0, 0x4);
                var8 = PostureModuleImplFloat.get_lr();
                if (var7 == 0x1 && var8 != -1.0f || var7 == 0x2 && var8 != 1.0f)
                {
                    ControlModuleImpl(0x17, 0, 0x4);
                    ControlModuleImpl(0x18, 0, 0x4);
                }
                else
                {
                    func_16(0x2b, 0x1);
                    return 0x1;
                }
            }
        }
        if (WorkModuleImpl.check_strans(0x1e000055))
        {
            if (global24 & 0x2)
            {
                var7 = ControlModuleImpl(0x16, 0, 0x1);
                var8 = PostureModuleImplFloat.get_lr();
                if (var7 == 0x1 && var8 != -1.0f || var7 == 0x2 && var8 != 1.0f)
                {
                    ControlModuleImpl(0x17, 0, 0x1);
                    ControlModuleImpl(0x18, 0, 0x1);
                }
                else
                {
                    func_16(0x28, 0x1);
                    return 0x1;
                }
            }
        }
    }
    else
    {
        if (global24 & 0x10)
        {
            var7 = ControlModuleImpl(0x16, 0, 0x4);
            var8 = PostureModuleImplFloat.get_lr();
            if (var7 == 0x1 && var8 != -1.0f || var7 == 0x2 && var8 != 1.0f)
            {
                ControlModuleImpl(0x17, 0, 0x4);
                ControlModuleImpl(0x18, 0, 0x4);
            }
        }
        if (global24 & 0x2)
        {
            var7 = ControlModuleImpl(0x16, 0, 0x1);
            var8 = PostureModuleImplFloat.get_lr();
            if (var7 == 0x1 && var8 != -1.0f || var7 == 0x2 && var8 != 1.0f)
            {
                ControlModuleImpl(0x17, 0, 0x1);
                ControlModuleImpl(0x18, 0, 0x1);
            }
        }
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.check_strans(0x1e000028) == 0x1 && global24 & 0x4000000)
        {
            func_16(0x21, 0x1);
            return 0x1;
        }
        if (func_51())
        {
            return 0x1;
        }
        if (MotionModuleImpl.is_end() || WorkModuleImpl.is_flag(0x2100000f) == 0x1)
        {
            if (func_88() >= WorkModuleImplFloat.get_float(0x200000e))
            {
                func_16(0x4, 0x1);
                return 0x1;
            }
        }
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            if (WorkModuleImpl.is_flag(0x2100000d) == 0)
            {
                if (func_84() < WorkModuleImplFloat.get_float(0x200000e))
                {
                    func_16(0x9, 0x1);
                    return 0x1;
                }
            }
        }
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            if (WorkModuleImpl.is_flag(0x2100000d) == 0)
            {
                if (func_89() >= var9)
                {
                    func_16(0, 0x1);
                    return 0x1;
                }
            }
        }
    }
}

void func_731()
{
    func_22(0x17, 0, 1.0f);
    func_78(func_732);
}

void func_732()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00002c))
    {
        if (ControlModuleImpl(0x2712, 0x2))
        {
            func_16(0xa, 0x1);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00002b))
    {
        if (global32 >= WorkModuleImplFloat.get_float(0x2000048))
        {
            if (ControlModuleImpl(0x271c))
            {
                func_16(0xa, 0x1);
                return 0x1;
            }
        }
    }
    if (func_694())
    {
        return 0x1;
    }
    if (global18 == 0)
    {
        if (MotionModuleImpl.is_end())
        {
            func_16(0, 0);
            return 0x1;
        }
    }
}

void func_733()
{
    
}

void func_734()
{
    
}

void func_735()
{
    
}

void func_736()
{
    
}

void func_737()
{
    
}

void func_738()
{
    func_780();
}

void func_739()
{
    func_780();
}

void func_740()
{
    
}

void func_741()
{
    
}

void func_742()
{
    if (WorkModuleImpl.is_flag2(0x2100000d))
    {
        WorkModuleImpl.strans_on(0x1e00000b);
        WorkModuleImpl.off_flag2(0x2100000d);
    }
    else
    {
        WorkModuleImpl.strans_off(0x1e00000b);
    }
}

void func_743()
{
    CameraModuleImpl(0);
}

void func_744()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    var0++;
    WorkModuleImpl.set_int(var0, 0x11000002);
    if (WorkModuleImpl.is_flag2(0x2100000d) == 0)
    {
        if ((float)var0 > WorkModuleImplFloat.get_float(0x2000009))
        {
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
    if (WorkModuleImpl.is_flag2(0x2100000e) == 0)
    {
        if ((float)var0 > WorkModuleImplFloat.get_float(0x200000a))
        {
            WorkModuleImpl.on_flag2(0x2100000e);
        }
    }
    if (WorkModuleImpl.is_flag2(0x21000010) == 0)
    {
        WorkModuleImpl.on_flag2(0x21000010);
    }
}

void func_745()
{
    int var0;
    float var1;
    float var2;
    float var3;
    var0 = global6;
    if (var0 == 0x4)
    {
        
    }
    else if (var0 == 0x27)
    {
        
    }
    else if (var0 == 0xa)
    {
        
    }
    else if (var0 == 0x2b || var0 == 0x153)
    {
        var1 = KineticModuleImplFloat.get_speed_y(0x2);
        KineticModuleImpl.set_speed(0x2, 0, var1);
    }
    else if (global18 == 0)
    {
        var2 = WorkModuleImplFloat.get_float(0x200000d);
        var3 = GroundModuleImplFloat(0);
        if (var3 < 1.0f)
        {
            var2 += (1.0f - var2) * (1.0f - var3);
        }
        KineticModuleImpl.mul_speed(0x2, var2, 1.0f, 1.0f);
    }
    CameraModuleImpl(0x1);
}

void func_746()
{
    int var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    sys_21(0x73);
    var0 = WorkModuleImpl.get_int(0x130000cb);
    var1 = WorkModuleImplFloat.get_float(0x30000cd);
    var2 = WorkModuleImplFloat.get_float(0x30000ce);
    var3 = WorkModuleImplFloat.get_float(0x30000cf);
    var4 = 1.0f;
    EffectModuleImpl(0x2717, 0x10000ea, var0, var1, var2, var3, 0, 0, 0, var4, 0);
    EffectModuleImpl(0x1f, 0x32, 0);
    func_747(0);
    var5 = WorkModuleImplFloat.get_float(0x3000103);
    var6 = WorkModuleImplFloat.get_float(0x3000104);
    var7 = WorkModuleImplFloat.get_float(0x3000105);
    AttackModuleImpl(0x2720, 0, 0, var5, var6, var7);
    WorkModuleImpl.on_flag2(0x2100000e);
}

void func_747(int arg0)
{
    int var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    var1 = sys_21(0x77, 0x36);
    var2 = WorkModuleImplFloat.get_float(0x90000a8 + var1 - 0x1);
    var3 = WorkModuleImplFloat.get_float(0x90000ab + var1 - 0x1);
    var4 = (float)WorkModuleImpl.get_int(0x190000ae + var1 - 0x1) + 0;
    var5 = (float)arg0 / var4;
    if (var5 > 1.0f)
    {
        var5 = 1.0f;
    }
    var6 = var2 * (1.0f - var5) + var3 * var5;
    AttackModuleImpl(0x271a, 0, var6);
}

void func_748()
{
    EffectModuleImpl(0x9, 0x10000ea, 0, 0x1);
    WorkModuleImpl.on_flag2(0x2100000e);
    EffectModuleImpl(0x20, 0x32);
}

void func_749()
{
    float var0;
    float var1;
    float var2;
    float var3;
    var0 = WorkModuleImplFloat.get_float(0x1000007);
    var1 = WorkModuleImplFloat.get_float(0x1000008);
    if (WorkModuleImpl.is_flag(0x2000000a))
    {
        var2 = WorkModuleImplFloat.get_float(0x200021d);
        var1 *= var2;
        if (var1 < var2)
        {
            var1 = var2;
        }
    }
    else
    {
        var1 *= func_13(var0);
    }
    var3 = WorkModuleImplFloat.get_float(0x2000019);
    if (var1 > var3)
    {
        var1 = var3;
    }
    MotionModuleImpl.set_motion_rate(var1);
}

void func_750()
{
    float var0;
    int var1;
    float var2;
    float var3;
    if (sys_21(0x6e, 0x36) == 0x1)
    {
        func_746();
    }
    var0 = WorkModuleImplFloat.get_float(0x300000b);
    var1 = WorkModuleImpl.is_flag(0x2000000a);
    if (var1)
    {
        KineticModuleImpl.change_kinetic_type(0x46);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xe);
    }
    func_762(var0, 0x12, 0x1000007, 1.0f, 0x1000008, 0);
    if (var1)
    {
        var2 = WorkModuleImplFloat.get_float(0x1000007);
        if (func_13(var2) < 1.0f)
        {
            var3 = WorkModuleImplFloat.get_float(0x200021d);
            WorkModuleImpl.set_float(PostureModuleImplFloat.get_lr() * var3 + 0, 0x1000007);
        }
    }
    func_749();
    CameraModuleImpl(0);
}

void func_751()
{
    float var0;
    float var1;
    var0 = WorkModuleImplFloat.get_float(0x300000b);
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        func_762(var0, 0x12, 0x1000007, 1.0f, 0x1000008, 0);
        WorkModuleImpl.off_flag2(0x2100000d);
    }
    var1 = WorkModuleImplFloat.get_float(0x1000007);
    func_774(var1, var0, WorkModuleImplFloat.get_float(0x3000009), WorkModuleImplFloat.get_float(0x300000a), WorkModuleImplFloat.get_float(0x200000f), 0x1000007, 1.0f, 0);
    func_749();
    if (WorkModuleImplFloat.get_float(0x1000006) > 0)
    {
        WorkModuleImpl.sub_float(1.0f, 0x1000006);
    }
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        WorkModuleImpl.inc_int(0x11000002);
        func_747(WorkModuleImpl.get_int(0x11000002));
    }
}

void func_752()
{
    CameraModuleImpl(0x1);
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        func_748();
    }
}

void func_753()
{
    WorkModuleImpl.set_float(WorkModuleImpl.get_int(0x1300004d), 0x1000006);
    WorkModuleImpl.on_flag(0x2100000f);
    CameraModuleImpl(0);
}

void func_754()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    int var6;
    if (WorkModuleImpl.is_flag(0x2100000e) == 0)
    {
        var0 = WorkModuleImplFloat.get_float(0x300000b) * WorkModuleImplFloat.get_float(0x2000011);
        var1 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        var1 = func_13(var1);
        var2 = MotionModuleImplFloat.get_frame();
        var3 = sys_45(0x63);
        if (var1 > var0 && var3 > var2)
        {
            var5 = WorkModuleImplFloat.get_float(0x3000007) * WorkModuleImplFloat.get_float(0x2000010) * GroundModuleImplFloat(0);
            var6 = (int)((var1 - var0) / var5);
            if (var6 == 0)
            {
                var4 = var3 - var2;
            }
            else
            {
                var4 = (var3 - var2) / (float)var6;
            }
        }
        else
        {
            var4 = 1.0f;
            WorkModuleImpl.on_flag(0x2100000e);
        }
        MotionModuleImpl.set_motion_rate(var4);
    }
    if (WorkModuleImplFloat.get_float(0x1000006) > 0)
    {
        WorkModuleImpl.sub_float(1.0f, 0x1000006);
    }
}

void func_755()
{
    CameraModuleImpl(0x1);
}

void func_756()
{
    float var0;
    float var1;
    float var2;
    if (StatusModuleImpl(0) == 0x7)
    {
        var0 = 0;
        WorkModuleImpl.set_float(var0, 0x1000007);
        WorkModuleImpl.on_flag(0x2100000d);
    }
    else
    {
        var1 = WorkModuleImplFloat.get_float(0x300004f);
        WorkModuleImpl.set_float(var1, 0x1000007);
        WorkModuleImpl.off_flag(0x2100000d);
    }
    WorkModuleImpl.off_flag(0x2100000f);
    var2 = PostureModuleImplFloat.get_lr();
    WorkModuleImpl.set_float(var2, 0x1000006);
    PostureModuleImpl.reverse_lr();
    CameraModuleImpl(0);
}

void func_757()
{
    float var0;
    float var1;
    float var2;
    int var3;
    float var4;
    float var5;
    float var6;
    float var7;
    WorkModuleImpl.off_flag(0x2100000e);
    var0 = 0;
    if (WorkModuleImplFloat.get_float(0x1000007) > var0)
    {
        var1 = 1.0f;
        WorkModuleImpl.sub_float(var1, 0x1000007);
    }
    else if (WorkModuleImpl.is_flag(0x2100000f) == 0)
    {
        WorkModuleImpl.on_flag(0x2100000f);
        WorkModuleImpl.on_flag(0x2100000e);
    }
    var2 = WorkModuleImplFloat.get_float(0x2000007);
    var3 = WorkModuleImpl.get_int(0x12000008);
    var4 = ControlModuleImplFloat.get_stick_x();
    var5 = -WorkModuleImplFloat.get_float(0x1000006);
    var6 = var4 * var5;
    var7 = (float)ControlModuleImpl(0x2);
    if (var6 > var2 && var7 < (float)var3)
    {
        WorkModuleImpl.on_flag(0x2100000d);
    }
}

void func_758()
{
    CameraModuleImpl(0x1);
}

void func_759()
{
    float var0;
    float var1;
    var0 = PostureModuleImplFloat.get_lr();
    WorkModuleImpl.set_float(var0, 0x1000007);
    WorkModuleImpl.off_flag(0x2100000e);
    var1 = WorkModuleImplFloat.get_float(0x2000016);
    WorkModuleImpl.set_float(var1, 0x1000006);
    WorkModuleImpl.off_flag(0x2100000d);
    if (WorkModuleImpl.is_flag(0x20000016))
    {
        SoundModuleImpl(0x2710, 0x350062);
    }
    CameraModuleImpl(0);
}

void func_760()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        if (WorkModuleImpl.is_flag(0x2100000e) == 0)
        {
            var0 = 0;
            MotionModuleImpl.set_motion_rate(var0);
            WorkModuleImpl.on_flag(0x2100000e);
        }
        else
        {
            var1 = 0;
            var2 = WorkModuleImplFloat.get_float(0x1000007);
            if (var2 * KineticModuleImplFloat.get_sum_speed_x(0x1) <= var1)
            {
                var0 = 1.0f;
                MotionModuleImpl.set_motion_rate(var0);
                WorkModuleImpl.off_flag(0x2100000d);
            }
            else if (WorkModuleImpl.get_int(0x11000002) < 0)
            {
                var3 = 1.0f;
                var4 = GroundModuleImplFloat(0);
                if (var4 < var3 && GroundModuleImpl(0x10, var2))
                {
                    var0 = 1.0f;
                    MotionModuleImpl.set_motion_rate(var0);
                    WorkModuleImpl.off_flag(0x2100000d);
                }
            }
        }
    }
}

void func_761()
{
    int var0;
    var0 = global6;
    if (var0 == 0x39 || var0 == 0x21)
    {
        PostureModuleImpl.set_lr(WorkModuleImplFloat.get_float(0x1000007));
    }
    CameraModuleImpl(0x1);
}

void func_762(float arg0, int arg1, int arg2, float arg3, int arg4, int arg5)
{
    float var6;
    float var7;
    float var8;
    float var9;
    float var10;
    int var11;
    float var12;
    float var13;
    var6 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var7 = MotionModuleImplFloat.get_transn_translate_end_frame(arg1);
    var8 = 0;
    var9 = arg3 * arg0;
    var10 = WorkModuleImplFloat.get_float(0x2000289);
    if (var9 > var10)
    {
        var9 = var10;
    }
    if (arg5)
    {
        if (var6 * PostureModuleImplFloat.get_lr() < 0)
        {
            var8 = var6 / arg0;
        }
    }
    else if (var6 * PostureModuleImplFloat.get_lr() > 0)
    {
        var8 = var6 / arg0;
    }
    WorkModuleImpl.set_float(var8, arg2);
    var11 = MotionModuleImpl.get_end_frame(arg1);
    var12 = var7 / (float)var11;
    if (var12 == 0)
    {
        var12 = 9.999999747378752e-05f;
    }
    var13 = var9 / var12;
    WorkModuleImpl.set_float(var13, arg4);
}

void func_763(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
    float var6;
    int var7;
    float var8;
    float var9;
    int var10;
    int var11;
    var6 = func_13(WorkModuleImplFloat.get_float(arg3));
    var7 = func_770(var6, arg0, arg1, arg2);
    var8 = func_772(arg0, arg1, arg2, var7, var6, arg4, arg5);
    var9 = 0;
    var10 = MotionModuleImpl.get_end_frame(var7);
    func_22(var7, var9, var8);
    var11 = MotionModuleImpl(0xe);
    MotionModuleImpl(0x5, func_772(arg0, arg1, arg2, var7, var6, 1.0f, 0x1000007));
}

void func_764(int arg0, int arg1, int arg2, int arg3)
{
    float var4;
    float var5;
    int var6;
    var4 = 1.0f;
    var5 = WorkModuleImplFloat.get_float(0x3000003);
    arg0 = 0xc;
    var6 = 0;
    func_762(var5, arg0, 0x1000006, var4, 0x1000007, var6);
    func_763(arg1, arg2, arg3, 0x1000006, var4, 0x1000007);
    CameraModuleImpl(0);
}

void func_765()
{
    func_764(0xc, 0xc, 0xb, 0xa);
}

void func_766(int arg0, int arg1, int arg2, int arg3)
{
    float var4;
    float var5;
    float var6;
    float var7;
    float var8;
    float var9;
    var4 = 1.0f;
    var5 = WorkModuleImplFloat.get_float(0x3000003);
    var6 = WorkModuleImplFloat.get_float(0x3000001);
    var7 = WorkModuleImplFloat.get_float(0x3000002);
    var8 = WorkModuleImplFloat.get_float(0x2000002);
    var9 = WorkModuleImplFloat.get_float(0x1000006);
    func_774(var9, var5, var6, var7, var8, 0x1000006, var4, 0x1);
    func_773(arg0, arg1, arg2, 0x1000006, var4, 0x1000007, arg3);
    if (StopModuleImpl(0x1) == 0 && sys_49(0x2) == 0)
    {
        func_775();
    }
    func_776();
}

void func_767()
{
    func_766(0xc, 0xb, 0xa);
}

void func_768()
{
    CameraModuleImpl(0x1);
}

void func_769()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    WorkModuleImpl.set_float(-var0, 0x1000006);
}

int func_770(float arg0, int arg1, int arg2, int arg3)
{
    float var4;
    int var5;
    var4 = 1.0f;
    var5 = 0;
    if (arg0 > WorkModuleImplFloat.get_float(0x3000006) * var4)
    {
        var5 = arg1;
    }
    else if (arg0 >= WorkModuleImplFloat.get_float(0x3000005) * var4)
    {
        var5 = arg2;
    }
    else
    {
        var5 = arg3;
    }
    return var5;
}

float func_771(float arg0, float arg1)
{
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    var2 = WorkModuleImplFloat.get_float(0x3000004);
    var3 = arg0;
    if (var2 > 0)
    {
        var4 = 0.014999999664723873f * var2;
        var5 = 0.20000000298023224f * var2;
        var6 = arg0 * 2.0f;
        var3 = Math(0xb, var4, var5, var6) * 0.5f;
        var3 *= 0.5f / arg1;
    }
    return var3;
}

float func_772(int arg0, int arg1, int arg2, int arg3, float arg4, float arg5, int arg6)
{
    float var7;
    float var8;
    float var9;
    float var10;
    var7 = 0;
    var8 = WorkModuleImplFloat.get_float(0x3000005);
    if (arg3 == arg2)
    {
        var9 = func_771(arg4, var8);
        var7 = var9 / (var8 * 0.5f * arg5);
    }
    else if (arg3 == arg1)
    {
        var7 = arg4 / ((var8 * arg5 + WorkModuleImplFloat.get_float(0x3000006) * arg5) * 0.5f);
    }
    else
    {
        var7 = arg4 / arg5;
    }
    var7 *= WorkModuleImplFloat.get_float(arg6);
    var7 *= WorkModuleImplFloat.get_float(0x18);
    var10 = WorkModuleImplFloat.get_float(0x2000004);
    if (var7 > var10)
    {
        var7 = var10;
    }
    return var7;
}

void func_773(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
{
    float var7;
    int var8;
    int var9;
    float var10;
    int var11;
    float var12;
    int var13;
    var7 = func_13(WorkModuleImplFloat.get_float(arg3));
    if (MotionModuleImpl(0x6))
    {
        var8 = MotionModuleImpl.get_motion();
        var9 = MotionModuleImpl(0xe);
        var10 = func_772(arg0, arg1, arg2, var8, var7, arg4, arg5);
        MotionModuleImpl.set_motion_rate(var10);
        MotionModuleImpl(0x5, func_772(arg0, arg1, arg2, var9, var7, arg4, arg5));
    }
    else
    {
        var8 = func_770(var7, arg0, arg1, arg2);
        var10 = func_772(arg0, arg1, arg2, var8, var7, arg4, arg5);
        var11 = MotionModuleImpl.get_motion();
        if (var8 != var11)
        {
            if (arg6 != 0)
            {
                if ((*arg6)(var8, var11) == 0x1)
                {
                    var12 = MotionModuleImplFloat.get_frame();
                    func_22(var8, var12, var10);
                    return;
                }
            }
            var13 = MotionModuleImpl.get_end_frame(var8);
            var12 = MotionModuleImplFloat.get_frame() / (float)MotionModuleImpl.get_end_frame() * (float)var13;
            func_22(var8, var12, var10);
            var9 = MotionModuleImpl(0xe);
            MotionModuleImpl(0x5, func_772(arg0, arg1, arg2, var9, var7, 1.0f, 0x1000007));
        }
        else
        {
            MotionModuleImpl.set_motion_rate(var10);
        }
    }
}

void func_774(float arg0, float arg1, float arg2, float arg3, float arg4, int arg5, float arg6, int arg7)
{
    float var8;
    float var9;
    float var10;
    float var11;
    float var12;
    float var13;
    float var14;
    float var15;
    float var16;
    float var17;
    var8 = ControlModuleImplFloat.get_stick_x();
    var9 = arg2 / arg1;
    var10 = arg3 / arg1;
    var11 = var8 * var9 * arg6;
    if (var8 > 0)
    {
        var11 += var10 * arg6;
    }
    else
    {
        var11 += -var10 * arg6;
    }
    var12 = var8 * arg6;
    var13 = WorkModuleImplFloat.get_float(0x2000289);
    if (var12 > var13)
    {
        var12 = var13;
    }
    if (arg7 == 0x1 && WorkModuleImpl.is_flag(0x2000004c))
    {
        var14 = WorkModuleImplFloat.get_float(0x3000005) / arg6 - 0.0010000000474974513f;
        if (var12 > var14)
        {
            var12 = var14;
        }
        else if (var12 < -var14)
        {
            var12 = -var14;
        }
    }
    if (var12 > 9.999999747378752e-06f || var12 < -9.999999747378752e-06f)
    {
        var15 = arg0 / var12;
        if (var15 > 0 && var15 < 1.0f)
        {
            var15 = 1.0f - var15;
            var11 *= var15 * arg4;
        }
    }
    else
    {
        var11 = 0;
    }
    var16 = WorkModuleImplFloat.get_float(0x3000007) / arg1;
    if (var12 == 0)
    {
        if (func_13(var16) > func_13(arg0))
        {
            var11 = -arg0;
        }
        else if (arg0 > 0)
        {
            var11 = -var16;
        }
        else
        {
            var11 = var16;
        }
    }
    else if (var11 > 0)
    {
        if (arg0 + var11 > var12)
        {
            var11 = -var16;
            if (arg0 + var11 < var12)
            {
                var11 = var12 - arg0;
            }
        }
    }
    else if (arg0 + var11 < var12)
    {
        var11 = var16;
        if (arg0 + var11 > var12)
        {
            var11 = var12 - arg0;
        }
    }
    var17 = arg0 + var11;
    WorkModuleImpl.set_float(var17, arg5);
}

void func_775()
{
    
}

void func_776()
{
    
}

void func_777()
{
    CameraModuleImpl(0);
}

void func_778()
{
    float var0;
    float var1;
    var0 = 0.0010000000474974513f;
    var1 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    if (!WorkModuleImpl.is_flag(0x2100000e))
    {
        if (func_13(var1) > var0)
        {
            MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x2000005));
            WorkModuleImpl.on_flag(0x2100000e);
        }
        else
        {
            MotionModuleImpl.set_motion_rate(1.0f);
        }
    }
    else if (func_13(var1) <= var0)
    {
        MotionModuleImpl.set_motion_rate(1.0f);
    }
}

void func_779()
{
    CameraModuleImpl(0x1);
}

void func_780()
{
    int var0;
    var0 = global6;
    if (var0 == 0x20 || var0 == 0x21)
    {
        PostureModuleImpl.reverse_lr();
        PostureModuleImpl.update_rot_y();
    }
    else if (WorkModuleImpl.is_flag(0x2100000f) == 0)
    {
        if (var0 == 0xa)
        {
            PostureModuleImpl.reverse_lr();
            PostureModuleImpl.update_rot_y();
        }
    }
}

void func_781()
{
    float var0;
    int var1;
    if (!global3 && global4 != 0x4b)
    {
        var0 = (float)WorkModuleImpl.get_int(0x1000003e);
        var1 = (int)(var0 * WorkModuleImplFloat.get_float(0x2000115));
        if (var1 > WorkModuleImpl.get_int(0x12000116))
        {
            var1 = WorkModuleImpl.get_int(0x12000116);
        }
        if (var1 > 0)
        {
            WorkModuleImpl.set_int(var1, 0x1100000c);
            WorkModuleImpl.set_float(1.0f + 0, 0x100000c);
            WorkModuleImpl.on_flag2(0x21000015);
            KineticModuleImpl.disable_energy(0x1);
            KineticModuleImpl.disable_energy(0x4);
            StatusModuleImpl(0x2712, 0x1);
            GroundModuleImpl(0x2719, 0xff);
        }
    }
}

void func_782()
{
    if (WorkModuleImpl.is_flag(0x21000015))
    {
        KineticModuleImpl.enable_energy(0x1);
        KineticModuleImpl.enable_energy(0x4);
        StatusModuleImpl(0x2712, 0);
        MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x100000c));
        GroundModuleImpl(0x271a);
        WorkModuleImpl.off_flag2(0x21000015);
    }
}

int func_783()
{
    int var0;
    var0 = 0x4;
    if (WorkModuleImpl.get_int(0x1000006b) != 0)
    {
        var0 |= 0x3e0;
    }
    StatusModuleImpl(0x5, 0, 0x20, 0x1, 0, 0x1, 0, 0, 0x80, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, var0, 0, 0);
    return 0;
}

void func_784()
{
    WorkModuleImpl.strans_on(0x1e000000);
    WorkModuleImpl.strans_on(0x1e000002);
    WorkModuleImpl.strans_on(0x1e000005);
    if (!StopModuleImpl(0x1))
    {
        func_785();
    }
    global16 = func_785;
    func_78(func_786);
}

void func_785()
{
    if (WorkModuleImpl.is_flag(0x2100000e) == 0x1 && WorkModuleImpl.is_flag(0x2100000d) == 0)
    {
        CancelModuleImpl.enable_cancel();
        WorkModuleImpl.on_flag2(0x2100000d);
    }
}

void func_786()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (global18 == 0x2)
    {
        if (GroundModuleImpl(0x2727))
        {
            func_16(0x7d, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000002) == 0x1 && WorkModuleImpl.is_flag(0x2100000e) == 0x1 && MotionModuleImpl.is_end() == 0x1 && global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000000) == 0x1)
    {
        if (WorkModuleImpl.is_flag(0x2100000e) == 0x1)
        {
            if (MotionModuleImpl.is_end() == 0x1)
            {
                if (global18 == 0)
                {
                    func_16(0, 0);
                    return;
                }
            }
        }
    }
    if (GroundModuleImpl(0x2722, 0x2) == 0x1 && -KineticModuleImplFloat.get_damage_speed_x(0x4) > WorkModuleImplFloat.get_float(0x200010b))
    {
        func_16(0x49, 0);
        return 0x1;
    }
    if (GroundModuleImpl(0x2722, 0x4) == 0x1 && KineticModuleImplFloat.get_damage_speed_x(0x4) > WorkModuleImplFloat.get_float(0x200010b))
    {
        func_16(0x49, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000005) == 0x1 && global18 == 0x2)
    {
        func_16(0x4c, 0);
        return;
    }
}

void func_787()
{
    
}

int func_788()
{
    int var0;
    var0 = 0x4;
    if (WorkModuleImpl.get_int(0x1000006b) != 0)
    {
        var0 |= 0x3e0;
    }
    StatusModuleImpl(0x5, 0x2, 0x21, 0x5, 0, 0x1, 0, 0, 0x80, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, var0, 0, 0);
    return 0;
}

void func_789()
{
    WorkModuleImpl.strans_on(0x1e000002);
    WorkModuleImpl.strans_on(0x1e00000d);
    WorkModuleImpl.strans_on(0x1e00001b);
    if (!StopModuleImpl(0x1))
    {
        func_790();
    }
    global16 = func_790;
    WorkModuleImpl.set_float(PostureModuleImplFloat.get_pos_y() + 0, 0x100000b);
    func_78(func_791);
}

void func_790()
{
    int var0;
    if (StopModuleImpl(0) == 0)
    {
        if (WorkModuleImpl.is_flag(0x2100000e) == 0x1 && WorkModuleImpl.is_flag(0x2000000b) == 0 && WorkModuleImpl.is_flag(0x20000032) == 0)
        {
            if (WorkModuleImpl.is_flag(0x2100000d) == 0)
            {
                CancelModuleImpl.enable_cancel();
                KineticModuleImpl.change_kinetic_type(0);
                WorkModuleImpl.strans_group_on(0x1f00000a);
                sys_21(0x17, 0x4);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
            if (KineticModuleImplFloat.get_damage_speed_y(0x4) <= 0)
            {
                WorkModuleImpl.strans_group_on(0x1f00000f);
                WorkModuleImpl.strans_group_on(0x1f000010);
                WorkModuleImpl.strans_group_on(0x1f000011);
            }
            func_550();
        }
        var0 = WorkModuleImpl.get_int(0x1100000e);
        if (var0 > 0)
        {
            if (StatusModuleImpl(0x6) == 0)
            {
                var0--;
                if (var0 <= 0)
                {
                    KineticModuleImpl.set_accel(0x1, -WorkModuleImplFloat.get_float(0x3000018));
                    KineticModuleImpl.set_max_speed(0x1, WorkModuleImplFloat.get_float(0x3000019));
                }
                WorkModuleImpl.set_int(var0, 0x1100000e);
            }
        }
    }
}

void func_791()
{
    float var0;
    float var1;
    float var2;
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (global18 == 0)
        {
            var0 = WorkModuleImplFloat.get_float(0x100000b) - PostureModuleImplFloat.get_pos_y();
            if (var0 < 2.0f)
            {
                func_16(0x1a, 0);
                return;
            }
        }
        if (func_41() != 0)
        {
            return;
        }
    }
    if (func_58())
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000002) == 0x1 && WorkModuleImpl.is_flag(0x2100000e) == 0x1 && MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00000d) == 0x1 && global18 == 0 && KineticModuleImplFloat.get_speed(0x4) >= WorkModuleImplFloat.get_float(0x2000058) && !(StopModuleImpl(0) == 0x1 || WorkModuleImpl.get_int(0x11000003) > 0))
    {
        func_16(0x4d, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00001b) == 0x1 && global18 == 0 && !(StopModuleImpl(0) == 0x1 || WorkModuleImpl.get_int(0x11000003) > 0))
    {
        func_16(0x16, 0);
        return;
    }
    if (StatusModuleImpl(0x6) == 0)
    {
        var1 = PostureModuleImplFloat.get_pos_y();
        var2 = PostureModuleImplFloat(0x9);
        if (var1 <= var2)
        {
            if (WorkModuleImpl.is_flag(0x21000014) == 0)
            {
                WorkModuleImpl.set_float(var2 + 0, 0x100000b);
                WorkModuleImpl.on_flag2(0x21000014);
            }
        }
        else
        {
            WorkModuleImpl.off_flag2(0x21000014);
        }
    }
}

void func_792()
{
    
}

int func_793()
{
    int var0;
    var0 = 0x4;
    if (WorkModuleImpl.get_int(0x1000006b) != 0)
    {
        var0 |= 0x3e0;
    }
    StatusModuleImpl(0x5, 0x2, 0x22, 0x5, 0, 0x1, 0x11000000, 0, 0x80, 0);
    if (WorkModuleImpl.is_flag(0x2100001c))
    {
        var0 |= 0x8;
        WorkModuleImpl.off_flag2(0x2100001c);
    }
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, var0, 0, 0);
    return 0;
}

int func_794()
{
    int var0;
    var0 = 0x4;
    if (WorkModuleImpl.get_int(0x1000006b) != 0)
    {
        var0 |= 0x3e0;
    }
    StatusModuleImpl(0x5, 0x2, 0x22, 0x5, 0, 0x1, 0, 0, 0x80, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, var0, 0, 0);
    return 0;
}

int func_795()
{
    StatusModuleImpl(0x5, 0x2, 0x5a, 0x5, 0x4, 0x1, 0x2, 0, 0, 0x100);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_796()
{
    float var0;
    float var1;
    float var2;
    float var3;
    if (sys_21(0x57) == 0x1 && !WorkModuleImpl.is_flag(0x20000076))
    {
        EffectModuleImpl(0x2723, 0x100009f, 0x1, 0x1);
        EffectModuleImpl(0x2710, 0x100009f, WorkModuleImpl.get_int(0x1300006a), 0, 0, 0, 0, 90.0f * PostureModuleImplFloat.get_lr(), 0, 1.0f, 0, 0, 0, 0, 0, 0, 0);
    }
    var0 = sys_40(0xe);
    if (var0 > 0)
    {
        var1 = ModelModuleImplFloat(0, 0x3);
        var2 = ModelModuleImplFloat(0x1, 0x3);
        var3 = ModelModuleImplFloat(0x2, 0x3);
        EffectModuleImpl(0x2732, 0x2, 0, var0, var0, var1, var2, var3, 0, 0x1);
    }
}

void func_797()
{
    WorkModuleImpl.strans_on(0x1e000005);
    WorkModuleImpl.strans_on(0x1e00000d);
    WorkModuleImpl.strans_on(0x1e000006);
    WorkModuleImpl.strans_on(0x1e000007);
    WorkModuleImpl.strans_on(0x1e000008);
    WorkModuleImpl.strans_on(0x1e000009);
    if (WorkModuleImpl.is_flag(0x21000018) == 0)
    {
        WorkModuleImpl.strans_on(0x1e000017);
        WorkModuleImpl.strans_on(0x1e000016);
        WorkModuleImpl.strans_on(0x1e000015);
        WorkModuleImpl.strans_on(0x1e000018);
        WorkModuleImpl.strans_on(0x1e000014);
        WorkModuleImpl.strans_on(0x1e000013);
    }
    else
    {
        WorkModuleImpl.strans_off(0x1e000017);
        WorkModuleImpl.strans_off(0x1e000016);
        WorkModuleImpl.strans_off(0x1e000015);
        WorkModuleImpl.strans_off(0x1e000018);
        WorkModuleImpl.strans_off(0x1e000014);
        WorkModuleImpl.strans_off(0x1e000013);
    }
}

void func_798()
{
    func_797();
    func_800();
    func_796();
    func_78(func_799);
}

int func_799()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_41() != 0)
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000005))
    {
        if (MotionModuleImpl.is_end())
        {
            if (WorkModuleImpl.is_flag(0x2100000e))
            {
                func_16(0x4c, 0);
                return 0x1;
            }
        }
    }
    if (func_805())
    {
        return 0x1;
    }
    if (func_806() == 0x1)
    {
        return 0x1;
    }
    if (func_807() == 0x1)
    {
        return 0x1;
    }
    if (func_808() == 0x1)
    {
        return 0x1;
    }
    return 0;
}

void func_800()
{
    if (DamageModuleImplFloat(0x7) < WorkModuleImplFloat.get_float(0x200014b))
    {
        WorkModuleImpl.set_int(0x1, 0x11000005);
    }
    else if (DamageModuleImplFloat(0x7) < WorkModuleImplFloat.get_float(0x200014c))
    {
        WorkModuleImpl.set_int(0x2, 0x11000005);
    }
    else
    {
        WorkModuleImpl.set_int(0x3, 0x11000005);
    }
}

int func_801()
{
    if (sys_21(0x86, 0))
    {
        return 0x1;
    }
    return ControlModuleImpl(0x2722, 0x3) < WorkModuleImpl.get_int(0x12000081) && ControlModuleImpl(0x2723, 0x3) >= WorkModuleImpl.get_int(0x12000080);
}

int func_802()
{
    if (WorkModuleImpl.is_flag(0x2000005a))
    {
        return 0;
    }
    if (WorkModuleImpl.check_strans(0x1e000017) == 0x1 && GroundModuleImpl(0x2722, 0x6) == 0x1 && func_801() == 0x1 && ControlModuleImpl(0x2722, 0x2) < WorkModuleImpl.get_int(0x12000081) && func_95() == 0 && global18 == 0x2)
    {
        func_16(0x67, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000016) == 0x1 && GroundModuleImpl(0x2722, 0x6) == 0x1 && func_801() == 0x1 && global32 >= WorkModuleImplFloat.get_float(0x200001f) && func_95() == 0 && global18 == 0x2)
    {
        func_16(0x67, 0x1);
        return 0x1;
    }
    return 0;
}

int func_803()
{
    if (WorkModuleImpl.is_flag(0x2000005a))
    {
        return 0;
    }
    if (WorkModuleImpl.check_strans(0x1e000015) == 0x1 && GroundModuleImpl(0x2722, 0x6) == 0x1 && func_801() == 0x1 && func_95() == 0 && global18 == 0x2)
    {
        func_16(0x66, 0x1);
        return 0x1;
    }
    return 0;
}

int func_804()
{
    if (WorkModuleImpl.is_flag(0x2000005a))
    {
        return 0;
    }
    if (WorkModuleImpl.check_strans(0x1e000018) == 0x1 && GroundModuleImpl(0x2722, 0x1) == 0x1 && func_801() == 0x1 && func_95() == 0 && global18 == 0x2)
    {
        func_16(0x68, 0x1);
        return 0x1;
    }
    return 0;
}

int func_805()
{
    if (func_802() == 0x1)
    {
        return 0x1;
    }
    if (func_803() == 0x1)
    {
        return 0x1;
    }
    if (func_804() == 0x1)
    {
        return 0x1;
    }
    if (func_59())
    {
        return 0x1;
    }
    if (func_61())
    {
        return 0x1;
    }
    if (func_62())
    {
        return 0x1;
    }
    if (func_63())
    {
        return 0x1;
    }
    if (!global3)
    {
        if (func_809())
        {
            return 0x1;
        }
    }
    else
    {
        func_811();
    }
    return 0;
}

int func_806()
{
    if (WorkModuleImpl.check_strans(0x1e000006) == 0x1 && global18 == 0x2 && GroundModuleImpl(0x2722, 0x2) == 0x1 && -KineticModuleImplFloat.get_damage_speed_x(0x4) > WorkModuleImplFloat.get_float(0x200010b) && WorkModuleImpl.get_int(0x11000001) != 0x2 && WorkModuleImplFloat.get_float(0x100000e) <= 0 && WorkModuleImpl.get_int(0x10000043) <= WorkModuleImpl.get_int(0x12000111))
    {
        func_16(0x49, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000007) == 0x1 && global18 == 0x2 && GroundModuleImpl(0x2722, 0x4) == 0x1 && KineticModuleImplFloat.get_damage_speed_x(0x4) > WorkModuleImplFloat.get_float(0x200010b) && WorkModuleImpl.get_int(0x11000001) != 0x1 && WorkModuleImplFloat.get_float(0x100000e) <= 0 && WorkModuleImpl.get_int(0x10000043) <= WorkModuleImpl.get_int(0x12000111))
    {
        func_16(0x49, 0);
        return 0x1;
    }
    return 0;
}

int func_807()
{
    if (WorkModuleImpl.check_strans(0x1e000008) == 0x1 && global18 == 0x2 && GroundModuleImpl(0x2722, 0x1) == 0x1 && KineticModuleImplFloat.get_damage_speed_y(0x4) > WorkModuleImplFloat.get_float(0x200010b) && WorkModuleImpl.get_int(0x11000001) != 0x3 && WorkModuleImpl.get_int(0x10000043) <= WorkModuleImpl.get_int(0x12000111))
    {
        func_16(0x4a, 0);
        return 0x1;
    }
    return 0;
}

int func_808()
{
    if (WorkModuleImpl.check_strans(0x1e000009) == 0x1 && global18 == 0 && KineticModuleImplFloat.get_sum_speed_y(0x2) <= -WorkModuleImplFloat.get_float(0x2000113) && WorkModuleImpl.get_int(0x11000001) != 0x4 && WorkModuleImpl.get_int(0x10000043) <= WorkModuleImpl.get_int(0x12000111))
    {
        func_16(0x4b, 0);
        return 0x1;
    }
    return 0;
}

int func_809()
{
    float var0;
    float var1;
    func_790();
    if (func_95() == 0)
    {
        if (WorkModuleImpl.is_flag(0x2100001a))
        {
            if (func_84() >= WorkModuleImplFloat.get_float(0x2000082))
            {
                func_16(0x65, 0x1);
                return 0x1;
            }
            else
            {
                func_16(0x64, 0x1);
                return 0x1;
            }
        }
        if (WorkModuleImpl.is_flag(0x21000012) == 0)
        {
            var0 = func_93();
            var1 = (float)WorkModuleImpl.get_int(0x11000004);
            if (var0 < -1.0f || var1 >= (float)WorkModuleImpl.get_int(0x1200011d))
            {
                if (func_812())
                {
                    return 0x1;
                }
                WorkModuleImpl.on_flag2(0x21000012);
            }
        }
        else if (func_812())
        {
            return 0x1;
        }
        if (WorkModuleImpl.is_flag(0x2000000b) == 0 && WorkModuleImpl.is_flag(0x20000032) == 0)
        {
            if (WorkModuleImpl.get_int(0x11000006) <= 0 && KineticModuleImplFloat.get_speed(0x4) <= WorkModuleImplFloat.get_float(0x20000ff))
            {
                WorkModuleImpl.strans_group_on(0x1f00000b);
                WorkModuleImpl.strans_group_on(0x1f00000e);
                func_105();
                func_104();
            }
            if (WorkModuleImpl.get_int(0x11000007) <= 0 && KineticModuleImplFloat.get_speed(0x4) <= WorkModuleImplFloat.get_float(0x2000101))
            {
                WorkModuleImpl.strans_group_on(0x1f00000c);
                WorkModuleImpl.strans_group_on(0x1f00000d);
            }
        }
    }
    return 0;
}

int func_810()
{
    if (WorkModuleImpl.is_flag(0x2000005a))
    {
        return 0;
    }
    if (WorkModuleImpl.check_strans(0x1e000014) == 0x1 && global18 == 0 && func_801() == 0x1 && func_84() >= WorkModuleImplFloat.get_float(0x2000082) && func_95() == 0)
    {
        func_16(0x65, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000013) == 0x1 && global18 == 0 && func_801() == 0x1 && func_95() == 0)
    {
        func_16(0x64, 0x1);
        return 0x1;
    }
    return 0;
}

int func_811()
{
    if (WorkModuleImpl.is_flag(0x2000005a))
    {
        return 0;
    }
    if (WorkModuleImpl.is_flag(0x2100001a))
    {
        return 0;
    }
    if (WorkModuleImpl.is_flag(0x21000019) == 0)
    {
        return 0;
    }
    if (WorkModuleImpl.is_flag(0x2100000f) == 0)
    {
        return 0;
    }
    if (WorkModuleImpl.is_flag(0x2100001b) == 0x1)
    {
        return 0;
    }
    if (WorkModuleImpl.check_strans(0x1e000014) == 0x1 && func_801() == 0x1 && func_84() >= WorkModuleImplFloat.get_float(0x2000082))
    {
        WorkModuleImpl.on_flag2(0x2100001a);
        KineticModuleImpl.clear_speed(0x4);
        GroundModuleImpl(0x2710, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000013) == 0x1 && func_801() == 0x1)
    {
        WorkModuleImpl.on_flag2(0x2100001a);
        KineticModuleImpl.clear_speed(0x4);
        GroundModuleImpl(0x2710, 0x1);
        return 0x1;
    }
    return 0;
}

int func_812()
{
    if (func_810() == 0x1)
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00000d) == 0x1)
    {
        if (!func_95())
        {
            if (func_808() == 0x1)
            {
                return 0x1;
            }
            if (global18 == 0)
            {
                func_16(0x4d, 0);
                return 0x1;
            }
        }
    }
    return 0;
}

void func_813()
{
    WorkModuleImpl.strans_on(0x1e000005);
    WorkModuleImpl.strans_on(0x1e000006);
    WorkModuleImpl.strans_on(0x1e000007);
    WorkModuleImpl.strans_on(0x1e000008);
    WorkModuleImpl.strans_on(0x1e000009);
    WorkModuleImpl.strans_on(0x1e000017);
    WorkModuleImpl.strans_on(0x1e000016);
    WorkModuleImpl.strans_on(0x1e000015);
    WorkModuleImpl.strans_on(0x1e000018);
    WorkModuleImpl.strans_on(0x1e000014);
    WorkModuleImpl.strans_on(0x1e000013);
    func_800();
    func_796();
    func_78(func_814);
}

void func_814()
{
    if (WorkModuleImpl.check_strans(0x1e000005))
    {
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            func_16(0x4c, 0);
            return;
        }
    }
    if (func_808() == 0x1)
    {
        return;
    }
    if (global18 == 0 && WorkModuleImpl.is_flag(0x2100001a) == 0)
    {
        func_16(0x4d, 0);
        return;
    }
    if (func_805())
    {
        return;
    }
    if (func_806() == 0x1)
    {
        return;
    }
    if (func_807() == 0x1)
    {
        return;
    }
}

void func_815()
{
    WorkModuleImpl.strans_on(0x1e00000d);
    if (0x47 == global5 || 0x48 == global5 || 0x49 == global5 || 0x4a == global5 || 0x4b == global5 || 0x13a == global5)
    {
        if (MotionModuleImpl.get_motion() != 0x2e)
        {
            WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x2000120) + 0, 0x1000006);
        }
    }
    if (MotionModuleImpl(0x28) == 0x1)
    {
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x2100000d);
    }
    if (0xc8 == global5 || 0x48 == global5)
    {
        MotionModuleImpl(0x27, 0x1);
    }
    if (WorkModuleImpl.is_flag(0x20000054))
    {
        WorkModuleImpl.strans_on(0x1e000013);
        WorkModuleImpl.strans_on(0x1e000014);
    }
    if (MotionModuleImpl.get_motion() != 0x2e)
    {
        func_22(0x2e, 0, 1.0f);
    }
    if (!WorkModuleImpl.is_flag(0x2000001b))
    {
        if (!StopModuleImpl(0x1))
        {
            func_817();
        }
        global16 = func_817;
    }
    func_78(func_816);
}

void func_816()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_896())
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x20000054))
    {
        if (WorkModuleImpl.check_strans(0x1e000014) == 0x1 && global18 == 0 && (ControlModuleImpl(0x2722, 0x3) < 0x4 && ControlModuleImpl(0x2723, 0x3) >= WorkModuleImpl.get_int(0x12000080) || sys_21(0x86, 0)) && func_84() >= WorkModuleImplFloat.get_float(0x2000082) && func_95() == 0)
        {
            func_16(0x65, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000013) == 0x1 && global18 == 0 && (ControlModuleImpl(0x2722, 0x3) < 0x4 && ControlModuleImpl(0x2723, 0x3) >= WorkModuleImpl.get_int(0x12000080) || sys_21(0x86, 0)) && func_95() == 0)
        {
            func_16(0x64, 0x1);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00000d))
    {
        if (global18 == 0)
        {
            if (sys_21(0x86, 0))
            {
                if (WorkModuleImpl.check_strans(0x1e00003d))
                {
                    func_16(0x22, 0);
                    return;
                }
            }
            func_16(0x4d, 0);
            return;
        }
    }
    if (!WorkModuleImpl.is_flag(0x2000001b))
    {
        if (func_84() >= WorkModuleImplFloat.get_float(0x2000127))
        {
            if (global31 & 0x40)
            {
                if (WorkModuleImpl.get_int(0x11000002) <= 0)
                {
                    if (!WorkModuleImpl.is_flag(0x2000000b) && !WorkModuleImpl.is_flag(0x20000032) == 0)
                    {
                        func_16(0xe, 0x1);
                        return;
                    }
                }
            }
        }
    }
    func_897();
}

void func_817()
{
    float var0;
    if (0 < WorkModuleImplFloat.get_float(0x1000006))
    {
        WorkModuleImpl.add_float(-1.0f, 0x1000006);
    }
    else
    {
        WorkModuleImpl.set_float(0 + 0, 0x1000006);
    }
    var0 = WorkModuleImplFloat.get_float(0x2000120);
    if (9.999999747378752e-06f < var0)
    {
        MotionModuleImpl.set_motion_rate((var0 - WorkModuleImplFloat.get_float(0x1000006)) / var0);
    }
    else
    {
        MotionModuleImpl.set_motion_rate(1.0f);
    }
    if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
    }
    else
    {
        func_105();
        func_104();
    }
}

void func_818()
{
    if (global6 == 0x47)
    {
        WorkModuleImpl.off_flag2(0x21000018);
    }
    else if (global6 == 0xb1)
    {
        func_820();
    }
}

void func_819()
{
    if (global6 == 0xb1)
    {
        func_820();
    }
}

void func_820()
{
    int var0;
    EffectModuleImpl(0x2723, 0x1000094, 0x1, 0x1);
    var0 = WorkModuleImpl.get_int(0x10000065);
    EffectModuleImpl(0x2723, 0x1000095 + var0, 0x1, 0x1);
}

void func_821()
{
    WorkModuleImpl.off_flag2(0x20000054);
    if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
    {
        MotionModuleImpl(0x27, 0x1);
    }
    else
    {
        MotionModuleImpl(0x27, 0);
    }
    if (WorkModuleImpl.is_flag(0x20000072))
    {
        MotionModuleImpl(0x36, 0);
        WorkModuleImpl.off_flag2(0x20000072);
    }
}

int func_822()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0x2000, 0x2c, 0x40, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0x1, 0, 0);
    return 0;
}

void func_823()
{
    JostleModuleImpl(0x2710, 0);
    SoundModuleImpl(0x2710, 0xc3);
    func_826();
    sys_21(0x66, 0x1);
    if (!StopModuleImpl(0x1))
    {
        func_825();
    }
    global16 = func_825;
    func_78(func_824);
}

void func_824()
{
    int var0;
    var0 = WorkModuleImpl.is_flag(0x2100000f);
    if (StatusModuleImpl(0x6) == 0 && !var0 && global18 == 0x2 || var0 && global18 == 0 && WorkModuleImpl.get_int(0x11000002) >= WorkModuleImpl.get_int(0x11000004))
    {
        func_826();
    }
    if (func_96() || WorkModuleImpl.is_flag(0x2000006f))
    {
        func_16(0xc6, 0x1);
        return;
    }
}

void func_825()
{
    WorkModuleImpl.inc_int(0x11000002);
}

void func_826()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x1);
        WorkModuleImpl.off_flag2(0x2100000f);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0x44);
        GroundModuleImpl(0x2710, 0x5);
        WorkModuleImpl.on_flag2(0x2100000f);
    }
}

void func_827()
{
    sys_21(0x66, 0);
}

int func_828()
{
    if (func_470() != 0)
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x45, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0, 0, 0);
    return 0;
}

void func_829()
{
    func_40();
    func_564();
    func_22(0x19, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_831();
    }
    global16 = func_831;
    func_78(func_830);
}

void func_830()
{
    if (func_56())
    {
        return;
    }
    if (func_41())
    {
        return;
    }
    if (func_565())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.get_int(0x11000002) >= WorkModuleImpl.get_int(0x12000188))
    {
        func_16(0xe, 0);
        return;
    }
}

void func_831()
{
    WorkModuleImpl.inc_int(0x11000002);
    func_550();
}

void func_832()
{
    
}

int func_833()
{
    if (func_42())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0x1a, 0x1, 0, 0x1, 0, 0, 0, 0);
    KineticModuleImpl.clear_speed(0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x4000000, 0, 0);
    return 0;
}

void func_834()
{
    func_22(0xf2, 0, 1.0f);
    func_78(func_835);
}

void func_835()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_96() == 0x1 && global18 == 0 || WorkModuleImpl.is_flag(0x2000006f))
    {
        func_16(0x5e, 0);
        return;
    }
}

void func_836()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x1200016d);
    WorkModuleImpl.set_int(var0, 0x10000080);
}

int func_837()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x1, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0, 0, 0);
    return 0;
}

void func_838()
{
    GroundModuleImpl(0x2715);
    func_94();
    KineticModuleImpl.change_kinetic_type(0x4c);
    func_78(func_839);
}

void func_839()
{
    if (global18 == 0)
    {
        func_16(0x4d, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
}

void func_840()
{
    func_1769();
    if (global6 == 0x4d)
    {
        WorkModuleImpl.on_flag2(0x20000066);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x20000066);
    }
}

int func_841()
{
    if (func_42())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x4000000, 0, 0);
    return 0;
}

void func_842()
{
    func_22(0xf6, 0, 1.0f);
    func_78(func_843);
}

void func_843()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (WorkModuleImpl.is_flag(0x2000006f))
        {
            func_16(0x62, 0);
            return;
        }
        if (global18 == 0)
        {
            func_16(0x60, 0);
            return;
        }
    }
}

void func_844()
{
    func_845();
}

void func_845()
{
    if (global6 == 0x60)
    {
        
    }
    else
    {
        EffectModuleImpl(0x20, 0x1e);
    }
}

int func_846()
{
    if (func_42())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0x80);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x4000000, 0, 0);
    return 0;
}

void func_847()
{
    func_22(0xf7, 0, 1.0f);
    sys_21(0x65, 0x1);
    func_78(func_848);
}

void func_848()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (func_96() == 0x1 && global18 == 0 || WorkModuleImpl.is_flag(0x2000006f))
    {
        func_16(0x62, 0);
        return;
    }
}

void func_849()
{
    sys_21(0x65, 0);
    func_845();
}

int func_850()
{
    StatusModuleImpl(0x5, 0x2, 0x5b, 0x5, 0, 0x1, 0, 0, 0, 0x100);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0x4000000, 0, 0);
    return 0;
}

void func_851()
{
    func_22(0x2e, 0, 1.0f);
    if (!WorkModuleImpl.is_flag(0x2000001b))
    {
        if (!StopModuleImpl(0x1))
        {
            func_817();
        }
        global16 = func_817;
    }
    func_78(func_852);
}

void func_852()
{
    if (global18 == 0)
    {
        func_16(0x60, 0);
        return;
    }
    if (func_96() == 0x1 || WorkModuleImpl.is_flag(0x2000006f))
    {
        func_16(0xe, 0);
        return;
    }
}

void func_853()
{
    if (global6 != 0x60)
    {
        EffectModuleImpl(0x20, 0x1e);
    }
}

int func_854()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x4000000, 0, 0);
    return 0;
}

void func_855()
{
    func_22(0xf8, 0, 1.0f);
    func_78(func_856);
}

void func_856()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
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
}

void func_857()
{
    func_845();
}

void func_858()
{
    int var0;
    float var1;
    int var2;
    int var3;
    int var4;
    int var5;
    if (global5 == 0x61)
    {
        return;
    }
    var0 = StatusModuleImpl(0);
    func_75();
    func_76();
    WorkModuleImpl.set_int(0, 0x11000004);
    WorkModuleImpl.set_int(0, 0x11000001);
    WorkModuleImpl.set_int(0, 0x11000003);
    WorkModuleImpl.off_flag2(0x2100000e);
    if (DamageModuleImpl(0x1))
    {
        WorkModuleImpl.on_flag2(0x2100000f);
    }
    if (global19 == 0)
    {
        WorkModuleImpl.on_flag2(0x21000019);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x21000019);
    }
    if (global5 == 0x4d || global5 == 0x4e || global5 == 0x4f || global5 == 0x50 || global5 == 0x51 || global5 == 0x52 || global5 == 0x57)
    {
        WorkModuleImpl.on_flag2(0x2100001b);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x2100001b);
    }
    if (WorkModuleImpl.is_flag(0x2000005a))
    {
        func_2199(0x1);
    }
    if (var0 == 0x5d)
    {
        var1 = WorkModuleImplFloat.get_float(0x2000086);
        if (StatusModuleImpl(0xa, 0x3) == 0x59)
        {
            var1 *= WorkModuleImplFloat.get_float(0x30000f8);
        }
        var1 -= DamageModuleImplFloat(0);
        var1 *= WorkModuleImplFloat.get_float(0x30000fe);
        ControlModuleImpl(0x6, var1, WorkModuleImplFloat.get_float(0x2000088), WorkModuleImplFloat.get_float(0x2000089));
        ControlModuleImpl(0x2718, 0x1a, 0);
        EffectModuleImpl(0x1f, 0x1d, 0);
    }
    else if (var0 == 0x60 || var0 == 0x61)
    {
        var1 = WorkModuleImplFloat.get_float(0x2000157) + WorkModuleImplFloat.get_float(0x2000159) * sys_8(0) + WorkModuleImplFloat.get_float(0x2000158) * ((float)0x3 - DamageModuleImplFloat(0xb)) + WorkModuleImplFloat.get_float(0x200015a) * DamageModuleImplFloat(0x8) + WorkModuleImplFloat.get_float(0x200015b) * DamageModuleImplFloat(0);
        var1 *= sys_8(0x1);
        if (DamageModuleImpl(0x7) == 0xa)
        {
            var1 *= WorkModuleImplFloat.get_float(0x200015e);
        }
        var1 *= WorkModuleImplFloat.get_float(0x30000fe);
        ControlModuleImpl(0x6, var1, WorkModuleImplFloat.get_float(0x200015c), WorkModuleImplFloat.get_float(0x200015d), 0x1);
        EffectModuleImpl(0x1f, 0x1e, 0);
    }
    else if (var0 == 0x63)
    {
        if (DamageModuleImpl(0x7) == 0x1f)
        {
            var2 = 0x2000166;
        }
        else
        {
            var2 = 0x200015f;
        }
        var1 = WorkModuleImplFloat.get_float(var2) + WorkModuleImplFloat.get_float(var2 + 0x2000161 - 0x200015f) * sys_8(0) + WorkModuleImplFloat.get_float(var2 + 0x2000160 - 0x200015f) * (3.0f - DamageModuleImplFloat(0xb)) + WorkModuleImplFloat.get_float(var2 + 0x2000162 - 0x200015f) * DamageModuleImplFloat(0x8) + WorkModuleImplFloat.get_float(var2 + 0x2000163 - 0x200015f) * DamageModuleImplFloat(0);
        var1 *= WorkModuleImplFloat.get_float(0x30000fe);
        ControlModuleImpl(0x6, var1, WorkModuleImplFloat.get_float(var2 + 0x2000164 - 0x200015f), WorkModuleImplFloat.get_float(var2 + 0x2000165 - 0x200015f), 0x3);
        ControlModuleImpl(0x2714, 0xd, 0);
    }
    else if (var0 == 0x13a || var0 == 0x13d)
    {
        WorkModuleImpl.on_flag2(0x21000010);
        var1 = (float)DamageModuleImpl(0x8);
        var1 *= WorkModuleImplFloat.get_float(0x30000fe);
        var3 = (int)var1;
        WorkModuleImpl.set_int(var3, 0x11000003);
        WorkModuleImpl.set_float(0 + 0, 0x1000007);
        printf("N");
        func_22(0xd0, 0, 0);
        if (KineticModuleImpl.is_enabled(0x1))
        {
            WorkModuleImpl.on_flag2(0x21000011);
        }
        else
        {
            WorkModuleImpl.off_flag2(0x21000011);
        }
        KineticModuleImpl.disable_energy(0x1);
        KineticModuleImpl.disable_energy(0x4);
        StatusModuleImpl(0x2712, 0x1);
    }
    else
    {
        var4 = DamageModuleImpl(0x7);
        if (var4 != 0x3 && var4 != 0x14)
        {
            func_870(0);
        }
        else
        {
            WorkModuleImpl.on_flag2(0x21000010);
            var1 = (float)DamageModuleImpl(0x8);
            if (var4 == 0x14)
            {
                var1 *= WorkModuleImplFloat.get_float(0x30000fe);
            }
            var3 = (int)var1;
            WorkModuleImpl.set_int(var3, 0x11000003);
            if (global5 == 0x4c)
            {
                MotionModuleImpl.set_motion_rate(0);
            }
            else if (WorkModuleImpl.is_flag(0x2100001b) == 0x1)
            {
                if (FighterUtil.is_body_up() == 0x1)
                {
                    var5 = 0xd8;
                }
                else
                {
                    var5 = 0xe2;
                }
                func_22(var5, 0, 0);
            }
            else
            {
                WorkModuleImpl.set_float(0 + 0, 0x1000007);
                func_22(0xd4, 0, 1.0f);
            }
            if (KineticModuleImpl.is_enabled(0x1))
            {
                WorkModuleImpl.on_flag2(0x21000011);
            }
            else
            {
                WorkModuleImpl.off_flag2(0x21000011);
            }
            KineticModuleImpl.disable_energy(0x1);
            KineticModuleImpl.disable_energy(0x4);
            StatusModuleImpl(0x2712, 0x1);
        }
    }
}

void func_859()
{
    int var0;
    float var1;
    int var2;
    if (WorkModuleImpl.is_flag(0x21000010))
    {
        var0 = WorkModuleImpl.get_int(0x11000003);
        if (var0 > 0)
        {
            var0--;
            WorkModuleImpl.set_int(var0, 0x11000003);
        }
        if (var0 <= 0)
        {
            WorkModuleImpl.off_flag2(0x21000010);
            KineticModuleImpl.enable_energy(0x4);
            if (WorkModuleImpl.is_flag(0x21000011))
            {
                KineticModuleImpl.enable_energy(0x1);
            }
            if (DamageModuleImpl(0x2) == 0)
            {
                sys_21(0x5a);
            }
            StatusModuleImpl(0x2712, 0);
            var1 = WorkModuleImplFloat.get_float(0x1000007);
            if (var1 != 0)
            {
                PostureModuleImpl.set_lr(var1);
                PostureModuleImpl.update_rot_y();
            }
            func_870(0x1);
            if (WorkModuleImpl.is_flag(0x20000060) == 0x1)
            {
                WorkModuleImpl.off_flag2(0x20000060);
                var2 = WorkModuleImpl.get_int(0x10000073);
                EffectModuleImpl(0x6, var2);
            }
            WorkModuleImpl.off_flag2(0x2000003c);
        }
        else if (DamageModuleImpl(0x2) == 0 && WorkModuleImpl.is_flag(0x2000003c) == 0)
        {
            sys_21(0x5b);
        }
    }
    else
    {
        func_871();
    }
}

void func_860()
{
    if (StopModuleImpl(0) && DamageModuleImpl(0x2) == 0 && WorkModuleImpl.is_flag(0x2000003c) == 0)
    {
        sys_21(0x5b);
    }
}

void func_861()
{
    int var0;
    var0 = global4;
    WorkModuleImpl.off_flag2(0x2000003c);
    if (global18 != 0x2)
    {
        WorkModuleImpl.off_flag2(0x20000011);
    }
    if (WorkModuleImpl.is_flag(0x2100000f) && WorkModuleImpl.get_int(0x1000003f) <= 0)
    {
        if (var0 == 0x154 || var0 == 0xc || var0 == 0xd)
        {
            KineticModuleImpl.clear_speed(0x4);
            WorkModuleImpl.set_int(0, 0x1000003e);
        }
    }
}

int func_862(int arg0, int arg1)
{
    int var2;
    var2 = WorkModuleImpl.get_int(0x10000064);
    if (var2 != 0xffffffff)
    {
        return var2;
    }
    if (arg0 == 0)
    {
        if (arg1 == 0)
        {
            return 0xc9;
        }
        else if (arg1 == 0x1)
        {
            return 0xc6;
        }
        else if (arg1 == 0x2)
        {
            return 0xc3;
        }
    }
    else if (arg0 == 0x1)
    {
        if (arg1 == 0)
        {
            return 0xca;
        }
        else if (arg1 == 0x1)
        {
            return 0xc7;
        }
        else if (arg1 == 0x2)
        {
            return 0xc4;
        }
    }
    else if (arg0 == 0x2)
    {
        if (arg1 == 0)
        {
            return 0xcb;
        }
        else if (arg1 == 0x1)
        {
            return 0xc8;
        }
        else if (arg1 == 0x2)
        {
            return 0xc5;
        }
    }
    return 0xc6;
}

int func_863()
{
    int var0;
    int var1;
    int var2;
    var0 = DamageModuleImpl(0x3);
    var1 = DamageModuleImpl.get_damage_level();
    if (var1 >= 0x3)
    {
        var1 = 0x2;
    }
    var2 = func_862(var1, var0);
    if (var2 == MotionModuleImpl.get_motion())
    {
        var0 += randint(0, 0x2) + 0x1;
        if (var0 >= 0x3)
        {
            var0 -= 0x3;
        }
        return func_862(var1, var0);
    }
    return var2;
}

int func_864()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x10000064);
    if (var0 != 0xffffffff)
    {
        return var0;
    }
    if (DamageModuleImpl(0xd) == 0x1)
    {
        return 0xfe;
    }
    var1 = DamageModuleImpl.get_damage_level();
    if (var1 == 0)
    {
        return 0xcc;
    }
    else if (var1 == 0x1)
    {
        return 0xcd;
    }
    else if (var1 == 0x2)
    {
        return 0xce;
    }
    return 0xcc;
}

void func_865()
{
    int var0;
    float var1;
    float var2;
    int var3;
    int var4;
    float var5;
    var0 = (int)DamageModuleImplFloat(0x1);
    var1 = DamageModuleImplFloat(0x2);
    var2 = DamageModuleImplFloat(0x3);
    var3 = StatusModuleImpl(0);
    if (WorkModuleImpl.is_flag(0x2100000f))
    {
        var4 = WorkModuleImpl.get_int(0x13000049);
        WorkModuleImpl.set_int(var4, 0x1000003f);
    }
    if (var0 > 0)
    {
        WorkModuleImpl.off_flag2(0x2100000e);
        WorkModuleImpl.set_int(var0, 0x1000003e);
        if (global18 == 0x2)
        {
            WorkModuleImpl.on_flag2(0x2000005c);
        }
        else
        {
            WorkModuleImpl.off_flag2(0x2000005c);
        }
    }
    else
    {
        WorkModuleImpl.on_flag2(0x2100000e);
        WorkModuleImpl.set_int(0, 0x1000003e);
    }
    var4 = WorkModuleImpl.get_int(0x12000073);
    WorkModuleImpl.set_int(var4, 0x10000003);
    var5 = WorkModuleImplFloat.get_float(0x2000093);
    if (var1 * var1 + var2 * var2 > var5 * var5)
    {
        WorkModuleImpl.on_flag2(0x2000001f);
        var4 = WorkModuleImpl.get_int(0x12000094);
        WorkModuleImpl.set_int(var4, 0x10000021);
    }
    var4 = WorkModuleImpl.get_int(0x120000fe);
    WorkModuleImpl.set_int(var4, 0x11000006);
    var4 = WorkModuleImpl.get_int(0x12000100);
    WorkModuleImpl.set_int(var4, 0x11000007);
}

void func_866(int arg0)
{
    float var1;
    float var2;
    var1 = (float)WorkModuleImpl.get_int(0x1000003e);
    if (var1 > 0)
    {
        var2 = (float)MotionModuleImpl.get_end_frame(arg0) / var1 * WorkModuleImplFloat.get_float(0x20000fa);
        if (WorkModuleImpl.is_flag(0x20000076))
        {
            WorkModuleImpl.set_float(var2 + 0, 0x100000d);
            var2 = WorkModuleImplFloat.get_float(0x20001ec);
        }
        MotionModuleImpl.set_motion_rate(var2);
    }
}

void func_867(int arg0)
{
    int var1;
    float var2;
    var1 = func_863();
    if (global5 == 0x4c && arg0 == 0 && StopModuleImpl(0) == 0x1)
    {
        WorkModuleImpl.set_int(var1, 0x1100000d);
    }
    else
    {
        WorkModuleImpl.set_float(0 + 0, 0x1000007);
        var2 = (float)WorkModuleImpl.get_int(0x120000f9);
        func_29(var1, 0, 1.0f, var2);
    }
    func_872();
    if (WorkModuleImpl.is_flag(0x20000076))
    {
        WorkModuleImpl.set_int(0xffffffff, 0x1100000d);
    }
    func_866(var1);
}

void func_868()
{
    float var0;
    int var1;
    if (!WorkModuleImpl.is_flag(0x2100000e))
    {
        if (WorkModuleImpl.get_int(0x1000003e) <= 0)
        {
            WorkModuleImpl.on_flag2(0x2100000e);
        }
    }
    if (WorkModuleImpl.is_flag(0x20000076) && !LinkModuleImpl(0x2, 0x7) && global9 > 1.0f)
    {
        WorkModuleImpl.off_flag2(0x20000076);
        var0 = WorkModuleImplFloat.get_float(0x100000d);
        var1 = WorkModuleImpl.get_int(0x1100000f);
        if (var1 != 0xffffffff)
        {
            func_22(var1, 0, var0);
            printf("sub_ftStatusUniqProcessDamage_execNormalDamageCommon motion kind: %d rate: %f", var1, var0);
        }
        else
        {
            MotionModuleImpl.set_motion_rate(var0);
            printf("sub_ftStatusUniqProcessDamage_execNormalDamageCommon motion rate: %f", var0);
        }
    }
    WorkModuleImpl.inc_int(0x11000004);
    WorkModuleImpl.count_down_int(0x11000006);
    WorkModuleImpl.count_down_int(0x11000007);
    if (WorkModuleImpl.is_flag(0x2000005a))
    {
        if (KineticModuleImplFloat.get_sum_speed(0xffffffff) <= WorkModuleImplFloat.get_float(0x1f))
        {
            func_2200(0x1);
        }
    }
}

void func_869()
{
    func_873();
}

void func_870(int arg0)
{
    int var1;
    var1 = global4;
    if (var1 == 0x127)
    {
        var1 = 0x47;
    }
    else if (var1 == 0x13a)
    {
        var1 = 0x47;
    }
    else if (var1 == 0x13d)
    {
        var1 = 0x46;
    }
    if (var1 == 0x48)
    {
        func_890(arg0);
    }
    else if (var1 == 0x47)
    {
        func_883(arg0);
    }
    else if (var1 == 0x46)
    {
        func_882(arg0);
    }
    else
    {
        func_867(arg0);
    }
}

void func_871()
{
    int var0;
    var0 = global4;
    if (var0 == 0x127)
    {
        var0 = 0x47;
    }
    else if (var0 == 0x13a)
    {
        var0 = 0x47;
    }
    if (var0 == 0x48)
    {
        func_891();
    }
    else if (var0 == 0x47)
    {
        func_887();
    }
    else
    {
        func_869();
    }
}

void func_872()
{
    int var0;
    var0 = global4;
    if (var0 == 0x127)
    {
        var0 = 0x47;
    }
    else if (var0 == 0x13a)
    {
        var0 = 0x47;
    }
    if (var0 == 0x48)
    {
        func_881();
    }
    else if (var0 == 0x47)
    {
        func_881();
    }
    else
    {
        func_865();
    }
}

void func_873()
{
    int var0;
    var0 = global4;
    if (var0 == 0x127)
    {
        var0 = 0x47;
    }
    else if (var0 == 0x13a)
    {
        var0 = 0x47;
    }
    if (var0 == 0x48)
    {
        func_884();
    }
    else if (var0 == 0x47)
    {
        func_884();
    }
    else
    {
        func_868();
    }
}

int func_874(int arg0)
{
    int var1;
    if (global4 == 0x127)
    {
        return 0x2e;
    }
    var1 = WorkModuleImpl.get_int(0x10000064);
    if (var1 != 0xffffffff)
    {
        return var1;
    }
    if (arg0 == 0)
    {
        return 0xd1;
    }
    else if (arg0 == 0x1)
    {
        return 0xd0;
    }
    else if (arg0 == 0x2)
    {
        return 0xcf;
    }
    return 0xd0;
}

void func_875()
{
    float var0;
    int var1;
    int var2;
    var0 = DamageModuleImplFloat(0x9);
    if (var0 > BattleObjectParamFloat(0, 0x200001f) && var0 < BattleObjectParamFloat(0, 0x2000020))
    {
        return 0xd2;
    }
    else if (DamageModuleImpl(0xd) == 0x1)
    {
        return 0xfe;
    }
    else
    {
        var1 = DamageModuleImpl(0x3);
        var2 = func_874(var1);
        if (var2 == MotionModuleImpl.get_motion())
        {
            var1 += randint(0, 0x2) + 0x1;
            if (var1 >= 0x3)
            {
                var1 -= 0x3;
            }
            var2 = func_874(var1);
        }
        return var2;
    }
}

int func_876(float arg0, int arg1, int arg2)
{
    int var3;
    int var4;
    float var5;
    var3 = 0;
    if (arg0 >= WorkModuleImplFloat.get_float(arg1) && StopModuleImpl(0x1) == 0 && sys_49(0x2) == 0)
    {
        var3 = 0x1;
        if (arg2 != 0x11000010)
        {
            var4 = WorkModuleImpl.get_int(arg2);
            var5 = WorkModuleImplFloat.get_float(0x100000a);
            if (var4 < WorkModuleImpl.get_int(0x12000108) || var5 < WorkModuleImplFloat.get_float(0x2000109))
            {
                var3 = 0;
            }
            WorkModuleImpl.inc_int(arg2);
        }
    }
    else if (arg2 != 0x11000010)
    {
        WorkModuleImpl.set_int(0, arg2);
    }
    return var3;
}

int func_877(int arg0, int arg1, int arg2, int arg3, int arg4)
{
    int var5;
    int var6;
    float var7;
    float var8;
    var5 = WorkModuleImpl.get_int(arg1);
    if (arg0 == 0)
    {
        if (var5 != 0)
        {
            EffectModuleImpl(0x6, var5, 0x12);
            WorkModuleImpl.set_int(0, arg1);
        }
    }
    else
    {
        if (var5 != 0 && arg4 == 0x1)
        {
            EffectModuleImpl(0x6, var5, 0);
            var5 = 0;
        }
        if (var5 == 0)
        {
            if (global4 == 0x48)
            {
                var6 = WorkModuleImpl.get_int(0x1300006d);
                var7 = WorkModuleImplFloat.get_float(0x300006e);
                var8 = WorkModuleImplFloat.get_float(0x300006f);
            }
            else
            {
                var6 = WorkModuleImpl.get_int(0x1300006a);
                var7 = WorkModuleImplFloat.get_float(0x300006b);
                var8 = WorkModuleImplFloat.get_float(0x300006c);
            }
            var5 = EffectModuleImpl(0xb, arg2, var6, var7, var8, 0, 0, 0, 0, 1.0f, 0x1, 0, 0, arg3);
            WorkModuleImpl.set_int(var5, arg1);
        }
        return var5;
    }
    return 0;
}

void func_878()
{
    float var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    float var7;
    float var8;
    float var9;
    if (WorkModuleImpl.is_flag(0x21000016) == 0)
    {
        var0 = KineticModuleImplFloat.get_speed(0x4);
        var1 = WorkModuleImpl.get_int(0x10000065);
        var2 = 0;
        if (var1 != WorkModuleImpl.get_int(0x1100000b))
        {
            var2 = 0x1;
        }
        var3 = func_876(var0, 0x2000106, 0x11000010);
        func_877(var3, 0x11000002, 0x100000b, 0xffffffff, 0);
        var4 = func_876(var0, 0x2000107, 0x1100000a);
        var5 = func_877(var4, 0x11000008, 0x1000094, var1, var2);
        var6 = func_877(var4, 0x11000009, 0x1000095 + var1, 0xffffffff, var2);
        if (var5 != 0 || var6 != 0)
        {
            var7 = KineticModuleImplFloat.get_sum_speed_x(0xffffffff);
            var8 = KineticModuleImplFloat.get_sum_speed_y(0xffffffff);
            var9 = Math.atan2(var8, var7) * (float)0xb4 / 3.1415927410125732f;
            if (var5 != 0)
            {
                EffectModuleImpl(0x18, var5, 0, 90.0f, var9);
            }
            if (var6 != 0)
            {
                EffectModuleImpl(0x18, var6, 0, 90.0f, var9);
            }
            WorkModuleImpl.set_int(var1, 0x1100000b);
        }
        else
        {
            WorkModuleImpl.set_int(0xffffffff, 0x1100000b);
        }
    }
}

void func_879()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 != 0)
    {
        EffectModuleImpl(0x32, var0, 0);
    }
    var0 = WorkModuleImpl.get_int(0x11000008);
    if (var0 != 0)
    {
        EffectModuleImpl(0x32, var0, 0x12);
    }
    var0 = WorkModuleImpl.get_int(0x11000009);
    if (var0 != 0)
    {
        EffectModuleImpl(0x32, var0, 0x12);
    }
}

void func_880()
{
    CameraModuleImpl(0x4);
}

void func_881()
{
    func_865();
    GroundModuleImpl(0x2712, 0x1);
}

void func_882(int arg0)
{
    int var1;
    int var2;
    float var3;
    var1 = func_864();
    if (WorkModuleImpl.is_flag(0x20000076))
    {
        WorkModuleImpl.set_int(0xffffffff, 0x1100000f);
    }
    if (global5 == 0x4c && arg0 == 0 && StopModuleImpl(0) == 0x1)
    {
        WorkModuleImpl.set_int(var1, 0x1100000d);
    }
    else if (WorkModuleImpl.is_flag(0x2100001b) == 0x1 && arg0 == 0 && StopModuleImpl(0) == 0x1)
    {
        WorkModuleImpl.set_int(var1, 0x1100000d);
        if (FighterUtil.is_body_up() == 0x1)
        {
            var1 = 0xd8;
        }
        else
        {
            var1 = 0xe2;
        }
        var2 = 0;
        if (WorkModuleImpl.is_flag(0x20000076))
        {
            if (global1 == 0x8)
            {
                var2 = 0x1;
            }
        }
        if (var2 == 0x1)
        {
            func_22(var1, 1.0f, 1.0f);
        }
        else
        {
            func_22(var1, 0, 1.0f);
        }
    }
    else
    {
        WorkModuleImpl.set_float(0 + 0, 0x1000007);
        var3 = (float)WorkModuleImpl.get_int(0x120000f9);
        if (WorkModuleImpl.is_flag(0x20000076) && global19 == 0)
        {
            WorkModuleImpl.set_int(var1, 0x1100000f);
            var1 = 0xc4;
            WorkModuleImpl.on_flag2(0x20000077);
        }
        func_29(var1, 0, 1.0f, var3);
    }
    func_872();
    if (WorkModuleImpl.is_flag(0x20000076))
    {
        WorkModuleImpl.set_int(0xffffffff, 0x1100000d);
    }
    func_866(var1);
}

void func_883(int arg0)
{
    int var1;
    int var2;
    float var3;
    var1 = func_875();
    func_872();
    if (WorkModuleImpl.is_flag(0x20000076))
    {
        WorkModuleImpl.set_int(0xffffffff, 0x1100000f);
    }
    if (global5 == 0x4c && arg0 == 0 && StopModuleImpl(0) == 0x1)
    {
        WorkModuleImpl.set_int(var1, 0x1100000d);
        if (WorkModuleImpl.is_flag(0x20000076) && global19 == 0)
        {
            WorkModuleImpl.on_flag2(0x20000077);
        }
        WorkModuleImpl.set_float(1.0f + 0, 0x100000d);
    }
    else if (WorkModuleImpl.is_flag(0x2100001b) == 0x1 && arg0 == 0 && StopModuleImpl(0) == 0x1)
    {
        WorkModuleImpl.set_int(var1, 0x1100000d);
        if (FighterUtil.is_body_up() == 0x1)
        {
            var1 = 0xd8;
        }
        else
        {
            var1 = 0xe2;
        }
        var2 = 0;
        if (WorkModuleImpl.is_flag(0x20000076))
        {
            if (global1 == 0x8)
            {
                var2 = 0x1;
            }
        }
        if (var2 == 0x1)
        {
            func_22(var1, 1.0f, 1.0f);
        }
        else
        {
            func_22(var1, 0, 1.0f);
        }
        WorkModuleImpl.set_float(1.0f + 0, 0x100000d);
    }
    else
    {
        WorkModuleImpl.set_float(0 + 0, 0x1000007);
        var3 = (float)WorkModuleImpl.get_int(0x120000f9);
        if (WorkModuleImpl.is_flag(0x20000076) && global19 == 0)
        {
            WorkModuleImpl.set_int(var1, 0x1100000f);
            var1 = 0xc4;
            WorkModuleImpl.on_flag2(0x20000077);
        }
        func_29(var1, 0, 1.0f, var3);
        func_866(var1);
    }
    if (WorkModuleImpl.is_flag(0x20000076))
    {
        WorkModuleImpl.set_int(0xffffffff, 0x1100000d);
        if (global19 == 0)
        {
            WorkModuleImpl.on_flag2(0x20000077);
        }
        MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x20001ec));
    }
    func_880();
}

void func_884()
{
    func_868();
    func_878();
    FighterUtil(0x1);
    if (WorkModuleImpl.is_flag(0x21000013) == 0)
    {
        WorkModuleImpl.on_flag2(0x21000013);
        if (global18 == 0x2 && 0x1)
        {
            func_885();
        }
    }
    func_886();
    if (StopModuleImpl(0x1) == 0 && sys_49(0x2) == 0)
    {
        if (func_888() != 0)
        {
            return 0x1;
        }
    }
}

void func_885()
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
    float var10;
    float var11;
    float var12;
    float var13;
    float var14;
    float var15;
    float var16;
    var0 = global48;
    var1 = global32;
    if (var0 != 0 || var1 != 0)
    {
        if (KineticModuleImpl.is_enabled(0x4) == 0)
        {
            return;
        }
        var2 = KineticModuleImplFloat.get_damage_speed_x(0x4);
        var3 = KineticModuleImplFloat.get_damage_speed_y(0x4);
        var4 = 0;
        var5 = KineticModuleImplFloat.get_speed(0x4);
        if (var5 < 9.999999747378752e-06f)
        {
            return;
        }
        var6 = WorkModuleImplFloat.get_float(0x200011a);
        if (Math.atan2(func_13(var3), func_13(var2)) > var6)
        {
            var7 = Math.atan2(var3, var2);
            var8 = func_13(var3 * var0 + -var2 * var1) / var5;
            var9 = var2 * var1 - var3 * var0;
            if (var9 < 0)
            {
                var8 = -var8;
            }
            var7 += var6 * var8;
            var10 = var7 * (float)0xb4 / 3.1415927410125732f;
            var10 = func_13(var10);
            var11 = 25.0f;
            if (var10 <= 90.0f - var11 || var10 >= 90.0f + var11)
            {
                var12 = 1.0f;
                var13 = WorkModuleImplFloat.get_float(0x200011b);
                var14 = WorkModuleImplFloat.get_float(0x200011c);
                if (var1 > 0)
                {
                    var12 = (var13 - 1.0f) * var1 + 1.0f;
                }
                else if (var1 < 0)
                {
                    var12 = 1.0f - (1.0f - var14) * -var1;
                }
                if (var12 < var14)
                {
                    var12 = var14;
                }
                if (var12 > var13)
                {
                    var12 = var13;
                }
                var5 = var5 * var12;
            }
            var15 = var5 * Math.cos(var7);
            var16 = var5 * Math.sin(var7);
            KineticModuleImpl.set_speed_damage(var15, var16);
        }
    }
}

void func_886()
{
    sys_21(0x70);
}

void func_887()
{
    func_873();
}

void func_888()
{
    int var0;
    if (FighterUtil.check_cloud_through_out() == 0x1)
    {
        var0 = WorkModuleImpl.get_int(0x1000003e);
        var0 = (int)((float)var0 * WorkModuleImplFloat.get_float(0x200011f));
        WorkModuleImpl.set_int(var0, 0x1000003e);
    }
}

void func_889()
{
    CameraModuleImpl(0x5);
    if (WorkModuleImpl.is_flag(0x2000005a))
    {
        func_2200(0x1);
    }
    func_861();
    func_879();
    EffectModuleImpl(0x2733, 0, 0);
}

void func_890(int arg0)
{
    int var1;
    int var2;
    float var3;
    var1 = WorkModuleImpl.get_int(0x10000064);
    if (var1 == 0xffffffff)
    {
        var1 = 0xd3;
    }
    if (WorkModuleImpl.is_flag(0x20000076))
    {
        WorkModuleImpl.set_int(0xffffffff, 0x1100000f);
    }
    if (global5 == 0x4c && arg0 == 0 && StopModuleImpl(0) == 0x1)
    {
        WorkModuleImpl.set_int(var1, 0x1100000d);
    }
    else if (WorkModuleImpl.is_flag(0x2100001b) == 0x1 && arg0 == 0 && StopModuleImpl(0) == 0x1)
    {
        WorkModuleImpl.set_int(var1, 0x1100000d);
        if (FighterUtil.is_body_up() == 0x1)
        {
            var1 = 0xd8;
        }
        else
        {
            var1 = 0xe2;
        }
        var2 = 0;
        if (WorkModuleImpl.is_flag(0x20000076))
        {
            if (global1 == 0x8)
            {
                var2 = 0x1;
            }
        }
        if (var2 == 0x1)
        {
            printf("1");
            func_22(var1, 1.0f, 1.0f);
        }
        else
        {
            func_22(var1, 0, 1.0f);
        }
    }
    else if (StopModuleImpl(0) == 0x1)
    {
        WorkModuleImpl.set_float(0 + 0, 0x1000007);
        WorkModuleImpl.set_int(var1, 0x1100000d);
        var1 = func_875();
        var3 = (float)WorkModuleImpl.get_int(0x120000f9);
        if (WorkModuleImpl.is_flag(0x20000076) && global19 == 0)
        {
            WorkModuleImpl.set_int(var1, 0x1100000f);
            var1 = 0xc4;
            WorkModuleImpl.on_flag2(0x20000077);
        }
        func_29(var1, 0, 1.0f, var3);
    }
    else
    {
        func_22(var1, 0, 1.0f);
        WorkModuleImpl.on_flag2(0x21000017);
        FighterUtil(0x5);
    }
    func_881();
    if (WorkModuleImpl.is_flag(0x20000076))
    {
        WorkModuleImpl.set_int(0xffffffff, 0x1100000d);
        WorkModuleImpl.set_float(MotionModuleImplFloat(0x9) + 0, 0x100000d);
        MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x20001ec));
    }
    func_880();
}

void func_891()
{
    func_884();
    if (WorkModuleImpl.is_flag(0x21000017) == 0x1)
    {
        FighterUtil(0x5);
    }
}

void func_892()
{
    func_860();
    if (WorkModuleImpl.is_flag(0x21000017) == 0x1)
    {
        FighterUtil(0x5);
    }
}

void func_893()
{
    func_889();
    FighterUtil(0x6, 0);
    EffectModuleImpl(0x2733, 0, 0);
}

void func_894()
{
    int var0;
    float var1;
    if (global5 == 0xbc)
    {
        var0 = WorkModuleImpl.get_int(0x12000250);
        WorkModuleImpl.set_int(var0, 0x11000002);
        var1 = WorkModuleImplFloat.get_float(0x2000251);
        KineticModuleImpl.set_speed(0x1, -var1);
    }
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        var0 = WorkModuleImpl.get_int(0x12000225);
        WorkModuleImpl.set_int(var0, 0x1000001d);
    }
    else if (WorkModuleImpl.is_flag(0x20000032))
    {
        func_895(0);
    }
    else
    {
        func_895(0x1);
    }
    ControlModuleImpl(0x2718, 0x9, 0);
}

void func_895(int arg0)
{
    if (arg0 == 0x1)
    {
        if (!(WorkModuleImpl.is_flag(0x2100000e) || WorkModuleImpl.is_flag(0x2000001b)) && WorkModuleImpl.get_int(0x11000002) <= 0)
        {
            WorkModuleImpl.strans_group_on(0x1f00000a);
            WorkModuleImpl.strans_group_on(0x1f00000b);
            WorkModuleImpl.strans_group_on(0x1f00000e);
            WorkModuleImpl.strans_group_on(0x1f000010);
            WorkModuleImpl.strans_group_on(0x1f000011);
            WorkModuleImpl.strans_group_on(0x1f00000d);
            WorkModuleImpl.on_flag2(0x2100000e);
        }
    }
    else if (WorkModuleImpl.is_flag(0x2100000e))
    {
        WorkModuleImpl.strans_group_off(0x1f00000a);
        WorkModuleImpl.strans_group_off(0x1f00000b);
        WorkModuleImpl.strans_group_off(0x1f00000e);
        WorkModuleImpl.strans_group_off(0x1f000010);
        WorkModuleImpl.strans_group_off(0x1f000011);
        WorkModuleImpl.strans_group_off(0x1f00000d);
        WorkModuleImpl.off_flag2(0x2100000e);
    }
}

void func_896()
{
    if (func_58())
    {
        return 0x1;
    }
    if (func_59())
    {
        return 0x1;
    }
    if (func_63())
    {
        return 0x1;
    }
    if (func_66())
    {
        return 0x1;
    }
    if (func_67())
    {
        return 0x1;
    }
    if (func_62())
    {
        return 0x1;
    }
}

void func_897()
{
    if (!global3)
    {
        func_899();
    }
}

void func_898()
{
    FighterUtil(0x1);
}

void func_899()
{
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        if (ControlModuleImpl(0x2710, 0) || ControlModuleImpl(0x2710, 0x1))
        {
            ControlModuleImpl(0x271b);
            func_16(0xd8, 0x1);
            return;
        }
        else
        {
            func_895(0);
        }
    }
    else if (WorkModuleImpl.is_flag(0x20000032))
    {
        if (func_1459())
        {
            return;
        }
        func_895(0);
    }
    else
    {
        FighterUtil.check_cloud_through_out();
        func_895(0x1);
    }
}

int func_900()
{
    StatusModuleImpl(0x5, 0x2, 0x24, 0x5, 0, 0x1, 0x1404000, 0x12, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x4, 0, 0);
    return 0;
}

void func_901()
{
    WorkModuleImpl.inc_int(0x10000043);
    WorkModuleImpl.strans_on(0x1e00000d);
    WorkModuleImpl.strans_on(0x1e000005);
    WorkModuleImpl.strans_on(0x1e000008);
    WorkModuleImpl.strans_on(0x1e000009);
    if (WorkModuleImpl.is_flag(0x21000018) == 0)
    {
        WorkModuleImpl.strans_on(0x1e000017);
        WorkModuleImpl.strans_on(0x1e000016);
        WorkModuleImpl.strans_on(0x1e000015);
        WorkModuleImpl.strans_on(0x1e000018);
        WorkModuleImpl.strans_on(0x1e000014);
        WorkModuleImpl.strans_on(0x1e000013);
    }
    else
    {
        WorkModuleImpl.strans_off(0x1e000017);
        WorkModuleImpl.strans_off(0x1e000016);
        WorkModuleImpl.strans_off(0x1e000015);
        WorkModuleImpl.strans_off(0x1e000018);
        WorkModuleImpl.strans_off(0x1e000014);
        WorkModuleImpl.strans_off(0x1e000013);
    }
    func_800();
    func_78(func_902);
}

void func_902()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x10000064);
    if (var0 == 0xffffffff)
    {
        var0 = 0x2e;
    }
    if (WorkModuleImpl.check_strans(0x1e000005) == 0x1 && MotionModuleImpl.get_motion() != var0 && MotionModuleImpl.is_end() == 0x1)
    {
        func_22(var0, 0, 1.0f);
        if (0x2 != global1 && 0 != global1 && 0x1 != global1 && 0xc != global1 && 0x23 != global1 && 0xe != global1 && 0x13 != global1 && 0x18 != global1 && 0x1b != global1 && 0x1e != global1 && 0x1d != global1 && 0x21 != global1 && 0x22 != global1 && 0x26 != global1 && 0x27 != global1 && 0x28 != global1 && 0x29 != global1 && 0x2a != global1 && 0x2f != global1 && 0x30 != global1 && 0x32 != global1 && 0xf != global1 && 0xd != global1 && 0x10 != global1)
        {
            MotionModuleImpl(0x36, 0x1);
            WorkModuleImpl.on_flag2(0x20000072);
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000005) == 0x1 && MotionModuleImpl.get_motion() == var0 && WorkModuleImpl.is_flag(0x2100000e) == 0x1)
    {
        func_16(0x4c, 0);
        return;
    }
    if (func_805() == 0x1)
    {
        return;
    }
    if (func_807() == 0x1)
    {
        return;
    }
    if (func_808() == 0x1)
    {
        return;
    }
    if (func_806() == 0x1)
    {
        return;
    }
}

void func_903()
{
    func_782();
    WorkModuleImpl.off_flag2(0x21000018);
    if (WorkModuleImpl.is_flag(0x20000072) && 0x4c != global6)
    {
        MotionModuleImpl(0x36, 0);
        WorkModuleImpl.off_flag2(0x20000072);
    }
}

void func_904(int arg0)
{
    int var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    var1 = GroundModuleImpl(0xa);
    if (var1 != 0)
    {
        if (var1 & 0x8)
        {
            var2 = GroundModuleImplFloat(0x3, 0x8);
            var3 = GroundModuleImplFloat(0x4, 0x8);
            var4 = GroundModuleImplFloat(0x5, 0x8);
            var5 = GroundModuleImplFloat(0x6, 0x8);
        }
        else if (var1 & 0x1)
        {
            var2 = GroundModuleImplFloat(0x3, 0x1);
            var3 = GroundModuleImplFloat(0x4, 0x1);
            var4 = GroundModuleImplFloat(0x5, 0x1);
            var5 = GroundModuleImplFloat(0x6, 0x1);
        }
        else if (var1 & 0x2)
        {
            var2 = GroundModuleImplFloat(0x3, 0x2);
            var3 = GroundModuleImplFloat(0x4, 0x2);
            var4 = GroundModuleImplFloat(0x5, 0x2);
            var5 = GroundModuleImplFloat(0x6, 0x2);
        }
        else if (var1 & 0x4)
        {
            var2 = GroundModuleImplFloat(0x3, 0x4);
            var3 = GroundModuleImplFloat(0x4, 0x4);
            var4 = GroundModuleImplFloat(0x5, 0x4);
            var5 = GroundModuleImplFloat(0x6, 0x4);
        }
        var6 = Math.atan2(-var4, var5);
        EffectModuleImpl(0x3, 0x1000008, var2, var3, GroundModuleImplFloat(0xc), 0, 0, var6, 1.0f, 0, 0xffffffff);
        if (arg0)
        {
            CameraModuleImpl(0x3, 0x3, var2, var3, 0);
        }
    }
}

void func_905()
{
    float var0;
    int var1;
    var0 = (float)WorkModuleImpl.get_int(0x1000003e);
    var1 = (int)(var0 * WorkModuleImplFloat.get_float(0x2000112));
    func_781();
    WorkModuleImpl.set_int(var1, 0x1000003e);
    WorkModuleImpl.on_flag2(0x2000005c);
    WorkModuleImpl.set_int(0, 0x1000003f);
    GroundModuleImpl(0x2712, 0x1);
}

void func_906()
{
    float var0;
    float var1;
    float var2;
    int var3;
    int var4;
    int var5;
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x2);
    var1 = KineticModuleImplFloat.get_sum_speed_y(0x2);
    func_905();
    if (GroundModuleImpl(0x2722, 0x4) == 0x1)
    {
        var2 = -1.0f;
    }
    else
    {
        var2 = 1.0f;
    }
    if (PostureModuleImplFloat.get_lr() * var2 > 0)
    {
        var3 = 0xfe;
        if (func_13(var0) > 3.0f)
        {
            if (Math.randf() < 0.30000001192092896f)
            {
                var4 = WorkModuleImpl.get_int(0x10000064);
                if (var4 != 0xffffffff)
                {
                    var3 = var4;
                }
                else
                {
                    var3 = 0x2e;
                }
            }
        }
        func_22(var3, 0, 1.0f);
        if (var3 == 0xfe)
        {
            FighterUtil.adjust_wall(var2, var2, 1.0f, 0x1);
        }
        else
        {
            PostureModuleImpl.set_lr(var2);
            PostureModuleImpl.update_rot_y();
        }
    }
    else
    {
        GroundModuleImpl(0x2717, 0xb, 0x1);
        func_22(0xd0, 0, 1.0f);
    }
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x2000110) + 0, 0x100000e);
    if (var2 == -1.0f)
    {
        var5 = 0x1;
    }
    else
    {
        var5 = 0x2;
    }
    WorkModuleImpl.set_int(var5, 0x11000001);
    HitModuleImpl(0x2, WorkModuleImpl.get_int(0x1200010c));
    func_904(0x1);
    ControlModuleImpl(0x2718, 0x8, 0);
    if (WorkModuleImpl.is_flag(0x21000015))
    {
        WorkModuleImpl.set_float(MotionModuleImplFloat(0x9) + 0, 0x100000c);
        MotionModuleImpl.set_motion_rate(0);
    }
}

void func_907()
{
    float var0;
    int var1;
    func_884();
    var0 = WorkModuleImplFloat.get_float(0x100000e);
    if (var0 > 0)
    {
        var0 -= 1.0f;
        WorkModuleImpl.set_float(var0 + 0, 0x100000e);
    }
    if (WorkModuleImpl.is_flag(0x21000015))
    {
        var1 = WorkModuleImpl.get_int(0x1100000c);
        if (var1 > 0)
        {
            var1--;
            WorkModuleImpl.set_int(var1, 0x1100000c);
        }
        if (var1 <= 0)
        {
            func_782();
        }
    }
}

int func_908()
{
    StatusModuleImpl(0x5, 0x2, 0x25, 0x5, 0, 0x1, 0x1404000, 0x12, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x4, 0, 0);
    return 0;
}

void func_909()
{
    float var0;
    float var1;
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x2);
    func_905();
    func_22(0x100, 0, 1.0f);
    var1 = PostureModuleImplFloat.get_lr();
    FighterUtil(0x4, var1, 0x1);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x2000110) + 0, 0x100000e);
    WorkModuleImpl.set_int(0x3, 0x11000001);
    WorkModuleImpl.set_int(0, 0x10000043);
    HitModuleImpl(0x2, WorkModuleImpl.get_int(0x1200010c));
    func_904(0x1);
    ControlModuleImpl(0x2718, 0x8, 0);
    if (WorkModuleImpl.is_flag(0x21000015))
    {
        WorkModuleImpl.set_float(MotionModuleImplFloat(0x9) + 0, 0x100000c);
        MotionModuleImpl.set_motion_rate(0);
    }
}

void func_910()
{
    WorkModuleImpl.inc_int(0x10000043);
    WorkModuleImpl.strans_on(0x1e00000d);
    WorkModuleImpl.strans_on(0x1e000005);
    WorkModuleImpl.strans_on(0x1e000006);
    WorkModuleImpl.strans_on(0x1e000007);
    WorkModuleImpl.strans_on(0x1e000009);
    if (WorkModuleImpl.is_flag(0x21000018) == 0)
    {
        WorkModuleImpl.strans_on(0x1e000017);
        WorkModuleImpl.strans_on(0x1e000016);
        WorkModuleImpl.strans_on(0x1e000015);
        WorkModuleImpl.strans_on(0x1e000018);
        WorkModuleImpl.strans_on(0x1e000014);
        WorkModuleImpl.strans_on(0x1e000013);
    }
    else
    {
        WorkModuleImpl.strans_off(0x1e000017);
        WorkModuleImpl.strans_off(0x1e000016);
        WorkModuleImpl.strans_off(0x1e000015);
        WorkModuleImpl.strans_off(0x1e000018);
        WorkModuleImpl.strans_off(0x1e000014);
        WorkModuleImpl.strans_off(0x1e000013);
    }
    func_800();
    func_78(func_911);
}

void func_911()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x10000064);
    if (var0 == 0xffffffff)
    {
        var0 = 0x2e;
    }
    if (WorkModuleImpl.check_strans(0x1e000005) == 0x1 && MotionModuleImpl.get_motion() != var0 && MotionModuleImpl.is_end() == 0x1)
    {
        func_22(var0, 0, 1.0f);
    }
    if (WorkModuleImpl.check_strans(0x1e000005) == 0x1 && MotionModuleImpl.get_motion() == var0 && WorkModuleImpl.is_flag(0x2100000e) == 0x1)
    {
        func_16(0x4c, 0);
        return;
    }
    if (func_805() == 0x1)
    {
        return;
    }
    if (func_808() == 0x1)
    {
        return;
    }
    if (func_806() == 0x1)
    {
        return;
    }
}

void func_912()
{
    func_782();
    WorkModuleImpl.off_flag2(0x21000018);
}

int func_913()
{
    StatusModuleImpl(0x5, 0x2, 0x55, 0x5, 0, 0x1, 0x1404000, 0x12, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x4, 0, 0);
    return 0;
}

void func_914()
{
    int var0;
    func_905();
    if (FighterUtil.is_body_up() == 0x1)
    {
        var0 = 0xd5;
    }
    else
    {
        var0 = 0xdf;
    }
    func_22(var0, 0, 1.0f);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x2000110) + 0, 0x100000e);
    WorkModuleImpl.set_int(0x4, 0x11000001);
    WorkModuleImpl.set_int(0, 0x10000043);
    HitModuleImpl(0x2, WorkModuleImpl.get_int(0x1200010c));
    ControlModuleImpl(0x2718, 0x8, 0);
}

void func_915()
{
    WorkModuleImpl.inc_int(0x10000043);
    WorkModuleImpl.strans_on(0x1e00000d);
    WorkModuleImpl.strans_on(0x1e000005);
    WorkModuleImpl.strans_on(0x1e000006);
    WorkModuleImpl.strans_on(0x1e000007);
    WorkModuleImpl.strans_on(0x1e000008);
    if (WorkModuleImpl.is_flag(0x21000018) == 0)
    {
        WorkModuleImpl.strans_on(0x1e000017);
        WorkModuleImpl.strans_on(0x1e000016);
        WorkModuleImpl.strans_on(0x1e000015);
        WorkModuleImpl.strans_on(0x1e000018);
        WorkModuleImpl.strans_on(0x1e000014);
        WorkModuleImpl.strans_on(0x1e000013);
    }
    else
    {
        WorkModuleImpl.strans_off(0x1e000017);
        WorkModuleImpl.strans_off(0x1e000016);
        WorkModuleImpl.strans_off(0x1e000015);
        WorkModuleImpl.strans_off(0x1e000018);
        WorkModuleImpl.strans_off(0x1e000014);
        WorkModuleImpl.strans_off(0x1e000013);
    }
    WorkModuleImpl.off_flag2(0x20000003);
    func_800();
    func_78(func_916);
}

void func_916()
{
    float var0;
    float var1;
    float var2;
    int var3;
    if (WorkModuleImpl.check_strans(0x1e000005) == 0x1 && MotionModuleImpl.is_end() == 0x1 && WorkModuleImpl.is_flag(0x2100000e) == 0x1)
    {
        func_16(0x4c, 0);
        return;
    }
    if (func_805() == 0x1)
    {
        return;
    }
    if (func_806() == 0x1)
    {
        return;
    }
    if (func_807() == 0x1)
    {
        return;
    }
    if (global9 == 1.0f)
    {
        var0 = KineticModuleImplFloat.get_damage_speed_x(0x4);
        var1 = KineticModuleImplFloat.get_damage_speed_y(0x4);
        var2 = Math.atan2(var1, var0);
        if (var2 > BattleObjectParamFloat(0, 0x200001f) && var2 < BattleObjectParamFloat(0, 0x2000020))
        {
            var3 = 0xd2;
        }
        else
        {
            var3 = 0xd0;
        }
        func_22(var3, 0, 1.0f);
        func_866(var3);
    }
}

void func_917()
{
    WorkModuleImpl.off_flag2(0x21000018);
}

void func_918()
{
    int var0;
    int var1;
    int var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    int var8;
    var0 = DamageModuleImpl.get_damage_level();
    var1 = DamageModuleImpl(0x3);
    if (var0 == 0x2)
    {
        if (var1 == 0x2)
        {
            var2 = 0xc5;
        }
        else if (var1 == 0x1)
        {
            var2 = 0xc8;
        }
        else
        {
            var2 = 0xcb;
        }
    }
    else if (var0 == 0x1)
    {
        if (var1 == 0x2)
        {
            var2 = 0xc4;
        }
        else if (var1 == 0x1)
        {
            var2 = 0xc7;
        }
        else
        {
            var2 = 0xca;
        }
    }
    else if (var1 == 0x2)
    {
        var2 = 0xc3;
    }
    else if (var1 == 0x1)
    {
        var2 = 0xc6;
    }
    else
    {
        var2 = 0xc9;
    }
    func_22(var2, 0, 1.0f);
    var3 = 0;
    if (GroundModuleImpl(0x2722, 0x8))
    {
        var4 = GroundModuleImplFloat(0x5, 0x8);
        var5 = GroundModuleImplFloat(0x6, 0x8);
        var3 = Math.atan2(var4, var5);
    }
    var6 = GroundModuleImplFloat(0x3, 0x8);
    var7 = GroundModuleImplFloat(0x4, 0x8);
    var8 = EffectModuleImpl(0x3, 0x1000044, var6, var7, GroundModuleImplFloat(0xc), 0, 0, -var3, 1.0f, 0, 0xffffffff);
    WorkModuleImpl.set_int(var8, 0x11000003);
}

void func_919()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000003);
    EffectModuleImpl(0x8, var0, 0x1, 0x1);
    func_861();
}

int func_920()
{
    StatusModuleImpl(0x5, 0, 0xffffffff, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0x1, 0, 0, 0x10000, 0, 0);
    return 0;
}

void func_921()
{
    func_960();
    WorkModuleImpl.off_flag2(0x20000003);
    func_78(func_922);
}

void func_922()
{
    func_961();
    if (GroundModuleImpl(0x2722, 0x8))
    {
        KineticModuleImpl.change_kinetic_type(0x6);
    }
}

void func_923()
{
    if (global6 != 0xc2)
    {
        WorkModuleImpl.off_flag2(0x20000066);
    }
}

int func_924()
{
    StatusModuleImpl(0x5, 0, 0xffffffff, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0x1, 0, 0, 0x10000, 0, 0);
    return 0;
}

void func_925()
{
    func_921();
    func_78(func_926);
}

void func_926()
{
    func_922();
}

void func_927()
{
    
}

int func_928()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0x1, 0, 0, 0x10000, 0, 0);
    return 0;
}

void func_929()
{
    func_960();
    func_78(func_930);
}

void func_930()
{
    func_961();
}

void func_931()
{
    
}

int func_932()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 2.0f, 0, 0x8000, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0x1, 0, 0, 0x10000, 0, 0);
    return 0;
}

void func_933()
{
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x200005b), 0x100000f);
    if (global5 == 0x52)
    {
        WorkModuleImpl.on_flag2(0x21000021);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x21000021);
    }
    if (global5 == 0x80)
    {
        func_22(0xe0, 0, 1.0f);
    }
    else if (WorkModuleImpl.is_flag2(0x2100001e))
    {
        func_22(0xd6, 0, 1.0f);
    }
    else
    {
        func_22(0xe0, 0, 1.0f);
    }
    func_962();
    func_78(func_934);
}

void func_934()
{
    if (func_963())
    {
        return;
    }
}

void func_935()
{
    
}

int func_936()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 2.0f, 0, 0x8000, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0x1, 0, 0, 0x10000, 0, 0);
    return 0;
}

void func_937()
{
    if (WorkModuleImpl.is_flag2(0x2100001e))
    {
        func_22(0xd6, 0, 1.0f);
    }
    else
    {
        func_22(0xe0, 0, 1.0f);
    }
    func_962();
    func_78(func_938);
}

void func_938()
{
    if (func_963())
    {
        return;
    }
}

void func_939()
{
    
}

int func_940()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 2.0f, 0, 0x8000, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_941()
{
    if (WorkModuleImpl.is_flag2(0x2100001e))
    {
        func_22(0xda, 0, 1.0f);
    }
    else
    {
        func_22(0xe4, 0, 1.0f);
    }
    func_78(func_942);
}

void func_942()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
}

void func_943()
{
    
}

int func_944()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 2.0f, 0, 0x8000, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x80000, 0, 0x1);
    return 0;
}

void func_945()
{
    int var0;
    var0 = ControlModuleImpl(0x1b);
    if (var0 != 0)
    {
        if (var0 == 0x1)
        {
            if (WorkModuleImpl.is_flag2(0x2100001e))
            {
                func_22(0xdc, 0, 1.0f);
            }
            else
            {
                func_22(0xe6, 0, 1.0f);
            }
        }
        else if (WorkModuleImpl.is_flag2(0x2100001e))
        {
            func_22(0xdd, 0, 1.0f);
        }
        else
        {
            func_22(0xe7, 0, 1.0f);
        }
    }
    else if (func_88() >= (float)0)
    {
        if (WorkModuleImpl.is_flag2(0x2100001e))
        {
            func_22(0xdc, 0, 1.0f);
        }
        else
        {
            func_22(0xe6, 0, 1.0f);
        }
    }
    else if (WorkModuleImpl.is_flag2(0x2100001e))
    {
        func_22(0xdd, 0, 1.0f);
    }
    else
    {
        func_22(0xe7, 0, 1.0f);
    }
    ControlModuleImpl(0x1c);
    func_78(func_946);
}

void func_946()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
}

void func_947()
{
    
}

int func_948()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 2.0f, 0, 0x8000, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0x452, 0, 0x20, 0x400);
    return 0;
}

void func_949()
{
    if (WorkModuleImpl.is_flag2(0x2100001e))
    {
        func_22(0xdb, 0, 1.0f);
    }
    else
    {
        func_22(0xe5, 0, 1.0f);
    }
    func_78(func_950);
}

void func_950()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
}

void func_951()
{
    
}

int func_952()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x4, 0x1, -2.0f, 0, 0x8000, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0x10004, 0, 0);
    return 0;
}

void func_953()
{
    WorkModuleImpl.strans_on(0x1e000005);
    WorkModuleImpl.strans_on(0x1e000002);
    WorkModuleImpl.strans_on(0x1e00000f);
    WorkModuleImpl.strans_on(0x1e00000e);
    if (WorkModuleImpl.is_flag2(0x2100001f))
    {
        if (WorkModuleImpl.is_flag2(0x2100001e))
        {
            func_22(0xd8, 0, 1.0f);
        }
        else
        {
            func_22(0xe2, 0, 1.0f);
        }
    }
    else if (WorkModuleImpl.is_flag2(0x2100001e))
    {
        func_22(0xd7, 0, 1.0f);
    }
    else
    {
        func_22(0xe1, 0, 1.0f);
    }
    if (!StopModuleImpl(0x1))
    {
        func_965();
    }
    global16 = func_965;
    func_966();
    PhysicsModuleImpl(0x9);
    func_78(func_954);
}

void func_954()
{
    if (!WorkModuleImpl.is_flag2(0x21000022))
    {
        if (WorkModuleImpl.check_strans(0x1e000005))
        {
            if (global18 == 0x2)
            {
                func_16(0x4c, 0);
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
                func_16(0x4c, 0);
                return;
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00000f))
    {
        if (global18 == 0)
        {
            if (MotionModuleImpl.is_end())
            {
                if (!WorkModuleImpl.is_flag2(0x2000001b))
                {
                    if (WorkModuleImplFloat.get_float(0x100000f) <= (float)0)
                    {
                        func_16(0x54, 0);
                        return;
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00000e))
    {
        if (global18 == 0)
        {
            if (MotionModuleImpl.is_end())
            {
                func_16(0x51, 0);
                return;
            }
        }
    }
    func_967();
    if (StatusModuleImpl(0x6) == 0x1 || global18 == 0 && global19 != 0 || global18 == 0x2 && global19 == 0)
    {
        if (StatusModuleImpl(0x6) != 0x1)
        {
            WorkModuleImpl.on_flag2(0x21000023);
        }
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x1);
            if (WorkModuleImpl.is_flag2(0x21000023))
            {
                KineticModuleImpl.change_kinetic_type(0x6);
            }
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
            if (WorkModuleImpl.is_flag2(0x21000023))
            {
                KineticModuleImpl.change_kinetic_type(0xa);
            }
        }
    }
}

void func_955()
{
    
}

int func_956()
{
    StatusModuleImpl(0x5, 0x2, 0x24, 0x5, 0x4, 0x1, -2.0f, 0x2, 0x8000, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0x4, 0, 0);
    return 0;
}

void func_957()
{
    WorkModuleImpl.strans_on(0x1e000005);
    WorkModuleImpl.strans_on(0x1e00000d);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_958);
}

void func_958()
{
    if (WorkModuleImpl.check_strans(0x1e000005))
    {
        if (MotionModuleImpl.is_end())
        {
            func_16(0x4c, 0);
            return;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e00000d))
    {
        if (global18 == 0)
        {
            func_16(0x4f, 0);
            return;
        }
    }
}

void func_959()
{
    
}

void func_960()
{
    func_22(WorkModuleImpl.get_int(0x11000010), 0, 1.0f);
    func_966();
    PhysicsModuleImpl(0x9);
}

void func_961()
{
    if (!GroundModuleImpl(0x2722, 0x8))
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global38 & 0x1 || global38 & 0x4)
        {
            if (global18 == 0)
            {
                func_16(0x56, 0x1);
                return 0x1;
            }
        }
    }
    if (MotionModuleImpl.is_end())
    {
        if (func_84() >= WorkModuleImplFloat.get_float(0x200005d))
        {
            if (ControlModuleImpl(0x271d))
            {
                if (global18 == 0)
                {
                    func_16(0x55, 0x1);
                    return 0x1;
                }
            }
        }
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0x50, 0);
            return 0x1;
        }
    }
    func_967();
}

void func_962()
{
    if (!WorkModuleImpl.is_flag2(0x2000001b))
    {
        if (JostleModuleImpl(0x2713, 0x4))
        {
            JostleModuleImpl(0x2711, 0x4, 0x1);
        }
        if (!StopModuleImpl(0x1))
        {
            func_964();
        }
        global16 = func_964;
    }
    PhysicsModuleImpl(0x9);
}

void func_963()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (!WorkModuleImpl.is_flag2(0x2000001b))
    {
        if (ItemModuleImpl(0) && ItemModuleImpl(0x22) && ItemModuleImpl(0x2, 0x2000) && global38 & 0x1 && global18 == 0)
        {
            func_16(0x52, 0x1);
            return 0x1;
        }
        if (global38 & 0x1 || global38 & 0x4)
        {
            if (global18 == 0)
            {
                func_16(0x56, 0x1);
                return 0x1;
            }
        }
        if (global31 & 0x80)
        {
            if (global18 == 0)
            {
                func_16(0x55, 0x1);
                return 0x1;
            }
        }
        if (global31 & 0x100)
        {
            if (global18 == 0)
            {
                func_16(0x54, 0x1);
                return 0x1;
            }
        }
        if (WorkModuleImplFloat.get_float(0x100000f) <= (float)0)
        {
            if (global18 == 0)
            {
                func_16(0x54, 0);
                return 0x1;
            }
        }
    }
}

void func_964()
{
    WorkModuleImpl.sub_float(1.0f, 0x100000f);
}

void func_965()
{
    func_964();
}

void func_966()
{
    WorkModuleImpl.strans_on(0x1e000006);
    WorkModuleImpl.strans_on(0x1e000007);
    WorkModuleImpl.strans_on(0x1e000011);
    WorkModuleImpl.strans_on(0x1e000012);
}

void func_967()
{
    if (WorkModuleImpl.check_strans(0x1e000006))
    {
        if (global18 == 0x2)
        {
            if (GroundModuleImpl(0x2722, 0x2))
            {
                if (-func_92() > WorkModuleImplFloat.get_float(0x200010b))
                {
                    if (WorkModuleImpl.get_int(0x11000001) != 0x2)
                    {
                        func_16(0x49, 0);
                        return;
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000007))
    {
        if (global18 == 0x2)
        {
            if (GroundModuleImpl(0x2722, 0x4))
            {
                if (func_92() > WorkModuleImplFloat.get_float(0x200010b))
                {
                    if (WorkModuleImpl.get_int(0x11000001) != 0x1)
                    {
                        func_16(0x49, 0);
                        return;
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000011))
    {
        if (global18 == 0)
        {
            if (GroundModuleImpl(0x2722, 0x2))
            {
                if (-func_92() > WorkModuleImplFloat.get_float(0x200010b))
                {
                    if (WorkModuleImpl.get_int(0x11000001) != 0x2)
                    {
                        func_16(0x58, 0);
                        return;
                    }
                }
            }
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000012))
    {
        if (global18 == 0)
        {
            if (GroundModuleImpl(0x2722, 0x4))
            {
                if (func_92() > WorkModuleImplFloat.get_float(0x200010b))
                {
                    if (WorkModuleImpl.get_int(0x11000001) != 0x1)
                    {
                        func_16(0x58, 0);
                        return;
                    }
                }
            }
        }
    }
}

void func_968()
{
    int var0;
    var0 = 0;
    if (FighterUtil.is_body_up())
    {
        var0 = 0xd5;
        WorkModuleImpl.on_flag(0x2100001e);
    }
    else
    {
        var0 = 0xdf;
        WorkModuleImpl.off_flag(0x2100001e);
    }
    WorkModuleImpl.set_int(var0, 0x11000010);
}

int func_969()
{
    StatusModuleImpl(0x5, 0xffffffff, 0xf, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0x1, 0, 0, 0x8, 0, 0);
    return 0;
}

void func_970()
{
    if (GroundModuleImpl(0x2722, 0x8))
    {
        func_20(0);
    }
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x200005b) + 0, 0x100000f);
    WorkModuleImpl.on_flag2(0x2100001e);
    func_22(0xe0, 0, 1.0f);
    func_962();
    func_78(func_971);
}

void func_971()
{
    if (func_963())
    {
        return;
    }
}

void func_972()
{
    
}

int func_973()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 2.0f, 0, 0x8000, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0x1, 0, 0, 0x10000, 0, 0);
    return 0;
}

void func_974()
{
    if (JostleModuleImpl(0x2713, 0x4))
    {
        JostleModuleImpl(0x2711, 0x4, 0x1);
    }
    if (WorkModuleImpl.is_flag2(0x2100001e))
    {
        func_22(0xd9, 0, 1.0f);
    }
    else
    {
        func_22(0xe3, 0, 1.0f);
    }
    if (!StopModuleImpl(0x1))
    {
        func_964();
    }
    global16 = func_964;
    PhysicsModuleImpl(0x9);
    func_78(func_975);
}

void func_975()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x50, 0);
        return;
    }
}

void func_976()
{
    
}

int func_977()
{
    if (func_548())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0x4, 0x1, 0x82, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x10, 0, 0);
    return 0;
}

int func_978()
{
    StatusModuleImpl(0x5, 0, func_559(), 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x10, 0, 0);
    return 0;
}

void func_979()
{
    WorkModuleImpl.strans_on(0x1e00001e);
    MotionModuleImpl(0x1, 0x2a, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_980);
}

void func_980()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_549())
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00001e) != 0 && global18 == 0)
    {
        func_16(0x19, 0);
        return 0x1;
    }
}

void func_981()
{
    func_983();
    func_78(func_984);
}

void func_982()
{
    func_983();
    func_78(func_987);
}

void func_983()
{
    if (func_109())
    {
        func_562();
    }
}

void func_984()
{
    func_986();
}

void func_985()
{
    if (func_109())
    {
        if (func_563() != 0)
        {
            return 0x1;
        }
    }
    else
    {
        if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
        {
            return;
        }
        if (MotionModuleImpl.is_end() != 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
}

void func_986()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    func_985();
}

void func_987()
{
    if (global18 == 0x2)
    {
        func_16(0x10, 0);
        return 0x1;
    }
    func_985();
}

void func_988()
{
    
}

void func_989()
{
    
}

void func_990()
{
    int var0;
    float var1;
    var0 = 0;
    if (MotionModuleImpl.is_exist(0xde) == 0x1)
    {
        var0 = 0xde;
        WorkModuleImpl.on_flag(0x2100001e);
    }
    else
    {
        var0 = 0xe8;
        WorkModuleImpl.off_flag(0x2100001e);
    }
    WorkModuleImpl.set_int(var0, 0x11000010);
    var1 = (float)MotionModuleImpl.get_end_frame(var0);
    WorkModuleImpl.set_float(var1, 0x100000e);
}

void func_991()
{
    if (global5 != 0x4d && global5 != 0x50 && global5 != 0x57)
    {
        WorkModuleImpl.off_flag(0x2100001e);
        WorkModuleImpl.off_flag(0x2100001f);
        WorkModuleImpl.set_float(0, 0x100000f);
    }
    func_865();
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x20);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0x21);
        WorkModuleImpl.on_flag(0x21000022);
    }
}

void func_992()
{
    func_868();
    if (WorkModuleImplFloat.get_float(0x100000f) > 0)
    {
        WorkModuleImpl.sub_float(1.0f, 0x100000f);
    }
}

void func_993()
{
    WorkModuleImpl.off_flag2(0x2000003c);
    if (global18 != 0x2)
    {
        WorkModuleImpl.off_flag2(0x20000011);
    }
}

void func_994()
{
    float var0;
    int var1;
    float var2;
    float var3;
    float var4;
    int var5;
    int var6;
    float var7;
    float var8;
    float var9;
    float var10;
    float var11;
    func_996();
    if (global4 == 0x58)
    {
        var0 = KineticModuleImplFloat.get_damage_speed_x();
        if (var0 < 0)
        {
            var1 = 0x1;
        }
        else
        {
            var1 = 0;
        }
        var2 = PostureModuleImplFloat.get_lr();
        if (var1 == 0x1)
        {
            var3 = -1.0f;
        }
        else
        {
            var3 = 1.0f;
        }
        if (var2 * var3 > 0)
        {
            func_22(0xfe, 0, 1.0f);
            FighterUtil.adjust_wall(var3, var3, 1.0f, 0);
        }
        else
        {
            GroundModuleImpl(0x2717, 0xb, 0x1);
            func_22(0xd0, 0, 1.0f);
        }
        var4 = WorkModuleImplFloat.get_float(0x2000110);
        WorkModuleImpl.set_float(var4, 0x100000e);
        if (var1 == 0x1)
        {
            WorkModuleImpl.set_int(0x1, 0x11000001);
        }
        else
        {
            WorkModuleImpl.set_int(0x2, 0x11000001);
        }
        var5 = WorkModuleImpl.get_int(0x1200010c);
        HitModuleImpl(0x2, var5);
        var6 = GroundModuleImpl(0xa);
        if (var6 != 0)
        {
            if (var6 & 0x8)
            {
                var7 = GroundModuleImplFloat(0x3, 0x8);
                var8 = GroundModuleImplFloat(0x4, 0x8);
                var9 = GroundModuleImplFloat(0x5, 0x8);
                var10 = GroundModuleImplFloat(0x6, 0x8);
            }
            else if (var6 & 0x1)
            {
                var7 = GroundModuleImplFloat(0x3, 0x1);
                var8 = GroundModuleImplFloat(0x4, 0x1);
                var9 = GroundModuleImplFloat(0x5, 0x1);
                var10 = GroundModuleImplFloat(0x6, 0x1);
            }
            else if (var6 & 0x2)
            {
                var7 = GroundModuleImplFloat(0x3, 0x2);
                var8 = GroundModuleImplFloat(0x4, 0x2);
                var9 = GroundModuleImplFloat(0x5, 0x2);
                var10 = GroundModuleImplFloat(0x6, 0x2);
            }
            else if (var6 & 0x4)
            {
                var7 = GroundModuleImplFloat(0x3, 0x4);
                var8 = GroundModuleImplFloat(0x4, 0x4);
                var9 = GroundModuleImplFloat(0x5, 0x4);
                var10 = GroundModuleImplFloat(0x6, 0x4);
            }
            var11 = Math.atan2(-var9, var10);
            EffectModuleImpl(0x3, 0x1000008, var7, var8, GroundModuleImplFloat(0xc), 0, 0, var11, 1.0f, 0, 0xffffffff);
            CameraModuleImpl(0x3, 0x3, var7, var8, 0);
        }
        ControlModuleImpl(0x2718, 0x8, 0);
    }
}

void func_995()
{
    func_997();
    if (WorkModuleImplFloat.get_float(0x100000e) > 0)
    {
        WorkModuleImpl.sub_float(1.0f, 0x100000e);
    }
}

void func_996()
{
    func_865();
}

void func_997()
{
    func_868();
}

void func_998()
{
    float var0;
    float var1;
    float var2;
    var0 = WorkModuleImplFloat.get_float(0x1000007);
    var1 = WorkModuleImplFloat.get_float(0x1000008);
    var1 *= func_13(var0);
    var2 = WorkModuleImplFloat.get_float(0x2000004);
    if (var1 > var2)
    {
        var1 = var2;
    }
    MotionModuleImpl.set_motion_rate(var1);
}

void func_999()
{
    float var0;
    float var1;
    if (global4 == 0x8b)
    {
        var0 = sys_40(0) * WorkModuleImplFloat.get_float(0x20000a6);
        func_22(0x127, 0, var0);
    }
    else if (global4 == 0x90)
    {
        KineticModuleImpl.change_kinetic_type(0xe);
        var1 = WorkModuleImplFloat.get_float(0x300003b);
        func_762(var1, 0x128, 0x1000007, 1.0f, 0x1000008, 0);
        func_998();
    }
}

void func_1000()
{
    float var0;
    float var1;
    if (global4 == 0x90)
    {
        var0 = WorkModuleImplFloat.get_float(0x1000007);
        var1 = WorkModuleImplFloat.get_float(0x300003b);
        func_774(var0, var1, WorkModuleImplFloat.get_float(0x3000039), WorkModuleImplFloat.get_float(0x300003a), WorkModuleImplFloat.get_float(0x2000002), 0x1000007, 1.0f, 0);
        func_998();
    }
}

void func_1001()
{
    if (global6 == 0x8b || global6 == 0x91 || global6 == 0x8e || global6 == 0x8f || global6 == 0x90)
    {
        
    }
    else if (ItemModuleImpl(0x4) != 0)
    {
        ItemModuleImpl(0x8);
    }
}

void func_1002()
{
    int var0;
    int var1;
    if (WorkModuleImpl.is_flag(0x21000010))
    {
        return;
    }
    if (sys_7(0x15))
    {
        if (WorkModuleImpl.get_int(0x1000001e) == 0xffffffff)
        {
            var0 = ItemModuleImpl(0x11);
            if (var0 == 0x31)
            {
                var1 = SoundModuleImpl(0x272a, 0x1);
                printf("**** hammer %d", var1);
                WorkModuleImpl.set_int(var1, 0x1000001e);
            }
            else if (var0 == 0x30)
            {
                var1 = SoundModuleImpl(0x272a, 0x2);
                printf("**** golden hammer %d", var1);
                WorkModuleImpl.set_int(var1, 0x1000001e);
            }
        }
        WorkModuleImpl.on_flag2(0x21000010);
    }
}

void func_1003()
{
    float var0;
    int var1;
    if (global4 == 0xd4)
    {
        var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        WorkModuleImpl.set_float(var0, 0x1000006);
    }
    if (FighterUtil(0xb, global5) == 0)
    {
        ItemModuleImpl(0x1c, 0);
        WorkModuleImpl.set_int(0, 0x11000004);
        WorkModuleImpl.set_int(0, 0x11000003);
        WorkModuleImpl.off_flag(0x2100000e);
        VisibilityModuleImpl(0x2714);
        if (ItemModuleImpl(0x11) == 0x31)
        {
            EffectModuleImpl(0x1f, 0x14, 0);
            var1 = ItemModuleImpl(0x1e, 0);
            WorkModuleImpl.set_int(var1, 0x11000003);
            if (WorkModuleImpl.is_flag(0x2000000c) == 0)
            {
                ItemModuleImpl(0x1d, 0x1);
            }
        }
        else
        {
            EffectModuleImpl(0x1f, 0x15, 0);
            ItemModuleImpl(0x1d, 0x1);
        }
        func_1002();
        ControlModuleImpl(0x19, 0x2, 0, 0, 0x1);
    }
}

void func_1004()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    int var8;
    int var9;
    float var10;
    float var11;
    float var12;
    int var13;
    if (global4 == 0xd4)
    {
        var0 = sys_40(0x2);
        var1 = WorkModuleImplFloat.get_float(0x3000003);
        var2 = WorkModuleImplFloat.get_float(0x3000001);
        var3 = WorkModuleImplFloat.get_float(0x3000002);
        var4 = WorkModuleImplFloat.get_float(0x2000002);
        var5 = WorkModuleImplFloat.get_float(0x1000006);
        func_774(var5, var1, var2, var3, var4, 0x1000006, var0, 0);
        var6 = sys_40(0x8);
        var7 = var1 - var6;
        var7 += 1.0f;
        printf("sub_uniq_process_hammer_exec_status $FL_hammer_speed_mul: %f", var7);
        KineticModuleImpl.set_speed(0, WorkModuleImplFloat.get_float(0x1000006) * var7, 0);
    }
    var8 = ItemModuleImpl(0x11) == 0x30;
    if (var8)
    {
        var9 = WorkModuleImpl.get_int(0x11000004);
        if (WorkModuleImpl.is_flag(0x2000000d) == 0)
        {
            if (ControlModuleImpl(0x2710, 0) || ControlModuleImpl(0x2710, 0x2) && global18 != 0)
            {
                var9 = WorkModuleImpl.get_int(0x1200022a) - WorkModuleImpl.get_int(0x11000006);
                var10 = PostureModuleImplFloat.get_pos_x();
                var11 = PostureModuleImplFloat.get_pos_y();
                var12 = PostureModuleImplFloat.get_pos_z();
                EffectModuleImpl(0x3, 0x100000a, var10, var11, var12, 0, 0, 0, 1.0f, 0, 0xffffffff);
            }
        }
        if (global18 == 0x2)
        {
            if (var9 > 0)
            {
                var9--;
                if (var9 <= 0)
                {
                    WorkModuleImpl.on_flag(0x2000000d);
                }
            }
            if (var9 > 0)
            {
                var13 = WorkModuleImpl.get_int(0x11000005);
                var13++;
                if (var13 > WorkModuleImpl.get_int(0x1200022b))
                {
                    var13 = 0;
                    WorkModuleImpl.inc_int(0x11000006);
                }
                WorkModuleImpl.set_int(var13, 0x11000005);
                KineticModuleImpl(0x2719, 0x1);
                KineticModuleImpl(0x2717, 0x1);
            }
            else
            {
                KineticModuleImpl(0x2718, 0x1);
            }
        }
        else if (var9 > 0)
        {
            var9--;
        }
        WorkModuleImpl.set_int(var9, 0x11000004);
        if (WorkModuleImpl.is_flag(0x2100000e) == 0)
        {
            var13 = WorkModuleImpl.get_int(0x1000001c);
            if (var13 < WorkModuleImpl.get_int(0x12000229))
            {
                WorkModuleImpl.on_flag(0x2100000e);
                EffectModuleImpl(0x1f, 0x16, 0);
            }
        }
    }
}

int func_1005()
{
    func_1002();
    if (global3 == 0)
    {
        if (func_1007() != 0)
        {
            return 0x1;
        }
    }
    if (func_1008() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1006()
{
    if (FighterUtil(0xb, global6) == 0)
    {
        if (ItemModuleImpl(0x11) == 0x31)
        {
            ItemModuleImpl(0x1d, 0x2);
            EffectModuleImpl(0x20, 0x14);
        }
        else
        {
            ItemModuleImpl(0x1d, 0x2);
            EffectModuleImpl(0x20, 0x15);
        }
        ControlModuleImpl(0x1a, 0x2, 0x1);
        EffectModuleImpl(0x2723, 0x100000b, 0, 0);
    }
}

void func_1007()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000003);
    if (var0 > 0)
    {
        var0--;
        if (var0 <= 0)
        {
            WorkModuleImpl.on_flag(0x2000000c);
            ItemModuleImpl(0x1d, 0);
        }
        WorkModuleImpl.set_int(var0, 0x11000003);
    }
    if (MotionModuleImpl(0xb) == 0x1)
    {
        sys_21(0xd, 0x2, 0x77, 0x1);
        ItemModuleImpl(0x28);
    }
}

void func_1008()
{
    
}

int func_1009()
{
    return 0x1;
}

int func_1010()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3ea, 0, 0);
    sys_21(0x8e, 0x1b);
    return 0;
}

void func_1011()
{
    int var0;
    var0 = global5;
    if (var0 != 0xda)
    {
        WorkModuleImpl.off_flag2(0x2100000d);
        WorkModuleImpl.off_flag2(0x2100000f);
        WorkModuleImpl.set_int(0, 0x11000002);
        WorkModuleImpl.set_int(0xce, 0x11000002);
    }
    else
    {
        
    }
}

int func_1012()
{
    if (!StatusModuleImpl(0x6))
    {
        if (global3 == 0)
        {
            if (func_1013() != 0)
            {
                return 0x1;
            }
        }
        if (func_1014() != 0)
        {
            return 0x1;
        }
    }
    return 0;
}

int func_1013()
{
    return 0;
}

int func_1014()
{
    if (LinkModuleImpl(0x2, 0))
    {
        LinkModuleImpl(0x2716, 0, 0);
    }
    sys_21(0x27);
    func_20(0x2);
    GroundModuleImpl(0x2710, 0);
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl(0x2);
    func_1016();
    return 0;
}

void func_1015()
{
    int var0;
    if (global6 == 0xda)
    {
        var0 = func_1018();
        WorkModuleImpl.set_int(var0, 0x11000003);
        if (MotionModuleImpl.get_motion() != 0xd0)
        {
            func_22(var0, 0, 1.0f);
        }
    }
    if (global6 == 0x44 || global6 == 0xda)
    {
        
    }
    else
    {
        printf("sub_uniq_process_link_final_exit capture cut");
        LinkModuleImpl(0xb);
        CaptureModuleImpl(0x5, 0);
        CaptureModuleImpl(0x1);
    }
}

void func_1016()
{
    int var0;
    var0 = func_1017();
    if (WorkModuleImpl.is_flag2(0x2100000f) == 0x1 || var0 == 0)
    {
        if (WorkModuleImpl.is_flag2(0x2100000f) == 0x1)
        {
            printf("sub_check_cancel FIGHTER_STATUS_LINK_FINAL_FLAG_ABORT");
        }
        printf("$is_link : %d", var0);
        if (global18 == 0)
        {
            printf("sub_check_cancel FIGHTER_STATUS_KIND_LANDING_LIGHT");
            func_16(0x17, 0);
            return;
        }
        else
        {
            printf("sub_check_cancel FIGHTER_STATUS_KIND_FALL");
            func_16(0xe, 0);
            return;
        }
    }
}

int func_1017()
{
    return sys_21(0x28);
}

int func_1018()
{
    int var0;
    int var1;
    var0 = 0x8;
    var1 = randint(0, var0);
    if (0 == var1)
    {
        return 0xc4;
    }
    else if (0x1 == var1)
    {
        return 0xc5;
    }
    else if (0x2 == var1)
    {
        return 0xc7;
    }
    else if (0x3 == var1)
    {
        return 0xc8;
    }
    else if (0x4 == var1)
    {
        return 0xca;
    }
    else if (0x5 == var1)
    {
        return 0xcb;
    }
    else if (0x6 == var1)
    {
        return 0xcd;
    }
    else if (0x7 == var1)
    {
        return 0xce;
    }
    return 0xc4;
}

int func_1019()
{
    StatusModuleImpl(0x5, 0, 0x34, 0x3, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0x1, 0, 0, 0, 0x10, 0, 0);
    return 0;
}

void func_1020()
{
    func_38();
    WorkModuleImpl(0x1b, 0x1e00003c);
}

int func_1021()
{
    float var0;
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (func_39())
    {
        return 0x1;
    }
    var0 = 0.75f;
    if (func_88() >= var0)
    {
        if (global18 == 0)
        {
            func_16(0x1, 0x1);
            return 0x1;
        }
    }
    return 0;
}

void func_1022()
{
    func_1020();
    func_22(0xfc, 0, 1.0f);
    func_78(func_1024);
}

void func_1023()
{
    func_1020();
    func_22(0xfd, 0, 1.0f);
    func_78(func_1025);
}

void func_1024()
{
    if (func_1021())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end() != 0)
    {
        func_16(0x7c, 0);
        return 0x1;
    }
}

void func_1025()
{
    if (func_1021())
    {
        return 0x1;
    }
    func_1028();
}

void func_1026()
{
    
}

void func_1027()
{
    float var0;
    float var1;
    float var2;
    if (global4 == 0x7b)
    {
        var0 = PostureModuleImplFloat.get_pos_x();
        var1 = PostureModuleImplFloat.get_pos_y();
        var2 = PostureModuleImplFloat.get_pos_z();
        PostureModuleImpl.set_pos(var0, var1, var2);
    }
}

void func_1028()
{
    if (!global3)
    {
        func_1030();
    }
}

void func_1029()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    var0++;
    WorkModuleImpl.set_int(0, 0x11000002);
}

void func_1030()
{
    int var0;
    int var1;
    int var2;
    var0 = global4;
    if (var0 == 0x7c)
    {
        var1 = global18;
        if (var1 == 0)
        {
            if (GroundModuleImpl(0x2726, 0.8600000143051147f) == 0)
            {
                var2 = WorkModuleImpl.get_int(0x11000002);
                if (GroundModuleImpl(0x2726, 2.75f) == 0 || var2 > 0x78)
                {
                    func_16(0, 0);
                }
            }
        }
    }
}

void func_1031()
{
    
}

int func_1032()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x5, 0x4000000, 0, 0x20000);
    return 0;
}

void func_1033()
{
    func_22(0x72, 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e000000);
}

void func_1034()
{
    ItemModuleImpl(0xf, 0);
    func_1033();
    func_78(func_1035);
}

void func_1035()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000000) == 0x1 && MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
}

void func_1036()
{
    
}

int func_1037()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0x4);
    StatusModuleImpl(0x2713, 0, 0, 0, 0x1, 0, 0, 0x4000002, 0, 0);
    return 0;
}

void func_1038()
{
    sys_3B(0x2710);
}

void func_1039()
{
    ItemModuleImpl(0xf, 0);
    func_22(0x75, 0, 1.0f);
    func_78(func_1041);
}

void func_1040()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0x3d, 0);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0x3a, 0);
        return;
    }
}

void func_1041()
{
    func_1040();
    if (global9 >= 1.0f && global18 == 0)
    {
        func_16(0x3a, 0);
    }
}

void func_1042()
{
    if (global6 != 0x3a)
    {
        sys_3B(0x2711);
    }
    if (WorkModuleImpl.is_flag(0x2100000d) == 0)
    {
        ModelModuleImpl(0x2, 0x1);
    }
}

void func_1043()
{
    if (global6 == 0x3a)
    {
        sys_21(0x2f);
    }
}

int func_1044()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x5, 0x4000000, 0, 0x20000);
    return 0;
}

void func_1045()
{
    func_22(0x73, 0, 1.0f);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000e2), 0x11000002);
    WorkModuleImpl.strans_on(0x1e000000);
    if (!StopModuleImpl(0x1))
    {
        func_1047();
    }
    global16 = func_1047;
}

void func_1046()
{
    ItemModuleImpl(0xf, 0);
    func_1045();
    func_78(func_1048);
}

void func_1047()
{
    if (WorkModuleImpl.get_int(0x11000002) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) <= WorkModuleImpl.get_int(0x120000e2) - 0x2)
        {
            if (WorkModuleImpl.check_strans(0x1e00006f) == 0)
            {
                WorkModuleImpl.strans_on(0x1e00006f);
            }
        }
        if (WorkModuleImpl.get_int(0x11000002) < 0)
        {
            WorkModuleImpl.strans_off(0x1e00006f);
        }
    }
}

void func_1048()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00006f) == 0x1 && func_88() <= WorkModuleImplFloat.get_float(0x2000014) && global18 == 0 && 0x1)
    {
        func_16(0x39, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000000) == 0x1 && MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
}

void func_1049()
{
    
}

int func_1050()
{
    StatusModuleImpl(0x5, 0, 0x49, 0x2, 0, 0x1, 0, 0, 0, 0x4);
    StatusModuleImpl(0x2713, 0, 0, 0, 0x1, 0, 0, 0x4000002, 0, 0);
    return 0;
}

void func_1051()
{
    ItemModuleImpl(0xf, 0);
    func_22(0x75, 0, 1.0f);
    func_78(func_1052);
}

void func_1052()
{
    func_1041();
}

void func_1053()
{
    func_1043();
}

int func_1054()
{
    StatusModuleImpl(0x5, 0, 0x7, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x5, 0x4000000, 0, 0x20000);
    return 0;
}

void func_1055()
{
    if (global5 == 0x8)
    {
        func_22(0x74, MotionModuleImplFloat.get_frame(), 1.0f);
    }
    else
    {
        func_22(0x74, 0, 1.0f);
    }
    PostureModuleImpl.reverse_lr();
    WorkModuleImpl.strans_on(0x1e000000);
}

void func_1056()
{
    ItemModuleImpl(0xf, 0);
    func_1055();
    func_78(func_1057);
}

void func_1057()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000000) == 0x1 && MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
}

void func_1058()
{
    if (global6 == 0x36)
    {
        PostureModuleImpl.update_rot_y();
    }
}

int func_1059()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0x4);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x4000002, 0, 0);
    return 0;
}

void func_1060()
{
    if (global5 == 0x36)
    {
        ControlModuleImpl(0x2718, 0x4, 0);
    }
}

void func_1061()
{
    ItemModuleImpl(0xf, 0);
    func_22(0x75, 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e00006a);
    WorkModuleImpl.strans_on(0x1e00006b);
    WorkModuleImpl.strans_on(0x1e00006c);
    func_78(func_1063);
}

int func_1062()
{
    if (global38 & 0x1 && global18 == 0)
    {
        func_16(0x3b, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00006a) == 0x1 && func_86() < WorkModuleImplFloat.get_float(0x2000007) && func_84() >= WorkModuleImplFloat.get_float(0x2000007) && global18 == 0)
    {
        WorkModuleImpl.set_int(0x1e00006a, 0x11000003);
        func_16(0x3e, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00006b) == 0x1 && ControlModuleImplFloat.get_stick_prev_y() < WorkModuleImplFloat.get_float(0x200003a) && global32 >= WorkModuleImplFloat.get_float(0x200003a) && global18 == 0)
    {
        WorkModuleImpl.set_int(0x1e00006b, 0x11000003);
        func_16(0x3e, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00006c) == 0x1 && ControlModuleImplFloat.get_stick_prev_y() > WorkModuleImplFloat.get_float(0x200003c) && global32 <= WorkModuleImplFloat.get_float(0x200003c) && global18 == 0)
    {
        WorkModuleImpl.set_int(0x1e00006c, 0x11000003);
        func_16(0x3e, 0x1);
        return 0x1;
    }
    return 0;
}

void func_1063()
{
    if (global18 == 0x2)
    {
        func_16(0x3d, 0);
        return;
    }
    if (StatusModuleImpl(0x6) == 0x1)
    {
        return;
    }
    func_1062();
}

void func_1064()
{
    if (global6 != 0x3a && global6 != 0x3b && global6 != 0x3c && global6 != 0x3e && global6 != 0xdc)
    {
        sys_3B(0x2711);
    }
}

void func_1065()
{
    if (global6 == 0x3e)
    {
        if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            if (func_84() >= WorkModuleImplFloat.get_float(0x2000007))
            {
                if (func_88() < 0)
                {
                    WorkModuleImpl.set_int(0x79, 0x11000002);
                }
                else
                {
                    WorkModuleImpl.set_int(0x78, 0x11000002);
                }
            }
            else if (global32 >= WorkModuleImplFloat.get_float(0x200003a))
            {
                WorkModuleImpl.set_int(0x7a, 0x11000002);
            }
            else if (global32 <= WorkModuleImplFloat.get_float(0x200003c))
            {
                WorkModuleImpl.set_int(0x7b, 0x11000002);
            }
            else
            {
                WorkModuleImpl.set_int(0x78, 0x11000002);
            }
        }
        else if (WorkModuleImpl.get_int(0x11000003) == 0x1e00006a)
        {
            if (func_88() > 0)
            {
                WorkModuleImpl.set_int(0x78, 0x11000002);
            }
            else
            {
                WorkModuleImpl.set_int(0x79, 0x11000002);
            }
        }
        else if (WorkModuleImpl.get_int(0x11000003) == 0x1e00006b)
        {
            WorkModuleImpl.set_int(0x7a, 0x11000002);
        }
        else
        {
            WorkModuleImpl.set_int(0x7b, 0x11000002);
        }
    }
}

int func_1066()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0x4);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0x482, 0x4000002, 0x1000, 0x40000);
    return 0;
}

void func_1067()
{
    ItemModuleImpl(0xf, 0);
    WorkModuleImpl.strans_on(0x1e00006a);
    WorkModuleImpl.strans_on(0x1e00006b);
    WorkModuleImpl.strans_on(0x1e00006c);
    func_22(0x76, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_1068();
    }
    global16 = func_1068;
    func_78(func_1069);
}

void func_1068()
{
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        func_1062();
    }
}

void func_1069()
{
    if (global18 == 0x2)
    {
        func_16(0x3d, 0);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0x3a, 0);
        return;
    }
}

void func_1070()
{
    func_1065();
}

int func_1071()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x4000000, 0, 0);
    return 0;
}

void func_1072()
{
    float var0;
    float var1;
    var0 = KineticModuleImplFloat.get_speed_x(0x3);
    var1 = KineticModuleImplFloat.get_speed_y(0x3);
    var0 += WorkModuleImplFloat.get_float(0x20000f0) * -PostureModuleImplFloat.get_lr();
    KineticModuleImpl.set_speed(0x3, var0, var1);
}

void func_1073()
{
    ItemModuleImpl(0xf, 0);
    func_22(0x77, 0, 1.0f);
    WorkModuleImpl.set_int(0xffffffff, 0x11000002);
    func_78(func_1074);
}

void func_1074()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
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
    if (global18 != WorkModuleImpl.get_int(0x11000002))
    {
        if (global18 == 0)
        {
            KineticModuleImpl.change_kinetic_type(0x2f);
            GroundModuleImpl(0x2710, 0x1);
        }
        else
        {
            KineticModuleImpl.change_kinetic_type(0);
            GroundModuleImpl(0x2710, 0x5);
        }
        WorkModuleImpl.set_int(global18, 0x11000002);
    }
}

void func_1075()
{
    
}

int func_1076()
{
    if (func_470() != 0)
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x30, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1077()
{
    ItemModuleImpl(0xf, 0);
    WorkModuleImpl.strans_group_on(0x1f000008);
    func_22(0x77, 0, 1.0f);
    KineticModuleImpl.change_kinetic_type(0x30);
    WorkModuleImpl.strans_on(0x1e000002);
    func_78(func_1078);
}

void func_1078()
{
    if (WorkModuleImpl.check_strans(0x1e000002) == 0x1 && MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1079()
{
    
}

int func_1080()
{
    int var0;
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0x4, 0, 0);
    var0 = 0x80000;
    if (WorkModuleImpl.get_int(0x11000002) == 0x7b)
    {
        var0 = 0x100000;
    }
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0x40001, 0x4000002, 0x2000, var0);
    return 0;
}

void func_1081()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x11000002) - 0x78;
    LinkModuleImpl(0x271b, 0xb, 0x7c + var0, (0x1 << var0 & WorkModuleImpl.get_int(0x13000074)) != 0, 0x11000006, 0x11000007, 0x1000006);
    var1 = LinkModuleImpl(0x1, 0);
    WorkModuleImpl.set_int(var1, 0x11000005);
    HitModuleImpl(0x1, WorkModuleImpl.get_int(0x120000f3), 0);
    sys_47(0, var1);
}

void func_1082()
{
    ItemModuleImpl(0xf, 0);
    func_22(WorkModuleImpl.get_int(0x11000002), 0, WorkModuleImplFloat.get_float(0x1000006));
    func_1083();
    func_78(func_1084);
}

void func_1083()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0x78)
    {
        sys_21(0xd, 0x2, 0x49);
    }
    else if (var0 == 0x79)
    {
        sys_21(0xd, 0x2, 0x4a);
    }
    else if (var0 == 0x7a)
    {
        sys_21(0xd, 0x2, 0x4b);
    }
    else if (var0 == 0x7b)
    {
        sys_21(0xd, 0x2, 0x4c);
    }
}

void func_1084()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        if (sys_3B(0x2712) == 0)
        {
            func_16(0xe, 0);
        }
        else
        {
            func_16(0x3d, 0);
        }
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return;
    }
}

void func_1085()
{
    sys_47(0, 0x50000000);
    if (global6 != 0 && global6 != 0x3c)
    {
        sys_3B(0x2711);
    }
}

void func_1086()
{
    
}

int func_1087()
{
    float var0;
    StatusModuleImpl(0x5, 0xffffffff, 0x2e, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3, 0, 0);
    var0 = -LinkModuleImplFloat(0x7, 0);
    PostureModuleImpl.set_lr(var0);
    PostureModuleImpl.update_rot_y();
    return 0;
}

int func_1088(int arg0, int arg1)
{
    float var2;
    float var3;
    float var4;
    float var5;
    int var6;
    float var7;
    var2 = CaptureModuleImplFloat(0);
    var3 = PostureModuleImplFloat.get_scale();
    var4 = PostureModuleImplFloat.get_pos_y();
    var5 = var4;
    var6 = WorkModuleImpl.get_int(0x13000123);
    if (var6 == 0)
    {
        var4 += 12.5f * var3;
        var5 += 8.5f * var3;
    }
    else if (var6 == 0x1)
    {
        var4 += 8.5f * var3;
        var5 = var4;
    }
    else
    {
        printf("ASSERT invalid motion_height");
    }
    var7 = WorkModuleImplFloat.get_float(0x20000e7);
    if (var2 >= var4 + var7)
    {
        WorkModuleImpl.on_flag2(0x21000011);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x21000011);
    }
    if (WorkModuleImpl.is_flag(0x2000004a))
    {
        if (WorkModuleImpl.get_int(0x13000126) == 0)
        {
            return arg0;
        }
    }
    else if (var2 >= var5 + var7)
    {
        return arg0;
    }
    return arg1;
}

void func_1089()
{
    float var0;
    int var1;
    int var2;
    int var3;
    CaptureModuleImpl(0xa);
    KineticModuleImpl(0xe, 0x3, 0x16, 0, 0, 0, 0, 0);
    KineticModuleImpl.set_max_speed(0x3, -1.0f, -1.0f);
    KineticModuleImpl.enable_energy(0x3);
    var0 = (float)WorkModuleImpl.get_int(0x120000ec) + DamageModuleImplFloat(0) * WorkModuleImplFloat.get_float(0x20000ed);
    var0 *= CaptureModuleImplFloat(0x3, 0x30000f1);
    var0 *= WorkModuleImplFloat.get_float(0x30000fe);
    ControlModuleImpl(0x6, var0, WorkModuleImplFloat.get_float(0x20000e3), WorkModuleImplFloat.get_float(0x20000e4));
    var1 = CaptureModuleImpl(0);
    if (var1 > 0)
    {
        WorkModuleImpl.set_int(var1, 0x11000004);
    }
    var2 = CaptureModuleImpl(0xb);
    if (var2 > 0)
    {
        WorkModuleImpl.set_int(var2, 0x11000005);
    }
    if (CaptureModuleImpl(0x7))
    {
        var3 = func_1088(0x88 + var1, 0x8b + var2);
    }
    else
    {
        var3 = 0x88 + var1;
    }
    WorkModuleImpl.set_int(var3, 0x11000002);
    GroundModuleImpl(0x15, 0x1);
}

void func_1090()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000e8), 0x11000003);
}

void func_1091()
{
    func_1090();
    WorkModuleImpl.set_int(0xffffffff, 0x11000006);
    WorkModuleImpl.strans_on(0x1e000024);
    WorkModuleImpl.off_flag2(0x20000003);
    func_1094();
    func_78(func_1095);
}

void func_1092(int arg0, int arg1, int arg2)
{
    float var3;
    float var4;
    int var5;
    int var6;
    var3 = CaptureModuleImplFloat(0x1);
    var4 = CaptureModuleImplFloat(0x2);
    if (global18 == 0x2)
    {
        if (PostureModuleImplFloat.get_lr() == -1.0f)
        {
            var5 = 0x50;
        }
        else
        {
            var5 = 0xa0;
        }
        if (GroundModuleImpl(0x2722, var5) == 0x1)
        {
            if (WorkModuleImpl.is_flag(0x2100000f) == 0x1)
            {
                var3 = var4 = 0;
            }
            else
            {
                WorkModuleImpl.on_flag2(0x2100000f);
            }
        }
        else
        {
            WorkModuleImpl.off_flag2(0x2100000f);
        }
    }
    KineticModuleImpl.set_speed(0x3, var3, var4);
    if (global18 == 0)
    {
        if (CaptureModuleImpl(0x7) == 0x1)
        {
            var6 = func_1088(arg0, arg1);
        }
        else
        {
            var6 = arg0;
            func_1088(arg0, arg0);
        }
        if (WorkModuleImpl.is_flag(0x21000011) == 0x1)
        {
            GroundModuleImpl(0x2710, 0x5);
            WorkModuleImpl.off_flag2(0x2100000f);
            return;
        }
        if (var6 != WorkModuleImpl.get_int(arg2))
        {
            WorkModuleImpl.set_int(var6, arg2);
            func_23(var6);
        }
    }
}

void func_1093()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x11000004);
    var1 = WorkModuleImpl.get_int(0x11000005);
    func_1092(0x88 + var0, 0x8b + var1, 0x11000002);
}

void func_1094()
{
    int var0;
    int var1;
    if (global18 != WorkModuleImpl.get_int(0x11000006))
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x1);
            var0 = WorkModuleImpl.get_int(0x11000002);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
            if (WorkModuleImpl.is_flag(0x2000004a))
            {
                var0 = WorkModuleImpl.get_int(0x11000002);
            }
            else
            {
                var1 = WorkModuleImpl.get_int(0x11000004);
                var0 = 0x88 + var1;
            }
        }
        if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            if (global1 == 0x19 || global1 == 0x11)
            {
                if (MotionModuleImpl.is_end() == 0x1)
                {
                    WorkModuleImpl.on_flag2(0x21000012);
                }
            }
            func_23(var0);
        }
        else
        {
            func_22(var0, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
        WorkModuleImpl.set_int(global18, 0x11000006);
    }
}

void func_1095()
{
    func_1094();
    if (WorkModuleImpl.check_strans(0x1e000024) == 0x1)
    {
        if (global1 == 0x19 || global1 == 0x11)
        {
            if (MotionModuleImpl.is_end() == 0x1 || WorkModuleImpl.is_flag(0x21000012) == 0x1)
            {
                func_16(0x40, 0);
                return;
            }
        }
        else if (MotionModuleImpl.is_end() == 0x1)
        {
            func_16(0x40, 0);
            return;
        }
    }
    if (global1 == 0x19 || global1 == 0x11)
    {
        WorkModuleImpl.off_flag2(0x21000012);
    }
}

void func_1096()
{
    CaptureModuleImpl(0xa);
}

void func_1097()
{
    if (global6 != 0x3f && global6 != 0x40 && global6 != 0x41 && global6 != 0xee && global6 != 0xef && global6 != 0xf0 && global6 != 0x44 && global6 != 0xbf && global6 != 0xc0)
    {
        KineticModuleImpl.set_speed(0x3, 0, 0);
        CaptureModuleImpl(0x1);
    }
}

void func_1098()
{
    
}

int func_1099()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x2e, 0x7, 0, 0, 0x1c000, 0x3c, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xb, 0, 0);
    return 0;
}

void func_1100()
{
    int var0;
    int var1;
    int var2;
    KineticModuleImpl.enable_energy(0x3);
    var0 = WorkModuleImpl.get_int(0x11000002);
    var1 = WorkModuleImpl.get_int(0x11000004);
    var2 = WorkModuleImpl.get_int(0x11000005);
    if (var0 == 0x88 + var1 || var0 == 0x8a + var1)
    {
        var0 = 0x89 + var1;
    }
    else if (var0 == 0x8b + var1 || var0 == 0x8d + var1)
    {
        var0 = 0x8c + var2;
    }
    else
    {
        printf("ASSERT invalid motion");
    }
    WorkModuleImpl.set_int(var0, 0x11000002);
    GroundModuleImpl(0x15, 0x1);
    if (StatusModuleImpl(0xa) == 0x3f)
    {
        ControlModuleImpl(0x2718, 0x4, 0);
    }
}

void func_1101()
{
    WorkModuleImpl.strans_on(0x1e000025);
    WorkModuleImpl.set_int(0xffffffff, 0x11000006);
    func_1106();
    if (!StopModuleImpl(0x1))
    {
        func_1103();
    }
    global16 = func_1103;
    func_78(func_1107);
}

void func_1102()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x11000004);
    var1 = WorkModuleImpl.get_int(0x11000005);
    func_1092(0x89 + var0, 0x8c + var1, 0x11000002);
}

void func_1103()
{
    if (WorkModuleImpl.get_int(0x11000003) >= 0)
    {
        WorkModuleImpl.dec_int(0x11000003);
        if (ControlModuleImpl(0x2710, 0x2) == 0x1)
        {
            WorkModuleImpl.on_flag2(0x2100000e);
        }
        if (global32 >= WorkModuleImplFloat.get_float(0x2000023) && global47 < WorkModuleImpl.get_int(0x12000020))
        {
            WorkModuleImpl.on_flag2(0x2100000e);
        }
    }
}

int func_1104()
{
    if (ControlModuleImplFloat.get_clatter() <= 0)
    {
        if (WorkModuleImpl.is_flag(0x2100000e) == 0x1 || global18 == 0x2)
        {
            func_16(0x43, 0);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000025) == 0x1)
        {
            func_16(0x42, 0);
            return 0x1;
        }
    }
    return 0;
}

int func_1105()
{
    float var0;
    float var1;
    float var2;
    if (FighterUtil(0x1d) == 0x1)
    {
        var0 = func_13(CaptureModuleImplFloat(0x1));
        var1 = func_13(CaptureModuleImplFloat(0x2));
        var2 = 1.0f / LinkModuleImplFloat(0xa, 0);
        if (var2 < 1.0f)
        {
            var0 *= var2;
            var1 *= var2;
        }
        if (var0 > WorkModuleImplFloat.get_float(0x20000ea) || var1 > WorkModuleImplFloat.get_float(0x20000eb))
        {
            func_16(0x42, 0);
            return 0x1;
        }
    }
    return 0;
}

void func_1106()
{
    int var0;
    int var1;
    if (global18 != WorkModuleImpl.get_int(0x11000006))
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x2);
            var0 = WorkModuleImpl.get_int(0x11000002);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
            if (WorkModuleImpl.is_flag(0x2000004a))
            {
                var0 = WorkModuleImpl.get_int(0x11000002);
            }
            else
            {
                var1 = WorkModuleImpl.get_int(0x11000004);
                var0 = 0x89 + var1;
            }
        }
        if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            func_23(var0);
        }
        else
        {
            func_22(var0, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
        WorkModuleImpl.set_int(global18, 0x11000006);
    }
}

void func_1107()
{
    func_1106();
    if (func_1104() == 0x1)
    {
        return;
    }
    if (func_1105() == 0x1)
    {
        return;
    }
}

void func_1108()
{
    CaptureModuleImpl(0xa);
}

void func_1109()
{
    func_1098();
}

int func_1110()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x2e, 0x7, 0, 0, 0x1c000, 0x3c, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xf, 0, 0);
    return 0;
}

void func_1111()
{
    int var0;
    int var1;
    int var2;
    KineticModuleImpl.enable_energy(0x3);
    var0 = WorkModuleImpl.get_int(0x11000002);
    var1 = WorkModuleImpl.get_int(0x11000004);
    var2 = WorkModuleImpl.get_int(0x11000005);
    if (var0 == 0x88 + var1 || var0 == 0x89 + var1 || var0 == 0x8a + var1)
    {
        var0 = 0x8a + var1;
    }
    else if (var0 == 0x8b + var2 || var0 == 0x8c + var2 || var0 == 0x8d + var2)
    {
        var0 = 0x8d + var2;
    }
    else
    {
        printf("ASSERT invalid motion_kind");
    }
    WorkModuleImpl.set_int(var0, 0x11000002);
    GroundModuleImpl(0x15, 0x1);
}

void func_1112()
{
    WorkModuleImpl.strans_on(0x1e000025);
    WorkModuleImpl.strans_on(0x1e000024);
    WorkModuleImpl.set_int(0xffffffff, 0x11000006);
    func_1113();
    func_78(func_1116);
}

void func_1113()
{
    int var0;
    int var1;
    if (global18 != WorkModuleImpl.get_int(0x11000006))
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x2);
            var0 = WorkModuleImpl.get_int(0x11000002);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
            if (WorkModuleImpl.is_flag(0x2000004a))
            {
                var0 = WorkModuleImpl.get_int(0x11000002);
            }
            else
            {
                var1 = WorkModuleImpl.get_int(0x11000004);
                var0 = 0x8a + var1;
            }
        }
        if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            func_23(var0);
        }
        else
        {
            func_22(var0, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
        WorkModuleImpl.set_int(global18, 0x11000006);
    }
}

int func_1114()
{
    func_1113();
    if (WorkModuleImpl.check_strans(0x1e000025) == 0x1 && ControlModuleImplFloat.get_clatter() <= 0)
    {
        func_16(0x42, 0);
        return 0x1;
    }
    return 0;
}

void func_1115()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x11000004);
    var1 = WorkModuleImpl.get_int(0x11000005);
    func_1092(0x8a + var0, 0x8d + var1, 0x11000002);
}

void func_1116()
{
    func_1114();
    if (WorkModuleImpl.check_strans(0x1e000024) == 0x1)
    {
        if (MotionModuleImpl.is_end() == 0x1)
        {
            func_16(0x40, 0);
            return;
        }
    }
}

void func_1117()
{
    CaptureModuleImpl(0xa);
}

void func_1118()
{
    func_1098();
}

int func_1119()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0x1, 0, 0, 0, 0, 0);
    return 0;
}

void func_1120()
{
    int var0;
    float var1;
    float var2;
    if (global18 == 0)
    {
        var0 = 0x3;
    }
    else
    {
        var0 = 0x2;
    }
    var1 = KineticModuleImplFloat.get_speed_x(var0);
    var2 = KineticModuleImplFloat.get_speed_y(var0);
    var1 += WorkModuleImplFloat.get_float(0x20000f0) * -PostureModuleImplFloat.get_lr();
    KineticModuleImpl.set_speed(var0, var1, var2);
    KineticModuleImpl.enable_energy(var0);
}

void func_1121()
{
    func_22(0x8e, 0, 1.0f);
    WorkModuleImpl.set_int(0xffffffff, 0x11000002);
    PhysicsModuleImpl(0xb, 0);
    func_78(func_1122);
}

void func_1122()
{
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (global18 == 0)
        {
            if (func_39() != 0)
            {
                return;
            }
        }
        else if (global18 == 0x2)
        {
            if (func_41() != 0)
            {
                return;
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
    if (global18 != WorkModuleImpl.get_int(0x11000002))
    {
        if (global18 == 0)
        {
            KineticModuleImpl.change_kinetic_type(0x2f);
            GroundModuleImpl(0x2710, 0x1);
        }
        else
        {
            KineticModuleImpl.change_kinetic_type(0);
            GroundModuleImpl(0x2710, 0x5);
        }
        WorkModuleImpl.set_int(global18, 0x11000002);
    }
}

void func_1123()
{
    int var0;
    PhysicsModuleImpl(0xb, 0x1);
    var0 = WorkModuleImpl.get_int(0x120000f8);
    WorkModuleImpl.set_int(var0, 0x10000058);
    WorkModuleImpl.off_flag2(0x20000031);
}

int func_1124()
{
    int var0;
    if (func_470() != 0)
    {
        return 0x1;
    }
    if (global5 == 0x100)
    {
        var0 = 0x54;
    }
    else if (global5 == 0x101)
    {
        var0 = 0x56;
    }
    else if (global5 == 0xf6)
    {
        var0 = 0x57;
    }
    else
    {
        var0 = 0x30;
    }
    StatusModuleImpl(0x5, 0x2, var0, 0x5, 0x4, 0x1, 0, 0, 0, 0x4);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0x1, 0, 0, 0, 0, 0);
    return 0;
}

void func_1125()
{
    WorkModuleImpl.strans_group_on(0x1f000008);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000e9), 0x11000002);
    func_22(0x8f, 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e000002);
    PhysicsModuleImpl(0xb, 0);
    func_78(func_1126);
}

void func_1126()
{
    if (func_55())
    {
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_41() != 0)
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000002) == 0x1 && MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1127()
{
    int var0;
    PhysicsModuleImpl(0xb, 0x1);
    var0 = WorkModuleImpl.get_int(0x120000f8);
    WorkModuleImpl.set_int(var0, 0x10000058);
    WorkModuleImpl.off_flag2(0x20000031);
}

int func_1128()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0x4, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0xe, 0, 0);
    return 0;
}

void func_1129()
{
    int var0;
    int var1;
    CaptureModuleImpl(0x2);
    var0 = WorkModuleImpl.get_int(0x13000120);
    var1 = 0x96;
    if (0x1 == var0)
    {
        MotionModuleImpl(0x29, 0x4);
    }
    else if (0x3 == var0)
    {
        MotionModuleImpl(0x29, 0x8);
    }
    LinkModuleImpl(0x2716, 0, 0x3);
}

void func_1130()
{
    func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
    func_78(func_1132);
}

void func_1131()
{
    
}

void func_1132()
{
    func_1131();
}

void func_1133()
{
    int var0;
    float var1;
    float var2;
    float var3;
    var0 = 0;
    if (global6 == 0x53)
    {
        var0 = FighterUtil(0xc);
    }
    CaptureModuleImpl(0x4);
    if (var0 == 0x1)
    {
        GroundModuleImpl(0x271c);
        GroundModuleImpl(0x271b);
        var1 = GroundModuleImplFloat(0x8);
        var2 = GroundModuleImplFloat(0x9);
        var3 = PostureModuleImplFloat.get_pos_z();
        PostureModuleImpl.set_pos(var1, var2, var3);
        GroundModuleImpl(0x2716);
        if (GroundModuleImpl(0xa) & 0x8)
        {
            var1 = GroundModuleImplFloat(0x8);
            var2 = GroundModuleImplFloat(0x9);
            PostureModuleImpl.set_pos(var1, var2, var3);
            GroundModuleImpl(0x2710, 0x1);
            func_20(0);
        }
    }
}

void func_1134()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x120000f8);
    WorkModuleImpl.set_int(var0, 0x10000058);
    WorkModuleImpl.off_flag2(0x20000031);
}

int func_1135()
{
    int var0;
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0, 0, 0x4, 0, 0);
    var0 = 0x80000;
    if (WorkModuleImpl.get_int(0x11000002) == 0x7b)
    {
        var0 = 0x100000;
    }
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0x40001, 0x4000002, 0x2000, var0);
    return 0;
}

void func_1136()
{
    KineticModuleImpl.disable_energy(0x5);
    func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e000093);
    func_1083();
    if (!StopModuleImpl(0x1))
    {
        func_1138();
    }
    global16 = func_1138;
    func_78(func_1137);
}

void func_1137()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000093) && global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        KineticModuleImpl.change_kinetic_type(0x13);
        func_16(0xe, 0);
        return 0x1;
    }
    func_1141();
}

void func_1138()
{
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        GroundModuleImpl(0x2710, 0x5);
        func_20(0x2);
        KineticModuleImpl.change_kinetic_type(0x12);
        WorkModuleImpl.strans_off(0x1e000093);
        WorkModuleImpl.off_flag2(0x2100000d);
    }
}

void func_1139()
{
    KineticModuleImpl.enable_energy(0x5);
    if (global18 == 0)
    {
        KineticModuleImpl(0xe, 0, 0x2, 0, 0, 0, 0, 0);
    }
    else
    {
        KineticModuleImpl(0xe, 0, 0x4, 0, 0, 0, 0, 0);
    }
    KineticModuleImpl.disable_energy(0);
}

void func_1140()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x11000002);
    var1 = var0 - 0x79;
    sys_21(0x5e, 0xb, 0x7d + var1);
    if (var0 == 0x7a)
    {
        CameraModuleImpl(0x2720, 0);
    }
    WorkModuleImpl.on_flag2(0x2000002d);
    WorkModuleImpl.off_flag2(0x2000001d);
    HitModuleImpl(0x1, WorkModuleImpl.get_int(0x120000f3), 0);
}

void func_1141()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    int var6;
    GroundModuleImpl(0x8, 0x1);
    var0 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var1 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    if (var1 < 0)
    {
        var2 = PostureModuleImplFloat.get_pos_y();
        var3 = StageData(0x2);
        var4 = StageData(0xc);
        var5 = var4 + func_13(var3 - var4) * 0.5f;
        var6 = 0;
        if (var2 > var5)
        {
            var6 = 0x1;
        }
        if (var6)
        {
            GroundModuleImpl(0x2710, 0);
            func_20(0x2);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
        }
    }
}

void func_1142()
{
    if (WorkModuleImpl.get_int(0x11000002) == 0x7a)
    {
        CameraModuleImpl(0x2720, 0x7);
    }
    if (global6 == 0xe)
    {
        if (!MotionModuleImpl.is_end())
        {
            sys_3B(0x2711);
        }
    }
    else
    {
        sys_3B(0x2711);
    }
}

int func_1143()
{
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        StatusModuleImpl(0x2711, 0xd7);
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0x4, 0, 0, 0, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x10, 0, 0);
    return 0;
}

void func_1144()
{
    if (!WorkModuleImpl.is_flag(0x2100000d))
    {
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            if (ControlModuleImpl(0x2713, 0x2))
            {
                WorkModuleImpl.on_flag2(0x21000005);
            }
        }
        else if (global32 < WorkModuleImplFloat.get_float(0x2000022))
        {
            WorkModuleImpl.on_flag2(0x21000005);
        }
    }
}

void func_1145()
{
    if (ControlModuleImpl(0x2710, 0x2))
    {
        WorkModuleImpl.on_flag2(0x2100000e);
        ControlModuleImpl(0x271b);
    }
    else
    {
        ControlModuleImpl(0x271a);
    }
    WorkModuleImpl.inc_int(0x10000006);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000b7), 0x10000007);
    WorkModuleImpl.set_int(0x1, 0x11000000);
    func_1149();
    if (!StopModuleImpl(0x1))
    {
        func_1144();
    }
    global16 = func_1144;
    func_78(func_1146);
}

void func_1146()
{
    if (MotionModuleImpl.is_end() || WorkModuleImpl.is_flag(0x2100000d) || !LinkModuleImpl(0x2, 0x3))
    {
        func_16(0xb, 0);
        return;
    }
}

void func_1147()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000b7), 0x10000007);
}

void func_1148()
{
    
}

void func_1149()
{
    if (LinkModuleImpl(0x5, 0x3, WorkModuleImpl.get_int(0x10000008)))
    {
        LinkModuleImpl(0x3, 0x3, 0x6, 0x11000004, 0x1000007, 0x21000010);
        if (WorkModuleImpl.is_flag(0x21000010) == 0x1)
        {
            func_22(0x3c, 0, 1.0f);
            LinkModuleImpl(0x7, 0x3, 0, WorkModuleImpl.get_int(0x11000004), 0x5);
            LinkModuleImpl(0xc, 0x3);
        }
        else
        {
            WorkModuleImpl.on_flag2(0x2100000d);
            PostureModuleImpl.set_pos(WorkModuleImplFloat.get_float(0x1000007), WorkModuleImplFloat.get_float(0x1000008), GroundModuleImplFloat(0xc));
        }
        if (!WorkModuleImpl.is_flag(0x21000011))
        {
            WorkModuleImpl.set_int(0, 0x10000006);
        }
        WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x1000009) + 0, 0x1000006);
    }
}

void func_1150()
{
    FighterUtil(0x7);
}

int func_1151()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1152()
{
    func_22(0x3d, 0, 1.0f);
    func_78(func_1153);
}

void func_1153()
{
    if (MotionModuleImpl.is_end() && global18 == 0)
    {
        func_16(0xb5, 0);
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1154()
{
    
}

void func_1155()
{
    LinkModuleImpl(0x4, 0x3, 0x7, 0);
}

int func_1156()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1157()
{
    func_22(0x40, 0, 1.0f);
    func_78(func_1158);
}

void func_1158()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (MotionModuleImpl.is_end() && global18 == 0)
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

void func_1159()
{
    
}

int func_1160()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0x1, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1161()
{
    func_22(0x3e, 0, 1.0f);
    func_78(func_1162);
}

void func_1162()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xb7, 0);
        return;
    }
}

void func_1163()
{
    
}

void func_1164()
{
    LinkModuleImpl(0x4, 0x3, 0x7, 0);
}

int func_1165()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1166()
{
    if (!WorkModuleImpl.is_flag2(0x2100000f))
    {
        if (WorkModuleImpl.get_int(0x11000003) <= 0)
        {
            printf("sub_tread_fall_uniq_check FIGHTER_STATUS_TREAD_WORK_INT_RECOVERY_FRAME <= 0");
            func_40();
            WorkModuleImpl.on_flag2(0x2100000f);
            func_100(0x4);
        }
    }
}

void func_1167()
{
    func_22(0x3f, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_1166();
    }
    global16 = func_1166;
    func_78(func_1168);
}

void func_1168()
{
    if (WorkModuleImpl.is_flag2(0x2100000f))
    {
        if (func_41())
        {
            return;
        }
    }
    if (global18 == 0)
    {
        func_16(0x4d, 0);
        return;
    }
}

void func_1169()
{
    
}

void func_1170()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x13000038), 0x11000003);
}

void func_1171()
{
    WorkModuleImpl.count_down_int(0x11000003);
}

int func_1172()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x8000000, 0, 0);
    return 0;
}

void func_1173()
{
    KineticModuleImpl.change_kinetic_type(0xf);
    if (ItemModuleImpl(0x2, 0x2000))
    {
        if (KineticModuleImplFloat.get_sum_speed(0x1) >= WorkModuleImplFloat.get_float(0x3000003) * WorkModuleImplFloat.get_float(0x200020b))
        {
            func_22(0x114, 0, 1.0f);
        }
        else
        {
            func_22(0x113, 0, 1.0f);
        }
    }
    else if (KineticModuleImplFloat.get_sum_speed(0x1) >= WorkModuleImplFloat.get_float(0x3000003) * WorkModuleImplFloat.get_float(0x200020b))
    {
        func_22(0x112, 0, 1.0f);
    }
    else
    {
        func_22(0x111, 0, 1.0f);
    }
    func_78(func_1174);
}

void func_1174()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
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

void func_1175()
{
    
}

int func_1176()
{
    if (ItemModuleImpl(0x11) == 0x69)
    {
        StatusModuleImpl(0x2711, 0xf8);
        return 0x1;
    }
    return 0;
}

int func_1177()
{
    if (func_1176())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x7d2, 0x8000000, 0, 0x10000);
    return 0;
}

void func_1178()
{
    
}

void func_1179()
{
    
}

void func_1180()
{
    if ((global29 & 0xf) != 0)
    {
        if ((global29 & 0x1) != 0)
        {
            WorkModuleImpl.set_int(0x119, 0x11000002);
            WorkModuleImpl.set_int(0x123, 0x11000003);
        }
        else if ((global29 & 0x2) != 0)
        {
            WorkModuleImpl.set_int(0x11a, 0x11000002);
            WorkModuleImpl.set_int(0x124, 0x11000003);
            WorkModuleImpl.set_float(-PostureModuleImplFloat.get_lr(), 0x1000006);
        }
        else if ((global29 & 0x4) != 0)
        {
            WorkModuleImpl.set_int(0x11b, 0x11000002);
            WorkModuleImpl.set_int(0x125, 0x11000003);
        }
        else
        {
            WorkModuleImpl.set_int(0x11c, 0x11000002);
            WorkModuleImpl.set_int(0x126, 0x11000003);
        }
        WorkModuleImpl.on_flag(0x2000002e);
    }
    else if ((global29 & 0x10) != 0)
    {
        WorkModuleImpl.set_int(0x117, 0x11000002);
        WorkModuleImpl.set_int(0x121, 0x11000003);
    }
    else if ((global29 & 0x20) != 0)
    {
        WorkModuleImpl.set_int(0x118, 0x11000002);
        WorkModuleImpl.set_int(0x122, 0x11000003);
    }
    else if ((global29 & 0x40) != 0 && (ItemModuleImpl(0x4) == 0 || ItemModuleImpl(0x5, 0x8) == 0))
    {
        WorkModuleImpl.set_int(0x11e, 0x11000002);
        WorkModuleImpl.set_int(0x11e, 0x11000003);
    }
    else if ((global29 & 0x80) != 0)
    {
        WorkModuleImpl.set_int(0x115, 0x11000002);
        WorkModuleImpl.set_int(0x11f, 0x11000003);
    }
    else if ((global29 & 0x100) != 0)
    {
        WorkModuleImpl.set_int(0x116, 0x11000002);
        WorkModuleImpl.set_int(0x120, 0x11000003);
        WorkModuleImpl.set_float(-PostureModuleImplFloat.get_lr(), 0x1000006);
    }
}

void func_1181()
{
    if ((global29 & 0x15400) != 0)
    {
        if ((global29 & 0x400) != 0)
        {
            WorkModuleImpl.set_int(0x123, 0x11000002);
            WorkModuleImpl.set_int(0x119, 0x11000003);
        }
        else if ((global29 & 0x1000) != 0)
        {
            WorkModuleImpl.set_int(0x124, 0x11000002);
            WorkModuleImpl.set_int(0x11a, 0x11000003);
            WorkModuleImpl.set_float(-PostureModuleImplFloat.get_lr(), 0x1000006);
        }
        else if ((global29 & 0x4000) != 0)
        {
            WorkModuleImpl.set_int(0x125, 0x11000002);
            WorkModuleImpl.set_int(0x11b, 0x11000003);
        }
        else
        {
            WorkModuleImpl.set_int(0x126, 0x11000002);
            WorkModuleImpl.set_int(0x11c, 0x11000003);
        }
        WorkModuleImpl.on_flag(0x2000002e);
    }
    else if ((global29 & 0x200) != 0)
    {
        WorkModuleImpl.set_int(0x11f, 0x11000002);
        WorkModuleImpl.set_int(0x115, 0x11000003);
    }
    else if ((global29 & 0x800) != 0)
    {
        WorkModuleImpl.set_int(0x120, 0x11000002);
        WorkModuleImpl.set_int(0x116, 0x11000003);
        WorkModuleImpl.set_float(-PostureModuleImplFloat.get_lr(), 0x1000006);
    }
    else if ((global29 & 0x2000) != 0)
    {
        WorkModuleImpl.set_int(0x121, 0x11000002);
        WorkModuleImpl.set_int(0x117, 0x11000003);
    }
    else if ((global29 & 0x8000) != 0)
    {
        WorkModuleImpl.set_int(0x122, 0x11000002);
        WorkModuleImpl.set_int(0x118, 0x11000003);
    }
}

void func_1182()
{
    if (global5 == 0x8)
    {
        WorkModuleImpl.on_flag2(0x21000011);
        KineticModuleImpl.change_kinetic_type(0x7);
        KineticModuleImpl.enable_energy(0);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x21000011);
    }
    WorkModuleImpl.set_float(PostureModuleImplFloat.get_lr(), 0x1000006);
    if (WorkModuleImpl.get_int(0x11000002) == 0)
    {
        if (global18 == 0)
        {
            func_1180();
        }
        else
        {
            func_1181();
        }
    }
    ControlModuleImpl(0x271f);
    func_75();
    func_76();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0xffffffff, 0x11000006);
    WorkModuleImpl.on_flag(0x2100000f);
    func_1183();
    func_78(func_1185);
}

void func_1183()
{
    if (global18 != WorkModuleImpl.get_int(0x11000006))
    {
        if (WorkModuleImpl.is_flag(0x2100000f) == 0)
        {
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000002), 0x11000004);
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000003), 0x11000002);
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x11000004), 0x11000003);
        }
        if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
        {
            func_23(WorkModuleImpl.get_int(0x11000002));
        }
        else
        {
            func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
            WorkModuleImpl.on_flag(0x2100000d);
        }
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x2);
            if (WorkModuleImpl.is_flag(0x21000011) == 0)
            {
                KineticModuleImpl.change_kinetic_type(0xf);
            }
            WorkModuleImpl.off_flag2(0x20000003);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
            KineticModuleImpl.change_kinetic_type(0);
        }
        WorkModuleImpl.set_int(global18, 0x11000006);
        WorkModuleImpl.off_flag(0x2100000f);
    }
}

void func_1184()
{
    
}

void func_1185()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    func_1184();
    func_1183();
    if (WorkModuleImpl.is_flag(0x21000010))
    {
        func_16(0xf8);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
        else
        {
            func_16(0, 0);
        }
        return;
    }
}

void func_1186()
{
    
}

void func_1187()
{
    func_1186();
    WorkModuleImpl.off_flag(0x2000002e);
    if (global18 == 0)
    {
        WorkModuleImpl.off_flag2(0x20000003);
    }
}

int func_1188()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x7d2, 0x8000000, 0, 0x10000);
    return 0;
}

void func_1189()
{
    WorkModuleImpl.set_float(PostureModuleImplFloat.get_lr(), 0x1000006);
    WorkModuleImpl.strans_on(0x1e000074);
    func_22(0x11d, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_1190();
    }
    global16 = func_1190;
    func_78(func_1191);
}

void func_1190()
{
    WorkModuleImpl.inc_int(0x11000005);
    if (WorkModuleImpl.get_int(0x11000005) >= WorkModuleImpl.get_int(0x1300000c))
    {
        WorkModuleImpl.strans_off(0x1e000074);
    }
}

void func_1191()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    func_1184();
    if (WorkModuleImpl.is_flag(0x21000010))
    {
        func_16(0xf8);
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000074) == 0x1 && (global38 & 0x1) != 0 && ControlModuleImpl(0x271c) == 0 && global32 >= WorkModuleImplFloat.get_float(0x200003a) && global18 == 0)
    {
        func_16(0x8c, 0);
        return;
    }
}

void func_1192()
{
    func_1186();
}

int func_1193()
{
    if (ItemModuleImpl(0x23) == 0xb)
    {
        StatusModuleImpl(0x2711, 0xf9);
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x8000000, 0, 0);
    return 0;
}

void func_1194()
{
    func_78(func_1195);
}

void func_1195()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0x4c, 0);
        return;
    }
    if (global18 == 0 && MotionModuleImpl.is_end() == 0x1)
    {
        if (ItemModuleImpl(0x4))
        {
            if (ItemModuleImpl(0x11) == 0x6000001f)
            {
                func_16(0x91, 0);
            }
            else
            {
                func_16(0x8e, 0);
            }
        }
        else
        {
            func_16(0, 0);
        }
        return;
    }
}

void func_1196()
{
    
}

int func_1197()
{
    if (global18 == 0x2)
    {
        func_16(0x4c, 0);
        return 0x1;
    }
    if (global18 == 0 && global24 & 0x1)
    {
        func_16(0x91, 0);
        return 0x1;
    }
    if (ItemModuleImpl(0x4) == 0 && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
    return 0;
}

int func_1198()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 0, 0x4, 0x180, 0x40);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x8000010, 0, 0);
    return 0;
}

void func_1199()
{
    TurnModuleImpl(0x2710, 0x1);
    WorkModuleImpl.off_flag2(0x2100000e);
    func_78(func_1200);
}

void func_1200()
{
    if (func_1197())
    {
        return;
    }
    if (global18 == 0 && TurnModuleImpl(0) == 0)
    {
        func_16(0x8e, 0);
        return;
    }
    if (WorkModuleImpl.get_int(0x13000121) == 0x1)
    {
        if (!WorkModuleImpl.is_flag(0x2100000e) && TurnModuleImpl(0x3))
        {
            MotionModuleImpl.turn_back(!MotionModuleImpl(0x2e));
            WorkModuleImpl.on_flag2(0x2100000e);
        }
    }
}

void func_1201()
{
    float var0;
    int var1;
    if (TurnModuleImpl(0) && TurnModuleImpl(0x1) == 0)
    {
        TurnModuleImpl(0x2711);
    }
    if (WorkModuleImpl.get_int(0x13000121) == 0x1)
    {
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            var0 = PostureModuleImplFloat.get_lr();
            var1 = MotionModuleImpl(0x2e);
            if (var0 == 1.0f && var1 == 0x1)
            {
                MotionModuleImpl.turn_back(0);
            }
            else if (var0 == -1.0f && var1 == 0)
            {
                MotionModuleImpl.turn_back(0x1);
            }
        }
    }
}

int func_1202()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x1, 0, 0x1, 0, 0x4, 0x180, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x8000010, 0, 0);
    return 0;
}

void func_1203()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0)
    {
        return 0;
    }
    else
    {
        return WorkModuleImplFloat.get_float(0x3000119);
    }
}

void func_1204()
{
    float var0;
    var0 = func_1203();
    func_22(0x128, var0, 1.0f);
    func_78(func_1205);
}

void func_1205()
{
    float var0;
    if (func_1197())
    {
        return;
    }
    if (global18 == 0)
    {
        var0 = func_88();
        if (var0 < WorkModuleImplFloat.get_float(0x20001fc))
        {
            func_16(0x8e, 0);
            return;
        }
    }
}

void func_1206()
{
    float var0;
    int var1;
    if (global6 == 0x8e)
    {
        var0 = MotionModuleImplFloat.get_frame();
        if (var0 >= WorkModuleImplFloat.get_float(0x3000118) && var0 < WorkModuleImplFloat.get_float(0x300011a))
        {
            var1 = 0x1;
        }
        else
        {
            var1 = 0;
        }
        WorkModuleImpl.set_int(var1, 0x11000002);
    }
}

int func_1207()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 0, 0x4, 0x180, 0x40);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x8000010, 0, 0);
    return 0;
}

void func_1208()
{
    float var0;
    float var1;
    float var2;
    if (global5 != 0x8b && global5 != 0x91 && global5 != 0x8e && global5 != 0x8f && global5 != 0x90)
    {
        var0 = (float)MotionModuleImpl.get_end_frame(0x127);
        var1 = sys_40(0) * WorkModuleImplFloat.get_float(0x20000a6);
        func_22(0x127, var0, var1);
    }
    else if (global5 == 0x90)
    {
        var2 = func_1203();
        MotionModuleImpl(0x1, 0x128, var2, 0, 6.0f);
    }
    func_78(func_1209);
}

void func_1209()
{
    float var0;
    if (func_1197())
    {
        return;
    }
    if (global18 == 0)
    {
        var0 = func_88();
        if (var0 >= WorkModuleImplFloat.get_float(0x20001fc))
        {
            func_16(0x90, 0);
            return;
        }
        if (var0 <= WorkModuleImplFloat.get_float(0x20001fd))
        {
            func_16(0x8f, 0);
            return;
        }
    }
}

void func_1210()
{
    
}

void func_1211()
{
    int var0;
    float var1;
    WorkModuleImpl.set_float(PostureModuleImplFloat.get_lr() + 0, 0x1000006);
    if ((global29 & 0x1) != 0)
    {
        WorkModuleImpl.set_int(0x12f, 0x11000002);
        WorkModuleImpl.on_flag2(0x2000002e);
    }
    else if ((global29 & 0x2) != 0)
    {
        WorkModuleImpl.set_int(0x130, 0x11000002);
        WorkModuleImpl.set_float(-PostureModuleImplFloat.get_lr() + 0, 0x1000006);
        WorkModuleImpl.on_flag2(0x2000002e);
    }
    else if ((global29 & 0x4) != 0)
    {
        WorkModuleImpl.set_int(0x131, 0x11000002);
        WorkModuleImpl.on_flag2(0x2000002e);
    }
    else if ((global29 & 0x8) != 0)
    {
        WorkModuleImpl.set_int(0x132, 0x11000002);
        WorkModuleImpl.on_flag2(0x2000002e);
    }
    else if ((global29 & 0x10) != 0)
    {
        WorkModuleImpl.set_int(0x12d, 0x11000002);
    }
    else if ((global29 & 0x20) != 0)
    {
        WorkModuleImpl.set_int(0x12e, 0x11000002);
    }
    else if ((global29 & 0x80000) != 0)
    {
        WorkModuleImpl.set_int(0x12c, 0x11000002);
        WorkModuleImpl.set_float(-PostureModuleImplFloat.get_lr() + 0, 0x1000006);
    }
    else
    {
        WorkModuleImpl.set_int(0x12b, 0x11000002);
    }
    var0 = WorkModuleImpl.get_int(0x11000002);
    var1 = WorkModuleImplFloat.get_float(0x20000a7);
    func_22(var0, 0, var1);
    ControlModuleImpl(0x271f);
    func_75();
    func_76();
    ControlModuleImpl(0x271b);
    global24 = 0;
    global31 = 0;
    global29 = 0;
}

int func_1212()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x7d2, 0x8000000, 0, 0x10000);
    return 0;
}

void func_1213()
{
    KineticModuleImpl.change_kinetic_type(0xf);
    func_1211();
    func_78(func_1214);
}

void func_1214()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (global18 == 0 && MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0, 0);
        return;
    }
}

void func_1215()
{
    if (ItemModuleImpl(0x4))
    {
        if (ItemModuleImpl(0x24) == 0x1)
        {
            ItemModuleImpl(0x8);
        }
    }
}

int func_1216()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x8000000, 0, 0);
    return 0;
}

void func_1217()
{
    func_22(0x197, 0, 1.0f);
    sys_21(0x23);
    func_78(func_1218);
}

void func_1218()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0, 0);
        return;
    }
    if (global9 == 12.0f)
    {
        ItemModuleImpl(0x14);
    }
}

void func_1219()
{
    if (ItemModuleImpl(0x11) == 0)
    {
        sys_21(0x24, 0);
    }
}

int func_1220()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0x782, 0x4403ea, 0x800, 0);
    return 0;
}

void func_1221()
{
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    sys_21(0x29);
    PostureModuleImpl(0x271b, 0);
    WorkModuleImpl.on_flag2(0x20000001);
    func_22(0x160, 0, 1.0f);
    func_78(func_1222);
}

void func_1222()
{
    
}

void func_1223()
{
    if (global6 != 0xd1)
    {
        WorkModuleImpl.on_flag2(0x2100000d);
        ItemModuleImpl(0x10, 0x1);
    }
}

int func_1224()
{
    StatusModuleImpl(0x5, 0x2, 0x1, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0x782, 0, 0x800, 0);
    return 0;
}

void func_1225()
{
    func_40();
    func_564();
    func_22(0x1b, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_1226);
}

void func_1226()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_41())
    {
        return;
    }
    if (func_565())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1227()
{
    
}

int func_1228()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0x792, 0x4403ea, 0x800, 0);
    return 0;
}

void func_1229()
{
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    sys_21(0x29);
    WorkModuleImpl.on_flag2(0x20000001);
    func_22(0x15e, 0, 1.0f);
    WorkModuleImpl.on_flag2(0x20000065);
    func_78(func_1230);
}

void func_1230()
{
    if (MotionModuleImpl.is_end())
    {
        sys_21(0x30);
        CameraModuleImpl(0x2717, 0);
        func_22(0x15f, 0, 1.0f);
        callFunc3(func_1231);
        return;
    }
}

void func_1231()
{
    
}

void func_1232()
{
    CameraModuleImpl(0x2717, 0x1);
}

int func_1233()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0x822, 0x4403ea, 0x800, 0);
    return 0;
}

void func_1234()
{
    func_33();
    WorkModuleImpl.set_float(PostureModuleImplFloat.get_lr(), 0x1000006);
    ControlModuleImpl(0x271f);
    func_75();
    func_76();
    ControlModuleImpl(0x271b);
    DamageModuleImpl(0xb, 0x1, (float)0 + 0);
    VisibilityModuleImpl(0x2710, 0);
    MotionModuleImpl.set_motion_rate(0);
    ItemModuleImpl(0x10, 0);
    ItemModuleImpl(0xe, 0x6a, 0, 0, 0x1);
    func_78(func_1235);
}

void func_1235()
{
    
}

void func_1236()
{
    if (global6 != 0x10e)
    {
        ItemModuleImpl(0x1d, 0);
        LinkModuleImpl(0x9, 0, 0, 0, 0, 0, 0);
        LinkModuleImpl(0x2717, 0x3);
    }
    VisibilityModuleImpl(0x2710, 0x1);
}

int func_1237()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0x4, 0x1, 0, 0, 0x40, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0, 0, 0);
    return 0;
}

void func_1238()
{
    func_40();
    func_564();
    func_22(0xd3, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_1239);
}

void func_1239()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_41())
    {
        return;
    }
    if (func_565())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1240()
{
    
}

void func_1241()
{
    float var0;
    float var1;
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    ModelModuleImpl(0x1, 0x2, var0 + 90.0f, 0, 0, 0x1);
    var1 = WorkModuleImplFloat.get_float(0x2000306) * func_13(Math.cos(var0 * 3.1415927410125732f / (float)0xb4));
    func_1318(var1, WorkModuleImplFloat.get_float(0x2000307));
}

void func_1242()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    ModelModuleImpl(0x1, 0x2, var0 + 90.0f, 0, 0, 0x1);
}

void func_1243()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    ModelModuleImpl(0x1, 0x2, var0 + 90.0f, 0, 0, 0x1);
}

void func_1244()
{
    ModelModuleImpl(0x2, 0x2);
}

void func_1245()
{
    if (global18 == 0)
    {
        if (global24 & 0x200000)
        {
            func_16(0xd6, 0x1);
            return;
        }
        if (global24 & 0x100000 && ControlModuleImpl(0x271c))
        {
            func_16(0xd6, 0x1);
            return;
        }
    }
}

void func_1246()
{
    if (func_34())
    {
        if (global31 & 0x200)
        {
            func_676();
        }
    }
}

void func_1247()
{
    func_1246();
}

void func_1248()
{
    int var0;
    float var1;
    sys_21(0x23);
    var0 = WorkModuleImpl.get_int(0x11000007);
    if (FighterUtil(0xa))
    {
        var1 = MotionModuleImplFloat(0x9);
        func_23(var0);
        MotionModuleImpl.set_motion_rate(var1);
    }
    else
    {
        func_22(var0, 0, 1.0f);
        if (ItemModuleImpl(0x11) == 0x30)
        {
            MotionModuleImpl.set_motion_rate(2.0f);
        }
    }
}

void func_1249()
{
    if (WorkModuleImpl.is_flag(0x2000000b))
    {
        sys_21(0x24, 0x2);
    }
}

void func_1250()
{
    func_1249();
    if (TurnModuleImpl(0) && !TurnModuleImpl(0x1))
    {
        TurnModuleImpl(0x2711);
    }
}

int func_1251()
{
    int var0;
    if (global5 == 0xd4 || global5 == 0xd5 || global5 == 0xd9)
    {
        var0 = 0x40;
    }
    else
    {
        var0 = 0;
    }
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x1c000, 0x18, 0, var0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0x772, 0x10, 0x800, 0);
    return 0;
}

void func_1252()
{
    WorkModuleImpl.set_int(0x155, 0x11000007);
    func_1248();
    if (!StopModuleImpl(0x1))
    {
        func_1247();
    }
    global16 = func_1247;
    func_78(func_1253);
}

int func_1253()
{
    if (WorkModuleImpl.is_flag(0x2000000b) == 0 && global18 == 0)
    {
        func_16(0, 0);
        return 0;
    }
    if (global18 == 0x2)
    {
        func_16(0xd8, 0);
        return 0;
    }
    if (global18 == 0)
    {
        if (func_88() <= WorkModuleImplFloat.get_float(0x2000006))
        {
            func_16(0xd5, 0x1);
            return 0;
        }
    }
    if (global18 == 0)
    {
        if (func_88() >= WorkModuleImplFloat.get_float(0x2000001))
        {
            func_16(0xd4, 0x1);
            return 0;
        }
    }
    func_1245();
    func_1005();
    return 0;
}

int func_1254()
{
    func_1249();
    return 0;
}

int func_1255()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x1c000, 0x18, 0, 0x40);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0x772, 0x10, 0x800, 0x8000000);
    return 0;
}

void func_1256()
{
    WorkModuleImpl.set_int(0x156, 0x11000007);
    func_1248();
    if (!StopModuleImpl(0x1))
    {
        func_1247();
    }
    global16 = func_1247;
    func_78(func_1257);
}

int func_1257()
{
    if (WorkModuleImpl.is_flag(0x2000000b) == 0 && global18 == 0)
    {
        func_16(0, 0);
        return 0;
    }
    if (global18 == 0x2)
    {
        func_16(0xd8, 0);
        return 0;
    }
    if (global18 == 0)
    {
        if (func_84() < WorkModuleImplFloat.get_float(0x2000001))
        {
            func_16(0xd3, 0x1);
            return 0;
        }
        if (func_88() < 0)
        {
            func_16(0xd3, 0x1);
            return 0;
        }
    }
    func_1245();
    func_1005();
    return 0;
}

int func_1258()
{
    func_1249();
    return 0;
}

int func_1259()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x1c000, 0x18, 0, 0x40);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0x772, 0x10, 0x800, 0);
    return 0;
}

void func_1260()
{
    WorkModuleImpl.set_int(0x156, 0x11000007);
    func_1248();
    TurnModuleImpl(0x2710, 0x3);
    if (!StopModuleImpl(0x1))
    {
        func_1247();
    }
    global16 = func_1247;
    func_78(func_1261);
}

int func_1261()
{
    if (!WorkModuleImpl.is_flag(0x2000000b) && global18 == 0)
    {
        func_16(0, 0);
        return 0;
    }
    if (global18 == 0x2)
    {
        func_16(0xd8, 0);
        return 0;
    }
    if (!TurnModuleImpl(0) && global18 == 0)
    {
        func_16(0xd3, 0);
        return 0;
    }
    func_1245();
    func_1005();
    return 0;
}

void func_1262()
{
    WorkModuleImpl.inc_int(0x11000002);
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        if (!(global24 & 0x15))
        {
            
        }
    }
    else if (global32 < (float)0x2000022)
    {
        
    }
}

int func_1263()
{
    func_1250();
    return 0;
}

int func_1264()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x1c000, 0x18, 0, 0x40);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0x772, 0x10, 0x800, 0);
    return 0;
}

void func_1265()
{
    WorkModuleImpl.set_int(0x156, 0x11000007);
    func_1248();
    if (!StopModuleImpl(0x1))
    {
        func_1262();
    }
    global16 = func_1262;
    func_78(func_1266);
}

int func_1266()
{
    if (WorkModuleImpl.is_flag(0x2000000b) == 0 && global18 == 0)
    {
        func_16(0, 0);
        return 0;
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.get_int(0x11000002) > WorkModuleImpl.get_int(0x1300000c))
        {
            func_16(0xd7, 0);
            return 0;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xd8, 0);
        return 0;
    }
    if (global47 >= WorkModuleImpl.get_int(0x12000020) || global49 <= 0)
    {
        WorkModuleImpl.on_flag(0x2100000d);
    }
    func_1005();
    return 0;
}

int func_1267()
{
    func_1249();
    return 0;
}

int func_1268()
{
    StatusModuleImpl(0x5, 0x2, 0x1, 0x5, 0, 0x1, 0x1c000, 0x18, 0, 0x40);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0x772, 0x10, 0x800, 0x4);
    return 0;
}

void func_1269()
{
    WorkModuleImpl.set_int(0x157, 0x11000007);
    func_1248();
    func_78(func_1270);
}

int func_1270()
{
    if (WorkModuleImpl.is_flag(0x2000000b) == 0)
    {
        func_16(0xe, 0);
        return 0;
    }
    if (global18 == 0)
    {
        func_16(0xd9, 0);
        return 0;
    }
    func_1005();
    return 0;
}

int func_1271()
{
    func_1249();
    return 0;
}

int func_1272()
{
    StatusModuleImpl(0x5, 0x2, 0x13, 0x5, 0, 0x1, 0x1c000, 0x18, 0, 0x40);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0x1, 0x772, 0x10, 0x800, 0);
    return 0;
}

void func_1273()
{
    WorkModuleImpl.set_int(0x157, 0x11000007);
    func_1248();
    func_78(func_1274);
}

int func_1274()
{
    if (!WorkModuleImpl.is_flag(0x2000000b))
    {
        func_16(0xe, 0);
        return 0;
    }
    if (global18 == 0)
    {
        func_16(0xd9, 0);
        return 0;
    }
    func_1005();
    return 0;
}

int func_1275()
{
    func_1249();
    return 0;
}

int func_1276()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x1c000, 0x18, 0, 0x40);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0x772, 0x10, 0x800, 0);
    return 0;
}

void func_1277()
{
    WorkModuleImpl.set_int(0x156, 0x11000007);
    func_1248();
    if (!StopModuleImpl(0x1))
    {
        func_1279();
    }
    global16 = func_1279;
    func_78(func_1278);
}

int func_1278()
{
    if (global18 == 0)
    {
        if (WorkModuleImpl.get_int(0x11000002) > WorkModuleImpl.get_int(0x12000224))
        {
            func_16(0xd3, 0);
            return 0;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xd8, 0);
        return 0;
    }
    if (global18 == 0)
    {
        if (WorkModuleImpl.is_flag(0x2000000b) == 0)
        {
            func_16(0xd8, 0);
            return 0;
        }
    }
    func_1005();
    return 0;
}

void func_1279()
{
    WorkModuleImpl.inc_int(0x11000002);
}

int func_1280()
{
    func_1249();
    return 0;
}

void func_1281()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
        KineticModuleImpl.change_kinetic_type(0x6);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
        KineticModuleImpl.disable_energy(0);
        KineticModuleImpl.disable_energy(0x1);
        KineticModuleImpl.disable_energy(0x3);
        KineticModuleImpl.disable_energy(0x2);
        KineticModuleImpl.disable_energy(0x4);
    }
}

void func_1282()
{
    JostleModuleImpl(0x2710, 0);
    MotionModuleImpl(0x19, 0x1);
    if (global5 == 0xf)
    {
        WorkModuleImpl.set_int(0xf, 0x11000005);
    }
    else if (global5 == 0x10)
    {
        WorkModuleImpl.set_int(0x10, 0x11000005);
    }
    else
    {
        WorkModuleImpl.set_int(0xe, 0x11000005);
    }
    func_1281();
}

void func_1283()
{
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_1281();
    }
    if (WorkModuleImpl.get_int(0x11000002) >= WorkModuleImpl.get_int(0x11000003))
    {
        if (global18 == 0x2)
        {
            func_16(WorkModuleImpl.get_int(0x11000005));
            return 0x1;
        }
        else if (global18 == 0)
        {
            if (MotionModuleImpl.is_end())
            {
                func_16(0);
                return 0x1;
            }
        }
    }
}

void func_1284()
{
    if (global18 == 0x2)
    {
        KineticModuleImpl.enable_energy(0x1);
        KineticModuleImpl.enable_energy(0x2);
        KineticModuleImpl.enable_energy(0x4);
        KineticModuleImpl.mul_speed(0x2, 1.0f, 0);
    }
}

int func_1285()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0x2, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0, 0, 0);
    return 0;
}

void func_1286()
{
    func_1282();
    func_78(func_1287);
}

void func_1287()
{
    if (func_1283())
    {
        return;
    }
}

void func_1288()
{
    func_1284();
}

int func_1289()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0x2, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0, 0, 0);
    return 0;
}

void func_1290()
{
    func_1282();
    func_78(func_1291);
}

void func_1291()
{
    if (func_1283())
    {
        return;
    }
}

void func_1292()
{
    func_1284();
}

int func_1293()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x8000000, 0, 0);
    return 0;
}

void func_1294()
{
    func_22(0x199, 0, 1.0f);
    func_78(func_1295);
}

void func_1295()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    if (global18 == 0x2)
    {
        func_16(0x4c, 0);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1 || WorkModuleImpl.is_flag(0x2100000d) && WorkModuleImpl.is_flag(0x2100000e))
    {
        func_16(0, 0);
        return;
    }
}

void func_1296()
{
    
}

int func_1297()
{
    StatusModuleImpl(0x5, 0x2, 0x53, 0x5, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0, 0, 0);
    return 0;
}

void func_1298()
{
    float var0;
    float var1;
    var0 = LinkModuleImplFloat(0x7, 0);
    PostureModuleImpl.set_lr(-var0);
    PostureModuleImpl.update_rot_y();
    func_22(0x89, 0, 1.0f);
    WorkModuleImpl.on_flag2(0x21000003);
    var1 = (float)WorkModuleImpl.get_int(0x1200030a) + DamageModuleImplFloat(0) * WorkModuleImplFloat.get_float(0x200030b);
    ControlModuleImpl(0x6, var1, WorkModuleImplFloat.get_float(0x2000308), WorkModuleImplFloat.get_float(0x2000309));
    func_78(func_1299);
}

void func_1299()
{
    if (ControlModuleImplFloat.get_clatter() <= 0)
    {
        func_16(0x43, 0);
    }
}

void func_1300()
{
    CaptureModuleImpl(0x1);
}

int func_1301()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0, 0, 0);
    return 0;
}

void func_1302()
{
    float var0;
    int var1;
    var0 = -LinkModuleImplFloat(0x7, 0);
    PostureModuleImpl.set_lr(var0);
    PostureModuleImpl.update_rot_y();
    var1 = CaptureModuleImpl(0x8);
    WorkModuleImpl.set_int(var1, 0x11000002);
    CaptureModuleImpl(0x9, 0);
    func_22(0x2e, 0, 1.0f);
    WorkModuleImpl.on_flag2(0x21000003);
    func_78(func_1303);
}

void func_1303()
{
    float var0;
    if (WorkModuleImpl.is_flag(0x2100000d) && !WorkModuleImpl.is_flag(0x2100000e))
    {
        var0 = (float)WorkModuleImpl.get_int(0x12000315) + DamageModuleImplFloat(0) * WorkModuleImplFloat.get_float(0x2000316);
        ControlModuleImpl(0x6, var0, WorkModuleImplFloat.get_float(0x2000313), WorkModuleImplFloat.get_float(0x2000314));
        WorkModuleImpl.on_flag2(0x2100000e);
    }
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        if (ControlModuleImplFloat.get_clatter() <= 0)
        {
            func_16(0x43, 0);
        }
    }
}

void func_1304()
{
    int var0;
    CaptureModuleImpl(0x1);
    var0 = WorkModuleImpl.get_int(0x11000002);
    CaptureModuleImpl(0x9, var0);
}

int func_1305()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0x2, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x1000010, 0, 0);
    return 0;
}

void func_1306()
{
    float var0;
    var0 = 6.0f;
    MotionModuleImpl(0x1, 0x19b, 0, 1.0f, var0);
    GroundModuleImpl(0x2710, 0x5);
    func_20(0x2);
    WorkModuleImpl.off_flag2(0x2000005c);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_1307);
}

void func_1307()
{
    if (func_56())
    {
        return 0x1;
    }
    if (WorkModuleImpl.get_int(0x11000002) <= 0)
    {
        func_16(0x10b, 0);
        return;
    }
}

void func_1308()
{
    
}

int func_1309()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0x2, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x1000010, 0, 0);
    return 0;
}

void func_1310()
{
    func_40();
    WorkModuleImpl.strans_off(0x1e00003e);
    WorkModuleImpl.strans_off(0x1e00003f);
    WorkModuleImpl.strans_off(0x1e000044);
    WorkModuleImpl.strans_off(0x1e000043);
    WorkModuleImpl.strans_off(0x1e000045);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_1311);
}

void func_1311()
{
    if (WorkModuleImpl.check_strans(0x1e00003e) == 0)
    {
        if (WorkModuleImplFloat.get_float(0x1a) <= 0)
        {
            WorkModuleImpl.strans_on(0x1e00003e);
            WorkModuleImpl.strans_on(0x1e00003f);
            WorkModuleImpl.strans_on(0x1e000044);
            WorkModuleImpl.strans_on(0x1e000043);
            WorkModuleImpl.strans_on(0x1e000045);
        }
    }
    if (func_56())
    {
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00001b) && global18 == 0)
    {
        func_16(0x16, 0);
        return 0x1;
    }
    if (func_41())
    {
        return;
    }
}

void func_1312()
{
    
}

int func_1313()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0x4, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0x2, 0, 0, 0);
    return 0;
}

void func_1314()
{
    func_40();
    func_564();
    func_22(0x19, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_1315);
}

void func_1315()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_41())
    {
        return;
    }
    if (func_565())
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1316()
{
    
}

void func_1317()
{
    func_1318(WorkModuleImplFloat.get_float(0x2000302), WorkModuleImplFloat.get_float(0x2000303));
}

void func_1318(float arg0, float arg1)
{
    float var2;
    float var3;
    float var4;
    float var5;
    var2 = KineticModuleImplFloat.get_sum_speed_x(0x1);
    var3 = KineticModuleImplFloat.get_sum_speed_y(0x1);
    var4 = PostureModuleImplFloat.get_lr();
    var2 = var2 * WorkModuleImplFloat.get_float(0x300000e) + arg0 * var4;
    var3 = var3 * WorkModuleImplFloat.get_float(0x2000024) + arg1;
    var5 = WorkModuleImplFloat.get_float(0x300000f);
    if (var2 > var5)
    {
        var2 = var5;
    }
    else if (var2 < -var5)
    {
        var2 = -var5;
    }
    KineticModuleImpl(0xe, 0x1, 0, 0, var3, 0, 0, 0);
    KineticModuleImpl(0xe, 0x2, 0, var2, 0, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x1);
    KineticModuleImpl.enable_energy(0x2);
    KineticModuleImpl.disable_energy(0);
    KineticModuleImpl.disable_energy(0x3);
}

int func_1319()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x8000000, 0, 0);
    return 0;
}

void func_1320()
{
    func_22(0x198, 0, 1.0f);
    sys_21(0x23);
    if (!StopModuleImpl(0x1))
    {
        func_1322();
    }
    global16 = func_1322;
    func_78(func_1321);
}

void func_1321()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
    }
    if (WorkModuleImpl.is_flag(0x2100000f) && MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0, 0);
        return;
    }
}

void func_1322()
{
    int var0;
    if (WorkModuleImpl.is_flag(0x2100000d) == 0)
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x2100000e) == 0)
    {
        MotionModuleImpl.set_motion_rate(0);
        ItemModuleImpl(0x1d, 0);
        WorkModuleImpl.on_flag2(0x2100000e);
    }
    if (WorkModuleImpl.is_flag(0x2100000f) == 0)
    {
        var0 = ItemModuleImpl(0x1e, 0x1);
        if (var0 == 0)
        {
            sys_21(0x62);
            MotionModuleImpl.set_motion_rate(1.0f);
            ItemModuleImpl(0x1d, 0x1);
            WorkModuleImpl.on_flag2(0x2100000f);
        }
    }
}

void func_1323()
{
    if (ItemModuleImpl(0x11) == 0x6f)
    {
        sys_21(0x24, 0);
    }
    if (WorkModuleImpl.is_flag(0x2100000e) == 0x1 && WorkModuleImpl.is_flag(0x2100000f) == 0)
    {
        ItemModuleImpl(0x1d, 0x2);
    }
}

void func_1324()
{
    
}

int func_1325()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (ItemModuleImpl(0x4) == 0)
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
            return 0x1;
        }
        else if (global18 == 0)
        {
            func_16(0, 0);
            return 0x1;
        }
    }
    return 0;
}

int func_1326()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1327()
{
    int var0;
    if (global5 == 0x8)
    {
        WorkModuleImpl.on_flag2(0x21000010);
        KineticModuleImpl.change_kinetic_type(0x7);
        KineticModuleImpl.enable_energy(0);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x21000010);
    }
    ControlModuleImpl(0x271b);
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1397();
    }
    else if (var0 == 0x24)
    {
        func_1419();
    }
    else if (var0 == 0x27)
    {
        func_1441();
    }
    else if (var0 == 0x6c)
    {
        func_1467();
    }
    else if (var0 == 0x29)
    {
        func_1397();
    }
    else if (var0 == 0x2d)
    {
        func_1489();
    }
    else if (var0 == 0x2b)
    {
        func_1397();
    }
    func_78(func_1328);
}

void func_1328()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1398())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1420())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1442())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1468())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1398())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1490())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1398())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1329()
{
    
}

int func_1330()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1331()
{
    int var0;
    if (WorkModuleImpl.is_flag(0x21000010) == 0x1)
    {
        KineticModuleImpl.change_kinetic_type(0x7);
        KineticModuleImpl.enable_energy(0);
    }
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1399();
    }
    else if (var0 == 0x24)
    {
        func_1421();
    }
    else if (var0 == 0x27)
    {
        func_1443();
    }
    else if (var0 == 0x6c)
    {
        func_1469();
    }
    else if (var0 == 0x29)
    {
        func_1399();
    }
    else if (var0 == 0x2d)
    {
        func_1491();
    }
    else if (var0 == 0x2b)
    {
        func_1399();
    }
    func_78(func_1332);
}

void func_1332()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1400())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1422())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1444())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1470())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1400())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1492())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1400())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1333()
{
    
}

int func_1334()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1335()
{
    int var0;
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1403();
    }
    else if (var0 == 0x24)
    {
        func_1425();
    }
    else if (var0 == 0x27)
    {
        func_1447();
    }
    else if (var0 == 0x6c)
    {
        func_1473();
    }
    else if (var0 == 0x29)
    {
        func_1403();
    }
    else if (var0 == 0x2d)
    {
        func_1495();
    }
    else if (var0 == 0x2b)
    {
        func_1403();
    }
    func_78(func_1336);
}

void func_1336()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1404())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1426())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1448())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1474())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1404())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1496())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1404())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1337()
{
    
}

int func_1338()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1339()
{
    int var0;
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1401();
    }
    else if (var0 == 0x24)
    {
        func_1423();
    }
    else if (var0 == 0x27)
    {
        func_1445();
    }
    else if (var0 == 0x6c)
    {
        func_1471();
    }
    else if (var0 == 0x29)
    {
        func_1401();
    }
    else if (var0 == 0x2d)
    {
        func_1493();
    }
    else if (var0 == 0x2b)
    {
        func_1401();
    }
    func_78(func_1340);
}

void func_1340()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1402())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1424())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1446())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1472())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1402())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1494())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1402())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1341()
{
    
}

int func_1342()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1343()
{
    int var0;
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1405();
    }
    else if (var0 == 0x24)
    {
        func_1427();
    }
    else if (var0 == 0x27)
    {
        func_1449();
    }
    else if (var0 == 0x6c)
    {
        func_1475();
    }
    else if (var0 == 0x29)
    {
        func_1405();
    }
    else if (var0 == 0x2d)
    {
        func_1497();
    }
    else if (var0 == 0x2b)
    {
        func_1405();
    }
    func_78(func_1344);
}

void func_1344()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1406())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1428())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1450())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1474())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1406())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1498())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1406())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1345()
{
    
}

int func_1346()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x3, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1347()
{
    int var0;
    if (WorkModuleImpl.is_flag(0x21000010) == 0x1)
    {
        KineticModuleImpl.change_kinetic_type(0x7);
        KineticModuleImpl.enable_energy(0);
    }
    func_75();
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1407();
    }
    else if (var0 == 0x24)
    {
        func_1429();
    }
    else if (var0 == 0x27)
    {
        func_1451();
    }
    else if (var0 == 0x6c)
    {
        func_1477();
    }
    else if (var0 == 0x29)
    {
        func_1407();
    }
    else if (var0 == 0x2d)
    {
        func_1499();
    }
    else if (var0 == 0x2b)
    {
        func_1407();
    }
    func_78(func_1348);
}

void func_1348()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1408())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1430())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1452())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1478())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1408())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1500())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1408())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1349()
{
    
}

int func_1350()
{
    StatusModuleImpl(0x5, 0, 0x32, 0x3, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1351()
{
    int var0;
    func_75();
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1409();
    }
    else if (var0 == 0x24)
    {
        func_1431();
    }
    else if (var0 == 0x27)
    {
        func_1453();
    }
    else if (var0 == 0x6c)
    {
        func_1479();
    }
    else if (var0 == 0x29)
    {
        func_1409();
    }
    else if (var0 == 0x2d)
    {
        func_1501();
    }
    else if (var0 == 0x2b)
    {
        func_1409();
    }
    func_78(func_1352);
}

void func_1352()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1410())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1432())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1454())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1480())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1410())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1502())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1410())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1353()
{
    
}

int func_1354()
{
    int var0;
    if (ItemModuleImpl(0x11) == 0x6c)
    {
        var0 = 0x4;
    }
    else
    {
        var0 = 0;
    }
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, var0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1355()
{
    func_75();
    func_1324();
    if (global18 == 0)
    {
        func_676();
    }
    func_94();
}

void func_1356()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1393();
    }
    else if (var0 == 0x24)
    {
        func_1415();
    }
    else if (var0 == 0x27)
    {
        func_1437();
    }
    else if (var0 == 0x6c)
    {
        func_1460();
    }
    else if (var0 == 0x29)
    {
        func_1393();
    }
    else if (var0 == 0x2d)
    {
        func_1485();
    }
    else if (var0 == 0x2b)
    {
        func_1393();
    }
}

void func_1357()
{
    func_1355();
    KineticModuleImpl.change_kinetic_type(0x13);
    func_1356();
    func_78(func_1358);
}

void func_1358()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1394())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1416())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1438())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1461())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1394())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1486())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1394())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1359()
{
    
}

int func_1360()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1361()
{
    int var0;
    WorkModuleImpl.off_flag2(0x21000005);
    if (global32 >= (float)WorkModuleImpl.get_int(0x12000020) || global49 <= 0)
    {
        WorkModuleImpl.on_flag2(0x2100000e);
    }
    func_75();
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1411();
    }
    else if (var0 == 0x24)
    {
        func_1433();
    }
    else if (var0 == 0x27)
    {
        func_1455();
    }
    else if (var0 == 0x6c)
    {
        func_1481();
    }
    else if (var0 == 0x29)
    {
        func_1411();
    }
    else if (var0 == 0x2d)
    {
        func_1503();
    }
    else if (var0 == 0x2b)
    {
        func_1411();
    }
    if (!StopModuleImpl(0x1))
    {
        func_1363();
    }
    global16 = func_1363;
    func_78(func_1362);
}

void func_1362()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1412())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1434())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1456())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1482())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1412())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1504())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1412())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1363()
{
    func_547(0x2100000e);
}

void func_1364()
{
    
}

int func_1365()
{
    int var0;
    if (ItemModuleImpl(0x11) == 0x6c)
    {
        var0 = 0x4;
    }
    else
    {
        var0 = 0;
    }
    StatusModuleImpl(0x5, 0x2, 0x1, 0x5, var0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1366()
{
    int var0;
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1395();
    }
    else if (var0 == 0x24)
    {
        func_1417();
    }
    else if (var0 == 0x27)
    {
        func_1439();
    }
    else if (var0 == 0x6c)
    {
        func_1462();
    }
    else if (var0 == 0x29)
    {
        func_1395();
    }
    else if (var0 == 0x2d)
    {
        func_1487();
    }
    else if (var0 == 0x2b)
    {
        func_1395();
    }
    func_78(func_1367);
}

void func_1367()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1396())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1418())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1440())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1463())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1396())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1488())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1396())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1368()
{
    
}

int func_1369()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x3, 0, 0x1, 0x68020, 0x1fff8, 0x3c0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x1, 0x8000010, 0x4000, 0);
    return 0;
}

void func_1370()
{
    int var0;
    WorkModuleImpl.off_flag2(0x20000003);
    func_1324();
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        func_1413();
    }
    else if (var0 == 0x24)
    {
        func_1435();
    }
    else if (var0 == 0x27)
    {
        func_1457();
    }
    else if (var0 == 0x6c)
    {
        func_1483();
    }
    else if (var0 == 0x29)
    {
        func_1413();
    }
    else if (var0 == 0x2d)
    {
        func_1505();
    }
    else if (var0 == 0x2b)
    {
        func_1413();
    }
    func_78(func_1371);
}

void func_1371()
{
    int var0;
    if (func_1325())
    {
        return;
    }
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x25)
    {
        if (func_1414())
        {
            return;
        }
    }
    else if (var0 == 0x24)
    {
        if (func_1436())
        {
            return;
        }
    }
    else if (var0 == 0x27)
    {
        if (func_1458())
        {
            return;
        }
    }
    else if (var0 == 0x6c)
    {
        if (func_1484())
        {
            return;
        }
    }
    else if (var0 == 0x29)
    {
        if (func_1414())
        {
            return;
        }
    }
    else if (var0 == 0x2d)
    {
        if (func_1506())
        {
            return;
        }
    }
    else if (var0 == 0x2b)
    {
        if (func_1414())
        {
            return;
        }
    }
    if (global3 == 0)
    {
        func_1541();
    }
    func_1542();
}

void func_1372()
{
    
}

void func_1373()
{
    WorkModuleImpl.off_flag2(0x2100000f);
    WorkModuleImpl.strans_on(0x1e00008a);
    WorkModuleImpl.strans_on(0x1e00008b);
    WorkModuleImpl.strans_on(0x1e00008c);
    WorkModuleImpl.strans_on(0x1e00008d);
    WorkModuleImpl.strans_on(0x1e00002d);
    WorkModuleImpl.strans_on(0x1e000088);
    WorkModuleImpl.strans_on(0x1e000031);
    WorkModuleImpl.strans_on(0x1e000089);
    WorkModuleImpl.strans_on(0x1e000084);
    WorkModuleImpl.strans_on(0x1e000086);
}

int func_1374()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008b) && WorkModuleImpl.is_flag(0x2100000d))
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008c) && global24 & 0x200000)
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008d) && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00002d) && WorkModuleImpl.is_flag(0x2100000f) && global24 & 0x20000)
    {
        func_16(0x3, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000088) && global24 & 0x20000)
    {
        var0 = WorkModuleImpl.get_int(0x11000008);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000031) && WorkModuleImpl.is_flag(0x2100000f) && global24 & 0x80000)
    {
        func_16(0x7, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000089) && global24 & 0x80000)
    {
        var0 = WorkModuleImpl.get_int(0x11000009);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000084) && func_88() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        var0 = WorkModuleImpl.get_int(0x11000004);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000086) && func_89() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        var0 = WorkModuleImpl.get_int(0x11000005);
        func_16(var0, 0x1);
        return 0x1;
    }
    return 0;
}

void func_1375()
{
    WorkModuleImpl.strans_on(0x1e00008a);
    WorkModuleImpl.strans_on(0x1e00008b);
    WorkModuleImpl.strans_on(0x1e00008c);
    WorkModuleImpl.strans_on(0x1e00008d);
    WorkModuleImpl.strans_on(0x1e00002d);
    WorkModuleImpl.strans_on(0x1e000088);
    WorkModuleImpl.strans_on(0x1e000083);
}

int func_1376()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008b) && WorkModuleImpl.is_flag(0x2100000d))
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008c) && global24 & 0x200000)
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008d) && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00002d) && WorkModuleImpl.is_flag(0x2100000f) && global24 & 0x20000)
    {
        func_16(0x3, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000088) && global24 & 0x20000)
    {
        var0 = WorkModuleImpl.get_int(0x11000008);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (func_84() < WorkModuleImplFloat.get_float(0x2000001) && GroundModuleImplFloat(0) < 1.0f)
    {
        var0 = WorkModuleImpl.get_int(0x11000006);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (func_88() < 0 && GroundModuleImplFloat(0) < 1.0f)
    {
        var0 = WorkModuleImpl.get_int(0x11000006);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000083) && func_88() < WorkModuleImplFloat.get_float(0x2000001))
    {
        var0 = WorkModuleImpl.get_int(0x11000003);
        func_16(var0, 0x1);
        return 0x1;
    }
    return 0;
}

void func_1377()
{
    WorkModuleImpl.strans_on(0x1e00008a);
    WorkModuleImpl.strans_on(0x1e00008b);
    WorkModuleImpl.strans_on(0x1e00008c);
    WorkModuleImpl.strans_on(0x1e00008d);
    WorkModuleImpl.strans_on(0x1e000031);
    WorkModuleImpl.strans_on(0x1e000089);
    WorkModuleImpl.strans_on(0x1e000083);
}

int func_1378()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008b) && WorkModuleImpl.is_flag(0x2100000d))
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008c) && global24 & 0x200000)
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008d) && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000031) && WorkModuleImpl.is_flag(0x2100000f) && global24 & 0x80000)
    {
        func_16(0x7, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000089) && global24 & 0x80000)
    {
        var0 = WorkModuleImpl.get_int(0x11000009);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (func_84() < WorkModuleImplFloat.get_float(0x2000001) && GroundModuleImplFloat(0) < 1.0f)
    {
        var0 = WorkModuleImpl.get_int(0x11000007);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (func_89() < 0 && GroundModuleImplFloat(0) < 1.0f)
    {
        var0 = WorkModuleImpl.get_int(0x11000007);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000083) && func_89() < WorkModuleImplFloat.get_float(0x2000001))
    {
        var0 = WorkModuleImpl.get_int(0x11000003);
        func_16(var0, 0x1);
        return 0x1;
    }
    return 0;
}

void func_1379()
{
    func_22(0x167, 0, 1.0f);
    MotionModuleImpl(0x30);
    WorkModuleImpl.strans_on(0x1e00008a);
    WorkModuleImpl.strans_on(0x1e00008b);
    WorkModuleImpl.strans_on(0x1e00008c);
    WorkModuleImpl.strans_on(0x1e00008d);
    WorkModuleImpl.strans_on(0x1e000083);
    WorkModuleImpl.strans_on(0x1e000084);
    WorkModuleImpl.strans_on(0x1e000086);
}

int func_1380()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008b) && WorkModuleImpl.is_flag(0x2100000d))
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008c) && global24 & 0x200000)
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008d) && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008c) && MotionModuleImpl.is_end())
    {
        var0 = WorkModuleImpl.get_int(0x11000003);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000084) && func_88() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        var0 = WorkModuleImpl.get_int(0x11000004);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000086) && func_89() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        var0 = WorkModuleImpl.get_int(0x11000005);
        func_16(var0, 0x1);
        return 0x1;
    }
    return 0;
}

void func_1381()
{
    func_22(0x16c, 0, 1.0f);
    MotionModuleImpl(0x30);
    WorkModuleImpl.strans_on(0x1e00008a);
    WorkModuleImpl.strans_on(0x1e00008b);
    WorkModuleImpl.strans_on(0x1e00008c);
    WorkModuleImpl.strans_on(0x1e00008d);
    WorkModuleImpl.strans_on(0x1e000083);
    WorkModuleImpl.strans_on(0x1e000084);
    WorkModuleImpl.strans_on(0x1e000086);
}

int func_1382()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008b) && WorkModuleImpl.is_flag(0x2100000d))
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008c) && global24 & 0x200000)
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008d) && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000083) && MotionModuleImpl.is_end())
    {
        var0 = WorkModuleImpl.get_int(0x11000003);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000084) && func_88() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        var0 = WorkModuleImpl.get_int(0x11000004);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000086) && func_89() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        var0 = WorkModuleImpl.get_int(0x11000005);
        func_16(var0, 0x1);
        return 0x1;
    }
    return 0;
}

void func_1383()
{
    float var0;
    var0 = func_88();
    if (var0 < 0)
    {
        TurnModuleImpl(0x2710, 0x2, 0);
        PostureModuleImpl(0x271c);
    }
    if (WorkModuleImpl.is_flag(0x21000010) == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x1c);
    }
    func_22(0x168, 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e00008a);
    WorkModuleImpl.strans_on(0x1e00008c);
    WorkModuleImpl.strans_on(0x1e00008d);
    WorkModuleImpl.strans_on(0x1e000083);
}

int func_1384()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end() && GroundModuleImplFloat(0) < 1.0f)
    {
        var0 = WorkModuleImpl.get_int(0x11000006);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008c) && global24 & 0x200000)
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008d) && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000083) && MotionModuleImpl.is_end())
    {
        var0 = WorkModuleImpl.get_int(0x11000003);
        func_16(var0, 0);
        return 0x1;
    }
    return 0;
}

void func_1385()
{
    KineticModuleImpl.change_kinetic_type(0x1d);
    func_22(0x16d, 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e00008a);
    WorkModuleImpl.strans_on(0x1e00008c);
    WorkModuleImpl.strans_on(0x1e00008d);
    WorkModuleImpl.strans_on(0x1e000083);
}

int func_1386()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end() && GroundModuleImplFloat(0) < 1.0f)
    {
        var0 = WorkModuleImpl.get_int(0x11000007);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008c) && global24 & 0x200000)
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008d) && global24 & 0x100000 && ControlModuleImpl(0x271c))
    {
        var0 = WorkModuleImpl.get_int(0x1100000c);
        func_16(var0, 0x1);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000083) && MotionModuleImpl.is_end())
    {
        var0 = WorkModuleImpl.get_int(0x11000003);
        func_16(var0, 0);
        return 0x1;
    }
    return 0;
}

void func_1387()
{
    func_22(0x16e, 0, 1.0f);
    WorkModuleImpl.strans_on(0x1e00008a);
    WorkModuleImpl.strans_on(0x1e00008d);
}

int func_1388()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e00008d) && MotionModuleImpl.is_end())
    {
        var0 = WorkModuleImpl.get_int(0x1100000b);
        func_16(var0, 0);
        return 0x1;
    }
    return 0;
}

void func_1389()
{
    func_22(0x16f, 0, 1.0f);
    func_1373();
    WorkModuleImpl.strans_on(0x1e000083);
}

int func_1390()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008a) && global18 == 0x2)
    {
        var0 = WorkModuleImpl.get_int(0x1100000a);
        func_16(var0, 0);
        return 0x1;
    }
    if (MotionModuleImplFloat.get_frame() > WorkModuleImplFloat.get_float(0x3000028))
    {
        if (WorkModuleImpl.check_strans(0x1e00008b) && WorkModuleImpl.is_flag(0x2100000d))
        {
            var0 = WorkModuleImpl.get_int(0x1100000a);
            func_16(var0, 0);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e00008c) && global24 & 0x200000)
        {
            var0 = WorkModuleImpl.get_int(0x1100000c);
            func_16(var0, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e00008d) && global24 & 0x100000 && ControlModuleImpl(0x271c))
        {
            var0 = WorkModuleImpl.get_int(0x1100000c);
            func_16(var0, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e00002d) && WorkModuleImpl.is_flag(0x2100000f) && global24 & 0x20000)
        {
            func_16(0x3, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000088) && global24 & 0x20000)
        {
            var0 = WorkModuleImpl.get_int(0x11000008);
            func_16(var0, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000031) && WorkModuleImpl.is_flag(0x2100000f) && global24 & 0x80000)
        {
            func_16(0x7, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000089) && global24 & 0x80000)
        {
            var0 = WorkModuleImpl.get_int(0x11000009);
            func_16(var0, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000084) && func_88() >= WorkModuleImplFloat.get_float(0x2000001))
        {
            var0 = WorkModuleImpl.get_int(0x11000004);
            func_16(var0, 0x1);
            return 0x1;
        }
        if (WorkModuleImpl.check_strans(0x1e000086) && func_89() >= WorkModuleImplFloat.get_float(0x2000001))
        {
            var0 = WorkModuleImpl.get_int(0x11000005);
            func_16(var0, 0x1);
            return 0x1;
        }
    }
    if (WorkModuleImpl.check_strans(0x1e000083) && MotionModuleImpl.is_end())
    {
        var0 = WorkModuleImpl.get_int(0x11000003);
        func_16(var0, 0);
        return 0x1;
    }
    return 0;
}

void func_1391()
{
    WorkModuleImpl.strans_on(0x1e00008f);
}

int func_1392()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008f) && global18 == 0)
    {
        var0 = WorkModuleImpl.get_int(0x1100000d);
        func_16(var0, 0);
        return 0x1;
    }
    return 0;
}

void func_1393()
{
    func_1391();
}

int func_1394()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return func_1392();
}

void func_1395()
{
    func_1391();
}

int func_1396()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return func_1392();
}

void func_1397()
{
    WorkModuleImpl.strans_on(0x1e000000);
    func_1373();
}

int func_1398()
{
    if (WorkModuleImpl.check_strans(0x1e000000) && MotionModuleImpl(0x1a, 0x1) && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
    return func_1374();
}

void func_1399()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1375();
}

int func_1400()
{
    if (WorkModuleImpl.check_strans(0x1e00003c) && MotionModuleImpl(0x1a, 0x1) && global18 == 0)
    {
        func_16(0x1, 0);
        return 0x1;
    }
    return func_1376();
}

void func_1401()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1377();
}

int func_1402()
{
    if (WorkModuleImpl.check_strans(0x1e00003c) && MotionModuleImpl(0x1a, 0x1) && global18 == 0)
    {
        func_16(0x1, 0);
        return 0x1;
    }
    return func_1378();
}

void func_1403()
{
    func_1379();
}

int func_1404()
{
    return func_1380();
}

void func_1405()
{
    func_1381();
}

int func_1406()
{
    return func_1382();
}

void func_1407()
{
    func_1383();
}

int func_1408()
{
    return func_1384();
}

void func_1409()
{
    func_1385();
}

int func_1410()
{
    return func_1386();
}

void func_1411()
{
    func_1387();
}

int func_1412()
{
    return func_1388();
}

void func_1413()
{
    func_1389();
}

int func_1414()
{
    return func_1390();
}

void func_1415()
{
    func_1391();
}

int func_1416()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return func_1392();
}

void func_1417()
{
    func_1391();
}

int func_1418()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return func_1392();
}

void func_1419()
{
    WorkModuleImpl.strans_on(0x1e000000);
    func_1373();
}

int func_1420()
{
    if (WorkModuleImpl.check_strans(0x1e000000) && MotionModuleImpl(0x1a, 0x1) && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
    return func_1374();
}

void func_1421()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1375();
}

int func_1422()
{
    if (WorkModuleImpl.check_strans(0x1e00003c) && MotionModuleImpl(0x1a, 0x1) && global18 == 0)
    {
        func_16(0x1, 0);
        return 0x1;
    }
    return func_1376();
}

void func_1423()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1377();
}

int func_1424()
{
    if (WorkModuleImpl.check_strans(0x1e00003c) && MotionModuleImpl(0x1a, 0x1) && global18 == 0)
    {
        func_16(0x1, 0);
        return 0x1;
    }
    return func_1378();
}

void func_1425()
{
    func_1379();
}

int func_1426()
{
    return func_1380();
}

void func_1427()
{
    func_1381();
}

int func_1428()
{
    return func_1382();
}

void func_1429()
{
    func_1383();
}

int func_1430()
{
    return func_1384();
}

void func_1431()
{
    func_1385();
}

int func_1432()
{
    return func_1386();
}

void func_1433()
{
    func_1387();
}

int func_1434()
{
    return func_1388();
}

void func_1435()
{
    func_1389();
}

int func_1436()
{
    return func_1390();
}

void func_1437()
{
    WorkModuleImpl.strans_on(0x1e000002);
    func_1391();
}

int func_1438()
{
    if (WorkModuleImpl.check_strans(0x1e000002) && MotionModuleImpl.is_end() && WorkModuleImpl.get_int(0x1100000e) >= 0x3)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return func_1392();
}

void func_1439()
{
    WorkModuleImpl.strans_on(0x1e000002);
    func_1391();
}

int func_1440()
{
    if (WorkModuleImpl.check_strans(0x1e000002) && MotionModuleImpl.is_end() && WorkModuleImpl.get_int(0x1100000e) >= 0x3)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return func_1392();
}

void func_1441()
{
    WorkModuleImpl.strans_on(0x1e000000);
    func_1373();
}

int func_1442()
{
    if (WorkModuleImpl.check_strans(0x1e000000) && MotionModuleImpl(0x1a, 0x1) && WorkModuleImpl.get_int(0x1100000e) >= 0x3 && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
    return func_1374();
}

void func_1443()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1375();
}

int func_1444()
{
    if (WorkModuleImpl.check_strans(0x1e00003c) && MotionModuleImpl(0x1a, 0x1) && WorkModuleImpl.get_int(0x1100000e) >= 0x3 && global18 == 0)
    {
        func_16(0x1, 0);
        return 0x1;
    }
    return func_1376();
}

void func_1445()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1377();
}

int func_1446()
{
    if (WorkModuleImpl.check_strans(0x1e00003c) && MotionModuleImpl(0x1a, 0x1) && WorkModuleImpl.get_int(0x1100000e) >= 0x3 && global18 == 0)
    {
        func_16(0x1, 0);
        return 0x1;
    }
    return func_1378();
}

void func_1447()
{
    func_1379();
}

int func_1448()
{
    return func_1380();
}

void func_1449()
{
    func_1381();
}

int func_1450()
{
    return func_1382();
}

void func_1451()
{
    func_1383();
}

int func_1452()
{
    return func_1384();
}

void func_1453()
{
    func_1385();
}

int func_1454()
{
    return func_1386();
}

void func_1455()
{
    func_1387();
}

int func_1456()
{
    return func_1388();
}

void func_1457()
{
    func_1389();
}

int func_1458()
{
    return func_1390();
}

int func_1459()
{
    if (global38 & 0x1)
    {
        func_16(0xfb, 0x1);
        return 0x1;
    }
    return 0;
}

void func_1460()
{
    func_1391();
}

int func_1461()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_1459())
    {
        return 0x1;
    }
    return func_1392();
}

void func_1462()
{
    func_1391();
}

int func_1463()
{
    if (func_56())
    {
        return 0x1;
    }
    if (func_1459())
    {
        return 0x1;
    }
    return func_1392();
}

void func_1464()
{
    WorkModuleImpl.strans_off(0x1e000089);
}

void func_1465()
{
    WorkModuleImpl.strans_on(0x1e00008e);
}

int func_1466()
{
    int var0;
    if (WorkModuleImpl.check_strans(0x1e00008e) && func_89() >= WorkModuleImplFloat.get_float(0x2000007) && global24 & 0x80000)
    {
        if (ControlModuleImpl(0x2712, 0x3))
        {
            var0 = WorkModuleImpl.get_int(0x11000009);
        }
        else
        {
            var0 = WorkModuleImpl.get_int(0x11000008);
        }
        func_16(var0, 0x1);
        return 0x1;
    }
    return 0;
}

void func_1467()
{
    WorkModuleImpl.strans_on(0x1e000000);
    func_1373();
    func_1464();
    func_1465();
}

int func_1468()
{
    if (func_1459())
    {
        return 0x1;
    }
    if (func_1374())
    {
        return 0x1;
    }
    return func_1466();
}

void func_1469()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1375();
    func_1464();
    func_1465();
}

int func_1470()
{
    if (func_1459())
    {
        return 0x1;
    }
    if (func_1376())
    {
        return 0x1;
    }
    return func_1466();
}

void func_1471()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1377();
    func_1464();
    func_1465();
}

int func_1472()
{
    if (func_1459())
    {
        return 0x1;
    }
    if (func_1378())
    {
        return 0x1;
    }
    return func_1466();
}

void func_1473()
{
    func_1379();
    func_1464();
}

int func_1474()
{
    if (func_1459())
    {
        return 0x1;
    }
    return func_1380();
}

void func_1475()
{
    func_1381();
    func_1464();
}

int func_1476()
{
    if (func_1459())
    {
        return 0x1;
    }
    return func_1382();
}

void func_1477()
{
    func_1383();
    func_1464();
}

int func_1478()
{
    if (func_1459())
    {
        return 0x1;
    }
    return func_1384();
}

void func_1479()
{
    func_1385();
    func_1464();
}

int func_1480()
{
    if (func_1459())
    {
        return 0x1;
    }
    return func_1386();
}

void func_1481()
{
    func_1387();
}

int func_1482()
{
    if (func_1459())
    {
        return 0x1;
    }
    return func_1388();
}

void func_1483()
{
    func_1389();
    func_1464();
    func_1465();
}

int func_1484()
{
    if (func_1459())
    {
        return 0x1;
    }
    if (func_1390())
    {
        return 0x1;
    }
    if (MotionModuleImplFloat.get_frame() > WorkModuleImplFloat.get_float(0x3000028))
    {
        return func_1466();
    }
    return 0;
}

void func_1485()
{
    WorkModuleImpl.strans_on(0x1e000002);
    func_1391();
}

int func_1486()
{
    if (WorkModuleImpl.check_strans(0x1e000002) && MotionModuleImpl.is_end() && WorkModuleImpl.get_int(0x1100000e) >= 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return func_1392();
}

void func_1487()
{
    WorkModuleImpl.strans_on(0x1e000002);
    func_1391();
}

int func_1488()
{
    if (WorkModuleImpl.check_strans(0x1e000002) && MotionModuleImpl.is_end() && WorkModuleImpl.get_int(0x1100000e) >= 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return func_1392();
}

void func_1489()
{
    WorkModuleImpl.strans_on(0x1e000000);
    func_1373();
}

int func_1490()
{
    if (WorkModuleImpl.check_strans(0x1e000000) && MotionModuleImpl(0x1a, 0x1) && WorkModuleImpl.get_int(0x1100000e) >= 0x2 && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
    return func_1374();
}

void func_1491()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1375();
}

int func_1492()
{
    if (WorkModuleImpl.check_strans(0x1e00003c) && MotionModuleImpl(0x1a, 0x1) && WorkModuleImpl.get_int(0x1100000e) >= 0x2 && global18 == 0)
    {
        func_16(0x1, 0);
        return 0x1;
    }
    return func_1376();
}

void func_1493()
{
    WorkModuleImpl.strans_on(0x1e00003c);
    func_1377();
}

int func_1494()
{
    if (WorkModuleImpl.check_strans(0x1e00003c) && MotionModuleImpl(0x1a, 0x1) && WorkModuleImpl.get_int(0x1100000e) >= 0x2 && global18 == 0)
    {
        func_16(0x1, 0);
        return 0x1;
    }
    return func_1378();
}

void func_1495()
{
    func_1379();
}

int func_1496()
{
    return func_1380();
}

void func_1497()
{
    func_1381();
}

int func_1498()
{
    return func_1382();
}

void func_1499()
{
    func_1383();
}

int func_1500()
{
    return func_1384();
}

void func_1501()
{
    func_1385();
}

int func_1502()
{
    return func_1386();
}

void func_1503()
{
    func_1387();
}

int func_1504()
{
    return func_1388();
}

void func_1505()
{
    func_1389();
}

int func_1506()
{
    return func_1390();
}

int func_1507()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0x1, 0x84403ea, 0, 0);
    return 0;
}

void func_1508()
{
    KineticModuleImpl(0x2716, 0);
    KineticModuleImpl(0x2716, 0x1);
    KineticModuleImpl(0x2716, 0x2);
    KineticModuleImpl(0x2716, 0x3);
    ItemModuleImpl(0x12, 0x2);
    EffectModuleImpl(0x2732, 0, 0, 10.0f, 10.0f, 0, 0, 0, 0x1, 0x3);
    HitModuleImpl(0x2710, 0x2);
    func_1511();
    if (!StopModuleImpl(0x1))
    {
        func_1510();
    }
    global16 = func_1510;
    func_78(func_1509);
}

void func_1509()
{
    int var0;
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_1511();
    }
    var0 = ItemModuleImpl(0x1e, 0x1);
    if (var0 == 0x1)
    {
        EffectModuleImpl(0x2733, 0x1e, 0x1);
        sys_21(0x53);
        if (global18 == 0)
        {
            func_16(0x98, 0);
        }
        else
        {
            func_16(0xa1, 0);
        }
    }
}

void func_1510()
{
    WorkModuleImpl.inc_int(0x11000002);
}

void func_1511()
{
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
    }
    else
    {
        GroundModuleImpl(0x2710, 0x5);
    }
    if (WorkModuleImpl.is_flag2(0x2100000d) == 0)
    {
        func_22(0x18e, 0, 1.0f);
        WorkModuleImpl.on_flag2(0x2100000d);
    }
}

void func_1512()
{
    int var0;
    KineticModuleImpl(0x2715, 0);
    KineticModuleImpl(0x2715, 0x1);
    KineticModuleImpl(0x2715, 0x2);
    KineticModuleImpl(0x2715, 0x3);
    var0 = 0;
    if (ItemModuleImpl(0x4) == 0x1)
    {
        ItemModuleImpl(0x1b);
        var0 = ItemModuleImpl(0x1e, 0x1);
    }
    if (var0 == 0)
    {
        EffectModuleImpl(0x2733, 0x1e, 0x1);
        sys_21(0x53);
    }
}

void func_1513()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x17e2, 0x80003e2, 0x4000, 0x8000);
}

void func_1514()
{
    HitModuleImpl(0x2710, 0x1);
    JostleModuleImpl(0x2710, 0);
    KineticModuleImpl.clear_speed_all();
    ItemModuleImpl(0x13, 0);
    func_78(func_1515);
}

void func_1515()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_1516(0x191, 0x194, 0x2100000d);
    }
    if (WorkModuleImpl.is_flag(0x2100000e) && !WorkModuleImpl.is_flag(0x2100000f))
    {
        ItemModuleImpl(0xb);
        ItemModuleImpl(0x13, 0x1);
        WorkModuleImpl.on_flag2(0x2100000f);
        WorkModuleImpl.set_int(0, 0x11000002);
        if (!StopModuleImpl(0x1))
        {
            func_1521();
        }
        global16 = func_1521;
        sys_21(0x55, 0x1, 0x1c);
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xfc, 0);
        return 0x1;
    }
}

void func_1516(int arg0, int arg1, int arg2)
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0xf);
        GroundModuleImpl(0x2710, 0x1);
        if (WorkModuleImpl.is_flag2(arg2))
        {
            func_23(arg0);
        }
        else
        {
            func_22(arg0, 0, 1.0f);
            WorkModuleImpl.on_flag2(arg2);
        }
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0x11);
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag2(arg2))
        {
            func_23(arg1);
        }
        else
        {
            func_22(arg1, 0, 1.0f);
            WorkModuleImpl.on_flag2(arg2);
        }
    }
}

void func_1517()
{
    
}

void func_1518()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x20);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x7e2, 0x80003e2, 0x4000, 0);
}

void func_1519()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    JostleModuleImpl(0x2710, 0);
    func_1516(0x192, 0x195, 0x2100000d);
    if (!StopModuleImpl(0x1))
    {
        func_1521();
    }
    global16 = func_1521;
    func_78(func_1520);
}

void func_1520()
{
    if (StatusModuleImpl(0x6) == 0 && global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_1516(0x192, 0x195, 0x2100000d);
    }
    if (WorkModuleImpl.get_int(0x11000002) >= WorkModuleImpl.get_int(0x1200030e))
    {
        func_16(0xfd, 0);
        return 0x1;
    }
}

void func_1521()
{
    WorkModuleImpl.inc_int(0x11000002);
}

void func_1522()
{
    
}

void func_1523()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x20);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x80003e2, 0x4000, 0);
}

void func_1524()
{
    WorkModuleImpl.off_flag2(0x2100000d);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0x13, 0x2);
    func_78(func_1525);
}

void func_1525()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_1516(0x193, 0x196, 0x2100000d);
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0, 0);
        }
        else
        {
            func_16(0xe, 0);
        }
        return 0x1;
    }
}

void func_1526()
{
    ItemModuleImpl(0x10, 0);
}

int func_1527(int arg0)
{
    return func_1528(arg0) == 0x1 || func_1529(arg0) == 0x1;
}

int func_1528(int arg0)
{
    return arg0 == WorkModuleImpl.get_int(0x11000003) || arg0 == WorkModuleImpl.get_int(0x11000004) || arg0 == WorkModuleImpl.get_int(0x11000006) || arg0 == WorkModuleImpl.get_int(0x11000005) || arg0 == WorkModuleImpl.get_int(0x11000007) || arg0 == WorkModuleImpl.get_int(0x11000008) || arg0 == WorkModuleImpl.get_int(0x11000009) || arg0 == WorkModuleImpl.get_int(0x1100000c) || arg0 == WorkModuleImpl.get_int(0x1100000d);
}

int func_1529(int arg0)
{
    return arg0 == WorkModuleImpl.get_int(0x1100000a) || arg0 == WorkModuleImpl.get_int(0x1100000b);
}

void func_1530(int arg0, int arg1)
{
    int var2;
    int var3;
    int var4;
    float var5;
    float var6;
    int var7;
    float var8;
    float var9;
    var2 = global4;
    var3 = global5;
    if (var2 == WorkModuleImpl.get_int(0x11000003) || var2 == WorkModuleImpl.get_int(0x1100000d))
    {
        var4 = 0;
        var5 = 0;
        var6 = 1.0f;
        if (func_1529(var3) == 0x1)
        {
            var5 = MotionModuleImplFloat.get_frame();
            var6 = MotionModuleImplFloat(0x9);
            var4 = 0x1;
        }
        var7 = 0x163;
        func_22(var7, 0, 1.0f);
        if (MotionModuleImpl(0x15, 0x1) == 0xffffffff)
        {
            if (var4 == 0x1)
            {
                MotionModuleImpl(0x17, 0x1, arg0, 0, var5, var6, 0x1);
            }
            else
            {
                MotionModuleImpl(0x17, 0x1, arg0, 0, var5, var6);
            }
        }
    }
    else if (var2 == WorkModuleImpl.get_int(0x11000004))
    {
        var8 = sys_40(0x2);
        var9 = WorkModuleImplFloat.get_float(0x3000040);
        func_762(var9, 0xc, 0x1000006, var8, 0x1000007, 0);
        func_763(0x166, 0x165, 0x164, 0x1000006, var8, 0x1000007);
    }
    else if (var2 == WorkModuleImpl.get_int(0x11000005))
    {
        var8 = sys_40(0x2);
        var9 = WorkModuleImplFloat.get_float(0x3000040) * WorkModuleImplFloat.get_float(0x2000208);
        func_762(var9, 0xc, 0x1000006, var8, 0x1000007, 0x1);
        func_763(0x16b, 0x16a, 0x169, 0x1000006, var8, 0x1000007);
    }
    else if (func_1529(var2) == 0x1)
    {
        var4 = 0;
        var5 = 0;
        var6 = 1.0f;
        if (func_1528(var3) == 0x1)
        {
            var5 = WorkModuleImplFloat.get_float(0x1000006);
            if (var5 != -1.0f)
            {
                var6 = WorkModuleImplFloat.get_float(0x1000007);
                var4 = 0x1;
            }
            else
            {
                var5 = 0;
            }
        }
        if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
        {
            MotionModuleImpl(0x19, 0x1);
        }
        if (var4 == 0x1)
        {
            MotionModuleImpl.change_motion(arg1, var5, var6);
        }
        else
        {
            MotionModuleImpl(0x1, arg1, var5, var6);
        }
    }
}

void func_1531(int arg0, int arg1)
{
    int var2;
    int var3;
    int var4;
    float var5;
    float var6;
    float var7;
    float var8;
    var2 = global4;
    var3 = global5;
    if (var2 == WorkModuleImpl.get_int(0x11000003) || var2 == WorkModuleImpl.get_int(0x1100000d))
    {
        var4 = 0;
        var5 = 0;
        var6 = 1.0f;
        if (func_1529(var3) == 0x1)
        {
            var5 = MotionModuleImplFloat.get_frame();
            var6 = MotionModuleImplFloat(0x9);
            var4 = 0x1;
        }
        if (var4 == 0x1)
        {
            MotionModuleImpl.change_motion(arg0, var5, var6);
        }
        else
        {
            MotionModuleImpl(0x1, arg0, var5, var6);
        }
    }
    else if (var2 == WorkModuleImpl.get_int(0x11000004))
    {
        var7 = sys_40(0x2);
        var8 = WorkModuleImplFloat.get_float(0x3000040);
        func_762(var8, 0xc, 0x1000006, var7, 0x1000007, 0);
        func_763(0x166, 0x165, 0x164, 0x1000006, var7, 0x1000007);
    }
    else if (var2 == WorkModuleImpl.get_int(0x11000005))
    {
        var7 = sys_40(0x2);
        var8 = WorkModuleImplFloat.get_float(0x3000040) * WorkModuleImplFloat.get_float(0x2000208);
        func_762(var8, 0xc, 0x1000006, var7, 0x1000007, 0x1);
        func_763(0x16b, 0x16a, 0x169, 0x1000006, var7, 0x1000007);
    }
    else if (func_1529(var2) == 0x1)
    {
        var4 = 0;
        var5 = 0;
        var6 = 1.0f;
        if (func_1528(var3) == 0x1)
        {
            var5 = MotionModuleImplFloat.get_frame();
            var6 = MotionModuleImplFloat(0x9);
            var4 = 0x1;
        }
        if (var4 == 0x1)
        {
            MotionModuleImpl.change_motion(arg1, var5, var6);
        }
        else
        {
            MotionModuleImpl(0x1, arg1, var5, var6);
        }
    }
}

void func_1532()
{
    int var0;
    float var1;
    float var2;
    float var3;
    var0 = global4;
    if (var0 == WorkModuleImpl.get_int(0x11000004))
    {
        var1 = sys_40(0x2);
        func_774(WorkModuleImplFloat.get_float(0x1000006), WorkModuleImplFloat.get_float(0x3000040), WorkModuleImplFloat.get_float(0x300003e), WorkModuleImplFloat.get_float(0x300003f), WorkModuleImplFloat.get_float(0x2000002), 0x1000006, var1, 0x1);
        func_773(0x166, 0x165, 0x164, 0x1000006, var1, 0x1000007);
    }
    else if (var0 == WorkModuleImpl.get_int(0x11000005))
    {
        var1 = sys_40(0x2);
        func_774(WorkModuleImplFloat.get_float(0x1000006), WorkModuleImplFloat.get_float(0x3000040) * WorkModuleImplFloat.get_float(0x2000208), WorkModuleImplFloat.get_float(0x300003e), WorkModuleImplFloat.get_float(0x300003f), WorkModuleImplFloat.get_float(0x2000002), 0x1000006, var1, 0x1);
        func_773(0x16b, 0x16a, 0x169, 0x1000006, var1, 0x1000007);
    }
    else if (var0 == WorkModuleImpl.get_int(0x11000006) || var0 == WorkModuleImpl.get_int(0x11000007))
    {
        var2 = 0.0010000000474974513f;
        var3 = KineticModuleImplFloat.get_sum_speed_x(0x1);
        if (func_13(var3) <= var2)
        {
            MotionModuleImpl.set_motion_rate(1.0f);
        }
    }
}

void func_1533(int arg0)
{
    float var1;
    float var2;
    if (func_1527(arg0) == 0x1)
    {
        var1 = -1.0f;
        if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
        {
            var1 = MotionModuleImplFloat(0xd, 0x1);
            var2 = MotionModuleImplFloat(0xe, 0x1);
            WorkModuleImpl.set_float(var2 + 0, 0x1000007);
        }
        WorkModuleImpl.set_float(var1 + 0, 0x1000006);
        if (func_1529(arg0) == 0x1)
        {
            if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
            {
                MotionModuleImpl(0x19, 0x1);
            }
        }
        WorkModuleImpl.set_int(0x3, 0x11000000);
        if (WorkModuleImpl.is_flag(0x2000004c))
        {
            WorkModuleImpl.on_flag2(0x21000005);
        }
    }
    else
    {
        if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
        {
            MotionModuleImpl(0x19, 0x1);
        }
        ItemModuleImpl(0x1b);
    }
}

void func_1534(int arg0)
{
    float var1;
    if (func_1527(arg0) == 0x1)
    {
        var1 = -1.0f;
        WorkModuleImpl.set_float(var1 + 0, 0x1000006);
        WorkModuleImpl.set_int(0x3, 0x11000000);
        if (WorkModuleImpl.is_flag(0x2000004c))
        {
            WorkModuleImpl.on_flag2(0x21000005);
        }
    }
    else
    {
        if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
        {
            MotionModuleImpl(0x19, 0x1);
        }
        ItemModuleImpl(0x1b);
    }
}

void func_1535()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    WorkModuleImpl.set_int(var0, 0x11000002);
    if (var0 == 0x25)
    {
        func_1544();
    }
    else if (var0 == 0x27)
    {
        func_1556();
    }
    else if (var0 == 0x24)
    {
        func_1549();
    }
    else if (var0 == 0x6c)
    {
        func_1567();
    }
    else if (var0 == 0x29)
    {
        func_1572();
    }
    else if (var0 == 0x2d)
    {
        func_1573();
    }
    else if (var0 == 0x2b)
    {
        func_1582();
    }
}

void func_1536()
{
    WorkModuleImpl.set_int(0x98, 0x11000003);
    WorkModuleImpl.set_int(0x99, 0x11000004);
    WorkModuleImpl.set_int(0x9b, 0x11000005);
    WorkModuleImpl.set_int(0x9a, 0x11000006);
    WorkModuleImpl.set_int(0x9c, 0x11000007);
    WorkModuleImpl.set_int(0x9d, 0x11000008);
    WorkModuleImpl.set_int(0x9e, 0x11000009);
    WorkModuleImpl.set_int(0xa1, 0x1100000a);
    WorkModuleImpl.set_int(0xa0, 0x1100000b);
    WorkModuleImpl.set_int(0x9f, 0x1100000c);
    WorkModuleImpl.set_int(0xa2, 0x1100000d);
}

void func_1537()
{
    func_1536();
    func_1535();
}

void func_1538()
{
    sys_21(0x23);
}

void func_1539(int arg0)
{
    sys_21(0x24, arg0);
}

void func_1540()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0x25)
    {
        func_1545();
    }
    else if (var0 == 0x27)
    {
        func_1557();
    }
    else if (var0 == 0x24)
    {
        func_1550();
    }
    else if (var0 == 0x6c)
    {
        func_1568();
    }
    else if (var0 == 0x29)
    {
        func_1545();
    }
    else if (var0 == 0x2d)
    {
        func_1574();
    }
    else if (var0 == 0x2b)
    {
        func_1545();
    }
}

void func_1541()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0x25)
    {
        func_1546();
    }
    else if (var0 == 0x27)
    {
        func_1558();
    }
    else if (var0 == 0x24)
    {
        func_1551();
    }
    else if (var0 == 0x6c)
    {
        func_1569();
    }
    else if (var0 == 0x29)
    {
        func_1546();
    }
    else if (var0 == 0x2d)
    {
        func_1575();
    }
    else if (var0 == 0x2b)
    {
        func_1546();
    }
}

void func_1542()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0x25)
    {
        func_1547();
    }
    else if (var0 == 0x27)
    {
        func_1559();
    }
    else if (var0 == 0x24)
    {
        func_1552();
    }
    else if (var0 == 0x6c)
    {
        func_1570();
    }
    else if (var0 == 0x29)
    {
        func_1547();
    }
    else if (var0 == 0x2d)
    {
        func_1576();
    }
    else if (var0 == 0x2b)
    {
        func_1547();
    }
    if (global18 == 0)
    {
        if (GroundModuleImpl(0xd) == 0x1)
        {
            if (global31 & 0x200)
            {
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
    }
}

void func_1543()
{
    int var0;
    int var1;
    var0 = global6;
    var1 = WorkModuleImpl.get_int(0x11000002);
    if (var1 == 0x25)
    {
        func_1548(var0);
    }
    else if (var1 == 0x27)
    {
        func_1560(var0);
    }
    else if (var1 == 0x24)
    {
        func_1553(var0);
    }
    else if (var1 == 0x6c)
    {
        func_1571(var0);
    }
    else if (var1 == 0x29)
    {
        func_1548(var0);
    }
    else if (var1 == 0x2d)
    {
        func_1577(var0);
    }
    else if (var1 == 0x2b)
    {
        func_1548(var0);
    }
}

void func_1544()
{
    int var0;
    int var1;
    var0 = global5;
    if ((var0 == 0x98 || var0 == 0x98 || var0 == 0x99 || var0 == 0x9a || var0 == 0x9b || var0 == 0x9c || var0 == 0x9d || var0 == 0x9e || var0 == 0xa1 || var0 == 0xa0 || var0 == 0x9f || var0 == 0xa2) == 0)
    {
        func_1538();
    }
    var1 = ItemModuleImpl(0x1a);
    if (var1 == 0)
    {
        func_1530(0x172, 0x173);
        if ((var0 == 0x98 || var0 == 0x98 || var0 == 0x99 || var0 == 0x9a || var0 == 0x9b || var0 == 0x9c || var0 == 0x9d || var0 == 0x9e || var0 == 0xa1 || var0 == 0xa0 || var0 == 0x9f || var0 == 0xa2) == 0)
        {
            SoundModuleImpl(0x2710, 0x350057);
        }
    }
    else
    {
        func_1530(0x170, 0x171);
    }
    if ((var0 == 0x98 || var0 == 0x98 || var0 == 0x99 || var0 == 0x9a || var0 == 0x9b || var0 == 0x9c || var0 == 0x9d || var0 == 0x9e || var0 == 0xa1 || var0 == 0xa0 || var0 == 0x9f || var0 == 0xa2) == 0)
    {
        sys_21(0xd, 0x2, 0x71, 0x1);
        sys_21(0x1c, 0xf);
    }
}

void func_1545()
{
    func_1532();
}

void func_1546()
{
    
}

void func_1547()
{
    
}

void func_1548(int arg0)
{
    if ((arg0 == 0x98 || arg0 == 0x98 || arg0 == 0x99 || arg0 == 0x9a || arg0 == 0x9b || arg0 == 0x9c || arg0 == 0x9d || arg0 == 0x9e || arg0 == 0xa1 || arg0 == 0xa0 || arg0 == 0x9f || arg0 == 0xa2) == 0)
    {
        func_1539(0x2);
    }
    func_1533(arg0);
}

void func_1549()
{
    if ((global5 == 0x98 || global5 == 0x98 || global5 == 0x99 || global5 == 0x9a || global5 == 0x9b || global5 == 0x9c || global5 == 0x9d || global5 == 0x9e || global5 == 0xa1 || global5 == 0xa0 || global5 == 0x9f || global5 == 0xa2) == 0)
    {
        func_1538();
        WorkModuleImpl.off_flag2(0x21000011);
        WorkModuleImpl.set_int(0, 0x1100000e);
        sys_21(0xd, 0x2, 0x72, 0x1);
        sys_21(0x1c, 0xf);
    }
    func_1530(0x174, 0x175);
}

void func_1550()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x1100000e);
    if (var0 == 0)
    {
        if (WorkModuleImpl.is_flag(0x21000011))
        {
            func_1554();
            if (ItemModuleImpl(0x1a) > 0)
            {
                sys_21(0x55, 0x1, 0x1c);
            }
        }
    }
    else if (var0 == 0x1)
    {
        if (ControlModuleImpl(0x2712, 0) == 0)
        {
            var1 = WorkModuleImpl.get_int(0x12000202);
            if (ControlModuleImpl(0x2722, 0) >= var1)
            {
                WorkModuleImpl.on_flag2(0x21000012);
                WorkModuleImpl.on_flag2(0x2100000f);
            }
        }
    }
    func_1532();
}

void func_1551()
{
    int var0;
    int var1;
    int var2;
    int var3;
    var0 = WorkModuleImpl.get_int(0x1100000e);
    if (var0 == 0x1)
    {
        var1 = WorkModuleImpl.get_int(0x1100000f);
        if (WorkModuleImpl.is_flag(0x21000012))
        {
            if (var1 >= WorkModuleImpl.get_int(0x12000200))
            {
                func_1555();
            }
        }
        var2 = WorkModuleImpl.get_int(0x11000010);
        var2--;
        WorkModuleImpl.set_int(var2, 0x11000010);
        if (var2 <= 0)
        {
            var3 = WorkModuleImpl.get_int(0x12000201);
            WorkModuleImpl.set_int(var3, 0x11000010);
            WorkModuleImpl.inc_int(0x1100000f);
            if (ItemModuleImpl(0x1a) == 0)
            {
                SoundModuleImpl(0x2710, 0x35005a);
            }
            else
            {
                ItemModuleImpl(0xb);
                ControlModuleImpl(0x2714, 0, 0);
                if (var1 % 0x2 == 0)
                {
                    EffectModuleImpl(0x2711, 0x1000009, 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 1.0f + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0x1);
                }
            }
        }
    }
}

void func_1552()
{
    
}

void func_1553(int arg0)
{
    if ((arg0 == 0x98 || arg0 == 0x98 || arg0 == 0x99 || arg0 == 0x9a || arg0 == 0x9b || arg0 == 0x9c || arg0 == 0x9d || arg0 == 0x9e || arg0 == 0xa1 || arg0 == 0xa0 || arg0 == 0x9f || arg0 == 0xa2) == 0)
    {
        func_1539(0x2);
        if (WorkModuleImpl.is_flag(0x21000011))
        {
            ItemModuleImpl(0x1d, 0x1);
        }
    }
    func_1533(arg0);
}

void func_1554()
{
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        MotionModuleImpl(0x21, 0x1, 0);
    }
    else
    {
        MotionModuleImpl.set_motion_rate(0);
    }
    WorkModuleImpl.set_int(0x1, 0x1100000e);
}

void func_1555()
{
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        MotionModuleImpl(0x21, 0x1, 1.0f);
    }
    else
    {
        MotionModuleImpl.set_motion_rate(1.0f);
    }
    WorkModuleImpl.set_int(0x2, 0x1100000e);
}

void func_1556()
{
    int var0;
    int var1;
    if ((global5 == 0x98 || global5 == 0x98 || global5 == 0x99 || global5 == 0x9a || global5 == 0x9b || global5 == 0x9c || global5 == 0x9d || global5 == 0x9e || global5 == 0xa1 || global5 == 0xa0 || global5 == 0x9f || global5 == 0xa2) == 0)
    {
        func_1538();
        WorkModuleImpl.off_flag2(0x21000011);
        WorkModuleImpl.set_int(0, 0x1100000e);
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120001ff), 0x1100000f);
        WorkModuleImpl.set_int(0, 0x11000010);
        SoundModuleImpl(0x2710, 0x350049);
        sys_21(0x1c, 0xf);
    }
    var0 = ItemModuleImpl(0x1a);
    var1 = WorkModuleImpl.get_int(0x1100000e);
    if (var1 == 0)
    {
        if (var0 == 0)
        {
            func_1530(0x17e, 0x182);
        }
        else
        {
            func_1530(0x176, 0x17a);
        }
    }
    else if (var1 == 0x1)
    {
        if (var0 == 0)
        {
            func_1530(0x17f, 0x183);
        }
        else
        {
            func_1530(0x177, 0x17b);
        }
    }
    else if (var1 == 0x2)
    {
        if (var0 == 0)
        {
            func_1530(0x17e, 0x182);
        }
        else
        {
            func_1530(0x176, 0x17a);
        }
    }
    else if (var1 == 0x3)
    {
        if (var0 == 0)
        {
            func_1530(0x180, 0x184);
        }
        else
        {
            func_1530(0x178, 0x17c);
        }
        ItemModuleImpl(0x1d, 0x1);
    }
    else if (var1 == 0x4)
    {
        if (var0 == 0)
        {
            func_1530(0x181, 0x185);
        }
        else
        {
            func_1530(0x179, 0x17d);
        }
    }
}

void func_1557()
{
    int var0;
    var0 = WorkModuleImpl.get_int(0x1100000e);
    if (var0 == 0)
    {
        if (ControlModuleImpl(0x2713, 0))
        {
            WorkModuleImpl.on_flag2(0x21000011);
        }
    }
    else if (var0 == 0x1)
    {
        if (ControlModuleImpl(0x2710, 0))
        {
            WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120001ff), 0x1100000f);
        }
    }
    func_1532();
}

void func_1558()
{
    int var0;
    int var1;
    int var2;
    var0 = WorkModuleImpl.get_int(0x1100000e);
    if (var0 == 0)
    {
        WorkModuleImpl.inc_int(0x11000010);
        if (func_1561() == 0x1)
        {
            if (WorkModuleImpl.is_flag(0x21000011))
            {
                func_1565();
                if (ItemModuleImpl(0x1a) > 0)
                {
                    sys_21(0x55, 0x1, 0x1c);
                }
            }
            else
            {
                func_1563();
            }
        }
    }
    else if (var0 == 0x1)
    {
        if (func_1561() == 0x1)
        {
            var1 = WorkModuleImpl.get_int(0x1100000f);
            var1--;
            WorkModuleImpl.set_int(var1, 0x1100000f);
            if (var1 <= 0)
            {
                func_1566();
            }
            else
            {
                func_1562();
            }
        }
    }
    else if (var0 == 0x2)
    {
        WorkModuleImpl.inc_int(0x11000010);
        var2 = WorkModuleImpl.get_int(0x11000010);
        if (ControlModuleImpl(0x2712, 0) == 0 || var2 >= WorkModuleImpl.get_int(0x120001fe))
        {
            func_1564();
        }
    }
}

void func_1559()
{
    
}

void func_1560(int arg0)
{
    if ((arg0 == 0x98 || arg0 == 0x98 || arg0 == 0x99 || arg0 == 0x9a || arg0 == 0x9b || arg0 == 0x9c || arg0 == 0x9d || arg0 == 0x9e || arg0 == 0xa1 || arg0 == 0xa0 || arg0 == 0x9f || arg0 == 0xa2) == 0)
    {
        func_1539(0x2);
        ItemModuleImpl(0x1d, 0x1);
        if (WorkModuleImpl.get_int(0x1100000e) == 0x2)
        {
            ItemModuleImpl(0x21, WorkModuleImpl.get_int(0x11000010));
        }
    }
    func_1533(arg0);
}

int func_1561()
{
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        return MotionModuleImpl(0x1a, 0x1);
    }
    return MotionModuleImpl.is_end();
}

void func_1562()
{
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        MotionModuleImpl(0x23, 0x1, 0);
    }
    else
    {
        MotionModuleImpl(0x2711, 0);
    }
    if (ItemModuleImpl(0x1a) == 0)
    {
        SoundModuleImpl(0x2710, 0x350055);
    }
}

void func_1563()
{
    WorkModuleImpl.set_int(0x2, 0x1100000e);
    ItemModuleImpl(0x1d, 0);
    sys_21(0xd, 0x2, 0x75, 0x1);
}

void func_1564()
{
    int var0;
    int var1;
    var0 = ItemModuleImpl(0x1a);
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        if (var0 == 0)
        {
            var1 = 0x180;
        }
        else
        {
            var1 = 0x178;
        }
        MotionModuleImpl(0x18, 0x1);
        MotionModuleImpl(0x17, 0x1, var1, 0, 0, 1.0f);
    }
    else
    {
        if (var0 == 0)
        {
            var1 = 0x184;
        }
        else
        {
            var1 = 0x17c;
        }
        func_22(var1, 0, 1.0f);
    }
    ItemModuleImpl(0x1d, 0x1);
    if (var0 == 0)
    {
        SoundModuleImpl(0x2710, 0x350055);
    }
    WorkModuleImpl.set_int(0x3, 0x1100000e);
    if (var0 > 0)
    {
        sys_21(0x55, 0x1, 0x1c);
    }
    sys_21(0xd, 0x2, 0x75, 0);
}

void func_1565()
{
    int var0;
    int var1;
    var0 = ItemModuleImpl(0x1a);
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        if (var0 == 0)
        {
            var1 = 0x17f;
        }
        else
        {
            var1 = 0x177;
        }
        MotionModuleImpl(0x18, 0x1);
        MotionModuleImpl(0x17, 0x1, var1, 0, 0, 1.0f);
    }
    else
    {
        if (var0 == 0)
        {
            var1 = 0x183;
        }
        else
        {
            var1 = 0x17b;
        }
        func_22(var1, 0, 1.0f);
    }
    if (var0 == 0)
    {
        SoundModuleImpl(0x2710, 0x350055);
    }
    WorkModuleImpl.set_int(0x1, 0x1100000e);
    sys_21(0xd, 0x2, 0x74, 0x1);
}

void func_1566()
{
    int var0;
    int var1;
    var0 = ItemModuleImpl(0x1a);
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        if (var0 == 0)
        {
            var1 = 0x181;
        }
        else
        {
            var1 = 0x179;
        }
        MotionModuleImpl(0x18, 0x1);
        MotionModuleImpl(0x17, 0x1, var1, 0, 0, 1.0f);
    }
    else
    {
        if (var0 == 0)
        {
            var1 = 0x185;
        }
        else
        {
            var1 = 0x17d;
        }
        func_22(var1, 0, 1.0f);
    }
    WorkModuleImpl.set_int(0x4, 0x1100000e);
    WorkModuleImpl.on_flag2(0x2100000f);
}

void func_1567()
{
    if ((global5 == 0x98 || global5 == 0x98 || global5 == 0x99 || global5 == 0x9a || global5 == 0x9b || global5 == 0x9c || global5 == 0x9d || global5 == 0x9e || global5 == 0xa1 || global5 == 0xa0 || global5 == 0x9f || global5 == 0xa2) == 0)
    {
        func_1538();
        MotionModuleImpl(0x18, 0x1);
        MotionModuleImpl(0x17, 0x1, 0x18f, 0, 0, 1.0f);
    }
    func_1531(0x163, 0x190);
}

void func_1568()
{
    func_1532();
}

void func_1569()
{
    
}

void func_1570()
{
    
}

void func_1571(int arg0)
{
    func_1534(arg0);
}

void func_1572()
{
    int var0;
    var0 = global5;
    if ((var0 == 0x98 || var0 == 0x98 || var0 == 0x99 || var0 == 0x9a || var0 == 0x9b || var0 == 0x9c || var0 == 0x9d || var0 == 0x9e || var0 == 0xa1 || var0 == 0xa0 || var0 == 0x9f || var0 == 0xa2) == 0)
    {
        func_1538();
    }
    func_1530(0x18a, 0x18b);
    if ((var0 == 0x98 || var0 == 0x98 || var0 == 0x99 || var0 == 0x9a || var0 == 0x9b || var0 == 0x9c || var0 == 0x9d || var0 == 0x9e || var0 == 0xa1 || var0 == 0xa0 || var0 == 0x9f || var0 == 0xa2) == 0)
    {
        sys_21(0xd, 0x2, 0x7f, 0x1);
        sys_21(0x1c, 0xf);
    }
}

void func_1573()
{
    int var0;
    int var1;
    if ((global5 == 0x98 || global5 == 0x98 || global5 == 0x99 || global5 == 0x9a || global5 == 0x9b || global5 == 0x9c || global5 == 0x9d || global5 == 0x9e || global5 == 0xa1 || global5 == 0xa0 || global5 == 0x9f || global5 == 0xa2) == 0)
    {
        func_1538();
        WorkModuleImpl.off_flag2(0x21000011);
        WorkModuleImpl.off_flag2(0x21000012);
        WorkModuleImpl.set_int(0, 0x11000011);
        WorkModuleImpl.set_int(0, 0x1100000e);
        sys_21(0x1c, 0xf);
    }
    var0 = ItemModuleImpl(0x1a);
    var1 = WorkModuleImpl.get_int(0x1100000e);
    if (var1 == 0)
    {
        func_1530(0x186, 0x188);
    }
    else if (var1 == 0x1)
    {
        func_1530(0x186, 0x188);
    }
    else if (var1 == 0x2)
    {
        func_1530(0x187, 0x189);
    }
}

void func_1574()
{
    int var0;
    int var1;
    var0 = WorkModuleImpl.get_int(0x1100000e);
    if (var0 == 0x1)
    {
        if (ControlModuleImpl(0x2712, 0) == 0)
        {
            var1 = WorkModuleImpl.get_int(0x120002f1);
            if (ControlModuleImpl(0x2722, 0) >= var1)
            {
                WorkModuleImpl.on_flag2(0x21000011);
                WorkModuleImpl.on_flag2(0x2100000f);
            }
        }
    }
    func_1532();
}

void func_1575()
{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    var0 = WorkModuleImpl.get_int(0x1100000e);
    if (var0 == 0)
    {
        if (WorkModuleImpl.is_flag(0x21000012) == 0 && ItemModuleImpl(0x1a) > 0)
        {
            EffectModuleImpl(0x2711, 0x1000009, 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 1.0f + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0x1);
            WorkModuleImpl.on_flag2(0x21000012);
        }
        if (func_1578() == 0x1)
        {
            if (ItemModuleImpl(0x1a) > 0)
            {
                sys_21(0x55, 0x1, 0x1c);
            }
            func_1580();
        }
    }
    else if (var0 == 0x1)
    {
        var1 = WorkModuleImpl.get_int(0x1100000f);
        if (WorkModuleImpl.is_flag(0x21000011))
        {
            if (var1 >= WorkModuleImpl.get_int(0x120002ef))
            {
                func_1581();
                return;
            }
        }
        var2 = WorkModuleImpl.get_int(0x11000010);
        var2--;
        WorkModuleImpl.set_int(var2, 0x11000010);
        var3 = ItemModuleImpl(0x1a);
        if (var2 <= 0)
        {
            var4 = WorkModuleImpl.get_int(0x120002f0);
            WorkModuleImpl.set_int(var4, 0x11000010);
            WorkModuleImpl.inc_int(0x1100000f);
            if (var3 == 0)
            {
                
            }
            else
            {
                ItemModuleImpl(0xb);
                ControlModuleImpl(0x2714, 0, 0);
            }
        }
        if (var3 > 0)
        {
            var5 = WorkModuleImpl.get_int(0x11000011);
            var5--;
            if (var5 <= 0)
            {
                var5 = 0x8;
                EffectModuleImpl(0x2711, 0x1000019, 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 1.0f + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0 + 0, 0x1);
            }
            WorkModuleImpl.set_int(var5, 0x11000011);
        }
    }
}

void func_1576()
{
    
}

void func_1577(int arg0)
{
    if ((arg0 == 0x98 || arg0 == 0x98 || arg0 == 0x99 || arg0 == 0x9a || arg0 == 0x9b || arg0 == 0x9c || arg0 == 0x9d || arg0 == 0x9e || arg0 == 0xa1 || arg0 == 0xa0 || arg0 == 0x9f || arg0 == 0xa2) == 0)
    {
        func_1539(0x2);
        if (WorkModuleImpl.get_int(0x1100000e) == 0x1)
        {
            ItemModuleImpl(0x1d, 0x1);
        }
    }
    func_1533(arg0);
}

int func_1578()
{
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        return MotionModuleImpl(0x1a, 0x1);
    }
    return MotionModuleImpl.is_end();
}

void func_1579()
{
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        MotionModuleImpl(0x23, 0x1, 0);
    }
    else
    {
        MotionModuleImpl(0x2711, 0);
    }
}

void func_1580()
{
    WorkModuleImpl.set_int(0x1, 0x1100000e);
    ItemModuleImpl(0x1d, 0);
    sys_21(0xd, 0x2, 0x80, 0x1);
}

void func_1581()
{
    int var0;
    if (MotionModuleImpl(0x15, 0x1) != 0xffffffff)
    {
        var0 = 0x187;
        MotionModuleImpl(0x18, 0x1);
        MotionModuleImpl(0x17, 0x1, var0, 0, 0, 1.0f);
    }
    else
    {
        var0 = 0x189;
        func_22(var0, 0, 1.0f);
    }
    WorkModuleImpl.set_int(0x2, 0x1100000e);
    ItemModuleImpl(0x1d, 0x1);
    WorkModuleImpl.on_flag2(0x2100000f);
}

void func_1582()
{
    int var0;
    var0 = global5;
    if ((var0 == 0x98 || var0 == 0x98 || var0 == 0x99 || var0 == 0x9a || var0 == 0x9b || var0 == 0x9c || var0 == 0x9d || var0 == 0x9e || var0 == 0xa1 || var0 == 0xa0 || var0 == 0x9f || var0 == 0xa2) == 0)
    {
        func_1538();
    }
    func_1530(0x18c, 0x18d);
    if ((var0 == 0x98 || var0 == 0x98 || var0 == 0x99 || var0 == 0x9a || var0 == 0x9b || var0 == 0x9c || var0 == 0x9d || var0 == 0x9e || var0 == 0xa1 || var0 == 0xa0 || var0 == 0x9f || var0 == 0xa2) == 0)
    {
        sys_21(0xd, 0x2, 0x81, 0x1);
        sys_21(0x1c, 0xf);
    }
}

int func_1583()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1584()
{
    int var0;
    func_22(0x1be, 0, 1.0f);
    if (global18 == 0)
    {
        var0 = WorkModuleImpl.get_int(0x13000123);
        if (var0 == 0)
        {
            GroundModuleImpl(0x7, -5.199999809265137f);
        }
    }
    func_78(func_1585);
}

void func_1585()
{
    func_1588();
}

void func_1586()
{
    int var0;
    float var1;
    float var2;
    float var3;
    if (global18 == 0)
    {
        var0 = WorkModuleImpl.get_int(0x13000123);
        if (var0 == 0)
        {
            var1 = PostureModuleImplFloat.get_pos_x();
            var2 = PostureModuleImplFloat.get_pos_y();
            var3 = PostureModuleImplFloat.get_pos_z();
            PostureModuleImpl.set_pos(var1, var2 + -5.199999809265137f, var3);
        }
    }
    GroundModuleImpl(0x7, 0);
}

void func_1587()
{
    int var0;
    int var1;
    PostureModuleImpl.set_lr(-LinkModuleImplFloat(0x7, 0));
    PostureModuleImpl.update_rot_y();
    var0 = 0;
    var1 = WorkModuleImpl.get_int(0x13000120);
    if (var1 == 0x1)
    {
        var0 = 0x1;
    }
    else if (var1 == 0x3)
    {
        var0 = 0x2;
    }
    MotionModuleImpl(0x29, var0);
    LinkModuleImpl(0x2716, 0, 0x3);
}

int func_1588()
{
    if (global3 == 0)
    {
        if (func_1590() != 0)
        {
            return 0x1;
        }
    }
    if (func_1591() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1589()
{
    
}

int func_1590()
{
    return 0;
}

int func_1591()
{
    return 0;
}

void func_1592()
{
    
}

void func_1593()
{
    if (global6 != 0x44)
    {
        CaptureModuleImpl(0x4);
    }
}

int func_1594()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1595()
{
    func_22(0x1c1, 0, 1.0f);
    func_78(func_1596);
}

void func_1596()
{
    func_16(0xbc, 0);
    return;
    func_1599();
}

void func_1597()
{
    
}

void func_1598()
{
    int var0;
    int var1;
    PostureModuleImpl.set_lr(-LinkModuleImplFloat(0x7, 0));
    PostureModuleImpl.update_rot_y();
    var0 = 0;
    var1 = WorkModuleImpl.get_int(0x13000120);
    if (var1 == 0x1)
    {
        var0 = 0x4;
    }
    else if (var1 == 0x3)
    {
        var0 = 0x8;
    }
    MotionModuleImpl(0x29, var0);
    WorkModuleImpl.set_int(0x1c1, 0x11000002);
    LinkModuleImpl(0x2716, 0, 0x3);
}

int func_1599()
{
    if (global3 == 0)
    {
        if (func_1601() != 0)
        {
            return 0x1;
        }
    }
    if (func_1602() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1600()
{
    
}

int func_1601()
{
    return 0;
}

int func_1602()
{
    return 0;
}

void func_1603()
{
    
}

void func_1604()
{
    if (global6 == 0x44 || global6 == 0xbc)
    {
        return;
    }
    else
    {
        CaptureModuleImpl(0x5, 0);
        CaptureModuleImpl(0x1);
    }
}

int func_1605()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1606()
{
    func_22(0x1c2, 0, 1.0f);
    func_78(func_1607);
}

void func_1607()
{
    func_1610();
}

void func_1608()
{
    
}

void func_1609()
{
    int var0;
    int var1;
    PostureModuleImpl.set_lr(-LinkModuleImplFloat(0x7, 0));
    PostureModuleImpl.update_rot_y();
    var0 = 0;
    var1 = WorkModuleImpl.get_int(0x13000120);
    if (var1 == 0x1)
    {
        var0 = 0x4;
    }
    else if (var1 == 0x3)
    {
        var0 = 0x8;
    }
    MotionModuleImpl(0x29, var0);
    CaptureModuleImpl(0x2);
    LinkModuleImpl(0x2716, 0, 0x3);
}

int func_1610()
{
    if (global3 == 0)
    {
        if (func_1612() != 0)
        {
            return 0x1;
        }
    }
    if (func_1613() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1611()
{
    
}

int func_1612()
{
    return 0;
}

int func_1613()
{
    return 0;
}

void func_1614()
{
    
}

void func_1615()
{
    if (global6 == 0xbb || global6 == 0xbc)
    {
        return;
    }
    else
    {
        CaptureModuleImpl(0x1);
    }
}

int func_1616()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1617()
{
    func_22(0x1c3, 0, 1.0f);
    func_78(func_1618);
}

void func_1618()
{
    func_1621();
}

void func_1619()
{
    
}

void func_1620()
{
    int var0;
    int var1;
    var0 = 0;
    var1 = WorkModuleImpl.get_int(0x13000120);
    if (var1 == 0x1)
    {
        var0 = 0x4;
    }
    else if (var1 == 0x3)
    {
        var0 = 0x8;
    }
    MotionModuleImpl(0x29, var0);
    CaptureModuleImpl(0x2);
}

int func_1621()
{
    if (global3 == 0)
    {
        if (func_1623() != 0)
        {
            return 0x1;
        }
    }
    if (func_1624() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1622()
{
    
}

int func_1623()
{
    return 0;
}

int func_1624()
{
    return 0;
}

void func_1625()
{
    
}

void func_1626()
{
    if (global6 == 0xbc)
    {
        return;
    }
    else
    {
        CaptureModuleImpl(0x1);
    }
}

int func_1627()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1628()
{
    func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
    func_78(func_1629);
}

void func_1629()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0x4c, 0);
    }
    func_1632();
}

void func_1630()
{
    if (global5 == 0xba || global5 == 0xbb)
    {
        
    }
    else
    {
        WorkModuleImpl.on_flag2(0x20000054);
    }
}

void func_1631()
{
    int var0;
    int var1;
    var0 = 0;
    var1 = WorkModuleImpl.get_int(0x13000120);
    if (var1 == 0x1)
    {
        var0 = 0x4;
    }
    else if (var1 == 0x3)
    {
        var0 = 0x8;
    }
    MotionModuleImpl(0x29, var0);
    CaptureModuleImpl(0x2);
    LinkModuleImpl(0x2716, 0, 0x3);
}

int func_1632()
{
    if (global3 == 0)
    {
        if (func_1634() != 0)
        {
            return 0x1;
        }
    }
    if (func_1635() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1633()
{
    
}

int func_1634()
{
    return 0;
}

int func_1635()
{
    return 0;
}

void func_1636()
{
    
}

void func_1637()
{
    if (global5 == 0xba && global5 == 0xbb)
    {
        CaptureModuleImpl(0x5, 0);
        CaptureModuleImpl(0x1);
    }
    else
    {
        if (MotionModuleImpl.is_end())
        {
            CaptureModuleImpl(0x5, 0);
        }
        CaptureModuleImpl(0x1);
    }
}

int func_1638()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1639()
{
    if (WorkModuleImpl.is_flag2(0x2100000d))
    {
        func_22(0x1d4, 0, 1.0f);
    }
    else if (WorkModuleImpl.get_int(0x13000120) == 0x3)
    {
        func_22(0x1d7, 0, 1.0f);
    }
    else
    {
        func_22(0x1d1, 0, 1.0f);
    }
    LinkModuleImpl(0x2716, 0, 0x3);
    func_1641();
    func_78(func_1640);
}

void func_1640()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_1641();
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
}

void func_1641()
{
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x1);
    }
    else
    {
        KineticModuleImpl.change_kinetic_type(0xa);
        GroundModuleImpl(0x2710, 0x5);
    }
}

void func_1642()
{
    
}

int func_1643()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1644()
{
    func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
    func_1646();
    func_78(func_1645);
}

void func_1645()
{
    if (StatusModuleImpl(0x6) == 0x1 || global19 == 0 && global18 == 0x2 || global19 != 0 && global18 == 0)
    {
        func_1646();
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
}

void func_1646()
{
    int var0;
    if (global18 == 0)
    {
        KineticModuleImpl.change_kinetic_type(0x6);
        GroundModuleImpl(0x2710, 0x1);
    }
    else
    {
        var0 = WorkModuleImpl.get_int(0x11000002);
        if (var0 == 0x1d3 || var0 == 0x1d9)
        {
            KineticModuleImpl.change_kinetic_type(0xd);
        }
        else
        {
            KineticModuleImpl.change_kinetic_type(0xa);
        }
        GroundModuleImpl(0x2710, 0x5);
    }
}

void func_1647()
{
    
}

int func_1648()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1649()
{
    int var0;
    var0 = MotionModuleImpl.get_motion();
    if (var0 == 0x1d3 || var0 == 0x1d9 || var0 == 0x1d6)
    {
        func_78(func_1650);
    }
    else
    {
        func_78(func_1651);
    }
}

void func_1650()
{
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1651()
{
    
}

void func_1652()
{
    
}

int func_1653()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1654()
{
    func_22(0x1ce, 0, 1.0f);
    func_78(func_1655);
}

void func_1655()
{
    
}

void func_1656()
{
    
}

void func_1657()
{
    int var0;
    int var1;
    PostureModuleImpl.set_lr(LinkModuleImplFloat(0x7, 0));
    PostureModuleImpl.update_rot_y();
    var0 = WorkModuleImpl.get_int(0x13000120);
    var1 = 0;
    if (var0 == 0x1)
    {
        var1 = 0x1;
    }
    else if (var0 == 0x3)
    {
        var1 = 0x2;
    }
    MotionModuleImpl(0x29, var1);
    LinkModuleImpl(0x2716, 0, 0x3);
}

void func_1658()
{
    if (global6 != 0x44)
    {
        CaptureModuleImpl(0x4);
    }
}

int func_1659()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1660()
{
    int var0;
    float var1;
    int var2;
    float var3;
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    func_22(0x1da, 0, 1.0f);
    CameraModuleImpl(0x2720, 0x7);
    var0 = WorkModuleImpl.get_int(0x10000000);
    var1 = PostureModuleImplFloat.get_lr();
    var2 = 0x64;
    CameraModuleImpl(0x271e, var0, var1, var2);
    var3 = PostureModuleImplFloat.get_pos_y();
    WorkModuleImpl.set_float(var3, 0x1000006);
    func_78(func_1655);
}

void func_1661()
{
    
}

void func_1662()
{
    int var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    int var8;
    var0 = WorkModuleImpl.get_int(0x10000000);
    var1 = PostureModuleImplFloat.get_pos_x();
    var2 = PostureModuleImplFloat.get_pos_y();
    var3 = PostureModuleImplFloat.get_pos_z();
    var4 = var1;
    var5 = var2;
    var6 = var3;
    var7 = PostureModuleImplFloat.get_lr();
    var8 = WorkModuleImpl.get_int(0x12000147);
    CameraModuleImpl(0x271f, var0, var4, var5, var6, var7, var8, 0);
}

void func_1663()
{
    int var0;
    int var1;
    CaptureModuleImpl(0x2);
    var0 = 0;
    var1 = WorkModuleImpl.get_int(0x13000120);
    if (0x1 == var1)
    {
        var0 = 0x1;
    }
    else if (0x3 == var1)
    {
        var0 = 0x2;
    }
    else
    {
        
    }
    MotionModuleImpl(0x29, var0);
    LinkModuleImpl(0x2716, 0, 0x3);
}

void func_1664()
{
    float var0;
    if (WorkModuleImpl.is_flag(0x2100000d) == 0 && LinkModuleImpl(0xd, 0) == 0x2)
    {
        var0 = PostureModuleImplFloat.get_pos_y();
        if (var0 < WorkModuleImplFloat.get_float(0x1000006))
        {
            CameraModuleImpl(0x2720, 0x7);
            WorkModuleImpl.on_flag(0x2100000d);
        }
    }
}

void func_1665()
{
    if (global6 != 0x44)
    {
        CaptureModuleImpl(0x4);
    }
    else
    {
        LinkModuleImpl(0xb);
    }
}

int func_1666()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3ea, 0, 0);
    return 0;
}

void func_1667()
{
    int var0;
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    WorkModuleImpl.off_flag2(0x2000001c);
    if (MotionModuleImpl.get_motion() == 0xffffffff)
    {
        var0 = randint(0, 0x5);
        if (var0 == 0x1)
        {
            func_22(0xd0, 0, 1.0f);
        }
        else if (var0 == 0x2)
        {
            func_22(0xd1, 0, 1.0f);
        }
        else if (var0 == 0x3)
        {
            func_22(0xd2, 0, 1.0f);
        }
        else if (var0 == 0x4)
        {
            func_22(0xd3, 0, 1.0f);
        }
        else
        {
            func_22(0xcf, 0, 1.0f);
        }
    }
    MotionModuleImpl.set_motion_rate(0);
    HitModuleImpl(0x2710, 0x2);
    func_78(func_1668);
}

void func_1668()
{
    if (WorkModuleImpl.is_flag(0x2100000d) && global9 >= 3.0f)
    {
        func_16(0xe, 0);
    }
}

void func_1669()
{
    
}

int func_1670()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1671()
{
    WorkModuleImpl.on_flag2(0x20000065);
    func_22(0x7c, 0, 1.0f);
    func_78(func_1672);
}

int func_1672()
{
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xc0, 0);
        return 0x1;
    }
    if (func_1684())
    {
        return 0x1;
    }
    return 0;
}

void func_1673()
{
    
}

int func_1674()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1675()
{
    if (ControlModuleImplFloat.get_clatter() <= 0)
    {
        LinkModuleImpl(0x2713, 0, 0x4ba);
    }
}

void func_1676()
{
    WorkModuleImpl.on_flag2(0x20000065);
    func_22(0x96, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_1675();
    }
    global16 = func_1675;
    func_78(func_1677);
}

int func_1677()
{
    if (func_1684())
    {
        return 0x1;
    }
    return 0;
}

void func_1678()
{
    
}

int func_1679()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0x1, 0, 0x4, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1680()
{
    func_22(WorkModuleImpl.get_int(0x11000002), 0, 1.0f);
    func_78(func_1681);
}

int func_1681()
{
    if (func_1691())
    {
        return 0x1;
    }
    return 0;
}

void func_1682()
{
    
}

void func_1683()
{
    float var0;
    float var1;
    float var2;
    float var3;
    int var4;
    int var5;
    if (global4 == 0xbf)
    {
        var0 = WorkModuleImplFloat.get_float(0x20001c0);
        var1 = WorkModuleImplFloat.get_float(0x20001c1);
        var2 = WorkModuleImplFloat.get_float(0x20001c2);
        var3 = DamageModuleImplFloat(0) * var1 + var0;
        ControlModuleImpl(0x6, var3, 0, var2);
        var4 = 0;
        var5 = WorkModuleImpl.get_int(0x13000120);
        if (0x1 == var5)
        {
            var4 = 0x4;
        }
        else if (0x3 == var5)
        {
            var4 = 0x8;
        }
        MotionModuleImpl(0x29, var4);
        CaptureModuleImpl(0x2);
        LinkModuleImpl(0x2716, 0, 0x3);
    }
    else if (global4 == 0xc0)
    {
        var4 = 0;
        var5 = WorkModuleImpl.get_int(0x13000120);
        if (0x1 == var5)
        {
            var4 = 0x1;
        }
        else if (0x3 == var5)
        {
            var4 = 0x2;
        }
        MotionModuleImpl(0x29, var4);
    }
}

int func_1684()
{
    if (global3 == 0)
    {
        if (func_1686() != 0)
        {
            return 0x1;
        }
    }
    if (func_1687() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1685()
{
    
}

int func_1686()
{
    float var0;
    float var1;
    if (global4 == 0xc0)
    {
        var0 = ControlModuleImplFloat.get_clatter();
        if (LinkModuleImpl(0xd, 0) == 0)
        {
            var1 = WorkModuleImplFloat.get_float(0x20001c2);
        }
        else
        {
            var1 = WorkModuleImplFloat.get_float(0x20001c3);
        }
        ControlModuleImpl(0x6, var0, 1.0f, var1);
    }
    return 0;
}

int func_1687()
{
    return 0;
}

void func_1688()
{
    
}

void func_1689()
{
    float var0;
    if (global6 != 0xc0 && global6 != 0xc1)
    {
        var0 = -LinkModuleImplFloat(0x7, 0);
        PostureModuleImpl.set_lr(var0);
        PostureModuleImpl.update_rot_y();
        CaptureModuleImpl(0x1);
    }
}

void func_1690()
{
    int var0;
    int var1;
    var0 = 0;
    var1 = WorkModuleImpl.get_int(0x13000120);
    if (var1 == 0x1)
    {
        var0 = 0x4;
    }
    else if (var1 == 0x3)
    {
        var0 = 0x8;
    }
    MotionModuleImpl(0x29, var0);
}

int func_1691()
{
    if (global3 == 0)
    {
        if (func_1693() != 0)
        {
            return 0x1;
        }
    }
    if (func_1694() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1692()
{
    
}

int func_1693()
{
    return 0;
}

int func_1694()
{
    return 0;
}

void func_1695()
{
    
}

void func_1696()
{
    CaptureModuleImpl(0x4);
}

int func_1697()
{
    StatusModuleImpl(0x5, 0, 0x4d, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x2, 0, 0x800000);
    return 0;
}

void func_1698()
{
    sys_21(0x9);
    WorkModuleImpl.off_flag2(0x20000003);
    func_22(0xe9, 0, 1.0f);
    func_78(func_1699);
}

void func_1699()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return;
    }
}

void func_1700()
{
    
}

int func_1701()
{
    StatusModuleImpl(0x5, 0, 0x4e, 0x2, 0, 0x1, 0x2000, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x80002, 0, 0x800000);
    return 0;
}

void func_1702()
{
    sys_21(0x9);
    WorkModuleImpl.off_flag2(0x20000003);
    if (func_88() >= 0)
    {
        func_22(0xea, 0, 1.0f);
    }
    else
    {
        func_22(0xeb, 0, 1.0f);
    }
    func_78(func_1703);
}

void func_1703()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return;
    }
}

void func_1704()
{
    
}

int func_1705()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0x3, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0, 0x2, 0, 0x800000);
    return 0;
}

void func_1706()
{
    sys_21(0x9);
    func_75();
    func_76();
    WorkModuleImpl.set_int(0, 0x10000004);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x12000084), 0x11000002);
    WorkModuleImpl.strans_on(0x1e000017);
    WorkModuleImpl.strans_on(0x1e000016);
    if (!StopModuleImpl(0x1))
    {
        func_1707();
    }
    global16 = func_1707;
    func_78(func_1708);
}

void func_1707()
{
    if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) == 0)
        {
            func_40();
            KineticModuleImpl.change_kinetic_type(0x27);
            MotionModuleImpl.set_motion_rate(1.0f);
        }
    }
}

void func_1708()
{
    if (func_41())
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000017) == 0x1 && ControlModuleImpl(0x2722, 0x2) < WorkModuleImpl.get_int(0x12000081) && WorkModuleImpl.get_int(0x11000002) > 0)
    {
        func_16(0x67, 0x1);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e000016) == 0x1 && global32 >= WorkModuleImplFloat.get_float(0x200001f) && WorkModuleImpl.get_int(0x11000002) > 0)
    {
        func_16(0x67, 0x1);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1709()
{
    
}

int func_1710()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0x3, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0x2, 0, 0);
    return 0;
}

void func_1711()
{
    sys_21(0x9);
    func_75();
    func_76();
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x12000084), 0x11000002);
    if (!StopModuleImpl(0x1))
    {
        func_1712();
    }
    global16 = func_1712;
    func_78(func_1713);
}

void func_1712()
{
    if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) == 0)
        {
            func_40();
            KineticModuleImpl.change_kinetic_type(0x28);
            MotionModuleImpl.set_motion_rate(1.0f);
        }
    }
}

void func_1713()
{
    if (func_41())
    {
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1714()
{
    
}

int func_1715()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0x3, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0x1, 0, 0x2, 0, 0x800000);
    return 0;
}

void func_1716()
{
    sys_21(0x9);
    if (!StopModuleImpl(0x1))
    {
        func_550();
    }
    global16 = func_550;
    func_78(func_1717);
}

void func_1717()
{
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0xe, 0);
        return;
    }
}

void func_1718()
{
    
}

float func_1719()
{
    float var0;
    int var1;
    var0 = 0;
    var1 = GroundModuleImpl(0xa);
    if ((var1 & 0x4) != 0)
    {
        var0 = -1.0f;
    }
    else if ((var1 & 0x2) != 0)
    {
        var0 = 1.0f;
    }
    return var0;
}

void func_1720(int arg0)
{
    int var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    var1 = GroundModuleImpl(0xa);
    if (var1 != 0)
    {
        if (var1 & 0x8)
        {
            var2 = GroundModuleImplFloat(0x3, 0x8);
            var3 = GroundModuleImplFloat(0x4, 0x8);
            var4 = GroundModuleImplFloat(0x5, 0x8);
            var5 = GroundModuleImplFloat(0x6, 0x8);
        }
        else if (var1 & 0x1)
        {
            var2 = GroundModuleImplFloat(0x3, 0x1);
            var3 = GroundModuleImplFloat(0x4, 0x1);
            var4 = GroundModuleImplFloat(0x5, 0x1);
            var5 = GroundModuleImplFloat(0x6, 0x1);
        }
        else if (var1 & 0x2)
        {
            var2 = GroundModuleImplFloat(0x3, 0x2);
            var3 = GroundModuleImplFloat(0x4, 0x2);
            var4 = GroundModuleImplFloat(0x5, 0x2);
            var5 = GroundModuleImplFloat(0x6, 0x2);
        }
        else if (var1 & 0x4)
        {
            var2 = GroundModuleImplFloat(0x3, 0x4);
            var3 = GroundModuleImplFloat(0x4, 0x4);
            var4 = GroundModuleImplFloat(0x5, 0x4);
            var5 = GroundModuleImplFloat(0x6, 0x4);
        }
        var6 = Math.atan2(-var4, var5);
        EffectModuleImpl(0x3, arg0, var2, var3, GroundModuleImplFloat(0xc), 0, 0, var6, 1.0f, 0, 0xffffffff);
    }
}

void func_1721()
{
    int var0;
    float var1;
    float var2;
    float var3;
    int var4;
    float var5;
    float var6;
    int var7;
    var0 = StatusModuleImpl(0);
    if (var0 == 0x64 || var0 == 0x65)
    {
        func_1720(0x100002b);
        ControlModuleImpl(0x2714, 0xd, 0);
    }
    else if (var0 == 0x66)
    {
        func_22(0xec, 0, 1.0f);
        var1 = func_1719();
        FighterUtil.adjust_wall(var1, var1, 1.0f, 0x1);
        HitModuleImpl(0x2, WorkModuleImpl.get_int(0x12000085));
        func_1720(0x100002b);
        ControlModuleImpl(0x2714, 0xd, 0);
    }
    else if (var0 == 0x67)
    {
        var2 = 0;
        var1 = func_1719();
        if (MotionModuleImpl.get_motion() == 0xec)
        {
            var2 = MotionModuleImplFloat.get_frame();
        }
        else
        {
            func_1720(0x100002b);
        }
        if (var3 != 0)
        {
            func_23(0xed);
        }
        else
        {
            func_22(0xed, var2, 1.0f);
        }
        if (var1 != 0)
        {
            FighterUtil.adjust_wall(var1, var1, 1.0f, 0x1);
        }
        HitModuleImpl(0x2, WorkModuleImpl.get_int(0x12000085));
    }
    else if (var0 == 0x6b)
    {
        func_22(0xed, 0, 1.0f);
        var1 = func_1719();
        if (var1 != 0)
        {
            FighterUtil.adjust_wall(var1, var1, 1.0f, 0x1);
            func_1720(0x1000086);
        }
        WorkModuleImpl.set_float(var1, 0x2);
        WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x120000ae), 0x10000005);
    }
    else if (var0 == 0x6c)
    {
        func_22(0xef, 0, 1.0f);
        var1 = func_1719();
        if (var1 == -1.0f)
        {
            GroundModuleImpl(0x2719, 0x4);
        }
        else
        {
            GroundModuleImpl(0x2719, 0x2);
        }
        FighterUtil.adjust_wall(var1, var1, 1.0f, 0x1);
        func_1720(0x1000086);
    }
    else if (var0 == 0x6d)
    {
        var4 = WorkModuleImpl.get_int(0x1000000c);
        WorkModuleImpl.inc_int(0x1000000c);
        var5 = (float)WorkModuleImpl.get_int(0x120000ba);
        if (var4 > 0)
        {
            var6 = WorkModuleImplFloat.get_float(0x20000bb);
            var5 *= Math.exp(var6, var4 - 0x1);
        }
        var7 = (int)var5;
        WorkModuleImpl.set_int(var7, 0x11000004);
        if (PostureModuleImplFloat.get_lr() == -1.0f)
        {
            GroundModuleImpl(0x2719, 0x4);
        }
        else
        {
            GroundModuleImpl(0x2719, 0x2);
        }
    }
    else if (var0 == 0x6e || var0 == 0x70 || var0 == 0x6f)
    {
        
    }
    else if (var0 == 0x68)
    {
        func_22(0xee, 0, 1.0f);
        FighterUtil(0x4, PostureModuleImplFloat.get_lr(), 0x1);
        ControlModuleImpl(0x2714, 0xd, 0);
        func_1720(0x100002b);
    }
    else if (var0 == 0x69)
    {
        func_22(0xff, 0, 1.0f);
        var1 = PostureModuleImplFloat.get_lr();
        FighterUtil.adjust_wall(var1, -var1, -1.0f, 0x1);
        ControlModuleImpl(0x2714, 0xd, 0);
    }
    else if (var0 == 0x6a)
    {
        func_22(0x101, 0, 1.0f);
        FighterUtil(0x4, PostureModuleImplFloat.get_lr(), 0x1);
    }
}

void func_1722()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    if (var0 != 0)
    {
        FighterUtil(0x6, var0);
    }
}

int func_1723()
{
    int var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    var0 = StatusModuleImpl(0);
    if (var0 == 0x6c || var0 == 0x6d)
    {
        var1 = PostureModuleImplFloat.get_lr();
        var2 = sys_40(0xf, var1);
        WorkModuleImpl.set_float(var2, 0x1000006);
        var3 = 0;
        var4 = 1.0f;
        if (var1 == 1.0f)
        {
            var3 = GroundModuleImplFloat(0x5, 0x2);
            var4 = GroundModuleImplFloat(0x6, 0x2);
        }
        else
        {
            var3 = GroundModuleImplFloat(0x5, 0x4);
            var4 = GroundModuleImplFloat(0x6, 0x4);
        }
        var5 = Math.atan2(var3, var4);
        var6 = var5 * -var1 * (float)0xb4 / 3.1415927410125732f + 90.0f;
        WorkModuleImpl.set_float(var6, 0x1000007);
    }
    else if (var0 == 0x66 || var0 == 0x67 || var0 == 0x6b)
    {
        if (MotionModuleImplFloat(0x9) == 0)
        {
            var2 = sys_40(0xf, PostureModuleImplFloat.get_lr());
            WorkModuleImpl.set_float(var2, 0x1000006);
        }
    }
    return 0;
}

int func_1724()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x1000007);
    if (var0 >= WorkModuleImplFloat.get_float(0x20000b8) || var0 <= WorkModuleImplFloat.get_float(0x20000b9))
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return 0;
}

void func_1725()
{
    if (global4 == 0x6a)
    {
        KineticModuleImpl.clear_speed(0x1);
    }
}

int func_1726()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1, 0x8000000, 0x800, 0x4000);
    return 0;
}

int func_1727()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x2f)
    {
        return 0x133;
    }
    else if (var0 == 0x33)
    {
        return 0x139;
    }
    else if (var0 == 0x34)
    {
        return 0x139;
    }
    else if (var0 == 0x38)
    {
        return 0x13d;
    }
    else if (var0 == 0x35)
    {
        return 0x143;
    }
    else if (var0 == 0x3c)
    {
        return 0x149;
    }
    else if (var0 == 0x3a)
    {
        WorkModuleImpl.set_float(ItemModuleImplFloat(0, 0) + 0, 0x1000007);
        return 0x14f;
    }
    return 0x133;
}

float func_1728()
{
    int var0;
    int var1;
    int var2;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x2f)
    {
        var1 = 0;
    }
    else if (var0 == 0x33)
    {
        var1 = 0x1;
    }
    else if (var0 == 0x34)
    {
        var1 = 0x1;
    }
    else if (var0 == 0x38)
    {
        var1 = 0x3;
    }
    else if (var0 == 0x35)
    {
        var1 = 0x4;
    }
    else if (var0 == 0x3c)
    {
        var1 = 0x5;
    }
    else if (var0 == 0x3a)
    {
        var1 = 0x6;
    }
    if (global4 == 0x92)
    {
        var2 = 0;
    }
    else if (global4 == 0x93)
    {
        var2 = 0x1;
    }
    else if (global4 == 0x94 || global4 == 0x95)
    {
        var2 = 0x2;
    }
    else if (global4 == 0x97)
    {
        var2 = 0x4;
    }
    return sys_40(0x1, var1, var2);
}

void func_1729()
{
    int var0;
    var0 = func_1727();
    func_22(var0, 0, func_1728());
    if (var0 == 0x133)
    {
        sys_21(0xd, 0x2, 0x55, 0x1);
        sys_21(0x33);
    }
    else if (var0 == 0x139)
    {
        sys_21(0xd, 0x2, 0x59, 0x1);
        sys_21(0x37);
    }
    else if (var0 == 0x13d)
    {
        sys_21(0xd, 0x2, 0x61, 0x1);
        sys_21(0x3f);
    }
    else if (var0 == 0x143)
    {
        sys_21(0xd, 0x2, 0x65, 0x1);
        sys_21(0x43);
    }
    else if (var0 == 0x149)
    {
        sys_21(0xd, 0x2, 0x69, 0x1);
        sys_21(0x4b);
    }
    else if (var0 == 0x14f)
    {
        sys_21(0xd, 0x2, 0x6d, 0x1);
        sys_21(0x47);
    }
    func_78(func_1731);
}

int func_1730()
{
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (global18 == 0 && func_39() != 0)
        {
            return 0x1;
        }
        else if (global18 == 0x2 && func_41() != 0)
        {
            return 0x1;
        }
    }
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    if (MotionModuleImpl.is_end() == 0x1 && global18 == 0)
    {
        func_16(0, 0);
        return 0x1;
    }
    return 0;
}

void func_1731()
{
    if (func_1730() == 0x1)
    {
        return;
    }
}

void func_1732()
{
    int var0;
    if (ItemModuleImpl(0x4) == 0x1)
    {
        ItemModuleImpl(0x13, 0x65);
        var0 = ItemModuleImpl(0x11);
        if (var0 == 0x2f || var0 == 0x3a)
        {
            ItemModuleImpl(0xa, 0, 1.0f);
        }
    }
}

int func_1733()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1, 0x8000000, 0x800, 0x4000);
    return 0;
}

int func_1734()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x2f)
    {
        return 0x134;
    }
    else if (var0 == 0x33)
    {
        return 0x13a;
    }
    else if (var0 == 0x34)
    {
        return 0x13a;
    }
    else if (var0 == 0x38)
    {
        return 0x13e;
    }
    else if (var0 == 0x35)
    {
        return 0x144;
    }
    else if (var0 == 0x3c)
    {
        return 0x14a;
    }
    else if (var0 == 0x3a)
    {
        WorkModuleImpl.set_float(ItemModuleImplFloat(0, 0) + 0, 0x1000007);
        return 0x150;
    }
    return 0x134;
}

void func_1735()
{
    int var0;
    if (global5 == 0x8)
    {
        KineticModuleImpl.change_kinetic_type(0x7);
    }
    func_33();
    var0 = func_1734();
    func_22(var0, 0, func_1728());
    if (var0 == 0x134)
    {
        sys_21(0xd, 0x2, 0x56, 0x1);
        sys_21(0x34);
    }
    else if (var0 == 0x13a)
    {
        sys_21(0xd, 0x2, 0x5a, 0x1);
        sys_21(0x38);
    }
    else if (var0 == 0x13e)
    {
        sys_21(0xd, 0x2, 0x62, 0x1);
        sys_21(0x40);
    }
    else if (var0 == 0x144)
    {
        sys_21(0xd, 0x2, 0x66, 0x1);
        sys_21(0x44);
    }
    else if (var0 == 0x14a)
    {
        sys_21(0xd, 0x2, 0x6a, 0x1);
        sys_21(0x4c);
    }
    else if (var0 == 0x150)
    {
        sys_21(0xd, 0x2, 0x6e, 0x1);
        sys_21(0x48);
    }
    func_78(func_1736);
}

void func_1736()
{
    if (func_1730() == 0x1)
    {
        return;
    }
}

void func_1737()
{
    func_1732();
}

void func_1738(int arg0)
{
    if (arg0 == 0x1)
    {
        ItemModuleImpl(0x1c, 0, 0);
    }
}

int func_1739()
{
    int var0;
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x20001, 0x8000000, 0, 0);
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x33 || var0 == 0x34)
    {
        StatusModuleImpl(0x2711, 0x95);
        func_1738(0x1);
        if (global48 >= WorkModuleImplFloat.get_float(0x2000007))
        {
            PostureModuleImpl(0x2712);
        }
        else if (-global48 >= WorkModuleImplFloat.get_float(0x2000007))
        {
            PostureModuleImpl(0x2711);
        }
        return 0x1;
    }
    return 0;
}

int func_1740()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x2f)
    {
        return 0x135;
    }
    else if (var0 == 0x33)
    {
        return 0x13b;
    }
    else if (var0 == 0x34)
    {
        return 0x13b;
    }
    else if (var0 == 0x38)
    {
        return 0x13f;
    }
    else if (var0 == 0x35)
    {
        return 0x145;
    }
    else if (var0 == 0x3c)
    {
        return 0x14b;
    }
    else if (var0 == 0x3a)
    {
        WorkModuleImpl.set_float(ItemModuleImplFloat(0, 0) + 0, 0x1000007);
        return 0x151;
    }
    return 0x135;
}

void func_1741()
{
    int var0;
    if (global5 == 0x8)
    {
        KineticModuleImpl.change_kinetic_type(0x7);
    }
    if (global48 >= WorkModuleImplFloat.get_float(0x2000007))
    {
        PostureModuleImpl(0x2712);
    }
    else if (-global48 >= WorkModuleImplFloat.get_float(0x2000007))
    {
        PostureModuleImpl(0x2711);
    }
    PostureModuleImpl.update_rot_y();
    var0 = func_1740();
    WorkModuleImpl.set_int(var0, 0x11000002);
    func_22(var0, 0, func_1728());
    if (var0 == 0x135)
    {
        sys_21(0xd, 0x2, 0x57, 0x1);
    }
    else if (var0 == 0x13f)
    {
        sys_21(0xd, 0x2, 0x63, 0x1);
    }
    else if (var0 == 0x145)
    {
        sys_21(0xd, 0x2, 0x67, 0x1);
    }
    else if (var0 == 0x14b)
    {
        sys_21(0xd, 0x2, 0x6b, 0x1);
    }
    else if (var0 == 0x151)
    {
        sys_21(0xd, 0x2, 0x6f, 0x1);
    }
    WorkModuleImpl.strans_on(0x1e00007c);
    func_78(func_1742);
}

void func_1742()
{
    int var0;
    if (CancelModuleImpl.is_cancelable() == 0x1 && (func_39() != 0 || func_41() != 0))
    {
        return;
    }
    var0 = func_1743();
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00007c) == 0x1 && var0 == 0x1 && ControlModuleImpl(0x2712, 0) == 0x1 && global18 == 0)
    {
        func_16(0x96, 0x1);
        return;
    }
    if (var0 == 0x1 && global18 == 0)
    {
        func_16(0x95, 0);
        return;
    }
}

int func_1743()
{
    if (WorkModuleImpl.is_flag(0x21000011))
    {
        return 0x1;
    }
    return 0;
}

void func_1744()
{
    WorkModuleImpl.set_float(MotionModuleImplFloat.get_frame(), 0x1000006);
    if (!(global6 == 0x96 || global6 == 0x95))
    {
        func_1732();
    }
}

int func_1745()
{
    func_1746(0, 0, 0x40);
    return 0;
}

int func_1746(int arg0, int arg1, int arg2)
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, arg0, arg1, arg2, 0x9c0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x20001, 0x8000000, 0, 0);
    return 0;
}

void func_1747()
{
    int var0;
    float var1;
    float var2;
    int var3;
    float var4;
    var0 = func_1740() + 0x2;
    var1 = WorkModuleImplFloat.get_float(0x30000e1);
    var2 = (float)MotionModuleImpl.get_end_frame(var0);
    var3 = (int)(var2 / var1);
    WorkModuleImpl.set_int(var3, 0x11000006);
    var4 = WorkModuleImplFloat.get_float(0x25);
    if (var4 > 0)
    {
        var3 = (int)((float)var3 * var4);
    }
    var1 = var2 / (float)var3;
    WorkModuleImpl.set_int(var3, 0x11000005);
    WorkModuleImpl.set_int(var3, 0x11000007);
    func_22(var0, 0, var1);
    func_78(func_1748);
}

void func_1748()
{
    int var0;
    var0 = func_1749();
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return;
    }
    else if (global18 == 0)
    {
        if (var0)
        {
            func_16(0x95, 0);
            return;
        }
        if (ControlModuleImpl(0x2713, 0) == 0x1)
        {
            func_16(0x95, 0x1);
            return;
        }
    }
}

int func_1749()
{
    if (StatusModuleImpl(0x6) != 0x1)
    {
        WorkModuleImpl.dec_int(0x11000005);
    }
    if (WorkModuleImpl.get_int(0x11000005) <= 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1750()
{
    PhysicsModuleImpl(0x8);
    if (!(global6 == 0x95))
    {
        func_1732();
    }
}

int func_1751()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x33 || var0 == 0x34)
    {
        StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0x860);
    }
    else
    {
        StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0x4, 0x10, 0x41, 0x860);
    }
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x20001, 0x8000000, 0x800, 0x4000);
    return 0;
}

void func_1752()
{
    int var0;
    int var1;
    float var2;
    float var3;
    WorkModuleImpl.on_flag2(0x21000012);
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x33 || var0 == 0x34)
    {
        func_33();
    }
    ControlModuleImpl(0x271b);
    var1 = func_1740();
    var2 = WorkModuleImplFloat.get_float(0x1000006);
    var3 = 1.0f;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x33 || var0 == 0x34)
    {
        var3 /= WorkModuleImplFloat.get_float(0x3000100);
    }
    MotionModuleImpl(0x26, var1, var2, var3);
    if (var1 == 0x13b)
    {
        sys_21(0xd, 0x2, 0x5b, 0x1);
    }
    else
    {
        if (var1 == 0x135)
        {
            sys_21(0x35);
        }
        else if (var1 == 0x13f)
        {
            sys_21(0x41);
        }
        else if (var1 == 0x145)
        {
            sys_21(0x45);
        }
        else if (var1 == 0x14b)
        {
            sys_21(0x4d);
        }
        else if (var1 == 0x151)
        {
            sys_21(0x49);
        }
        var1++;
        if (MotionModuleImpl.is_exist(var1) == 0x1)
        {
            WorkModuleImpl.on_flag(0x21000010);
        }
    }
    WorkModuleImpl.set_int(var1, 0x11000002);
    if (!StopModuleImpl(0x1))
    {
        func_1753();
    }
    global16 = func_1753;
    func_78(func_1754);
}

void func_1753()
{
    if (ControlModuleImpl(0x2713, 0) == 0x1)
    {
        WorkModuleImpl.on_flag(0x2100000e);
    }
    else if (ControlModuleImpl(0x2710, 0) == 0x1)
    {
        WorkModuleImpl.on_flag(0x2100000f);
    }
}

void func_1754()
{
    if (func_1730() == 0x1)
    {
        return;
    }
    if (WorkModuleImpl.is_flag(0x21000010) == 0x1)
    {
        if (WorkModuleImpl.is_flag(0x2100000d) == 0x1 && WorkModuleImpl.is_flag(0x2100000e) == 0 || WorkModuleImpl.is_flag(0x2100000d) == 0x1 && WorkModuleImpl.is_flag(0x2100000f) == 0x1)
        {
            func_22(WorkModuleImpl.get_int(0x11000002), 0, func_1728());
            WorkModuleImpl.off_flag(0x21000010);
        }
    }
}

void func_1755()
{
    func_1732();
    if (ItemModuleImpl(0x11) == 0x33 || ItemModuleImpl(0x11) == 0x34)
    {
        
    }
}

int func_1756()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0x1, 0x8000000, 0x800, 0x4000);
    return 0;
}

int func_1757()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x2f)
    {
        return 0x138;
    }
    else if (var0 == 0x33)
    {
        return 0x13c;
    }
    else if (var0 == 0x34)
    {
        return 0x13c;
    }
    else if (var0 == 0x38)
    {
        return 0x142;
    }
    else if (var0 == 0x35)
    {
        return 0x148;
    }
    else if (var0 == 0x3c)
    {
        return 0x14e;
    }
    else if (var0 == 0x3a)
    {
        WorkModuleImpl.set_float(ItemModuleImplFloat(0, 0) + 0, 0x1000007);
        return 0x154;
    }
    return 0x138;
}

void func_1758()
{
    int var0;
    var0 = func_1757();
    func_22(var0, 0, func_1728());
    if (var0 == 0x138)
    {
        sys_21(0xd, 0x2, 0x58, 0x1);
        sys_21(0x36);
    }
    else if (var0 == 0x13c)
    {
        sys_21(0xd, 0x2, 0x5c, 0x1);
        sys_21(0x3a);
    }
    else if (var0 == 0x142)
    {
        sys_21(0xd, 0x2, 0x64, 0x1);
        sys_21(0x42);
    }
    else if (var0 == 0x148)
    {
        sys_21(0xd, 0x2, 0x68, 0x1);
        sys_21(0x46);
    }
    else if (var0 == 0x14e)
    {
        sys_21(0xd, 0x2, 0x6c, 0x1);
        sys_21(0x4e);
    }
    else if (var0 == 0x154)
    {
        sys_21(0xd, 0x2, 0x70, 0x1);
        sys_21(0x4a);
    }
    func_78(func_1759);
}

void func_1759()
{
    if (func_1730() == 0x1)
    {
        return;
    }
}

void func_1760()
{
    func_1732();
}

void func_1761()
{
    if (global4 == 0x95 || global4 == 0x96)
    {
        func_344();
    }
}

void func_1762()
{
    if (global4 == 0x95 || global4 == 0x96)
    {
        func_348();
    }
    ItemModuleImpl(0x13, 0x5);
}

void func_1763()
{
    int var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    var0 = WorkModuleImpl.get_int(0x11000003);
    EffectModuleImpl(0x8, var0, 0x1, 0x1);
    if (GroundModuleImpl(0x2722, 0x8))
    {
        var1 = GroundModuleImplFloat(0x3, 0x8);
        var2 = GroundModuleImplFloat(0x4, 0x8);
        var3 = GroundModuleImplFloat(0xc);
        PostureModuleImpl.set_pos(var1, var2, var3);
        var4 = GroundModuleImplFloat(0xa);
        var5 = GroundModuleImplFloat(0xb);
        GroundModuleImpl(0x1a, var4, var5);
    }
    GroundModuleImpl(0x7, 0);
}

void func_1764()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    int var5;
    var0 = GroundModuleImplFloat(0x5, 0x8);
    var1 = GroundModuleImplFloat(0x6, 0x8);
    var2 = Math.atan2(var0, var1);
    var3 = GroundModuleImplFloat(0x3, 0x8);
    var4 = GroundModuleImplFloat(0x4, 0x8);
    var5 = WorkModuleImpl.get_int(0x11000003);
    EffectModuleImpl(0x17, var5, var3, var4, GroundModuleImplFloat(0xc));
    EffectModuleImpl(0x18, var5, 0, 0, -(var2 * (float)0xb4 / 3.1415927410125732f));
}

int func_1765()
{
    if (func_42())
    {
        WorkModuleImpl.off_flag2(0x20000071);
        return 0x1;
    }
    if (!WorkModuleImpl.is_flag(0x20000066) && global5 == 0x4d || global5 == 0x50 || global5 == 0x57 || global5 == 0x51)
    {
        WorkModuleImpl.off_flag2(0x20000071);
        WorkModuleImpl.off_flag2(0x20000066);
        StatusModuleImpl(0x2711, 0x57);
        return 0x1;
    }
    WorkModuleImpl.off_flag2(0x20000066);
    StatusModuleImpl(0x5, 0, 0x33, 0x1, 0, 0x1, 0, 0, 0x40, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0x400000a, 0, 0);
    return 0;
}

void func_1766()
{
    WorkModuleImpl.dec_int(0x11000002);
}

void func_1767()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1200016e), 0x11000002);
    DamageModuleImpl(0xb, 0x2, WorkModuleImplFloat.get_float(0x2000179) + 0);
    if (!StopModuleImpl(0x1))
    {
        func_1766();
    }
    global16 = func_1766;
    func_78(func_1768);
}

int func_1768()
{
    if (func_96() == 0x1)
    {
        func_16(0xc4, 0x1);
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xc4, 0);
        return 0x1;
    }
    if (WorkModuleImpl.get_int(0x11000002) <= 0)
    {
        func_16(0xc3, 0);
        return 0x1;
    }
    return 0;
}

void func_1769()
{
    DamageModuleImpl(0xb, 0, 0 + 0);
}

void func_1770()
{
    int var0;
    int var1;
    int var2;
    int var3;
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
    float var14;
    float var15;
    float var16;
    int var17;
    var0 = WorkModuleImpl.get_int(0x130000b5);
    var1 = WorkModuleImpl.is_flag(0x20000071);
    if (var1)
    {
        var2 = 0;
    }
    else
    {
        var2 = DamageModuleImpl.get_damage_level();
    }
    var3 = 0;
    if (var2 == 0)
    {
        if (var0 == 0)
        {
            var3 = 0xc9;
        }
        else if (var0 == 0x1)
        {
            var3 = 0xc6;
        }
        else if (var0 == 0x2)
        {
            var3 = 0xc3;
        }
    }
    else if (var2 == 0x1)
    {
        if (var0 == 0)
        {
            var3 = 0xca;
        }
        else if (var0 == 0x1)
        {
            var3 = 0xc7;
        }
        else if (var0 == 0x2)
        {
            var3 = 0xc4;
        }
    }
    else if (var2 == 0x2)
    {
        if (var0 == 0)
        {
            var3 = 0xcb;
        }
        else if (var0 == 0x1)
        {
            var3 = 0xc8;
        }
        else if (var0 == 0x2)
        {
            var3 = 0xc5;
        }
    }
    func_22(var3, 0, 0);
    if (var1)
    {
        var4 = 0;
    }
    else
    {
        var4 = DamageModuleImplFloat(0x8);
    }
    var5 = WorkModuleImplFloat.get_float(0x200016f) + WorkModuleImplFloat.get_float(0x2000171) * sys_8(0) + WorkModuleImplFloat.get_float(0x2000170) * (3.0f - (float)sys_21(0x1b)) + WorkModuleImplFloat.get_float(0x2000172) * var4 + WorkModuleImplFloat.get_float(0x2000173) * DamageModuleImplFloat(0);
    var5 *= WorkModuleImplFloat.get_float(0x30000fe);
    ControlModuleImpl(0x6, var5, WorkModuleImplFloat.get_float(0x2000174), WorkModuleImplFloat.get_float(0x2000175), 0xffffffff, 0x1);
    var6 = ModelModuleImplFloat(0, 0);
    var7 = ModelModuleImplFloat(0x1, 0);
    var8 = ModelModuleImplFloat(0, 0x3);
    var9 = ModelModuleImplFloat(0x1, 0x3);
    var10 = (var9 - var7) / (float)(WorkModuleImpl.get_int(0x1200016e) - 0x1);
    WorkModuleImpl.set_float(var10 + 0, 0x1000006);
    var11 = GroundModuleImplFloat(0x5, 0x8);
    var12 = GroundModuleImplFloat(0x6, 0x8);
    var13 = Math.atan2(var11, var12);
    var14 = GroundModuleImplFloat(0x3, 0x8);
    var15 = GroundModuleImplFloat(0x4, 0x8);
    var16 = WorkModuleImplFloat.get_float(0x3000031);
    var17 = EffectModuleImpl(0x3, 0x1000044, var14, var15, PostureModuleImplFloat.get_pos_z(), 0, 0, -var13, var16, 0, 0xffffffff);
    WorkModuleImpl.set_int(var17, 0x11000003);
}

void func_1771()
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
    var0 = GroundModuleImplFloat(0x15);
    var1 = GroundModuleImplFloat(0x17);
    var2 = GroundModuleImplFloat(0x13);
    var3 = WorkModuleImplFloat.get_float(0x1000007);
    if (var0 < var1)
    {
        var4 = var0;
    }
    else
    {
        var4 = var1;
    }
    var3 += WorkModuleImplFloat.get_float(0x1000006);
    var5 = PostureModuleImplFloat.get_scale();
    if (var2 + var3 + 1.0f * var5 > var4)
    {
        var3 = var4 - (var2 + 1.0f * var5);
    }
    func_1764();
    WorkModuleImpl.set_float(var3 + 0, 0x1000007);
    GroundModuleImpl(0x7, var3 / var5);
    var6 = PostureModuleImplFloat.get_pos_x();
    var7 = PostureModuleImplFloat.get_pos_y();
    var8 = PostureModuleImplFloat.get_pos_z();
    PostureModuleImpl.set_pos(var6, var7 - var3 / var5, var8);
}

int func_1772()
{
    return 0;
}

int func_1773()
{
    return 0;
}

void func_1774()
{
    
}

void func_1775()
{
    WorkModuleImpl.off_flag2(0x20000071);
    func_861();
    if (global6 != 0xc3)
    {
        func_1763();
    }
}

int func_1776()
{
    StatusModuleImpl(0x5, 0, 0x33, 0x1, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x40);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0x400000a, 0, 0);
    return 0;
}

void func_1777()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    DamageModuleImpl(0xb, 0x2, WorkModuleImplFloat.get_float(0x2000179) + 0);
    sys_21(0x64, 0x1);
    func_78(func_1778);
}

void func_1778()
{
    if (func_96() == 0x1)
    {
        func_16(0xc4, 0x1);
        return 0x1;
    }
    if (global18 == 0x2)
    {
        func_16(0xc4, 0);
        return 0x1;
    }
    if (func_1781())
    {
        return 0x1;
    }
}

void func_1779()
{
    func_1769();
    sys_21(0x64, 0);
}

void func_1780()
{
    
}

int func_1781()
{
    if (global3 == 0)
    {
        if (func_1783() != 0)
        {
            return 0x1;
        }
    }
    if (func_1784() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1782()
{
    
}

int func_1783()
{
    if (GroundModuleImpl(0x2722, 0x8))
    {
        func_1764();
    }
    return 0;
}

int func_1784()
{
    return 0;
}

void func_1785()
{
    
}

void func_1786()
{
    func_1763();
}

void func_1787()
{
    WorkModuleImpl.add_float(1.0f, 0x1000008);
    if (WorkModuleImplFloat.get_float(0x1000008) >= WorkModuleImplFloat.get_float(0x2000177))
    {
        WorkModuleImpl.strans_group_on(0x1f000008);
        WorkModuleImpl.strans_group_on(0x1f00000a);
        WorkModuleImpl.strans_group_on(0x1f00000b);
        WorkModuleImpl.strans_group_on(0x1f00000c);
        WorkModuleImpl.strans_group_on(0x1f00000d);
        WorkModuleImpl.strans_group_on(0x1f00000e);
        WorkModuleImpl.strans_group_on(0x1f00000f);
        WorkModuleImpl.strans_group_on(0x1f000010);
        WorkModuleImpl.strans_group_on(0x1f000011);
        func_100(0x4);
    }
}

int func_1788()
{
    if (func_470() != 0)
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0x1, 0x1, 0, 0, 0x2, 0, 0);
    return 0;
}

void func_1789()
{
    func_22(0x19, 0, 1.0f);
    DamageModuleImpl(0xb, 0, 0 + 0);
    if (!StopModuleImpl(0x1))
    {
        func_1787();
    }
    global16 = func_1787;
    func_78(func_1790);
}

void func_1790()
{
    if (func_41() != 0)
    {
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0xe, 0);
        return 0x1;
    }
    func_1793();
}

void func_1791()
{
    
}

void func_1792()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x3000158) * WorkModuleImplFloat.get_float(0x2000176);
    KineticModuleImpl.change_kinetic_type(0);
    KineticModuleImpl.set_speed(0x1, var0);
    KineticModuleImpl.set_speed(0x3, 0, 0);
    KineticModuleImpl.set_speed(0x2, 0, 0);
    WorkModuleImpl.set_float(0 + 0, 0x1000008);
}

int func_1793()
{
    if (global3 == 0)
    {
        if (func_1795() != 0)
        {
            return 0x1;
        }
    }
    if (func_1796() != 0)
    {
        return 0x1;
    }
    return 0;
}

void func_1794()
{
    
}

int func_1795()
{
    return 0;
}

int func_1796()
{
    return 0;
}

void func_1797()
{
    
}

void func_1798()
{
    
}

void func_1799()
{
    sys_21(0x1e);
}

void func_1800(int arg0)
{
    sys_21(0x1f, arg0);
}

int func_1801()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0x1, 0, 0, 0xbe2, 0, 0);
    return 0;
}

void func_1802()
{
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    VisibilityModuleImpl(0x2710, 0);
    sys_21(0xa, 0x1);
    func_22(0xffffffff, 0, 1.0f);
    WorkModuleImpl.strans_group_on(0x1f000008);
    func_78(func_1803);
}

void func_1803()
{
    func_1807();
    if (func_812())
    {
        return;
    }
    if (WorkModuleImpl.check_strans(0x1e00000d) == 0x1 && global18 == 0)
    {
        func_16(0x4d, 0);
        return;
    }
    if (func_806() == 0x1)
    {
        return;
    }
    if (func_807() == 0x1)
    {
        return;
    }
}

void func_1804()
{
    float var0;
    float var1;
    var0 = GroundModuleImplFloat(0xa);
    var1 = GroundModuleImplFloat(0xb);
    GroundModuleImpl(0x1a, var0, var1);
}

void func_1805()
{
    int var0;
    func_1799();
    WorkModuleImpl.set_int(0, 0x11000005);
    var0 = WorkModuleImpl.get_int(0x10000017);
    if (var0 == 0xa)
    {
        WorkModuleImpl.set_int(0, 0x11000002);
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    else if (var0 == 0xb)
    {
        WorkModuleImpl.set_int(0, 0x11000002);
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    else if (var0 == 0xc)
    {
        WorkModuleImpl.set_int(0x1, 0x11000002);
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    else if (var0 == 0xd)
    {
        WorkModuleImpl.set_int(0x1, 0x11000002);
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    sys_21(0x20);
    WorkModuleImpl.on_flag2(0x20000041);
    WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x200019b) + 0, 0x12);
}

void func_1806()
{
    int var0;
    float var1;
    float var2;
    int var3;
    var0 = WorkModuleImpl.get_int(0x11000002);
    if (var0 == 0)
    {
        if (global38 & 0x1 || global38 & 0x4)
        {
            WorkModuleImpl.set_int(0x1, 0x11000002);
            sys_21(0x21);
        }
    }
    else if (var0 == 0x2)
    {
        if (WorkModuleImpl.is_flag(0x2100000e))
        {
            if (WorkModuleImpl.is_flag(0x2100000f))
            {
                WorkModuleImpl.off_flag2(0x20000041);
                JostleModuleImpl(0x2710, 0x1);
                var1 = PostureModuleImplFloat.get_pos_x();
                var2 = PostureModuleImplFloat.get_pos_y();
                GroundModuleImpl(0x1a, var1, var2);
                func_16(0x4c, 0);
            }
        }
        else
        {
            var3 = WorkModuleImpl.get_int(0x11000005);
            if (var3 != 0)
            {
                if (KineticModuleImplFloat.get_speed(0x3) < WorkModuleImplFloat.get_float(0x2000106))
                {
                    EffectModuleImpl(0x6, var3);
                    WorkModuleImpl.set_int(0, 0x11000005);
                }
            }
            if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
            {
                if (KineticModuleImplFloat.get_speed(0x3) < WorkModuleImplFloat.get_float(0x1000006))
                {
                    func_16(0x4c, 0);
                }
            }
            WorkModuleImpl.off_flag2(0x20000041);
        }
    }
}

void func_1807()
{
    
}

void func_1808()
{
    func_1800(0);
    VisibilityModuleImpl(0x2710, 0x1);
}

int func_1809()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x1, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0xbe2, 0, 0);
    return 0;
}

void func_1810()
{
    if (WorkModuleImpl.is_flag(0x2000000b) == 0x1)
    {
        ItemModuleImpl(0x8);
    }
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    CancelModuleImpl(0x2712);
    func_78(func_1811);
}

void func_1811()
{
    
}

void func_1812()
{
    
}

void func_1813()
{
    int var0;
    int var1;
    int var2;
    float var3;
    func_1799();
    sys_21(0x22);
    var0 = WorkModuleImpl.get_int(0x10000017);
    if (var0 == 0x13 || var0 == 0x15)
    {
        var3 = WorkModuleImplFloat.get_float(0x1000006) - PostureModuleImplFloat.get_pos_x();
        if (func_13(var3) < 1.0f)
        {
            var2 = 0x33;
            if (WorkModuleImpl.is_flag(0x2100000d) == 0)
            {
                var1 = 0xb;
                WorkModuleImpl.set_int(0x2, 0x11000002);
            }
            else
            {
                var1 = 0;
                WorkModuleImpl.set_int(0x3, 0x11000002);
            }
        }
        else if (var3 * PostureModuleImplFloat.get_lr() < 0)
        {
            var1 = 0x10;
            var2 = 0x33;
            WorkModuleImpl.set_int(0, 0x11000002);
        }
        else
        {
            var1 = 0xb;
            var2 = 0xe;
            WorkModuleImpl.set_int(0x1, 0x11000002);
        }
        if (MotionModuleImpl.get_motion() != var1)
        {
            func_22(var1, 0, 1.0f);
        }
        GroundModuleImpl(0x2710, 0x2);
        func_20(0);
        KineticModuleImpl.change_kinetic_type(var2);
    }
    else if (var0 == 0x14)
    {
        var1 = 0x3f;
        func_22(var1, 0, 1.0f);
        GroundModuleImpl(0x2710, 0x5);
        func_20(0x2);
        KineticModuleImpl.change_kinetic_type(0x33);
    }
}

void func_1814()
{
    int var0;
    int var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    float var8;
    float var9;
    float var10;
    var0 = WorkModuleImpl.get_int(0x10000017);
    if (var0 == 0x13 || var0 == 0x15)
    {
        var1 = WorkModuleImpl.get_int(0x11000002);
        if (var1 == 0)
        {
            if (MotionModuleImpl.is_end() == 0x1)
            {
                PostureModuleImpl.reverse_lr();
                PostureModuleImpl.update_rot_y();
                WorkModuleImpl.set_int(0x1, 0x11000002);
                func_22(0xb, 0, 1.0f);
                KineticModuleImpl.change_kinetic_type(0xe);
            }
        }
        else if (var1 == 0x1)
        {
            var2 = WorkModuleImplFloat.get_float(0x1000006) - PostureModuleImplFloat.get_pos_x();
            if (var2 * PostureModuleImplFloat.get_lr() < 0)
            {
                KineticModuleImpl.change_kinetic_type(0x33);
                if (WorkModuleImpl.is_flag(0x2100000d) == 0)
                {
                    WorkModuleImpl.set_int(0x2, 0x11000002);
                }
                else
                {
                    func_22(0, 0, 1.0f);
                    WorkModuleImpl.set_int(0x3, 0x11000002);
                }
            }
        }
        else if (var1 == 0x2)
        {
            if (PostureModuleImplFloat.get_lr() < 0)
            {
                var3 = -90.0f;
            }
            else
            {
                var3 = 90.0f;
            }
            var4 = PostureModuleImplFloat(0x4);
            var5 = PostureModuleImplFloat(0x5);
            var6 = PostureModuleImplFloat(0x6);
            var7 = var3 - var5;
            var5 += var7 * 0.4699999988079071f;
            PostureModuleImpl.set_rot(var4, var5, var6);
            var8 = PostureModuleImplFloat.get_pos_x();
            var9 = PostureModuleImplFloat.get_pos_y();
            var10 = PostureModuleImplFloat.get_pos_z() - 0.4000000059604645f;
            PostureModuleImpl.set_pos(var8, var9, var10);
        }
        else if (var1 == 0x3)
        {
            if (MotionModuleImplFloat.get_frame() >= (float)MotionModuleImpl.get_end_frame())
            {
                MotionModuleImpl(0x2711, 0);
            }
        }
    }
    else if (var0 == 0x14)
    {
        var8 = PostureModuleImplFloat.get_pos_x();
        var9 = PostureModuleImplFloat.get_pos_y();
        var10 = PostureModuleImplFloat.get_pos_z();
        var8 += (WorkModuleImplFloat.get_float(0x1000006) - var8) * 0.05000000074505806f;
        var9 += (WorkModuleImplFloat.get_float(0x1000007) - var9) * 0.05000000074505806f;
        var10 -= 0.4000000059604645f;
        PostureModuleImpl.set_pos(var8, var9, var10);
    }
}

void func_1815()
{
    func_1800(0);
}

int func_1816()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0x100000, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0, 0x1, 0, 0, 0, 0);
    return 0;
}

void func_1817()
{
    GroundModuleImpl(0x272a);
    func_1818();
    func_78(func_1819);
}

void func_1818()
{
    float var0;
    float var1;
    var0 = 1.0f;
    var1 = 0;
    func_22(0x18, var0, var1);
    WorkModuleImpl.set_int(0x5, 0x11000000);
}

void func_1819()
{
    
}

void func_1820()
{
    
}

void func_1821()
{
    func_1799();
    sys_21(0x2c);
}

void func_1822()
{
    
}

void func_1823()
{
    int var0;
    func_1800(0);
    var0 = WorkModuleImpl.get_int(0x1200007f);
    WorkModuleImpl.set_int(var0, 0x10000012);
}

int func_1824()
{
    if (func_470() != 0)
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0x2, 0x1, 0x5, 0x4, 0, 0x100000, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0x1, 0, 0x1, 0, 0, 0, 0x4);
    return 0;
}

void func_1825()
{
    float var0;
    float var1;
    if (WorkModuleImpl.is_flag(0x21000014))
    {
        printf("status_GimmickSpringJump from tokusetsu ring.");
    }
    var0 = PostureModuleImplFloat.get_pos_x();
    var1 = PostureModuleImplFloat.get_pos_y();
    GroundModuleImpl(0x1a, var0, var1);
    ControlModuleImpl(0x2714, 0xd, 0);
    func_492();
}

void func_1826()
{
    float var0;
    float var1;
    var0 = GroundModuleImplFloat(0xa);
    var1 = GroundModuleImplFloat(0xb);
    GroundModuleImpl(0x1a, var0, var1);
}

int func_1827()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1828()
{
    func_22(0xc8, 0, 1.0f);
    func_78(func_1829);
}

void func_1829()
{
    if (global18 == 0x2)
    {
        func_16(0x4c, 0);
        return;
    }
    if (MotionModuleImpl.is_end() == 0x1)
    {
        func_16(0, 0);
        return;
    }
}

void func_1830()
{
    
}

int func_1831()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0xbe2, 0, 0);
    return 0;
}

void func_1832()
{
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    VisibilityModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    func_22(0xffffffff, 0, 1.0f);
    func_78(func_1833);
}

void func_1833()
{
    
}

void func_1834()
{
    
}

void func_1835()
{
    func_1799();
    sys_21(0x51);
}

void func_1836()
{
    func_1800(0x1);
}

int func_1837()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0xbe2, 0, 0);
    return 0;
}

void func_1838()
{
    JostleModuleImpl(0x2710, 0);
    DamageModuleImpl(0x6, 0x1);
    MotionModuleImpl.set_motion_rate(0);
    MotionModuleImpl(0x5, 0);
    func_78(func_1839);
}

void func_1839()
{
    
}

void func_1840()
{
    float var0;
    float var1;
    var0 = PostureModuleImplFloat.get_pos_x();
    var1 = PostureModuleImplFloat.get_pos_y();
    GroundModuleImpl(0x1a, var0, var1);
}

void func_1841()
{
    func_1799();
}

void func_1842()
{
    func_1800(0);
}

int func_1843()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x9e2, 0, 0);
    return 0;
}

void func_1844()
{
    JostleModuleImpl(0x2710, 0);
    MotionModuleImpl.set_motion_rate(0);
    WorkModuleImpl.set_int(0x4, 0x11000003);
    func_78(func_1845);
}

int func_1845()
{
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        if (WorkModuleImpl.count_down_int(0x11000002))
        {
            func_16(0x4c, 0);
            return;
        }
        if (WorkModuleImpl.get_int(0x11000003) <= 0)
        {
            if (func_812())
            {
                return 0x1;
            }
            if (global18 == 0)
            {
                func_16(0x4d, 0);
                return 0x1;
            }
            if (func_806() == 0x1)
            {
                return 0x1;
            }
            if (func_807() == 0x1)
            {
                return 0x1;
            }
        }
    }
    return 0;
}

void func_1846()
{
    
}

void func_1847()
{
    func_1799();
}

void func_1848()
{
    float var0;
    float var1;
    float var2;
    func_1800(0);
    var0 = KineticModuleImplFloat.get_damage_speed_x();
    var1 = KineticModuleImplFloat.get_damage_speed_y();
    var2 = KineticModuleImplFloat.get_speed_y(0x1);
    printf("damage x: %f y: %f, gravity y: %f", var0, var1, var2);
    KineticModuleImpl.set_speed(0x1, var2 + var1);
    KineticModuleImpl.set_speed_damage(var0, 0);
}

int func_1849()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0xbe2, 0, 0);
    return 0;
}

void func_1850()
{
    float var0;
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    sys_21(0x6b, 0x1);
    func_22(0x12, 0, WorkModuleImplFloat.get_float(0x200021d));
    var0 = (float)WorkModuleImpl.get_int(0x120002e7);
    var0 += DamageModuleImplFloat(0) * WorkModuleImplFloat.get_float(0x20002e8);
    ControlModuleImpl(0x6, var0, WorkModuleImplFloat.get_float(0x20002e9), WorkModuleImplFloat.get_float(0x20002ea));
    func_78(func_1851);
}

void func_1851()
{
    if (ControlModuleImplFloat.get_clatter() <= 0)
    {
        WorkModuleImpl.on_flag2(0x21000005);
        func_16(0xb, 0x1);
        return 0x1;
    }
}

void func_1852()
{
    sys_21(0x6b, 0);
}

void func_1853()
{
    func_1799();
    sys_21(0x52);
}

void func_1854()
{
    func_1800(0x1);
}

int func_1855()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0xbe2, 0, 0);
    return 0;
}

void func_1856()
{
    float var0;
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    MotionModuleImpl.set_motion_rate(0);
    var0 = (float)WorkModuleImpl.get_int(0x120002eb);
    var0 += DamageModuleImplFloat(0) * WorkModuleImplFloat.get_float(0x20002ec);
    ControlModuleImpl(0x6, var0, WorkModuleImplFloat.get_float(0x20002ed), WorkModuleImplFloat.get_float(0x20002ee));
    WorkModuleImpl.set_float(var0 + 0, 0x1000006);
    func_78(func_1857);
}

void func_1857()
{
    int var0;
    var0 = 0;
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        var0 = 0x1;
    }
    if (ControlModuleImplFloat.get_clatter() <= 0)
    {
        var0 = 0x1;
        WorkModuleImpl.on_flag2(0x2100000d);
    }
    if (var0)
    {
        if (global18 == 0x2)
        {
            func_16(0xe, 0);
        }
        else if (WorkModuleImpl.is_flag(0x2100000e) && WorkModuleImpl.is_flag(0x21000010))
        {
            func_16(0x63, 0);
        }
        else
        {
            MotionModuleImpl.set_motion_rate(1.0f);
            func_16(0, 0);
        }
        return 0x1;
    }
}

void func_1858()
{
    float var0;
    float var1;
    HitModuleImpl(0x2710, 0);
    JostleModuleImpl(0x2710, 0x1);
    VisibilityModuleImpl(0x2710, 0x1);
    var0 = PostureModuleImplFloat.get_pos_x();
    var1 = PostureModuleImplFloat.get_pos_y();
    GroundModuleImpl(0x1a, var0, var1);
}

void func_1859()
{
    func_1799();
}

void func_1860()
{
    func_1800(0x1);
}

int func_1861()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0xbe2, 0, 0);
    return 0;
}

void func_1862()
{
    JostleModuleImpl(0x2710, 0);
    func_78(func_1863);
}

void func_1863()
{
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        if (StatusModuleImpl(0) == 0x141)
        {
            func_16(0xe, 0);
            return;
        }
    }
}

void func_1864()
{
    float var0;
    float var1;
    JostleModuleImpl(0x2710, 0x1);
    VisibilityModuleImpl(0x2710, 0x1);
    var0 = PostureModuleImplFloat.get_pos_x();
    var1 = PostureModuleImplFloat.get_pos_y();
    GroundModuleImpl(0x1a, var0, var1);
}

void func_1865()
{
    func_1799();
}

void func_1866()
{
    func_1800(0x1);
}

int func_1867()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0x1, 0, 0x400002, 0, 0);
    return 0;
}

void func_1868()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    func_22(0x2e, 0, 1.0f);
    LinkModuleImpl(0x2716, 0, 0x3);
    func_78(func_1869);
}

void func_1869()
{
    
}

void func_1870()
{
    
}

int func_1871()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0x1, 0, 0x2, 0, 0);
    return 0;
}

void func_1872()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    WorkModuleImpl.off_flag2(0x2000001c);
    func_22(WorkModuleImpl.get_int(0x11000005), 0, 3.0f);
    func_78(func_1873);
}

void func_1873()
{
    
}

void func_1874()
{
    if (global6 != 0xe2)
    {
        CameraModuleImpl(0x6, 0x1, 0xffffffff);
    }
}

int func_1875()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0x1, 0, 0x2, 0, 0);
    return 0;
}

void func_1876()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    func_22(0xffffffff, 0, 1.0f);
    func_78(func_1877);
}

void func_1877()
{
    
}

void func_1878()
{
    CameraModuleImpl(0x6, 0x1, 0xffffffff);
}

int func_1879()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0x3ea, 0, 0);
    return 0;
}

void func_1880()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        func_22(0xffffffff, 0, 1.0f);
    }
    else
    {
        func_22(0xffffffff, 0, 1.0f);
    }
    func_78(func_1881);
}

void func_1881()
{
    
}

void func_1882()
{
    
}

int func_1883()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0x1, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1884()
{
    if (WorkModuleImplFloat.get_float(0x1000006) < -0.5f || WorkModuleImplFloat.get_float(0x1000006) > 0.5f)
    {
        func_22(0xfe, 0, 1.0f);
    }
    else
    {
        func_22(0xcc, 0, 1.0f);
    }
    func_78(func_1885);
}

void func_1885()
{
    
}

void func_1886()
{
    
}

int func_1887()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0x2, 0, 0);
    return 0;
}

void func_1888()
{
    func_22(0xcc, 0, 1.0f);
    func_78(func_1889);
}

void func_1889()
{
    
}

void func_1890()
{
    
}

int func_1891()
{
    printf("status_pre_BittenWario");
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1892()
{
    printf("status_BittenWario");
    ItemModuleImpl(0x16, 0);
    if (!StopModuleImpl(0x1))
    {
        func_1894();
    }
    global16 = func_1894;
    func_78(func_1893);
}

void func_1893()
{
    printf("status_BittenWario_Main");
}

void func_1894()
{
    printf("sub_status_BittenWario_uniq");
    if (func_96())
    {
        printf("clatter_recover");
        LinkModuleImpl(0x2713, 0, 0x10);
    }
}

int func_1895()
{
    printf("status_pre_BittenWarioEnd");
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1896()
{
    printf("status_BittenWarioEnd");
    ItemModuleImpl(0x16, 0);
    func_78(func_1897);
}

void func_1897()
{
    printf("status_BittenWarioEnd_Main");
}

int func_1898()
{
    printf("status_pre_BittenWarioStart 111");
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1899()
{
    printf("status_BittenWarioStart");
    ItemModuleImpl(0x16, 0);
    LinkModuleImpl(0x2716, 0, 0x3);
    func_78(func_1900);
}

void func_1900()
{
    if (MotionModuleImplFloat.get_frame() >= WorkModuleImplFloat.get_float(0x1000006))
    {
        func_16(0xe7);
        return;
    }
}

int func_1901()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3ea, 0, 0);
    return 0;
}

void func_1902()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    func_1905();
    func_78(func_1903);
}

void func_1903()
{
    int var0;
    int var1;
    var0 = StatusModuleImpl(0x6);
    var1 = 0;
    if (!var0)
    {
        if (global19 == 0 && global18 == 0x2)
        {
            var1 = 0x1;
        }
        else if (global19 == 0x2 && global18 == 0)
        {
            var1 = 0x1;
        }
    }
    if (var1)
    {
        func_1905();
    }
}

void func_1904()
{
    
}

void func_1905()
{
    int var0;
    if (global18 == 0)
    {
        if (!WorkModuleImpl.is_flag(0x20000040))
        {
            GroundModuleImpl(0x2710, 0x1);
            var0 = WorkModuleImpl.get_int(0x11000002);
            if (WorkModuleImpl.is_flag(0x2100000d))
            {
                func_22(var0, 0, 1.0f);
            }
            else
            {
                func_23(var0);
                WorkModuleImpl.on_flag2(0x2100000d);
            }
        }
    }
    else if (!WorkModuleImpl.is_flag(0x20000040))
    {
        GroundModuleImpl(0x2710, 0x5);
        if (WorkModuleImpl.is_flag(0x2100000d))
        {
            func_22(0x88, 0, 1.0f);
        }
        else
        {
            func_23(0x88);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

void func_1906()
{
    
}

void func_1907()
{
    printf("sub_uniq_process_capture_yoshi_exec");
    if (WorkModuleImpl.is_flag(0x20000040) == 0)
    {
        printf("sub_uniq_process_capture_yoshi_exec false");
        func_1093();
    }
}

int func_1908()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0x4, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x4003ea, 0, 0);
    return 0;
}

void func_1909()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    sys_21(0xa, 0x1);
    func_78(func_1910);
}

void func_1910()
{
    
}

void func_1911()
{
    
}

int func_1912()
{
    float var0;
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x400003, 0, 0);
    var0 = -LinkModuleImplFloat(0x7, 0);
    PostureModuleImpl.set_lr(var0);
    PostureModuleImpl.update_rot_y();
    return 0;
}

void func_1913()
{
    func_1090();
    func_1905();
    func_78(func_1914);
}

void func_1914()
{
    func_1094();
}

void func_1915()
{
    
}

int func_1916()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0x1c000, 0x3c, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xb, 0, 0);
    return 0;
}

void func_1917()
{
    if (!StopModuleImpl(0x1))
    {
        func_1103();
    }
    global16 = func_1103;
    func_78(func_1918);
}

void func_1918()
{
    if (func_1104() == 0x1)
    {
        return;
    }
    func_1105();
}

void func_1919()
{
    
}

int func_1920()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x7, 0, 0, 0x1c000, 0x3c, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xf, 0, 0);
    return 0;
}

void func_1921()
{
    WorkModuleImpl.strans_on(0x1e000025);
    WorkModuleImpl.strans_on(0x1e000024);
    func_1113();
    func_78(func_1922);
}

void func_1922()
{
    if (WorkModuleImpl.check_strans(0x1e000024) == 0x1 && MotionModuleImpl.is_end())
    {
        func_16(0xef, 0);
        return 0x1;
    }
    if (WorkModuleImpl.check_strans(0x1e000025) == 0x1 && ControlModuleImplFloat.get_clatter() <= 0)
    {
        func_16(0x42, 0);
        return 0x1;
    }
}

void func_1923()
{
    
}

void func_1924()
{
    
}

int func_1925()
{
    if (global18 == 0x2)
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return 0;
}

void func_1926()
{
    func_1924();
}

int func_1927()
{
    if (func_1925())
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0x85, 0);
            return 0x1;
        }
    }
    return 0;
}

void func_1928()
{
    func_1924();
}

void func_1929()
{
    if (func_1925())
    {
        return 0x1;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1 && func_39() != 0)
    {
        return 0x1;
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0, 0);
        return 0x1;
    }
}

int func_1930()
{
    StatusModuleImpl(0x5, 0, 0x52, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x3, 0x10000, 0, 0);
    return 0;
}

void func_1931()
{
    func_1926();
    func_22(0x10b, 0, 1.0f);
    func_78(func_1932);
}

void func_1932()
{
    if (func_1927())
    {
        return;
    }
}

void func_1933()
{
    
}

int func_1934()
{
    StatusModuleImpl(0x5, 0, 0x20, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x3, 0x10004, 0, 0);
    return 0;
}

void func_1935()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1200008e), 0x1000000a);
    func_1926();
    func_22(0x10a, 0, 1.0f);
    PhysicsModuleImpl(0x9);
    func_78(func_1936);
}

void func_1936()
{
    if (global18 == 0x2)
    {
        if (GroundModuleImpl(0x2727))
        {
            func_16(0x7d, 0);
            return;
        }
    }
    if (func_1927())
    {
        return;
    }
}

void func_1937()
{
    WorkModuleImpl.off_flag2(0x20000011);
}

int func_1938()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x10000, 0, 0);
    return 0;
}

void func_1939()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x1200008e), 0x11000002);
    func_1924();
    func_22(0x10c, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_1940();
    }
    global16 = func_1940;
    PhysicsModuleImpl(0x9);
    func_78(func_1941);
}

void func_1940()
{
    if (WorkModuleImpl.get_int(0x11000002) > 0)
    {
        WorkModuleImpl.dec_int(0x11000002);
    }
}

void func_1941()
{
    float var0;
    float var1;
    if (global18 == 0)
    {
        if (ControlModuleImpl(0x2710, 0))
        {
            func_16(0x87, 0x1);
            return;
        }
        if (ControlModuleImpl(0x2710, 0x1))
        {
            func_16(0x87, 0x1);
            return;
        }
        var0 = WorkModuleImplFloat.get_float(0x200005d);
        if (func_88() >= var0)
        {
            if (ControlModuleImpl(0x271d))
            {
                func_16(0x88, 0x1);
                return;
            }
        }
        if (func_89() >= var0)
        {
            if (ControlModuleImpl(0x271d))
            {
                func_16(0x89, 0x1);
                return;
            }
        }
        var1 = WorkModuleImplFloat.get_float(0x200005c);
        if (global32 >= var1)
        {
            if (!ControlModuleImpl(0x271d))
            {
                func_16(0x86, 0x1);
                return;
            }
        }
        if (WorkModuleImpl.get_int(0x11000002) <= 0)
        {
            func_16(0x86, 0);
            return;
        }
    }
    if (func_1925())
    {
        return;
    }
}

void func_1942()
{
    
}

int func_1943()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1944()
{
    func_1928();
    func_22(0x10d, 0, 1.0f);
    func_78(func_1945);
}

void func_1945()
{
    if (func_1929())
    {
        return;
    }
}

void func_1946()
{
    
}

int func_1947()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0, 0x1, 0x20);
    return 0;
}

void func_1948()
{
    func_1928();
    func_22(0x10e, 0, 1.0f);
    func_78(func_1949);
}

void func_1949()
{
    if (func_1929())
    {
        return;
    }
}

void func_1950()
{
    
}

int func_1951()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x80000, 0, 0x1);
    return 0;
}

void func_1952()
{
    func_1928();
    func_22(0x10f, 0, 1.0f);
    func_78(func_1953);
}

void func_1953()
{
    if (func_1929())
    {
        return;
    }
}

void func_1954()
{
    
}

int func_1955()
{
    StatusModuleImpl(0x5, 0, 0xf, 0x2, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x80000, 0, 0x1);
    return 0;
}

void func_1956()
{
    func_1928();
    func_22(0x110, 0, 1.0f);
    func_78(func_1957);
}

void func_1957()
{
    if (func_1929())
    {
        return;
    }
}

void func_1958()
{
    
}

int func_1959()
{
    StatusModuleImpl(0x5, 0x2, 0x5c, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0x1, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1960()
{
    MotionModuleImpl.set_motion_rate(0);
    func_38();
    func_40();
    func_78(func_1961);
}

void func_1961()
{
    if (global18 == 0x2)
    {
        if (func_58())
        {
            return;
        }
        if (func_59())
        {
            return;
        }
        if (func_61())
        {
            return;
        }
        if (func_62())
        {
            return;
        }
        if (func_63())
        {
            return;
        }
    }
    else
    {
        if (func_43())
        {
            return;
        }
        if (func_44())
        {
            return;
        }
        if (func_46())
        {
            return;
        }
        if (func_47())
        {
            return;
        }
        if (func_48())
        {
            return;
        }
        if (func_49())
        {
            return;
        }
    }
}

void func_1962()
{
    
}

int func_1963()
{
    StatusModuleImpl(0x5, 0x2, 0x2e, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_1964()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    KineticModuleImpl(0xe, 0x3, 0x16, 0, 0, 0, 0, 0);
    KineticModuleImpl.set_max_speed(0x3, -1.0f, -1.0f);
    KineticModuleImpl.enable_energy(0x3);
    func_22(0xd4, 0, 1.0f);
    GroundModuleImpl(0x15, 0x1);
    var0 = DamageModuleImplFloat(0);
    var1 = WorkModuleImplFloat.get_float(0x20001dd);
    var2 = 1.0f;
    var3 = WorkModuleImplFloat.get_float(0x20001df);
    var4 = WorkModuleImplFloat.get_float(0x20001de);
    if (9.999999747378752e-06f < var4)
    {
        if (var0 < var4)
        {
            var3 = var3 * (var4 - var0) / var4;
        }
        else
        {
            var3 = 0;
        }
    }
    else
    {
        var3 = 0;
    }
    ControlModuleImpl(0x6, var1, var2, var3);
    CaptureModuleImpl(0xa);
    func_78(func_1965);
}

void func_1965()
{
    float var0;
    float var1;
    int var2;
    float var3;
    if (MotionModuleImpl.is_end())
    {
        func_22(0xd4, 0, 1.0f);
    }
    if (func_96())
    {
        printf("clatter_recover");
        func_16(0x43, 0);
        return 0x1;
    }
    var0 = CaptureModuleImplFloat(0x1);
    var1 = CaptureModuleImplFloat(0x2);
    if (var0 < 0)
    {
        var2 = 0x50;
    }
    else
    {
        var2 = 0xa0;
    }
    if (GroundModuleImpl(0x2722, var2) == 0x1)
    {
        if (WorkModuleImpl.is_flag(0x2100000f) == 0x1)
        {
            var0 = var1 = 0;
        }
        else
        {
            WorkModuleImpl.on_flag2(0x2100000f);
        }
    }
    else
    {
        WorkModuleImpl.off_flag2(0x2100000f);
    }
    var3 = 0.20000000298023224f;
    KineticModuleImpl.set_speed(0x3, var0 * var3, var1 * var3);
    CaptureModuleImpl(0xa);
}

void func_1966()
{
    CaptureModuleImpl(0xa);
}

void func_1967()
{
    if (global6 == 0x43)
    {
        PostureModuleImpl.set_lr(-LinkModuleImplFloat(0x7, 0));
        PostureModuleImpl.update_rot_y();
    }
    if (global6 != 0x42)
    {
        LinkModuleImpl(0x2713, 0, 0x28);
    }
    if (LinkModuleImpl(0x2, 0))
    {
        LinkModuleImpl(0x6, 0);
    }
    ControlModuleImpl(0x6, 0, 0, 0);
}

int func_1968()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4003ea, 0, 0);
    return 0;
}

void func_1969()
{
    VisibilityModuleImpl(0x2710, 0);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    HitModuleImpl(0x2710, 0x2);
    func_22(0xffffffff, 0, 1.0f);
    func_78(func_1970);
}

void func_1970()
{
    if (ControlModuleImplFloat.get_clatter() <= 0)
    {
        func_16(0x43, 0);
        return;
    }
}

void func_1971()
{
    VisibilityModuleImpl(0x2710, 0x1);
    JostleModuleImpl(0x2710, 0x1);
    ItemModuleImpl(0xf, 0x1);
    ItemModuleImpl(0x16, 0x1);
}

int func_1972()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4003ea, 0, 0);
    return 0;
}

void func_1973()
{
    float var0;
    var0 = PostureModuleImplFloat.get_scale();
    WorkModuleImpl.set_float(var0 + 0, 0x1000006);
    WorkModuleImpl.set_int(0xffffffff, 0x11000002);
    WorkModuleImpl.set_int(0xffffffff, 0x11000003);
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    func_22(0x2e, 0, 1.0f);
    func_78(func_1974);
}

void func_1974()
{
    if (WorkModuleImpl.get_int(0x11000002) < 0 || WorkModuleImpl.get_int(0x11000003) < 0)
    {
        return;
    }
    func_1975();
}

void func_1975()
{
    int var0;
    float var1;
    float var2;
    var0 = WorkModuleImpl.get_int(0x11000003);
    if (var0 > 0)
    {
        var0--;
        if (var0 == 0)
        {
            VisibilityModuleImpl(0x2710, 0);
            ItemModuleImpl(0xf, 0);
            ItemModuleImpl(0x16, 0);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
        else
        {
            var1 = (float)var0 * 1.0f / (float)WorkModuleImpl.get_int(0x11000002);
            var2 = WorkModuleImplFloat.get_float(0x1000006) * var1;
            PostureModuleImpl.set_scale(var2);
        }
        WorkModuleImpl.set_int(var0, 0x11000003);
    }
}

void func_1976()
{
    float var0;
    var0 = WorkModuleImplFloat.get_float(0x1000006);
    PostureModuleImpl.set_scale(var0);
    VisibilityModuleImpl(0x2710, 0x1);
}

int func_1977()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_1978()
{
    WorkModuleImpl.on_flag(0x20000001);
    HitModuleImpl(0x271a, 0x1);
    JostleModuleImpl(0x2710, 0);
    sys_21(0x29);
}

void func_1979()
{
    MotionModuleImpl.set_motion_rate(0);
    func_78(func_1980);
}

void func_1980()
{
    
}

void func_1981()
{
    HitModuleImpl(0x271a, 0);
}

void func_1982()
{
    VisibilityModuleImpl(0x2710, 0x1);
    MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x1000006));
    sys_21(0x82, 0x1);
}

int func_1983()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0x3e8, 0, 0);
    return 0;
}

void func_1984()
{
    sys_21(0x82, 0);
    WorkModuleImpl.set_float(MotionModuleImplFloat(0x9) + 0, 0x1000006);
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x3);
    MotionModuleImpl.set_motion_rate(0);
    WorkModuleImpl.on_flag2(0x20000001);
    EffectModuleImpl(0x2726, 0x2a);
    SoundModuleImpl(0x272c, 0x4a60051);
    func_78(func_1985);
}

int func_1985()
{
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        WorkModuleImpl.off_flag2(0x2100000d);
        sys_21(0x58);
        return 0x1;
    }
    return 0;
}

void func_1986()
{
    WorkModuleImpl.off_flag2(0x20000001);
    if (global6 != 0x103)
    {
        func_1982();
    }
}

int func_1987()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0, 0, 0x3e8, 0, 0);
    return 0;
}

void func_1988()
{
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x3);
    VisibilityModuleImpl(0x2710, 0);
    EffectModuleImpl(0x2726, 0x2b);
    SoundModuleImpl(0x272c, 0x4a60052);
    func_78(func_1989);
}

int func_1989()
{
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        func_16(0xe, 0);
        return 0x1;
    }
    return 0;
}

void func_1990()
{
    func_1982();
}

int func_1991()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x33, 0x2, 0, 0, 0, 0, 0x10c0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x4002, 0, 0);
    return 0;
}

void func_1992()
{
    WorkModuleImpl.off_flag2(0x20000003);
    func_1994();
    func_78(func_1993);
}

void func_1993()
{
    if (global18 == 0x2)
    {
        if (GroundModuleImpl(0x2722, 0x6))
        {
            func_16(0xe, 0);
            return;
        }
    }
    if (global18 == 0)
    {
        if (GroundModuleImpl(0x2722, 0x6))
        {
            func_16(0, 0);
            return;
        }
    }
    if (func_85() >= WorkModuleImplFloat.get_float(0x200018a))
    {
        if (global20 >= WorkModuleImplFloat.get_float(0x200018b))
        {
            func_16(0x106, 0x1);
            return;
        }
    }
    if (MotionModuleImpl.is_end())
    {
        func_16(0x106, 0x1);
        return;
    }
    if (func_43())
    {
        return 0x1;
    }
    if (func_44())
    {
        return 0x1;
    }
    if (func_47())
    {
        return 0x1;
    }
    if (func_55())
    {
        return 0x1;
    }
    if (global19 == 0x2 && global18 == 0 || global19 == 0 && global18 == 0x2)
    {
        func_1994();
    }
}

void func_1994()
{
    int var0;
    int var1;
    int var2;
    int var3;
    var0 = 0x1b7;
    var1 = 0x1b8;
    var2 = 0x1b9;
    var3 = 0x1ba;
    if (WorkModuleImpl.get_int(0x13000121) == 0x1)
    {
        var1 = 0x1b7;
        var3 = 0x1b9;
    }
    if (global18 == 0)
    {
        GroundModuleImpl(0x2710, 0x1);
        WorkModuleImpl.strans_group_on(0x1f000000);
        WorkModuleImpl.strans_group_on(0x1f000001);
        WorkModuleImpl.strans_group_on(0x1f000003);
        WorkModuleImpl.strans_group_off(0x1f000008);
        if (PostureModuleImplFloat.get_lr() == 1.0f)
        {
            if (WorkModuleImpl.is_flag(0x21000004))
            {
                func_23(var0);
            }
            else
            {
                func_22(var0, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x21000004);
            }
        }
        else if (WorkModuleImpl.is_flag(0x21000004))
        {
            func_23(var1);
        }
        else
        {
            func_22(var1, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x21000004);
        }
    }
    else if (global18 == 0x2)
    {
        GroundModuleImpl(0x2710, 0x5);
        WorkModuleImpl.strans_group_off(0x1f000000);
        WorkModuleImpl.strans_group_off(0x1f000001);
        WorkModuleImpl.strans_group_off(0x1f000003);
        WorkModuleImpl.strans_group_on(0x1f000008);
        if (PostureModuleImplFloat.get_lr() == 1.0f)
        {
            if (WorkModuleImpl.is_flag(0x21000004))
            {
                func_23(var2);
            }
            else
            {
                func_22(var2, 0, 1.0f);
                WorkModuleImpl.on_flag2(0x21000004);
            }
        }
        else if (WorkModuleImpl.is_flag(0x21000004))
        {
            func_23(var3);
        }
        else
        {
            func_22(var3, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x21000004);
        }
    }
}

void func_1995()
{
    
}

int func_1996()
{
    StatusModuleImpl(0x5, 0x6, 0x19, 0x7, 0, 0, 0, 0, 0x10c0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x4002, 0, 0);
    return 0;
}

void func_1997()
{
    func_1998();
    func_78(func_1999);
}

void func_1998()
{
    if (PostureModuleImplFloat.get_lr() == 1.0f)
    {
        func_22(0x1bb, 0, 1.0f);
    }
    else if (WorkModuleImpl.get_int(0x13000121) == 0x1)
    {
        func_22(0x1bb, 0, 1.0f);
    }
    else
    {
        func_22(0x1bc, 0, 1.0f);
    }
    MotionModuleImpl(0x36, 0x1);
    WorkModuleImpl.strans_on(0x1e000065);
    WorkModuleImpl.strans_on(0x1e000074);
    WorkModuleImpl.strans_on(0x1e00005f);
    WorkModuleImpl.strans_on(0x1e000057);
}

void func_1999()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0x106, 0x1);
        return;
    }
    if (GroundModuleImpl(0x2722, 0x6))
    {
        func_16(0xe, 0x1);
        return;
    }
    if (global18 == 0)
    {
        func_16(0, 0x1);
        return;
    }
    if (StatusModuleImpl(0x6))
    {
        func_71(global23);
        func_71(global30);
        if (global24 & 0x8000)
        {
            if (WorkModuleImpl.check_strans(0x1e000065))
            {
                if (func_72(global27))
                {
                    func_16(0x155, 0x1);
                    return;
                }
            }
        }
        if ((global24 & 0x1) != 0 && WorkModuleImpl.check_strans(0x1e000074) == 0x1)
        {
            if (ItemModuleImpl(0x5, 0x8) == 0x1 || ItemModuleImpl(0x5, 0x2) == 0x1 && ItemModuleImpl(0x1a) <= 0)
            {
                func_16(0x8c, 0);
                return 0x1;
            }
        }
        if (global24 & 0x40)
        {
            if (WorkModuleImpl.check_strans(0x1e00005f))
            {
                func_16(0x2e, 0x1);
                return 0x1;
            }
        }
        if (global24 & 0x8)
        {
            if (WorkModuleImpl.check_strans(0x1e000057))
            {
                func_16(0x2a, 0x1);
                return 0x1;
            }
        }
        WorkModuleImpl.strans_off(0x1e000065);
        WorkModuleImpl.strans_off(0x1e000074);
        WorkModuleImpl.strans_off(0x1e00005f);
        WorkModuleImpl.strans_off(0x1e000057);
        GroundModuleImpl(0x2715);
        func_94();
    }
}

void func_2000()
{
    MotionModuleImpl(0x36, 0);
}

int func_2001()
{
    StatusModuleImpl(0x5, 0x6, 0x18, 0x5, 0, 0, 0, 0, 0x10c0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x4002, 0, 0);
    return 0;
}

void func_2002()
{
    printf("status_Ladder");
    WorkModuleImpl.set_int(0x2, 0x11000000);
    WorkModuleImpl.strans_group_on(0x1f000008);
    if (!StopModuleImpl(0x1))
    {
        func_2005();
    }
    global16 = func_2005;
    func_78(func_2003);
}

void func_2003()
{
    if (func_55())
    {
        return 0x1;
    }
    if (global24 & 0x200000)
    {
        func_16(0xb, 0x1);
        return;
    }
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        func_16(0xe, 0);
        return;
    }
    if (GroundModuleImpl(0x2722, 0x6))
    {
        func_16(0xe, 0);
        return;
    }
}

void func_2004()
{
    printf("status_end_Ladder");
}

void func_2005()
{
    if (func_84() >= WorkModuleImplFloat.get_float(0x200018e))
    {
        WorkModuleImpl.inc_int(0x11000002);
        if (WorkModuleImpl.get_int(0x11000002) > WorkModuleImpl.get_int(0x1200018d))
        {
            if (global48 >= 0)
            {
                PostureModuleImpl(0x2712);
            }
            else
            {
                PostureModuleImpl(0x2711);
            }
            PostureModuleImpl(0x2719);
            WorkModuleImpl.on_flag2(0x2100000d);
        }
    }
}

int func_2006()
{
    StatusModuleImpl(0x5, 0xffffffff, 0x19, 0x5, 0, 0, 0, 0, 0x10c0, 0);
    StatusModuleImpl(0x2713, 0x1, 0, 0, 0, 0, 0, 0x4002, 0, 0);
    return 0;
}

void func_2007()
{
    func_78(func_2003);
}

void func_2008()
{
    if (GroundModuleImpl(0x2722, 0x7))
    {
        func_16(0xe, 0);
        return;
    }
}

void func_2009()
{
    if (global6 == 0)
    {
        func_22(0, 0, 1.0f);
        GroundModuleImpl(0x271b);
    }
}

int func_2010()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0, 0, 0, 0x40);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x4403e2, 0, 0);
    return 0;
}

void func_2011()
{
    MotionModuleImpl.set_motion_rate(0);
    WorkModuleImpl.on_flag2(0x21000006);
    KineticModuleImpl.change_kinetic_type(0xc);
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x3);
    WorkModuleImpl.on_flag2(0x2100000e);
    WorkModuleImpl.off_flag2(0x2000001d);
    WorkModuleImpl.on_flag2(0x20000038);
    if (!StopModuleImpl(0x1))
    {
        func_2014();
    }
    global16 = func_2014;
    func_78(func_2012);
}

void func_2012()
{
    if (WorkModuleImpl.is_flag(0x2100000e) == 0)
    {
        VisibilityModuleImpl(0x2710, 0x1);
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

void func_2013()
{
    WorkModuleImpl.off_flag2(0x20000038);
}

void func_2014()
{
    if (WorkModuleImpl.is_flag(0x2100000f) && !WorkModuleImpl.is_flag(0x21000010))
    {
        sys_21(0xc, 0x1);
        WorkModuleImpl.on_flag2(0x21000010);
    }
    else if (!WorkModuleImpl.is_flag(0x2100000f) && WorkModuleImpl.is_flag(0x21000010))
    {
        sys_21(0xc, 0);
        WorkModuleImpl.off_flag2(0x21000010);
    }
}

int func_2015()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e4, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2016()
{
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x2);
    func_22(0xd2, 0, 1.0f);
    func_78(func_2017);
}

void func_2017()
{
    
}

void func_2018()
{
    
}

void func_2019()
{
    KineticModuleImpl(0x2);
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl(0xe, 0x3, 0x16, 0, 0, 0, 0, 0);
    KineticModuleImpl.set_speed(0x3, -0.8299999833106995f * PostureModuleImplFloat.get_lr(), 4.760000228881836f);
    KineticModuleImpl.set_accel(0x3, 0, 0);
    KineticModuleImpl.enable_energy(0x3);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x1);
}

int func_2020()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2021()
{
    JostleModuleImpl(0x2710, 0);
    func_78(func_2022);
}

void func_2022()
{
    
}

void func_2023()
{
    
}

int func_2024()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2025()
{
    WorkModuleImpl.on_flag2(0x2100000d);
    func_78(func_2026);
}

void func_2026()
{
    float var0;
    var0 = MotionModuleImplFloat.get_frame();
    if (WorkModuleImpl.is_flag(0x2100000d) == 0x1)
    {
        if (var0 >= 3.0f)
        {
            WorkModuleImpl.off_flag2(0x2100000d);
            func_22(0x2e, 0, 1.0f);
            MotionModuleImpl.set_motion_rate(4.0f);
        }
    }
}

void func_2027()
{
    JostleModuleImpl(0x2710, 0);
}

int func_2028()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2029()
{
    func_78(func_2030);
}

void func_2030()
{
    
}

void func_2031()
{
    if (global6 == 0x47)
    {
        WorkModuleImpl.on_flag2(0x21000018);
        WorkModuleImpl.on_flag2(0x2100001c);
    }
}

int func_2032()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2033()
{
    JostleModuleImpl(0x2710, 0);
    VisibilityModuleImpl(0x2710, 0);
    func_22(0, 0, 1.0f);
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl(0x2);
    func_78(func_2034);
}

void func_2034()
{
    
}

void func_2035()
{
    
}

int func_2036()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2037()
{
    VisibilityModuleImpl(0x2710, 0x1);
    JostleModuleImpl(0x2710, 0);
    func_22(0xf1, 0, 1.0f);
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl(0x2);
    func_78(func_2038);
}

void func_2038()
{
    
}

void func_2039()
{
    JostleModuleImpl(0x2710, 0);
}

int func_2040()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2041()
{
    func_78(func_2042);
}

void func_2042()
{
    
}

void func_2043()
{
    if (global6 == 0x47)
    {
        WorkModuleImpl.on_flag2(0x21000018);
        WorkModuleImpl.on_flag2(0x2100001c);
    }
}

int func_2044()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e4, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2045()
{
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x2);
    func_22(0xd2, 0, 1.0f);
    func_78(func_2046);
}

void func_2046()
{
    
}

void func_2047()
{
    
}

void func_2048()
{
    KineticModuleImpl(0x2);
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl(0xe, 0x3, 0x16, 0, 0, 0, 0, 0);
    KineticModuleImpl.set_speed(0x3, -0.8299999833106995f * PostureModuleImplFloat.get_lr(), 4.760000228881836f);
    KineticModuleImpl.set_accel(0x3, 0, 0);
    KineticModuleImpl.enable_energy(0x3);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x1);
}

int func_2049()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2050()
{
    JostleModuleImpl(0x2710, 0);
    func_78(func_2051);
}

void func_2051()
{
    
}

void func_2052()
{
    
}

int func_2053()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2054()
{
    func_78(func_2055);
}

void func_2055()
{
    
}

void func_2056()
{
    if (global6 == 0x47)
    {
        WorkModuleImpl.on_flag2(0x21000018);
        WorkModuleImpl.on_flag2(0x2100001c);
    }
}

int func_2057()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0xffffffff, 0x32, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e4, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2058()
{
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x2);
    if (global18 == 0)
    {
        func_22(0xc5, 0, 1.0f);
    }
    else
    {
        func_22(0xce, 0, 1.0f);
    }
    MotionModuleImpl.set_motion_rate(0.699999988079071f);
    func_20(0x2);
    GroundModuleImpl(0x2710, 0x5);
    func_78(func_2059);
}

void func_2059()
{
    
}

void func_2060()
{
    
}

void func_2061()
{
    KineticModuleImpl(0x2);
    KineticModuleImpl.clear_speed_all();
}

int func_2062()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2063()
{
    JostleModuleImpl(0x2710, 0);
    func_78(func_2064);
}

void func_2064()
{
    
}

void func_2065()
{
    
}

int func_2066()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2067()
{
    func_78(func_2068);
}

void func_2068()
{
    
}

void func_2069()
{
    if (global6 == 0x47)
    {
        WorkModuleImpl.on_flag2(0x21000018);
        WorkModuleImpl.on_flag2(0x2100001c);
    }
}

int func_2070()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e4, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2071()
{
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x2);
    WorkModuleImpl.on_flag2(0x20000038);
    func_22(0xd2, 0, 1.0f);
    func_78(func_2072);
}

void func_2072()
{
    
}

void func_2073()
{
    WorkModuleImpl.off_flag2(0x20000038);
}

void func_2074()
{
    KineticModuleImpl(0x2);
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl(0xe, 0x3, 0x16, 0, 0, 0, 0, 0);
    KineticModuleImpl.set_speed(0x3, -0.8299999833106995f * PostureModuleImplFloat.get_lr(), 4.760000228881836f);
    KineticModuleImpl.set_accel(0x3, 0, 0);
    KineticModuleImpl.enable_energy(0x3);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x1);
}

int func_2075()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2076()
{
    JostleModuleImpl(0x2710, 0);
    func_78(func_2077);
}

void func_2077()
{
    
}

void func_2078()
{
    
}

int func_2079()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e4, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2080()
{
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x2);
    WorkModuleImpl.on_flag2(0x20000038);
    WorkModuleImpl.on_flag2(0x21000006);
    KineticModuleImpl.change_kinetic_type(0xc);
    func_78(func_2081);
}

void func_2081()
{
    
}

void func_2082()
{
    WorkModuleImpl.off_flag2(0x20000038);
}

int func_2083()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2084()
{
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x3);
    func_78(func_2085);
}

void func_2085()
{
    
}

void func_2086()
{
    HitModuleImpl(0x2710, 0);
}

int func_2087()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2088()
{
    func_78(func_2089);
}

void func_2089()
{
    
}

void func_2090()
{
    if (global6 == 0x47)
    {
        WorkModuleImpl.on_flag2(0x21000018);
        WorkModuleImpl.on_flag2(0x2100001c);
    }
}

int func_2091()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e4, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2092()
{
    float var0;
    int var1;
    float var2;
    float var3;
    int var4;
    JostleModuleImpl(0x2710, 0);
    HitModuleImpl(0x2710, 0x2);
    var0 = WorkModuleImplFloat.get_float(0x3000031);
    var1 = WorkModuleImpl.get_int(0x1300006a);
    var2 = WorkModuleImplFloat.get_float(0x300006b);
    var3 = WorkModuleImplFloat.get_float(0x300006c);
    var4 = EffectModuleImpl(0xb, 0x4390001, var1, var2, var3, 0, 0, 0, 0, var0, 0x1, 0, 0, 0xffffffff);
    func_22(0xd2, 0, 1.0f);
    func_78(func_2093);
}

void func_2093()
{
    
}

void func_2094()
{
    EffectModuleImpl(0x9, 0x4390001, 0x1, 0x1);
}

void func_2095()
{
    KineticModuleImpl(0x2);
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl(0xe, 0x3, 0x16, 0, 0, 0, 0, 0);
    KineticModuleImpl.set_speed(0x3, -0.8299999833106995f * PostureModuleImplFloat.get_lr(), 4.760000228881836f);
    KineticModuleImpl.set_accel(0x3, 0, 0);
    KineticModuleImpl.enable_energy(0x3);
    KineticModuleImpl(0xe, 0x1, 0, 0, 0, 0, 0, 0);
    KineticModuleImpl.enable_energy(0x1);
}

int func_2096()
{
    WorkModuleImpl.on_flag2(0x21000006);
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2097()
{
    JostleModuleImpl(0x2710, 0);
    PostureModuleImpl.set_lr(1.0f);
    PostureModuleImpl(0x2719);
    func_78(func_2098);
}

void func_2098()
{
    float var0;
    int var1;
    int var2;
    if (WorkModuleImpl.is_flag(0x2100000e))
    {
        var0 = WorkModuleImplFloat.get_float(0x3000031);
        var1 = 0x3;
        var2 = EffectModuleImpl(0xb, 0x4390009, var1, 0, 0, 0, 0, 0, 0, var0, 0x1, 0, 0, 0xffffffff);
        WorkModuleImpl.off_flag2(0x2100000e);
    }
}

void func_2099()
{
    EffectModuleImpl(0x9, 0x4390009, 0x1, 0x1);
}

int func_2100()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403ea, 0, 0);
    return 0;
}

void func_2101()
{
    func_78(func_2102);
}

void func_2102()
{
    
}

void func_2103()
{
    if (global6 == 0x47)
    {
        WorkModuleImpl.on_flag2(0x21000018);
        WorkModuleImpl.on_flag2(0x2100001c);
    }
}

int func_2104()
{
    StatusModuleImpl(0x5, 0x3, 0x39, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x2000, 0, 0, 0);
    return 0;
}

void func_2105()
{
    WorkModuleImpl.set_float(0, 0);
    WorkModuleImpl.off_flag(0x20000003);
    func_2146();
    func_22(0x24, 0, 1.0f);
    func_78(func_2106);
}

void func_2106()
{
    
}

void func_2107()
{
    
}

int func_2108()
{
    StatusModuleImpl(0x5, 0x3, 0x3a, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x2000, 0, 0, 0);
    return 0;
}

void func_2109()
{
    func_2146();
    func_22(0x19c, 0, 1.0f);
    func_78(func_2110);
}

void func_2110()
{
    
}

void func_2111()
{
    
}

int func_2112()
{
    StatusModuleImpl(0x5, 0x3, 0x3c, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x2000, 0, 0, 0);
    return 0;
}

void func_2113()
{
    func_2146();
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        func_22(0x19e, 0, 1.0f);
    }
    else
    {
        func_22(0x19d, 0, 1.0f);
    }
    func_78(func_2114);
}

void func_2114()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xaa, 0);
        return;
    }
}

void func_2115()
{
    
}

int func_2116()
{
    StatusModuleImpl(0x5, 0x3, 0x3c, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x2000, 0, 0, 0);
    return 0;
}

void func_2117()
{
    func_2148();
    func_2146();
    func_22(0x19f, 0, 1.0f);
    func_78(func_2118);
}

void func_2118()
{
    if (func_2147())
    {
        return;
    }
    if (func_2149())
    {
        return;
    }
    if (func_88() <= WorkModuleImplFloat.get_float(0x2000006))
    {
        func_16(0xad, 0x1);
        return;
    }
    if (func_84() >= WorkModuleImplFloat.get_float(0x2000001))
    {
        func_16(0xab, 0x1);
        return;
    }
}

void func_2119()
{
    
}

int func_2120()
{
    StatusModuleImpl(0x5, 0x3, 0x3b, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x2000, 0, 0, 0);
    return 0;
}

void func_2121()
{
    func_2148();
    func_22(0x1a0, 0, 1.0f);
    func_78(func_2122);
}

void func_2122()
{
    if (func_84() < WorkModuleImplFloat.get_float(0x2000001))
    {
        func_16(0xac, 0x1);
        return;
    }
    if (func_88() < (float)0)
    {
        func_16(0xac, 0x1);
        return;
    }
    if (func_2147())
    {
        return;
    }
    if (func_2149())
    {
        return;
    }
}

void func_2123()
{
    
}

int func_2124()
{
    StatusModuleImpl(0x5, 0x3, 0x3c, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x2000, 0, 0, 0);
    return 0;
}

void func_2125()
{
    func_2148();
    func_22(0x1a1, 0, 1.0f);
    func_78(func_2126);
}

void func_2126()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xaa, 0);
        return;
    }
    if (func_88() <= WorkModuleImplFloat.get_float(0x2000006))
    {
        func_16(0xad, 0x1);
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (func_88() >= WorkModuleImplFloat.get_float(0x2000001))
        {
            func_16(0xab, 0x1);
            return;
        }
    }
    if (func_2147())
    {
        return;
    }
    if (func_2149())
    {
        return;
    }
}

void func_2127()
{
    
}

int func_2128()
{
    StatusModuleImpl(0x5, 0x3, 0x3c, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x2000, 0, 0, 0);
    return 0;
}

void func_2129()
{
    PostureModuleImpl(0x2710);
    func_2148();
    func_22(0x1a2, 0, 1.0f);
    func_78(func_2130);
}

void func_2130()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0xaa, 0);
        return;
    }
    if (CancelModuleImpl.is_cancelable() == 0x1)
    {
        if (func_88() >= WorkModuleImplFloat.get_float(0x2000001))
        {
            func_16(0xab, 0x1);
            return;
        }
    }
    if (func_2147())
    {
        return;
    }
    if (func_2149())
    {
        return;
    }
}

void func_2131()
{
    
}

int func_2132()
{
    StatusModuleImpl(0x5, 0x3, 0x3d, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_2133()
{
    func_76();
    ControlModuleImpl(0x271b);
    WorkModuleImpl.set_int(0, 0x11000003);
    if (WorkModuleImpl.get_int(0x10000013) < WorkModuleImpl.get_int(0x12000194))
    {
        WorkModuleImpl.inc_int(0x10000013);
    }
    WorkModuleImpl.set_int(0x4, 0x11000000);
    func_22(0x19, 0, 1.0f);
    MotionModuleImpl.set_motion_rate(0);
    if (!StopModuleImpl(0x1))
    {
        func_2136();
    }
    global16 = func_2136;
    func_78(func_2134);
}

void func_2134()
{
    if (WorkModuleImpl.get_int(0x11000003) > WorkModuleImpl.get_int(0x12000191))
    {
        func_16(0xb, 0);
        return;
    }
}

void func_2135()
{
    
}

void func_2136()
{
    WorkModuleImpl.inc_int(0x11000003);
}

int func_2137()
{
    StatusModuleImpl(0x5, 0x3, 0x3e, 0x5, 0, 0x1, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0x4, 0, 0, 0);
    return 0;
}

void func_2138()
{
    WorkModuleImpl.set_int(0, 0x11000003);
    func_22(0x1a3, 0, 1.0f);
    if (!StopModuleImpl(0x1))
    {
        func_2141();
    }
    global16 = func_2141;
    func_78(func_2139);
}

void func_2139()
{
    if (WorkModuleImpl.get_int(0x11000003) >= WorkModuleImpl.get_int(0x12000199))
    {
        func_16(0xb0, 0);
    }
    if (func_2147())
    {
        return;
    }
}

void func_2140()
{
    
}

void func_2141()
{
    WorkModuleImpl.inc_int(0x11000003);
}

int func_2142()
{
    StatusModuleImpl(0x5, 0x3, 0x3f, 0, 0, 0, 0x2000, 0x30, 0, 0x1);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0x4, 0x800, 0, 0);
    return 0;
}

void func_2143()
{
    HitModuleImpl(0x2710, 0x3);
    JostleModuleImpl(0x2710, 0);
    func_22(0x1a4, 0, 1.0f);
    func_78(func_2144);
}

void func_2144()
{
    
}

void func_2145()
{
    
}

void func_2146()
{
    int var0;
    var0 = ItemModuleImpl(0x11);
    if (var0 == 0x73 || var0 == 0x77 || var0 == 0x3e || var0 == 0x4c)
    {
        ItemModuleImpl(0x8);
    }
}

int func_2147()
{
    if (global24 & 0x200000)
    {
        func_16(0xae, 0x1);
        return 0x1;
    }
    if (global24 & 0x100000)
    {
        func_16(0xae, 0x1);
        return 0x1;
    }
    return 0;
}

void func_2148()
{
    WorkModuleImpl.set_int(WorkModuleImpl.get_int(0x12000196), 0x11000002);
}

int func_2149()
{
    if (WorkModuleImpl.is_flag(0x2000001b))
    {
        func_16(0xb0, 0);
        return 0x1;
    }
    if (WorkModuleImpl.get_int(0x10000014) >= WorkModuleImpl.get_int(0x11000002))
    {
        func_16(0xaf, 0);
        return 0x1;
    }
    return 0;
}

int func_2150()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa, 0, 0);
    return 0;
}

void func_2151()
{
    int var0;
    int var1;
    float var2;
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    CaptureModuleImpl(0x2);
    var0 = WorkModuleImpl.get_int(0x13000120);
    if (var0 == 0x1)
    {
        var1 = 0x1;
    }
    else if (var0 == 0x3)
    {
        var1 = 0x2;
    }
    MotionModuleImpl(0x29, var1);
    LinkModuleImpl(0x2716, 0, 0x3);
    var2 = LinkModuleImplFloat(0x7, 0);
    PostureModuleImpl.set_lr(-var2);
    func_22(0x20d, 0, 1.0f);
    DamageModuleImpl(0x12, 0x2);
    LinkModuleImpl(0x271d, 0, 0xbfc0058);
    func_78(func_1655);
}

void func_2152()
{
    int var0;
    DamageModuleImpl(0x12, 0xffffffff);
    CaptureModuleImpl(0x4);
    var0 = WorkModuleImpl.get_int(0x120000f8);
    WorkModuleImpl.set_int(var0, 0x10000058);
    WorkModuleImpl.off_flag2(0x20000031);
}

int func_2153()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e6, 0, 0);
    return 0;
}

void func_2154()
{
    func_35(0xd4, 0, 1.0f);
    func_78(func_2155);
}

void func_2155()
{
    
}

void func_2156()
{
    
}

int func_2157()
{
    StatusModuleImpl(0x5, 0, 0x33, 0x2, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_2158()
{
    ItemModuleImpl(0xf, 0);
    HitModuleImpl(0x271a, 0x1);
    JostleModuleImpl(0x2710, 0);
    sys_21(0x29);
    sys_21(0xa, 0x1);
    if (global1 == 0x5 || global1 == 0xe)
    {
        MotionModuleImpl(0x32);
    }
    if (PostureModuleImplFloat.get_lr() == -1.0f && MotionModuleImpl(0x22, 0x1a6))
    {
        func_22(0x1a6, 0, 1.0f);
    }
    else if (MotionModuleImpl(0x22, 0x1a5))
    {
        func_22(0x1a5, 0, 1.0f);
    }
    else
    {
        func_16(0);
        return;
    }
    func_78(func_2159);
}

void func_2159()
{
    if (MotionModuleImpl.is_end())
    {
        func_16(0);
    }
    if (!global3)
    {
        func_2162();
    }
    if (StatusModuleImpl(0x6) == 0x1 || global18 == 0 && global19 != 0 || global18 == 0x2 && global19 == 0)
    {
        if (global18 == 0)
        {
            GroundModuleImpl(0x2710, 0x2);
        }
        else
        {
            GroundModuleImpl(0x2710, 0x5);
        }
    }
}

void func_2160()
{
    if (global1 == 0x5 || global1 == 0xe)
    {
        MotionModuleImpl(0x31);
    }
}

void func_2161()
{
    int var0;
    printf("------------------sub_entry_uniq_process_init()------------------");
    WorkModuleImpl.on_flag2(0x20000001);
    var0 = PostureModuleImplFloat.get_lr() == -1.0f;
    if (global1 == 0x3)
    {
        ArticleModuleImpl.generate(0x4);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x4, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x4, 0x1, 0x1);
        }
    }
    else if (global1 == 0x9)
    {
        ArticleModuleImpl.generate(0x4);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x4, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x4, 0x1, 0x1);
        }
    }
    else if (global1 == 0x15)
    {
        printf("------------------sub_entry_uniq_process_init()------------------");
        ArticleModuleImpl.generate(0x4);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x4, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x4, 0x1, 0x1);
        }
    }
    else if (global1 == 0x16)
    {
        WorkModuleImpl.set_float(WorkModuleImplFloat.get_float(0x6000007) + 0, 0x30);
        ArticleModuleImpl.generate(0);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0, 0x1, 0x1);
        }
        WorkModuleImpl.on_flag2(0x2000007c);
    }
    else if (global1 == 0x3b)
    {
        ArticleModuleImpl.generate(0);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0, 0x1, 0x1);
        }
        WorkModuleImpl.on_flag2(0x2000007c);
    }
    else if (global1 == 0x13)
    {
        ArticleModuleImpl.generate(0x7);
    }
    else if (global1 == 0xc)
    {
        ArticleModuleImpl.generate(0);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0, 0x1, 0x1);
        }
    }
    else if (global1 == 0x17)
    {
        ArticleModuleImpl.generate(0);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0, 0x17, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0, 0x18, 0x1);
        }
    }
    else if (global1 == 0xb)
    {
        ArticleModuleImpl.generate(0x1);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x1, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x1, 0x1, 0x1);
        }
    }
    else if (global1 == 0x6)
    {
        ArticleModuleImpl.generate(0x8);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x8, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x8, 0x1, 0x1);
        }
    }
    else if (global1 == 0x8)
    {
        ArticleModuleImpl.generate(0x1f);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x1f, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x1f, 0x1, 0x1);
        }
    }
    else if (global1 == 0x1b)
    {
        ArticleModuleImpl.generate(0x4);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x4, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x4, 0x1, 0x1);
        }
    }
    else if (global1 == 0x4)
    {
        ArticleModuleImpl.generate(0x2);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x2, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x2, 0x1, 0x1);
        }
    }
    else if (global1 == 0xa)
    {
        ArticleModuleImpl.generate(0x4);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x4, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x4, 0x1, 0x1);
        }
    }
    else if (global1 == 0x23)
    {
        ArticleModuleImpl.generate(0x1);
        ArticleModuleImpl(0x2715, 0x1, 0, 0x1);
    }
    else if (global1 == 0x21)
    {
        ArticleModuleImpl.generate(0x4);
        ArticleModuleImpl(0x2715, 0x4, 0, 0x1);
    }
    else if (global1 == 0x30)
    {
        ArticleModuleImpl.generate(0x4);
        ArticleModuleImpl(0x2715, 0x4, 0, 0x1);
    }
    else if (global1 == 0xe)
    {
        ArticleModuleImpl.generate(0);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0, 0x18, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0, 0x1c, 0x1);
        }
    }
    else if (global1 == 0x1c)
    {
        ArticleModuleImpl.generate(0x6);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x6, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x6, 0x1, 0x1);
        }
    }
    else if (global1 == 0x27)
    {
        ArticleModuleImpl.generate(0);
    }
    else if (global1 == 0x2a)
    {
        ArticleModuleImpl.generate(0x10);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x10, 0x1, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x10, 0x2, 0x1);
        }
    }
    else if (global1 == 0x31)
    {
        ArticleModuleImpl.generate(0x3);
        ArticleModuleImpl(0x2715, 0x3, 0x2, 0x1);
    }
    else if (global1 == 0x2b)
    {
        ArticleModuleImpl.generate(0x9);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x9, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x9, 0x1, 0x1);
        }
    }
    else if (global1 == 0x1a)
    {
        ArticleModuleImpl.generate(0x1);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x1, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x1, 0x1, 0x1);
        }
    }
    else if (global1 == 0x28)
    {
        ArticleModuleImpl.generate(0x2);
        ArticleModuleImpl.generate(0x3);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x2, 0, 0x1);
            ArticleModuleImpl(0x2715, 0x3, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x2, 0x1, 0x1);
            ArticleModuleImpl(0x2715, 0x3, 0x1, 0x1);
        }
    }
    else if (global1 == 0x19)
    {
        ArticleModuleImpl.generate(0x4);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x4, 0x1, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x4, 0x2, 0x1);
        }
    }
    else if (global1 == 0x24)
    {
        ArticleModuleImpl.generate(0x1);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x1, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x1, 0x1, 0x1);
        }
    }
    else if (global1 == 0x29)
    {
        ArticleModuleImpl(0x272d, 0x1);
        if (var0)
        {
            ArticleModuleImpl(0x272e, 0x1, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x272e, 0x1, 0x1, 0x1);
        }
        ArticleModuleImpl.generate(0x2);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x2, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x2, 0x1, 0x1);
        }
    }
    else if (global1 == 0x25)
    {
        ArticleModuleImpl.generate(0);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0, 0x1, 0x1);
        }
    }
    else if (global1 == 0x35)
    {
        ArticleModuleImpl.generate(0x6);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0x6, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0x6, 0x1, 0x1);
        }
    }
    else if (global1 == 0x36)
    {
        ArticleModuleImpl.generate(0);
        if (var0)
        {
            ArticleModuleImpl(0x2715, 0, 0, 0x1);
        }
        else
        {
            ArticleModuleImpl(0x2715, 0, 0x1, 0x1);
        }
    }
    GroundModuleImpl(0x2, 0x1);
    GroundModuleImpl(0x2717, 0x8, 0x1);
    GroundModuleImpl(0x2714, WorkModuleImplFloat.get_float(0x300009a), 0, 4.0f);
    GroundModuleImpl(0x2721, 0);
    WorkModuleImpl.on_flag2(0x2000003d);
}

void func_2162()
{
    if (MotionModuleImpl.is_end())
    {
        GroundModuleImpl(0x2, 0);
        if (GroundModuleImpl(0x2716))
        {
            func_20(0);
            func_16(0, 0x1);
        }
        else
        {
            func_20(0x2);
            func_16(0xe, 0x1);
        }
    }
}

void func_2163()
{
    printf("--------------sub_entry_uniq_process_exit()----------------");
    WorkModuleImpl.off_flag2(0x20000001);
    GroundModuleImpl(0x2, 0);
    HitModuleImpl(0x271a, 0);
    if (global1 == 0x3)
    {
        ArticleModuleImpl(0x2711, 0x4);
    }
    else if (global1 == 0x9)
    {
        ArticleModuleImpl(0x2711, 0x4);
    }
    else if (global1 == 0x15)
    {
        ArticleModuleImpl(0x2711, 0x4);
    }
    else if (global1 == 0x16)
    {
        if (ArticleModuleImpl.is_exist(0))
        {
            ArticleModuleImpl.remove(0);
        }
    }
    else if (global1 == 0x3b)
    {
        if (ArticleModuleImpl.is_exist(0))
        {
            ArticleModuleImpl.remove(0);
        }
    }
    else if (global1 == 0xc)
    {
        if (ArticleModuleImpl.is_exist(0))
        {
            ArticleModuleImpl.remove(0);
        }
    }
    else if (global1 == 0x17)
    {
        if (ArticleModuleImpl.is_exist(0))
        {
            ArticleModuleImpl.remove(0);
        }
    }
    else if (global1 == 0xb)
    {
        ArticleModuleImpl(0x2711, 0x1);
    }
    else if (global1 == 0x6)
    {
        ArticleModuleImpl(0x2711, 0x8);
    }
    else if (global1 == 0x8)
    {
        ArticleModuleImpl(0x2711, 0x1f);
    }
    else if (global1 == 0x4)
    {
        ArticleModuleImpl(0x2711, 0x2);
    }
    else if (global1 == 0xa)
    {
        ArticleModuleImpl(0x2711, 0x4);
    }
    else if (global1 == 0x23)
    {
        ArticleModuleImpl(0x2711, 0x1);
    }
    else if (global1 == 0x21)
    {
        ArticleModuleImpl(0x2711, 0x4);
    }
    else if (global1 == 0x30)
    {
        ArticleModuleImpl(0x2711, 0x4);
    }
    else if (global1 == 0xe)
    {
        ArticleModuleImpl(0x2711, 0);
    }
    else if (global1 == 0x1c)
    {
        ArticleModuleImpl(0x2711, 0x6);
    }
    else if (global1 == 0x1a)
    {
        ArticleModuleImpl(0x2711, 0x1);
    }
    else if (global1 == 0x2a)
    {
        ArticleModuleImpl(0x2711, 0x10);
    }
    else if (global1 == 0x31)
    {
        if (ArticleModuleImpl.is_exist(0x3))
        {
            ArticleModuleImpl(0x2711, 0x3);
        }
    }
    else if (global1 == 0x28)
    {
        ArticleModuleImpl(0x2711, 0x2);
        ArticleModuleImpl(0x2711, 0x3);
    }
    else if (global1 == 0x2d)
    {
        if (ArticleModuleImpl.is_exist(0xc))
        {
            ArticleModuleImpl(0x2711, 0xc);
        }
    }
    else if (global1 == 0x19)
    {
        ArticleModuleImpl(0x2711, 0x4);
    }
    else if (global1 == 0x2b)
    {
        ArticleModuleImpl(0x2711, 0x9);
    }
    else if (global1 == 0x24)
    {
        ArticleModuleImpl(0x2711, 0x1);
    }
    else if (global1 == 0x29)
    {
        if (ArticleModuleImpl.is_exist(0x1))
        {
            ArticleModuleImpl(0x2711, 0x1);
        }
        if (ArticleModuleImpl.is_exist(0x2))
        {
            ArticleModuleImpl(0x2711, 0x2);
        }
    }
    else if (global1 == 0x25)
    {
        ArticleModuleImpl(0x2711, 0);
    }
    else if (global1 == 0x13)
    {
        ArticleModuleImpl(0x2711, 0x7);
    }
    else if (global1 == 0x35)
    {
        ArticleModuleImpl(0x2711, 0x6);
    }
    else if (global1 == 0x36)
    {
        ArticleModuleImpl(0x2711, 0);
    }
}

int func_2164()
{
    StatusModuleImpl(0x5, 0, 0x33, 0x2, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_2165()
{
    func_78(func_2166);
}

void func_2166()
{
    
}

void func_2167()
{
    
}

int func_2168()
{
    StatusModuleImpl(0x5, 0, 0x33, 0x2, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0, 0, 0, 0, 0, 0);
    return 0;
}

void func_2169()
{
    func_78(func_2170);
}

void func_2170()
{
    
}

void func_2171()
{
    
}

int func_2172(int arg0, int arg1)
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0x1c, 0x6100, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, arg1 | 0x2 | 0x3e0, 0, 0);
    sys_21(0x8e, arg0);
    return 0;
}

int func_2173()
{
    return func_2172(0x1a, 0);
}

int func_2174()
{
    return func_2172(0x1b, 0);
}

int func_2175()
{
    return func_2172(0x1a, 0x2000000);
}

void func_2176()
{
    JostleModuleImpl(0x2710, 0);
    DamageModuleImpl(0xb, 0x1, (float)0 + 0);
    func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
    func_78(func_2178);
}

void func_2177()
{
    JostleModuleImpl(0x2710, 0);
    DamageModuleImpl(0xb, 0x1, (float)0 + 0);
    func_78(func_2178);
}

void func_2178()
{
    
}

void func_2179()
{
    DamageModuleImpl(0xb, 0, (float)0 + 0);
}

int func_2180()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e2, 0, 0);
    return 0;
}

void func_2181()
{
    JostleModuleImpl(0x2710, 0);
    DamageModuleImpl(0xb, 0x1, (float)0 + 0);
    func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
    func_78(func_2183);
}

void func_2182()
{
    if (MotionModuleImpl(0x28) == 0x1)
    {
        WorkModuleImpl.on_flag2(0x21000011);
    }
    else
    {
        WorkModuleImpl.off_flag2(0x21000011);
    }
    if (WorkModuleImpl.get_int(0x11000004) < 0)
    {
        MotionModuleImpl(0x27, 0x1);
    }
    func_2181();
}

void func_2183()
{
    
}

void func_2184()
{
    float var0;
    float var1;
    DamageModuleImpl(0xb, 0, (float)0 + 0);
    var0 = PostureModuleImplFloat.get_pos_x();
    var1 = PostureModuleImplFloat.get_pos_y();
    GroundModuleImpl(0x1a, var0, var1);
}

void func_2185()
{
    func_2184();
    if (WorkModuleImpl.is_flag(0x21000011) == 0x1)
    {
        MotionModuleImpl(0x27, 0x1);
    }
    else
    {
        MotionModuleImpl(0x27, 0);
    }
}

int func_2186()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e2, 0, 0);
    return 0;
}

void func_2187()
{
    JostleModuleImpl(0x2710, 0);
    DamageModuleImpl(0xb, 0x1, (float)0 + 0);
    func_22(WorkModuleImpl.get_int(0x11000003), 0, 1.0f);
    func_78(func_2188);
}

void func_2188()
{
    
}

void func_2189()
{
    DamageModuleImpl(0xb, 0, (float)0 + 0);
}

int func_2190()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403e2, 0, 0);
    sys_21(0x8e, 0x1a);
    return 0;
}

int func_2191()
{
    StatusModuleImpl(0x5, 0, 0x32, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e2, 0, 0);
    return 0;
}

int func_2192()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x200);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e2, 0, 0);
    return 0;
}

int func_2193()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0x5, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x200);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e2, 0, 0);
    return 0;
}

int func_2194()
{
    StatusModuleImpl(0x5, 0x2, 0x32, 0, 0, 0, 0xffffe000, 0xfffffffc, 0xffffffc0, 0x200);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x3e2, 0, 0);
    return 0;
}

int func_2195()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403e2, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2196()
{
    func_2199(0);
    func_22(0xffffffff, 0, 1.0f);
    func_78(func_2197);
}

void func_2197()
{
    
}

void func_2198()
{
    if (global6 != 0x47 && global6 != 0x48)
    {
        func_2200(0);
    }
}

void func_2199(int arg0)
{
    int var1;
    int var2;
    WorkModuleImpl.on_flag2(0x2000005a);
    if (arg0)
    {
        HitModuleImpl(0x2710, 0x3);
    }
    else
    {
        HitModuleImpl(0x2710, 0x2);
    }
    JostleModuleImpl(0x2710, 0);
    VisibilityModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    if (arg0)
    {
        var1 = WorkModuleImpl.get_int(0x10000075);
        if (var1 == 0)
        {
            var2 = 0x431000b;
        }
        else if (var1 == 0x1)
        {
            var2 = 0x431000a;
        }
        else if (var1 == 0x2)
        {
            var2 = 0x4310008;
        }
        else
        {
            var2 = 0x4310009;
        }
        EffectModuleImpl(0xb, var2, 0, 0, 0, 0, 0, 0, 0, 1.0f, 0x1, 0x400000, 0, 0);
    }
}

void func_2200(int arg0)
{
    WorkModuleImpl.off_flag2(0x2000005a);
    HitModuleImpl(0x2710, 0);
    JostleModuleImpl(0x2710, 0x1);
    VisibilityModuleImpl(0x2710, 0x1);
    ItemModuleImpl(0xf, 0x1);
    ItemModuleImpl(0x16, 0x1);
    if (arg0)
    {
        EffectModuleImpl(0xa, 0x400000, 0x1, 0x1);
    }
}

int func_2201()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x40be2, 0, 0);
    sys_21(0x8e, 0x1e);
    return 0;
}

void func_2202()
{
    WorkModuleImpl.on_flag2(0x20000001);
    WorkModuleImpl.on_flag2(0x20000065);
    JostleModuleImpl(0x2710, 0);
    func_22(0x2e, 0, 1.0f);
    func_78(func_2203);
}

void func_2203()
{
    
}

void func_2204()
{
    WorkModuleImpl.off_flag2(0x20000065);
    VisibilityModuleImpl(0x2710, 0x1);
    HitModuleImpl(0x2710, 0);
}

int func_2205()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0x403e2, 0, 0);
    sys_21(0x8e, 0xffffffff);
    return 0;
}

void func_2206()
{
    HitModuleImpl(0x2710, 0x2);
    JostleModuleImpl(0x2710, 0);
    func_22(0x2e, 0, 0);
    func_78(func_2207);
}

void func_2207()
{
    
}

void func_2208()
{
    
}

int func_2209()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x7, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4003ea, 0, 0);
    return 0;
}

void func_2210()
{
    JostleModuleImpl(0x2710, 0);
    DamageModuleImpl(0xb, 0x1, (float)0 + 0);
    func_22(0x2e, 0, 1.0f);
    func_78(func_2211);
}

void func_2211()
{
    if (WorkModuleImpl.is_flag(0x2100000d))
    {
        DamageModuleImpl(0xb, 0, (float)0 + 0);
    }
    else
    {
        DamageModuleImpl(0xb, 0x1, (float)0 + 0);
    }
}

void func_2212()
{
    DamageModuleImpl(0xb, 0, (float)0 + 0);
}

int func_2213()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4003ea, 0, 0);
    return 0;
}

void func_2214()
{
    VisibilityModuleImpl(0x2710, 0);
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    HitModuleImpl(0x2710, 0x2);
    WorkModuleImpl.on_flag2(0x21000003);
    func_22(0xffffffff, 0, 1.0f);
    func_78(func_2215);
}

void func_2215()
{
    if (ControlModuleImplFloat.get_clatter() <= 0)
    {
        func_16(0x43, 0);
        return;
    }
}

void func_2216()
{
    VisibilityModuleImpl(0x2710, 0x1);
    JostleModuleImpl(0x2710, 0x1);
    ItemModuleImpl(0xf, 0x1);
    ItemModuleImpl(0x16, 0x1);
    HitModuleImpl(0x2710, 0);
    if (global6 != 0xb1)
    {
        HitModuleImpl(0x1, WorkModuleImpl.get_int(0x11000002), 0);
    }
}

int func_2217()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0, 0, 0, 0x4003ea, 0, 0);
    return 0;
}

void func_2218()
{
    JostleModuleImpl(0x2710, 0);
    ItemModuleImpl(0xf, 0);
    ItemModuleImpl(0x16, 0);
    HitModuleImpl(0x2710, 0x2);
    WorkModuleImpl.on_flag2(0x20000001);
    func_22(0x89, 0, 1.0f);
    func_78(func_2219);
}

void func_2219()
{
    
}

void func_2220()
{
    
}

int func_2221()
{
    StatusModuleImpl(0x5, 0x4, 0x33, 0, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x2, 0, 0x1, 0x1, 0, 0x40be2, 0, 0);
    sys_21(0x8e, 0x1a);
    return 0;
}

void func_2222()
{
    HitModuleImpl(0x2710, 0x3);
    JostleModuleImpl(0x2710, 0);
    DamageModuleImpl(0xb, 0x1, (float)0 + 0);
    WorkModuleImpl.on_flag2(0x20000001);
    func_22(0x2e, 0, 1.0f);
    func_78(func_2223);
}

void func_2223()
{
    
}

void func_2224()
{
    VisibilityModuleImpl(0x2710, 0x1);
}

int func_2225()
{
    return func_793();
}

void func_2226()
{
    WorkModuleImpl.on_flag2(0x21000016);
    func_797();
    func_800();
    sys_21(0x6c);
    func_78(func_2227);
}

int func_2227()
{
    if (func_799())
    {
        return 0x1;
    }
    if (global9 >= 3.0f && WorkModuleImpl.is_flag(0x2100001d) == 0)
    {
        sys_21(0x6d);
        WorkModuleImpl.on_flag2(0x2100001d);
    }
    func_2229();
    return 0;
}

void func_2228()
{
    
}

void func_2229()
{
    float var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    int var7;
    int var8;
    if (AttackModuleImpl(0, 0) == 0x1)
    {
        if (WorkModuleImplFloat.get_float(0x100000e) == 0)
        {
            var0 = AttackModuleImplFloat(0, 0, 0);
            WorkModuleImpl.set_float(var0 + 0, 0x100000e);
            AttackModuleImpl(0x271b, 0, WorkModuleImplFloat.get_float(0x3000030));
        }
        var1 = KineticModuleImplFloat.get_damage_speed_x();
        var2 = KineticModuleImplFloat.get_damage_speed_y();
        var3 = Math.sqrt(var1 * var1 + var2 * var2);
        var4 = WorkModuleImplFloat.get_float(0x2000150);
        var5 = WorkModuleImplFloat.get_float(0x2000151);
        if (var3 < var5 || var4 < var5)
        {
            AttackModuleImpl(0x2718, 0);
        }
        else
        {
            var6 = WorkModuleImplFloat.get_float(0x100000e);
            var0 = var6 * (var3 - var5) / (var4 - var5);
            if (var0 > var6)
            {
                var0 = var6;
            }
            AttackModuleImpl(0x271a, 0, var0, 0);
            var7 = (int)Math.atan2(var2, var1 * -PostureModuleImplFloat.get_lr());
            var8 = (int)((float)(var7 * 0xb4) / 3.1415927410125732f);
            if (var8 < 0)
            {
                var8 += 0x168;
            }
            AttackModuleImpl(0x2739, 0, var8);
        }
    }
}

int func_2230()
{
    if (func_42())
    {
        return 0x1;
    }
    StatusModuleImpl(0x5, 0, 0x1a, 0x1, 0, 0x1, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0, 0, 0, 0, 0, 0x4, 0, 0);
    return 0;
}

void func_2231()
{
    func_22(0xc3, 0, 1.0f);
    WorkModuleImpl.off_flag2(0x21000022);
    WorkModuleImpl.off_flag2(0x21000023);
    WorkModuleImpl.off_flag2(0x21000024);
    func_78(func_2232);
}

void func_2232()
{
    if (global18 != 0)
    {
        func_16(0xe, 0);
        return;
    }
    if (MotionModuleImpl.is_end())
    {
        if (global18 == 0)
        {
            func_16(0x50, 0);
            return 0x1;
        }
    }
}

void func_2233()
{
    
}

void func_2234()
{
    int var0;
    float var1;
    float var2;
    float var3;
    float var4;
    int var5;
    func_859();
    if (WorkModuleImpl.is_flag(0x21000022) == 0)
    {
        if (func_95() == 0)
        {
            PhysicsModuleImpl(0x9);
            var0 = 0;
            if (MotionModuleImpl.is_exist(0xe8) == 0x1)
            {
                var0 = 0xe8;
                WorkModuleImpl.off_flag(0x2100001e);
            }
            else
            {
                var0 = 0xde;
                WorkModuleImpl.on_flag(0x2100001e);
            }
            func_22(var0, 0, 1.0f);
            WorkModuleImpl.on_flag2(0x21000022);
        }
    }
    else if (WorkModuleImpl.is_flag(0x21000024) == 0)
    {
        var1 = MotionModuleImplFloat.get_frame();
        if (var1 >= WorkModuleImplFloat.get_float(0x20001e2))
        {
            var2 = WorkModuleImplFloat.get_float(0x20001e3);
            var3 = (float)WorkModuleImpl.get_int(0x11000011) + 0;
            var3 *= WorkModuleImplFloat.get_float(0x30000fe);
            var4 = 1.0f;
            if (var3 != 0)
            {
                var4 = var2 / var3;
            }
            MotionModuleImpl.set_motion_rate(var4);
            var5 = (int)var3;
            WorkModuleImpl.set_int(var5, 0x11000011);
            WorkModuleImpl.on_flag2(0x21000024);
            WorkModuleImpl.on_flag2(0x21000023);
        }
    }
    else if (WorkModuleImpl.is_flag(0x21000023))
    {
        WorkModuleImpl.dec_int(0x11000011);
        if (WorkModuleImpl.get_int(0x11000011) <= 0)
        {
            MotionModuleImpl.set_motion_rate(1.0f);
            WorkModuleImpl.off_flag2(0x21000023);
        }
    }
}

int func_2235()
{
    StatusModuleImpl(0x5, 0x2, 0x33, 0x5, 0, 0, 0, 0, 0, 0);
    StatusModuleImpl(0x2713, 0, 0x1, 0, 0x1, 0, 0, 0xa6, 0, 0);
    return 0;
}

void func_2236()
{
    float var0;
    KineticModuleImpl.clear_speed_all();
    KineticModuleImpl.disable_energy(0x4);
    KineticModuleImpl.disable_energy(0x5);
    KineticModuleImpl.disable_energy(0x7);
    KineticModuleImpl.disable_energy(0x6);
    MotionModuleImpl.set_motion_rate(WorkModuleImplFloat.get_float(0x20001ec));
    var0 = (float)WorkModuleImpl.get_int(0x120001e8);
    var0 += DamageModuleImplFloat(0) * WorkModuleImplFloat.get_float(0x20001e9);
    ControlModuleImpl(0x6, var0, WorkModuleImplFloat.get_float(0x20001ea), WorkModuleImplFloat.get_float(0x20001eb), 0xffffffff, 0x1);
    WorkModuleImpl.off_flag2(0x20000077);
    func_78(func_2237);
}

void func_2237()
{
    int var0;
    printf("status_KamuiPierce_Main clatter: %f", ControlModuleImplFloat.get_clatter());
    if (!LinkModuleImpl(0x2, 0x7) || WorkModuleImpl.is_flag(0x2100000d) || ControlModuleImplFloat.get_clatter() <= 0)
    {
        var0 = 0x4c;
        func_16(var0, 0);
        return 0x1;
    }
}

void func_2238()
{
    float var0;
    float var1;
    if (LinkModuleImpl(0x2, 0x7) == 0x1)
    {
        LinkModuleImpl(0x6, 0x7);
    }
    ControlModuleImpl(0x7);
    ShakeModuleImpl(0x2, 0x3);
    KineticModuleImpl.enable_energy(0x4);
    KineticModuleImpl.enable_energy(0x5);
    KineticModuleImpl.enable_energy(0x7);
    MotionModuleImpl.set_motion_rate(1.0f);
    WorkModuleImpl.off_flag2(0x20000076);
    var0 = PostureModuleImplFloat.get_pos_x();
    var1 = PostureModuleImplFloat.get_pos_y();
    GroundModuleImpl(0x1a, var0, var1);
}


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
    global7 = 0x174;
    func_2240();
    func_2243();
    func_2241();
}

void func_2243()
{
    sv_set_mem(0x1, 0x3, 0x18, func_2244);
}

void func_2244()
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
    }
    func_586();
    if (var0 == 0x1)
    {
        WorkModuleImpl.off_flag2(0x2000004e);
    }
}


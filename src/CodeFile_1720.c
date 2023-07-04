#include "common.h"

INCLUDE_ASM(s32, "CodeFile_1720", func_80000B20);

INCLUDE_ASM(s32, "CodeFile_1720", func_80000C44);

INCLUDE_ASM(s32, "CodeFile_1720", func_80000C50); // osBbCardChange?

INCLUDE_ASM(s32, "CodeFile_1720", func_80000C60); // __udiv_w_sdiv

INCLUDE_ASM(s32, "CodeFile_1720", func_80000C68);

INCLUDE_ASM(s32, "CodeFile_1720", func_80000DD4);

bool FUN_80000dd4(
    /*A0*/int *param_1/*T5 8010D200*/ ,
    /*A1*/int *param_2 /*T6 80116378*/,
    /*A2*/short param_3 /*V0 && A1 140*/,
    /*A3*/short param_4 , /* T1 E0*/
    /*0x0012(stack)*/short param_5 /*V0 1*/,
    /*0x0017(stack)*/char param_6 /*A0 1*/
    )

{
  uint uVar1;
  uint uVar2;
  /*V1*/int iVar3 /*A3 23000*/;
  /*V0*/int iVar4 /*T0 23000*/;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_5 < 0x18) { /* True */
    iVar4 = (int)param_3 * (int)param_4 * 2;
  }
  else {
    iVar4 = (int)param_3 * (int)param_4 * 4;
  }
  if (param_6 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)param_3 * (int)param_4 * 2;
  }
  uVar2 = iVar3 + 0x3fU & 0xffffffc0;
  uVar5 = iVar4 + 0x3fU & 0xffffffc0;
  uVar6 = _DAT_0062184d * 0x40;
  uVar7 = _DAT_00621851 + 0xfU & 0xfffffff0;
  uVar9 = _DAT_00621855 + 0xfU & 0xfffffff0;
  uVar8 = _DAT_00621859 + 0xfU & 0xfffffff0;
  if ((_DAT_00621865 & 0x2000) == 0) {
    uVar1 = RDRAM_SIZE | 0x80000000;
  }
  else {
    uVar1 = 0x80400000;
  }
  DAT_801163e4 = uVar1 - uVar2;
  DAT_801163d8 = DAT_801163e4 - uVar5;
  if ((_DAT_00621865 >> 10 & 1 | (uint)(uVar2 == 0)) == 0) {
    DAT_801163d8 = uVar1 - (uVar5 + 0x100000);
    uVar2 = 0x100000 - uVar2;
    DAT_801163f0 = uVar1 - 0x100000;
  }
  else {
    uVar2 = 0;
    DAT_801163f0 = 0;
  }
  DAT_801163dc = DAT_801163d8 - uVar5;
  DAT_801163e0 = DAT_801163dc - uVar5;
  if (DAT_0062183a == '\0') {
    DAT_801163e0 = 0;
  }
  iVar4 = DAT_801163d8;
  if (((_DAT_00621865 & 0x80) == 0) && (iVar4 = DAT_801163e0, DAT_801163e0 == 0)) {
    iVar4 = DAT_801163dc;
  }
  if (uVar6 < uVar2) {
    DAT_801163f4 = DAT_801163f0 + uVar6;
    uVar2 = uVar2 + _DAT_0062184d * -0x40;
  }
  else {
    iVar4 = iVar4 + _DAT_0062184d * -0x40;
    DAT_801163f4 = DAT_801163f0;
    DAT_801163f0 = iVar4;
  }
  if (uVar6 < uVar2) {
    DAT_801163e8 = DAT_801163f4 + uVar6;
    uVar2 = uVar2 + _DAT_0062184d * -0x40;
  }
  else {
    iVar4 = iVar4 + _DAT_0062184d * -0x40;
    DAT_801163e8 = DAT_801163f4;
    DAT_801163f4 = iVar4;
  }
  if (uVar7 < uVar2) {
    DAT_801163f8 = DAT_801163e8 + uVar7;
    uVar2 = uVar2 - uVar7;
  }
  else {
    iVar4 = iVar4 - uVar7;
    DAT_801163f8 = DAT_801163e8;
    DAT_801163e8 = iVar4;
  }
  if (uVar8 < uVar2) {
    DAT_801163ec = DAT_801163f8 + uVar8;
    uVar2 = uVar2 - uVar8;
  }
  else {
    iVar4 = iVar4 - uVar8;
    DAT_801163ec = DAT_801163f8;
    DAT_801163f8 = iVar4;
  }
  if (uVar9 < uVar2) {
    iVar3 = DAT_801163ec + uVar9;
  }
  else {
    iVar4 = iVar4 - uVar9;
    iVar3 = DAT_801163ec;
    DAT_801163ec = iVar4;
  }
  if (iVar3 != 0) {
    *param_1 = iVar4;
    param_1[1] = iVar3 - iVar4;
  }
  else {
    *param_2 = iVar4;
  }
  return iVar3 != 0;
}

INCLUDE_ASM(s32, "CodeFile_1720", func_80001088);

INCLUDE_ASM(s32, "CodeFile_1720", func_80001354);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000161C);

INCLUDE_ASM(s32, "CodeFile_1720", func_800016AC);

void func_800016AC(void) {
    ? *var_a0;

    func_8002B300(&D_8010DFD8, &D_8010D598, 1);
    func_80033560(0xE, &D_8010DFD8, 0);
    func_800331D0(&D_8010DFD8, 0, 1);
    D_8010D210 = 1;
    switch (osTvType) {                           /* irregular */
    case 0:
        func_800352D0(&D_80039790);
        break;
    case 1:
        func_800352D0(&D_80039330);
        break;
    case 2:
        func_800352D0(&D_80039BF0);
        break;
    }
    func_80034BE0(1);
    func_80004FD0();
    func_80002C5C();
loop_13:
    goto loop_13;
}

INCLUDE_ASM(s32, "CodeFile_1720", func_800017A0);

INCLUDE_ASM(s32, "CodeFile_1720", func_80001820);

INCLUDE_ASM(s32, "CodeFile_1720", func_80001880);

INCLUDE_ASM(s32, "CodeFile_1720", func_80001890);

INCLUDE_ASM(s32, "CodeFile_1720", func_800019CC);

INCLUDE_ASM(s32, "CodeFile_1720", func_80001A48);

INCLUDE_ASM(s32, "CodeFile_1720", func_80001ACC);

INCLUDE_ASM(s32, "CodeFile_1720", func_80001C98);

INCLUDE_ASM(s32, "CodeFile_1720", func_80001F8C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002150);

INCLUDE_ASM(s32, "CodeFile_1720", func_800022F8);

INCLUDE_ASM(s32, "CodeFile_1720", func_800025B0);

INCLUDE_ASM(s32, "CodeFile_1720", func_800025D4);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002664);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000268C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002710);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000273C);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000274C);

INCLUDE_ASM(s32, "CodeFile_1720", func_800027A8);

INCLUDE_ASM(s32, "CodeFile_1720", func_800027B8);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002ADC);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002BA8);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002C5C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002D28);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002E10);

INCLUDE_ASM(s32, "CodeFile_1720", func_80002FF4);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003104);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003150);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003188);

INCLUDE_ASM(s32, "CodeFile_1720", func_800031D0);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003250);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003284);

INCLUDE_ASM(s32, "CodeFile_1720", func_800032E0);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003308);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000337C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003390);

INCLUDE_ASM(s32, "CodeFile_1720", func_800033A0);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003424);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003460); //MusFxBankSetCurrent

INCLUDE_ASM(s32, "CodeFile_1720", func_80003474);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003638);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003824);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003A0C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003BCC);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003C98);

INCLUDE_ASM(s32, "CodeFile_1720", func_80003D64);

INCLUDE_ASM(s32, "CodeFile_1720", func_80004360);

INCLUDE_ASM(s32, "CodeFile_1720", func_800047F4);

INCLUDE_ASM(s32, "CodeFile_1720", func_80004994);

INCLUDE_ASM(s32, "CodeFile_1720", func_80004AAC);

INCLUDE_ASM(s32, "CodeFile_1720", func_80004C70);

INCLUDE_ASM(s32, "CodeFile_1720", func_80004D5C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80004E70);

INCLUDE_ASM(s32, "CodeFile_1720", func_80004FB0);

void func_80004FC8(void) {
}

void func_80004FD0(void) {
}

INCLUDE_ASM(s32, "CodeFile_1720", func_80004FD8);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005018);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005080);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005134);

INCLUDE_ASM(s32, "CodeFile_1720", func_800051F8);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005200);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005224);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000525C);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000527C);

INCLUDE_ASM(s32, "CodeFile_1720", func_800052E4); // osBbUsbDevGetHandle

INCLUDE_ASM(s32, "CodeFile_1720", func_800052EC);

INCLUDE_ASM(s32, "CodeFile_1720", func_800052F4);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000533C);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000534C);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000537C);

INCLUDE_ASM(s32, "CodeFile_1720", func_800053F0);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005414);

INCLUDE_ASM(s32, "CodeFile_1720", func_800054C4);

void func_80005560(void) {
}

INCLUDE_ASM(s32, "CodeFile_1720", func_80005568);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005850);

INCLUDE_ASM(s32, "CodeFile_1720", func_800058C0);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000591C); //alSeqpDelete 

INCLUDE_ASM(s32, "CodeFile_1720", func_80005938);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000595C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005B9C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80005F18);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006198);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006338);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006764);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000678C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006798);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006934);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006A9C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006BFC);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006C20);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006C28);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006D9C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006DEC);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006E48);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006EC4);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006F24);

INCLUDE_ASM(s32, "CodeFile_1720", func_80006F78);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000703C);

INCLUDE_ASM(s32, "CodeFile_1720", func_80007070);

INCLUDE_ASM(s32, "CodeFile_1720", func_800070BC);

INCLUDE_ASM(s32, "CodeFile_1720", func_80007148);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000725C);

INCLUDE_ASM(s32, "CodeFile_1720", func_800072AC);

INCLUDE_ASM(s32, "CodeFile_1720", func_800072CC);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000731C);

INCLUDE_ASM(s32, "CodeFile_1720", func_8000736C);

#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002A10E8
// Address: 0x2a10e8 - 0x2a1640
void func_002A10E8_0x2a10e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A10E8_0x2a10e8");
#endif

    switch (ctx->pc) {
        case 0x2a1138u: goto label_2a1138;
        case 0x2a1178u: goto label_2a1178;
        case 0x2a11c8u: goto label_2a11c8;
        case 0x2a1200u: goto label_2a1200;
        case 0x2a1210u: goto label_2a1210;
        case 0x2a1234u: goto label_2a1234;
        case 0x2a1244u: goto label_2a1244;
        case 0x2a125cu: goto label_2a125c;
        case 0x2a12b8u: goto label_2a12b8;
        case 0x2a12c8u: goto label_2a12c8;
        case 0x2a12d8u: goto label_2a12d8;
        case 0x2a12ecu: goto label_2a12ec;
        case 0x2a1324u: goto label_2a1324;
        case 0x2a1354u: goto label_2a1354;
        case 0x2a1398u: goto label_2a1398;
        case 0x2a13b8u: goto label_2a13b8;
        case 0x2a13ecu: goto label_2a13ec;
        case 0x2a1408u: goto label_2a1408;
        case 0x2a1418u: goto label_2a1418;
        case 0x2a1428u: goto label_2a1428;
        case 0x2a1438u: goto label_2a1438;
        case 0x2a1474u: goto label_2a1474;
        case 0x2a14a4u: goto label_2a14a4;
        case 0x2a14b8u: goto label_2a14b8;
        case 0x2a14d0u: goto label_2a14d0;
        case 0x2a1530u: goto label_2a1530;
        case 0x2a1544u: goto label_2a1544;
        case 0x2a1588u: goto label_2a1588;
        case 0x2a15bcu: goto label_2a15bc;
        case 0x2a160cu: goto label_2a160c;
        default: break;
    }

    ctx->pc = 0x2a10e8u;

    // 0x2a10e8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2a10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2a10ec: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x2a10ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x2a10f0: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x2a10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x2a10f4: 0x7fbe0420  sq          $fp, 0x420($sp)
    ctx->pc = 0x2a10f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 30));
    // 0x2a10f8: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x2a10f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
    // 0x2a10fc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2a10fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1100: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x2a1100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
    // 0x2a1104: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a1104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a1108: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x2a1108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
    // 0x2a110c: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x2a110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
    // 0x2a1110: 0x7fb40460  sq          $s4, 0x460($sp)
    ctx->pc = 0x2a1110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 20));
    // 0x2a1114: 0x7fb50450  sq          $s5, 0x450($sp)
    ctx->pc = 0x2a1114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 21));
    // 0x2a1118: 0x7fb60440  sq          $s6, 0x440($sp)
    ctx->pc = 0x2a1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 22));
    // 0x2a111c: 0x7fb70430  sq          $s7, 0x430($sp)
    ctx->pc = 0x2a111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 23));
    // 0x2a1120: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x2a1120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
    // 0x2a1124: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1128: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a1128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a112c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a1130: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1130u;
    SET_GPR_U32(ctx, 31, 0x2A1138u);
    ctx->pc = 0x2A1134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1130u;
    // 0x2a1134: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1130u, 0x2A1138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1138u;
label_2a1138:
    // 0x2a1138: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2a1138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a113c: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x2a113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x2a1140: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a1140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a1144: 0x8c6211ac  lw          $v0, 0x11AC($v1)
    ctx->pc = 0x2a1144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2a1148: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a1148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a114c: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x2a114cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a1150: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x2a1150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a1154: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x2a1154u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2a1158: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2a1158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a115c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a115cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1160: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x2a1160u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2a1164: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a1168: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a116c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a116cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a1170: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1170u;
    SET_GPR_U32(ctx, 31, 0x2A1178u);
    ctx->pc = 0x2A1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1170u;
    // 0x2a1174: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1170u, 0x2A1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1178u;
label_2a1178:
    // 0x2a1178: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2a1178u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2a117c: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x2a117cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a1180: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x2a1180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a1184: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x2a1184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x2a1188: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a118c: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x2a118cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a1190: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2a1190u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2a1194: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a1194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a1198: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2a1198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a119c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a11a0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a11a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a11a4: 0x2063023  subu        $a2, $s0, $a2
    ctx->pc = 0x2a11a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2a11a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a11a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a11ac: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2a11acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a11b0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a11b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a11b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a11b8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a11b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a11bc: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a11bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a11c0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A11C0u;
    SET_GPR_U32(ctx, 31, 0x2A11C8u);
    ctx->pc = 0x2A11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11C0u;
    // 0x2a11c4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A11C0u, 0x2A11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11C8u;
label_2a11c8:
    // 0x2a11c8: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2a11c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2a11cc: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x2a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x2a11d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a11d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11d4: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x2a11d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x2a11d8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a11dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a11e0: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x2a11e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a11e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a11e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a11ec: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a11ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a11f0: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x2a11f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a11f4: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x2a11f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x2a11f8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A11F8u;
    SET_GPR_U32(ctx, 31, 0x2A1200u);
    ctx->pc = 0x2A11FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11F8u;
    // 0x2a11fc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A11F8u, 0x2A1200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1200u;
label_2a1200:
    // 0x2a1200: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1204: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x2a1204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2a1208: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1208u;
    SET_GPR_U32(ctx, 31, 0x2A1210u);
    ctx->pc = 0x2A120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1208u;
    // 0x2a120c: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1208u, 0x2A1210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1210u;
label_2a1210:
    // 0x2a1210: 0x24020e00  addiu       $v0, $zero, 0xE00
    ctx->pc = 0x2a1210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x2a1214: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1218: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2a1218u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a121c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x2a121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2a1220: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x2a1220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x2a1224: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x2a1224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x2a1228: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x2a1228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x2a122c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A122Cu;
    SET_GPR_U32(ctx, 31, 0x2A1234u);
    ctx->pc = 0x2A1230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A122Cu;
    // 0x2a1230: 0xafa20400  sw          $v0, 0x400($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A122Cu, 0x2A1234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1234u;
label_2a1234:
    // 0x2a1234: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1238: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2a1238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a123c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A123Cu;
    SET_GPR_U32(ctx, 31, 0x2A1244u);
    ctx->pc = 0x2A1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A123Cu;
    // 0x2a1240: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A123Cu, 0x2A1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1244u;
label_2a1244:
    // 0x2a1244: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1248: 0x3406fc00  ori         $a2, $zero, 0xFC00
    ctx->pc = 0x2a1248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x2a124c: 0x634b8  dsll        $a2, $a2, 18
    ctx->pc = 0x2a124cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
    // 0x2a1250: 0x34c63f00  ori         $a2, $a2, 0x3F00
    ctx->pc = 0x2a1250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16128);
    // 0x2a1254: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1254u;
    SET_GPR_U32(ctx, 31, 0x2A125Cu);
    ctx->pc = 0x2A1258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1254u;
    // 0x2a1258: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1254u, 0x2A125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A125Cu;
label_2a125c:
    // 0x2a125c: 0x8ec31188  lw          $v1, 0x1188($s6)
    ctx->pc = 0x2a125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4488)));
    // 0x2a1260: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a1260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1264: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x2a1264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a1268: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a1268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a126c: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x2a126cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1270: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a1270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a1274: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x2a1274u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a1278: 0x8e6411b8  lw          $a0, 0x11B8($s3)
    ctx->pc = 0x2a1278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4536)));
    // 0x2a127c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a127cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a1280: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a1280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a1284: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a1284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a1288: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x2a1288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x2a128c: 0x3c032400  lui         $v1, 0x2400
    ctx->pc = 0x2a128cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9216 << 16));
    // 0x2a1290: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a1290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a1294: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a1294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a1298: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x2a1298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2a129c: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x2a129cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a12a0: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2a12a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2a12a4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2a12a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2a12a8: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2a12a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2a12ac: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a12acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a12b0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A12B0u;
    SET_GPR_U32(ctx, 31, 0x2A12B8u);
    ctx->pc = 0x2A12B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12B0u;
    // 0x2a12b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A12B0u, 0x2A12B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12B8u;
label_2a12b8:
    // 0x2a12b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12bc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a12bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a12c0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A12C0u;
    SET_GPR_U32(ctx, 31, 0x2A12C8u);
    ctx->pc = 0x2A12C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12C0u;
    // 0x2a12c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A12C0u, 0x2A12C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12C8u;
label_2a12c8:
    // 0x2a12c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a12c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a12ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A12D0u;
    SET_GPR_U32(ctx, 31, 0x2A12D8u);
    ctx->pc = 0x2A12D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12D0u;
    // 0x2a12d4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A12D0u, 0x2A12D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12D8u;
label_2a12d8:
    // 0x2a12d8: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a12d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a12dc: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a12dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a12e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12e4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A12E4u;
    SET_GPR_U32(ctx, 31, 0x2A12ECu);
    ctx->pc = 0x2A12E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12E4u;
    // 0x2a12e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A12E4u, 0x2A12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12ECu;
label_2a12ec:
    // 0x2a12ec: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x2a12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x2a12f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a12f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12f4: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x2a12f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x2a12f8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a12f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a12fc: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a1300: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1304: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a1304u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1308: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a1308u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a130c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a1310: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1310u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1314: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2a1314u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2a1318: 0x2063025  or          $a2, $s0, $a2
    ctx->pc = 0x2a1318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x2a131c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A131Cu;
    SET_GPR_U32(ctx, 31, 0x2A1324u);
    ctx->pc = 0x2A1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A131Cu;
    // 0x2a1320: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A131Cu, 0x2A1324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1324u;
label_2a1324:
    // 0x2a1324: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a1324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a1328: 0x8ec21188  lw          $v0, 0x1188($s6)
    ctx->pc = 0x2a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4488)));
    // 0x2a132c: 0x8c661194  lw          $a2, 0x1194($v1)
    ctx->pc = 0x2a132cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1194u));
    // 0x2a1330: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1334: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a1334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a1338: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a1338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a133c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a133cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1340: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x2a1340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x2a1344: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x2a1344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x2a1348: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a134c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A134Cu;
    SET_GPR_U32(ctx, 31, 0x2A1354u);
    ctx->pc = 0x2A1350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A134Cu;
    // 0x2a1350: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A134Cu, 0x2A1354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1354u;
label_2a1354:
    // 0x2a1354: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x2a1354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x2a1358: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a135c: 0x8ea7118c  lw          $a3, 0x118C($s5)
    ctx->pc = 0x2a135cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x2a1360: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a1360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1364: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x2a1364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x2a1368: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a136c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1370: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a1370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1374: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a1374u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a1378: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2a1378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2a137c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a137cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1380: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1384: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a1384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a1388: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1388u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a138c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a138cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a1390: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1390u;
    SET_GPR_U32(ctx, 31, 0x2A1398u);
    ctx->pc = 0x2A1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1390u;
    // 0x2a1394: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1390u, 0x2A1398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1398u;
label_2a1398:
    // 0x2a1398: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a1398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a139c: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x2a139cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x2a13a0: 0x24621f00  addiu       $v0, $v1, 0x1F00
    ctx->pc = 0x2a13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7936));
    // 0x2a13a4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2a13a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a13a8: 0x244703fc  addiu       $a3, $v0, 0x3FC
    ctx->pc = 0x2a13a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1020));
    // 0x2a13ac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2a13acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2a13b0: 0x27a403fc  addiu       $a0, $sp, 0x3FC
    ctx->pc = 0x2a13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1020));
    // 0x2a13b4: 0x0  nop
    ctx->pc = 0x2a13b4u;
    // NOP
label_2a13b8:
    // 0x2a13b8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2a13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a13bc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a13bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a13c0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2a13c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2a13c4: 0x31642  srl         $v0, $v1, 25
    ctx->pc = 0x2a13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 25));
    // 0x2a13c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2a13c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2a13cc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a13d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a13d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a13d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a13d8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A13D8u;
    {
        const bool branch_taken_0x2a13d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13D8u;
        // 0x2a13dc: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13d8) {
            ctx->pc = 0x2A13B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a13b8;
        }
    }
    ctx->pc = 0x2A13E0u;
    // 0x2a13e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a13e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13e4: 0xc0a6642  jal         func_299908
    ctx->pc = 0x2A13E4u;
    SET_GPR_U32(ctx, 31, 0x2A13ECu);
    ctx->pc = 0x2A13E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13E4u;
    // 0x2a13e8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x2A13E4u, 0x2A13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13ECu;
label_2a13ec:
    // 0x2a13ec: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x2a13ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a13f0: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x2a13f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2a13f4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a13f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a13f8: 0x24051c04  addiu       $a1, $zero, 0x1C04
    ctx->pc = 0x2a13f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    // 0x2a13fc: 0x24861f00  addiu       $a2, $a0, 0x1F00
    ctx->pc = 0x2a13fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x2a1400: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x2A1400u;
    SET_GPR_U32(ctx, 31, 0x2A1408u);
    ctx->pc = 0x2A1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1400u;
    // 0x2a1404: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x2A1400u, 0x2A1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1408u;
label_2a1408:
    // 0x2a1408: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a140c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a140cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1410: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x2A1410u;
    SET_GPR_U32(ctx, 31, 0x2A1418u);
    ctx->pc = 0x2A1414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1410u;
    // 0x2a1414: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x2A1410u, 0x2A1418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1418u;
label_2a1418:
    // 0x2a1418: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a141c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a141cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1420: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1420u;
    SET_GPR_U32(ctx, 31, 0x2A1428u);
    ctx->pc = 0x2A1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1420u;
    // 0x2a1424: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1420u, 0x2A1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1428u;
label_2a1428:
    // 0x2a1428: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a142c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a1430: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1430u;
    SET_GPR_U32(ctx, 31, 0x2A1438u);
    ctx->pc = 0x2A1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1430u;
    // 0x2a1434: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1430u, 0x2A1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1438u;
label_2a1438:
    // 0x2a1438: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a143c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2a143cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1440: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x2a1440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2a1444: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2a1444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2a1448: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a144c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a1450: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2a1450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a1454: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x2a1454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a1458: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2a1458u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a145c: 0x8fa30400  lw          $v1, 0x400($sp)
    ctx->pc = 0x2a145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2a1460: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2a1464: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1468: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a1468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a146c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A146Cu;
    SET_GPR_U32(ctx, 31, 0x2A1474u);
    ctx->pc = 0x2A1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A146Cu;
    // 0x2a1470: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A146Cu, 0x2A1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1474u;
label_2a1474:
    // 0x2a1474: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a1474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a1478: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a1478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a147c: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x2a147cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a1480: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a1480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a1484: 0x8c821180  lw          $v0, 0x1180($a0)
    ctx->pc = 0x2a1484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2a1488: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a1488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a148c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1490: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1494: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a1494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a1498: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a1498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a149c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A149Cu;
    SET_GPR_U32(ctx, 31, 0x2A14A4u);
    ctx->pc = 0x2A14A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A149Cu;
    // 0x2a14a0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A149Cu, 0x2A14A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14A4u;
label_2a14a4:
    // 0x2a14a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a14a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14a8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2a14a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a14ac: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2a14acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2a14b0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A14B0u;
    SET_GPR_U32(ctx, 31, 0x2A14B8u);
    ctx->pc = 0x2A14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14B0u;
    // 0x2a14b4: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A14B0u, 0x2A14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14B8u;
label_2a14b8:
    // 0x2a14b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a14b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14bc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2a14bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a14c0: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2a14c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2a14c4: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x2a14c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x2a14c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A14C8u;
    SET_GPR_U32(ctx, 31, 0x2A14D0u);
    ctx->pc = 0x2A14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14C8u;
    // 0x2a14cc: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A14C8u, 0x2A14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14D0u;
label_2a14d0:
    // 0x2a14d0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a14d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a14d8: 0x8c831180  lw          $v1, 0x1180($a0)
    ctx->pc = 0x2a14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2a14dc: 0x3407800e  ori         $a3, $zero, 0x800E
    ctx->pc = 0x2a14dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x2a14e0: 0x73db8  dsll        $a3, $a3, 22
    ctx->pc = 0x2a14e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 22);
    // 0x2a14e4: 0x34e78c00  ori         $a3, $a3, 0x8C00
    ctx->pc = 0x2a14e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)35840);
    // 0x2a14e8: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2a14e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x2a14ec: 0x8c4511b8  lw          $a1, 0x11B8($v0)
    ctx->pc = 0x2a14ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4536)));
    // 0x2a14f0: 0x3c0425b0  lui         $a0, 0x25B0
    ctx->pc = 0x2a14f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9648 << 16));
    // 0x2a14f4: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x2a14f4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a14f8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a14fc: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x2a14fcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a1500: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a1500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a1504: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a1504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a1508: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a1508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a150c: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x2a150cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x2a1510: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a1510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a1514: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2a1514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a1518: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a1518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a151c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1520: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a1520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a1524: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a1524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a1528: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1528u;
    SET_GPR_U32(ctx, 31, 0x2A1530u);
    ctx->pc = 0x2A152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1528u;
    // 0x2a152c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1528u, 0x2A1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1530u;
label_2a1530:
    // 0x2a1530: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1534: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a1534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a1538: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a1538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a153c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A153Cu;
    SET_GPR_U32(ctx, 31, 0x2A1544u);
    ctx->pc = 0x2A1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A153Cu;
    // 0x2a1540: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A153Cu, 0x2A1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1544u;
label_2a1544:
    // 0x2a1544: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a1544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a1548: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2a1548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a154c: 0x8c821180  lw          $v0, 0x1180($a0)
    ctx->pc = 0x2a154cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2a1550: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a1550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a1554: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a1554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a1558: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x2a1558u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a155c: 0x8c866b80  lw          $a2, 0x6B80($a0)
    ctx->pc = 0x2a155cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27520)));
    // 0x2a1560: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a1560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a1564: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1568: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a1568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a156c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a156cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1570: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a1570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1574: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a1574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1578: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a157c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a157cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a1580: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1580u;
    SET_GPR_U32(ctx, 31, 0x2A1588u);
    ctx->pc = 0x2A1584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1580u;
    // 0x2a1584: 0xd13025  or          $a2, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1580u, 0x2A1588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1588u;
label_2a1588:
    // 0x2a1588: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a1588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a158c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a1590: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x2a1590u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a1594: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1598: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2a1598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2a159c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a159cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a15a0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a15a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a15a4: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x2a15a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x2a15a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a15ac: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x2a15acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x2a15b0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a15b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a15b4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A15B4u;
    SET_GPR_U32(ctx, 31, 0x2A15BCu);
    ctx->pc = 0x2A15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A15B4u;
    // 0x2a15b8: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A15B4u, 0x2A15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15BCu;
label_2a15bc:
    // 0x2a15bc: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2a15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2a15c0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a15c4: 0x8c666b80  lw          $a2, 0x6B80($v1)
    ctx->pc = 0x2a15c4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x586B80u));
    // 0x2a15c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a15cc: 0x8c821180  lw          $v0, 0x1180($a0)
    ctx->pc = 0x2a15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2a15d0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a15d4: 0x8c67118c  lw          $a3, 0x118C($v1)
    ctx->pc = 0x2a15d4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a15d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a15d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a15dc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a15e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a15e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a15e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a15e8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a15e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a15ec: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2a15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2a15f0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a15f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a15f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a15f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a15fc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a15fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1600: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a1600u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a1604: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1604u;
    SET_GPR_U32(ctx, 31, 0x2A160Cu);
    ctx->pc = 0x2A1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1604u;
    // 0x2a1608: 0xd13025  or          $a2, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1604u, 0x2A160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A160Cu;
label_2a160c:
    // 0x2a160c: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x2a160cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2a1610: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x2a1610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2a1614: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x2a1614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2a1618: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x2a1618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2a161c: 0x7bb40460  lq          $s4, 0x460($sp)
    ctx->pc = 0x2a161cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2a1620: 0x7bb50450  lq          $s5, 0x450($sp)
    ctx->pc = 0x2a1620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2a1624: 0x7bb60440  lq          $s6, 0x440($sp)
    ctx->pc = 0x2a1624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2a1628: 0x7bb70430  lq          $s7, 0x430($sp)
    ctx->pc = 0x2a1628u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2a162c: 0x7bbe0420  lq          $fp, 0x420($sp)
    ctx->pc = 0x2a162cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2a1630: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x2a1630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2a1634: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1634u;
        // 0x2a1638: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A163Cu;
    // 0x2a163c: 0x0  nop
    ctx->pc = 0x2a163cu;
    // NOP
    ctx->pc = 0x2a1640u;
}

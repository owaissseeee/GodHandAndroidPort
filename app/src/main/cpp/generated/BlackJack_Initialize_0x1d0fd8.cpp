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

// Function: BlackJack_Initialize
// Address: 0x1d0fd8 - 0x1d11e8
void BlackJack_Initialize_0x1d0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_Initialize_0x1d0fd8");
#endif

    switch (ctx->pc) {
        case 0x1d0fd8u: goto label_1d0fd8;
        case 0x1d0fdcu: goto label_1d0fdc;
        case 0x1d0fe0u: goto label_1d0fe0;
        case 0x1d0fe4u: goto label_1d0fe4;
        case 0x1d0fe8u: goto label_1d0fe8;
        case 0x1d0fecu: goto label_1d0fec;
        case 0x1d0ff0u: goto label_1d0ff0;
        case 0x1d0ff4u: goto label_1d0ff4;
        case 0x1d0ff8u: goto label_1d0ff8;
        case 0x1d0ffcu: goto label_1d0ffc;
        case 0x1d1000u: goto label_1d1000;
        case 0x1d1004u: goto label_1d1004;
        case 0x1d1008u: goto label_1d1008;
        case 0x1d100cu: goto label_1d100c;
        case 0x1d1010u: goto label_1d1010;
        case 0x1d1014u: goto label_1d1014;
        case 0x1d1018u: goto label_1d1018;
        case 0x1d101cu: goto label_1d101c;
        case 0x1d1020u: goto label_1d1020;
        case 0x1d1024u: goto label_1d1024;
        case 0x1d1028u: goto label_1d1028;
        case 0x1d102cu: goto label_1d102c;
        case 0x1d1030u: goto label_1d1030;
        case 0x1d1034u: goto label_1d1034;
        case 0x1d1038u: goto label_1d1038;
        case 0x1d103cu: goto label_1d103c;
        case 0x1d1040u: goto label_1d1040;
        case 0x1d1044u: goto label_1d1044;
        case 0x1d1048u: goto label_1d1048;
        case 0x1d104cu: goto label_1d104c;
        case 0x1d1050u: goto label_1d1050;
        case 0x1d1054u: goto label_1d1054;
        case 0x1d1058u: goto label_1d1058;
        case 0x1d105cu: goto label_1d105c;
        case 0x1d1060u: goto label_1d1060;
        case 0x1d1064u: goto label_1d1064;
        case 0x1d1068u: goto label_1d1068;
        case 0x1d106cu: goto label_1d106c;
        case 0x1d1070u: goto label_1d1070;
        case 0x1d1074u: goto label_1d1074;
        case 0x1d1078u: goto label_1d1078;
        case 0x1d107cu: goto label_1d107c;
        case 0x1d1080u: goto label_1d1080;
        case 0x1d1084u: goto label_1d1084;
        case 0x1d1088u: goto label_1d1088;
        case 0x1d108cu: goto label_1d108c;
        case 0x1d1090u: goto label_1d1090;
        case 0x1d1094u: goto label_1d1094;
        case 0x1d1098u: goto label_1d1098;
        case 0x1d109cu: goto label_1d109c;
        case 0x1d10a0u: goto label_1d10a0;
        case 0x1d10a4u: goto label_1d10a4;
        case 0x1d10a8u: goto label_1d10a8;
        case 0x1d10acu: goto label_1d10ac;
        case 0x1d10b0u: goto label_1d10b0;
        case 0x1d10b4u: goto label_1d10b4;
        case 0x1d10b8u: goto label_1d10b8;
        case 0x1d10bcu: goto label_1d10bc;
        case 0x1d10c0u: goto label_1d10c0;
        case 0x1d10c4u: goto label_1d10c4;
        case 0x1d10c8u: goto label_1d10c8;
        case 0x1d10ccu: goto label_1d10cc;
        case 0x1d10d0u: goto label_1d10d0;
        case 0x1d10d4u: goto label_1d10d4;
        case 0x1d10d8u: goto label_1d10d8;
        case 0x1d10dcu: goto label_1d10dc;
        case 0x1d10e0u: goto label_1d10e0;
        case 0x1d10e4u: goto label_1d10e4;
        case 0x1d10e8u: goto label_1d10e8;
        case 0x1d10ecu: goto label_1d10ec;
        case 0x1d10f0u: goto label_1d10f0;
        case 0x1d10f4u: goto label_1d10f4;
        case 0x1d10f8u: goto label_1d10f8;
        case 0x1d10fcu: goto label_1d10fc;
        case 0x1d1100u: goto label_1d1100;
        case 0x1d1104u: goto label_1d1104;
        case 0x1d1108u: goto label_1d1108;
        case 0x1d110cu: goto label_1d110c;
        case 0x1d1110u: goto label_1d1110;
        case 0x1d1114u: goto label_1d1114;
        case 0x1d1118u: goto label_1d1118;
        case 0x1d111cu: goto label_1d111c;
        case 0x1d1120u: goto label_1d1120;
        case 0x1d1124u: goto label_1d1124;
        case 0x1d1128u: goto label_1d1128;
        case 0x1d112cu: goto label_1d112c;
        case 0x1d1130u: goto label_1d1130;
        case 0x1d1134u: goto label_1d1134;
        case 0x1d1138u: goto label_1d1138;
        case 0x1d113cu: goto label_1d113c;
        case 0x1d1140u: goto label_1d1140;
        case 0x1d1144u: goto label_1d1144;
        case 0x1d1148u: goto label_1d1148;
        case 0x1d114cu: goto label_1d114c;
        case 0x1d1150u: goto label_1d1150;
        case 0x1d1154u: goto label_1d1154;
        case 0x1d1158u: goto label_1d1158;
        case 0x1d115cu: goto label_1d115c;
        case 0x1d1160u: goto label_1d1160;
        case 0x1d1164u: goto label_1d1164;
        case 0x1d1168u: goto label_1d1168;
        case 0x1d116cu: goto label_1d116c;
        case 0x1d1170u: goto label_1d1170;
        case 0x1d1174u: goto label_1d1174;
        case 0x1d1178u: goto label_1d1178;
        case 0x1d117cu: goto label_1d117c;
        case 0x1d1180u: goto label_1d1180;
        case 0x1d1184u: goto label_1d1184;
        case 0x1d1188u: goto label_1d1188;
        case 0x1d118cu: goto label_1d118c;
        case 0x1d1190u: goto label_1d1190;
        case 0x1d1194u: goto label_1d1194;
        case 0x1d1198u: goto label_1d1198;
        case 0x1d119cu: goto label_1d119c;
        case 0x1d11a0u: goto label_1d11a0;
        case 0x1d11a4u: goto label_1d11a4;
        case 0x1d11a8u: goto label_1d11a8;
        case 0x1d11acu: goto label_1d11ac;
        case 0x1d11b0u: goto label_1d11b0;
        case 0x1d11b4u: goto label_1d11b4;
        case 0x1d11b8u: goto label_1d11b8;
        case 0x1d11bcu: goto label_1d11bc;
        case 0x1d11c0u: goto label_1d11c0;
        case 0x1d11c4u: goto label_1d11c4;
        case 0x1d11c8u: goto label_1d11c8;
        case 0x1d11ccu: goto label_1d11cc;
        case 0x1d11d0u: goto label_1d11d0;
        case 0x1d11d4u: goto label_1d11d4;
        case 0x1d11d8u: goto label_1d11d8;
        case 0x1d11dcu: goto label_1d11dc;
        case 0x1d11e0u: goto label_1d11e0;
        case 0x1d11e4u: goto label_1d11e4;
        default: break;
    }

    ctx->pc = 0x1d0fd8u;

label_1d0fd8:
    // 0x1d0fd8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d0fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1d0fdc:
    // 0x1d0fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0fe0:
    // 0x1d0fe0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1d0fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1d0fe4:
    // 0x1d0fe4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1d0fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1d0fe8:
    // 0x1d0fe8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d0fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0fec:
    // 0x1d0fec: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1d0fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1d0ff0:
    // 0x1d0ff0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1d0ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1d0ff4:
    // 0x1d0ff4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1d0ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1d0ff8:
    // 0x1d0ff8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d0ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d0ffc:
    // 0x1d0ffc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1d0ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1d1000:
    // 0x1d1000: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1d1000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1d1004:
    // 0x1d1004: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1d1004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1d1008:
    // 0x1d1008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d100c:
    // 0x1d100c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1d100cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1d1010:
    // 0x1d1010: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
label_1d1014:
    if (ctx->pc == 0x1D1014u) {
        ctx->pc = 0x1D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1010u;
        // 0x1d1014: 0xae651630  sw          $a1, 0x1630($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5680), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1018u;
        goto label_1d1018;
    }
    ctx->pc = 0x1D1010u;
    {
        const bool branch_taken_0x1d1010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1010u;
        // 0x1d1014: 0xae651630  sw          $a1, 0x1630($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5680), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1010) {
            ctx->pc = 0x1D1054u;
            goto label_1d1054;
        }
    }
    ctx->pc = 0x1D1018u;
label_1d1018:
    // 0x1d1018: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d1018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d101c:
    // 0x1d101c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d1020:
    if (ctx->pc == 0x1D1020u) {
        ctx->pc = 0x1D1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D101Cu;
        // 0x1d1020: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1024u;
        goto label_1d1024;
    }
    ctx->pc = 0x1D101Cu;
    {
        const bool branch_taken_0x1d101c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D101Cu;
        // 0x1d1020: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d101c) {
            ctx->pc = 0x1D1034u;
            goto label_1d1034;
        }
    }
    ctx->pc = 0x1D1024u;
label_1d1024:
    // 0x1d1024: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1d1028:
    if (ctx->pc == 0x1D1028u) {
        ctx->pc = 0x1D1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1024u;
        // 0x1d1028: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D102Cu;
        goto label_1d102c;
    }
    ctx->pc = 0x1D1024u;
    {
        const bool branch_taken_0x1d1024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1024u;
        // 0x1d1028: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1024) {
            ctx->pc = 0x1D104Cu;
            goto label_1d104c;
        }
    }
    ctx->pc = 0x1D102Cu;
label_1d102c:
    // 0x1d102c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d1030:
    if (ctx->pc == 0x1D1030u) {
        ctx->pc = 0x1D1034u;
        goto label_1d1034;
    }
    ctx->pc = 0x1D102Cu;
    {
        const bool branch_taken_0x1d102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d102c) {
            ctx->pc = 0x1D1070u;
            goto label_1d1070;
        }
    }
    ctx->pc = 0x1D1034u;
label_1d1034:
    // 0x1d1034: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_1d1038:
    if (ctx->pc == 0x1D1038u) {
        ctx->pc = 0x1D1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1034u;
        // 0x1d1038: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D103Cu;
        goto label_1d103c;
    }
    ctx->pc = 0x1D1034u;
    {
        const bool branch_taken_0x1d1034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1034u;
        // 0x1d1038: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1034) {
            ctx->pc = 0x1D105Cu;
            goto label_1d105c;
        }
    }
    ctx->pc = 0x1D103Cu;
label_1d103c:
    // 0x1d103c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_1d1040:
    if (ctx->pc == 0x1D1040u) {
        ctx->pc = 0x1D1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D103Cu;
        // 0x1d1040: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1044u;
        goto label_1d1044;
    }
    ctx->pc = 0x1D103Cu;
    {
        const bool branch_taken_0x1d103c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D103Cu;
        // 0x1d1040: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d103c) {
            ctx->pc = 0x1D1064u;
            goto label_1d1064;
        }
    }
    ctx->pc = 0x1D1044u;
label_1d1044:
    // 0x1d1044: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d1048:
    if (ctx->pc == 0x1D1048u) {
        ctx->pc = 0x1D104Cu;
        goto label_1d104c;
    }
    ctx->pc = 0x1D1044u;
    {
        const bool branch_taken_0x1d1044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1044) {
            ctx->pc = 0x1D1070u;
            goto label_1d1070;
        }
    }
    ctx->pc = 0x1D104Cu;
label_1d104c:
    // 0x1d104c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d1050:
    if (ctx->pc == 0x1D1050u) {
        ctx->pc = 0x1D1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D104Cu;
        // 0x1d1050: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1054u;
        goto label_1d1054;
    }
    ctx->pc = 0x1D104Cu;
    {
        const bool branch_taken_0x1d104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D104Cu;
        // 0x1d1050: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d104c) {
            ctx->pc = 0x1D1068u;
            goto label_1d1068;
        }
    }
    ctx->pc = 0x1D1054u;
label_1d1054:
    // 0x1d1054: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d1058:
    if (ctx->pc == 0x1D1058u) {
        ctx->pc = 0x1D1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1054u;
        // 0x1d1058: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D105Cu;
        goto label_1d105c;
    }
    ctx->pc = 0x1D1054u;
    {
        const bool branch_taken_0x1d1054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1054u;
        // 0x1d1058: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1054) {
            ctx->pc = 0x1D1068u;
            goto label_1d1068;
        }
    }
    ctx->pc = 0x1D105Cu;
label_1d105c:
    // 0x1d105c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d1060:
    if (ctx->pc == 0x1D1060u) {
        ctx->pc = 0x1D1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D105Cu;
        // 0x1d1060: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1064u;
        goto label_1d1064;
    }
    ctx->pc = 0x1D105Cu;
    {
        const bool branch_taken_0x1d105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D105Cu;
        // 0x1d1060: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d105c) {
            ctx->pc = 0x1D1068u;
            goto label_1d1068;
        }
    }
    ctx->pc = 0x1D1064u;
label_1d1064:
    // 0x1d1064: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_1d1068:
    // 0x1d1068: 0xae621810  sw          $v0, 0x1810($s3)
    ctx->pc = 0x1d1068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6160), GPR_U32(ctx, 2));
label_1d106c:
    // 0x1d106c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1d106cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1d1070:
    // 0x1d1070: 0x3c013fb1  lui         $at, 0x3FB1
    ctx->pc = 0x1d1070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16305 << 16));
label_1d1074:
    // 0x1d1074: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1d1074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_1d1078:
    // 0x1d1078: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d1078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d107c:
    // 0x1d107c: 0x2466afe0  addiu       $a2, $v1, -0x5020
    ctx->pc = 0x1d107cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
label_1d1080:
    // 0x1d1080: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1d1080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1d1084:
    // 0x1d1084: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1d1084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1d1088:
    // 0x1d1088: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1d1088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1d108c:
    // 0x1d108c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1d108cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1d1090:
    // 0x1d1090: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1d1090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d1094:
    // 0x1d1094: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1d1094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d1098:
    // 0x1d1098: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1d1098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d109c:
    // 0x1d109c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1d109cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d10a0:
    // 0x1d10a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d10a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d10a4:
    // 0x1d10a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d10a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d10a8:
    // 0x1d10a8: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x1d10a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d10ac:
    // 0x1d10ac: 0x26771634  addiu       $s7, $s3, 0x1634
    ctx->pc = 0x1d10acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 5684));
label_1d10b0:
    // 0x1d10b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d10b4:
    // 0x1d10b4: 0x0  nop
    ctx->pc = 0x1d10b4u;
    // NOP
label_1d10b8:
    // 0x1d10b8: 0x24760001  addiu       $s6, $v1, 0x1
    ctx->pc = 0x1d10b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d10bc:
    // 0x1d10bc: 0x3a2a821  addu        $s5, $sp, $v0
    ctx->pc = 0x1d10bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1d10c0:
    // 0x1d10c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d10c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d10c4:
    // 0x1d10c4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d10c8:
    // 0x1d10c8: 0xc0c3ea6  jal         func_30FA98
label_1d10cc:
    if (ctx->pc == 0x1D10CCu) {
        ctx->pc = 0x1D10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10C8u;
        // 0x1d10cc: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D10D0u;
        goto label_1d10d0;
    }
    ctx->pc = 0x1D10C8u;
    SET_GPR_U32(ctx, 31, 0x1D10D0u);
    ctx->pc = 0x1D10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10C8u;
    // 0x1d10cc: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1D10C8u, 0x1D10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10D0u;
label_1d10d0:
    // 0x1d10d0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1d10d4:
    if (ctx->pc == 0x1D10D4u) {
        ctx->pc = 0x1D10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10D0u;
        // 0x1d10d4: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D10D8u;
        goto label_1d10d8;
    }
    ctx->pc = 0x1D10D0u;
    {
        const bool branch_taken_0x1d10d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10D0u;
        // 0x1d10d4: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10d0) {
            ctx->pc = 0x1D115Cu;
            goto label_1d115c;
        }
    }
    ctx->pc = 0x1D10D8u;
label_1d10d8:
    // 0x1d10d8: 0x24638050  addiu       $v1, $v1, -0x7FB0
    ctx->pc = 0x1d10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934608));
label_1d10dc:
    // 0x1d10dc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1d10dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1d10e0:
    // 0x1d10e0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1d10e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1d10e4:
    // 0x1d10e4: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x1d10e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_1d10e8:
    // 0x1d10e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d10e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d10ec:
    // 0x1d10ec: 0x2f18021  addu        $s0, $s7, $s1
    ctx->pc = 0x1d10ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_1d10f0:
    // 0x1d10f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d10f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d10f4:
    // 0x1d10f4: 0xc0723fc  jal         func_1C8FF0
label_1d10f8:
    if (ctx->pc == 0x1D10F8u) {
        ctx->pc = 0x1D10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10F4u;
        // 0x1d10f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D10FCu;
        goto label_1d10fc;
    }
    ctx->pc = 0x1D10F4u;
    SET_GPR_U32(ctx, 31, 0x1D10FCu);
    ctx->pc = 0x1D10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D10F4u;
    // 0x1d10f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8FF0u, 0x1D10F4u, 0x1D10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D10FCu;
label_1d10fc:
    // 0x1d10fc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d10fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1100:
    // 0x1d1100: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d1100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d1104:
    // 0x1d1104: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d1108:
    // 0x1d1108: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d1108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d110c:
    // 0x1d110c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d1110:
    // 0x1d1110: 0x60f809  jalr        $v1
label_1d1114:
    if (ctx->pc == 0x1D1114u) {
        ctx->pc = 0x1D1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1110u;
        // 0x1d1114: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1118u;
        goto label_1d1118;
    }
    ctx->pc = 0x1D1110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D1118u);
        ctx->pc = 0x1D1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1110u;
        // 0x1d1114: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1110u, 0x1D1118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1118u;
label_1d1118:
    // 0x1d1118: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d1118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d111c:
    // 0x1d111c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1d111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d1120:
    // 0x1d1120: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x1d1120u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1d1124:
    // 0x1d1124: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1d1124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1d1128:
    // 0x1d1128: 0xe4540110  swc1        $f20, 0x110($v0)
    ctx->pc = 0x1d1128u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1d112c:
    // 0x1d112c: 0x26311638  addiu       $s1, $s1, 0x1638
    ctx->pc = 0x1d112cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5688));
label_1d1130:
    // 0x1d1130: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1134:
    // 0x1d1134: 0xe4540114  swc1        $f20, 0x114($v0)
    ctx->pc = 0x1d1134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1d1138:
    // 0x1d1138: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d1138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d113c:
    // 0x1d113c: 0xe4740118  swc1        $f20, 0x118($v1)
    ctx->pc = 0x1d113cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
label_1d1140:
    // 0x1d1140: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1144:
    // 0x1d1144: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1d1144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_1d1148:
    // 0x1d1148: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d1148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1d114c:
    // 0x1d114c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x1d114cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_1d1150:
    // 0x1d1150: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1154:
    // 0x1d1154: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1d1154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1d1158:
    // 0x1d1158: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d1158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1d115c:
    // 0x1d115c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d115cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d1160:
    // 0x1d1160: 0x2a42000d  slti        $v0, $s2, 0xD
    ctx->pc = 0x1d1160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)13) ? 1 : 0);
label_1d1164:
    // 0x1d1164: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
label_1d1168:
    if (ctx->pc == 0x1D1168u) {
        ctx->pc = 0x1D1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1164u;
        // 0x1d1168: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D116Cu;
        goto label_1d116c;
    }
    ctx->pc = 0x1D1164u;
    {
        const bool branch_taken_0x1d1164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1164) {
            ctx->pc = 0x1D1168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1164u;
            // 0x1d1168: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D10C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d10c8;
        }
    }
    ctx->pc = 0x1D116Cu;
label_1d116c:
    // 0x1d116c: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x1d116cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d1170:
    // 0x1d1170: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1d1170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d1174:
    // 0x1d1174: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_1d1178:
    if (ctx->pc == 0x1D1178u) {
        ctx->pc = 0x1D1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1174u;
        // 0x1d1178: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D117Cu;
        goto label_1d117c;
    }
    ctx->pc = 0x1D1174u;
    {
        const bool branch_taken_0x1d1174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1174u;
        // 0x1d1178: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1174) {
            ctx->pc = 0x1D10B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d10b8;
        }
    }
    ctx->pc = 0x1D117Cu;
label_1d117c:
    // 0x1d117c: 0xc07537c  jal         func_1D4DF0
label_1d1180:
    if (ctx->pc == 0x1D1180u) {
        ctx->pc = 0x1D1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D117Cu;
        // 0x1d1180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1184u;
        goto label_1d1184;
    }
    ctx->pc = 0x1D117Cu;
    SET_GPR_U32(ctx, 31, 0x1D1184u);
    ctx->pc = 0x1D1180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D117Cu;
    // 0x1d1180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DF0u, 0x1D117Cu, 0x1D1184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1184u;
label_1d1184:
    // 0x1d1184: 0xc0754a8  jal         func_1D52A0
label_1d1188:
    if (ctx->pc == 0x1D1188u) {
        ctx->pc = 0x1D1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1184u;
        // 0x1d1188: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D118Cu;
        goto label_1d118c;
    }
    ctx->pc = 0x1D1184u;
    SET_GPR_U32(ctx, 31, 0x1D118Cu);
    ctx->pc = 0x1D1188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1184u;
    // 0x1d1188: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52A0u, 0x1D1184u, 0x1D118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D118Cu;
label_1d118c:
    // 0x1d118c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1190:
    // 0x1d1190: 0xc0755d8  jal         func_1D5760
label_1d1194:
    if (ctx->pc == 0x1D1194u) {
        ctx->pc = 0x1D1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1190u;
        // 0x1d1194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1198u;
        goto label_1d1198;
    }
    ctx->pc = 0x1D1190u;
    SET_GPR_U32(ctx, 31, 0x1D1198u);
    ctx->pc = 0x1D1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1190u;
    // 0x1d1194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D1190u, 0x1D1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1198u;
label_1d1198:
    // 0x1d1198: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d119c:
    // 0x1d119c: 0xc07e9c4  jal         func_1FA710
label_1d11a0:
    if (ctx->pc == 0x1D11A0u) {
        ctx->pc = 0x1D11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D119Cu;
        // 0x1d11a0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D11A4u;
        goto label_1d11a4;
    }
    ctx->pc = 0x1D119Cu;
    SET_GPR_U32(ctx, 31, 0x1D11A4u);
    ctx->pc = 0x1D11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D119Cu;
    // 0x1d11a0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1D119Cu, 0x1D11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11A4u;
label_1d11a4:
    // 0x1d11a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d11a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d11a8:
    // 0x1d11a8: 0xc0755e0  jal         func_1D5780
label_1d11ac:
    if (ctx->pc == 0x1D11ACu) {
        ctx->pc = 0x1D11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11A8u;
        // 0x1d11ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D11B0u;
        goto label_1d11b0;
    }
    ctx->pc = 0x1D11A8u;
    SET_GPR_U32(ctx, 31, 0x1D11B0u);
    ctx->pc = 0x1D11ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11A8u;
    // 0x1d11ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5780u, 0x1D11A8u, 0x1D11B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11B0u;
label_1d11b0:
    // 0x1d11b0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1d11b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d11b4:
    // 0x1d11b4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1d11b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d11b8:
    // 0x1d11b8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1d11b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d11bc:
    // 0x1d11bc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1d11bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d11c0:
    // 0x1d11c0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1d11c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d11c4:
    // 0x1d11c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d11c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d11c8:
    // 0x1d11c8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1d11c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d11cc:
    // 0x1d11cc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1d11ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d11d0:
    // 0x1d11d0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1d11d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d11d4:
    // 0x1d11d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d11d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d11d8:
    // 0x1d11d8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1d11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d11dc:
    // 0x1d11dc: 0x3e00008  jr          $ra
label_1d11e0:
    if (ctx->pc == 0x1D11E0u) {
        ctx->pc = 0x1D11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11DCu;
        // 0x1d11e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D11E4u;
        goto label_1d11e4;
    }
    ctx->pc = 0x1D11DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11DCu;
        // 0x1d11e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D11DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D11E4u;
label_1d11e4:
    // 0x1d11e4: 0x0  nop
    ctx->pc = 0x1d11e4u;
    // NOP
    ctx->pc = 0x1d11e8u;
}

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

// Function: func_00392F00
// Address: 0x392f00 - 0x393230
void func_00392F00_0x392f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00392F00_0x392f00");
#endif

    switch (ctx->pc) {
        case 0x392f00u: goto label_392f00;
        case 0x392f04u: goto label_392f04;
        case 0x392f08u: goto label_392f08;
        case 0x392f0cu: goto label_392f0c;
        case 0x392f10u: goto label_392f10;
        case 0x392f14u: goto label_392f14;
        case 0x392f18u: goto label_392f18;
        case 0x392f1cu: goto label_392f1c;
        case 0x392f20u: goto label_392f20;
        case 0x392f24u: goto label_392f24;
        case 0x392f28u: goto label_392f28;
        case 0x392f2cu: goto label_392f2c;
        case 0x392f30u: goto label_392f30;
        case 0x392f34u: goto label_392f34;
        case 0x392f38u: goto label_392f38;
        case 0x392f3cu: goto label_392f3c;
        case 0x392f40u: goto label_392f40;
        case 0x392f44u: goto label_392f44;
        case 0x392f48u: goto label_392f48;
        case 0x392f4cu: goto label_392f4c;
        case 0x392f50u: goto label_392f50;
        case 0x392f54u: goto label_392f54;
        case 0x392f58u: goto label_392f58;
        case 0x392f5cu: goto label_392f5c;
        case 0x392f60u: goto label_392f60;
        case 0x392f64u: goto label_392f64;
        case 0x392f68u: goto label_392f68;
        case 0x392f6cu: goto label_392f6c;
        case 0x392f70u: goto label_392f70;
        case 0x392f74u: goto label_392f74;
        case 0x392f78u: goto label_392f78;
        case 0x392f7cu: goto label_392f7c;
        case 0x392f80u: goto label_392f80;
        case 0x392f84u: goto label_392f84;
        case 0x392f88u: goto label_392f88;
        case 0x392f8cu: goto label_392f8c;
        case 0x392f90u: goto label_392f90;
        case 0x392f94u: goto label_392f94;
        case 0x392f98u: goto label_392f98;
        case 0x392f9cu: goto label_392f9c;
        case 0x392fa0u: goto label_392fa0;
        case 0x392fa4u: goto label_392fa4;
        case 0x392fa8u: goto label_392fa8;
        case 0x392facu: goto label_392fac;
        case 0x392fb0u: goto label_392fb0;
        case 0x392fb4u: goto label_392fb4;
        case 0x392fb8u: goto label_392fb8;
        case 0x392fbcu: goto label_392fbc;
        case 0x392fc0u: goto label_392fc0;
        case 0x392fc4u: goto label_392fc4;
        case 0x392fc8u: goto label_392fc8;
        case 0x392fccu: goto label_392fcc;
        case 0x392fd0u: goto label_392fd0;
        case 0x392fd4u: goto label_392fd4;
        case 0x392fd8u: goto label_392fd8;
        case 0x392fdcu: goto label_392fdc;
        case 0x392fe0u: goto label_392fe0;
        case 0x392fe4u: goto label_392fe4;
        case 0x392fe8u: goto label_392fe8;
        case 0x392fecu: goto label_392fec;
        case 0x392ff0u: goto label_392ff0;
        case 0x392ff4u: goto label_392ff4;
        case 0x392ff8u: goto label_392ff8;
        case 0x392ffcu: goto label_392ffc;
        case 0x393000u: goto label_393000;
        case 0x393004u: goto label_393004;
        case 0x393008u: goto label_393008;
        case 0x39300cu: goto label_39300c;
        case 0x393010u: goto label_393010;
        case 0x393014u: goto label_393014;
        case 0x393018u: goto label_393018;
        case 0x39301cu: goto label_39301c;
        case 0x393020u: goto label_393020;
        case 0x393024u: goto label_393024;
        case 0x393028u: goto label_393028;
        case 0x39302cu: goto label_39302c;
        case 0x393030u: goto label_393030;
        case 0x393034u: goto label_393034;
        case 0x393038u: goto label_393038;
        case 0x39303cu: goto label_39303c;
        case 0x393040u: goto label_393040;
        case 0x393044u: goto label_393044;
        case 0x393048u: goto label_393048;
        case 0x39304cu: goto label_39304c;
        case 0x393050u: goto label_393050;
        case 0x393054u: goto label_393054;
        case 0x393058u: goto label_393058;
        case 0x39305cu: goto label_39305c;
        case 0x393060u: goto label_393060;
        case 0x393064u: goto label_393064;
        case 0x393068u: goto label_393068;
        case 0x39306cu: goto label_39306c;
        case 0x393070u: goto label_393070;
        case 0x393074u: goto label_393074;
        case 0x393078u: goto label_393078;
        case 0x39307cu: goto label_39307c;
        case 0x393080u: goto label_393080;
        case 0x393084u: goto label_393084;
        case 0x393088u: goto label_393088;
        case 0x39308cu: goto label_39308c;
        case 0x393090u: goto label_393090;
        case 0x393094u: goto label_393094;
        case 0x393098u: goto label_393098;
        case 0x39309cu: goto label_39309c;
        case 0x3930a0u: goto label_3930a0;
        case 0x3930a4u: goto label_3930a4;
        case 0x3930a8u: goto label_3930a8;
        case 0x3930acu: goto label_3930ac;
        case 0x3930b0u: goto label_3930b0;
        case 0x3930b4u: goto label_3930b4;
        case 0x3930b8u: goto label_3930b8;
        case 0x3930bcu: goto label_3930bc;
        case 0x3930c0u: goto label_3930c0;
        case 0x3930c4u: goto label_3930c4;
        case 0x3930c8u: goto label_3930c8;
        case 0x3930ccu: goto label_3930cc;
        case 0x3930d0u: goto label_3930d0;
        case 0x3930d4u: goto label_3930d4;
        case 0x3930d8u: goto label_3930d8;
        case 0x3930dcu: goto label_3930dc;
        case 0x3930e0u: goto label_3930e0;
        case 0x3930e4u: goto label_3930e4;
        case 0x3930e8u: goto label_3930e8;
        case 0x3930ecu: goto label_3930ec;
        case 0x3930f0u: goto label_3930f0;
        case 0x3930f4u: goto label_3930f4;
        case 0x3930f8u: goto label_3930f8;
        case 0x3930fcu: goto label_3930fc;
        case 0x393100u: goto label_393100;
        case 0x393104u: goto label_393104;
        case 0x393108u: goto label_393108;
        case 0x39310cu: goto label_39310c;
        case 0x393110u: goto label_393110;
        case 0x393114u: goto label_393114;
        case 0x393118u: goto label_393118;
        case 0x39311cu: goto label_39311c;
        case 0x393120u: goto label_393120;
        case 0x393124u: goto label_393124;
        case 0x393128u: goto label_393128;
        case 0x39312cu: goto label_39312c;
        case 0x393130u: goto label_393130;
        case 0x393134u: goto label_393134;
        case 0x393138u: goto label_393138;
        case 0x39313cu: goto label_39313c;
        case 0x393140u: goto label_393140;
        case 0x393144u: goto label_393144;
        case 0x393148u: goto label_393148;
        case 0x39314cu: goto label_39314c;
        case 0x393150u: goto label_393150;
        case 0x393154u: goto label_393154;
        case 0x393158u: goto label_393158;
        case 0x39315cu: goto label_39315c;
        case 0x393160u: goto label_393160;
        case 0x393164u: goto label_393164;
        case 0x393168u: goto label_393168;
        case 0x39316cu: goto label_39316c;
        case 0x393170u: goto label_393170;
        case 0x393174u: goto label_393174;
        case 0x393178u: goto label_393178;
        case 0x39317cu: goto label_39317c;
        case 0x393180u: goto label_393180;
        case 0x393184u: goto label_393184;
        case 0x393188u: goto label_393188;
        case 0x39318cu: goto label_39318c;
        case 0x393190u: goto label_393190;
        case 0x393194u: goto label_393194;
        case 0x393198u: goto label_393198;
        case 0x39319cu: goto label_39319c;
        case 0x3931a0u: goto label_3931a0;
        case 0x3931a4u: goto label_3931a4;
        case 0x3931a8u: goto label_3931a8;
        case 0x3931acu: goto label_3931ac;
        case 0x3931b0u: goto label_3931b0;
        case 0x3931b4u: goto label_3931b4;
        case 0x3931b8u: goto label_3931b8;
        case 0x3931bcu: goto label_3931bc;
        case 0x3931c0u: goto label_3931c0;
        case 0x3931c4u: goto label_3931c4;
        case 0x3931c8u: goto label_3931c8;
        case 0x3931ccu: goto label_3931cc;
        case 0x3931d0u: goto label_3931d0;
        case 0x3931d4u: goto label_3931d4;
        case 0x3931d8u: goto label_3931d8;
        case 0x3931dcu: goto label_3931dc;
        case 0x3931e0u: goto label_3931e0;
        case 0x3931e4u: goto label_3931e4;
        case 0x3931e8u: goto label_3931e8;
        case 0x3931ecu: goto label_3931ec;
        case 0x3931f0u: goto label_3931f0;
        case 0x3931f4u: goto label_3931f4;
        case 0x3931f8u: goto label_3931f8;
        case 0x3931fcu: goto label_3931fc;
        case 0x393200u: goto label_393200;
        case 0x393204u: goto label_393204;
        case 0x393208u: goto label_393208;
        case 0x39320cu: goto label_39320c;
        case 0x393210u: goto label_393210;
        case 0x393214u: goto label_393214;
        case 0x393218u: goto label_393218;
        case 0x39321cu: goto label_39321c;
        case 0x393220u: goto label_393220;
        case 0x393224u: goto label_393224;
        case 0x393228u: goto label_393228;
        case 0x39322cu: goto label_39322c;
        default: break;
    }

    ctx->pc = 0x392f00u;

label_392f00:
    // 0x392f00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x392f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_392f04:
    // 0x392f04: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x392f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_392f08:
    // 0x392f08: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x392f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_392f0c:
    // 0x392f0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x392f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392f10:
    // 0x392f10: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x392f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_392f14:
    // 0x392f14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x392f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_392f18:
    // 0x392f18: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x392f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_392f1c:
    // 0x392f1c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x392f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_392f20:
    // 0x392f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392f24:
    // 0x392f24: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x392f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
label_392f28:
    // 0x392f28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x392f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_392f2c:
    // 0x392f2c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x392f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_392f30:
    // 0x392f30: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_392f34:
    if (ctx->pc == 0x392F34u) {
        ctx->pc = 0x392F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F30u;
        // 0x392f34: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F38u;
        goto label_392f38;
    }
    ctx->pc = 0x392F30u;
    {
        const bool branch_taken_0x392f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x392F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F30u;
        // 0x392f34: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f30) {
            ctx->pc = 0x392F4Cu;
            goto label_392f4c;
        }
    }
    ctx->pc = 0x392F38u;
label_392f38:
    // 0x392f38: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x392f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_392f3c:
    // 0x392f3c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x392f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_392f40:
    // 0x392f40: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x392f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_392f44:
    // 0x392f44: 0x10000003  b           . + 4 + (0x3 << 2)
label_392f48:
    if (ctx->pc == 0x392F48u) {
        ctx->pc = 0x392F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F44u;
        // 0x392f48: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F4Cu;
        goto label_392f4c;
    }
    ctx->pc = 0x392F44u;
    {
        const bool branch_taken_0x392f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F44u;
        // 0x392f48: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f44) {
            ctx->pc = 0x392F54u;
            goto label_392f54;
        }
    }
    ctx->pc = 0x392F4Cu;
label_392f4c:
    // 0x392f4c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x392f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_392f50:
    // 0x392f50: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x392f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_392f54:
    // 0x392f54: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_392f58:
    if (ctx->pc == 0x392F58u) {
        ctx->pc = 0x392F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F54u;
        // 0x392f58: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F5Cu;
        goto label_392f5c;
    }
    ctx->pc = 0x392F54u;
    {
        const bool branch_taken_0x392f54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x392F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F54u;
        // 0x392f58: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f54) {
            ctx->pc = 0x392F64u;
            goto label_392f64;
        }
    }
    ctx->pc = 0x392F5Cu;
label_392f5c:
    // 0x392f5c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x392f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392f60:
    // 0x392f60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x392f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392f64:
    // 0x392f64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_392f68:
    if (ctx->pc == 0x392F68u) {
        ctx->pc = 0x392F6Cu;
        goto label_392f6c;
    }
    ctx->pc = 0x392F64u;
    {
        const bool branch_taken_0x392f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392f64) {
            ctx->pc = 0x392F7Cu;
            goto label_392f7c;
        }
    }
    ctx->pc = 0x392F6Cu;
label_392f6c:
    // 0x392f6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x392f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392f70:
    // 0x392f70: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x392f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_392f74:
    // 0x392f74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_392f78:
    if (ctx->pc == 0x392F78u) {
        ctx->pc = 0x392F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F74u;
        // 0x392f78: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F7Cu;
        goto label_392f7c;
    }
    ctx->pc = 0x392F74u;
    {
        const bool branch_taken_0x392f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392f74) {
            ctx->pc = 0x392F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392F74u;
            // 0x392f78: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392F90u;
            goto label_392f90;
        }
    }
    ctx->pc = 0x392F7Cu;
label_392f7c:
    // 0x392f7c: 0xc0e30bc  jal         func_38C2F0
label_392f80:
    if (ctx->pc == 0x392F80u) {
        ctx->pc = 0x392F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F7Cu;
        // 0x392f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F84u;
        goto label_392f84;
    }
    ctx->pc = 0x392F7Cu;
    SET_GPR_U32(ctx, 31, 0x392F84u);
    ctx->pc = 0x392F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F7Cu;
    // 0x392f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C2F0u, 0x392F7Cu, 0x392F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F84u;
label_392f84:
    // 0x392f84: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_392f88:
    if (ctx->pc == 0x392F88u) {
        ctx->pc = 0x392F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F84u;
        // 0x392f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F8Cu;
        goto label_392f8c;
    }
    ctx->pc = 0x392F84u;
    {
        const bool branch_taken_0x392f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F84u;
        // 0x392f88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f84) {
            ctx->pc = 0x393210u;
            goto label_393210;
        }
    }
    ctx->pc = 0x392F8Cu;
label_392f8c:
    // 0x392f8c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x392f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_392f90:
    // 0x392f90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_392f94:
    if (ctx->pc == 0x392F94u) {
        ctx->pc = 0x392F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F90u;
        // 0x392f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F98u;
        goto label_392f98;
    }
    ctx->pc = 0x392F90u;
    {
        const bool branch_taken_0x392f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F90u;
        // 0x392f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f90) {
            ctx->pc = 0x392FC0u;
            goto label_392fc0;
        }
    }
    ctx->pc = 0x392F98u;
label_392f98:
    // 0x392f98: 0xc0e31fc  jal         func_38C7F0
label_392f9c:
    if (ctx->pc == 0x392F9Cu) {
        ctx->pc = 0x392F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F98u;
        // 0x392f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FA0u;
        goto label_392fa0;
    }
    ctx->pc = 0x392F98u;
    SET_GPR_U32(ctx, 31, 0x392FA0u);
    ctx->pc = 0x392F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F98u;
    // 0x392f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C7F0u, 0x392F98u, 0x392FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392FA0u;
label_392fa0:
    // 0x392fa0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x392fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_392fa4:
    // 0x392fa4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x392fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_392fa8:
    // 0x392fa8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x392fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_392fac:
    // 0x392fac: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x392facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_392fb0:
    // 0x392fb0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x392fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_392fb4:
    // 0x392fb4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x392fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_392fb8:
    // 0x392fb8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x392fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_392fbc:
    // 0x392fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x392fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392fc0:
    // 0x392fc0: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_392fc4:
    if (ctx->pc == 0x392FC4u) {
        ctx->pc = 0x392FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FC0u;
        // 0x392fc4: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FC8u;
        goto label_392fc8;
    }
    ctx->pc = 0x392FC0u;
    {
        const bool branch_taken_0x392fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x392FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FC0u;
        // 0x392fc4: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fc0) {
            ctx->pc = 0x392FE4u;
            goto label_392fe4;
        }
    }
    ctx->pc = 0x392FC8u;
label_392fc8:
    // 0x392fc8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_392fcc:
    if (ctx->pc == 0x392FCCu) {
        ctx->pc = 0x392FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FC8u;
        // 0x392fcc: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FD0u;
        goto label_392fd0;
    }
    ctx->pc = 0x392FC8u;
    {
        const bool branch_taken_0x392fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392fc8) {
            ctx->pc = 0x392FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392FC8u;
            // 0x392fcc: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393040u;
            goto label_393040;
        }
    }
    ctx->pc = 0x392FD0u;
label_392fd0:
    // 0x392fd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x392fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_392fd4:
    // 0x392fd4: 0x5222000d  beql        $s1, $v0, . + 4 + (0xD << 2)
label_392fd8:
    if (ctx->pc == 0x392FD8u) {
        ctx->pc = 0x392FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FD4u;
        // 0x392fd8: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FDCu;
        goto label_392fdc;
    }
    ctx->pc = 0x392FD4u;
    {
        const bool branch_taken_0x392fd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x392fd4) {
            ctx->pc = 0x392FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392FD4u;
            // 0x392fd8: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39300Cu;
            goto label_39300c;
        }
    }
    ctx->pc = 0x392FDCu;
label_392fdc:
    // 0x392fdc: 0x10000018  b           . + 4 + (0x18 << 2)
label_392fe0:
    if (ctx->pc == 0x392FE0u) {
        ctx->pc = 0x392FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FDCu;
        // 0x392fe0: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FE4u;
        goto label_392fe4;
    }
    ctx->pc = 0x392FDCu;
    {
        const bool branch_taken_0x392fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FDCu;
        // 0x392fe0: 0xde050040  ld          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fdc) {
            ctx->pc = 0x393040u;
            goto label_393040;
        }
    }
    ctx->pc = 0x392FE4u;
label_392fe4:
    // 0x392fe4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x392fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_392fe8:
    // 0x392fe8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x392fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392fec:
    // 0x392fec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x392fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392ff0:
    // 0x392ff0: 0xde050040  ld          $a1, 0x40($s0)
    ctx->pc = 0x392ff0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_392ff4:
    // 0x392ff4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x392ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_392ff8:
    // 0x392ff8: 0x10a4006d  beq         $a1, $a0, . + 4 + (0x6D << 2)
label_392ffc:
    if (ctx->pc == 0x392FFCu) {
        ctx->pc = 0x392FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FF8u;
        // 0x392ffc: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393000u;
        goto label_393000;
    }
    ctx->pc = 0x392FF8u;
    {
        const bool branch_taken_0x392ff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x392FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FF8u;
        // 0x392ffc: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ff8) {
            ctx->pc = 0x3931B0u;
            goto label_3931b0;
        }
    }
    ctx->pc = 0x393000u;
label_393000:
    // 0x393000: 0x245902d  daddu       $s2, $s2, $a1
    ctx->pc = 0x393000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 5));
label_393004:
    // 0x393004: 0x1000000e  b           . + 4 + (0xE << 2)
label_393008:
    if (ctx->pc == 0x393008u) {
        ctx->pc = 0x393008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393004u;
        // 0x393008: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39300Cu;
        goto label_39300c;
    }
    ctx->pc = 0x393004u;
    {
        const bool branch_taken_0x393004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393004u;
        // 0x393008: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393004) {
            ctx->pc = 0x393040u;
            goto label_393040;
        }
    }
    ctx->pc = 0x39300Cu;
label_39300c:
    // 0x39300c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393010:
    // 0x393010: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x393010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_393014:
    // 0x393014: 0x40f809  jalr        $v0
label_393018:
    if (ctx->pc == 0x393018u) {
        ctx->pc = 0x393018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393014u;
        // 0x393018: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39301Cu;
        goto label_39301c;
    }
    ctx->pc = 0x393014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39301Cu);
        ctx->pc = 0x393018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393014u;
        // 0x393018: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393014u, 0x39301Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39301Cu;
label_39301c:
    // 0x39301c: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_393020:
    if (ctx->pc == 0x393020u) {
        ctx->pc = 0x393020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39301Cu;
        // 0x393020: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393024u;
        goto label_393024;
    }
    ctx->pc = 0x39301Cu;
    {
        const bool branch_taken_0x39301c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39301Cu;
        // 0x393020: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39301c) {
            ctx->pc = 0x3931B0u;
            goto label_3931b0;
        }
    }
    ctx->pc = 0x393024u;
label_393024:
    // 0x393024: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x393024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_393028:
    // 0x393028: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x393028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_39302c:
    // 0x39302c: 0x14430060  bne         $v0, $v1, . + 4 + (0x60 << 2)
label_393030:
    if (ctx->pc == 0x393030u) {
        ctx->pc = 0x393030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39302Cu;
        // 0x393030: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393034u;
        goto label_393034;
    }
    ctx->pc = 0x39302Cu;
    {
        const bool branch_taken_0x39302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x393030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39302Cu;
        // 0x393030: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39302c) {
            ctx->pc = 0x3931B0u;
            goto label_3931b0;
        }
    }
    ctx->pc = 0x393034u;
label_393034:
    // 0x393034: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x393034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393038:
    // 0x393038: 0xde050040  ld          $a1, 0x40($s0)
    ctx->pc = 0x393038u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_39303c:
    // 0x39303c: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x39303cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_393040:
    // 0x393040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x393040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_393044:
    // 0x393044: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
label_393048:
    if (ctx->pc == 0x393048u) {
        ctx->pc = 0x393048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393044u;
        // 0x393048: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39304Cu;
        goto label_39304c;
    }
    ctx->pc = 0x393044u;
    {
        const bool branch_taken_0x393044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x393048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393044u;
        // 0x393048: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393044) {
            ctx->pc = 0x3930B0u;
            goto label_3930b0;
        }
    }
    ctx->pc = 0x39304Cu;
label_39304c:
    // 0x39304c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x39304cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_393050:
    // 0x393050: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
label_393054:
    if (ctx->pc == 0x393054u) {
        ctx->pc = 0x393058u;
        goto label_393058;
    }
    ctx->pc = 0x393050u;
    {
        const bool branch_taken_0x393050 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x393050) {
            ctx->pc = 0x3930B0u;
            goto label_3930b0;
        }
    }
    ctx->pc = 0x393058u;
label_393058:
    // 0x393058: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x393058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_39305c:
    // 0x39305c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_393060:
    if (ctx->pc == 0x393060u) {
        ctx->pc = 0x393060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39305Cu;
        // 0x393060: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393064u;
        goto label_393064;
    }
    ctx->pc = 0x39305Cu;
    {
        const bool branch_taken_0x39305c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39305Cu;
        // 0x393060: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39305c) {
            ctx->pc = 0x3930B4u;
            goto label_3930b4;
        }
    }
    ctx->pc = 0x393064u;
label_393064:
    // 0x393064: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x393064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_393068:
    // 0x393068: 0x245182f  dsubu       $v1, $s2, $a1
    ctx->pc = 0x393068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) - GPR_U64(ctx, 5));
label_39306c:
    // 0x39306c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x39306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_393070:
    // 0x393070: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x393070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_393074:
    // 0x393074: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
label_393078:
    if (ctx->pc == 0x393078u) {
        ctx->pc = 0x393078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393074u;
        // 0x393078: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39307Cu;
        goto label_39307c;
    }
    ctx->pc = 0x393074u;
    {
        const bool branch_taken_0x393074 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x393078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393074u;
        // 0x393078: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393074) {
            ctx->pc = 0x3930B0u;
            goto label_3930b0;
        }
    }
    ctx->pc = 0x39307Cu;
label_39307c:
    // 0x39307c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_393080:
    if (ctx->pc == 0x393080u) {
        ctx->pc = 0x393080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39307Cu;
        // 0x393080: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393084u;
        goto label_393084;
    }
    ctx->pc = 0x39307Cu;
    {
        const bool branch_taken_0x39307c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39307Cu;
        // 0x393080: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39307c) {
            ctx->pc = 0x3930B4u;
            goto label_3930b4;
        }
    }
    ctx->pc = 0x393084u;
label_393084:
    // 0x393084: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x393084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_393088:
    // 0x393088: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x393088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_39308c:
    // 0x39308c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x39308cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_393090:
    // 0x393090: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x393090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393094:
    // 0x393094: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x393094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_393098:
    // 0x393098: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x393098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_39309c:
    // 0x39309c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x39309cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3930a0:
    // 0x3930a0: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x3930a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_3930a4:
    // 0x3930a4: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x3930a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_3930a8:
    // 0x3930a8: 0x10000059  b           . + 4 + (0x59 << 2)
label_3930ac:
    if (ctx->pc == 0x3930ACu) {
        ctx->pc = 0x3930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930A8u;
        // 0x3930ac: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930B0u;
        goto label_3930b0;
    }
    ctx->pc = 0x3930A8u;
    {
        const bool branch_taken_0x3930a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930A8u;
        // 0x3930ac: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930a8) {
            ctx->pc = 0x393210u;
            goto label_393210;
        }
    }
    ctx->pc = 0x3930B0u;
label_3930b0:
    // 0x3930b0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x3930b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_3930b4:
    // 0x3930b4: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_3930b8:
    if (ctx->pc == 0x3930B8u) {
        ctx->pc = 0x3930BCu;
        goto label_3930bc;
    }
    ctx->pc = 0x3930B4u;
    {
        const bool branch_taken_0x3930b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3930b4) {
            ctx->pc = 0x3931B0u;
            goto label_3931b0;
        }
    }
    ctx->pc = 0x3930BCu;
label_3930bc:
    // 0x3930bc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3930bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3930c0:
    // 0x3930c0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3930c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3930c4:
    // 0x3930c4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x3930c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3930c8:
    // 0x3930c8: 0x2442824  and         $a1, $s2, $a0
    ctx->pc = 0x3930c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_3930cc:
    // 0x3930cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3930ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3930d0:
    // 0x3930d0: 0x245882f  dsubu       $s1, $s2, $a1
    ctx->pc = 0x3930d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) - GPR_U64(ctx, 5));
label_3930d4:
    // 0x3930d4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3930d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3930d8:
    // 0x3930d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3930dc:
    if (ctx->pc == 0x3930DCu) {
        ctx->pc = 0x3930DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930D8u;
        // 0x3930dc: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930E0u;
        goto label_3930e0;
    }
    ctx->pc = 0x3930D8u;
    {
        const bool branch_taken_0x3930d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3930DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930D8u;
        // 0x3930dc: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930d8) {
            ctx->pc = 0x3930E8u;
            goto label_3930e8;
        }
    }
    ctx->pc = 0x3930E0u;
label_3930e0:
    // 0x3930e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3930e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3930e4:
    // 0x3930e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3930e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3930e8:
    // 0x3930e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3930e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3930ec:
    // 0x3930ec: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3930ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3930f0:
    // 0x3930f0: 0x40f809  jalr        $v0
label_3930f4:
    if (ctx->pc == 0x3930F4u) {
        ctx->pc = 0x3930F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930F0u;
        // 0x3930f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930F8u;
        goto label_3930f8;
    }
    ctx->pc = 0x3930F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3930F8u);
        ctx->pc = 0x3930F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930F0u;
        // 0x3930f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3930F0u, 0x3930F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3930F8u;
label_3930f8:
    // 0x3930f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3930f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3930fc:
    // 0x3930fc: 0x6600044  bltz        $s3, . + 4 + (0x44 << 2)
label_393100:
    if (ctx->pc == 0x393100u) {
        ctx->pc = 0x393100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930FCu;
        // 0x393100: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393104u;
        goto label_393104;
    }
    ctx->pc = 0x3930FCu;
    {
        const bool branch_taken_0x3930fc = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x393100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930FCu;
        // 0x393100: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930fc) {
            ctx->pc = 0x393210u;
            goto label_393210;
        }
    }
    ctx->pc = 0x393104u;
label_393104:
    // 0x393104: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_393108:
    if (ctx->pc == 0x393108u) {
        ctx->pc = 0x393108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393104u;
        // 0x393108: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39310Cu;
        goto label_39310c;
    }
    ctx->pc = 0x393104u;
    {
        const bool branch_taken_0x393104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x393108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393104u;
        // 0x393108: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393104) {
            ctx->pc = 0x39315Cu;
            goto label_39315c;
        }
    }
    ctx->pc = 0x39310Cu;
label_39310c:
    // 0x39310c: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_393110:
    if (ctx->pc == 0x393110u) {
        ctx->pc = 0x393110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39310Cu;
        // 0x393110: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393114u;
        goto label_393114;
    }
    ctx->pc = 0x39310Cu;
    {
        const bool branch_taken_0x39310c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x393110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39310Cu;
        // 0x393110: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39310c) {
            ctx->pc = 0x393124u;
            goto label_393124;
        }
    }
    ctx->pc = 0x393114u;
label_393114:
    // 0x393114: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x393114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_393118:
    // 0x393118: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x393118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_39311c:
    // 0x39311c: 0x10000002  b           . + 4 + (0x2 << 2)
label_393120:
    if (ctx->pc == 0x393120u) {
        ctx->pc = 0x393120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39311Cu;
        // 0x393120: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393124u;
        goto label_393124;
    }
    ctx->pc = 0x39311Cu;
    {
        const bool branch_taken_0x39311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39311Cu;
        // 0x393120: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39311c) {
            ctx->pc = 0x393128u;
            goto label_393128;
        }
    }
    ctx->pc = 0x393124u;
label_393124:
    // 0x393124: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x393124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393128:
    // 0x393128: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x393128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_39312c:
    // 0x39312c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x39312cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_393130:
    // 0x393130: 0x40f809  jalr        $v0
label_393134:
    if (ctx->pc == 0x393134u) {
        ctx->pc = 0x393134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393130u;
        // 0x393134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393138u;
        goto label_393138;
    }
    ctx->pc = 0x393130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393138u);
        ctx->pc = 0x393134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393130u;
        // 0x393134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393130u, 0x393138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393138u;
label_393138:
    // 0x393138: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x393138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39313c:
    // 0x39313c: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x39313cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_393140:
    // 0x393140: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_393144:
    if (ctx->pc == 0x393144u) {
        ctx->pc = 0x393144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393140u;
        // 0x393144: 0x71827  nor         $v1, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393148u;
        goto label_393148;
    }
    ctx->pc = 0x393140u;
    {
        const bool branch_taken_0x393140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393140u;
        // 0x393144: 0x71827  nor         $v1, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393140) {
            ctx->pc = 0x39315Cu;
            goto label_39315c;
        }
    }
    ctx->pc = 0x393148u;
label_393148:
    // 0x393148: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x393148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39314c:
    // 0x39314c: 0x247102f  dsubu       $v0, $s2, $a3
    ctx->pc = 0x39314cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) - GPR_U64(ctx, 7));
label_393150:
    // 0x393150: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x393150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393154:
    // 0x393154: 0x10000016  b           . + 4 + (0x16 << 2)
label_393158:
    if (ctx->pc == 0x393158u) {
        ctx->pc = 0x393158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393154u;
        // 0x393158: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39315Cu;
        goto label_39315c;
    }
    ctx->pc = 0x393154u;
    {
        const bool branch_taken_0x393154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393154u;
        // 0x393158: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393154) {
            ctx->pc = 0x3931B0u;
            goto label_3931b0;
        }
    }
    ctx->pc = 0x39315Cu;
label_39315c:
    // 0x39315c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_393160:
    // 0x393160: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x393160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_393164:
    // 0x393164: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x393164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_393168:
    // 0x393168: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x393168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
label_39316c:
    // 0x39316c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x39316cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_393170:
    // 0x393170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x393170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_393174:
    // 0x393174: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x393174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_393178:
    // 0x393178: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x393178u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_39317c:
    // 0x39317c: 0x267382d  daddu       $a3, $s3, $a3
    ctx->pc = 0x39317cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 7));
label_393180:
    // 0x393180: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x393180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_393184:
    // 0x393184: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x393184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_393188:
    // 0x393188: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x393188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_39318c:
    // 0x39318c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x39318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_393190:
    // 0x393190: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x393190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393194:
    // 0x393194: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x393194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_393198:
    // 0x393198: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x393198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_39319c:
    // 0x39319c: 0xfe070040  sd          $a3, 0x40($s0)
    ctx->pc = 0x39319cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 7));
label_3931a0:
    // 0x3931a0: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x3931a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_3931a4:
    // 0x3931a4: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x3931a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_3931a8:
    // 0x3931a8: 0x10000019  b           . + 4 + (0x19 << 2)
label_3931ac:
    if (ctx->pc == 0x3931ACu) {
        ctx->pc = 0x3931ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931A8u;
        // 0x3931ac: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931B0u;
        goto label_3931b0;
    }
    ctx->pc = 0x3931A8u;
    {
        const bool branch_taken_0x3931a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3931ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931A8u;
        // 0x3931ac: 0xae060010  sw          $a2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931a8) {
            ctx->pc = 0x393210u;
            goto label_393210;
        }
    }
    ctx->pc = 0x3931B0u;
label_3931b0:
    // 0x3931b0: 0xc0e3450  jal         func_38D140
label_3931b4:
    if (ctx->pc == 0x3931B4u) {
        ctx->pc = 0x3931B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931B0u;
        // 0x3931b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931B8u;
        goto label_3931b8;
    }
    ctx->pc = 0x3931B0u;
    SET_GPR_U32(ctx, 31, 0x3931B8u);
    ctx->pc = 0x3931B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3931B0u;
    // 0x3931b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D140u, 0x3931B0u, 0x3931B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3931B8u;
label_3931b8:
    // 0x3931b8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3931b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3931bc:
    // 0x3931bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3931bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3931c0:
    // 0x3931c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3931c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3931c4:
    // 0x3931c4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3931c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3931c8:
    // 0x3931c8: 0x40f809  jalr        $v0
label_3931cc:
    if (ctx->pc == 0x3931CCu) {
        ctx->pc = 0x3931CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931C8u;
        // 0x3931cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931D0u;
        goto label_3931d0;
    }
    ctx->pc = 0x3931C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3931D0u);
        ctx->pc = 0x3931CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931C8u;
        // 0x3931cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3931C8u, 0x3931D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3931D0u;
label_3931d0:
    // 0x3931d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3931d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3931d4:
    // 0x3931d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3931d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3931d8:
    // 0x3931d8: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_3931dc:
    if (ctx->pc == 0x3931DCu) {
        ctx->pc = 0x3931DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931D8u;
        // 0x3931dc: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931E0u;
        goto label_3931e0;
    }
    ctx->pc = 0x3931D8u;
    {
        const bool branch_taken_0x3931d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3931DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931D8u;
        // 0x3931dc: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931d8) {
            ctx->pc = 0x3931ECu;
            goto label_3931ec;
        }
    }
    ctx->pc = 0x3931E0u;
label_3931e0:
    // 0x3931e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3931e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3931e4:
    // 0x3931e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3931e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3931e8:
    // 0x3931e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3931e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3931ec:
    // 0x3931ec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3931ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3931f0:
    // 0x3931f0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3931f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3931f4:
    // 0x3931f4: 0xfe130040  sd          $s3, 0x40($s0)
    ctx->pc = 0x3931f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 19));
label_3931f8:
    // 0x3931f8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3931f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_3931fc:
    // 0x3931fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3931fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_393200:
    // 0x393200: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x393200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_393204:
    // 0x393204: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x393204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_393208:
    // 0x393208: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x393208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_39320c:
    // 0x39320c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x39320cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_393210:
    // 0x393210: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x393210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_393214:
    // 0x393214: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x393214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_393218:
    // 0x393218: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x393218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_39321c:
    // 0x39321c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x39321cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_393220:
    // 0x393220: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x393220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_393224:
    // 0x393224: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x393224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_393228:
    // 0x393228: 0x3e00008  jr          $ra
label_39322c:
    if (ctx->pc == 0x39322Cu) {
        ctx->pc = 0x39322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393228u;
        // 0x39322c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393230u;
        goto label_fallthrough_0x393228;
    }
    ctx->pc = 0x393228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393228u;
        // 0x39322c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x393228:
    ctx->pc = 0x393230u;
}

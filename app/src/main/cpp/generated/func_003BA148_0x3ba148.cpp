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

// Function: func_003BA148
// Address: 0x3ba148 - 0x3ba370
void func_003BA148_0x3ba148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA148_0x3ba148");
#endif

    switch (ctx->pc) {
        case 0x3ba148u: goto label_3ba148;
        case 0x3ba14cu: goto label_3ba14c;
        case 0x3ba150u: goto label_3ba150;
        case 0x3ba154u: goto label_3ba154;
        case 0x3ba158u: goto label_3ba158;
        case 0x3ba15cu: goto label_3ba15c;
        case 0x3ba160u: goto label_3ba160;
        case 0x3ba164u: goto label_3ba164;
        case 0x3ba168u: goto label_3ba168;
        case 0x3ba16cu: goto label_3ba16c;
        case 0x3ba170u: goto label_3ba170;
        case 0x3ba174u: goto label_3ba174;
        case 0x3ba178u: goto label_3ba178;
        case 0x3ba17cu: goto label_3ba17c;
        case 0x3ba180u: goto label_3ba180;
        case 0x3ba184u: goto label_3ba184;
        case 0x3ba188u: goto label_3ba188;
        case 0x3ba18cu: goto label_3ba18c;
        case 0x3ba190u: goto label_3ba190;
        case 0x3ba194u: goto label_3ba194;
        case 0x3ba198u: goto label_3ba198;
        case 0x3ba19cu: goto label_3ba19c;
        case 0x3ba1a0u: goto label_3ba1a0;
        case 0x3ba1a4u: goto label_3ba1a4;
        case 0x3ba1a8u: goto label_3ba1a8;
        case 0x3ba1acu: goto label_3ba1ac;
        case 0x3ba1b0u: goto label_3ba1b0;
        case 0x3ba1b4u: goto label_3ba1b4;
        case 0x3ba1b8u: goto label_3ba1b8;
        case 0x3ba1bcu: goto label_3ba1bc;
        case 0x3ba1c0u: goto label_3ba1c0;
        case 0x3ba1c4u: goto label_3ba1c4;
        case 0x3ba1c8u: goto label_3ba1c8;
        case 0x3ba1ccu: goto label_3ba1cc;
        case 0x3ba1d0u: goto label_3ba1d0;
        case 0x3ba1d4u: goto label_3ba1d4;
        case 0x3ba1d8u: goto label_3ba1d8;
        case 0x3ba1dcu: goto label_3ba1dc;
        case 0x3ba1e0u: goto label_3ba1e0;
        case 0x3ba1e4u: goto label_3ba1e4;
        case 0x3ba1e8u: goto label_3ba1e8;
        case 0x3ba1ecu: goto label_3ba1ec;
        case 0x3ba1f0u: goto label_3ba1f0;
        case 0x3ba1f4u: goto label_3ba1f4;
        case 0x3ba1f8u: goto label_3ba1f8;
        case 0x3ba1fcu: goto label_3ba1fc;
        case 0x3ba200u: goto label_3ba200;
        case 0x3ba204u: goto label_3ba204;
        case 0x3ba208u: goto label_3ba208;
        case 0x3ba20cu: goto label_3ba20c;
        case 0x3ba210u: goto label_3ba210;
        case 0x3ba214u: goto label_3ba214;
        case 0x3ba218u: goto label_3ba218;
        case 0x3ba21cu: goto label_3ba21c;
        case 0x3ba220u: goto label_3ba220;
        case 0x3ba224u: goto label_3ba224;
        case 0x3ba228u: goto label_3ba228;
        case 0x3ba22cu: goto label_3ba22c;
        case 0x3ba230u: goto label_3ba230;
        case 0x3ba234u: goto label_3ba234;
        case 0x3ba238u: goto label_3ba238;
        case 0x3ba23cu: goto label_3ba23c;
        case 0x3ba240u: goto label_3ba240;
        case 0x3ba244u: goto label_3ba244;
        case 0x3ba248u: goto label_3ba248;
        case 0x3ba24cu: goto label_3ba24c;
        case 0x3ba250u: goto label_3ba250;
        case 0x3ba254u: goto label_3ba254;
        case 0x3ba258u: goto label_3ba258;
        case 0x3ba25cu: goto label_3ba25c;
        case 0x3ba260u: goto label_3ba260;
        case 0x3ba264u: goto label_3ba264;
        case 0x3ba268u: goto label_3ba268;
        case 0x3ba26cu: goto label_3ba26c;
        case 0x3ba270u: goto label_3ba270;
        case 0x3ba274u: goto label_3ba274;
        case 0x3ba278u: goto label_3ba278;
        case 0x3ba27cu: goto label_3ba27c;
        case 0x3ba280u: goto label_3ba280;
        case 0x3ba284u: goto label_3ba284;
        case 0x3ba288u: goto label_3ba288;
        case 0x3ba28cu: goto label_3ba28c;
        case 0x3ba290u: goto label_3ba290;
        case 0x3ba294u: goto label_3ba294;
        case 0x3ba298u: goto label_3ba298;
        case 0x3ba29cu: goto label_3ba29c;
        case 0x3ba2a0u: goto label_3ba2a0;
        case 0x3ba2a4u: goto label_3ba2a4;
        case 0x3ba2a8u: goto label_3ba2a8;
        case 0x3ba2acu: goto label_3ba2ac;
        case 0x3ba2b0u: goto label_3ba2b0;
        case 0x3ba2b4u: goto label_3ba2b4;
        case 0x3ba2b8u: goto label_3ba2b8;
        case 0x3ba2bcu: goto label_3ba2bc;
        case 0x3ba2c0u: goto label_3ba2c0;
        case 0x3ba2c4u: goto label_3ba2c4;
        case 0x3ba2c8u: goto label_3ba2c8;
        case 0x3ba2ccu: goto label_3ba2cc;
        case 0x3ba2d0u: goto label_3ba2d0;
        case 0x3ba2d4u: goto label_3ba2d4;
        case 0x3ba2d8u: goto label_3ba2d8;
        case 0x3ba2dcu: goto label_3ba2dc;
        case 0x3ba2e0u: goto label_3ba2e0;
        case 0x3ba2e4u: goto label_3ba2e4;
        case 0x3ba2e8u: goto label_3ba2e8;
        case 0x3ba2ecu: goto label_3ba2ec;
        case 0x3ba2f0u: goto label_3ba2f0;
        case 0x3ba2f4u: goto label_3ba2f4;
        case 0x3ba2f8u: goto label_3ba2f8;
        case 0x3ba2fcu: goto label_3ba2fc;
        case 0x3ba300u: goto label_3ba300;
        case 0x3ba304u: goto label_3ba304;
        case 0x3ba308u: goto label_3ba308;
        case 0x3ba30cu: goto label_3ba30c;
        case 0x3ba310u: goto label_3ba310;
        case 0x3ba314u: goto label_3ba314;
        case 0x3ba318u: goto label_3ba318;
        case 0x3ba31cu: goto label_3ba31c;
        case 0x3ba320u: goto label_3ba320;
        case 0x3ba324u: goto label_3ba324;
        case 0x3ba328u: goto label_3ba328;
        case 0x3ba32cu: goto label_3ba32c;
        case 0x3ba330u: goto label_3ba330;
        case 0x3ba334u: goto label_3ba334;
        case 0x3ba338u: goto label_3ba338;
        case 0x3ba33cu: goto label_3ba33c;
        case 0x3ba340u: goto label_3ba340;
        case 0x3ba344u: goto label_3ba344;
        case 0x3ba348u: goto label_3ba348;
        case 0x3ba34cu: goto label_3ba34c;
        case 0x3ba350u: goto label_3ba350;
        case 0x3ba354u: goto label_3ba354;
        case 0x3ba358u: goto label_3ba358;
        case 0x3ba35cu: goto label_3ba35c;
        case 0x3ba360u: goto label_3ba360;
        case 0x3ba364u: goto label_3ba364;
        case 0x3ba368u: goto label_3ba368;
        case 0x3ba36cu: goto label_3ba36c;
        default: break;
    }

    ctx->pc = 0x3ba148u;

label_3ba148:
    // 0x3ba148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ba148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ba14c:
    // 0x3ba14c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ba14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba150:
    // 0x3ba150: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3ba150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3ba154:
    // 0x3ba154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ba154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ba158:
    // 0x3ba158: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3ba158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3ba15c:
    // 0x3ba15c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ba15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ba160:
    // 0x3ba160: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ba160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ba164:
    // 0x3ba164: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3ba168:
    if (ctx->pc == 0x3BA168u) {
        ctx->pc = 0x3BA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA164u;
        // 0x3ba168: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA16Cu;
        goto label_3ba16c;
    }
    ctx->pc = 0x3BA164u;
    {
        const bool branch_taken_0x3ba164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ba164) {
            ctx->pc = 0x3BA168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA164u;
            // 0x3ba168: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA178u;
            goto label_3ba178;
        }
    }
    ctx->pc = 0x3BA16Cu;
label_3ba16c:
    // 0x3ba16c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ba16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ba170:
    // 0x3ba170: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ba170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3ba174:
    // 0x3ba174: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3ba174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3ba178:
    // 0x3ba178: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_3ba17c:
    if (ctx->pc == 0x3BA17Cu) {
        ctx->pc = 0x3BA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA178u;
        // 0x3ba17c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA180u;
        goto label_3ba180;
    }
    ctx->pc = 0x3BA178u;
    {
        const bool branch_taken_0x3ba178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ba178) {
            ctx->pc = 0x3BA17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA178u;
            // 0x3ba17c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA1A8u;
            goto label_3ba1a8;
        }
    }
    ctx->pc = 0x3BA180u;
label_3ba180:
    // 0x3ba180: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3ba180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ba184:
    // 0x3ba184: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba188:
    // 0x3ba188: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3ba188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3ba18c:
    // 0x3ba18c: 0x40f809  jalr        $v0
label_3ba190:
    if (ctx->pc == 0x3BA190u) {
        ctx->pc = 0x3BA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA18Cu;
        // 0x3ba190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA194u;
        goto label_3ba194;
    }
    ctx->pc = 0x3BA18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA194u);
        ctx->pc = 0x3BA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA18Cu;
        // 0x3ba190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA18Cu, 0x3BA194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA194u;
label_3ba194:
    // 0x3ba194: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
label_3ba198:
    if (ctx->pc == 0x3BA198u) {
        ctx->pc = 0x3BA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA194u;
        // 0x3ba198: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA19Cu;
        goto label_3ba19c;
    }
    ctx->pc = 0x3BA194u;
    {
        const bool branch_taken_0x3ba194 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3ba194) {
            ctx->pc = 0x3BA198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA194u;
            // 0x3ba198: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA1A8u;
            goto label_3ba1a8;
        }
    }
    ctx->pc = 0x3BA19Cu;
label_3ba19c:
    // 0x3ba19c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ba19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ba1a0:
    // 0x3ba1a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ba1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3ba1a4:
    // 0x3ba1a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ba1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ba1a8:
    // 0x3ba1a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ba1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ba1ac:
    // 0x3ba1ac: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
label_3ba1b0:
    if (ctx->pc == 0x3BA1B0u) {
        ctx->pc = 0x3BA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1ACu;
        // 0x3ba1b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA1B4u;
        goto label_3ba1b4;
    }
    ctx->pc = 0x3BA1ACu;
    {
        const bool branch_taken_0x3ba1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1ACu;
        // 0x3ba1b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba1ac) {
            ctx->pc = 0x3BA35Cu;
            goto label_3ba35c;
        }
    }
    ctx->pc = 0x3BA1B4u;
label_3ba1b4:
    // 0x3ba1b4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3ba1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3ba1b8:
    // 0x3ba1b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba1bc:
    // 0x3ba1bc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3ba1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3ba1c0:
    // 0x3ba1c0: 0x40f809  jalr        $v0
label_3ba1c4:
    if (ctx->pc == 0x3BA1C4u) {
        ctx->pc = 0x3BA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1C0u;
        // 0x3ba1c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA1C8u;
        goto label_3ba1c8;
    }
    ctx->pc = 0x3BA1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA1C8u);
        ctx->pc = 0x3BA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1C0u;
        // 0x3ba1c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA1C0u, 0x3BA1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA1C8u;
label_3ba1c8:
    // 0x3ba1c8: 0x28421800  slti        $v0, $v0, 0x1800
    ctx->pc = 0x3ba1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6144) ? 1 : 0);
label_3ba1cc:
    // 0x3ba1cc: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_3ba1d0:
    if (ctx->pc == 0x3BA1D0u) {
        ctx->pc = 0x3BA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1CCu;
        // 0x3ba1d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA1D4u;
        goto label_3ba1d4;
    }
    ctx->pc = 0x3BA1CCu;
    {
        const bool branch_taken_0x3ba1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1CCu;
        // 0x3ba1d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba1cc) {
            ctx->pc = 0x3BA35Cu;
            goto label_3ba35c;
        }
    }
    ctx->pc = 0x3BA1D4u;
label_3ba1d4:
    // 0x3ba1d4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3ba1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ba1d8:
    // 0x3ba1d8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3ba1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3ba1dc:
    // 0x3ba1dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3ba1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba1e0:
    // 0x3ba1e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3ba1e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3ba1e4:
    // 0x3ba1e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba1e8:
    // 0x3ba1e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3ba1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3ba1ec:
    // 0x3ba1ec: 0x40f809  jalr        $v0
label_3ba1f0:
    if (ctx->pc == 0x3BA1F0u) {
        ctx->pc = 0x3BA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1ECu;
        // 0x3ba1f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA1F4u;
        goto label_3ba1f4;
    }
    ctx->pc = 0x3BA1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA1F4u);
        ctx->pc = 0x3BA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1ECu;
        // 0x3ba1f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA1ECu, 0x3BA1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA1F4u;
label_3ba1f4:
    // 0x3ba1f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3ba1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba1f8:
    // 0x3ba1f8: 0xc0ee8dc  jal         func_3BA370
label_3ba1fc:
    if (ctx->pc == 0x3BA1FCu) {
        ctx->pc = 0x3BA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA1F8u;
        // 0x3ba1fc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA200u;
        goto label_3ba200;
    }
    ctx->pc = 0x3BA1F8u;
    SET_GPR_U32(ctx, 31, 0x3BA200u);
    ctx->pc = 0x3BA1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA1F8u;
    // 0x3ba1fc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA370u, 0x3BA1F8u, 0x3BA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA200u;
label_3ba200:
    // 0x3ba200: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3ba200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ba204:
    // 0x3ba204: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ba204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba208:
    // 0x3ba208: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ba208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba20c:
    // 0x3ba20c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ba20cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ba210:
    // 0x3ba210: 0xc0ceb28  jal         func_33ACA0
label_3ba214:
    if (ctx->pc == 0x3BA214u) {
        ctx->pc = 0x3BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA210u;
        // 0x3ba214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA218u;
        goto label_3ba218;
    }
    ctx->pc = 0x3BA210u;
    SET_GPR_U32(ctx, 31, 0x3BA218u);
    ctx->pc = 0x3BA214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA210u;
    // 0x3ba214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x3BA210u, 0x3BA218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA218u;
label_3ba218:
    // 0x3ba218: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3ba218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ba21c:
    // 0x3ba21c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ba21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba220:
    // 0x3ba220: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba224:
    // 0x3ba224: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3ba224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3ba228:
    // 0x3ba228: 0x40f809  jalr        $v0
label_3ba22c:
    if (ctx->pc == 0x3BA22Cu) {
        ctx->pc = 0x3BA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA228u;
        // 0x3ba22c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA230u;
        goto label_3ba230;
    }
    ctx->pc = 0x3BA228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA230u);
        ctx->pc = 0x3BA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA228u;
        // 0x3ba22c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA228u, 0x3BA230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA230u;
label_3ba230:
    // 0x3ba230: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3ba230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ba234:
    // 0x3ba234: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ba234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ba238:
    // 0x3ba238: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba23c:
    // 0x3ba23c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3ba23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3ba240:
    // 0x3ba240: 0x40f809  jalr        $v0
label_3ba244:
    if (ctx->pc == 0x3BA244u) {
        ctx->pc = 0x3BA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA240u;
        // 0x3ba244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA248u;
        goto label_3ba248;
    }
    ctx->pc = 0x3BA240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA248u);
        ctx->pc = 0x3BA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA240u;
        // 0x3ba244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA240u, 0x3BA248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA248u;
label_3ba248:
    // 0x3ba248: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3ba248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ba24c:
    // 0x3ba24c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ba24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba250:
    // 0x3ba250: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3ba250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3ba254:
    // 0x3ba254: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ba254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba258:
    // 0x3ba258: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3ba258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3ba25c:
    // 0x3ba25c: 0x60f809  jalr        $v1
label_3ba260:
    if (ctx->pc == 0x3BA260u) {
        ctx->pc = 0x3BA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA25Cu;
        // 0x3ba260: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA264u;
        goto label_3ba264;
    }
    ctx->pc = 0x3BA25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BA264u);
        ctx->pc = 0x3BA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA25Cu;
        // 0x3ba260: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA25Cu, 0x3BA264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA264u;
label_3ba264:
    // 0x3ba264: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3ba264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ba268:
    // 0x3ba268: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x3ba268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_3ba26c:
    // 0x3ba26c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3ba270:
    if (ctx->pc == 0x3BA270u) {
        ctx->pc = 0x3BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA26Cu;
        // 0x3ba270: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA274u;
        goto label_3ba274;
    }
    ctx->pc = 0x3BA26Cu;
    {
        const bool branch_taken_0x3ba26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA26Cu;
        // 0x3ba270: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba26c) {
            ctx->pc = 0x3BA298u;
            goto label_3ba298;
        }
    }
    ctx->pc = 0x3BA274u;
label_3ba274:
    // 0x3ba274: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3ba274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ba278:
    // 0x3ba278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ba278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba27c:
    // 0x3ba27c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba280:
    // 0x3ba280: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3ba280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3ba284:
    // 0x3ba284: 0x40f809  jalr        $v0
label_3ba288:
    if (ctx->pc == 0x3BA288u) {
        ctx->pc = 0x3BA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA284u;
        // 0x3ba288: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA28Cu;
        goto label_3ba28c;
    }
    ctx->pc = 0x3BA284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA28Cu);
        ctx->pc = 0x3BA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA284u;
        // 0x3ba288: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA284u, 0x3BA28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA28Cu;
label_3ba28c:
    // 0x3ba28c: 0x10000033  b           . + 4 + (0x33 << 2)
label_3ba290:
    if (ctx->pc == 0x3BA290u) {
        ctx->pc = 0x3BA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA28Cu;
        // 0x3ba290: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA294u;
        goto label_3ba294;
    }
    ctx->pc = 0x3BA28Cu;
    {
        const bool branch_taken_0x3ba28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA28Cu;
        // 0x3ba290: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba28c) {
            ctx->pc = 0x3BA35Cu;
            goto label_3ba35c;
        }
    }
    ctx->pc = 0x3BA294u;
label_3ba294:
    // 0x3ba294: 0x0  nop
    ctx->pc = 0x3ba294u;
    // NOP
label_3ba298:
    // 0x3ba298: 0xc0ee8f6  jal         func_3BA3D8
label_3ba29c:
    if (ctx->pc == 0x3BA29Cu) {
        ctx->pc = 0x3BA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA298u;
        // 0x3ba29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA2A0u;
        goto label_3ba2a0;
    }
    ctx->pc = 0x3BA298u;
    SET_GPR_U32(ctx, 31, 0x3BA2A0u);
    ctx->pc = 0x3BA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA298u;
    // 0x3ba29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA3D8u, 0x3BA298u, 0x3BA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA2A0u;
label_3ba2a0:
    // 0x3ba2a0: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_3ba2a4:
    if (ctx->pc == 0x3BA2A4u) {
        ctx->pc = 0x3BA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2A0u;
        // 0x3ba2a4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA2A8u;
        goto label_3ba2a8;
    }
    ctx->pc = 0x3BA2A0u;
    {
        const bool branch_taken_0x3ba2a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3BA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2A0u;
        // 0x3ba2a4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba2a0) {
            ctx->pc = 0x3BA334u;
            goto label_3ba334;
        }
    }
    ctx->pc = 0x3BA2A8u;
label_3ba2a8:
    // 0x3ba2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ba2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ba2ac:
    // 0x3ba2ac: 0xc0ee93e  jal         func_3BA4F8
label_3ba2b0:
    if (ctx->pc == 0x3BA2B0u) {
        ctx->pc = 0x3BA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2ACu;
        // 0x3ba2b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA2B4u;
        goto label_3ba2b4;
    }
    ctx->pc = 0x3BA2ACu;
    SET_GPR_U32(ctx, 31, 0x3BA2B4u);
    ctx->pc = 0x3BA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA2ACu;
    // 0x3ba2b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA4F8u, 0x3BA2ACu, 0x3BA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA2B4u;
label_3ba2b4:
    // 0x3ba2b4: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
label_3ba2b8:
    if (ctx->pc == 0x3BA2B8u) {
        ctx->pc = 0x3BA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2B4u;
        // 0x3ba2b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA2BCu;
        goto label_3ba2bc;
    }
    ctx->pc = 0x3BA2B4u;
    {
        const bool branch_taken_0x3ba2b4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3BA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2B4u;
        // 0x3ba2b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba2b4) {
            ctx->pc = 0x3BA334u;
            goto label_3ba334;
        }
    }
    ctx->pc = 0x3BA2BCu;
label_3ba2bc:
    // 0x3ba2bc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3ba2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ba2c0:
    // 0x3ba2c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba2c4:
    // 0x3ba2c4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3ba2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3ba2c8:
    // 0x3ba2c8: 0x40f809  jalr        $v0
label_3ba2cc:
    if (ctx->pc == 0x3BA2CCu) {
        ctx->pc = 0x3BA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2C8u;
        // 0x3ba2cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA2D0u;
        goto label_3ba2d0;
    }
    ctx->pc = 0x3BA2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA2D0u);
        ctx->pc = 0x3BA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2C8u;
        // 0x3ba2cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA2C8u, 0x3BA2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA2D0u;
label_3ba2d0:
    // 0x3ba2d0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3ba2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ba2d4:
    // 0x3ba2d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba2d8:
    // 0x3ba2d8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3ba2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3ba2dc:
    // 0x3ba2dc: 0x40f809  jalr        $v0
label_3ba2e0:
    if (ctx->pc == 0x3BA2E0u) {
        ctx->pc = 0x3BA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2DCu;
        // 0x3ba2e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA2E4u;
        goto label_3ba2e4;
    }
    ctx->pc = 0x3BA2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA2E4u);
        ctx->pc = 0x3BA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2DCu;
        // 0x3ba2e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA2DCu, 0x3BA2E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA2E4u;
label_3ba2e4:
    // 0x3ba2e4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x3ba2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3ba2e8:
    // 0x3ba2e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3ba2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3ba2ec:
    // 0x3ba2ec: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_3ba2f0:
    if (ctx->pc == 0x3BA2F0u) {
        ctx->pc = 0x3BA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2ECu;
        // 0x3ba2f0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA2F4u;
        goto label_3ba2f4;
    }
    ctx->pc = 0x3BA2ECu;
    {
        const bool branch_taken_0x3ba2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2ECu;
        // 0x3ba2f0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba2ec) {
            ctx->pc = 0x3BA35Cu;
            goto label_3ba35c;
        }
    }
    ctx->pc = 0x3BA2F4u;
label_3ba2f4:
    // 0x3ba2f4: 0xc0ee954  jal         func_3BA550
label_3ba2f8:
    if (ctx->pc == 0x3BA2F8u) {
        ctx->pc = 0x3BA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2F4u;
        // 0x3ba2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA2FCu;
        goto label_3ba2fc;
    }
    ctx->pc = 0x3BA2F4u;
    SET_GPR_U32(ctx, 31, 0x3BA2FCu);
    ctx->pc = 0x3BA2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA2F4u;
    // 0x3ba2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA550u, 0x3BA2F4u, 0x3BA2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA2FCu;
label_3ba2fc:
    // 0x3ba2fc: 0xc0ee968  jal         func_3BA5A0
label_3ba300:
    if (ctx->pc == 0x3BA300u) {
        ctx->pc = 0x3BA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2FCu;
        // 0x3ba300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA304u;
        goto label_3ba304;
    }
    ctx->pc = 0x3BA2FCu;
    SET_GPR_U32(ctx, 31, 0x3BA304u);
    ctx->pc = 0x3BA300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA2FCu;
    // 0x3ba300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA5A0u, 0x3BA2FCu, 0x3BA304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA304u;
label_3ba304:
    // 0x3ba304: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_3ba308:
    if (ctx->pc == 0x3BA308u) {
        ctx->pc = 0x3BA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA304u;
        // 0x3ba308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA30Cu;
        goto label_3ba30c;
    }
    ctx->pc = 0x3BA304u;
    {
        const bool branch_taken_0x3ba304 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3BA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA304u;
        // 0x3ba308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba304) {
            ctx->pc = 0x3BA334u;
            goto label_3ba334;
        }
    }
    ctx->pc = 0x3BA30Cu;
label_3ba30c:
    // 0x3ba30c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x3ba30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3ba310:
    // 0x3ba310: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3ba314:
    if (ctx->pc == 0x3BA314u) {
        ctx->pc = 0x3BA318u;
        goto label_3ba318;
    }
    ctx->pc = 0x3BA310u;
    {
        const bool branch_taken_0x3ba310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ba310) {
            ctx->pc = 0x3BA324u;
            goto label_3ba324;
        }
    }
    ctx->pc = 0x3BA318u;
label_3ba318:
    // 0x3ba318: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3ba318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ba31c:
    // 0x3ba31c: 0xc0ee9b0  jal         func_3BA6C0
label_3ba320:
    if (ctx->pc == 0x3BA320u) {
        ctx->pc = 0x3BA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA31Cu;
        // 0x3ba320: 0x24051800  addiu       $a1, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA324u;
        goto label_3ba324;
    }
    ctx->pc = 0x3BA31Cu;
    SET_GPR_U32(ctx, 31, 0x3BA324u);
    ctx->pc = 0x3BA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA31Cu;
    // 0x3ba320: 0x24051800  addiu       $a1, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA6C0u, 0x3BA31Cu, 0x3BA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA324u;
label_3ba324:
    // 0x3ba324: 0xc0ee9c2  jal         func_3BA708
label_3ba328:
    if (ctx->pc == 0x3BA328u) {
        ctx->pc = 0x3BA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA324u;
        // 0x3ba328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA32Cu;
        goto label_3ba32c;
    }
    ctx->pc = 0x3BA324u;
    SET_GPR_U32(ctx, 31, 0x3BA32Cu);
    ctx->pc = 0x3BA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA324u;
    // 0x3ba328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA708u, 0x3BA324u, 0x3BA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA32Cu;
label_3ba32c:
    // 0x3ba32c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_3ba330:
    if (ctx->pc == 0x3BA330u) {
        ctx->pc = 0x3BA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA32Cu;
        // 0x3ba330: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA334u;
        goto label_3ba334;
    }
    ctx->pc = 0x3BA32Cu;
    {
        const bool branch_taken_0x3ba32c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3ba32c) {
            ctx->pc = 0x3BA330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA32Cu;
            // 0x3ba330: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA340u;
            goto label_3ba340;
        }
    }
    ctx->pc = 0x3BA334u;
label_3ba334:
    // 0x3ba334: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ba334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ba338:
    // 0x3ba338: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ba33c:
    if (ctx->pc == 0x3BA33Cu) {
        ctx->pc = 0x3BA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA338u;
        // 0x3ba33c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA340u;
        goto label_3ba340;
    }
    ctx->pc = 0x3BA338u;
    {
        const bool branch_taken_0x3ba338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA338u;
        // 0x3ba33c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba338) {
            ctx->pc = 0x3BA358u;
            goto label_3ba358;
        }
    }
    ctx->pc = 0x3BA340u;
label_3ba340:
    // 0x3ba340: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3ba340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3ba344:
    // 0x3ba344: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3ba344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3ba348:
    // 0x3ba348: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x3ba348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
label_3ba34c:
    // 0x3ba34c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ba34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ba350:
    // 0x3ba350: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x3ba350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_3ba354:
    // 0x3ba354: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3ba354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_3ba358:
    // 0x3ba358: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3ba358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ba35c:
    // 0x3ba35c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3ba35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3ba360:
    // 0x3ba360: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ba360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ba364:
    // 0x3ba364: 0x3e00008  jr          $ra
label_3ba368:
    if (ctx->pc == 0x3BA368u) {
        ctx->pc = 0x3BA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA364u;
        // 0x3ba368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA36Cu;
        goto label_3ba36c;
    }
    ctx->pc = 0x3BA364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA364u;
        // 0x3ba368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA36Cu;
label_3ba36c:
    // 0x3ba36c: 0x0  nop
    ctx->pc = 0x3ba36cu;
    // NOP
    ctx->pc = 0x3ba370u;
}

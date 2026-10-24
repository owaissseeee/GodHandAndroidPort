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

// Function: func_00339360
// Address: 0x339360 - 0x339430
void func_00339360_0x339360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339360_0x339360");
#endif

    switch (ctx->pc) {
        case 0x339360u: goto label_339360;
        case 0x339364u: goto label_339364;
        case 0x339368u: goto label_339368;
        case 0x33936cu: goto label_33936c;
        case 0x339370u: goto label_339370;
        case 0x339374u: goto label_339374;
        case 0x339378u: goto label_339378;
        case 0x33937cu: goto label_33937c;
        case 0x339380u: goto label_339380;
        case 0x339384u: goto label_339384;
        case 0x339388u: goto label_339388;
        case 0x33938cu: goto label_33938c;
        case 0x339390u: goto label_339390;
        case 0x339394u: goto label_339394;
        case 0x339398u: goto label_339398;
        case 0x33939cu: goto label_33939c;
        case 0x3393a0u: goto label_3393a0;
        case 0x3393a4u: goto label_3393a4;
        case 0x3393a8u: goto label_3393a8;
        case 0x3393acu: goto label_3393ac;
        case 0x3393b0u: goto label_3393b0;
        case 0x3393b4u: goto label_3393b4;
        case 0x3393b8u: goto label_3393b8;
        case 0x3393bcu: goto label_3393bc;
        case 0x3393c0u: goto label_3393c0;
        case 0x3393c4u: goto label_3393c4;
        case 0x3393c8u: goto label_3393c8;
        case 0x3393ccu: goto label_3393cc;
        case 0x3393d0u: goto label_3393d0;
        case 0x3393d4u: goto label_3393d4;
        case 0x3393d8u: goto label_3393d8;
        case 0x3393dcu: goto label_3393dc;
        case 0x3393e0u: goto label_3393e0;
        case 0x3393e4u: goto label_3393e4;
        case 0x3393e8u: goto label_3393e8;
        case 0x3393ecu: goto label_3393ec;
        case 0x3393f0u: goto label_3393f0;
        case 0x3393f4u: goto label_3393f4;
        case 0x3393f8u: goto label_3393f8;
        case 0x3393fcu: goto label_3393fc;
        case 0x339400u: goto label_339400;
        case 0x339404u: goto label_339404;
        case 0x339408u: goto label_339408;
        case 0x33940cu: goto label_33940c;
        case 0x339410u: goto label_339410;
        case 0x339414u: goto label_339414;
        case 0x339418u: goto label_339418;
        case 0x33941cu: goto label_33941c;
        case 0x339420u: goto label_339420;
        case 0x339424u: goto label_339424;
        case 0x339428u: goto label_339428;
        case 0x33942cu: goto label_33942c;
        default: break;
    }

    ctx->pc = 0x339360u;

label_339360:
    // 0x339360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_339364:
    // 0x339364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_339368:
    // 0x339368: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x339368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33936c:
    // 0x33936c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_339370:
    // 0x339370: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x339370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_339374:
    // 0x339374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_339378:
    // 0x339378: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_33937c:
    if (ctx->pc == 0x33937Cu) {
        ctx->pc = 0x33937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339378u;
        // 0x33937c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339380u;
        goto label_339380;
    }
    ctx->pc = 0x339378u;
    {
        const bool branch_taken_0x339378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339378u;
        // 0x33937c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339378) {
            ctx->pc = 0x339398u;
            goto label_339398;
        }
    }
    ctx->pc = 0x339380u;
label_339380:
    // 0x339380: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339384:
    // 0x339384: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339388:
    // 0x339388: 0x24845a30  addiu       $a0, $a0, 0x5A30
    ctx->pc = 0x339388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23088));
label_33938c:
    // 0x33938c: 0x10000009  b           . + 4 + (0x9 << 2)
label_339390:
    if (ctx->pc == 0x339390u) {
        ctx->pc = 0x339390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33938Cu;
        // 0x339390: 0x24a55920  addiu       $a1, $a1, 0x5920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339394u;
        goto label_339394;
    }
    ctx->pc = 0x33938Cu;
    {
        const bool branch_taken_0x33938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33938Cu;
        // 0x339390: 0x24a55920  addiu       $a1, $a1, 0x5920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33938c) {
            ctx->pc = 0x3393B4u;
            goto label_3393b4;
        }
    }
    ctx->pc = 0x339394u;
label_339394:
    // 0x339394: 0x0  nop
    ctx->pc = 0x339394u;
    // NOP
label_339398:
    // 0x339398: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33939c:
    // 0x33939c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3393a0:
    if (ctx->pc == 0x3393A0u) {
        ctx->pc = 0x3393A4u;
        goto label_3393a4;
    }
    ctx->pc = 0x33939Cu;
    {
        const bool branch_taken_0x33939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33939c) {
            ctx->pc = 0x3393C8u;
            goto label_3393c8;
        }
    }
    ctx->pc = 0x3393A4u;
label_3393a4:
    // 0x3393a4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3393a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_3393a8:
    // 0x3393a8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3393a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_3393ac:
    // 0x3393ac: 0x24845a40  addiu       $a0, $a0, 0x5A40
    ctx->pc = 0x3393acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
label_3393b0:
    // 0x3393b0: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x3393b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
label_3393b4:
    // 0x3393b4: 0xc0ce292  jal         func_338A48
label_3393b8:
    if (ctx->pc == 0x3393B8u) {
        ctx->pc = 0x3393BCu;
        goto label_3393bc;
    }
    ctx->pc = 0x3393B4u;
    SET_GPR_U32(ctx, 31, 0x3393BCu);
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x3393B4u, 0x3393BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3393BCu;
label_3393bc:
    // 0x3393bc: 0x10000016  b           . + 4 + (0x16 << 2)
label_3393c0:
    if (ctx->pc == 0x3393C0u) {
        ctx->pc = 0x3393C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393BCu;
        // 0x3393c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3393C4u;
        goto label_3393c4;
    }
    ctx->pc = 0x3393BCu;
    {
        const bool branch_taken_0x3393bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3393C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393BCu;
        // 0x3393c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3393bc) {
            ctx->pc = 0x339418u;
            goto label_339418;
        }
    }
    ctx->pc = 0x3393C4u;
label_3393c4:
    // 0x3393c4: 0x0  nop
    ctx->pc = 0x3393c4u;
    // NOP
label_3393c8:
    // 0x3393c8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_3393cc:
    if (ctx->pc == 0x3393CCu) {
        ctx->pc = 0x3393CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393C8u;
        // 0x3393cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3393D0u;
        goto label_3393d0;
    }
    ctx->pc = 0x3393C8u;
    {
        const bool branch_taken_0x3393c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3393CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393C8u;
        // 0x3393cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3393c8) {
            ctx->pc = 0x33940Cu;
            goto label_33940c;
        }
    }
    ctx->pc = 0x3393D0u;
label_3393d0:
    // 0x3393d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3393d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3393d4:
    // 0x3393d4: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
label_3393d8:
    if (ctx->pc == 0x3393D8u) {
        ctx->pc = 0x3393D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393D4u;
        // 0x3393d8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3393DCu;
        goto label_3393dc;
    }
    ctx->pc = 0x3393D4u;
    {
        const bool branch_taken_0x3393d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3393d4) {
            ctx->pc = 0x3393D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3393D4u;
            // 0x3393d8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3393F8u;
            goto label_3393f8;
        }
    }
    ctx->pc = 0x3393DCu;
label_3393dc:
    // 0x3393dc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3393dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3393e0:
    // 0x3393e0: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x3393e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3393e4:
    // 0x3393e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3393e8:
    if (ctx->pc == 0x3393E8u) {
        ctx->pc = 0x3393E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393E4u;
        // 0x3393e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3393ECu;
        goto label_3393ec;
    }
    ctx->pc = 0x3393E4u;
    {
        const bool branch_taken_0x3393e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3393E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393E4u;
        // 0x3393e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3393e4) {
            ctx->pc = 0x33940Cu;
            goto label_33940c;
        }
    }
    ctx->pc = 0x3393ECu;
label_3393ec:
    // 0x3393ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_3393f0:
    if (ctx->pc == 0x3393F0u) {
        ctx->pc = 0x3393F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393ECu;
        // 0x3393f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3393F4u;
        goto label_3393f4;
    }
    ctx->pc = 0x3393ECu;
    {
        const bool branch_taken_0x3393ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3393F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393ECu;
        // 0x3393f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3393ec) {
            ctx->pc = 0x33940Cu;
            goto label_33940c;
        }
    }
    ctx->pc = 0x3393F4u;
label_3393f4:
    // 0x3393f4: 0x0  nop
    ctx->pc = 0x3393f4u;
    // NOP
label_3393f8:
    // 0x3393f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3393fc:
    if (ctx->pc == 0x3393FCu) {
        ctx->pc = 0x3393FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393F8u;
        // 0x3393fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339400u;
        goto label_339400;
    }
    ctx->pc = 0x3393F8u;
    {
        const bool branch_taken_0x3393f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3393FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393F8u;
        // 0x3393fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3393f8) {
            ctx->pc = 0x33940Cu;
            goto label_33940c;
        }
    }
    ctx->pc = 0x339400u;
label_339400:
    // 0x339400: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x339400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339404:
    // 0x339404: 0x40f809  jalr        $v0
label_339408:
    if (ctx->pc == 0x339408u) {
        ctx->pc = 0x339408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339404u;
        // 0x339408: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33940Cu;
        goto label_33940c;
    }
    ctx->pc = 0x339404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33940Cu);
        ctx->pc = 0x339408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339404u;
        // 0x339408: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339404u, 0x33940Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33940Cu;
label_33940c:
    // 0x33940c: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x33940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_339410:
    // 0x339410: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x339410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_339414:
    // 0x339414: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x339414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_339418:
    // 0x339418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33941c:
    // 0x33941c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33941cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339420:
    // 0x339420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x339420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339424:
    // 0x339424: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x339424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_339428:
    // 0x339428: 0x3e00008  jr          $ra
label_33942c:
    if (ctx->pc == 0x33942Cu) {
        ctx->pc = 0x33942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339428u;
        // 0x33942c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339430u;
        goto label_fallthrough_0x339428;
    }
    ctx->pc = 0x339428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339428u;
        // 0x33942c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339428:
    ctx->pc = 0x339430u;
}

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

// Function: create
// Address: 0x2ba300 - 0x2ba3f0
void create_0x2ba300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("create_0x2ba300");
#endif

    switch (ctx->pc) {
        case 0x2ba300u: goto label_2ba300;
        case 0x2ba304u: goto label_2ba304;
        case 0x2ba308u: goto label_2ba308;
        case 0x2ba30cu: goto label_2ba30c;
        case 0x2ba310u: goto label_2ba310;
        case 0x2ba314u: goto label_2ba314;
        case 0x2ba318u: goto label_2ba318;
        case 0x2ba31cu: goto label_2ba31c;
        case 0x2ba320u: goto label_2ba320;
        case 0x2ba324u: goto label_2ba324;
        case 0x2ba328u: goto label_2ba328;
        case 0x2ba32cu: goto label_2ba32c;
        case 0x2ba330u: goto label_2ba330;
        case 0x2ba334u: goto label_2ba334;
        case 0x2ba338u: goto label_2ba338;
        case 0x2ba33cu: goto label_2ba33c;
        case 0x2ba340u: goto label_2ba340;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba348u: goto label_2ba348;
        case 0x2ba34cu: goto label_2ba34c;
        case 0x2ba350u: goto label_2ba350;
        case 0x2ba354u: goto label_2ba354;
        case 0x2ba358u: goto label_2ba358;
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba360u: goto label_2ba360;
        case 0x2ba364u: goto label_2ba364;
        case 0x2ba368u: goto label_2ba368;
        case 0x2ba36cu: goto label_2ba36c;
        case 0x2ba370u: goto label_2ba370;
        case 0x2ba374u: goto label_2ba374;
        case 0x2ba378u: goto label_2ba378;
        case 0x2ba37cu: goto label_2ba37c;
        case 0x2ba380u: goto label_2ba380;
        case 0x2ba384u: goto label_2ba384;
        case 0x2ba388u: goto label_2ba388;
        case 0x2ba38cu: goto label_2ba38c;
        case 0x2ba390u: goto label_2ba390;
        case 0x2ba394u: goto label_2ba394;
        case 0x2ba398u: goto label_2ba398;
        case 0x2ba39cu: goto label_2ba39c;
        case 0x2ba3a0u: goto label_2ba3a0;
        case 0x2ba3a4u: goto label_2ba3a4;
        case 0x2ba3a8u: goto label_2ba3a8;
        case 0x2ba3acu: goto label_2ba3ac;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3b4u: goto label_2ba3b4;
        case 0x2ba3b8u: goto label_2ba3b8;
        case 0x2ba3bcu: goto label_2ba3bc;
        case 0x2ba3c0u: goto label_2ba3c0;
        case 0x2ba3c4u: goto label_2ba3c4;
        case 0x2ba3c8u: goto label_2ba3c8;
        case 0x2ba3ccu: goto label_2ba3cc;
        case 0x2ba3d0u: goto label_2ba3d0;
        case 0x2ba3d4u: goto label_2ba3d4;
        case 0x2ba3d8u: goto label_2ba3d8;
        case 0x2ba3dcu: goto label_2ba3dc;
        case 0x2ba3e0u: goto label_2ba3e0;
        case 0x2ba3e4u: goto label_2ba3e4;
        case 0x2ba3e8u: goto label_2ba3e8;
        case 0x2ba3ecu: goto label_2ba3ec;
        default: break;
    }

    ctx->pc = 0x2ba300u;

label_2ba300:
    // 0x2ba300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ba300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ba304:
    // 0x2ba304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ba304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba308:
    // 0x2ba308: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ba308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ba30c:
    // 0x2ba30c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ba30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ba310:
    // 0x2ba310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba314:
    // 0x2ba314: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ba314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ba318:
    // 0x2ba318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba31c:
    // 0x2ba31c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ba31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ba320:
    // 0x2ba320: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2ba324:
    if (ctx->pc == 0x2BA324u) {
        ctx->pc = 0x2BA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA320u;
        // 0x2ba324: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA328u;
        goto label_2ba328;
    }
    ctx->pc = 0x2BA320u;
    {
        const bool branch_taken_0x2ba320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA320u;
        // 0x2ba324: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba320) {
            ctx->pc = 0x2BA3D0u;
            goto label_2ba3d0;
        }
    }
    ctx->pc = 0x2BA328u;
label_2ba328:
    // 0x2ba328: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2ba328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ba32c:
    // 0x2ba32c: 0x0  nop
    ctx->pc = 0x2ba32cu;
    // NOP
label_2ba330:
    // 0x2ba330: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba334:
    // 0x2ba334: 0xc71818  mult        $v1, $a2, $a3
    ctx->pc = 0x2ba334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2ba338:
    // 0x2ba338: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x2ba338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2ba33c:
    // 0x2ba33c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ba33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ba340:
    // 0x2ba340: 0x30420603  andi        $v0, $v0, 0x603
    ctx->pc = 0x2ba340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1539);
label_2ba344:
    // 0x2ba344: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2ba348:
    if (ctx->pc == 0x2BA348u) {
        ctx->pc = 0x2BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA344u;
        // 0x2ba348: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA34Cu;
        goto label_2ba34c;
    }
    ctx->pc = 0x2BA344u;
    {
        const bool branch_taken_0x2ba344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba344) {
            ctx->pc = 0x2BA348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA344u;
            // 0x2ba348: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA3C0u;
            goto label_2ba3c0;
        }
    }
    ctx->pc = 0x2BA34Cu;
label_2ba34c:
    // 0x2ba34c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2ba34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ba350:
    // 0x2ba350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba354:
    // 0x2ba354: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x2ba354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_2ba358:
    // 0x2ba358: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2ba358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2ba35c:
    // 0x2ba35c: 0x40f809  jalr        $v0
label_2ba360:
    if (ctx->pc == 0x2BA360u) {
        ctx->pc = 0x2BA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA35Cu;
        // 0x2ba360: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA364u;
        goto label_2ba364;
    }
    ctx->pc = 0x2BA35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BA364u);
        ctx->pc = 0x2BA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA35Cu;
        // 0x2ba360: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA35Cu, 0x2BA364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA364u;
label_2ba364:
    // 0x2ba364: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2ba364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ba368:
    // 0x2ba368: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ba368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba36c:
    // 0x2ba36c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba370:
    // 0x2ba370: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x2ba370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_2ba374:
    // 0x2ba374: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2ba374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2ba378:
    // 0x2ba378: 0x40f809  jalr        $v0
label_2ba37c:
    if (ctx->pc == 0x2BA37Cu) {
        ctx->pc = 0x2BA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA378u;
        // 0x2ba37c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA380u;
        goto label_2ba380;
    }
    ctx->pc = 0x2BA378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BA380u);
        ctx->pc = 0x2BA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA378u;
        // 0x2ba37c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA378u, 0x2BA380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA380u;
label_2ba380:
    // 0x2ba380: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2ba384:
    if (ctx->pc == 0x2BA384u) {
        ctx->pc = 0x2BA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA380u;
        // 0x2ba384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA388u;
        goto label_2ba388;
    }
    ctx->pc = 0x2BA380u;
    {
        const bool branch_taken_0x2ba380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA380u;
        // 0x2ba384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba380) {
            ctx->pc = 0x2BA3D4u;
            goto label_2ba3d4;
        }
    }
    ctx->pc = 0x2BA388u;
label_2ba388:
    // 0x2ba388: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2ba388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ba38c:
    // 0x2ba38c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2ba390:
    if (ctx->pc == 0x2BA390u) {
        ctx->pc = 0x2BA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA38Cu;
        // 0x2ba390: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA394u;
        goto label_2ba394;
    }
    ctx->pc = 0x2BA38Cu;
    {
        const bool branch_taken_0x2ba38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA38Cu;
        // 0x2ba390: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba38c) {
            ctx->pc = 0x2BA3B0u;
            goto label_2ba3b0;
        }
    }
    ctx->pc = 0x2BA394u;
label_2ba394:
    // 0x2ba394: 0x0  nop
    ctx->pc = 0x2ba394u;
    // NOP
label_2ba398:
    // 0x2ba398: 0x5050000e  beql        $v0, $s0, . + 4 + (0xE << 2)
label_2ba39c:
    if (ctx->pc == 0x2BA39Cu) {
        ctx->pc = 0x2BA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA398u;
        // 0x2ba39c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3A0u;
        goto label_2ba3a0;
    }
    ctx->pc = 0x2BA398u;
    {
        const bool branch_taken_0x2ba398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ba398) {
            ctx->pc = 0x2BA39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA398u;
            // 0x2ba39c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA3D4u;
            goto label_2ba3d4;
        }
    }
    ctx->pc = 0x2BA3A0u;
label_2ba3a0:
    // 0x2ba3a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ba3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ba3a4:
    // 0x2ba3a4: 0x0  nop
    ctx->pc = 0x2ba3a4u;
    // NOP
label_2ba3a8:
    // 0x2ba3a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2ba3ac:
    if (ctx->pc == 0x2BA3ACu) {
        ctx->pc = 0x2BA3B0u;
        goto label_2ba3b0;
    }
    ctx->pc = 0x2BA3A8u;
    {
        const bool branch_taken_0x2ba3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3a8) {
            ctx->pc = 0x2BA398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba398;
        }
    }
    ctx->pc = 0x2BA3B0u;
label_2ba3b0:
    // 0x2ba3b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2ba3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2ba3b4:
    // 0x2ba3b4: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x2ba3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_2ba3b8:
    // 0x2ba3b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ba3bc:
    if (ctx->pc == 0x2BA3BCu) {
        ctx->pc = 0x2BA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3B8u;
        // 0x2ba3bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3C0u;
        goto label_2ba3c0;
    }
    ctx->pc = 0x2BA3B8u;
    {
        const bool branch_taken_0x2ba3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3B8u;
        // 0x2ba3bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3b8) {
            ctx->pc = 0x2BA3D4u;
            goto label_2ba3d4;
        }
    }
    ctx->pc = 0x2BA3C0u;
label_2ba3c0:
    // 0x2ba3c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ba3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2ba3c4:
    // 0x2ba3c4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2ba3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ba3c8:
    // 0x2ba3c8: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
label_2ba3cc:
    if (ctx->pc == 0x2BA3CCu) {
        ctx->pc = 0x2BA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3C8u;
        // 0x2ba3cc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3D0u;
        goto label_2ba3d0;
    }
    ctx->pc = 0x2BA3C8u;
    {
        const bool branch_taken_0x2ba3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3c8) {
            ctx->pc = 0x2BA3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA3C8u;
            // 0x2ba3cc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba330;
        }
    }
    ctx->pc = 0x2BA3D0u;
label_2ba3d0:
    // 0x2ba3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ba3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba3d4:
    // 0x2ba3d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ba3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ba3d8:
    // 0x2ba3d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ba3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba3dc:
    // 0x2ba3dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ba3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba3e0:
    // 0x2ba3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba3e4:
    // 0x2ba3e4: 0x3e00008  jr          $ra
label_2ba3e8:
    if (ctx->pc == 0x2BA3E8u) {
        ctx->pc = 0x2BA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E4u;
        // 0x2ba3e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3ECu;
        goto label_2ba3ec;
    }
    ctx->pc = 0x2BA3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3E4u;
        // 0x2ba3e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA3ECu;
label_2ba3ec:
    // 0x2ba3ec: 0x0  nop
    ctx->pc = 0x2ba3ecu;
    // NOP
    ctx->pc = 0x2ba3f0u;
}

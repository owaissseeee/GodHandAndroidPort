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

// Function: func_003944E8
// Address: 0x3944e8 - 0x3945c0
void func_003944E8_0x3944e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003944E8_0x3944e8");
#endif

    switch (ctx->pc) {
        case 0x394520u: goto label_394520;
        case 0x394530u: goto label_394530;
        case 0x394558u: goto label_394558;
        case 0x394598u: goto label_394598;
        default: break;
    }

    ctx->pc = 0x3944e8u;

    // 0x3944e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3944e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3944ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3944ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3944f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3944f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3944f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3944f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3944f8: 0x8c52852c  lw          $s2, -0x7AD4($v0)
    ctx->pc = 0x3944f8u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3F852Cu));
    // 0x3944fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3944fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394500: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x394500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x394504: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x394504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x394508: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x394508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x39450c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x39450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x394510: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x394510u;
    {
        const bool branch_taken_0x394510 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x394514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394510u;
        // 0x394514: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394510) {
            ctx->pc = 0x394590u;
            goto label_394590;
        }
    }
    ctx->pc = 0x394518u;
    // 0x394518: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x394518u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x39451c: 0x0  nop
    ctx->pc = 0x39451cu;
    // NOP
label_394520:
    // 0x394520: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x394520u;
    {
        const bool branch_taken_0x394520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394520u;
        // 0x394524: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394520) {
            ctx->pc = 0x394584u;
            goto label_394584;
        }
    }
    ctx->pc = 0x394528u;
    // 0x394528: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x394528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39452c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x39452cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_394530:
    // 0x394530: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x394530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x394534: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x394534u;
    {
        const bool branch_taken_0x394534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394534) {
            ctx->pc = 0x394538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394534u;
            // 0x394538: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x39453Cu;
    // 0x39453c: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x39453cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x394540: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x394540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x394544: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x394544u;
    {
        const bool branch_taken_0x394544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x394544) {
            ctx->pc = 0x394548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394544u;
            // 0x394548: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x39454Cu;
    // 0x39454c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394550: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x394550u;
    SET_GPR_U32(ctx, 31, 0x394558u);
    ctx->pc = 0x394554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394550u;
    // 0x394554: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x394550u, 0x394558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394558u;
label_394558:
    // 0x394558: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x394558u;
    {
        const bool branch_taken_0x394558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394558) {
            ctx->pc = 0x39455Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394558u;
            // 0x39455c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39457Cu;
            goto label_39457c;
        }
    }
    ctx->pc = 0x394560u;
    // 0x394560: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x394560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x394564: 0x5054000c  beql        $v0, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x394564u;
    {
        const bool branch_taken_0x394564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x394564) {
            ctx->pc = 0x394568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394564u;
            // 0x394568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394598u;
            goto label_394598;
        }
    }
    ctx->pc = 0x39456Cu;
    // 0x39456c: 0x54550008  bnel        $v0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x39456Cu;
    {
        const bool branch_taken_0x39456c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x39456c) {
            ctx->pc = 0x394570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39456Cu;
            // 0x394570: 0xa200000b  sb          $zero, 0xB($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394590u;
            goto label_394590;
        }
    }
    ctx->pc = 0x394574u;
    // 0x394574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x394574u;
    {
        const bool branch_taken_0x394574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394574u;
        // 0x394578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394574) {
            ctx->pc = 0x394598u;
            goto label_394598;
        }
    }
    ctx->pc = 0x39457Cu;
label_39457c:
    // 0x39457c: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x39457Cu;
    {
        const bool branch_taken_0x39457c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x394580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39457Cu;
        // 0x394580: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39457c) {
            ctx->pc = 0x394530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394530;
        }
    }
    ctx->pc = 0x394584u;
label_394584:
    // 0x394584: 0x8e520030  lw          $s2, 0x30($s2)
    ctx->pc = 0x394584u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x394588: 0x5640ffe5  bnel        $s2, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x394588u;
    {
        const bool branch_taken_0x394588 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x394588) {
            ctx->pc = 0x39458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394588u;
            // 0x39458c: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394520;
        }
    }
    ctx->pc = 0x394590u;
label_394590:
    // 0x394590: 0xc0e50f4  jal         func_3943D0
    ctx->pc = 0x394590u;
    SET_GPR_U32(ctx, 31, 0x394598u);
    ctx->pc = 0x394594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394590u;
    // 0x394594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3943D0u, 0x394590u, 0x394598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394598u;
label_394598:
    // 0x394598: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x394598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39459c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39459cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3945a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3945a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3945a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3945a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3945a8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3945a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3945ac: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3945acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3945b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3945b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3945b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3945B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3945B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945B4u;
        // 0x3945b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3945B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3945BCu;
    // 0x3945bc: 0x0  nop
    ctx->pc = 0x3945bcu;
    // NOP
    ctx->pc = 0x3945c0u;
}

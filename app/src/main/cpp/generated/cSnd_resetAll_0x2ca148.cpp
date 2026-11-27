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

// Function: cSnd_resetAll
// Address: 0x2ca148 - 0x2ca220
void cSnd_resetAll_0x2ca148(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_resetAll_0x2ca148");
#endif

    if (__builtin_expect(ctx->pc != 0x2ca148u, 0)) {
        switch (ctx->pc) {
            case 0x2ca168u: goto label_2ca168;
            case 0x2ca170u: goto label_2ca170;
            case 0x2ca17cu: goto label_2ca17c;
            case 0x2ca190u: goto label_2ca190;
            case 0x2ca198u: goto label_2ca198;
            case 0x2ca1a4u: goto label_2ca1a4;
            case 0x2ca1c0u: goto label_2ca1c0;
            case 0x2ca1c8u: goto label_2ca1c8;
            case 0x2ca1d4u: goto label_2ca1d4;
            case 0x2ca1e8u: goto label_2ca1e8;
            case 0x2ca1f0u: goto label_2ca1f0;
            case 0x2ca1fcu: goto label_2ca1fc;
            default: break;
        }
    }


    // 0x2ca148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca14c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca150: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca154: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca15c: 0x802d  daddu       $s0, $zero, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca160: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2ca160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2ca164: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca168:
    // 0x2ca168: 0xc0b3132  jal         func_2CC4C8
    SET_GPR_U32(ctx, 31, 0x2CA170u);
    ctx->pc = 0x2CA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA168u;
    // 0x2ca16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_GetVoice_0x2cc4c8, 0x2cc4c8u, 0x2ca170u)) {
        return;
    }
label_2ca170:
    // 0x2ca170: 0x26100001  addiu       $s0, $s0, 0x1
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ca174: 0xc0b3692  jal         func_2CDA48
    SET_GPR_U32(ctx, 31, 0x2CA17Cu);
    ctx->pc = 0x2CA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA174u;
    // 0x2ca178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSndSeVoice_Init_0x2cda48, 0x2cda48u, 0x2ca17cu)) {
        return;
    }
label_2ca17c:
    // 0x2ca17c: 0x2a020040  slti        $v0, $s0, 0x40
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2ca180: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA180u;
    {
        const bool branch_taken_0x2ca180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA180u;
        // 0x2ca184: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca180) {
            ctx->pc = 0x2CA168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca168;
        }
    }
    // 0x2ca188: 0x802d  daddu       $s0, $zero, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca18c: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca190:
    // 0x2ca190: 0xc0b312e  jal         func_2CC4B8
    SET_GPR_U32(ctx, 31, 0x2CA198u);
    ctx->pc = 0x2CA194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA190u;
    // 0x2ca194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_GetSeData_0x2cc4b8, 0x2cc4b8u, 0x2ca198u)) {
        return;
    }
label_2ca198:
    // 0x2ca198: 0x26100001  addiu       $s0, $s0, 0x1
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ca19c: 0xc0b3cc4  jal         func_2CF310
    SET_GPR_U32(ctx, 31, 0x2CA1A4u);
    ctx->pc = 0x2CA1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA19Cu;
    // 0x2ca1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSeData_Release_0x2cf310, 0x2cf310u, 0x2ca1a4u)) {
        return;
    }
label_2ca1a4:
    // 0x2ca1a4: 0x2a020034  slti        $v0, $s0, 0x34
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x2ca1a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA1A8u;
    {
        const bool branch_taken_0x2ca1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1A8u;
        // 0x2ca1ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1a8) {
            ctx->pc = 0x2CA190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca190;
        }
    }
    // 0x2ca1b0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2ca1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2ca1b4: 0x802d  daddu       $s0, $zero, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1b8: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1bc: 0x0  nop
    // NOP
label_2ca1c0:
    // 0x2ca1c0: 0xc0b4b6c  jal         func_2D2DB0
    SET_GPR_U32(ctx, 31, 0x2CA1C8u);
    ctx->pc = 0x2CA1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1C0u;
    // 0x2ca1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002D2DB0_0x2d2db0, 0x2d2db0u, 0x2ca1c8u)) {
        return;
    }
label_2ca1c8:
    // 0x2ca1c8: 0x26100001  addiu       $s0, $s0, 0x1
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ca1cc: 0xc0b315e  jal         func_2CC578
    SET_GPR_U32(ctx, 31, 0x2CA1D4u);
    ctx->pc = 0x2CA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1CCu;
    // 0x2ca1d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSndBgmNode_Init_0x2cc578, 0x2cc578u, 0x2ca1d4u)) {
        return;
    }
label_2ca1d4:
    // 0x2ca1d4: 0x2a020010  slti        $v0, $s0, 0x10
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ca1d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA1D8u;
    {
        const bool branch_taken_0x2ca1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1D8u;
        // 0x2ca1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1d8) {
            ctx->pc = 0x2CA1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca1c0;
        }
    }
    // 0x2ca1e0: 0x802d  daddu       $s0, $zero, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1e4: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca1e8:
    // 0x2ca1e8: 0xc0b4b66  jal         func_2D2D98
    SET_GPR_U32(ctx, 31, 0x2CA1F0u);
    ctx->pc = 0x2CA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1E8u;
    // 0x2ca1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_GetBgmData_0x2d2d98, 0x2d2d98u, 0x2ca1f0u)) {
        return;
    }
label_2ca1f0:
    // 0x2ca1f0: 0x26100001  addiu       $s0, $s0, 0x1
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ca1f4: 0xc0b3fe4  jal         func_2CFF90
    SET_GPR_U32(ctx, 31, 0x2CA1FCu);
    ctx->pc = 0x2CA1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA1F4u;
    // 0x2ca1f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cBgmData_Reset_0x2cff90, 0x2cff90u, 0x2ca1fcu)) {
        return;
    }
label_2ca1fc:
    // 0x2ca1fc: 0x2a020002  slti        $v0, $s0, 0x2
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ca200: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA200u;
    {
        const bool branch_taken_0x2ca200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA200u;
        // 0x2ca204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca200) {
            ctx->pc = 0x2CA1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca1e8;
        }
    }
    // 0x2ca208: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca20c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca214: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA214u;
        // 0x2ca218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2ca21c: 0x0  nop
    // NOP
    ctx->pc = 0x2ca220u;
}
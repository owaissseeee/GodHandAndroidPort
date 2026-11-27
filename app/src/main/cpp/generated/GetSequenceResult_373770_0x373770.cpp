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

// Function: GetSequenceResult_373770
// Address: 0x373770 - 0x3737c8
void GetSequenceResult_373770_0x373770(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSequenceResult_373770_0x373770");
#endif

    if (__builtin_expect(ctx->pc != 0x373770u, 0)) {
        switch (ctx->pc) {
            case 0x373784u: goto label_373784;
            case 0x373794u: goto label_373794;
            case 0x3737a8u: goto label_3737a8;
            case 0x3737b8u: goto label_3737b8;
            default: break;
        }
    }


    // 0x373770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373774: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x373774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x373778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37377c: 0xc0dce94  jal         func_373A50
    SET_GPR_U32(ctx, 31, 0x373784u);
    ctx->pc = 0x373780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37377Cu;
    // 0x373780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00373A50_0x373a50, 0x373a50u, 0x373784u)) {
        return;
    }
label_373784:
    // 0x373784: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x373784u;
    {
        const bool branch_taken_0x373784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373784u;
        // 0x373788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373784) {
            ctx->pc = 0x3737B8u;
            goto label_3737b8;
        }
    }
    // 0x37378c: 0xc0dcec8  jal         func_373B20
    SET_GPR_U32(ctx, 31, 0x373794u);
    ctx->pc = 0x373790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37378Cu;
    // 0x373790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00373B20_0x373b20, 0x373b20u, 0x373794u)) {
        return;
    }
label_373794:
    // 0x373794: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373798: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373798u;
    {
        const bool branch_taken_0x373798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x373798) {
            ctx->pc = 0x3737B0u;
            goto label_3737b0;
        }
    }
    // 0x3737a0: 0xc0dd22a  jal         func_3748A8
    SET_GPR_U32(ctx, 31, 0x3737A8u);
    ctx->pc = 0x3737A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737A0u;
    // 0x3737a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003748A8_0x3748a8, 0x3748a8u, 0x3737a8u)) {
        return;
    }
label_3737a8:
    // 0x3737a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3737A8u;
    {
        const bool branch_taken_0x3737a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3737ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3737A8u;
        // 0x3737ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3737a8) {
            ctx->pc = 0x3737BCu;
            goto label_3737bc;
        }
    }
label_3737b0:
    // 0x3737b0: 0xc0dd05c  jal         func_374170
    SET_GPR_U32(ctx, 31, 0x3737B8u);
    ctx->pc = 0x3737B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737B0u;
    // 0x3737b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00374170_0x374170, 0x374170u, 0x3737b8u)) {
        return;
    }
label_3737b8:
    // 0x3737b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3737b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3737bc:
    // 0x3737bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3737bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3737c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3737C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3737C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3737C0u;
        // 0x3737c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3737C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3737C8u;
}
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

// Function: func_00292048
// Address: 0x292048 - 0x2920b0
void func_00292048_0x292048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00292048_0x292048");
#endif

    switch (ctx->pc) {
        case 0x292054u: goto label_292054;
        default: break;
    }

    ctx->pc = 0x292048u;

    // 0x292048: 0x28a20900  slti        $v0, $a1, 0x900
    ctx->pc = 0x292048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2304) ? 1 : 0);
    // 0x29204c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29204Cu;
    {
        const bool branch_taken_0x29204c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29204Cu;
        // 0x292050: 0x28a20940  slti        $v0, $a1, 0x940 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2368) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29204c) {
            ctx->pc = 0x29205Cu;
            goto label_29205c;
        }
    }
    ctx->pc = 0x292054u;
label_292054:
    // 0x292054: 0x3e00008  jr          $ra
    ctx->pc = 0x292054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292054u;
        // 0x292058: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29205Cu;
label_29205c:
    // 0x29205c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29205Cu;
    {
        const bool branch_taken_0x29205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29205Cu;
        // 0x292060: 0x28a20a00  slti        $v0, $a1, 0xA00 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2560) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29205c) {
            ctx->pc = 0x29206Cu;
            goto label_29206c;
        }
    }
    ctx->pc = 0x292064u;
    // 0x292064: 0x3e00008  jr          $ra
    ctx->pc = 0x292064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292064u;
        // 0x292068: 0x240203da  addiu       $v0, $zero, 0x3DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 986));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29206Cu;
label_29206c:
    // 0x29206c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29206Cu;
    {
        const bool branch_taken_0x29206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29206Cu;
        // 0x292070: 0x28a40b00  slti        $a0, $a1, 0xB00 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2816) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29206c) {
            ctx->pc = 0x2920A0u;
            goto label_2920a0;
        }
    }
    ctx->pc = 0x292074u;
    // 0x292074: 0x240209c0  addiu       $v0, $zero, 0x9C0
    ctx->pc = 0x292074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
    // 0x292078: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292078u;
    {
        const bool branch_taken_0x292078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292078u;
        // 0x29207c: 0x240209c2  addiu       $v0, $zero, 0x9C2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2498));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292078) {
            ctx->pc = 0x292090u;
            goto label_292090;
        }
    }
    ctx->pc = 0x292080u;
    // 0x292080: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292080u;
    {
        const bool branch_taken_0x292080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x292080) {
            ctx->pc = 0x292098u;
            goto label_292098;
        }
    }
    ctx->pc = 0x292088u;
    // 0x292088: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x292088u;
    {
        const bool branch_taken_0x292088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292088) {
            ctx->pc = 0x292054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292054;
        }
    }
    ctx->pc = 0x292090u;
label_292090:
    // 0x292090: 0x3e00008  jr          $ra
    ctx->pc = 0x292090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292090u;
        // 0x292094: 0x240209c0  addiu       $v0, $zero, 0x9C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292098u;
label_292098:
    // 0x292098: 0x3e00008  jr          $ra
    ctx->pc = 0x292098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292098u;
        // 0x29209c: 0x240203dc  addiu       $v0, $zero, 0x3DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 988));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2920A0u;
label_2920a0:
    // 0x2920a0: 0x240303db  addiu       $v1, $zero, 0x3DB
    ctx->pc = 0x2920a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 987));
    // 0x2920a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2920a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2920a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2920A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2920ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920A8u;
        // 0x2920ac: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2920A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2920B0u;
}

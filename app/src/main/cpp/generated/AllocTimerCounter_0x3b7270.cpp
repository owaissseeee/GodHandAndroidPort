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

// Function: AllocTimerCounter
// Address: 0x3b7270 - 0x3b72d0
void AllocTimerCounter_0x3b7270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocTimerCounter_0x3b7270");
#endif

    switch (ctx->pc) {
        case 0x3b7288u: goto label_3b7288;
        case 0x3b7290u: goto label_3b7290;
        case 0x3b72a0u: goto label_3b72a0;
        default: break;
    }

    ctx->pc = 0x3b7270u;

    // 0x3b7270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b7270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b7274: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b7274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b7278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b727c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b7280: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B7280u;
    SET_GPR_U32(ctx, 31, 0x3B7288u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B7280u, 0x3B7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7288u;
label_3b7288:
    // 0x3b7288: 0xc0edc80  jal         func_3B7200
    ctx->pc = 0x3B7288u;
    SET_GPR_U32(ctx, 31, 0x3B7290u);
    ctx->pc = 0x3B728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7288u;
    // 0x3b728c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7200u, 0x3B7288u, 0x3B7290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7290u;
label_3b7290:
    // 0x3b7290: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7290u;
    {
        const bool branch_taken_0x3b7290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7290u;
        // 0x3b7294: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7290) {
            ctx->pc = 0x3B72A0u;
            goto label_3b72a0;
        }
    }
    ctx->pc = 0x3B7298u;
    // 0x3b7298: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B7298u;
    SET_GPR_U32(ctx, 31, 0x3B72A0u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B7298u, 0x3B72A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B72A0u;
label_3b72a0:
    // 0x3b72a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b72a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b72a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b72a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b72a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b72a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b72ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b72acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b72b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B72B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B72B0u;
        // 0x3b72b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B72B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B72B8u;
    // 0x3b72b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3b72b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b72bc: 0x0  nop
    ctx->pc = 0x3b72bcu;
    // NOP
    // 0x3b72c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b72c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b72c4: 0x0  nop
    ctx->pc = 0x3b72c4u;
    // NOP
    // 0x3b72c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3b72c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b72cc: 0x0  nop
    ctx->pc = 0x3b72ccu;
    // NOP
    ctx->pc = 0x3b72d0u;
}

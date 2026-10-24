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

// Function: UpdateGlobalPtrWithParam_3A7CC0
// Address: 0x3a7cc0 - 0x3a7d08
void UpdateGlobalPtrWithParam_3A7CC0_0x3a7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateGlobalPtrWithParam_3A7CC0_0x3a7cc0");
#endif

    switch (ctx->pc) {
        case 0x3a7ce0u: goto label_3a7ce0;
        case 0x3a7cecu: goto label_3a7cec;
        case 0x3a7cf4u: goto label_3a7cf4;
        default: break;
    }

    ctx->pc = 0x3a7cc0u;

    // 0x3a7cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7cc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a7cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a7cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a7cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a7ccc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3a7cccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3a7cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a7cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7cd8: 0xc0ea012  jal         func_3A8048
    ctx->pc = 0x3A7CD8u;
    SET_GPR_U32(ctx, 31, 0x3A7CE0u);
    ctx->pc = 0x3A7CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CD8u;
    // 0x3a7cdc: 0x8e04a62c  lw          $a0, -0x59D4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8048u, 0x3A7CD8u, 0x3A7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CE0u;
label_3a7ce0:
    // 0x3a7ce0: 0x8e04a62c  lw          $a0, -0x59D4($s0)
    ctx->pc = 0x3a7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944300)));
    // 0x3a7ce4: 0xc0eb28a  jal         func_3ACA28
    ctx->pc = 0x3A7CE4u;
    SET_GPR_U32(ctx, 31, 0x3A7CECu);
    ctx->pc = 0x3A7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CE4u;
    // 0x3a7ce8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA28u, 0x3A7CE4u, 0x3A7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CECu;
label_3a7cec:
    // 0x3a7cec: 0xc0ea02a  jal         func_3A80A8
    ctx->pc = 0x3A7CECu;
    SET_GPR_U32(ctx, 31, 0x3A7CF4u);
    ctx->pc = 0x3A7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CECu;
    // 0x3a7cf0: 0x8e04a62c  lw          $a0, -0x59D4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80A8u, 0x3A7CECu, 0x3A7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CF4u;
label_3a7cf4:
    // 0x3a7cf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a7cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a7cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7d00: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D00u;
        // 0x3a7d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7D08u;
}

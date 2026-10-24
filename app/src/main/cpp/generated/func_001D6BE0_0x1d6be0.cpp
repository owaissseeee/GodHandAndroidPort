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

// Function: func_001D6BE0
// Address: 0x1d6be0 - 0x1d6c28
void func_001D6BE0_0x1d6be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6BE0_0x1d6be0");
#endif

    switch (ctx->pc) {
        case 0x1d6c04u: goto label_1d6c04;
        case 0x1d6c14u: goto label_1d6c14;
        default: break;
    }

    ctx->pc = 0x1d6be0u;

    // 0x1d6be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6be4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6bf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d6bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6bf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6bfc: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6BFCu;
    SET_GPR_U32(ctx, 31, 0x1D6C04u);
    ctx->pc = 0x1D6C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BFCu;
    // 0x1d6c00: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6BFCu, 0x1D6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C04u;
label_1d6c04:
    // 0x1d6c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c0c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C14u);
    ctx->pc = 0x1D6C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C0Cu;
    // 0x1d6c10: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6C0Cu, 0x1D6C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C14u;
label_1d6c14:
    // 0x1d6c14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C20u;
        // 0x1d6c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6C28u;
}

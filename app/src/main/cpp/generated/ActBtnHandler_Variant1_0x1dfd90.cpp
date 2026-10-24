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

// Function: ActBtnHandler_Variant1
// Address: 0x1dfd90 - 0x1dfde0
void ActBtnHandler_Variant1_0x1dfd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActBtnHandler_Variant1_0x1dfd90");
#endif

    switch (ctx->pc) {
        case 0x1dfdb0u: goto label_1dfdb0;
        case 0x1dfdccu: goto label_1dfdcc;
        default: break;
    }

    ctx->pc = 0x1dfd90u;

    // 0x1dfd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfd94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dfd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dfd98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfd9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfda0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1dfda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1dfda4: 0x9605048c  lhu         $a1, 0x48C($s0)
    ctx->pc = 0x1dfda4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1164)));
    // 0x1dfda8: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x1DFDA8u;
    SET_GPR_U32(ctx, 31, 0x1DFDB0u);
    ctx->pc = 0x1DFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDA8u;
    // 0x1dfdac: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x1DFDA8u, 0x1DFDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDB0u;
label_1dfdb0:
    // 0x1dfdb0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1dfdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1dfdb4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dfdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dfdb8: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x1dfdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1dfdbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dfdbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfdc0: 0x24a5fde0  addiu       $a1, $a1, -0x220
    ctx->pc = 0x1dfdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966752));
    // 0x1dfdc4: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x1DFDC4u;
    SET_GPR_U32(ctx, 31, 0x1DFDCCu);
    ctx->pc = 0x1DFDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDC4u;
    // 0x1dfdc8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x1DFDC4u, 0x1DFDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDCCu;
label_1dfdcc:
    // 0x1dfdcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dfdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfdd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDD4u;
        // 0x1dfdd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFDDCu;
    // 0x1dfddc: 0x0  nop
    ctx->pc = 0x1dfddcu;
    // NOP
    ctx->pc = 0x1dfde0u;
}

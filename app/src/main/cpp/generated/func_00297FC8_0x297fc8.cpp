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

// Function: func_00297FC8
// Address: 0x297fc8 - 0x298000
void func_00297FC8_0x297fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297FC8_0x297fc8");
#endif

    switch (ctx->pc) {
        case 0x297fe0u: goto label_297fe0;
        case 0x297ff4u: goto label_297ff4;
        default: break;
    }

    ctx->pc = 0x297fc8u;

    // 0x297fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297fcc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297FCCu;
    {
        const bool branch_taken_0x297fcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FCCu;
        // 0x297fd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297fcc) {
            ctx->pc = 0x297FE8u;
            goto label_297fe8;
        }
    }
    ctx->pc = 0x297FD4u;
    // 0x297fd4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297fd8: 0xc0a5fee  jal         func_297FB8
    ctx->pc = 0x297FD8u;
    SET_GPR_U32(ctx, 31, 0x297FE0u);
    ctx->pc = 0x297FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FD8u;
    // 0x297fdc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FB8u, 0x297FD8u, 0x297FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FE0u;
label_297fe0:
    // 0x297fe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297FE0u;
    {
        const bool branch_taken_0x297fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FE0u;
        // 0x297fe4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297fe0) {
            ctx->pc = 0x297FF8u;
            goto label_297ff8;
        }
    }
    ctx->pc = 0x297FE8u;
label_297fe8:
    // 0x297fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fec: 0xc0a5fee  jal         func_297FB8
    ctx->pc = 0x297FECu;
    SET_GPR_U32(ctx, 31, 0x297FF4u);
    ctx->pc = 0x297FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FECu;
    // 0x297ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FB8u, 0x297FECu, 0x297FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FF4u;
label_297ff4:
    // 0x297ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297ff8:
    // 0x297ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x297FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FF8u;
        // 0x297ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298000u;
}

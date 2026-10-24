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

// Function: func_0016FE68
// Address: 0x16fe68 - 0x16fea0
void func_0016FE68_0x16fe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016FE68_0x16fe68");
#endif

    switch (ctx->pc) {
        case 0x16fe90u: goto label_16fe90;
        default: break;
    }

    ctx->pc = 0x16fe68u;

    // 0x16fe68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fe6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16fe6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe70: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x16fe70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x16fe74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fe78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fe7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16fe80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16fe80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe84: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16fe84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fe88: 0xc0c194a  jal         func_306528
    ctx->pc = 0x16FE88u;
    SET_GPR_U32(ctx, 31, 0x16FE90u);
    ctx->pc = 0x16FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE88u;
    // 0x16fe8c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x16FE88u, 0x16FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE90u;
label_16fe90:
    // 0x16fe90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fe94: 0x3e00008  jr          $ra
    ctx->pc = 0x16FE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE94u;
        // 0x16fe98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FE9Cu;
    // 0x16fe9c: 0x0  nop
    ctx->pc = 0x16fe9cu;
    // NOP
    ctx->pc = 0x16fea0u;
}

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

// Function: func_00345B38
// Address: 0x345b38 - 0x345b88
void func_00345B38_0x345b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345B38_0x345b38");
#endif

    switch (ctx->pc) {
        case 0x345b48u: goto label_345b48;
        case 0x345b58u: goto label_345b58;
        case 0x345b64u: goto label_345b64;
        default: break;
    }

    ctx->pc = 0x345b38u;

    // 0x345b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345b40: 0xc0d622c  jal         func_3588B0
    ctx->pc = 0x345B40u;
    SET_GPR_U32(ctx, 31, 0x345B48u);
    ctx->pc = 0x345B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345B40u;
    // 0x345b44: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3588B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3588B0u, 0x345B40u, 0x345B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B48u;
label_345b48:
    // 0x345b48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x345B48u;
    {
        const bool branch_taken_0x345b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B48u;
        // 0x345b4c: 0x2404fecd  addiu       $a0, $zero, -0x133 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966989));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b48) {
            ctx->pc = 0x345B68u;
            goto label_345b68;
        }
    }
    ctx->pc = 0x345B50u;
    // 0x345b50: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x345B50u;
    SET_GPR_U32(ctx, 31, 0x345B58u);
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x345B50u, 0x345B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B58u;
label_345b58:
    // 0x345b58: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x345b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x345b5c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x345B5Cu;
    SET_GPR_U32(ctx, 31, 0x345B64u);
    ctx->pc = 0x345B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345B5Cu;
    // 0x345b60: 0x24847ea8  addiu       $a0, $a0, 0x7EA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345B5Cu, 0x345B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B64u;
label_345b64:
    // 0x345b64: 0x2402fecd  addiu       $v0, $zero, -0x133
    ctx->pc = 0x345b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966989));
label_345b68:
    // 0x345b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x345B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B6Cu;
        // 0x345b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345B74u;
    // 0x345b74: 0x0  nop
    ctx->pc = 0x345b74u;
    // NOP
    // 0x345b78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x345b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x345b7c: 0x0  nop
    ctx->pc = 0x345b7cu;
    // NOP
    // 0x345b80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x345b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x345b84: 0x0  nop
    ctx->pc = 0x345b84u;
    // NOP
    ctx->pc = 0x345b88u;
}

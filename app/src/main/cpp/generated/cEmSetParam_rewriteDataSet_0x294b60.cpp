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

// Function: cEmSetParam_rewriteDataSet
// Address: 0x294b60 - 0x294b98
void cEmSetParam_rewriteDataSet_0x294b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_rewriteDataSet_0x294b60");
#endif

    switch (ctx->pc) {
        case 0x294b88u: goto label_294b88;
        default: break;
    }

    ctx->pc = 0x294b60u;

    // 0x294b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294b64: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x294b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x294b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294b6c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x294b70: 0x8c468658  lw          $a2, -0x79A8($v0)
    ctx->pc = 0x294b70u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5E8658u));
    // 0x294b74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x294b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x294b78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x294b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x294b7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294b80: 0xc0a52e6  jal         func_294B98
    ctx->pc = 0x294B80u;
    SET_GPR_U32(ctx, 31, 0x294B88u);
    ctx->pc = 0x294B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B80u;
    // 0x294b84: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B98u, 0x294B80u, 0x294B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B88u;
label_294b88:
    // 0x294b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x294B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B8Cu;
        // 0x294b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B94u;
    // 0x294b94: 0x0  nop
    ctx->pc = 0x294b94u;
    // NOP
    ctx->pc = 0x294b98u;
}

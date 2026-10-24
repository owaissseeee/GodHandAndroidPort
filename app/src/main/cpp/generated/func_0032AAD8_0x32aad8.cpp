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

// Function: func_0032AAD8
// Address: 0x32aad8 - 0x32ab20
void func_0032AAD8_0x32aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AAD8_0x32aad8");
#endif

    switch (ctx->pc) {
        case 0x32aaf0u: goto label_32aaf0;
        default: break;
    }

    ctx->pc = 0x32aad8u;

    // 0x32aad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32aadc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32AADCu;
    {
        const bool branch_taken_0x32aadc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AADCu;
        // 0x32aae0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aadc) {
            ctx->pc = 0x32AAF8u;
            goto label_32aaf8;
        }
    }
    ctx->pc = 0x32AAE4u;
    // 0x32aae4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32aae8: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32AAE8u;
    SET_GPR_U32(ctx, 31, 0x32AAF0u);
    ctx->pc = 0x32AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAE8u;
    // 0x32aaec: 0x248422e8  addiu       $a0, $a0, 0x22E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32AAE8u, 0x32AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAF0u;
label_32aaf0:
    // 0x32aaf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32AAF0u;
    {
        const bool branch_taken_0x32aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAF0u;
        // 0x32aaf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aaf0) {
            ctx->pc = 0x32AAFCu;
            goto label_32aafc;
        }
    }
    ctx->pc = 0x32AAF8u;
label_32aaf8:
    // 0x32aaf8: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x32aaf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
label_32aafc:
    // 0x32aafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32aafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ab00: 0x3e00008  jr          $ra
    ctx->pc = 0x32AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB00u;
        // 0x32ab04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AB08u;
    // 0x32ab08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32ab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32ab0c: 0x0  nop
    ctx->pc = 0x32ab0cu;
    // NOP
    // 0x32ab10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32ab14: 0x0  nop
    ctx->pc = 0x32ab14u;
    // NOP
    // 0x32ab18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32ab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32ab1c: 0x0  nop
    ctx->pc = 0x32ab1cu;
    // NOP
    ctx->pc = 0x32ab20u;
}

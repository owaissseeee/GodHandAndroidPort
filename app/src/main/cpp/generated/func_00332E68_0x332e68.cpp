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

// Function: func_00332E68
// Address: 0x332e68 - 0x332ea0
void func_00332E68_0x332e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332E68_0x332e68");
#endif

    switch (ctx->pc) {
        case 0x332e84u: goto label_332e84;
        default: break;
    }

    ctx->pc = 0x332e68u;

    // 0x332e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x332e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x332e6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x332e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x332E70u;
    {
        const bool branch_taken_0x332e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E70u;
        // 0x332e74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e70) {
            ctx->pc = 0x332E90u;
            goto label_332e90;
        }
    }
    ctx->pc = 0x332E78u;
    // 0x332e78: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332e7c: 0xc0cca02  jal         func_332808
    ctx->pc = 0x332E7Cu;
    SET_GPR_U32(ctx, 31, 0x332E84u);
    ctx->pc = 0x332E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332E7Cu;
    // 0x332e80: 0x24a54458  addiu       $a1, $a1, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x332E7Cu, 0x332E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E84u;
label_332e84:
    // 0x332e84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x332E84u;
    {
        const bool branch_taken_0x332e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E84u;
        // 0x332e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e84) {
            ctx->pc = 0x332E94u;
            goto label_332e94;
        }
    }
    ctx->pc = 0x332E8Cu;
    // 0x332e8c: 0x0  nop
    ctx->pc = 0x332e8cu;
    // NOP
label_332e90:
    // 0x332e90: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x332e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_332e94:
    // 0x332e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332e98: 0x3e00008  jr          $ra
    ctx->pc = 0x332E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E98u;
        // 0x332e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332EA0u;
}

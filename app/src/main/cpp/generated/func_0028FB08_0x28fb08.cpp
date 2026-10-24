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

// Function: func_0028FB08
// Address: 0x28fb08 - 0x28fb38
void func_0028FB08_0x28fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028FB08_0x28fb08");
#endif

    switch (ctx->pc) {
        case 0x28fb2cu: goto label_28fb2c;
        default: break;
    }

    ctx->pc = 0x28fb08u;

    // 0x28fb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fb0c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28fb10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fb14: 0x94850640  lhu         $a1, 0x640($a0)
    ctx->pc = 0x28fb14u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x28fb18: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FB18u;
    {
        const bool branch_taken_0x28fb18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB18u;
        // 0x28fb1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb18) {
            ctx->pc = 0x28FB30u;
            goto label_28fb30;
        }
    }
    ctx->pc = 0x28FB20u;
    // 0x28fb20: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x28fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x28fb24: 0xc0afbfa  jal         func_2BEFE8
    ctx->pc = 0x28FB24u;
    SET_GPR_U32(ctx, 31, 0x28FB2Cu);
    ctx->pc = 0x28FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB24u;
    // 0x28fb28: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEFE8u, 0x28FB24u, 0x28FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB2Cu;
label_28fb2c:
    // 0x28fb2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28fb30:
    // 0x28fb30: 0x3e00008  jr          $ra
    ctx->pc = 0x28FB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB30u;
        // 0x28fb34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FB38u;
}

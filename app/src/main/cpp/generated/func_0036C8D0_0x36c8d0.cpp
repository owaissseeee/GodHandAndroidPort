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

// Function: func_0036C8D0
// Address: 0x36c8d0 - 0x36c920
void func_0036C8D0_0x36c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C8D0_0x36c8d0");
#endif

    switch (ctx->pc) {
        case 0x36c8e4u: goto label_36c8e4;
        default: break;
    }

    ctx->pc = 0x36c8d0u;

    // 0x36c8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c8dc: 0xc0db32a  jal         func_36CCA8
    ctx->pc = 0x36C8DCu;
    SET_GPR_U32(ctx, 31, 0x36C8E4u);
    ctx->pc = 0x36C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C8DCu;
    // 0x36c8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CCA8u, 0x36C8DCu, 0x36C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8E4u;
label_36c8e4:
    // 0x36c8e4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C8E4u;
    {
        const bool branch_taken_0x36c8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c8e4) {
            ctx->pc = 0x36C8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36C8E4u;
            // 0x36c8e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36C90Cu;
            goto label_36c90c;
        }
    }
    ctx->pc = 0x36C8ECu;
    // 0x36c8ec: 0x8e0203b4  lw          $v0, 0x3B4($s0)
    ctx->pc = 0x36c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x36c8f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36C8F0u;
    {
        const bool branch_taken_0x36c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C8F0u;
        // 0x36c8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c8f0) {
            ctx->pc = 0x36C908u;
            goto label_36c908;
        }
    }
    ctx->pc = 0x36C8F8u;
    // 0x36c8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c8fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c900: 0x80db3c2  j           func_36CF08
    ctx->pc = 0x36C900u;
    ctx->pc = 0x36C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C900u;
    // 0x36c904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CF08u, 0x36C900u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C908u;
label_36c908:
    // 0x36c908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36c90c:
    // 0x36c90c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c910: 0x3e00008  jr          $ra
    ctx->pc = 0x36C910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C910u;
        // 0x36c914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C918u;
    // 0x36c918: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36c91c: 0x0  nop
    ctx->pc = 0x36c91cu;
    // NOP
    ctx->pc = 0x36c920u;
}

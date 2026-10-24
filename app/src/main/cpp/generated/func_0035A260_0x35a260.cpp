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

// Function: func_0035A260
// Address: 0x35a260 - 0x35a298
void func_0035A260_0x35a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A260_0x35a260");
#endif

    ctx->pc = 0x35a260u;

    // 0x35a260: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35a260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35a264: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35a268: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35a268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35a26c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a270: 0x8c421f38  lw          $v0, 0x1F38($v0)
    ctx->pc = 0x35a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7992)));
    // 0x35a274: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A274u;
    {
        const bool branch_taken_0x35a274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a274) {
            ctx->pc = 0x35A278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A274u;
            // 0x35a278: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A288u;
            goto label_35a288;
        }
    }
    ctx->pc = 0x35A27Cu;
    // 0x35a27c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A27Cu;
        // 0x35a280: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A284u;
    // 0x35a284: 0x0  nop
    ctx->pc = 0x35a284u;
    // NOP
label_35a288:
    // 0x35a288: 0x3e00008  jr          $ra
    ctx->pc = 0x35A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A288u;
        // 0x35a28c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A290u;
    // 0x35a290: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a294: 0x0  nop
    ctx->pc = 0x35a294u;
    // NOP
    ctx->pc = 0x35a298u;
}

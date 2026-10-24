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

// Function: func_0033A468
// Address: 0x33a468 - 0x33a4c8
void func_0033A468_0x33a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A468_0x33a468");
#endif

    ctx->pc = 0x33a468u;

    // 0x33a468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a46c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A46Cu;
    {
        const bool branch_taken_0x33a46c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A46Cu;
        // 0x33a470: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a46c) {
            ctx->pc = 0x33A490u;
            goto label_33a490;
        }
    }
    ctx->pc = 0x33A474u;
    // 0x33a474: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33a478: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a480: 0x24845c48  addiu       $a0, $a0, 0x5C48
    ctx->pc = 0x33a480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23624));
    // 0x33a484: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8
    ctx->pc = 0x33a484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
    // 0x33a488: 0x80ce812  j           func_33A048
    ctx->pc = 0x33A488u;
    ctx->pc = 0x33A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A488u;
    // 0x33a48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A488u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A490u;
label_33a490:
    // 0x33a490: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x33a490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33a494: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A494u;
    {
        const bool branch_taken_0x33a494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A494u;
        // 0x33a498: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a494) {
            ctx->pc = 0x33A4B8u;
            goto label_33a4b8;
        }
    }
    ctx->pc = 0x33A49Cu;
    // 0x33a49c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33a4a0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a4a4: 0x24845c58  addiu       $a0, $a0, 0x5C58
    ctx->pc = 0x33a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23640));
    // 0x33a4a8: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x33a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
    // 0x33a4ac: 0x80ce812  j           func_33A048
    ctx->pc = 0x33A4ACu;
    ctx->pc = 0x33A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A4ACu;
    // 0x33a4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A4ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A4B4u;
    // 0x33a4b4: 0x0  nop
    ctx->pc = 0x33a4b4u;
    // NOP
label_33a4b8:
    // 0x33a4b8: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x33a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x33a4bc: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x33a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x33a4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33A4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4C0u;
        // 0x33a4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A4C8u;
}

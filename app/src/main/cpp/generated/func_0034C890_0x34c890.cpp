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

// Function: func_0034C890
// Address: 0x34c890 - 0x34c8f0
void func_0034C890_0x34c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C890_0x34c890");
#endif

    ctx->pc = 0x34c890u;

    // 0x34c890: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x34c890u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c894: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34c894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34c898: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x34c898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34c89c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34c89cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34c8a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34c8a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c8ac: 0x24871310  addiu       $a3, $a0, 0x1310
    ctx->pc = 0x34c8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x34c8b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34c8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c8b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x34c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x34c8bc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x34c8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x34c8c0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x34c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x34c8c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C8C4u;
    {
        const bool branch_taken_0x34c8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8C4u;
        // 0x34c8c8: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8c4) {
            ctx->pc = 0x34C8D8u;
            goto label_34c8d8;
        }
    }
    ctx->pc = 0x34C8CCu;
    // 0x34c8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c8d0: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34C8D0u;
    ctx->pc = 0x34C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C8D0u;
    // 0x34c8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34C8D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34C8D8u;
label_34c8d8:
    // 0x34c8d8: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x34c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x34c8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34c8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c8e4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x34c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x34c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x34C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8E8u;
        // 0x34c8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C8F0u;
}

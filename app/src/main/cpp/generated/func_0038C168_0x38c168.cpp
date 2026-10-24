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

// Function: func_0038C168
// Address: 0x38c168 - 0x38c1a8
void func_0038C168_0x38c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C168_0x38c168");
#endif

    switch (ctx->pc) {
        case 0x38c194u: goto label_38c194;
        default: break;
    }

    ctx->pc = 0x38c168u;

    // 0x38c168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38c16c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x38c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x38c170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c174: 0x8c620db0  lw          $v0, 0xDB0($v1)
    ctx->pc = 0x38c174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460DB0u));
    // 0x38c178: 0x24700db0  addiu       $s0, $v1, 0xDB0
    ctx->pc = 0x38c178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3504));
    // 0x38c17c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C17Cu;
    {
        const bool branch_taken_0x38c17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C17Cu;
        // 0x38c180: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c17c) {
            ctx->pc = 0x38C194u;
            goto label_38c194;
        }
    }
    ctx->pc = 0x38C184u;
    // 0x38c184: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x38c184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x38c188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c18c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x38C18Cu;
    SET_GPR_U32(ctx, 31, 0x38C194u);
    ctx->pc = 0x38C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C18Cu;
    // 0x38c190: 0x24a5d388  addiu       $a1, $a1, -0x2C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x38C18Cu, 0x38C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C194u;
label_38c194:
    // 0x38c194: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38c194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c19c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x38C1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1A0u;
        // 0x38c1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C1A8u;
}

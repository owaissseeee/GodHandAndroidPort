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

// Function: _$_9type_info
// Address: 0x31ee10 - 0x31ee40
void ps2____9type_info_0x31ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____9type_info_0x31ee10");
#endif

    switch (ctx->pc) {
        case 0x31ee34u: goto label_31ee34;
        default: break;
    }

    ctx->pc = 0x31ee10u;

    // 0x31ee10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ee14: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31ee18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ee1c: 0x24421038  addiu       $v0, $v0, 0x1038
    ctx->pc = 0x31ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4152));
    // 0x31ee20: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x31ee20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x31ee24: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EE24u;
    {
        const bool branch_taken_0x31ee24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE24u;
        // 0x31ee28: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee24) {
            ctx->pc = 0x31EE34u;
            goto label_31ee34;
        }
    }
    ctx->pc = 0x31EE2Cu;
    // 0x31ee2c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x31EE2Cu;
    SET_GPR_U32(ctx, 31, 0x31EE34u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x31EE2Cu, 0x31EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE34u;
label_31ee34:
    // 0x31ee34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ee38: 0x3e00008  jr          $ra
    ctx->pc = 0x31EE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE38u;
        // 0x31ee3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EE40u;
}

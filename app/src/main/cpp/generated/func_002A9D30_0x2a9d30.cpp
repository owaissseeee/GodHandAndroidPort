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

// Function: func_002A9D30
// Address: 0x2a9d30 - 0x2a9d60
void func_002A9D30_0x2a9d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A9D30_0x2a9d30");
#endif

    switch (ctx->pc) {
        case 0x2a9d54u: goto label_2a9d54;
        default: break;
    }

    ctx->pc = 0x2a9d30u;

    // 0x2a9d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9d34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a9d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a9d38: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9D38u;
    {
        const bool branch_taken_0x2a9d38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D38u;
        // 0x2a9d3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d38) {
            ctx->pc = 0x2A9D54u;
            goto label_2a9d54;
        }
    }
    ctx->pc = 0x2A9D40u;
    // 0x2a9d40: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9D40u;
    {
        const bool branch_taken_0x2a9d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D40u;
        // 0x2a9d44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9d40) {
            ctx->pc = 0x2A9D58u;
            goto label_2a9d58;
        }
    }
    ctx->pc = 0x2A9D48u;
    // 0x2a9d48: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2a9d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2a9d4c: 0xc0aa62a  jal         func_2A98A8
    ctx->pc = 0x2A9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D54u);
    ctx->pc = 0x2A9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D4Cu;
    // 0x2a9d50: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98A8u, 0x2A9D4Cu, 0x2A9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D54u;
label_2a9d54:
    // 0x2a9d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9d58:
    // 0x2a9d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D58u;
        // 0x2a9d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9D60u;
}

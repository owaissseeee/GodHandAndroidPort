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

// Function: func_002C9C38
// Address: 0x2c9c38 - 0x2c9c68
void func_002C9C38_0x2c9c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9C38_0x2c9c38");
#endif

    switch (ctx->pc) {
        case 0x2c9c5cu: goto label_2c9c5c;
        default: break;
    }

    ctx->pc = 0x2c9c38u;

    // 0x2c9c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9c3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c9c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c9c40: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9C40u;
    {
        const bool branch_taken_0x2c9c40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C40u;
        // 0x2c9c44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c40) {
            ctx->pc = 0x2C9C5Cu;
            goto label_2c9c5c;
        }
    }
    ctx->pc = 0x2C9C48u;
    // 0x2c9c48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9C48u;
    {
        const bool branch_taken_0x2c9c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C48u;
        // 0x2c9c4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c48) {
            ctx->pc = 0x2C9C60u;
            goto label_2c9c60;
        }
    }
    ctx->pc = 0x2C9C50u;
    // 0x2c9c50: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c9c54: 0xc0b2398  jal         func_2C8E60
    ctx->pc = 0x2C9C54u;
    SET_GPR_U32(ctx, 31, 0x2C9C5Cu);
    ctx->pc = 0x2C9C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C54u;
    // 0x2c9c58: 0x2484ec58  addiu       $a0, $a0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E60u, 0x2C9C54u, 0x2C9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C5Cu;
label_2c9c5c:
    // 0x2c9c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9c60:
    // 0x2c9c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C60u;
        // 0x2c9c64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9C68u;
}

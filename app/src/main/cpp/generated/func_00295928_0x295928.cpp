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

// Function: func_00295928
// Address: 0x295928 - 0x295958
void func_00295928_0x295928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00295928_0x295928");
#endif

    switch (ctx->pc) {
        case 0x29594cu: goto label_29594c;
        default: break;
    }

    ctx->pc = 0x295928u;

    // 0x295928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29592c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x295930: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295930u;
    {
        const bool branch_taken_0x295930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x295934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295930u;
        // 0x295934: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295930) {
            ctx->pc = 0x29594Cu;
            goto label_29594c;
        }
    }
    ctx->pc = 0x295938u;
    // 0x295938: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295938u;
    {
        const bool branch_taken_0x295938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295938u;
        // 0x29593c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295938) {
            ctx->pc = 0x295950u;
            goto label_295950;
        }
    }
    ctx->pc = 0x295940u;
    // 0x295940: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x295940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x295944: 0xc0a52ce  jal         func_294B38
    ctx->pc = 0x295944u;
    SET_GPR_U32(ctx, 31, 0x29594Cu);
    ctx->pc = 0x295948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295944u;
    // 0x295948: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B38u, 0x295944u, 0x29594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29594Cu;
label_29594c:
    // 0x29594c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29594cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295950:
    // 0x295950: 0x3e00008  jr          $ra
    ctx->pc = 0x295950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295950u;
        // 0x295954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295958u;
}

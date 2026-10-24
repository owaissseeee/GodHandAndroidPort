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

// Function: func_00150608
// Address: 0x150608 - 0x150638
void func_00150608_0x150608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150608_0x150608");
#endif

    switch (ctx->pc) {
        case 0x15062cu: goto label_15062c;
        default: break;
    }

    ctx->pc = 0x150608u;

    // 0x150608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15060c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x150610: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x150610u;
    {
        const bool branch_taken_0x150610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x150614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150610u;
        // 0x150614: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150610) {
            ctx->pc = 0x15062Cu;
            goto label_15062c;
        }
    }
    ctx->pc = 0x150618u;
    // 0x150618: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x150618u;
    {
        const bool branch_taken_0x150618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150618u;
        // 0x15061c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150618) {
            ctx->pc = 0x150630u;
            goto label_150630;
        }
    }
    ctx->pc = 0x150620u;
    // 0x150620: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x150620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x150624: 0xc0aa5e4  jal         func_2A9790
    ctx->pc = 0x150624u;
    SET_GPR_U32(ctx, 31, 0x15062Cu);
    ctx->pc = 0x150628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150624u;
    // 0x150628: 0x24846470  addiu       $a0, $a0, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9790u, 0x150624u, 0x15062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15062Cu;
label_15062c:
    // 0x15062c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15062cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150630:
    // 0x150630: 0x3e00008  jr          $ra
    ctx->pc = 0x150630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150630u;
        // 0x150634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150638u;
}

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

// Function: func_002A72C8
// Address: 0x2a72c8 - 0x2a7308
void func_002A72C8_0x2a72c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A72C8_0x2a72c8");
#endif

    switch (ctx->pc) {
        case 0x2a72ecu: goto label_2a72ec;
        case 0x2a72f8u: goto label_2a72f8;
        default: break;
    }

    ctx->pc = 0x2a72c8u;

    // 0x2a72c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a72c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a72cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a72ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a72d0: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A72D0u;
    {
        const bool branch_taken_0x2a72d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72D0u;
        // 0x2a72d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a72d0) {
            ctx->pc = 0x2A72F8u;
            goto label_2a72f8;
        }
    }
    ctx->pc = 0x2A72D8u;
    // 0x2a72d8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A72D8u;
    {
        const bool branch_taken_0x2a72d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72D8u;
        // 0x2a72dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a72d8) {
            ctx->pc = 0x2A72FCu;
            goto label_2a72fc;
        }
    }
    ctx->pc = 0x2A72E0u;
    // 0x2a72e0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2a72e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2a72e4: 0xc0a96b4  jal         func_2A5AD0
    ctx->pc = 0x2A72E4u;
    SET_GPR_U32(ctx, 31, 0x2A72ECu);
    ctx->pc = 0x2A72E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72E4u;
    // 0x2a72e8: 0x2484ac90  addiu       $a0, $a0, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AD0u, 0x2A72E4u, 0x2A72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72ECu;
label_2a72ec:
    // 0x2a72ec: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2a72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2a72f0: 0xc04b972  jal         func_12E5C8
    ctx->pc = 0x2A72F0u;
    SET_GPR_U32(ctx, 31, 0x2A72F8u);
    ctx->pc = 0x2A72F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72F0u;
    // 0x2a72f4: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E5C8u, 0x2A72F0u, 0x2A72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72F8u;
label_2a72f8:
    // 0x2a72f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a72f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a72fc:
    // 0x2a72fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A72FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72FCu;
        // 0x2a7300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7304u;
    // 0x2a7304: 0x0  nop
    ctx->pc = 0x2a7304u;
    // NOP
    ctx->pc = 0x2a7308u;
}

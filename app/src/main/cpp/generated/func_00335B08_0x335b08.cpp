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

// Function: func_00335B08
// Address: 0x335b08 - 0x335b40
void func_00335B08_0x335b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335B08_0x335b08");
#endif

    switch (ctx->pc) {
        case 0x335b1cu: goto label_335b1c;
        case 0x335b24u: goto label_335b24;
        case 0x335b2cu: goto label_335b2c;
        default: break;
    }

    ctx->pc = 0x335b08u;

    // 0x335b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335b10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x335b14: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x335B14u;
    SET_GPR_U32(ctx, 31, 0x335B1Cu);
    ctx->pc = 0x335B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B14u;
    // 0x335b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x335B14u, 0x335B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B1Cu;
label_335b1c:
    // 0x335b1c: 0xc0cd6d0  jal         func_335B40
    ctx->pc = 0x335B1Cu;
    SET_GPR_U32(ctx, 31, 0x335B24u);
    ctx->pc = 0x335B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B1Cu;
    // 0x335b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B40u, 0x335B1Cu, 0x335B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B24u;
label_335b24:
    // 0x335b24: 0xc0cd738  jal         func_335CE0
    ctx->pc = 0x335B24u;
    SET_GPR_U32(ctx, 31, 0x335B2Cu);
    ctx->pc = 0x335B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B24u;
    // 0x335b28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x335B24u, 0x335B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B2Cu;
label_335b2c:
    // 0x335b2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335b30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x335b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335b38: 0x3e00008  jr          $ra
    ctx->pc = 0x335B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B38u;
        // 0x335b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335B40u;
}

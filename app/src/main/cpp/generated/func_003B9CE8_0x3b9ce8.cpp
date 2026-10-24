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

// Function: func_003B9CE8
// Address: 0x3b9ce8 - 0x3b9d30
void func_003B9CE8_0x3b9ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9CE8_0x3b9ce8");
#endif

    switch (ctx->pc) {
        case 0x3b9d0cu: goto label_3b9d0c;
        case 0x3b9d1cu: goto label_3b9d1c;
        default: break;
    }

    ctx->pc = 0x3b9ce8u;

    // 0x3b9ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b9cec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3b9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3b9cf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b9cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9cf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b9cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9cfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b9cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b9d00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b9d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b9d04: 0xc0eea1e  jal         func_3BA878
    ctx->pc = 0x3B9D04u;
    SET_GPR_U32(ctx, 31, 0x3B9D0Cu);
    ctx->pc = 0x3B9D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9D04u;
    // 0x3b9d08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA878u, 0x3B9D04u, 0x3B9D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9D0Cu;
label_3b9d0c:
    // 0x3b9d0c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3b9d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9d14: 0xc0eea30  jal         func_3BA8C0
    ctx->pc = 0x3B9D14u;
    SET_GPR_U32(ctx, 31, 0x3B9D1Cu);
    ctx->pc = 0x3B9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9D14u;
    // 0x3b9d18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA8C0u, 0x3B9D14u, 0x3B9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9D1Cu;
label_3b9d1c:
    // 0x3b9d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b9d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9d20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3b9d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b9d24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b9d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9d28: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D28u;
        // 0x3b9d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9D30u;
}

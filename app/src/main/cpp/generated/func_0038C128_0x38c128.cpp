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

// Function: func_0038C128
// Address: 0x38c128 - 0x38c168
void func_0038C128_0x38c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C128_0x38c128");
#endif

    switch (ctx->pc) {
        case 0x38c154u: goto label_38c154;
        default: break;
    }

    ctx->pc = 0x38c128u;

    // 0x38c128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38c12c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x38c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x38c130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c134: 0x8c620db8  lw          $v0, 0xDB8($v1)
    ctx->pc = 0x38c134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460DB8u));
    // 0x38c138: 0x24700db8  addiu       $s0, $v1, 0xDB8
    ctx->pc = 0x38c138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3512));
    // 0x38c13c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C13Cu;
    {
        const bool branch_taken_0x38c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C13Cu;
        // 0x38c140: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c13c) {
            ctx->pc = 0x38C154u;
            goto label_38c154;
        }
    }
    ctx->pc = 0x38C144u;
    // 0x38c144: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x38c144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x38c148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c14c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x38C14Cu;
    SET_GPR_U32(ctx, 31, 0x38C154u);
    ctx->pc = 0x38C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C14Cu;
    // 0x38c150: 0x24a5d378  addiu       $a1, $a1, -0x2C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x38C14Cu, 0x38C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C154u;
label_38c154:
    // 0x38c154: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38c154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c160: 0x3e00008  jr          $ra
    ctx->pc = 0x38C160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C160u;
        // 0x38c164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C168u;
}

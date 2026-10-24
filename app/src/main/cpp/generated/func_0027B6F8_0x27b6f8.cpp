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

// Function: func_0027B6F8
// Address: 0x27b6f8 - 0x27b748
void func_0027B6F8_0x27b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027B6F8_0x27b6f8");
#endif

    switch (ctx->pc) {
        case 0x27b71cu: goto label_27b71c;
        case 0x27b734u: goto label_27b734;
        default: break;
    }

    ctx->pc = 0x27b6f8u;

    // 0x27b6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b6fc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x27b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x27b700: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27b704: 0x8c626238  lw          $v0, 0x6238($v1)
    ctx->pc = 0x27b704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786238u));
    // 0x27b708: 0x24706238  addiu       $s0, $v1, 0x6238
    ctx->pc = 0x27b708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25144));
    // 0x27b70c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27B70Cu;
    {
        const bool branch_taken_0x27b70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B70Cu;
        // 0x27b710: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b70c) {
            ctx->pc = 0x27B734u;
            goto label_27b734;
        }
    }
    ctx->pc = 0x27B714u;
    // 0x27b714: 0xc0aa4c0  jal         func_2A9300
    ctx->pc = 0x27B714u;
    SET_GPR_U32(ctx, 31, 0x27B71Cu);
    ctx->pc = 0x2A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9300u, 0x27B714u, 0x27B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B71Cu;
label_27b71c:
    // 0x27b71c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x27b71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x27b720: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x27b720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x27b724: 0x24a580c8  addiu       $a1, $a1, -0x7F38
    ctx->pc = 0x27b724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934728));
    // 0x27b728: 0x24c654d8  addiu       $a2, $a2, 0x54D8
    ctx->pc = 0x27b728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21720));
    // 0x27b72c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x27B72Cu;
    SET_GPR_U32(ctx, 31, 0x27B734u);
    ctx->pc = 0x27B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B72Cu;
    // 0x27b730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x27B72Cu, 0x27B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B734u;
label_27b734:
    // 0x27b734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27b734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b73c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27b73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b740: 0x3e00008  jr          $ra
    ctx->pc = 0x27B740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B740u;
        // 0x27b744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B748u;
}

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

// Function: func_00199F80
// Address: 0x199f80 - 0x199fd0
void func_00199F80_0x199f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00199F80_0x199f80");
#endif

    switch (ctx->pc) {
        case 0x199fa4u: goto label_199fa4;
        case 0x199fbcu: goto label_199fbc;
        default: break;
    }

    ctx->pc = 0x199f80u;

    // 0x199f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199f84: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x199f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x199f88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199f8c: 0x8c625d28  lw          $v0, 0x5D28($v1)
    ctx->pc = 0x199f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785D28u));
    // 0x199f90: 0x24705d28  addiu       $s0, $v1, 0x5D28
    ctx->pc = 0x199f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23848));
    // 0x199f94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x199F94u;
    {
        const bool branch_taken_0x199f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F94u;
        // 0x199f98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f94) {
            ctx->pc = 0x199FBCu;
            goto label_199fbc;
        }
    }
    ctx->pc = 0x199F9Cu;
    // 0x199f9c: 0xc070006  jal         func_1C0018
    ctx->pc = 0x199F9Cu;
    SET_GPR_U32(ctx, 31, 0x199FA4u);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x199F9Cu, 0x199FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FA4u;
label_199fa4:
    // 0x199fa4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x199fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x199fa8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x199fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x199fac: 0x24a55278  addiu       $a1, $a1, 0x5278
    ctx->pc = 0x199facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21112));
    // 0x199fb0: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x199fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x199fb4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x199FB4u;
    SET_GPR_U32(ctx, 31, 0x199FBCu);
    ctx->pc = 0x199FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FB4u;
    // 0x199fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x199FB4u, 0x199FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FBCu;
label_199fbc:
    // 0x199fbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199fc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x199FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FC8u;
        // 0x199fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199FD0u;
}

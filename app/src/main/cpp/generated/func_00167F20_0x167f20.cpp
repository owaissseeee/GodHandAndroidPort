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

// Function: func_00167F20
// Address: 0x167f20 - 0x167f70
void func_00167F20_0x167f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00167F20_0x167f20");
#endif

    switch (ctx->pc) {
        case 0x167f44u: goto label_167f44;
        case 0x167f5cu: goto label_167f5c;
        default: break;
    }

    ctx->pc = 0x167f20u;

    // 0x167f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167f24: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x167f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x167f28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x167f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167f2c: 0x8c625748  lw          $v0, 0x5748($v1)
    ctx->pc = 0x167f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785748u));
    // 0x167f30: 0x24705748  addiu       $s0, $v1, 0x5748
    ctx->pc = 0x167f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22344));
    // 0x167f34: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167F34u;
    {
        const bool branch_taken_0x167f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F34u;
        // 0x167f38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f34) {
            ctx->pc = 0x167F5Cu;
            goto label_167f5c;
        }
    }
    ctx->pc = 0x167F3Cu;
    // 0x167f3c: 0xc05858a  jal         func_161628
    ctx->pc = 0x167F3Cu;
    SET_GPR_U32(ctx, 31, 0x167F44u);
    ctx->pc = 0x161628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161628u, 0x167F3Cu, 0x167F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F44u;
label_167f44:
    // 0x167f44: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x167f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x167f48: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x167f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x167f4c: 0x24a5fc28  addiu       $a1, $a1, -0x3D8
    ctx->pc = 0x167f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966312));
    // 0x167f50: 0x24c60d38  addiu       $a2, $a2, 0xD38
    ctx->pc = 0x167f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x167f54: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x167F54u;
    SET_GPR_U32(ctx, 31, 0x167F5Cu);
    ctx->pc = 0x167F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F54u;
    // 0x167f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x167F54u, 0x167F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F5Cu;
label_167f5c:
    // 0x167f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167f68: 0x3e00008  jr          $ra
    ctx->pc = 0x167F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F68u;
        // 0x167f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167F70u;
}

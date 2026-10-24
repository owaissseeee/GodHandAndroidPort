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

// Function: func_00178F78
// Address: 0x178f78 - 0x178fc8
void func_00178F78_0x178f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178F78_0x178f78");
#endif

    switch (ctx->pc) {
        case 0x178f9cu: goto label_178f9c;
        case 0x178fb4u: goto label_178fb4;
        default: break;
    }

    ctx->pc = 0x178f78u;

    // 0x178f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178f7c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x178f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x178f80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178f84: 0x8c625938  lw          $v0, 0x5938($v1)
    ctx->pc = 0x178f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785938u));
    // 0x178f88: 0x24705938  addiu       $s0, $v1, 0x5938
    ctx->pc = 0x178f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22840));
    // 0x178f8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178F8Cu;
    {
        const bool branch_taken_0x178f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F8Cu;
        // 0x178f90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f8c) {
            ctx->pc = 0x178FB4u;
            goto label_178fb4;
        }
    }
    ctx->pc = 0x178F94u;
    // 0x178f94: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x178F94u;
    SET_GPR_U32(ctx, 31, 0x178F9Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x178F94u, 0x178F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F9Cu;
label_178f9c:
    // 0x178f9c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x178f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x178fa0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x178fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x178fa4: 0x24a51810  addiu       $a1, $a1, 0x1810
    ctx->pc = 0x178fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6160));
    // 0x178fa8: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x178fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x178fac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x178FACu;
    SET_GPR_U32(ctx, 31, 0x178FB4u);
    ctx->pc = 0x178FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178FACu;
    // 0x178fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x178FACu, 0x178FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FB4u;
label_178fb4:
    // 0x178fb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178fbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x178FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FC0u;
        // 0x178fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178FC8u;
}

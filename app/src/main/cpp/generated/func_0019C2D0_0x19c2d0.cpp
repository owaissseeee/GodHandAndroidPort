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

// Function: func_0019C2D0
// Address: 0x19c2d0 - 0x19c320
void func_0019C2D0_0x19c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C2D0_0x19c2d0");
#endif

    switch (ctx->pc) {
        case 0x19c2f4u: goto label_19c2f4;
        case 0x19c30cu: goto label_19c30c;
        default: break;
    }

    ctx->pc = 0x19c2d0u;

    // 0x19c2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c2d4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19c2d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c2dc: 0x8c625dc8  lw          $v0, 0x5DC8($v1)
    ctx->pc = 0x19c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785DC8u));
    // 0x19c2e0: 0x24705dc8  addiu       $s0, $v1, 0x5DC8
    ctx->pc = 0x19c2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24008));
    // 0x19c2e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C2E4u;
    {
        const bool branch_taken_0x19c2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2E4u;
        // 0x19c2e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2e4) {
            ctx->pc = 0x19C30Cu;
            goto label_19c30c;
        }
    }
    ctx->pc = 0x19C2ECu;
    // 0x19c2ec: 0xc070006  jal         func_1C0018
    ctx->pc = 0x19C2ECu;
    SET_GPR_U32(ctx, 31, 0x19C2F4u);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x19C2ECu, 0x19C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2F4u;
label_19c2f4:
    // 0x19c2f4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19c2f8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19c2fc: 0x24a55b78  addiu       $a1, $a1, 0x5B78
    ctx->pc = 0x19c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
    // 0x19c300: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x19c304: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19C304u;
    SET_GPR_U32(ctx, 31, 0x19C30Cu);
    ctx->pc = 0x19C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C304u;
    // 0x19c308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19C304u, 0x19C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C30Cu;
label_19c30c:
    // 0x19c30c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c314: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c318: 0x3e00008  jr          $ra
    ctx->pc = 0x19C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C318u;
        // 0x19c31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C320u;
}

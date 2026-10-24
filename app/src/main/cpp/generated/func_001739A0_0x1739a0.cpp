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

// Function: func_001739A0
// Address: 0x1739a0 - 0x1739f0
void func_001739A0_0x1739a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001739A0_0x1739a0");
#endif

    switch (ctx->pc) {
        case 0x1739c4u: goto label_1739c4;
        case 0x1739dcu: goto label_1739dc;
        default: break;
    }

    ctx->pc = 0x1739a0u;

    // 0x1739a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1739a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1739a4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1739a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1739a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1739a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1739ac: 0x8c625898  lw          $v0, 0x5898($v1)
    ctx->pc = 0x1739acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785898u));
    // 0x1739b0: 0x24705898  addiu       $s0, $v1, 0x5898
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22680));
    // 0x1739b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1739B4u;
    {
        const bool branch_taken_0x1739b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1739B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739B4u;
        // 0x1739b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739b4) {
            ctx->pc = 0x1739DCu;
            goto label_1739dc;
        }
    }
    ctx->pc = 0x1739BCu;
    // 0x1739bc: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1739BCu;
    SET_GPR_U32(ctx, 31, 0x1739C4u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1739BCu, 0x1739C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739C4u;
label_1739c4:
    // 0x1739c4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1739c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1739c8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1739c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1739cc: 0x24a50fa0  addiu       $a1, $a1, 0xFA0
    ctx->pc = 0x1739ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4000));
    // 0x1739d0: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1739d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1739d4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1739D4u;
    SET_GPR_U32(ctx, 31, 0x1739DCu);
    ctx->pc = 0x1739D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1739D4u;
    // 0x1739d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1739D4u, 0x1739DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739DCu;
label_1739dc:
    // 0x1739dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1739dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1739e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1739e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1739e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1739e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1739E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1739ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739E8u;
        // 0x1739ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1739E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1739F0u;
}

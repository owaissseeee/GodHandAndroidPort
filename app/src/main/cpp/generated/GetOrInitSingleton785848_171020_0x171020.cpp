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

// Function: GetOrInitSingleton785848_171020
// Address: 0x171020 - 0x171070
void GetOrInitSingleton785848_171020_0x171020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton785848_171020_0x171020");
#endif

    switch (ctx->pc) {
        case 0x171044u: goto label_171044;
        case 0x17105cu: goto label_17105c;
        default: break;
    }

    ctx->pc = 0x171020u;

    // 0x171020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171024: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x171024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x171028: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17102c: 0x8c625848  lw          $v0, 0x5848($v1)
    ctx->pc = 0x17102cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785848u));
    // 0x171030: 0x24705848  addiu       $s0, $v1, 0x5848
    ctx->pc = 0x171030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22600));
    // 0x171034: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171034u;
    {
        const bool branch_taken_0x171034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171034u;
        // 0x171038: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171034) {
            ctx->pc = 0x17105Cu;
            goto label_17105c;
        }
    }
    ctx->pc = 0x17103Cu;
    // 0x17103c: 0xc06f780  jal         func_1BDE00
    ctx->pc = 0x17103Cu;
    SET_GPR_U32(ctx, 31, 0x171044u);
    ctx->pc = 0x1BDE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE00u, 0x17103Cu, 0x171044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171044u;
label_171044:
    // 0x171044: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x171044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x171048: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x171048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17104c: 0x24a509d0  addiu       $a1, $a1, 0x9D0
    ctx->pc = 0x17104cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
    // 0x171050: 0x24c65858  addiu       $a2, $a2, 0x5858
    ctx->pc = 0x171050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22616));
    // 0x171054: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x171054u;
    SET_GPR_U32(ctx, 31, 0x17105Cu);
    ctx->pc = 0x171058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171054u;
    // 0x171058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x171054u, 0x17105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17105Cu;
label_17105c:
    // 0x17105c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17105cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171068: 0x3e00008  jr          $ra
    ctx->pc = 0x171068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171068u;
        // 0x17106c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171070u;
}

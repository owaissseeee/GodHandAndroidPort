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

// Function: func_003492A0
// Address: 0x3492a0 - 0x3492e8
void func_003492A0_0x3492a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003492A0_0x3492a0");
#endif

    switch (ctx->pc) {
        case 0x3492b4u: goto label_3492b4;
        case 0x3492ccu: goto label_3492cc;
        default: break;
    }

    ctx->pc = 0x3492a0u;

    // 0x3492a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3492a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3492a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3492a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3492a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3492a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3492ac: 0xc0d24ba  jal         func_3492E8
    ctx->pc = 0x3492ACu;
    SET_GPR_U32(ctx, 31, 0x3492B4u);
    ctx->pc = 0x3492B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3492ACu;
    // 0x3492b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3492E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3492E8u, 0x3492ACu, 0x3492B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492B4u;
label_3492b4:
    // 0x3492b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3492b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3492b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3492b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3492bc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3492BCu;
    {
        const bool branch_taken_0x3492bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3492C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492BCu;
        // 0x3492c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492bc) {
            ctx->pc = 0x3492D0u;
            goto label_3492d0;
        }
    }
    ctx->pc = 0x3492C4u;
    // 0x3492c4: 0xc0d251a  jal         func_349468
    ctx->pc = 0x3492C4u;
    SET_GPR_U32(ctx, 31, 0x3492CCu);
    ctx->pc = 0x349468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349468u, 0x3492C4u, 0x3492CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492CCu;
label_3492cc:
    // 0x3492cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3492ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3492d0:
    // 0x3492d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3492d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3492d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3492d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3492d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3492d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3492dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3492DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3492E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492DCu;
        // 0x3492e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3492DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3492E4u;
    // 0x3492e4: 0x0  nop
    ctx->pc = 0x3492e4u;
    // NOP
    ctx->pc = 0x3492e8u;
}

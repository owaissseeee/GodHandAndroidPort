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

// Function: sftim_HnVbIn
// Address: 0x35a6a8 - 0x35a6f8
void sftim_HnVbIn_0x35a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftim_HnVbIn_0x35a6a8");
#endif

    switch (ctx->pc) {
        case 0x35a6bcu: goto label_35a6bc;
        case 0x35a6c8u: goto label_35a6c8;
        default: break;
    }

    ctx->pc = 0x35a6a8u;

    // 0x35a6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a6ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a6b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a6b4: 0xc0d69be  jal         func_35A6F8
    ctx->pc = 0x35A6B4u;
    SET_GPR_U32(ctx, 31, 0x35A6BCu);
    ctx->pc = 0x35A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A6B4u;
    // 0x35a6b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A6F8u, 0x35A6B4u, 0x35A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A6BCu;
label_35a6bc:
    // 0x35a6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a6c0: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35A6C0u;
    SET_GPR_U32(ctx, 31, 0x35A6C8u);
    ctx->pc = 0x35A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A6C0u;
    // 0x35a6c4: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35A6C0u, 0x35A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A6C8u;
label_35a6c8:
    // 0x35a6c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a6cc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A6CCu;
    {
        const bool branch_taken_0x35a6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A6CCu;
        // 0x35a6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a6cc) {
            ctx->pc = 0x35A6E8u;
            goto label_35a6e8;
        }
    }
    ctx->pc = 0x35A6D4u;
    // 0x35a6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a6d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a6dc: 0x80d6c16  j           func_35B058
    ctx->pc = 0x35A6DCu;
    ctx->pc = 0x35A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A6DCu;
    // 0x35a6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B058u, 0x35A6DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A6E4u;
    // 0x35a6e4: 0x0  nop
    ctx->pc = 0x35a6e4u;
    // NOP
label_35a6e8:
    // 0x35a6e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a6ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x35A6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A6F0u;
        // 0x35a6f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A6F8u;
}

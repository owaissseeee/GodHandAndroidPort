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

// Function: sfmpv_Concat
// Address: 0x351888 - 0x3518d8
void sfmpv_Concat_0x351888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpv_Concat_0x351888");
#endif

    switch (ctx->pc) {
        case 0x3518a4u: goto label_3518a4;
        case 0x3518bcu: goto label_3518bc;
        default: break;
    }

    ctx->pc = 0x351888u;

    // 0x351888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35188c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x351890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x351890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x351894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x351898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35189c: 0xc0d4636  jal         func_3518D8
    ctx->pc = 0x35189Cu;
    SET_GPR_U32(ctx, 31, 0x3518A4u);
    ctx->pc = 0x3518A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35189Cu;
    // 0x3518a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3518D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3518D8u, 0x35189Cu, 0x3518A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3518A4u;
label_3518a4:
    // 0x3518a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3518a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3518a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3518a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3518ac: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3518ACu;
    {
        const bool branch_taken_0x3518ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3518B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518ACu;
        // 0x3518b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3518ac) {
            ctx->pc = 0x3518C0u;
            goto label_3518c0;
        }
    }
    ctx->pc = 0x3518B4u;
    // 0x3518b4: 0xc0d46ac  jal         func_351AB0
    ctx->pc = 0x3518B4u;
    SET_GPR_U32(ctx, 31, 0x3518BCu);
    ctx->pc = 0x351AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AB0u, 0x3518B4u, 0x3518BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3518BCu;
label_3518bc:
    // 0x3518bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3518bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3518c0:
    // 0x3518c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3518c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3518c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3518c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3518c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3518c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3518cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3518CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3518D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518CCu;
        // 0x3518d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3518CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3518D4u;
    // 0x3518d4: 0x0  nop
    ctx->pc = 0x3518d4u;
    // NOP
    ctx->pc = 0x3518d8u;
}

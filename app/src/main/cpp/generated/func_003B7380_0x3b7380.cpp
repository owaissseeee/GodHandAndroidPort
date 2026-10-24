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

// Function: func_003B7380
// Address: 0x3b7380 - 0x3b7400
void func_003B7380_0x3b7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B7380_0x3b7380");
#endif

    switch (ctx->pc) {
        case 0x3b7398u: goto label_3b7398;
        case 0x3b73a4u: goto label_3b73a4;
        case 0x3b73b4u: goto label_3b73b4;
        default: break;
    }

    ctx->pc = 0x3b7380u;

    // 0x3b7380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b7384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b7388: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b7388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b738c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b7390: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B7390u;
    SET_GPR_U32(ctx, 31, 0x3B7398u);
    ctx->pc = 0x3B7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7390u;
    // 0x3b7394: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B7390u, 0x3B7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7398u;
label_3b7398:
    // 0x3b7398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b739c: 0xc0edcb4  jal         func_3B72D0
    ctx->pc = 0x3B739Cu;
    SET_GPR_U32(ctx, 31, 0x3B73A4u);
    ctx->pc = 0x3B73A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B739Cu;
    // 0x3b73a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B72D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B72D0u, 0x3B739Cu, 0x3B73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B73A4u;
label_3b73a4:
    // 0x3b73a4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B73A4u;
    {
        const bool branch_taken_0x3b73a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73A4u;
        // 0x3b73a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b73a4) {
            ctx->pc = 0x3B73B4u;
            goto label_3b73b4;
        }
    }
    ctx->pc = 0x3B73ACu;
    // 0x3b73ac: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B73ACu;
    SET_GPR_U32(ctx, 31, 0x3B73B4u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B73ACu, 0x3B73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B73B4u;
label_3b73b4:
    // 0x3b73b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b73b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b73b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b73b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b73bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b73bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b73c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b73c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b73c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B73C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B73C4u;
        // 0x3b73c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B73C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B73CCu;
    // 0x3b73cc: 0x0  nop
    ctx->pc = 0x3b73ccu;
    // NOP
    // 0x3b73d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3b73d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b73d4: 0x0  nop
    ctx->pc = 0x3b73d4u;
    // NOP
    // 0x3b73d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b73d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b73dc: 0x0  nop
    ctx->pc = 0x3b73dcu;
    // NOP
    // 0x3b73e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3b73e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b73e4: 0x0  nop
    ctx->pc = 0x3b73e4u;
    // NOP
    // 0x3b73e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b73e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b73ec: 0x0  nop
    ctx->pc = 0x3b73ecu;
    // NOP
    // 0x3b73f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b73f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b73f4: 0x0  nop
    ctx->pc = 0x3b73f4u;
    // NOP
    // 0x3b73f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b73f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b73fc: 0x0  nop
    ctx->pc = 0x3b73fcu;
    // NOP
    ctx->pc = 0x3b7400u;
}

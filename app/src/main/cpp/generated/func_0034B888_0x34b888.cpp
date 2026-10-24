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

// Function: func_0034B888
// Address: 0x34b888 - 0x34b8c8
void func_0034B888_0x34b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B888_0x34b888");
#endif

    switch (ctx->pc) {
        case 0x34b8a0u: goto label_34b8a0;
        case 0x34b8b4u: goto label_34b8b4;
        default: break;
    }

    ctx->pc = 0x34b888u;

    // 0x34b888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b88c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b894: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34b898: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34B898u;
    SET_GPR_U32(ctx, 31, 0x34B8A0u);
    ctx->pc = 0x34B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B898u;
    // 0x34b89c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34B898u, 0x34B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8A0u;
label_34b8a0:
    // 0x34b8a0: 0x2603365c  addiu       $v1, $s0, 0x365C
    ctx->pc = 0x34b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 13916));
    // 0x34b8a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B8A4u;
    {
        const bool branch_taken_0x34b8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B8A4u;
        // 0x34b8a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b8a4) {
            ctx->pc = 0x34B8B8u;
            goto label_34b8b8;
        }
    }
    ctx->pc = 0x34B8ACu;
    // 0x34b8ac: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34B8ACu;
    SET_GPR_U32(ctx, 31, 0x34B8B4u);
    ctx->pc = 0x34B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B8ACu;
    // 0x34b8b0: 0xae032114  sw          $v1, 0x2114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8468), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34B8ACu, 0x34B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8B4u;
label_34b8b4:
    // 0x34b8b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b8b8:
    // 0x34b8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b8bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x34B8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B8C0u;
        // 0x34b8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B8C8u;
}

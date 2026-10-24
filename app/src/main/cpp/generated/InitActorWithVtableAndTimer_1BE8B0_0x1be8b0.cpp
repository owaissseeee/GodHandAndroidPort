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

// Function: InitActorWithVtableAndTimer_1BE8B0
// Address: 0x1be8b0 - 0x1be8f0
void InitActorWithVtableAndTimer_1BE8B0_0x1be8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitActorWithVtableAndTimer_1BE8B0_0x1be8b0");
#endif

    switch (ctx->pc) {
        case 0x1be8c4u: goto label_1be8c4;
        default: break;
    }

    ctx->pc = 0x1be8b0u;

    // 0x1be8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be8b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be8bc: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1BE8BCu;
    SET_GPR_U32(ctx, 31, 0x1BE8C4u);
    ctx->pc = 0x1BE8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8BCu;
    // 0x1be8c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1BE8BCu, 0x1BE8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8C4u;
label_1be8c4:
    // 0x1be8c4: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1be8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1be8c8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1be8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1be8cc: 0xae020604  sw          $v0, 0x604($s0)
    ctx->pc = 0x1be8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 2));
    // 0x1be8d0: 0x24639620  addiu       $v1, $v1, -0x69E0
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940192));
    // 0x1be8d4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1be8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1be8d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1be8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8dc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1be8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1be8e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8E8u;
        // 0x1be8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE8F0u;
}

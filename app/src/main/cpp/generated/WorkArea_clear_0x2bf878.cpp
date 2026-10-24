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

// Function: WorkArea_clear
// Address: 0x2bf878 - 0x2bf8c8
void WorkArea_clear_0x2bf878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WorkArea_clear_0x2bf878");
#endif

    switch (ctx->pc) {
        case 0x2bf894u: goto label_2bf894;
        case 0x2bf8a4u: goto label_2bf8a4;
        case 0x2bf8b8u: goto label_2bf8b8;
        default: break;
    }

    ctx->pc = 0x2bf878u;

    // 0x2bf878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf880: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bf880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bf884: 0x240614a0  addiu       $a2, $zero, 0x14A0
    ctx->pc = 0x2bf884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5280));
    // 0x2bf888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf88c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BF88Cu;
    SET_GPR_U32(ctx, 31, 0x2BF894u);
    ctx->pc = 0x2BF890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF88Cu;
    // 0x2bf890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BF88Cu, 0x2BF894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF894u;
label_2bf894:
    // 0x2bf894: 0x260414a0  addiu       $a0, $s0, 0x14A0
    ctx->pc = 0x2bf894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5280));
    // 0x2bf898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf89c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BF89Cu;
    SET_GPR_U32(ctx, 31, 0x2BF8A4u);
    ctx->pc = 0x2BF8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF89Cu;
    // 0x2bf8a0: 0x34069c30  ori         $a2, $zero, 0x9C30 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39984);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BF89Cu, 0x2BF8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8A4u;
label_2bf8a4:
    // 0x2bf8a4: 0x3404b0d0  ori         $a0, $zero, 0xB0D0
    ctx->pc = 0x2bf8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45264);
    // 0x2bf8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8ac: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2bf8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2bf8b0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BF8B0u;
    SET_GPR_U32(ctx, 31, 0x2BF8B8u);
    ctx->pc = 0x2BF8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8B0u;
    // 0x2bf8b4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BF8B0u, 0x2BF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8B8u;
label_2bf8b8:
    // 0x2bf8b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bf8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8C0u;
        // 0x2bf8c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF8C8u;
}

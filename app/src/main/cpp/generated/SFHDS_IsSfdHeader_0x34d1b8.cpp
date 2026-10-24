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

// Function: SFHDS_IsSfdHeader
// Address: 0x34d1b8 - 0x34d210
void SFHDS_IsSfdHeader_0x34d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFHDS_IsSfdHeader_0x34d1b8");
#endif

    switch (ctx->pc) {
        case 0x34d1ccu: goto label_34d1cc;
        case 0x34d1e4u: goto label_34d1e4;
        case 0x34d1f8u: goto label_34d1f8;
        default: break;
    }

    ctx->pc = 0x34d1b8u;

    // 0x34d1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d1bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34d1c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34d1c4: 0xc0d7584  jal         func_35D610
    ctx->pc = 0x34D1C4u;
    SET_GPR_U32(ctx, 31, 0x34D1CCu);
    ctx->pc = 0x35D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D610u, 0x34D1C4u, 0x34D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D1CCu;
label_34d1cc:
    // 0x34d1cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34d1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d1d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34d1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d1d4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34D1D4u;
    {
        const bool branch_taken_0x34d1d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D1D4u;
        // 0x34d1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d1d4) {
            ctx->pc = 0x34D1FCu;
            goto label_34d1fc;
        }
    }
    ctx->pc = 0x34D1DCu;
    // 0x34d1dc: 0xc0d760a  jal         func_35D828
    ctx->pc = 0x34D1DCu;
    SET_GPR_U32(ctx, 31, 0x34D1E4u);
    ctx->pc = 0x35D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D828u, 0x34D1DCu, 0x34D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D1E4u;
label_34d1e4:
    // 0x34d1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d1e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d1ec: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x34d1ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x34d1f0: 0xc0d75b6  jal         func_35D6D8
    ctx->pc = 0x34D1F0u;
    SET_GPR_U32(ctx, 31, 0x34D1F8u);
    ctx->pc = 0x34D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D1F0u;
    // 0x34d1f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D6D8u, 0x34D1F0u, 0x34D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D1F8u;
label_34d1f8:
    // 0x34d1f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34d1fc:
    // 0x34d1fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34d1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d200: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34d200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34d204: 0x3e00008  jr          $ra
    ctx->pc = 0x34D204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D204u;
        // 0x34d208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D20Cu;
    // 0x34d20c: 0x0  nop
    ctx->pc = 0x34d20cu;
    // NOP
    ctx->pc = 0x34d210u;
}

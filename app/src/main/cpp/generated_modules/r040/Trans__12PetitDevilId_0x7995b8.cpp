#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: Trans__12PetitDevilId
// Address: 0x7995b8 - 0x7995e8
void Trans__12PetitDevilId_0x7995b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans__12PetitDevilId_0x7995b8");
#endif

    switch (ctx->pc) {
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d8u: goto label_7995d8;
        default: break;
    }

    ctx->pc = 0x7995b8u;

    // 0x7995b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7995bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7995bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7995c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7995c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7995c8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x7995C8u;
    SET_GPR_U32(ctx, 31, 0x7995D0u);
    ctx->pc = 0x7995CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C8u;
    // 0x7995cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x7995C8u, 0x7995D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D0u;
label_7995d0:
    // 0x7995d0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x7995D0u;
    SET_GPR_U32(ctx, 31, 0x7995D8u);
    ctx->pc = 0x7995D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D0u;
    // 0x7995d4: 0x260406b0  addiu       $a0, $s0, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x7995D0u, 0x7995D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7995d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7995dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7995e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7995E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995E8u;
}
} // namespace gh_r040

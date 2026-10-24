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
// Function: SetTimeUp__12PetitDevilId
// Address: 0x79a070 - 0x79a0b0
void SetTimeUp__12PetitDevilId_0x79a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTimeUp__12PetitDevilId_0x79a070");
#endif

    switch (ctx->pc) {
        case 0x79a08cu: goto label_79a08c;
        default: break;
    }

    ctx->pc = 0x79a070u;

    // 0x79a070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a074: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a084: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x79A084u;
    SET_GPR_U32(ctx, 31, 0x79A08Cu);
    ctx->pc = 0x79A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A084u;
    // 0x79a088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x79A084u, 0x79A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A08Cu;
label_79a08c:
    // 0x79a08c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a090: 0xae000ed0  sw          $zero, 0xED0($s0)
    ctx->pc = 0x79a090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3792), GPR_U32(ctx, 0));
    // 0x79a094: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x79a094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x79a098: 0xae000ed4  sw          $zero, 0xED4($s0)
    ctx->pc = 0x79a098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3796), GPR_U32(ctx, 0));
    // 0x79a09c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x79a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x79a0a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A8u;
        // 0x79a0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A0B0u;
}
} // namespace gh_r040

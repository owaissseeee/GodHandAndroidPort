#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: dcast__C16__user_type_infoRC9type_infoiPvPC9type_infoT3
// Address: 0x7c9870 - 0x7c98a0
void dcast__C16__user_type_infoRC9type_infoiPvPC9type_infoT3_0x7c9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dcast__C16__user_type_infoRC9type_infoiPvPC9type_infoT3_0x7c9870");
#endif

    switch (ctx->pc) {
        case 0x7c9884u: goto label_7c9884;
        default: break;
    }

    ctx->pc = 0x7c9870u;

    // 0x7c9870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c9874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c9874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7c9878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c9878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c987c: 0xc1f25f2  jal         func_7C97C8
    ctx->pc = 0x7C987Cu;
    SET_GPR_U32(ctx, 31, 0x7C9884u);
    ctx->pc = 0x7C9880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C987Cu;
    // 0x7c9880: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C97C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C97C8u, 0x7C987Cu, 0x7C9884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9884u;
label_7c9884:
    // 0x7c9884: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x7c9884u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x7c9888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c9888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c988c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7c988cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9894: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9894u;
        // 0x7c9898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C989Cu;
    // 0x7c989c: 0x0  nop
    ctx->pc = 0x7c989cu;
    // NOP
    ctx->pc = 0x7c98a0u;
}
} // namespace gh_mcport

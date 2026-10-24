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
// Function: __tf16__user_type_info
// Address: 0x7c9c48 - 0x7c9c98
void ps2___tf16__user_type_info_0x7c9c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf16__user_type_info_0x7c9c48");
#endif

    switch (ctx->pc) {
        case 0x7c9c6cu: goto label_7c9c6c;
        case 0x7c9c84u: goto label_7c9c84;
        default: break;
    }

    ctx->pc = 0x7c9c48u;

    // 0x7c9c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c9c4c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c9c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7c9c54: 0x8c6258e8  lw          $v0, 0x58E8($v1)
    ctx->pc = 0x7c9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D58E8u));
    // 0x7c9c58: 0x247058e8  addiu       $s0, $v1, 0x58E8
    ctx->pc = 0x7c9c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22760));
    // 0x7c9c5c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C9C5Cu;
    {
        const bool branch_taken_0x7c9c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9C5Cu;
        // 0x7c9c60: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9c5c) {
            ctx->pc = 0x7C9C84u;
            goto label_7c9c84;
        }
    }
    ctx->pc = 0x7C9C64u;
    // 0x7c9c64: 0xc1f278a  jal         func_7C9E28
    ctx->pc = 0x7C9C64u;
    SET_GPR_U32(ctx, 31, 0x7C9C6Cu);
    ctx->pc = 0x7C9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E28u, 0x7C9C64u, 0x7C9C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9C6Cu;
label_7c9c6c:
    // 0x7c9c6c: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c9c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c9c70: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7c9c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7c9c74: 0x24a50ff8  addiu       $a1, $a1, 0xFF8
    ctx->pc = 0x7c9c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4088));
    // 0x7c9c78: 0x24c61488  addiu       $a2, $a2, 0x1488
    ctx->pc = 0x7c9c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5256));
    // 0x7c9c7c: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7C9C7Cu;
    SET_GPR_U32(ctx, 31, 0x7C9C84u);
    ctx->pc = 0x7C9C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9C7Cu;
    // 0x7c9c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7C9C7Cu, 0x7C9C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9C84u;
label_7c9c84:
    // 0x7c9c84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7c9c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c9c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c9c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9c90: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9C90u;
        // 0x7c9c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9C98u;
}
} // namespace gh_mcport

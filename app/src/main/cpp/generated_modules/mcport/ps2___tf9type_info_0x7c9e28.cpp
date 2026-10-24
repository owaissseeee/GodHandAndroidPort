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
// Function: __tf9type_info
// Address: 0x7c9e28 - 0x7c9e68
void ps2___tf9type_info_0x7c9e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9type_info_0x7c9e28");
#endif

    switch (ctx->pc) {
        case 0x7c9e54u: goto label_7c9e54;
        default: break;
    }

    ctx->pc = 0x7c9e28u;

    // 0x7c9e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c9e2c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c9e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7c9e34: 0x8c621488  lw          $v0, 0x1488($v1)
    ctx->pc = 0x7c9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1488u));
    // 0x7c9e38: 0x24701488  addiu       $s0, $v1, 0x1488
    ctx->pc = 0x7c9e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5256));
    // 0x7c9e3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9E3Cu;
    {
        const bool branch_taken_0x7c9e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9E3Cu;
        // 0x7c9e40: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9e3c) {
            ctx->pc = 0x7C9E54u;
            goto label_7c9e54;
        }
    }
    ctx->pc = 0x7C9E44u;
    // 0x7c9e44: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c9e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c9e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c9e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9e4c: 0xc1f2614  jal         func_7C9850
    ctx->pc = 0x7C9E4Cu;
    SET_GPR_U32(ctx, 31, 0x7C9E54u);
    ctx->pc = 0x7C9E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9E4Cu;
    // 0x7c9e50: 0x24a51030  addiu       $a1, $a1, 0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9850u, 0x7C9E4Cu, 0x7C9E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9E54u;
label_7c9e54:
    // 0x7c9e54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7c9e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c9e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c9e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9e60: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9E60u;
        // 0x7c9e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9E68u;
}
} // namespace gh_mcport

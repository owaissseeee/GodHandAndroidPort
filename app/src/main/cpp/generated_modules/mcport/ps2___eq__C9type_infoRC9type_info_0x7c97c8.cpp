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
// Function: __eq__C9type_infoRC9type_info
// Address: 0x7c97c8 - 0x7c9808
void ps2___eq__C9type_infoRC9type_info_0x7c97c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eq__C9type_infoRC9type_info_0x7c97c8");
#endif

    switch (ctx->pc) {
        case 0x7c97e8u: goto label_7c97e8;
        default: break;
    }

    ctx->pc = 0x7c97c8u;

    // 0x7c97c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c97c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c97cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c97ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7c97d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c97d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c97d4: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C97D4u;
    {
        const bool branch_taken_0x7c97d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x7C97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C97D4u;
        // 0x7c97d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c97d4) {
            ctx->pc = 0x7C97F0u;
            goto label_7c97f0;
        }
    }
    ctx->pc = 0x7C97DCu;
    // 0x7c97dc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x7c97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7c97e0: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x7C97E0u;
    SET_GPR_U32(ctx, 31, 0x7C97E8u);
    ctx->pc = 0x7C97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C97E0u;
    // 0x7c97e4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x7C97E0u, 0x7C97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C97E8u;
label_7c97e8:
    // 0x7c97e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C97E8u;
    {
        const bool branch_taken_0x7c97e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C97E8u;
        // 0x7c97ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c97e8) {
            ctx->pc = 0x7C97F8u;
            goto label_7c97f8;
        }
    }
    ctx->pc = 0x7C97F0u;
label_7c97f0:
    // 0x7c97f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x7c97f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c97f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7c97f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7c97f8:
    // 0x7c97f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c97f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c97fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c97fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9800: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9800u;
        // 0x7c9804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9808u;
}
} // namespace gh_mcport

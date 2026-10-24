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
// Function: __tf14__si_type_info
// Address: 0x7c9bc0 - 0x7c9c10
void ps2___tf14__si_type_info_0x7c9bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf14__si_type_info_0x7c9bc0");
#endif

    switch (ctx->pc) {
        case 0x7c9be4u: goto label_7c9be4;
        case 0x7c9bfcu: goto label_7c9bfc;
        default: break;
    }

    ctx->pc = 0x7c9bc0u;

    // 0x7c9bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c9bc4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c9bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7c9bcc: 0x8c6258f8  lw          $v0, 0x58F8($v1)
    ctx->pc = 0x7c9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D58F8u));
    // 0x7c9bd0: 0x247058f8  addiu       $s0, $v1, 0x58F8
    ctx->pc = 0x7c9bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22776));
    // 0x7c9bd4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C9BD4u;
    {
        const bool branch_taken_0x7c9bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9BD4u;
        // 0x7c9bd8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9bd4) {
            ctx->pc = 0x7C9BFCu;
            goto label_7c9bfc;
        }
    }
    ctx->pc = 0x7C9BDCu;
    // 0x7c9bdc: 0xc1f2712  jal         func_7C9C48
    ctx->pc = 0x7C9BDCu;
    SET_GPR_U32(ctx, 31, 0x7C9BE4u);
    ctx->pc = 0x7C9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9C48u, 0x7C9BDCu, 0x7C9BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9BE4u;
label_7c9be4:
    // 0x7c9be4: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c9be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c9be8: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7c9be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7c9bec: 0x24a50fe0  addiu       $a1, $a1, 0xFE0
    ctx->pc = 0x7c9becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4064));
    // 0x7c9bf0: 0x24c658e8  addiu       $a2, $a2, 0x58E8
    ctx->pc = 0x7c9bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22760));
    // 0x7c9bf4: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7C9BF4u;
    SET_GPR_U32(ctx, 31, 0x7C9BFCu);
    ctx->pc = 0x7C9BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9BF4u;
    // 0x7c9bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7C9BF4u, 0x7C9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9BFCu;
label_7c9bfc:
    // 0x7c9bfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7c9bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c9c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c9c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9c08: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9C08u;
        // 0x7c9c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9C10u;
}
} // namespace gh_mcport

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
// Function: __tf19__pointer_type_info
// Address: 0x7cb2d0 - 0x7cb320
void ps2___tf19__pointer_type_info_0x7cb2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf19__pointer_type_info_0x7cb2d0");
#endif

    switch (ctx->pc) {
        case 0x7cb2f4u: goto label_7cb2f4;
        case 0x7cb30cu: goto label_7cb30c;
        default: break;
    }

    ctx->pc = 0x7cb2d0u;

    // 0x7cb2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cb2d4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cb2d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cb2dc: 0x8c625998  lw          $v0, 0x5998($v1)
    ctx->pc = 0x7cb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5998u));
    // 0x7cb2e0: 0x24705998  addiu       $s0, $v1, 0x5998
    ctx->pc = 0x7cb2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22936));
    // 0x7cb2e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7CB2E4u;
    {
        const bool branch_taken_0x7cb2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB2E4u;
        // 0x7cb2e8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb2e4) {
            ctx->pc = 0x7CB30Cu;
            goto label_7cb30c;
        }
    }
    ctx->pc = 0x7CB2ECu;
    // 0x7cb2ec: 0xc1f278a  jal         func_7C9E28
    ctx->pc = 0x7CB2ECu;
    SET_GPR_U32(ctx, 31, 0x7CB2F4u);
    ctx->pc = 0x7C9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E28u, 0x7CB2ECu, 0x7CB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB2F4u;
label_7cb2f4:
    // 0x7cb2f4: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cb2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cb2f8: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cb2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cb2fc: 0x24a51228  addiu       $a1, $a1, 0x1228
    ctx->pc = 0x7cb2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4648));
    // 0x7cb300: 0x24c61488  addiu       $a2, $a2, 0x1488
    ctx->pc = 0x7cb300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5256));
    // 0x7cb304: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CB304u;
    SET_GPR_U32(ctx, 31, 0x7CB30Cu);
    ctx->pc = 0x7CB308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB304u;
    // 0x7cb308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CB304u, 0x7CB30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB30Cu;
label_7cb30c:
    // 0x7cb30c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cb30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb318: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB318u;
        // 0x7cb31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB320u;
}
} // namespace gh_mcport

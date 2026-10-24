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
// Function: __tfUc
// Address: 0x7cafc0 - 0x7caff8
void ps2___tfUc_0x7cafc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfUc_0x7cafc0");
#endif

    ctx->pc = 0x7cafc0u;

    // 0x7cafc0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cafc4: 0x8c82fd18  lw          $v0, -0x2E8($a0)
    ctx->pc = 0x7cafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFD18u));
    // 0x7cafc8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CAFC8u;
    {
        const bool branch_taken_0x7cafc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAFC8u;
        // 0x7cafcc: 0x2485fd18  addiu       $a1, $a0, -0x2E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cafc8) {
            ctx->pc = 0x7CAFECu;
            goto label_7cafec;
        }
    }
    ctx->pc = 0x7CAFD0u;
    // 0x7cafd0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CAFD0u;
    {
        const bool branch_taken_0x7cafd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAFD0u;
        // 0x7cafd4: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cafd0) {
            ctx->pc = 0x7CAFECu;
            goto label_7cafec;
        }
    }
    ctx->pc = 0x7CAFD8u;
    // 0x7cafd8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cafdc: 0x24631118  addiu       $v1, $v1, 0x1118
    ctx->pc = 0x7cafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4376));
    // 0x7cafe0: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cafe4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cafe8: 0xac83fd18  sw          $v1, -0x2E8($a0)
    ctx->pc = 0x7cafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966552), GPR_U32(ctx, 3));
label_7cafec:
    // 0x7cafec: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAFECu;
        // 0x7caff0: 0x2482fd18  addiu       $v0, $a0, -0x2E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966552));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAFF4u;
    // 0x7caff4: 0x0  nop
    ctx->pc = 0x7caff4u;
    // NOP
    ctx->pc = 0x7caff8u;
}
} // namespace gh_mcport

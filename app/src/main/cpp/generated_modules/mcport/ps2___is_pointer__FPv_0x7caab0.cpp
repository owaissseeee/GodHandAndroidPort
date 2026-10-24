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
// Function: __is_pointer__FPv
// Address: 0x7caab0 - 0x7cab00
void ps2___is_pointer__FPv_0x7caab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___is_pointer__FPv_0x7caab0");
#endif

    switch (ctx->pc) {
        case 0x7caaf0u: goto label_7caaf0;
        default: break;
    }

    ctx->pc = 0x7caab0u;

    // 0x7caab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7caab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7caab4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x7caab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7caab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7caab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7caabc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x7CAABCu;
    {
        const bool branch_taken_0x7caabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAABCu;
        // 0x7caac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7caabc) {
            ctx->pc = 0x7CAAF0u;
            goto label_7caaf0;
        }
    }
    ctx->pc = 0x7CAAC4u;
    // 0x7caac4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7caac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7caac8: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7caac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7caacc: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7caaccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
    // 0x7caad0: 0x24a5b2d0  addiu       $a1, $a1, -0x4D30
    ctx->pc = 0x7caad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947536));
    // 0x7caad4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x7caad4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7caad8: 0x25089e28  addiu       $t0, $t0, -0x61D8
    ctx->pc = 0x7caad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942248));
    // 0x7caadc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7caadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7caae0: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x7caae0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7caae4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x7caae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x7caae8: 0xc1f2af2  jal         func_7CABC8
    ctx->pc = 0x7CAAE8u;
    SET_GPR_U32(ctx, 31, 0x7CAAF0u);
    ctx->pc = 0x7CAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CAAE8u;
    // 0x7caaec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CABC8u, 0x7CAAE8u, 0x7CAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CAAF0u;
label_7caaf0:
    // 0x7caaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7caaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7caaf4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7caaf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7caaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAAF8u;
        // 0x7caafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CAB00u;
}
} // namespace gh_mcport

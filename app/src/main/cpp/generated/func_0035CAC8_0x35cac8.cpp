#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0035CAC8
// Address: 0x35cac8 - 0x35cb20
void func_0035CAC8_0x35cac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035CAC8_0x35cac8");
#endif

    switch (ctx->pc) {
        case 0x35cae0u: goto label_35cae0;
        default: break;
    }

    ctx->pc = 0x35cac8u;

    // 0x35cac8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x35cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35cacc: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x35CACCu;
    {
        const bool branch_taken_0x35cacc = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x35CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CACCu;
        // 0x35cad0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cacc) {
            ctx->pc = 0x35CAFCu;
            goto label_35cafc;
        }
    }
    ctx->pc = 0x35CAD4u;
    // 0x35cad4: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x35cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x35cad8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x35cad8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cadc: 0x0  nop
    ctx->pc = 0x35cadcu;
    // NOP
label_35cae0:
    // 0x35cae0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35cae4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x35cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x35cae8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35caec: 0x0  nop
    ctx->pc = 0x35caecu;
    // NOP
    // 0x35caf0: 0x0  nop
    ctx->pc = 0x35caf0u;
    // NOP
    // 0x35caf4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35CAF4u;
    {
        const bool branch_taken_0x35caf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAF4u;
        // 0x35caf8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35caf4) {
            ctx->pc = 0x35CAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cae0;
        }
    }
    ctx->pc = 0x35CAFCu;
label_35cafc:
    // 0x35cafc: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x35cafcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35cb00: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35CB00u;
    {
        const bool branch_taken_0x35cb00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cb00) {
            ctx->pc = 0x35CB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CB00u;
            // 0x35cb04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CB08u;
            goto label_35cb08;
        }
    }
    ctx->pc = 0x35CB08u;
label_35cb08:
    // 0x35cb08: 0x1012  mflo        $v0
    ctx->pc = 0x35cb08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x35cb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CB14u;
    // 0x35cb14: 0x0  nop
    ctx->pc = 0x35cb14u;
    // NOP
    // 0x35cb18: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x35cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x35cb1c: 0x0  nop
    ctx->pc = 0x35cb1cu;
    // NOP
    ctx->pc = 0x35cb20u;
}

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

// Function: sceDmaSync
// Address: 0x397550 - 0x397590
void sceDmaSync_0x397550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDmaSync_0x397550");
#endif

    switch (ctx->pc) {
        case 0x397578u: goto label_397578;
        default: break;
    }

    ctx->pc = 0x397550u;

    // 0x397550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397558: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x397558u;
    {
        const bool branch_taken_0x397558 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x39755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397558u;
        // 0x39755c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397558) {
            ctx->pc = 0x397570u;
            goto label_397570;
        }
    }
    ctx->pc = 0x397560u;
    // 0x397560: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x397560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x397564: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x397564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x397568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x397568u;
    {
        const bool branch_taken_0x397568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397568u;
        // 0x39756c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x397568) {
            ctx->pc = 0x39757Cu;
            goto label_39757c;
        }
    }
    ctx->pc = 0x397570u;
label_397570:
    // 0x397570: 0xc0e5c0a  jal         func_397028
    ctx->pc = 0x397570u;
    SET_GPR_U32(ctx, 31, 0x397578u);
    ctx->pc = 0x397028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397028u, 0x397570u, 0x397578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397578u;
label_397578:
    // 0x397578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x397578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39757c:
    // 0x39757c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39757cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397580: 0x3e00008  jr          $ra
    ctx->pc = 0x397580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397580u;
        // 0x397584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397588u;
    // 0x397588: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39758c: 0x0  nop
    ctx->pc = 0x39758cu;
    // NOP
    ctx->pc = 0x397590u;
}

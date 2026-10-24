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

// Function: SUD_AnalyTypeDivField
// Address: 0x3607c8 - 0x360808
void SUD_AnalyTypeDivField_0x3607c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SUD_AnalyTypeDivField_0x3607c8");
#endif

    switch (ctx->pc) {
        case 0x3607f8u: goto label_3607f8;
        default: break;
    }

    ctx->pc = 0x3607c8u;

    // 0x3607c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3607c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3607cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3607CCu;
    {
        const bool branch_taken_0x3607cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3607D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607CCu;
        // 0x3607d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607cc) {
            ctx->pc = 0x3607DCu;
            goto label_3607dc;
        }
    }
    ctx->pc = 0x3607D4u;
    // 0x3607d4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3607D4u;
    {
        const bool branch_taken_0x3607d4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x3607D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607D4u;
        // 0x3607d8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607d4) {
            ctx->pc = 0x3607E8u;
            goto label_3607e8;
        }
    }
    ctx->pc = 0x3607DCu;
label_3607dc:
    // 0x3607dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3607DCu;
    {
        const bool branch_taken_0x3607dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3607E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3607DCu;
        // 0x3607e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607dc) {
            ctx->pc = 0x3607FCu;
            goto label_3607fc;
        }
    }
    ctx->pc = 0x3607E4u;
    // 0x3607e4: 0x0  nop
    ctx->pc = 0x3607e4u;
    // NOP
label_3607e8:
    // 0x3607e8: 0x24840012  addiu       $a0, $a0, 0x12
    ctx->pc = 0x3607e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18));
    // 0x3607ec: 0x24a5a218  addiu       $a1, $a1, -0x5DE8
    ctx->pc = 0x3607ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943256));
    // 0x3607f0: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x3607F0u;
    SET_GPR_U32(ctx, 31, 0x3607F8u);
    ctx->pc = 0x3607F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3607F0u;
    // 0x3607f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x3607F0u, 0x3607F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607F8u;
label_3607f8:
    // 0x3607f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3607f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3607fc:
    // 0x3607fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3607fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360800: 0x3e00008  jr          $ra
    ctx->pc = 0x360800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360800u;
        // 0x360804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360808u;
}

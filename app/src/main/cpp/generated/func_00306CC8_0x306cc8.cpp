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

// Function: func_00306CC8
// Address: 0x306cc8 - 0x306d10
void func_00306CC8_0x306cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306CC8_0x306cc8");
#endif

    switch (ctx->pc) {
        case 0x306cf8u: goto label_306cf8;
        default: break;
    }

    ctx->pc = 0x306cc8u;

    // 0x306cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306ccc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x306cccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x306cd0: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x306cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x306cd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x306CD4u;
    {
        const bool branch_taken_0x306cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CD4u;
        // 0x306cd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cd4) {
            ctx->pc = 0x306D00u;
            goto label_306d00;
        }
    }
    ctx->pc = 0x306CDCu;
    // 0x306cdc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x306cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x306ce0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x306ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x306ce4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x306ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306ce8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306CE8u;
    {
        const bool branch_taken_0x306ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CE8u;
        // 0x306cec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ce8) {
            ctx->pc = 0x306D00u;
            goto label_306d00;
        }
    }
    ctx->pc = 0x306CF0u;
    // 0x306cf0: 0xc0c1a82  jal         func_306A08
    ctx->pc = 0x306CF0u;
    SET_GPR_U32(ctx, 31, 0x306CF8u);
    ctx->pc = 0x306CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CF0u;
    // 0x306cf4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306A08u, 0x306CF0u, 0x306CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CF8u;
label_306cf8:
    // 0x306cf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x306CF8u;
    {
        const bool branch_taken_0x306cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CF8u;
        // 0x306cfc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cf8) {
            ctx->pc = 0x306D04u;
            goto label_306d04;
        }
    }
    ctx->pc = 0x306D00u;
label_306d00:
    // 0x306d00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x306d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306d04:
    // 0x306d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306d08: 0x3e00008  jr          $ra
    ctx->pc = 0x306D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D08u;
        // 0x306d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306D10u;
}

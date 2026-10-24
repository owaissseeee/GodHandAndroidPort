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

// Function: Obj33F8_InitIfNonNull_FA30
// Address: 0x33fa30 - 0x33fa68
void Obj33F8_InitIfNonNull_FA30_0x33fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33F8_InitIfNonNull_FA30_0x33fa30");
#endif

    ctx->pc = 0x33fa30u;

    // 0x33fa30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33fa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33fa34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33fa34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FA38u;
    {
        const bool branch_taken_0x33fa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA38u;
        // 0x33fa3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa38) {
            ctx->pc = 0x33FA58u;
            goto label_33fa58;
        }
    }
    ctx->pc = 0x33FA40u;
    // 0x33fa40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33fa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fa44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33fa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa48: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x33fa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x33fa4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x33fa50: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x33FA50u;
    ctx->pc = 0x33FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA50u;
    // 0x33fa54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33FA50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33FA58u;
label_33fa58:
    // 0x33fa58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33fa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x33FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA5Cu;
        // 0x33fa60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FA64u;
    // 0x33fa64: 0x0  nop
    ctx->pc = 0x33fa64u;
    // NOP
    ctx->pc = 0x33fa68u;
}

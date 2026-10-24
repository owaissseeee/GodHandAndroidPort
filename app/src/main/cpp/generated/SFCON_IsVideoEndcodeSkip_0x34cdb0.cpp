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

// Function: SFCON_IsVideoEndcodeSkip
// Address: 0x34cdb0 - 0x34cdf8
void SFCON_IsVideoEndcodeSkip_0x34cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFCON_IsVideoEndcodeSkip_0x34cdb0");
#endif

    switch (ctx->pc) {
        case 0x34cdc8u: goto label_34cdc8;
        case 0x34cddcu: goto label_34cddc;
        default: break;
    }

    ctx->pc = 0x34cdb0u;

    // 0x34cdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34cdb4: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x34cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x34cdb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34cdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34cdbc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34cdc0: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34CDC0u;
    SET_GPR_U32(ctx, 31, 0x34CDC8u);
    ctx->pc = 0x34CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CDC0u;
    // 0x34cdc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34CDC0u, 0x34CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDC8u;
label_34cdc8:
    // 0x34cdc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cdcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CDCCu;
    {
        const bool branch_taken_0x34cdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDCCu;
        // 0x34cdd0: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cdcc) {
            ctx->pc = 0x34CDE4u;
            goto label_34cde4;
        }
    }
    ctx->pc = 0x34CDD4u;
    // 0x34cdd4: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34CDD4u;
    SET_GPR_U32(ctx, 31, 0x34CDDCu);
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34CDD4u, 0x34CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CDDCu;
label_34cddc:
    // 0x34cddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CDDCu;
    {
        const bool branch_taken_0x34cddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDDCu;
        // 0x34cde0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cddc) {
            ctx->pc = 0x34CDECu;
            goto label_34cdec;
        }
    }
    ctx->pc = 0x34CDE4u;
label_34cde4:
    // 0x34cde4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34cde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34cdec:
    // 0x34cdec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34cdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x34CDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDF0u;
        // 0x34cdf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CDF8u;
}

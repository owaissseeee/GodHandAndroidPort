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

// Function: SFCON_IsSystemEndcodeSkip
// Address: 0x34cd68 - 0x34cdb0
void SFCON_IsSystemEndcodeSkip_0x34cd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFCON_IsSystemEndcodeSkip_0x34cd68");
#endif

    switch (ctx->pc) {
        case 0x34cd80u: goto label_34cd80;
        case 0x34cd94u: goto label_34cd94;
        default: break;
    }

    ctx->pc = 0x34cd68u;

    // 0x34cd68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34cd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34cd6c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x34cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x34cd70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34cd74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34cd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34cd78: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34CD78u;
    SET_GPR_U32(ctx, 31, 0x34CD80u);
    ctx->pc = 0x34CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD78u;
    // 0x34cd7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34CD78u, 0x34CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD80u;
label_34cd80:
    // 0x34cd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34cd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cd84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CD84u;
    {
        const bool branch_taken_0x34cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD84u;
        // 0x34cd88: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd84) {
            ctx->pc = 0x34CD9Cu;
            goto label_34cd9c;
        }
    }
    ctx->pc = 0x34CD8Cu;
    // 0x34cd8c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34CD8Cu;
    SET_GPR_U32(ctx, 31, 0x34CD94u);
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34CD8Cu, 0x34CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD94u;
label_34cd94:
    // 0x34cd94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CD94u;
    {
        const bool branch_taken_0x34cd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD94u;
        // 0x34cd98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd94) {
            ctx->pc = 0x34CDA4u;
            goto label_34cda4;
        }
    }
    ctx->pc = 0x34CD9Cu;
label_34cd9c:
    // 0x34cd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34cda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34cda4:
    // 0x34cda4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34cda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34cda8: 0x3e00008  jr          $ra
    ctx->pc = 0x34CDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CDA8u;
        // 0x34cdac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CDB0u;
}

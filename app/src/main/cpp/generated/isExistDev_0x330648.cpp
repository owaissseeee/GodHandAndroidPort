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

// Function: isExistDev
// Address: 0x330648 - 0x3306c8
void isExistDev_0x330648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isExistDev_0x330648");
#endif

    switch (ctx->pc) {
        case 0x330678u: goto label_330678;
        case 0x330688u: goto label_330688;
        default: break;
    }

    ctx->pc = 0x330648u;

    // 0x330648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x330648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33064c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x33064cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x330650: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x330650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x330654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330658: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x330658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33065c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330660: 0x24515e84  addiu       $s1, $v0, 0x5E84
    ctx->pc = 0x330660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24196));
    // 0x330664: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x330664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x330668: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x330668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33066c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x330670: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x330670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330674: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330678:
    // 0x330678: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x330678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x33067c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33067cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330680: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x330680u;
    SET_GPR_U32(ctx, 31, 0x330688u);
    ctx->pc = 0x330684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330680u;
    // 0x330684: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x330680u, 0x330688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330688u;
label_330688:
    // 0x330688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x330688u;
    {
        const bool branch_taken_0x330688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330688u;
        // 0x33068c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330688) {
            ctx->pc = 0x330698u;
            goto label_330698;
        }
    }
    ctx->pc = 0x330690u;
    // 0x330690: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x330690u;
    {
        const bool branch_taken_0x330690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330690u;
        // 0x330694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330690) {
            ctx->pc = 0x3306A8u;
            goto label_3306a8;
        }
    }
    ctx->pc = 0x330698u;
label_330698:
    // 0x330698: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x330698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x33069c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x33069Cu;
    {
        const bool branch_taken_0x33069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3306A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33069Cu;
        // 0x3306a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33069c) {
            ctx->pc = 0x330678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330678;
        }
    }
    ctx->pc = 0x3306A4u;
    // 0x3306a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3306a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3306a8:
    // 0x3306a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3306a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3306ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3306acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3306b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3306b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3306b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3306b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3306b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3306b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3306bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3306BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3306C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306BCu;
        // 0x3306c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3306BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3306C4u;
    // 0x3306c4: 0x0  nop
    ctx->pc = 0x3306c4u;
    // NOP
    ctx->pc = 0x3306c8u;
}

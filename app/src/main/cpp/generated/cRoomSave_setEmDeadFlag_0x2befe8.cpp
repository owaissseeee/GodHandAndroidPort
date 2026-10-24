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

// Function: cRoomSave_setEmDeadFlag
// Address: 0x2befe8 - 0x2bf078
void cRoomSave_setEmDeadFlag_0x2befe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRoomSave_setEmDeadFlag_0x2befe8");
#endif

    switch (ctx->pc) {
        case 0x2bf018u: goto label_2bf018;
        case 0x2bf020u: goto label_2bf020;
        case 0x2bf04cu: goto label_2bf04c;
        default: break;
    }

    ctx->pc = 0x2befe8u;

    // 0x2befe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2befe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2befec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2befecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2beff0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2beff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2beff4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2beff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2beff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2beffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2beffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf000: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2bf000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2bf004: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bf004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf00c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BF00Cu;
    {
        const bool branch_taken_0x2bf00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF00Cu;
        // 0x2bf010: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf00c) {
            ctx->pc = 0x2BF044u;
            goto label_2bf044;
        }
    }
    ctx->pc = 0x2BF014u;
    // 0x2bf014: 0x0  nop
    ctx->pc = 0x2bf014u;
    // NOP
label_2bf018:
    // 0x2bf018: 0xc0afbc2  jal         func_2BEF08
    ctx->pc = 0x2BF018u;
    SET_GPR_U32(ctx, 31, 0x2BF020u);
    ctx->pc = 0x2BF01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF018u;
    // 0x2bf01c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF08u, 0x2BF018u, 0x2BF020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF020u;
label_2bf020:
    // 0x2bf020: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf024: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF024u;
    {
        const bool branch_taken_0x2bf024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF024u;
        // 0x2bf028: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf024) {
            ctx->pc = 0x2BF044u;
            goto label_2bf044;
        }
    }
    ctx->pc = 0x2BF02Cu;
    // 0x2bf02c: 0x90620013  lbu         $v0, 0x13($v1)
    ctx->pc = 0x2bf02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x2bf030: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF030u;
    {
        const bool branch_taken_0x2bf030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2BF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF030u;
        // 0x2bf034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf030) {
            ctx->pc = 0x2BF044u;
            goto label_2bf044;
        }
    }
    ctx->pc = 0x2BF038u;
    // 0x2bf038: 0xa0730014  sb          $s3, 0x14($v1)
    ctx->pc = 0x2bf038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 19));
    // 0x2bf03c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF03Cu;
    {
        const bool branch_taken_0x2bf03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf03c) {
            ctx->pc = 0x2BF05Cu;
            goto label_2bf05c;
        }
    }
    ctx->pc = 0x2BF044u;
label_2bf044:
    // 0x2bf044: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x2BF044u;
    SET_GPR_U32(ctx, 31, 0x2BF04Cu);
    ctx->pc = 0x2BF048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF044u;
    // 0x2bf048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x2BF044u, 0x2BF04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF04Cu;
label_2bf04c:
    // 0x2bf04c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2bf04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bf050: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BF050u;
    {
        const bool branch_taken_0x2bf050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf050) {
            ctx->pc = 0x2BF054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF050u;
            // 0x2bf054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf018;
        }
    }
    ctx->pc = 0x2BF058u;
    // 0x2bf058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf05c:
    // 0x2bf05c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2bf05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf060: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2bf060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf068: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2bf068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf070: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF070u;
        // 0x2bf074: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF078u;
}

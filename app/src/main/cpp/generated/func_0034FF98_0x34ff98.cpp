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

// Function: func_0034FF98
// Address: 0x34ff98 - 0x350040
void func_0034FF98_0x34ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FF98_0x34ff98");
#endif

    switch (ctx->pc) {
        case 0x34ffb8u: goto label_34ffb8;
        case 0x34ffdcu: goto label_34ffdc;
        case 0x34ffe4u: goto label_34ffe4;
        case 0x34fff8u: goto label_34fff8;
        default: break;
    }

    ctx->pc = 0x34ff98u;

    // 0x34ff98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34ff98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34ff9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ffa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34ffa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34ffa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34ffac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34ffb0: 0xc0d403a  jal         func_3500E8
    ctx->pc = 0x34FFB0u;
    SET_GPR_U32(ctx, 31, 0x34FFB8u);
    ctx->pc = 0x34FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FFB0u;
    // 0x34ffb4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3500E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3500E8u, 0x34FFB0u, 0x34FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FFB8u;
label_34ffb8:
    // 0x34ffb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34ffb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ffbc: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x34FFBCu;
    {
        const bool branch_taken_0x34ffbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ffbc) {
            ctx->pc = 0x34FFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FFBCu;
            // 0x34ffc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350024u;
            goto label_350024;
        }
    }
    ctx->pc = 0x34FFC4u;
    // 0x34ffc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34ffc8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x34FFC8u;
    {
        const bool branch_taken_0x34ffc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFC8u;
        // 0x34ffcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ffc8) {
            ctx->pc = 0x350020u;
            goto label_350020;
        }
    }
    ctx->pc = 0x34FFD0u;
    // 0x34ffd0: 0x8e321f7c  lw          $s2, 0x1F7C($s1)
    ctx->pc = 0x34ffd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8060)));
    // 0x34ffd4: 0xc0d34fa  jal         func_34D3E8
    ctx->pc = 0x34FFD4u;
    SET_GPR_U32(ctx, 31, 0x34FFDCu);
    ctx->pc = 0x34FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FFD4u;
    // 0x34ffd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D3E8u, 0x34FFD4u, 0x34FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FFDCu;
label_34ffdc:
    // 0x34ffdc: 0xc0d4010  jal         func_350040
    ctx->pc = 0x34FFDCu;
    SET_GPR_U32(ctx, 31, 0x34FFE4u);
    ctx->pc = 0x34FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FFDCu;
    // 0x34ffe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350040u, 0x34FFDCu, 0x34FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FFE4u;
label_34ffe4:
    // 0x34ffe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ffe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ffe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ffec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34ffecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fff0: 0xc0d4012  jal         func_350048
    ctx->pc = 0x34FFF0u;
    SET_GPR_U32(ctx, 31, 0x34FFF8u);
    ctx->pc = 0x34FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FFF0u;
    // 0x34fff4: 0x26330d30  addiu       $s3, $s1, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350048u, 0x34FFF0u, 0x34FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FFF8u;
label_34fff8:
    // 0x34fff8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x34FFF8u;
    {
        const bool branch_taken_0x34fff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fff8) {
            ctx->pc = 0x34FFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FFF8u;
            // 0x34fffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350024u;
            goto label_350024;
        }
    }
    ctx->pc = 0x350000u;
    // 0x350000: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x350000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x350004: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x350004u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x350008: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x350008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
    // 0x35000c: 0xfe630150  sd          $v1, 0x150($s3)
    ctx->pc = 0x35000cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 336), GPR_U64(ctx, 3));
    // 0x350010: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x350010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x350014: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x350014u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x350018: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x350018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x35001c: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x35001cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
label_350020:
    // 0x350020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350024:
    // 0x350024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350028: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35002c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35002cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350034: 0x3e00008  jr          $ra
    ctx->pc = 0x350034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350034u;
        // 0x350038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35003Cu;
    // 0x35003c: 0x0  nop
    ctx->pc = 0x35003cu;
    // NOP
    ctx->pc = 0x350040u;
}

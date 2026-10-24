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

// Function: func_00171140
// Address: 0x171140 - 0x171200
void func_00171140_0x171140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171140_0x171140");
#endif

    switch (ctx->pc) {
        case 0x171154u: goto label_171154;
        case 0x171164u: goto label_171164;
        case 0x171178u: goto label_171178;
        case 0x171188u: goto label_171188;
        default: break;
    }

    ctx->pc = 0x171140u;

    // 0x171140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171144: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x171148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17114c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17114Cu;
    SET_GPR_U32(ctx, 31, 0x171154u);
    ctx->pc = 0x171150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17114Cu;
    // 0x171150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17114Cu, 0x171154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171154u;
label_171154:
    // 0x171154: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x171154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x171158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17115c: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x17115Cu;
    SET_GPR_U32(ctx, 31, 0x171164u);
    ctx->pc = 0x171160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17115Cu;
    // 0x171160: 0x26060100  addiu       $a2, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717C0u, 0x17115Cu, 0x171164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171164u;
label_171164:
    // 0x171164: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x171164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x171168: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x171168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17116c: 0x244909e8  addiu       $t1, $v0, 0x9E8
    ctx->pc = 0x17116cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2536));
    // 0x171170: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x171170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171174: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x171174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_171178:
    // 0x171178: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x171178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17117c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x17117cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171180: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x171180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x171184: 0x0  nop
    ctx->pc = 0x171184u;
    // NOP
label_171188:
    // 0x171188: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x171188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17118c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17118cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171190: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x171190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x171194: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171194u;
    {
        const bool branch_taken_0x171194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171194u;
        // 0x171198: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171194) {
            ctx->pc = 0x1711A4u;
            goto label_1711a4;
        }
    }
    ctx->pc = 0x17119Cu;
    // 0x17119c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17119cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1711a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1711a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1711a4:
    // 0x1711a4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1711a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1711a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1711A8u;
    {
        const bool branch_taken_0x1711a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711A8u;
        // 0x1711ac: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711a8) {
            ctx->pc = 0x1711C0u;
            goto label_1711c0;
        }
    }
    ctx->pc = 0x1711B0u;
    // 0x1711b0: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1711b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1711b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1711b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1711b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1711B8u;
    {
        const bool branch_taken_0x1711b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711B8u;
        // 0x1711bc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711b8) {
            ctx->pc = 0x1711C4u;
            goto label_1711c4;
        }
    }
    ctx->pc = 0x1711C0u;
label_1711c0:
    // 0x1711c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1711c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1711c4:
    // 0x1711c4: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1711c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1711c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1711c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1711cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1711ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1711d0: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x1711d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x1711d4: 0x4c1ffec  bgez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1711D4u;
    {
        const bool branch_taken_0x1711d4 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1711D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711D4u;
        // 0x1711d8: 0xac620154  sw          $v0, 0x154($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711d4) {
            ctx->pc = 0x171188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171188;
        }
    }
    ctx->pc = 0x1711DCu;
    // 0x1711dc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1711dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711e0: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1711e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1711e4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1711E4u;
    {
        const bool branch_taken_0x1711e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1711E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711E4u;
        // 0x1711e8: 0x691021  addu        $v0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711e4) {
            ctx->pc = 0x171178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171178;
        }
    }
    ctx->pc = 0x1711ECu;
    // 0x1711ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1711ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1711f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1711f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1711f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1711f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1711F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711F8u;
        // 0x1711fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1711F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171200u;
}

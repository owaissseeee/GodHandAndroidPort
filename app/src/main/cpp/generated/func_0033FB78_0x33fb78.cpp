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

// Function: func_0033FB78
// Address: 0x33fb78 - 0x33fc70
void func_0033FB78_0x33fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033FB78_0x33fb78");
#endif

    switch (ctx->pc) {
        case 0x33fbe8u: goto label_33fbe8;
        case 0x33fc28u: goto label_33fc28;
        case 0x33fc50u: goto label_33fc50;
        default: break;
    }

    ctx->pc = 0x33fb78u;

    // 0x33fb78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33fb7c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x33fb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x33fb80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33fb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb84: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x33fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x33fb88: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x33fb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fb8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33fb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33fb90: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33fb94: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FB94u;
    {
        const bool branch_taken_0x33fb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x33FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB94u;
        // 0x33fb98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb94) {
            ctx->pc = 0x33FBA8u;
            goto label_33fba8;
        }
    }
    ctx->pc = 0x33FB9Cu;
    // 0x33fb9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33fba0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33fba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33fba8:
    // 0x33fba8: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x33FBA8u;
    {
        const bool branch_taken_0x33fba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33fba8) {
            ctx->pc = 0x33FBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FBA8u;
            // 0x33fbac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FC5Cu;
            goto label_33fc5c;
        }
    }
    ctx->pc = 0x33FBB0u;
    // 0x33fbb0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x33fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x33fbb4: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x33FBB4u;
    {
        const bool branch_taken_0x33fbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x33fbb4) {
            ctx->pc = 0x33FBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FBB4u;
            // 0x33fbb8: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FBF0u;
            goto label_33fbf0;
        }
    }
    ctx->pc = 0x33FBBCu;
    // 0x33fbbc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x33fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33fbc0: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x33fbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x33fbc4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x33fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33fbc8: 0x260a0034  addiu       $t2, $s0, 0x34
    ctx->pc = 0x33fbc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x33fbcc: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x33fbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33fbd0: 0x86080030  lh          $t0, 0x30($s0)
    ctx->pc = 0x33fbd0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x33fbd4: 0x86090032  lh          $t1, 0x32($s0)
    ctx->pc = 0x33fbd4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x33fbd8: 0x860b0036  lh          $t3, 0x36($s0)
    ctx->pc = 0x33fbd8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x33fbdc: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x33fbdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x33fbe0: 0xc0d07c0  jal         func_341F00
    ctx->pc = 0x33FBE0u;
    SET_GPR_U32(ctx, 31, 0x33FBE8u);
    ctx->pc = 0x33FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FBE0u;
    // 0x33fbe4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341F00u, 0x33FBE0u, 0x33FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FBE8u;
label_33fbe8:
    // 0x33fbe8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33FBE8u;
    {
        const bool branch_taken_0x33fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBE8u;
        // 0x33fbec: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fbe8) {
            ctx->pc = 0x33FC50u;
            goto label_33fc50;
        }
    }
    ctx->pc = 0x33FBF0u;
label_33fbf0:
    // 0x33fbf0: 0x260c0034  addiu       $t4, $s0, 0x34
    ctx->pc = 0x33fbf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x33fbf4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x33fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33fbf8: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x33fbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x33fbfc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x33fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33fc00: 0x2609002c  addiu       $t1, $s0, 0x2C
    ctx->pc = 0x33fc00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x33fc04: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x33fc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33fc08: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x33fc08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33fc0c: 0x860a0030  lh          $t2, 0x30($s0)
    ctx->pc = 0x33fc0cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x33fc10: 0x860b0032  lh          $t3, 0x32($s0)
    ctx->pc = 0x33fc10u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x33fc14: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x33fc14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x33fc18: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x33fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x33fc1c: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x33fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x33fc20: 0xc0d09fc  jal         func_3427F0
    ctx->pc = 0x33FC20u;
    SET_GPR_U32(ctx, 31, 0x33FC28u);
    ctx->pc = 0x33FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FC20u;
    // 0x33fc24: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3427F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3427F0u, 0x33FC20u, 0x33FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FC28u;
label_33fc28:
    // 0x33fc28: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x33fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x33fc2c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x33fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33fc30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fc34: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x33fc34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x33fc38: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33fc3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fc40: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FC40u;
    {
        const bool branch_taken_0x33fc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x33FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC40u;
        // 0x33fc44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc40) {
            ctx->pc = 0x33FC54u;
            goto label_33fc54;
        }
    }
    ctx->pc = 0x33FC48u;
    // 0x33fc48: 0xc0cfeda  jal         func_33FB68
    ctx->pc = 0x33FC48u;
    SET_GPR_U32(ctx, 31, 0x33FC50u);
    ctx->pc = 0x33FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB68u, 0x33FC48u, 0x33FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FC50u;
label_33fc50:
    // 0x33fc50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33fc54:
    // 0x33fc54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33fc58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x33fc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33fc5c:
    // 0x33fc5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x33fc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33fc60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33fc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33fc64: 0x3e00008  jr          $ra
    ctx->pc = 0x33FC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC64u;
        // 0x33fc68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FC6Cu;
    // 0x33fc6c: 0x0  nop
    ctx->pc = 0x33fc6cu;
    // NOP
    ctx->pc = 0x33fc70u;
}

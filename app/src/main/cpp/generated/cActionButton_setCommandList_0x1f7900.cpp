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

// Function: cActionButton_setCommandList
// Address: 0x1f7900 - 0x1f7a30
void cActionButton_setCommandList_0x1f7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cActionButton_setCommandList_0x1f7900");
#endif

    switch (ctx->pc) {
        case 0x1f7938u: goto label_1f7938;
        case 0x1f79b0u: goto label_1f79b0;
        case 0x1f7a08u: goto label_1f7a08;
        default: break;
    }

    ctx->pc = 0x1f7900u;

    // 0x1f7900: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f7904: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1f7904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1f7908: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f7908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f790c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f790cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7910: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f7910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f7914: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f7914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f7918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f791c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f791cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7920: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1f7920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1f7924: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f7924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7928: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f7928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f792c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7930: 0xc07dde6  jal         func_1F7798
    ctx->pc = 0x1F7930u;
    SET_GPR_U32(ctx, 31, 0x1F7938u);
    ctx->pc = 0x1F7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7930u;
    // 0x1f7934: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7798u, 0x1F7930u, 0x1F7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7938u;
label_1f7938:
    // 0x1f7938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f793c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F793Cu;
    {
        const bool branch_taken_0x1f793c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f793c) {
            ctx->pc = 0x1F7940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F793Cu;
            // 0x1f7940: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F794Cu;
            goto label_1f794c;
        }
    }
    ctx->pc = 0x1F7944u;
    // 0x1f7944: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1F7944u;
    {
        const bool branch_taken_0x1f7944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7944u;
        // 0x1f7948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7944) {
            ctx->pc = 0x1F7A0Cu;
            goto label_1f7a0c;
        }
    }
    ctx->pc = 0x1F794Cu;
label_1f794c:
    // 0x1f794c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1f794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1f7950: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1f7950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1f7954: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1f7954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1f7958: 0x244285b0  addiu       $v0, $v0, -0x7A50
    ctx->pc = 0x1f7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935984));
    // 0x1f795c: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1f795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1f7960: 0x248486a0  addiu       $a0, $a0, -0x7960
    ctx->pc = 0x1f7960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936224));
    // 0x1f7964: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x1f7964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x1f7968: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1f7968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1f796c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f796cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7970: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1f7970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1f7974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7978: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1f7978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1f797c: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x1f797cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x1f7980: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1f7980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1f7984: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x1f7984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x1f7988: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x1f7988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
    // 0x1f798c: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x1f798cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x1f7990: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1f7990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1f7994: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1f7994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1f7998: 0xae150018  sw          $s5, 0x18($s0)
    ctx->pc = 0x1f7998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
    // 0x1f799c: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x1f799cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f79a0: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x1f79a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f79a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F79A4u;
    {
        const bool branch_taken_0x1f79a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79A4u;
        // 0x1f79a8: 0xa2110034  sb          $s1, 0x34($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79a4) {
            ctx->pc = 0x1F79F8u;
            goto label_1f79f8;
        }
    }
    ctx->pc = 0x1F79ACu;
    // 0x1f79ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f79acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f79b0:
    // 0x1f79b0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1f79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1f79b4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1f79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1f79b8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1f79b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f79bc: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1f79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1f79c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f79c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1f79c8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f79cc: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x1f79ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f79d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f79d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f79d4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1f79d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f79d8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1f79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f79dc: 0x90e40008  lbu         $a0, 0x8($a3)
    ctx->pc = 0x1f79dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f79e0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1f79e4: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1f79e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1f79e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f79ec: 0x111102b  sltu        $v0, $t0, $s1
    ctx->pc = 0x1f79ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f79f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F79F0u;
    {
        const bool branch_taken_0x1f79f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79F0u;
        // 0x1f79f4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79f0) {
            ctx->pc = 0x1F79B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79b0;
        }
    }
    ctx->pc = 0x1F79F8u;
label_1f79f8:
    // 0x1f79f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f79f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f79fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f79fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a00: 0xc07de00  jal         func_1F7800
    ctx->pc = 0x1F7A00u;
    SET_GPR_U32(ctx, 31, 0x1F7A08u);
    ctx->pc = 0x1F7A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A00u;
    // 0x1f7a04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7800u, 0x1F7A00u, 0x1F7A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A08u;
label_1f7a08:
    // 0x1f7a08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7a0c:
    // 0x1f7a0c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f7a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7a10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f7a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7a14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f7a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7a18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f7a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7a1c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1f7a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7a20: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1f7a20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7a28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A28u;
        // 0x1f7a2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7A30u;
}

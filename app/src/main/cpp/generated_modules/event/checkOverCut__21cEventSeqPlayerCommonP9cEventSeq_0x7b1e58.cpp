#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: checkOverCut__21cEventSeqPlayerCommonP9cEventSeq
// Address: 0x7b1e58 - 0x7b1f30
void checkOverCut__21cEventSeqPlayerCommonP9cEventSeq_0x7b1e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkOverCut__21cEventSeqPlayerCommonP9cEventSeq_0x7b1e58");
#endif

    switch (ctx->pc) {
        case 0x7b1eb0u: goto label_7b1eb0;
        case 0x7b1ee0u: goto label_7b1ee0;
        case 0x7b1f00u: goto label_7b1f00;
        default: break;
    }

    ctx->pc = 0x7b1e58u;

    // 0x7b1e58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7b1e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7b1e5c: 0x3c03007b  lui         $v1, 0x7B
    ctx->pc = 0x7b1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
    // 0x7b1e60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x7b1e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x7b1e64: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7b1e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7b1e68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7b1e68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1e6c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7b1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7b1e70: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7b1e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7b1e74: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x7b1e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x7b1e78: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x7b1e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x7b1e7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7b1e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7b1e80: 0x8c665288  lw          $a2, 0x5288($v1)
    ctx->pc = 0x7b1e80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7B5288u));
    // 0x7b1e84: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x7b1e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x7b1e88: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x7b1e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x7b1e8c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x7B1E8Cu;
    {
        const bool branch_taken_0x7b1e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1E8Cu;
        // 0x7b1e90: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1e8c) {
            ctx->pc = 0x7B1F10u;
            goto label_7b1f10;
        }
    }
    ctx->pc = 0x7B1E94u;
    // 0x7b1e94: 0x82740005  lb          $s4, 0x5($s3)
    ctx->pc = 0x7b1e94u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x7b1e98: 0x24d0ffff  addiu       $s0, $a2, -0x1
    ctx->pc = 0x7b1e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x7b1e9c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7b1e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b1ea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7b1ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1ea4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7B1EA4u;
    {
        const bool branch_taken_0x7b1ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1EA4u;
        // 0x7b1ea8: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1ea4) {
            ctx->pc = 0x7B1EC4u;
            goto label_7b1ec4;
        }
    }
    ctx->pc = 0x7B1EACu;
    // 0x7b1eac: 0x0  nop
    ctx->pc = 0x7b1eacu;
    // NOP
label_7b1eb0:
    // 0x7b1eb0: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B1EB0u;
    {
        const bool branch_taken_0x7b1eb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x7b1eb0) {
            ctx->pc = 0x7B1EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B1EB0u;
            // 0x7b1eb4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B1EC0u;
            goto label_7b1ec0;
        }
    }
    ctx->pc = 0x7B1EB8u;
    // 0x7b1eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7B1EB8u;
    {
        const bool branch_taken_0x7b1eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1EB8u;
        // 0x7b1ebc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1eb8) {
            ctx->pc = 0x7B1EC4u;
            goto label_7b1ec4;
        }
    }
    ctx->pc = 0x7B1EC0u;
label_7b1ec0:
    // 0x7b1ec0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7b1ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b1ec4:
    // 0x7b1ec4: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B1EC4u;
    {
        const bool branch_taken_0x7b1ec4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x7B1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1EC4u;
        // 0x7b1ec8: 0x3c04007b  lui         $a0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1ec4) {
            ctx->pc = 0x7B1EECu;
            goto label_7b1eec;
        }
    }
    ctx->pc = 0x7B1ECCu;
    // 0x7b1ecc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7b1eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1ed0: 0x248458d8  addiu       $a0, $a0, 0x58D8
    ctx->pc = 0x7b1ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    // 0x7b1ed4: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x7b1ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x7b1ed8: 0xc1ec182  jal         func_7B0608
    ctx->pc = 0x7B1ED8u;
    SET_GPR_U32(ctx, 31, 0x7B1EE0u);
    ctx->pc = 0x7B1EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1ED8u;
    // 0x7b1edc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0608u, 0x7B1ED8u, 0x7B1EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1EE0u;
label_7b1ee0:
    // 0x7b1ee0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7b1ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1ee4: 0x1220fff2  beqz        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x7B1EE4u;
    {
        const bool branch_taken_0x7b1ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1EE4u;
        // 0x7b1ee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1ee4) {
            ctx->pc = 0x7B1EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b1eb0;
        }
    }
    ctx->pc = 0x7B1EECu;
label_7b1eec:
    // 0x7b1eec: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x7b1eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x7b1ef0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7b1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1ef4: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x7b1ef4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x7b1ef8: 0xc0b1354  jal         func_2C4D50
    ctx->pc = 0x7B1EF8u;
    SET_GPR_U32(ctx, 31, 0x7B1F00u);
    ctx->pc = 0x7B1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1EF8u;
    // 0x7b1efc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D50u, 0x7B1EF8u, 0x7B1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1F00u;
label_7b1f00:
    // 0x7b1f00: 0xa6710006  sh          $s1, 0x6($s3)
    ctx->pc = 0x7b1f00u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x7b1f04: 0xa2700003  sb          $s0, 0x3($s3)
    ctx->pc = 0x7b1f04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x7b1f08: 0xa2720004  sb          $s2, 0x4($s3)
    ctx->pc = 0x7b1f08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 18));
    // 0x7b1f0c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7b1f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7b1f10:
    // 0x7b1f10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7b1f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b1f14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7b1f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b1f18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x7b1f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b1f1c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x7b1f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b1f20: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x7b1f20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b1f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7b1f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b1f28: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1F28u;
        // 0x7b1f2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B1F30u;
}
} // namespace gh_event

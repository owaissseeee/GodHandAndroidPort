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

// Function: UpdateSlotHitCounters_190BF0
// Address: 0x190bf0 - 0x190cc8
void UpdateSlotHitCounters_190BF0_0x190bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSlotHitCounters_190BF0_0x190bf0");
#endif

    switch (ctx->pc) {
        case 0x190c28u: goto label_190c28;
        case 0x190c34u: goto label_190c34;
        default: break;
    }

    ctx->pc = 0x190bf0u;

    // 0x190bf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x190bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x190bf4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x190bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x190bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190bfc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x190bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x190c00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x190c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x190c04: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x190c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x190c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x190c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x190c0c: 0x26120f88  addiu       $s2, $s0, 0xF88
    ctx->pc = 0x190c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3976));
    // 0x190c10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x190c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x190c14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x190c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c18: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x190c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x190c1c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x190c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190c20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190c24: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x190c24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190c28:
    // 0x190c28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x190c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190c2c: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x190C2Cu;
    SET_GPR_U32(ctx, 31, 0x190C34u);
    ctx->pc = 0x190C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C2Cu;
    // 0x190c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x190C2Cu, 0x190C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C34u;
label_190c34:
    // 0x190c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x190c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c38: 0x54b50016  bnel        $a1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x190C38u;
    {
        const bool branch_taken_0x190c38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x190c38) {
            ctx->pc = 0x190C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190C38u;
            // 0x190c3c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190C94u;
            goto label_190c94;
        }
    }
    ctx->pc = 0x190C40u;
    // 0x190c40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190c44: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x190c44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190c48: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x190c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x190c4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x190c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190c50: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x190c54: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x190C54u;
    {
        const bool branch_taken_0x190c54 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x190C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C54u;
        // 0x190c58: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c54) {
            ctx->pc = 0x190C80u;
            goto label_190c80;
        }
    }
    ctx->pc = 0x190C5Cu;
    // 0x190c5c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x190c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x190c60: 0xa2130f90  sb          $s3, 0xF90($s0)
    ctx->pc = 0x190c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3984), (uint8_t)GPR_U32(ctx, 19));
    // 0x190c64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x190c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x190c68: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x190c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x190c6c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x190c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x190c70: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x190c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x190c74: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x190c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x190c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x190C78u;
    {
        const bool branch_taken_0x190c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C78u;
        // 0x190c7c: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c78) {
            ctx->pc = 0x190C90u;
            goto label_190c90;
        }
    }
    ctx->pc = 0x190C80u;
label_190c80:
    // 0x190c80: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x190c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x190c84: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x190c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x190c88: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x190c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x190c8c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x190c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_190c90:
    // 0x190c90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_190c94:
    // 0x190c94: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x190c94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x190c98: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x190c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x190c9c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x190C9Cu;
    {
        const bool branch_taken_0x190c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C9Cu;
        // 0x190ca0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c9c) {
            ctx->pc = 0x190C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190c28;
        }
    }
    ctx->pc = 0x190CA4u;
    // 0x190ca4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x190ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190ca8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x190ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190cac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x190cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190cb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x190cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190cb4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x190cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190cb8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x190cb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x190CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CC0u;
        // 0x190cc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190CC8u;
}

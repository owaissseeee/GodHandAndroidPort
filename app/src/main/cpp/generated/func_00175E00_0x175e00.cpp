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

// Function: func_00175E00
// Address: 0x175e00 - 0x175ed8
void func_00175E00_0x175e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00175E00_0x175e00");
#endif

    switch (ctx->pc) {
        case 0x175e38u: goto label_175e38;
        case 0x175e44u: goto label_175e44;
        default: break;
    }

    ctx->pc = 0x175e00u;

    // 0x175e00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x175e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x175e04: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x175e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x175e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e0c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x175e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x175e10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x175e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x175e14: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x175e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x175e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x175e1c: 0x26120d38  addiu       $s2, $s0, 0xD38
    ctx->pc = 0x175e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3384));
    // 0x175e20: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x175e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x175e24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x175e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e28: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x175e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x175e2c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x175e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175e34: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x175e34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175e38:
    // 0x175e38: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x175e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175e3c: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x175E3Cu;
    SET_GPR_U32(ctx, 31, 0x175E44u);
    ctx->pc = 0x175E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E3Cu;
    // 0x175e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x175E3Cu, 0x175E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E44u;
label_175e44:
    // 0x175e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e48: 0x54b50016  bnel        $a1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x175E48u;
    {
        const bool branch_taken_0x175e48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x175e48) {
            ctx->pc = 0x175E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175E48u;
            // 0x175e4c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175EA4u;
            goto label_175ea4;
        }
    }
    ctx->pc = 0x175E50u;
    // 0x175e50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175e54: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x175e54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x175e58: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x175e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x175e5c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x175e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175e60: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x175e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x175e64: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x175E64u;
    {
        const bool branch_taken_0x175e64 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x175E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E64u;
        // 0x175e68: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e64) {
            ctx->pc = 0x175E90u;
            goto label_175e90;
        }
    }
    ctx->pc = 0x175E6Cu;
    // 0x175e6c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x175e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x175e70: 0xa2130d3c  sb          $s3, 0xD3C($s0)
    ctx->pc = 0x175e70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3388), (uint8_t)GPR_U32(ctx, 19));
    // 0x175e74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x175e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x175e78: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x175e78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x175e7c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x175e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x175e80: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x175e80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x175e84: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x175e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x175e88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x175E88u;
    {
        const bool branch_taken_0x175e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E88u;
        // 0x175e8c: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175e88) {
            ctx->pc = 0x175EA0u;
            goto label_175ea0;
        }
    }
    ctx->pc = 0x175E90u;
label_175e90:
    // 0x175e90: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x175e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x175e94: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x175e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x175e98: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x175e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x175e9c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x175e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_175ea0:
    // 0x175ea0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x175ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_175ea4:
    // 0x175ea4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x175ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x175ea8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x175ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x175eac: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x175EACu;
    {
        const bool branch_taken_0x175eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EACu;
        // 0x175eb0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175eac) {
            ctx->pc = 0x175E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175e38;
        }
    }
    ctx->pc = 0x175EB4u;
    // 0x175eb4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x175eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x175eb8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x175eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x175ebc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x175ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175ec0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175ec4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x175ec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175ec8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x175ec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x175ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ED0u;
        // 0x175ed4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175ED8u;
}

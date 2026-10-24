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

// Function: func_001A2D50
// Address: 0x1a2d50 - 0x1a2e28
void func_001A2D50_0x1a2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A2D50_0x1a2d50");
#endif

    switch (ctx->pc) {
        case 0x1a2d88u: goto label_1a2d88;
        case 0x1a2d94u: goto label_1a2d94;
        default: break;
    }

    ctx->pc = 0x1a2d50u;

    // 0x1a2d50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a2d54: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a2d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a2d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d5c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a2d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a2d60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a2d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a2d64: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x1a2d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1a2d68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a2d6c: 0x26120d9a  addiu       $s2, $s0, 0xD9A
    ctx->pc = 0x1a2d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3482));
    // 0x1a2d70: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1a2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1a2d74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a2d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d78: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1a2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1a2d7c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1a2d7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2d84: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a2d84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2d88:
    // 0x1a2d88: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a2d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a2d8c: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1A2D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A2D94u);
    ctx->pc = 0x1A2D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D8Cu;
    // 0x1a2d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1A2D8Cu, 0x1A2D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D94u;
label_1a2d94:
    // 0x1a2d94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a2d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d98: 0x54b50016  bnel        $a1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A2D98u;
    {
        const bool branch_taken_0x1a2d98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x1a2d98) {
            ctx->pc = 0x1A2D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2D98u;
            // 0x1a2d9c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2DF4u;
            goto label_1a2df4;
        }
    }
    ctx->pc = 0x1A2DA0u;
    // 0x1a2da0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a2da4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1a2da4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a2da8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1a2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1a2dac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2db0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1a2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a2db4: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2DB4u;
    {
        const bool branch_taken_0x1a2db4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DB4u;
        // 0x1a2db8: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2db4) {
            ctx->pc = 0x1A2DE0u;
            goto label_1a2de0;
        }
    }
    ctx->pc = 0x1A2DBCu;
    // 0x1a2dbc: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1a2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1a2dc0: 0xa2130d9e  sb          $s3, 0xD9E($s0)
    ctx->pc = 0x1a2dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3486), (uint8_t)GPR_U32(ctx, 19));
    // 0x1a2dc4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a2dc8: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x1a2dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x1a2dcc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1a2dccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2dd0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a2dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2dd4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a2dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2DD8u;
    {
        const bool branch_taken_0x1a2dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DD8u;
        // 0x1a2ddc: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2dd8) {
            ctx->pc = 0x1A2DF0u;
            goto label_1a2df0;
        }
    }
    ctx->pc = 0x1A2DE0u;
label_1a2de0:
    // 0x1a2de0: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x1a2de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a2de4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1a2de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2de8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a2de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2dec: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a2decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a2df0:
    // 0x1a2df0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a2df0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a2df4:
    // 0x1a2df4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1a2df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1a2df8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1a2df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2dfc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1A2DFCu;
    {
        const bool branch_taken_0x1a2dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DFCu;
        // 0x1a2e00: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2dfc) {
            ctx->pc = 0x1A2D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2d88;
        }
    }
    ctx->pc = 0x1A2E04u;
    // 0x1a2e04: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a2e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2e08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a2e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2e0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a2e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2e10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a2e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2e14: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1a2e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2e18: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1a2e18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E20u;
        // 0x1a2e24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E28u;
}

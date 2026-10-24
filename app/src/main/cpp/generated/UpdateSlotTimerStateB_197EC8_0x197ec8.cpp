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

// Function: UpdateSlotTimerStateB_197EC8
// Address: 0x197ec8 - 0x197fa0
void UpdateSlotTimerStateB_197EC8_0x197ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSlotTimerStateB_197EC8_0x197ec8");
#endif

    switch (ctx->pc) {
        case 0x197f00u: goto label_197f00;
        case 0x197f0cu: goto label_197f0c;
        default: break;
    }

    ctx->pc = 0x197ec8u;

    // 0x197ec8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x197ecc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x197eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x197ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ed4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x197ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x197ed8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x197ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x197edc: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x197edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x197ee0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x197ee4: 0x261209d8  addiu       $s2, $s0, 0x9D8
    ctx->pc = 0x197ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2520));
    // 0x197ee8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x197ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x197eec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x197eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ef0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x197ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x197ef4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197efc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x197efcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197f00:
    // 0x197f00: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x197f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197f04: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x197F04u;
    SET_GPR_U32(ctx, 31, 0x197F0Cu);
    ctx->pc = 0x197F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F04u;
    // 0x197f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x197F04u, 0x197F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F0Cu;
label_197f0c:
    // 0x197f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f10: 0x54b50016  bnel        $a1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x197F10u;
    {
        const bool branch_taken_0x197f10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x197f10) {
            ctx->pc = 0x197F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197F10u;
            // 0x197f14: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197F6Cu;
            goto label_197f6c;
        }
    }
    ctx->pc = 0x197F18u;
    // 0x197f18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x197f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197f1c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x197f1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x197f20: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x197f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x197f24: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x197f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x197f28: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x197f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x197f2c: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x197F2Cu;
    {
        const bool branch_taken_0x197f2c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x197F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F2Cu;
        // 0x197f30: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f2c) {
            ctx->pc = 0x197F58u;
            goto label_197f58;
        }
    }
    ctx->pc = 0x197F34u;
    // 0x197f34: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x197f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x197f38: 0xa21309da  sb          $s3, 0x9DA($s0)
    ctx->pc = 0x197f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2522), (uint8_t)GPR_U32(ctx, 19));
    // 0x197f3c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x197f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x197f40: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x197f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x197f44: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x197f44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x197f48: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x197f48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x197f4c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x197f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x197f50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197F50u;
    {
        const bool branch_taken_0x197f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F50u;
        // 0x197f54: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f50) {
            ctx->pc = 0x197F68u;
            goto label_197f68;
        }
    }
    ctx->pc = 0x197F58u;
label_197f58:
    // 0x197f58: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x197f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x197f5c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x197f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x197f60: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x197f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x197f64: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x197f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_197f68:
    // 0x197f68: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x197f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_197f6c:
    // 0x197f6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x197f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x197f70: 0x1a60ffe3  blez        $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x197F70u;
    {
        const bool branch_taken_0x197f70 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x197F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F70u;
        // 0x197f74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f70) {
            ctx->pc = 0x197F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197f00;
        }
    }
    ctx->pc = 0x197F78u;
    // 0x197f78: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x197f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197f7c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x197f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197f80: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x197f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197f84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197f88: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x197f88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197f8c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x197f8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197f94: 0x3e00008  jr          $ra
    ctx->pc = 0x197F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F94u;
        // 0x197f98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197F9Cu;
    // 0x197f9c: 0x0  nop
    ctx->pc = 0x197f9cu;
    // NOP
    ctx->pc = 0x197fa0u;
}

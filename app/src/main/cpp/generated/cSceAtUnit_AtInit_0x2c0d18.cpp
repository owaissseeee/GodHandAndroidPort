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

// Function: cSceAtUnit_AtInit
// Address: 0x2c0d18 - 0x2c0da8
void cSceAtUnit_AtInit_0x2c0d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtUnit_AtInit_0x2c0d18");
#endif

    switch (ctx->pc) {
        case 0x2c0d54u: goto label_2c0d54;
        default: break;
    }

    ctx->pc = 0x2c0d18u;

    // 0x2c0d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c0d1c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c0d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c0d20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c0d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c0d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c0d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c0d2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c0d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c0d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c0d34: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c0d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d38: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2c0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2c0d3c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c0d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d40: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2c0d40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d4c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C0D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C0D54u);
    ctx->pc = 0x2C0D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D4Cu;
    // 0x2c0d50: 0x2406009c  addiu       $a2, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C0D4Cu, 0x2C0D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D54u;
label_2c0d54:
    // 0x2c0d54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c0d58: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c0d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c0d5c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2c0d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2c0d60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c0d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c0d64: 0xa2120035  sb          $s2, 0x35($s0)
    ctx->pc = 0x2c0d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 18));
    // 0x2c0d68: 0xa211003b  sb          $s1, 0x3B($s0)
    ctx->pc = 0x2c0d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 17));
    // 0x2c0d6c: 0xa2130038  sb          $s3, 0x38($s0)
    ctx->pc = 0x2c0d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 19));
    // 0x2c0d70: 0xa214003a  sb          $s4, 0x3A($s0)
    ctx->pc = 0x2c0d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 20));
    // 0x2c0d74: 0xa6020036  sh          $v0, 0x36($s0)
    ctx->pc = 0x2c0d74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c0d78: 0xa2030034  sb          $v1, 0x34($s0)
    ctx->pc = 0x2c0d78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0d7c: 0xa2040039  sb          $a0, 0x39($s0)
    ctx->pc = 0x2c0d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0d80: 0xa2050054  sb          $a1, 0x54($s0)
    ctx->pc = 0x2c0d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c0d84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c0d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0d88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c0d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0d8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c0d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0d90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c0d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0d94: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2c0d94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D9Cu;
        // 0x2c0da0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0DA4u;
    // 0x2c0da4: 0x0  nop
    ctx->pc = 0x2c0da4u;
    // NOP
    ctx->pc = 0x2c0da8u;
}

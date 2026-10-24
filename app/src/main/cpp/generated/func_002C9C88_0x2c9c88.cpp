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

// Function: func_002C9C88
// Address: 0x2c9c88 - 0x2c9d20
void func_002C9C88_0x2c9c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9C88_0x2c9c88");
#endif

    switch (ctx->pc) {
        case 0x2c9ce8u: goto label_2c9ce8;
        case 0x2c9cf4u: goto label_2c9cf4;
        default: break;
    }

    ctx->pc = 0x2c9c88u;

    // 0x2c9c88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9c8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2c9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2c9c90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c9c94: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2c9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2c9c98: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2c9c9c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2c9c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2c9ca0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c9ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c9ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9cac: 0x2442fd80  addiu       $v0, $v0, -0x280
    ctx->pc = 0x2c9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
    // 0x2c9cb0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2c9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2c9cb4: 0x24631180  addiu       $v1, $v1, 0x1180
    ctx->pc = 0x2c9cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x2c9cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9cbc: 0x24a5eff0  addiu       $a1, $a1, -0x1010
    ctx->pc = 0x2c9cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963184));
    // 0x2c9cc0: 0x24c6fcf0  addiu       $a2, $a2, -0x310
    ctx->pc = 0x2c9cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966512));
    // 0x2c9cc4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2c9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2c9cc8: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2c9cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2c9ccc: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x2c9cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2c9cd0: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x2c9cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x2c9cd4: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x2c9cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c9cd8: 0xae060040  sw          $a2, 0x40($s0)
    ctx->pc = 0x2c9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    // 0x2c9cdc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2c9cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9ce0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2c9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c9ce4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2c9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2c9ce8:
    // 0x2c9ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cec: 0xc0b3128  jal         func_2CC4A0
    ctx->pc = 0x2C9CECu;
    SET_GPR_U32(ctx, 31, 0x2C9CF4u);
    ctx->pc = 0x2C9CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9CECu;
    // 0x2c9cf0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4A0u, 0x2C9CECu, 0x2C9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CF4u;
label_2c9cf4:
    // 0x2c9cf4: 0x0  nop
    ctx->pc = 0x2c9cf4u;
    // NOP
    // 0x2c9cf8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9CF8u;
    {
        const bool branch_taken_0x2c9cf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CF8u;
        // 0x2c9cfc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cf8) {
            ctx->pc = 0x2C9CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9ce8;
        }
    }
    ctx->pc = 0x2C9D00u;
    // 0x2c9d00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c9d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9d08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c9d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9d0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9d10: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2c9d10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D18u;
        // 0x2c9d1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9D20u;
}

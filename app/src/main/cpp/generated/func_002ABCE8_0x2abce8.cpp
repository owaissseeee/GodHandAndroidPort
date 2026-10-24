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

// Function: func_002ABCE8
// Address: 0x2abce8 - 0x2abd30
void func_002ABCE8_0x2abce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ABCE8_0x2abce8");
#endif

    ctx->pc = 0x2abce8u;

    // 0x2abce8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2abce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2abcec: 0x846401b0  lh          $a0, 0x1B0($v1)
    ctx->pc = 0x2abcecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x2abcf0: 0xa4a000a4  sh          $zero, 0xA4($a1)
    ctx->pc = 0x2abcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 164), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abcf4: 0x8062005e  lb          $v0, 0x5E($v1)
    ctx->pc = 0x2abcf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x2abcf8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ABCF8u;
    {
        const bool branch_taken_0x2abcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCF8u;
        // 0x2abcfc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abcf8) {
            ctx->pc = 0x2ABD24u;
            goto label_2abd24;
        }
    }
    ctx->pc = 0x2ABD00u;
    // 0x2abd00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2abd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2abd04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABD04u;
    {
        const bool branch_taken_0x2abd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD04u;
        // 0x2abd08: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd04) {
            ctx->pc = 0x2ABD18u;
            goto label_2abd18;
        }
    }
    ctx->pc = 0x2ABD0Cu;
    // 0x2abd0c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2abd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2abd10: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD10u;
        // 0x2abd14: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABD18u;
label_2abd18:
    // 0x2abd18: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2abd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2abd1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2abd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2abd20: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2abd20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_2abd24:
    // 0x2abd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABD2Cu;
    // 0x2abd2c: 0x0  nop
    ctx->pc = 0x2abd2cu;
    // NOP
    ctx->pc = 0x2abd30u;
}

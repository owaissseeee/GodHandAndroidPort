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

// Function: func_002ABD78
// Address: 0x2abd78 - 0x2abdc0
void func_002ABD78_0x2abd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ABD78_0x2abd78");
#endif

    ctx->pc = 0x2abd78u;

    // 0x2abd78: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2abd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2abd7c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x2abd7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2abd80: 0xa4a000a8  sh          $zero, 0xA8($a1)
    ctx->pc = 0x2abd80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abd84: 0x80620064  lb          $v0, 0x64($v1)
    ctx->pc = 0x2abd84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2abd88: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ABD88u;
    {
        const bool branch_taken_0x2abd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD88u;
        // 0x2abd8c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd88) {
            ctx->pc = 0x2ABDB4u;
            goto label_2abdb4;
        }
    }
    ctx->pc = 0x2ABD90u;
    // 0x2abd90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2abd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2abd94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABD94u;
    {
        const bool branch_taken_0x2abd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD94u;
        // 0x2abd98: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd94) {
            ctx->pc = 0x2ABDA8u;
            goto label_2abda8;
        }
    }
    ctx->pc = 0x2ABD9Cu;
    // 0x2abd9c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2abd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2abda0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDA0u;
        // 0x2abda4: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABDA8u;
label_2abda8:
    // 0x2abda8: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x2abda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x2abdac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2abdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2abdb0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2abdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_2abdb4:
    // 0x2abdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABDBCu;
    // 0x2abdbc: 0x0  nop
    ctx->pc = 0x2abdbcu;
    // NOP
    ctx->pc = 0x2abdc0u;
}

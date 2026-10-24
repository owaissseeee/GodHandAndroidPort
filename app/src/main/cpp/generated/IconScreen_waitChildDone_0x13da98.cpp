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

// Function: IconScreen_waitChildDone
// Address: 0x13da98 - 0x13dae0
void IconScreen_waitChildDone_0x13da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IconScreen_waitChildDone_0x13da98");
#endif

    switch (ctx->pc) {
        case 0x13dac4u: goto label_13dac4;
        default: break;
    }

    ctx->pc = 0x13da98u;

    // 0x13da98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13da98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13da9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13daa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13daa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13daa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13daa8: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x13daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x13daac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13dab0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x13dab4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DAB4u;
    {
        const bool branch_taken_0x13dab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dab4) {
            ctx->pc = 0x13DAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DAB4u;
            // 0x13dab8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DAD4u;
            goto label_13dad4;
        }
    }
    ctx->pc = 0x13DABCu;
    // 0x13dabc: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13DABCu;
    SET_GPR_U32(ctx, 31, 0x13DAC4u);
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13DABCu, 0x13DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAC4u;
label_13dac4:
    // 0x13dac4: 0x96020092  lhu         $v0, 0x92($s0)
    ctx->pc = 0x13dac4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x13dac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13dacc: 0xa6020092  sh          $v0, 0x92($s0)
    ctx->pc = 0x13daccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x13dad0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13dad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13dad4:
    // 0x13dad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13dad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dad8: 0x3e00008  jr          $ra
    ctx->pc = 0x13DAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAD8u;
        // 0x13dadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DAE0u;
}

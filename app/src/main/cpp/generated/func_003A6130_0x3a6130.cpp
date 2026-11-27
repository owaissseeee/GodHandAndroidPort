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

// Function: func_003A6130
// Address: 0x3a6130 - 0x3a6188
void func_003A6130_0x3a6130(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6130_0x3a6130");
#endif

    if (__builtin_expect(ctx->pc != 0x3a6130u, 0)) {
        switch (ctx->pc) {
            case 0x3a6174u: goto label_3a6174;
            default: break;
        }
    }


    // 0x3a6130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a613c: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6140: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a6144: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6144u;
    {
        const bool branch_taken_0x3a6144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6144) {
            ctx->pc = 0x3A6148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6144u;
            // 0x3a6148: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6160u;
            goto label_3a6160;
        }
    }
    // 0x3a614c: 0x3c020040  lui         $v0, 0x40
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a6150: 0x8c43a62c  lw          $v1, -0x59D4($v0)
    ctx->pc = 0x3a6150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a6154: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3a6154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3a6158: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a615c: 0x0  nop
    // NOP
label_3a6160:
    // 0x3a6160: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3a6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3a6164: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6164u;
    {
        const bool branch_taken_0x3a6164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6164) {
            ctx->pc = 0x3A6168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6164u;
            // 0x3a6168: 0x8602000e  lh          $v0, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6178u;
            goto label_3a6178;
        }
    }
    // 0x3a616c: 0xc0e987c  jal         func_3A61F0
    ctx->pc = 0x3A616Cu;
    SET_GPR_U32(ctx, 31, 0x3A6174u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003A61F0_0x3a61f0, 0x3a61f0u, 0x3a6174u)) {
        return;
    }
label_3a6174:
    // 0x3a6174: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x3a6174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_3a6178:
    // 0x3a6178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a617c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6180: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6180u;
        // 0x3a6184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6188u;
}
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

// Function: func_002F2758
// Address: 0x2f2758 - 0x2f27e8
void func_002F2758_0x2f2758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F2758_0x2f2758");
#endif

    ctx->pc = 0x2f2758u;

    // 0x2f2758: 0x8c8502b0  lw          $a1, 0x2B0($a0)
    ctx->pc = 0x2f2758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x2f275c: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F275Cu;
    {
        const bool branch_taken_0x2f275c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f275c) {
            ctx->pc = 0x2F27DCu;
            goto label_2f27dc;
        }
    }
    ctx->pc = 0x2F2764u;
    // 0x2f2764: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x2f2764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2f2768: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F2768u;
    {
        const bool branch_taken_0x2f2768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2768) {
            ctx->pc = 0x2F27DCu;
            goto label_2f27dc;
        }
    }
    ctx->pc = 0x2F2770u;
    // 0x2f2770: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2f2770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f2774: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f2774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f2778: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2778u;
    {
        const bool branch_taken_0x2f2778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2778) {
            ctx->pc = 0x2F277Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2778u;
            // 0x2f277c: 0x8ca30250  lw          $v1, 0x250($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2790u;
            goto label_2f2790;
        }
    }
    ctx->pc = 0x2F2780u;
    // 0x2f2780: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x2f2780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x2f2784: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f2784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f2788: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2788u;
    {
        const bool branch_taken_0x2f2788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2788u;
        // 0x2f278c: 0xaca20250  sw          $v0, 0x250($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2788) {
            ctx->pc = 0x2F27A0u;
            goto label_2f27a0;
        }
    }
    ctx->pc = 0x2F2790u;
label_2f2790:
    // 0x2f2790: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f2790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f2794: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2f2794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2f2798: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f2798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f279c: 0xaca30250  sw          $v1, 0x250($a1)
    ctx->pc = 0x2f279cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 3));
label_2f27a0:
    // 0x2f27a0: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x2f27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2f27a4: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2f27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2f27a8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f27a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f27ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F27ACu;
    {
        const bool branch_taken_0x2f27ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f27ac) {
            ctx->pc = 0x2F27B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F27ACu;
            // 0x2f27b0: 0x8c8402b0  lw          $a0, 0x2B0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F27C8u;
            goto label_2f27c8;
        }
    }
    ctx->pc = 0x2F27B4u;
    // 0x2f27b4: 0x8c8302b0  lw          $v1, 0x2B0($a0)
    ctx->pc = 0x2f27b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x2f27b8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2f27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2f27bc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2f27bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2f27c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F27C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27C0u;
        // 0x2f27c4: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F27C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F27C8u;
label_2f27c8:
    // 0x2f27c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f27cc: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x2f27ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x2f27d0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2f27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2f27d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f27d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f27d8: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x2f27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_2f27dc:
    // 0x2f27dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F27DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F27DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F27E4u;
    // 0x2f27e4: 0x0  nop
    ctx->pc = 0x2f27e4u;
    // NOP
    ctx->pc = 0x2f27e8u;
}

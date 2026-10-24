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

// Function: func_003AE818
// Address: 0x3ae818 - 0x3ae8c0
void func_003AE818_0x3ae818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AE818_0x3ae818");
#endif

    switch (ctx->pc) {
        case 0x3ae844u: goto label_3ae844;
        case 0x3ae888u: goto label_3ae888;
        default: break;
    }

    ctx->pc = 0x3ae818u;

    // 0x3ae818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae81c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ae820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ae824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae82c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3ae82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3ae830: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AE830u;
    {
        const bool branch_taken_0x3ae830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE830u;
        // 0x3ae834: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae830) {
            ctx->pc = 0x3AE84Cu;
            goto label_3ae84c;
        }
    }
    ctx->pc = 0x3AE838u;
    // 0x3ae838: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3ae838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ae83c: 0xc0ebdee  jal         func_3AF7B8
    ctx->pc = 0x3AE83Cu;
    SET_GPR_U32(ctx, 31, 0x3AE844u);
    ctx->pc = 0x3AE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE83Cu;
    // 0x3ae840: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF7B8u, 0x3AE83Cu, 0x3AE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE844u;
label_3ae844:
    // 0x3ae844: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3AE844u;
    {
        const bool branch_taken_0x3ae844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE844u;
        // 0x3ae848: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae844) {
            ctx->pc = 0x3AE894u;
            goto label_3ae894;
        }
    }
    ctx->pc = 0x3AE84Cu;
label_3ae84c:
    // 0x3ae84c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3ae84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3ae850: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3ae850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3ae854: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3ae854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ae858: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ae858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ae85c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE85Cu;
    {
        const bool branch_taken_0x3ae85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE85Cu;
        // 0x3ae860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae85c) {
            ctx->pc = 0x3AE870u;
            goto label_3ae870;
        }
    }
    ctx->pc = 0x3AE864u;
    // 0x3ae864: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ae864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ae868: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3AE868u;
    {
        const bool branch_taken_0x3ae868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE868u;
        // 0x3ae86c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae868) {
            ctx->pc = 0x3AE8A0u;
            goto label_3ae8a0;
        }
    }
    ctx->pc = 0x3AE870u;
label_3ae870:
    // 0x3ae870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae874: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x3ae874u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3ae878: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ae878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae87c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x3ae87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3ae880: 0xc0ebdee  jal         func_3AF7B8
    ctx->pc = 0x3AE880u;
    SET_GPR_U32(ctx, 31, 0x3AE888u);
    ctx->pc = 0x3AE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE880u;
    // 0x3ae884: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF7B8u, 0x3AE880u, 0x3AE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE888u;
label_3ae888:
    // 0x3ae888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ae888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae88c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE88Cu;
    {
        const bool branch_taken_0x3ae88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae88c) {
            ctx->pc = 0x3AE890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE88Cu;
            // 0x3ae890: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE89Cu;
            goto label_3ae89c;
        }
    }
    ctx->pc = 0x3AE894u;
label_3ae894:
    // 0x3ae894: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE894u;
    {
        const bool branch_taken_0x3ae894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE894u;
        // 0x3ae898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae894) {
            ctx->pc = 0x3AE8ACu;
            goto label_3ae8ac;
        }
    }
    ctx->pc = 0x3AE89Cu;
label_3ae89c:
    // 0x3ae89c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x3ae89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_3ae8a0:
    // 0x3ae8a0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3ae8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3ae8a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ae8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae8a8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3ae8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3ae8ac:
    // 0x3ae8ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ae8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8B8u;
        // 0x3ae8bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE8C0u;
}

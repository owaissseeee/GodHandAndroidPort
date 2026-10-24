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

// Function: func_0033D870
// Address: 0x33d870 - 0x33d958
void func_0033D870_0x33d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D870_0x33d870");
#endif

    switch (ctx->pc) {
        case 0x33d894u: goto label_33d894;
        case 0x33d8b0u: goto label_33d8b0;
        case 0x33d8c8u: goto label_33d8c8;
        case 0x33d8e0u: goto label_33d8e0;
        case 0x33d8f8u: goto label_33d8f8;
        case 0x33d910u: goto label_33d910;
        case 0x33d928u: goto label_33d928;
        default: break;
    }

    ctx->pc = 0x33d870u;

    // 0x33d870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d87c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d880: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x33d880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x33d884: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D884u;
    {
        const bool branch_taken_0x33d884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d884) {
            ctx->pc = 0x33D888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D884u;
            // 0x33d888: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D8A0u;
            goto label_33d8a0;
        }
    }
    ctx->pc = 0x33D88Cu;
    // 0x33d88c: 0xc0cf5c8  jal         func_33D720
    ctx->pc = 0x33D88Cu;
    SET_GPR_U32(ctx, 31, 0x33D894u);
    ctx->pc = 0x33D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D720u, 0x33D88Cu, 0x33D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D894u;
label_33d894:
    // 0x33d894: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x33D894u;
    {
        const bool branch_taken_0x33d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D894u;
        // 0x33d898: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d894) {
            ctx->pc = 0x33D92Cu;
            goto label_33d92c;
        }
    }
    ctx->pc = 0x33D89Cu;
    // 0x33d89c: 0x0  nop
    ctx->pc = 0x33d89cu;
    // NOP
label_33d8a0:
    // 0x33d8a0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D8A0u;
    {
        const bool branch_taken_0x33d8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d8a0) {
            ctx->pc = 0x33D8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D8A0u;
            // 0x33d8a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D8B8u;
            goto label_33d8b8;
        }
    }
    ctx->pc = 0x33D8A8u;
    // 0x33d8a8: 0xc0cf130  jal         func_33C4C0
    ctx->pc = 0x33D8A8u;
    SET_GPR_U32(ctx, 31, 0x33D8B0u);
    ctx->pc = 0x33C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C4C0u, 0x33D8A8u, 0x33D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8B0u;
label_33d8b0:
    // 0x33d8b0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33D8B0u;
    {
        const bool branch_taken_0x33d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8B0u;
        // 0x33d8b4: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8b0) {
            ctx->pc = 0x33D92Cu;
            goto label_33d92c;
        }
    }
    ctx->pc = 0x33D8B8u;
label_33d8b8:
    // 0x33d8b8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D8B8u;
    {
        const bool branch_taken_0x33d8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d8b8) {
            ctx->pc = 0x33D8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D8B8u;
            // 0x33d8bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D8D0u;
            goto label_33d8d0;
        }
    }
    ctx->pc = 0x33D8C0u;
    // 0x33d8c0: 0xc0cf6f6  jal         func_33DBD8
    ctx->pc = 0x33D8C0u;
    SET_GPR_U32(ctx, 31, 0x33D8C8u);
    ctx->pc = 0x33DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DBD8u, 0x33D8C0u, 0x33D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8C8u;
label_33d8c8:
    // 0x33d8c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33D8C8u;
    {
        const bool branch_taken_0x33d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8C8u;
        // 0x33d8cc: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8c8) {
            ctx->pc = 0x33D92Cu;
            goto label_33d92c;
        }
    }
    ctx->pc = 0x33D8D0u;
label_33d8d0:
    // 0x33d8d0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D8D0u;
    {
        const bool branch_taken_0x33d8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d8d0) {
            ctx->pc = 0x33D8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D8D0u;
            // 0x33d8d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D8E8u;
            goto label_33d8e8;
        }
    }
    ctx->pc = 0x33D8D8u;
    // 0x33d8d8: 0xc0d0516  jal         func_341458
    ctx->pc = 0x33D8D8u;
    SET_GPR_U32(ctx, 31, 0x33D8E0u);
    ctx->pc = 0x341458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341458u, 0x33D8D8u, 0x33D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8E0u;
label_33d8e0:
    // 0x33d8e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33D8E0u;
    {
        const bool branch_taken_0x33d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8E0u;
        // 0x33d8e4: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8e0) {
            ctx->pc = 0x33D92Cu;
            goto label_33d92c;
        }
    }
    ctx->pc = 0x33D8E8u;
label_33d8e8:
    // 0x33d8e8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D8E8u;
    {
        const bool branch_taken_0x33d8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d8e8) {
            ctx->pc = 0x33D8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D8E8u;
            // 0x33d8ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D900u;
            goto label_33d900;
        }
    }
    ctx->pc = 0x33D8F0u;
    // 0x33d8f0: 0xc0d07b0  jal         func_341EC0
    ctx->pc = 0x33D8F0u;
    SET_GPR_U32(ctx, 31, 0x33D8F8u);
    ctx->pc = 0x341EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341EC0u, 0x33D8F0u, 0x33D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8F8u;
label_33d8f8:
    // 0x33d8f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33D8F8u;
    {
        const bool branch_taken_0x33d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8F8u;
        // 0x33d8fc: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8f8) {
            ctx->pc = 0x33D92Cu;
            goto label_33d92c;
        }
    }
    ctx->pc = 0x33D900u;
label_33d900:
    // 0x33d900: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D900u;
    {
        const bool branch_taken_0x33d900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d900) {
            ctx->pc = 0x33D904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D900u;
            // 0x33d904: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D918u;
            goto label_33d918;
        }
    }
    ctx->pc = 0x33D908u;
    // 0x33d908: 0xc0cf970  jal         func_33E5C0
    ctx->pc = 0x33D908u;
    SET_GPR_U32(ctx, 31, 0x33D910u);
    ctx->pc = 0x33E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E5C0u, 0x33D908u, 0x33D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D910u;
label_33d910:
    // 0x33d910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33D910u;
    {
        const bool branch_taken_0x33d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D910u;
        // 0x33d914: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d910) {
            ctx->pc = 0x33D92Cu;
            goto label_33d92c;
        }
    }
    ctx->pc = 0x33D918u;
label_33d918:
    // 0x33d918: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D918u;
    {
        const bool branch_taken_0x33d918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d918) {
            ctx->pc = 0x33D91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D918u;
            // 0x33d91c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D92Cu;
            goto label_33d92c;
        }
    }
    ctx->pc = 0x33D920u;
    // 0x33d920: 0xc0cf0b0  jal         func_33C2C0
    ctx->pc = 0x33D920u;
    SET_GPR_U32(ctx, 31, 0x33D928u);
    ctx->pc = 0x33C2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C2C0u, 0x33D920u, 0x33D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D928u;
label_33d928:
    // 0x33d928: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x33d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_33d92c:
    // 0x33d92c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D92Cu;
    {
        const bool branch_taken_0x33d92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D92Cu;
        // 0x33d930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d92c) {
            ctx->pc = 0x33D948u;
            goto label_33d948;
        }
    }
    ctx->pc = 0x33D934u;
    // 0x33d934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d938: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d93c: 0x80cf656  j           func_33D958
    ctx->pc = 0x33D93Cu;
    ctx->pc = 0x33D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D93Cu;
    // 0x33d940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D958u, 0x33D93Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D944u;
    // 0x33d944: 0x0  nop
    ctx->pc = 0x33d944u;
    // NOP
label_33d948:
    // 0x33d948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d94c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d950: 0x3e00008  jr          $ra
    ctx->pc = 0x33D950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D950u;
        // 0x33d954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D958u;
}

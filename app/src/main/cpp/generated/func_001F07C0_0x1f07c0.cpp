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

// Function: func_001F07C0
// Address: 0x1f07c0 - 0x1f0870
void func_001F07C0_0x1f07c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F07C0_0x1f07c0");
#endif

    switch (ctx->pc) {
        case 0x1f07f4u: goto label_1f07f4;
        case 0x1f0838u: goto label_1f0838;
        case 0x1f0840u: goto label_1f0840;
        default: break;
    }

    ctx->pc = 0x1f07c0u;

    // 0x1f07c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f07c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f07c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f07c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f07c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f07c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f07cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f07ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07d0: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f07d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F07D4u;
    {
        const bool branch_taken_0x1f07d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07D4u;
        // 0x1f07d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07d4) {
            ctx->pc = 0x1F07ECu;
            goto label_1f07ec;
        }
    }
    ctx->pc = 0x1F07DCu;
    // 0x1f07dc: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F07DCu;
    {
        const bool branch_taken_0x1f07dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f07dc) {
            ctx->pc = 0x1F07E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F07DCu;
            // 0x1f07e0: 0x8e020b88  lw          $v0, 0xB88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F080Cu;
            goto label_1f080c;
        }
    }
    ctx->pc = 0x1F07E4u;
    // 0x1f07e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F07E4u;
    {
        const bool branch_taken_0x1f07e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07E4u;
        // 0x1f07e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07e4) {
            ctx->pc = 0x1F0864u;
            goto label_1f0864;
        }
    }
    ctx->pc = 0x1F07ECu;
label_1f07ec:
    // 0x1f07ec: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F07ECu;
    SET_GPR_U32(ctx, 31, 0x1F07F4u);
    ctx->pc = 0x1F07F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07ECu;
    // 0x1f07f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F07ECu, 0x1F07F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07F4u;
label_1f07f4:
    // 0x1f07f4: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f07f8: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x1f07f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1f07fc: 0xae030ba0  sw          $v1, 0xBA0($s0)
    ctx->pc = 0x1f07fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 3));
    // 0x1f0800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0804: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F0804u;
    {
        const bool branch_taken_0x1f0804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0804u;
        // 0x1f0808: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0804) {
            ctx->pc = 0x1F0860u;
            goto label_1f0860;
        }
    }
    ctx->pc = 0x1F080Cu;
label_1f080c:
    // 0x1f080c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f080cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f0810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0810u;
    {
        const bool branch_taken_0x1f0810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0810u;
        // 0x1f0814: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0810) {
            ctx->pc = 0x1F0828u;
            goto label_1f0828;
        }
    }
    ctx->pc = 0x1F0818u;
    // 0x1f0818: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f081c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F081Cu;
    {
        const bool branch_taken_0x1f081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F081Cu;
        // 0x1f0820: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f081c) {
            ctx->pc = 0x1F085Cu;
            goto label_1f085c;
        }
    }
    ctx->pc = 0x1F0824u;
    // 0x1f0824: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1f0828:
    // 0x1f0828: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1f0828u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f082c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0830: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F0830u;
    SET_GPR_U32(ctx, 31, 0x1F0838u);
    ctx->pc = 0x1F0834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0830u;
    // 0x1f0834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F0830u, 0x1F0838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0838u;
label_1f0838:
    // 0x1f0838: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F0838u;
    SET_GPR_U32(ctx, 31, 0x1F0840u);
    ctx->pc = 0x1F083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0838u;
    // 0x1f083c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F0838u, 0x1F0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0840u;
label_1f0840:
    // 0x1f0840: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f0840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f0844: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f0844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f084c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f0850: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f0850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
    // 0x1f0854: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0854u;
    {
        const bool branch_taken_0x1f0854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0854u;
        // 0x1f0858: 0xae030b94  sw          $v1, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0854) {
            ctx->pc = 0x1F0860u;
            goto label_1f0860;
        }
    }
    ctx->pc = 0x1F085Cu;
label_1f085c:
    // 0x1f085c: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f085cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f0860:
    // 0x1f0860: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0864:
    // 0x1f0864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0868: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0868u;
        // 0x1f086c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0870u;
}

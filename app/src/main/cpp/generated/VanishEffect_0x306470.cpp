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

// Function: VanishEffect
// Address: 0x306470 - 0x306528
void VanishEffect_0x306470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VanishEffect_0x306470");
#endif

    switch (ctx->pc) {
        case 0x3064c8u: goto label_3064c8;
        case 0x3064e0u: goto label_3064e0;
        case 0x3064f4u: goto label_3064f4;
        case 0x306500u: goto label_306500;
        default: break;
    }

    ctx->pc = 0x306470u;

    // 0x306470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306474: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x306474u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x306478: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x306478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30647c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x306484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30648c: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30648Cu;
    {
        const bool branch_taken_0x30648c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x306490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30648Cu;
        // 0x306490: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30648c) {
            ctx->pc = 0x3064D0u;
            goto label_3064d0;
        }
    }
    ctx->pc = 0x306494u;
    // 0x306494: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x306494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x306498: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x306498u;
    {
        const bool branch_taken_0x306498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306498) {
            ctx->pc = 0x30649Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306498u;
            // 0x30649c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3064B0u;
            goto label_3064b0;
        }
    }
    ctx->pc = 0x3064A0u;
    // 0x3064a0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3064A0u;
    {
        const bool branch_taken_0x3064a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064A0u;
        // 0x3064a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064a0) {
            ctx->pc = 0x3064C0u;
            goto label_3064c0;
        }
    }
    ctx->pc = 0x3064A8u;
    // 0x3064a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3064A8u;
    {
        const bool branch_taken_0x3064a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064A8u;
        // 0x3064ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064a8) {
            ctx->pc = 0x306504u;
            goto label_306504;
        }
    }
    ctx->pc = 0x3064B0u;
label_3064b0:
    // 0x3064b0: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3064B0u;
    {
        const bool branch_taken_0x3064b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3064B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064B0u;
        // 0x3064b4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064b0) {
            ctx->pc = 0x3064E8u;
            goto label_3064e8;
        }
    }
    ctx->pc = 0x3064B8u;
    // 0x3064b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3064B8u;
    {
        const bool branch_taken_0x3064b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064B8u;
        // 0x3064bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064b8) {
            ctx->pc = 0x306504u;
            goto label_306504;
        }
    }
    ctx->pc = 0x3064C0u;
label_3064c0:
    // 0x3064c0: 0xc0c02ba  jal         func_300AE8
    ctx->pc = 0x3064C0u;
    SET_GPR_U32(ctx, 31, 0x3064C8u);
    ctx->pc = 0x3064C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064C0u;
    // 0x3064c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300AE8u, 0x3064C0u, 0x3064C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064C8u;
label_3064c8:
    // 0x3064c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3064C8u;
    {
        const bool branch_taken_0x3064c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064C8u;
        // 0x3064cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064c8) {
            ctx->pc = 0x306504u;
            goto label_306504;
        }
    }
    ctx->pc = 0x3064D0u;
label_3064d0:
    // 0x3064d0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3064d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3064d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064d8: 0xc0beede  jal         func_2FBB78
    ctx->pc = 0x3064D8u;
    SET_GPR_U32(ctx, 31, 0x3064E0u);
    ctx->pc = 0x3064DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064D8u;
    // 0x3064dc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB78u, 0x3064D8u, 0x3064E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064E0u;
label_3064e0:
    // 0x3064e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3064E0u;
    {
        const bool branch_taken_0x3064e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064E0u;
        // 0x3064e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064e0) {
            ctx->pc = 0x306504u;
            goto label_306504;
        }
    }
    ctx->pc = 0x3064E8u;
label_3064e8:
    // 0x3064e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3064e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064ec: 0xc0beede  jal         func_2FBB78
    ctx->pc = 0x3064ECu;
    SET_GPR_U32(ctx, 31, 0x3064F4u);
    ctx->pc = 0x3064F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064ECu;
    // 0x3064f0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB78u, 0x3064ECu, 0x3064F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064F4u;
label_3064f4:
    // 0x3064f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3064f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3064f8: 0xc0c02ba  jal         func_300AE8
    ctx->pc = 0x3064F8u;
    SET_GPR_U32(ctx, 31, 0x306500u);
    ctx->pc = 0x3064FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064F8u;
    // 0x3064fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300AE8u, 0x3064F8u, 0x306500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306500u;
label_306500:
    // 0x306500: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x306500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_306504:
    // 0x306504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x306504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30650c: 0x3e00008  jr          $ra
    ctx->pc = 0x30650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30650Cu;
        // 0x306510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30650Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306514u;
    // 0x306514: 0x0  nop
    ctx->pc = 0x306514u;
    // NOP
    // 0x306518: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x306518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30651c: 0x0  nop
    ctx->pc = 0x30651cu;
    // NOP
    // 0x306520: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x306520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x306524: 0x0  nop
    ctx->pc = 0x306524u;
    // NOP
    ctx->pc = 0x306528u;
}

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

// Function: BlackJack_slidePanel
// Address: 0x1d60f8 - 0x1d61c0
void BlackJack_slidePanel_0x1d60f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_slidePanel_0x1d60f8");
#endif

    switch (ctx->pc) {
        case 0x1d6140u: goto label_1d6140;
        case 0x1d6154u: goto label_1d6154;
        case 0x1d6170u: goto label_1d6170;
        case 0x1d6188u: goto label_1d6188;
        case 0x1d6198u: goto label_1d6198;
        case 0x1d61a8u: goto label_1d61a8;
        default: break;
    }

    ctx->pc = 0x1d60f8u;

    // 0x1d60f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d60f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d60fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6100: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d610c: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1d610cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d6110: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6110u;
    {
        const bool branch_taken_0x1d6110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6110u;
        // 0x1d6114: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6110) {
            ctx->pc = 0x1D6148u;
            goto label_1d6148;
        }
    }
    ctx->pc = 0x1D6118u;
    // 0x1d6118: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1d6118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d611c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D611Cu;
    {
        const bool branch_taken_0x1d611c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d611c) {
            ctx->pc = 0x1D6120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D611Cu;
            // 0x1d6120: 0x260402cc  addiu       $a0, $s0, 0x2CC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6138u;
            goto label_1d6138;
        }
    }
    ctx->pc = 0x1D6124u;
    // 0x1d6124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6128: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D6128u;
    {
        const bool branch_taken_0x1d6128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6128u;
        // 0x1d612c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6128) {
            ctx->pc = 0x1D615Cu;
            goto label_1d615c;
        }
    }
    ctx->pc = 0x1D6130u;
    // 0x1d6130: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6130u;
    {
        const bool branch_taken_0x1d6130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6130u;
        // 0x1d6134: 0x260402cc  addiu       $a0, $s0, 0x2CC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6130) {
            ctx->pc = 0x1D6178u;
            goto label_1d6178;
        }
    }
    ctx->pc = 0x1D6138u;
label_1d6138:
    // 0x1d6138: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6138u;
    SET_GPR_U32(ctx, 31, 0x1D6140u);
    ctx->pc = 0x1D613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6138u;
    // 0x1d613c: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6138u, 0x1D6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6140u;
label_1d6140:
    // 0x1d6140: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D6140u;
    {
        const bool branch_taken_0x1d6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6140u;
        // 0x1d6144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6140) {
            ctx->pc = 0x1D618Cu;
            goto label_1d618c;
        }
    }
    ctx->pc = 0x1D6148u;
label_1d6148:
    // 0x1d6148: 0x260402cc  addiu       $a0, $s0, 0x2CC
    ctx->pc = 0x1d6148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x1d614c: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D614Cu;
    SET_GPR_U32(ctx, 31, 0x1D6154u);
    ctx->pc = 0x1D6150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D614Cu;
    // 0x1d6150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D614Cu, 0x1D6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6154u;
label_1d6154:
    // 0x1d6154: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D6154u;
    {
        const bool branch_taken_0x1d6154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6154u;
        // 0x1d6158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6154) {
            ctx->pc = 0x1D618Cu;
            goto label_1d618c;
        }
    }
    ctx->pc = 0x1D615Cu;
label_1d615c:
    // 0x1d615c: 0x260402cc  addiu       $a0, $s0, 0x2CC
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x1d6160: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x1d6160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d6164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6168: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D6168u;
    SET_GPR_U32(ctx, 31, 0x1D6170u);
    ctx->pc = 0x1D616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6168u;
    // 0x1d616c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D6168u, 0x1D6170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6170u;
label_1d6170:
    // 0x1d6170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6170u;
    {
        const bool branch_taken_0x1d6170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6170u;
        // 0x1d6174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6170) {
            ctx->pc = 0x1D618Cu;
            goto label_1d618c;
        }
    }
    ctx->pc = 0x1D6178u;
label_1d6178:
    // 0x1d6178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d617c: 0x2406fec0  addiu       $a2, $zero, -0x140
    ctx->pc = 0x1d617cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d6180: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D6180u;
    SET_GPR_U32(ctx, 31, 0x1D6188u);
    ctx->pc = 0x1D6184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6180u;
    // 0x1d6184: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D6180u, 0x1D6188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6188u;
label_1d6188:
    // 0x1d6188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d618c:
    // 0x1d618c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d6190: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6190u;
    SET_GPR_U32(ctx, 31, 0x1D6198u);
    ctx->pc = 0x1D6194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6190u;
    // 0x1d6194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6190u, 0x1D6198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6198u;
label_1d6198:
    // 0x1d6198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d619c: 0x11302b  sltu        $a2, $zero, $s1
    ctx->pc = 0x1d619cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d61a0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D61A0u;
    SET_GPR_U32(ctx, 31, 0x1D61A8u);
    ctx->pc = 0x1D61A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D61A0u;
    // 0x1d61a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D61A0u, 0x1D61A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D61A8u;
label_1d61a8:
    // 0x1d61a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d61a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d61ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d61acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d61b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d61b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d61b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D61B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61B4u;
        // 0x1d61b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D61B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D61BCu;
    // 0x1d61bc: 0x0  nop
    ctx->pc = 0x1d61bcu;
    // NOP
    ctx->pc = 0x1d61c0u;
}

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

// Function: func_001D5690
// Address: 0x1d5690 - 0x1d5760
void func_001D5690_0x1d5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D5690_0x1d5690");
#endif

    switch (ctx->pc) {
        case 0x1d56f8u: goto label_1d56f8;
        case 0x1d5708u: goto label_1d5708;
        case 0x1d5718u: goto label_1d5718;
        case 0x1d572cu: goto label_1d572c;
        case 0x1d573cu: goto label_1d573c;
        case 0x1d574cu: goto label_1d574c;
        default: break;
    }

    ctx->pc = 0x1d5690u;

    // 0x1d5690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5694: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1d5694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d5698: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d569c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d56a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d56a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d56a4: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D56A4u;
    {
        const bool branch_taken_0x1d56a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56A4u;
        // 0x1d56a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56a4) {
            ctx->pc = 0x1D56E4u;
            goto label_1d56e4;
        }
    }
    ctx->pc = 0x1D56ACu;
    // 0x1d56ac: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d56acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d56b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D56B0u;
    {
        const bool branch_taken_0x1d56b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d56b0) {
            ctx->pc = 0x1D56B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D56B0u;
            // 0x1d56b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D56C8u;
            goto label_1d56c8;
        }
    }
    ctx->pc = 0x1D56B8u;
    // 0x1d56b8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D56B8u;
    {
        const bool branch_taken_0x1d56b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56B8u;
        // 0x1d56bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56b8) {
            ctx->pc = 0x1D56D8u;
            goto label_1d56d8;
        }
    }
    ctx->pc = 0x1D56C0u;
    // 0x1d56c0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D56C0u;
    {
        const bool branch_taken_0x1d56c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56C0u;
        // 0x1d56c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56c0) {
            ctx->pc = 0x1D5750u;
            goto label_1d5750;
        }
    }
    ctx->pc = 0x1D56C8u;
label_1d56c8:
    // 0x1d56c8: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D56C8u;
    {
        const bool branch_taken_0x1d56c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56C8u;
        // 0x1d56cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56c8) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D56D0u;
    // 0x1d56d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D56D0u;
    {
        const bool branch_taken_0x1d56d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56D0u;
        // 0x1d56d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56d0) {
            ctx->pc = 0x1D5750u;
            goto label_1d5750;
        }
    }
    ctx->pc = 0x1D56D8u;
label_1d56d8:
    // 0x1d56d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d56d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d56dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D56DCu;
    {
        const bool branch_taken_0x1d56dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56DCu;
        // 0x1d56e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56dc) {
            ctx->pc = 0x1D56F0u;
            goto label_1d56f0;
        }
    }
    ctx->pc = 0x1D56E4u;
label_1d56e4:
    // 0x1d56e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d56e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d56ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d56ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d56f0:
    // 0x1d56f0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D56F0u;
    SET_GPR_U32(ctx, 31, 0x1D56F8u);
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D56F0u, 0x1D56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56F8u;
label_1d56f8:
    // 0x1d56f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d56f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56fc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d56fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d5700: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5700u;
    SET_GPR_U32(ctx, 31, 0x1D5708u);
    ctx->pc = 0x1D5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5700u;
    // 0x1d5704: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5700u, 0x1D5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5708u;
label_1d5708:
    // 0x1d5708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d570c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d570cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d5710: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5710u;
    SET_GPR_U32(ctx, 31, 0x1D5718u);
    ctx->pc = 0x1D5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5710u;
    // 0x1d5714: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5710u, 0x1D5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5718u;
label_1d5718:
    // 0x1d5718: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D5718u;
    {
        const bool branch_taken_0x1d5718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5718u;
        // 0x1d571c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5718) {
            ctx->pc = 0x1D5750u;
            goto label_1d5750;
        }
    }
    ctx->pc = 0x1D5720u;
label_1d5720:
    // 0x1d5720: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d5720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5724: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5724u;
    SET_GPR_U32(ctx, 31, 0x1D572Cu);
    ctx->pc = 0x1D5728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5724u;
    // 0x1d5728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5724u, 0x1D572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D572Cu;
label_1d572c:
    // 0x1d572c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5730: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d5734: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5734u;
    SET_GPR_U32(ctx, 31, 0x1D573Cu);
    ctx->pc = 0x1D5738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5734u;
    // 0x1d5738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5734u, 0x1D573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D573Cu;
label_1d573c:
    // 0x1d573c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d573cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5740: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d5740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d5744: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5744u;
    SET_GPR_U32(ctx, 31, 0x1D574Cu);
    ctx->pc = 0x1D5748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5744u;
    // 0x1d5748: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5744u, 0x1D574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D574Cu;
label_1d574c:
    // 0x1d574c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d574cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5750:
    // 0x1d5750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5754: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5754u;
        // 0x1d5758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D575Cu;
    // 0x1d575c: 0x0  nop
    ctx->pc = 0x1d575cu;
    // NOP
    ctx->pc = 0x1d5760u;
}

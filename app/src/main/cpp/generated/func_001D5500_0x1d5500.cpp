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

// Function: func_001D5500
// Address: 0x1d5500 - 0x1d55d0
void func_001D5500_0x1d5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D5500_0x1d5500");
#endif

    switch (ctx->pc) {
        case 0x1d5568u: goto label_1d5568;
        case 0x1d5578u: goto label_1d5578;
        case 0x1d5588u: goto label_1d5588;
        case 0x1d559cu: goto label_1d559c;
        case 0x1d55acu: goto label_1d55ac;
        case 0x1d55bcu: goto label_1d55bc;
        default: break;
    }

    ctx->pc = 0x1d5500u;

    // 0x1d5500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5504: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1d5504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d5508: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d550c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5514: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5514u;
    {
        const bool branch_taken_0x1d5514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5514u;
        // 0x1d5518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5514) {
            ctx->pc = 0x1D5554u;
            goto label_1d5554;
        }
    }
    ctx->pc = 0x1D551Cu;
    // 0x1d551c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d551cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5520: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5520u;
    {
        const bool branch_taken_0x1d5520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5520) {
            ctx->pc = 0x1D5524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5520u;
            // 0x1d5524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5538u;
            goto label_1d5538;
        }
    }
    ctx->pc = 0x1D5528u;
    // 0x1d5528: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5528u;
    {
        const bool branch_taken_0x1d5528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5528u;
        // 0x1d552c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5528) {
            ctx->pc = 0x1D5548u;
            goto label_1d5548;
        }
    }
    ctx->pc = 0x1D5530u;
    // 0x1d5530: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D5530u;
    {
        const bool branch_taken_0x1d5530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5530u;
        // 0x1d5534: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5530) {
            ctx->pc = 0x1D55C0u;
            goto label_1d55c0;
        }
    }
    ctx->pc = 0x1D5538u;
label_1d5538:
    // 0x1d5538: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5538u;
    {
        const bool branch_taken_0x1d5538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5538u;
        // 0x1d553c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5538) {
            ctx->pc = 0x1D5590u;
            goto label_1d5590;
        }
    }
    ctx->pc = 0x1D5540u;
    // 0x1d5540: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D5540u;
    {
        const bool branch_taken_0x1d5540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5540u;
        // 0x1d5544: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5540) {
            ctx->pc = 0x1D55C0u;
            goto label_1d55c0;
        }
    }
    ctx->pc = 0x1D5548u;
label_1d5548:
    // 0x1d5548: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d5548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d554c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D554Cu;
    {
        const bool branch_taken_0x1d554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D554Cu;
        // 0x1d5550: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d554c) {
            ctx->pc = 0x1D5560u;
            goto label_1d5560;
        }
    }
    ctx->pc = 0x1D5554u;
label_1d5554:
    // 0x1d5554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5558: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d5558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d555c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d555cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5560:
    // 0x1d5560: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5560u;
    SET_GPR_U32(ctx, 31, 0x1D5568u);
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5560u, 0x1D5568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5568u;
label_1d5568:
    // 0x1d5568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d556c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d556cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d5570: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5570u;
    SET_GPR_U32(ctx, 31, 0x1D5578u);
    ctx->pc = 0x1D5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5570u;
    // 0x1d5574: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5570u, 0x1D5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5578u;
label_1d5578:
    // 0x1d5578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d557c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d5580: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5580u;
    SET_GPR_U32(ctx, 31, 0x1D5588u);
    ctx->pc = 0x1D5584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5580u;
    // 0x1d5584: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5580u, 0x1D5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5588u;
label_1d5588:
    // 0x1d5588: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D5588u;
    {
        const bool branch_taken_0x1d5588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5588u;
        // 0x1d558c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5588) {
            ctx->pc = 0x1D55C0u;
            goto label_1d55c0;
        }
    }
    ctx->pc = 0x1D5590u;
label_1d5590:
    // 0x1d5590: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d5590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d5594: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5594u;
    SET_GPR_U32(ctx, 31, 0x1D559Cu);
    ctx->pc = 0x1D5598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5594u;
    // 0x1d5598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5594u, 0x1D559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D559Cu;
label_1d559c:
    // 0x1d559c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55a0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d55a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d55a4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D55A4u;
    SET_GPR_U32(ctx, 31, 0x1D55ACu);
    ctx->pc = 0x1D55A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55A4u;
    // 0x1d55a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D55A4u, 0x1D55ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55ACu;
label_1d55ac:
    // 0x1d55ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d55acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d55b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d55b4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D55B4u;
    SET_GPR_U32(ctx, 31, 0x1D55BCu);
    ctx->pc = 0x1D55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55B4u;
    // 0x1d55b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D55B4u, 0x1D55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55BCu;
label_1d55bc:
    // 0x1d55bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d55bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d55c0:
    // 0x1d55c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d55c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d55c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D55C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55C4u;
        // 0x1d55c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D55C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D55CCu;
    // 0x1d55cc: 0x0  nop
    ctx->pc = 0x1d55ccu;
    // NOP
    ctx->pc = 0x1d55d0u;
}

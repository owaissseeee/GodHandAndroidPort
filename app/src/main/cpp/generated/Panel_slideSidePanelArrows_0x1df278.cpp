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

// Function: Panel_slideSidePanelArrows
// Address: 0x1df278 - 0x1df358
void Panel_slideSidePanelArrows_0x1df278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Panel_slideSidePanelArrows_0x1df278");
#endif

    switch (ctx->pc) {
        case 0x1df2bcu: goto label_1df2bc;
        case 0x1df2ccu: goto label_1df2cc;
        case 0x1df2dcu: goto label_1df2dc;
        case 0x1df2f0u: goto label_1df2f0;
        case 0x1df30cu: goto label_1df30c;
        case 0x1df31cu: goto label_1df31c;
        case 0x1df32cu: goto label_1df32c;
        case 0x1df344u: goto label_1df344;
        default: break;
    }

    ctx->pc = 0x1df278u;

    // 0x1df278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df27c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1df27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1df280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df28c: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF28Cu;
    {
        const bool branch_taken_0x1df28c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF28Cu;
        // 0x1df290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df28c) {
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF294u;
    // 0x1df294: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1df294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df298: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF298u;
    {
        const bool branch_taken_0x1df298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df298) {
            ctx->pc = 0x1DF29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF298u;
            // 0x1df29c: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF2B4u;
            goto label_1df2b4;
        }
    }
    ctx->pc = 0x1DF2A0u;
    // 0x1df2a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df2a4: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF2A4u;
    {
        const bool branch_taken_0x1df2a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2A4u;
        // 0x1df2a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2a4) {
            ctx->pc = 0x1DF2F8u;
            goto label_1df2f8;
        }
    }
    ctx->pc = 0x1DF2ACu;
    // 0x1df2ac: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DF2ACu;
    {
        const bool branch_taken_0x1df2ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2ACu;
        // 0x1df2b0: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2ac) {
            ctx->pc = 0x1DF334u;
            goto label_1df334;
        }
    }
    ctx->pc = 0x1DF2B4u;
label_1df2b4:
    // 0x1df2b4: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF2B4u;
    SET_GPR_U32(ctx, 31, 0x1DF2BCu);
    ctx->pc = 0x1DF2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2B4u;
    // 0x1df2b8: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF2B4u, 0x1DF2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2BCu;
label_1df2bc:
    // 0x1df2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1df2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df2c4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF2C4u;
    SET_GPR_U32(ctx, 31, 0x1DF2CCu);
    ctx->pc = 0x1DF2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2C4u;
    // 0x1df2c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF2C4u, 0x1DF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2CCu;
label_1df2cc:
    // 0x1df2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1df2d4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF2D4u;
    SET_GPR_U32(ctx, 31, 0x1DF2DCu);
    ctx->pc = 0x1DF2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2D4u;
    // 0x1df2d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF2D4u, 0x1DF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2DCu;
label_1df2dc:
    // 0x1df2dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DF2DCu;
    {
        const bool branch_taken_0x1df2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2DCu;
        // 0x1df2e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2dc) {
            ctx->pc = 0x1DF348u;
            goto label_1df348;
        }
    }
    ctx->pc = 0x1DF2E4u;
label_1df2e4:
    // 0x1df2e4: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1df2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1df2e8: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF2E8u;
    SET_GPR_U32(ctx, 31, 0x1DF2F0u);
    ctx->pc = 0x1DF2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2E8u;
    // 0x1df2ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF2E8u, 0x1DF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2F0u;
label_1df2f0:
    // 0x1df2f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF2F0u;
    {
        const bool branch_taken_0x1df2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2F0u;
        // 0x1df2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2f0) {
            ctx->pc = 0x1DF310u;
            goto label_1df310;
        }
    }
    ctx->pc = 0x1DF2F8u;
label_1df2f8:
    // 0x1df2f8: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1df2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1df2fc: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1df2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1df300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df304: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DF304u;
    SET_GPR_U32(ctx, 31, 0x1DF30Cu);
    ctx->pc = 0x1DF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF304u;
    // 0x1df308: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DF304u, 0x1DF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF30Cu;
label_1df30c:
    // 0x1df30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df310:
    // 0x1df310: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1df310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df314: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF314u;
    SET_GPR_U32(ctx, 31, 0x1DF31Cu);
    ctx->pc = 0x1DF318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF314u;
    // 0x1df318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF314u, 0x1DF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF31Cu;
label_1df31c:
    // 0x1df31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df320: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1df320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1df324: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF324u;
    SET_GPR_U32(ctx, 31, 0x1DF32Cu);
    ctx->pc = 0x1DF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF324u;
    // 0x1df328: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF324u, 0x1DF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF32Cu;
label_1df32c:
    // 0x1df32c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF32Cu;
    {
        const bool branch_taken_0x1df32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF32Cu;
        // 0x1df330: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df32c) {
            ctx->pc = 0x1DF348u;
            goto label_1df348;
        }
    }
    ctx->pc = 0x1DF334u;
label_1df334:
    // 0x1df334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df338: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x1df338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1df33c: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DF33Cu;
    SET_GPR_U32(ctx, 31, 0x1DF344u);
    ctx->pc = 0x1DF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF33Cu;
    // 0x1df340: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DF33Cu, 0x1DF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF344u;
label_1df344:
    // 0x1df344: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df348:
    // 0x1df348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df34c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF34Cu;
        // 0x1df350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF354u;
    // 0x1df354: 0x0  nop
    ctx->pc = 0x1df354u;
    // NOP
    ctx->pc = 0x1df358u;
}

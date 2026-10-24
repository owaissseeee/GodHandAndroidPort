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

// Function: ColiseumBattle_findNearEnemy
// Address: 0x1f03e8 - 0x1f0490
void ColiseumBattle_findNearEnemy_0x1f03e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_findNearEnemy_0x1f03e8");
#endif

    switch (ctx->pc) {
        case 0x1f0418u: goto label_1f0418;
        case 0x1f0424u: goto label_1f0424;
        case 0x1f0438u: goto label_1f0438;
        case 0x1f046cu: goto label_1f046c;
        default: break;
    }

    ctx->pc = 0x1f03e8u;

    // 0x1f03e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f03e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f03ec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f03f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f03f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f03f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f03f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f03f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f03f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f03fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0400: 0xae200bc8  sw          $zero, 0xBC8($s1)
    ctx->pc = 0x1f0400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3016), GPR_U32(ctx, 0));
    // 0x1f0404: 0x9062b010  lbu         $v0, -0x4FF0($v1)
    ctx->pc = 0x1f0404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x1f0408: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0408u;
    {
        const bool branch_taken_0x1f0408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0408u;
        // 0x1f040c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0408) {
            ctx->pc = 0x1F0428u;
            goto label_1f0428;
        }
    }
    ctx->pc = 0x1F0410u;
    // 0x1f0410: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F0410u;
    SET_GPR_U32(ctx, 31, 0x1F0418u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F0410u, 0x1F0418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0418u;
label_1f0418:
    // 0x1f0418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f041c: 0xc07c0d8  jal         func_1F0360
    ctx->pc = 0x1F041Cu;
    SET_GPR_U32(ctx, 31, 0x1F0424u);
    ctx->pc = 0x1F0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F041Cu;
    // 0x1f0420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0360u, 0x1F041Cu, 0x1F0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0424u;
label_1f0424:
    // 0x1f0424: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1f0424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_1f0428:
    // 0x1f0428: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x1f0428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27120)));
    // 0x1f042c: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F042Cu;
    {
        const bool branch_taken_0x1f042c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f042c) {
            ctx->pc = 0x1F0430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F042Cu;
            // 0x1f0430: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F047Cu;
            goto label_1f047c;
        }
    }
    ctx->pc = 0x1F0434u;
    // 0x1f0434: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1f0434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f0438:
    // 0x1f0438: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0438u;
    {
        const bool branch_taken_0x1f0438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0438) {
            ctx->pc = 0x1F043Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0438u;
            // 0x1f043c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0470u;
            goto label_1f0470;
        }
    }
    ctx->pc = 0x1F0440u;
    // 0x1f0440: 0x94a302fe  lhu         $v1, 0x2FE($a1)
    ctx->pc = 0x1f0440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
    // 0x1f0444: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1f0444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1f0448: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0448u;
    {
        const bool branch_taken_0x1f0448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0448u;
        // 0x1f044c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0448) {
            ctx->pc = 0x1F0458u;
            goto label_1f0458;
        }
    }
    ctx->pc = 0x1F0450u;
    // 0x1f0450: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1f0450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x1f0454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0458:
    // 0x1f0458: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1f0458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f045c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F045Cu;
    {
        const bool branch_taken_0x1f045c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f045c) {
            ctx->pc = 0x1F0460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F045Cu;
            // 0x1f0460: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0470u;
            goto label_1f0470;
        }
    }
    ctx->pc = 0x1F0464u;
    // 0x1f0464: 0xc07c0d8  jal         func_1F0360
    ctx->pc = 0x1F0464u;
    SET_GPR_U32(ctx, 31, 0x1F046Cu);
    ctx->pc = 0x1F0468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0464u;
    // 0x1f0468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0360u, 0x1F0464u, 0x1F046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F046Cu;
label_1f046c:
    // 0x1f046c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1f046cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f0470:
    // 0x1f0470: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F0470u;
    {
        const bool branch_taken_0x1f0470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0470) {
            ctx->pc = 0x1F0474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0470u;
            // 0x1f0474: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0438;
        }
    }
    ctx->pc = 0x1F0478u;
    // 0x1f0478: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f047c:
    // 0x1f047c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f047cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0484: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0484u;
        // 0x1f0488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F048Cu;
    // 0x1f048c: 0x0  nop
    ctx->pc = 0x1f048cu;
    // NOP
    ctx->pc = 0x1f0490u;
}

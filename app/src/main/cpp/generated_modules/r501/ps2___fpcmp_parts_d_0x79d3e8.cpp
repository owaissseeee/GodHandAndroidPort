#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __fpcmp_parts_d
// Address: 0x79d3e8 - 0x79d500
void ps2___fpcmp_parts_d_0x79d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_d_0x79d3e8");
#endif

    switch (ctx->pc) {
        case 0x79d430u: goto label_79d430;
        case 0x79d4a0u: goto label_79d4a0;
        case 0x79d4ccu: goto label_79d4cc;
        default: break;
    }

    ctx->pc = 0x79d3e8u;

    // 0x79d3e8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x79d3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79d3ec: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79d3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79d3f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D3F0u;
    {
        const bool branch_taken_0x79d3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d3f0) {
            ctx->pc = 0x79D408u;
            goto label_79d408;
        }
    }
    ctx->pc = 0x79D3F8u;
    // 0x79d3f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79d3fc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79d3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79d400: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D400u;
    {
        const bool branch_taken_0x79d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D400u;
        // 0x79d404: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d400) {
            ctx->pc = 0x79D410u;
            goto label_79d410;
        }
    }
    ctx->pc = 0x79D408u;
label_79d408:
    // 0x79d408: 0x3e00008  jr          $ra
    ctx->pc = 0x79D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D408u;
        // 0x79d40c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D410u;
label_79d410:
    // 0x79d410: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79D410u;
    {
        const bool branch_taken_0x79d410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D410u;
        // 0x79d414: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d410) {
            ctx->pc = 0x79D440u;
            goto label_79d440;
        }
    }
    ctx->pc = 0x79D418u;
    // 0x79d418: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D418u;
    {
        const bool branch_taken_0x79d418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d418) {
            ctx->pc = 0x79D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D418u;
            // 0x79d41c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D430u;
            goto label_79d430;
        }
    }
    ctx->pc = 0x79D420u;
    // 0x79d420: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79d424: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79d428: 0x3e00008  jr          $ra
    ctx->pc = 0x79D428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D428u;
        // 0x79d42c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D430u;
label_79d430:
    // 0x79d430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79d434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d438: 0x3e00008  jr          $ra
    ctx->pc = 0x79D438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D438u;
        // 0x79d43c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D440u;
label_79d440:
    // 0x79d440: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79D440u;
    {
        const bool branch_taken_0x79d440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d440) {
            ctx->pc = 0x79D444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D440u;
            // 0x79d444: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D45Cu;
            goto label_79d45c;
        }
    }
    ctx->pc = 0x79D448u;
    // 0x79d448: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79d448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79d44c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79d454: 0x3e00008  jr          $ra
    ctx->pc = 0x79D454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D454u;
        // 0x79d458: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D45Cu;
label_79d45c:
    // 0x79d45c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79D45Cu;
    {
        const bool branch_taken_0x79d45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D45Cu;
        // 0x79d460: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d45c) {
            ctx->pc = 0x79D484u;
            goto label_79d484;
        }
    }
    ctx->pc = 0x79D464u;
    // 0x79d464: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D464u;
    {
        const bool branch_taken_0x79d464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d464) {
            ctx->pc = 0x79D468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D464u;
            // 0x79d468: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D474u;
            goto label_79d474;
        }
    }
    ctx->pc = 0x79D46Cu;
    // 0x79d46c: 0x3e00008  jr          $ra
    ctx->pc = 0x79D46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D46Cu;
        // 0x79d470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D474u;
label_79d474:
    // 0x79d474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79d478: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d47c: 0x3e00008  jr          $ra
    ctx->pc = 0x79D47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D47Cu;
        // 0x79d480: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D484u;
label_79d484:
    // 0x79d484: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79D484u;
    {
        const bool branch_taken_0x79d484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79d484) {
            ctx->pc = 0x79D488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D484u;
            // 0x79d488: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d430;
        }
    }
    ctx->pc = 0x79D48Cu;
    // 0x79d48c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x79d48cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79d490: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79d494: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D494u;
    {
        const bool branch_taken_0x79d494 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x79d494) {
            ctx->pc = 0x79D498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D494u;
            // 0x79d498: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D4ACu;
            goto label_79d4ac;
        }
    }
    ctx->pc = 0x79D49Cu;
    // 0x79d49c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79d4a0:
    // 0x79d4a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x79D4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D4A4u;
        // 0x79d4a8: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D4ACu;
label_79d4ac:
    // 0x79d4ac: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x79d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79d4b0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x79d4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x79d4b4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79D4B4u;
    {
        const bool branch_taken_0x79d4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d4b4) {
            ctx->pc = 0x79D4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D4B4u;
            // 0x79d4b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d4a0;
        }
    }
    ctx->pc = 0x79D4BCu;
    // 0x79d4bc: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x79d4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79d4c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D4C0u;
    {
        const bool branch_taken_0x79d4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79d4c0) {
            ctx->pc = 0x79D4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D4C0u;
            // 0x79d4c4: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D4D8u;
            goto label_79d4d8;
        }
    }
    ctx->pc = 0x79D4C8u;
    // 0x79d4c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79d4cc:
    // 0x79d4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79d4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79D4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D4D0u;
        // 0x79d4d4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D4D8u;
label_79d4d8:
    // 0x79d4d8: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x79d4d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x79d4dc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x79d4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79d4e0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79D4E0u;
    {
        const bool branch_taken_0x79d4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d4e0) {
            ctx->pc = 0x79D4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D4E0u;
            // 0x79d4e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d4a0;
        }
    }
    ctx->pc = 0x79D4E8u;
    // 0x79d4e8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x79d4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79d4ec: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79D4ECu;
    {
        const bool branch_taken_0x79d4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D4ECu;
        // 0x79d4f0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d4ec) {
            ctx->pc = 0x79D4CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d4cc;
        }
    }
    ctx->pc = 0x79D4F4u;
    // 0x79d4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x79D4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D4F4u;
        // 0x79d4f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D4FCu;
    // 0x79d4fc: 0x0  nop
    ctx->pc = 0x79d4fcu;
    // NOP
    ctx->pc = 0x79d500u;
}
} // namespace gh_r501

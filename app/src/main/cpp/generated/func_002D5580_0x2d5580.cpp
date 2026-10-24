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

// Function: func_002D5580
// Address: 0x2d5580 - 0x2d5610
void func_002D5580_0x2d5580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5580_0x2d5580");
#endif

    switch (ctx->pc) {
        case 0x2d5580u: goto label_2d5580;
        case 0x2d5584u: goto label_2d5584;
        case 0x2d5588u: goto label_2d5588;
        case 0x2d558cu: goto label_2d558c;
        case 0x2d5590u: goto label_2d5590;
        case 0x2d5594u: goto label_2d5594;
        case 0x2d5598u: goto label_2d5598;
        case 0x2d559cu: goto label_2d559c;
        case 0x2d55a0u: goto label_2d55a0;
        case 0x2d55a4u: goto label_2d55a4;
        case 0x2d55a8u: goto label_2d55a8;
        case 0x2d55acu: goto label_2d55ac;
        case 0x2d55b0u: goto label_2d55b0;
        case 0x2d55b4u: goto label_2d55b4;
        case 0x2d55b8u: goto label_2d55b8;
        case 0x2d55bcu: goto label_2d55bc;
        case 0x2d55c0u: goto label_2d55c0;
        case 0x2d55c4u: goto label_2d55c4;
        case 0x2d55c8u: goto label_2d55c8;
        case 0x2d55ccu: goto label_2d55cc;
        case 0x2d55d0u: goto label_2d55d0;
        case 0x2d55d4u: goto label_2d55d4;
        case 0x2d55d8u: goto label_2d55d8;
        case 0x2d55dcu: goto label_2d55dc;
        case 0x2d55e0u: goto label_2d55e0;
        case 0x2d55e4u: goto label_2d55e4;
        case 0x2d55e8u: goto label_2d55e8;
        case 0x2d55ecu: goto label_2d55ec;
        case 0x2d55f0u: goto label_2d55f0;
        case 0x2d55f4u: goto label_2d55f4;
        case 0x2d55f8u: goto label_2d55f8;
        case 0x2d55fcu: goto label_2d55fc;
        case 0x2d5600u: goto label_2d5600;
        case 0x2d5604u: goto label_2d5604;
        case 0x2d5608u: goto label_2d5608;
        case 0x2d560cu: goto label_2d560c;
        default: break;
    }

    ctx->pc = 0x2d5580u;

label_2d5580:
    // 0x2d5580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d5584:
    // 0x2d5584: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d5584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2d5588:
    // 0x2d5588: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d5588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2d558c:
    // 0x2d558c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d558cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d5590:
    // 0x2d5590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5594:
    // 0x2d5594: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d5594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2d5598:
    // 0x2d5598: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d5598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d559c:
    // 0x2d559c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d55a0:
    // 0x2d55a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d55a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d55a4:
    // 0x2d55a4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2d55a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d55a8:
    // 0x2d55a8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2d55a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2d55ac:
    // 0x2d55ac: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x2d55acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_2d55b0:
    // 0x2d55b0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d55b4:
    // 0x2d55b4: 0x40f809  jalr        $v0
label_2d55b8:
    if (ctx->pc == 0x2D55B8u) {
        ctx->pc = 0x2D55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55B4u;
        // 0x2d55b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D55BCu;
        goto label_2d55bc;
    }
    ctx->pc = 0x2D55B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D55BCu);
        ctx->pc = 0x2D55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55B4u;
        // 0x2d55b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55B4u, 0x2D55BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D55BCu;
label_2d55bc:
    // 0x2d55bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d55bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d55c0:
    // 0x2d55c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d55c4:
    // 0x2d55c4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_2d55c8:
    if (ctx->pc == 0x2D55C8u) {
        ctx->pc = 0x2D55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55C4u;
        // 0x2d55c8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D55CCu;
        goto label_2d55cc;
    }
    ctx->pc = 0x2D55C4u;
    {
        const bool branch_taken_0x2d55c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55C4u;
        // 0x2d55c8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d55c4) {
            ctx->pc = 0x2D55E4u;
            goto label_2d55e4;
        }
    }
    ctx->pc = 0x2D55CCu;
label_2d55cc:
    // 0x2d55cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d55d0:
    // 0x2d55d0: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2d55d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d55d4:
    // 0x2d55d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d55d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d55d8:
    // 0x2d55d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d55d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d55dc:
    // 0x2d55dc: 0xc0b563a  jal         func_2D58E8
label_2d55e0:
    if (ctx->pc == 0x2D55E0u) {
        ctx->pc = 0x2D55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55DCu;
        // 0x2d55e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D55E4u;
        goto label_2d55e4;
    }
    ctx->pc = 0x2D55DCu;
    SET_GPR_U32(ctx, 31, 0x2D55E4u);
    ctx->pc = 0x2D55E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D55DCu;
    // 0x2d55e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D58E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D58E8u, 0x2D55DCu, 0x2D55E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55E4u;
label_2d55e4:
    // 0x2d55e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d55e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d55e8:
    // 0x2d55e8: 0xc0b5510  jal         func_2D5440
label_2d55ec:
    if (ctx->pc == 0x2D55ECu) {
        ctx->pc = 0x2D55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55E8u;
        // 0x2d55ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D55F0u;
        goto label_2d55f0;
    }
    ctx->pc = 0x2D55E8u;
    SET_GPR_U32(ctx, 31, 0x2D55F0u);
    ctx->pc = 0x2D55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D55E8u;
    // 0x2d55ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5440u, 0x2D55E8u, 0x2D55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55F0u;
label_2d55f0:
    // 0x2d55f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d55f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d55f4:
    // 0x2d55f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d55f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d55f8:
    // 0x2d55f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d55f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d55fc:
    // 0x2d55fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d55fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5600:
    // 0x2d5600: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d5600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5604:
    // 0x2d5604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5608:
    // 0x2d5608: 0x3e00008  jr          $ra
label_2d560c:
    if (ctx->pc == 0x2D560Cu) {
        ctx->pc = 0x2D560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5608u;
        // 0x2d560c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5610u;
        goto label_fallthrough_0x2d5608;
    }
    ctx->pc = 0x2D5608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5608u;
        // 0x2d560c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d5608:
    ctx->pc = 0x2D5610u;
}

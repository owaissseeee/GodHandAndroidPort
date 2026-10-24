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

// Function: cTaskManager_execute_2D54F0
// Address: 0x2d54f0 - 0x2d5580
void cTaskManager_execute_2D54F0_0x2d54f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskManager_execute_2D54F0_0x2d54f0");
#endif

    switch (ctx->pc) {
        case 0x2d54f0u: goto label_2d54f0;
        case 0x2d54f4u: goto label_2d54f4;
        case 0x2d54f8u: goto label_2d54f8;
        case 0x2d54fcu: goto label_2d54fc;
        case 0x2d5500u: goto label_2d5500;
        case 0x2d5504u: goto label_2d5504;
        case 0x2d5508u: goto label_2d5508;
        case 0x2d550cu: goto label_2d550c;
        case 0x2d5510u: goto label_2d5510;
        case 0x2d5514u: goto label_2d5514;
        case 0x2d5518u: goto label_2d5518;
        case 0x2d551cu: goto label_2d551c;
        case 0x2d5520u: goto label_2d5520;
        case 0x2d5524u: goto label_2d5524;
        case 0x2d5528u: goto label_2d5528;
        case 0x2d552cu: goto label_2d552c;
        case 0x2d5530u: goto label_2d5530;
        case 0x2d5534u: goto label_2d5534;
        case 0x2d5538u: goto label_2d5538;
        case 0x2d553cu: goto label_2d553c;
        case 0x2d5540u: goto label_2d5540;
        case 0x2d5544u: goto label_2d5544;
        case 0x2d5548u: goto label_2d5548;
        case 0x2d554cu: goto label_2d554c;
        case 0x2d5550u: goto label_2d5550;
        case 0x2d5554u: goto label_2d5554;
        case 0x2d5558u: goto label_2d5558;
        case 0x2d555cu: goto label_2d555c;
        case 0x2d5560u: goto label_2d5560;
        case 0x2d5564u: goto label_2d5564;
        case 0x2d5568u: goto label_2d5568;
        case 0x2d556cu: goto label_2d556c;
        case 0x2d5570u: goto label_2d5570;
        case 0x2d5574u: goto label_2d5574;
        case 0x2d5578u: goto label_2d5578;
        case 0x2d557cu: goto label_2d557c;
        default: break;
    }

    ctx->pc = 0x2d54f0u;

label_2d54f0:
    // 0x2d54f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d54f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d54f4:
    // 0x2d54f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d54f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2d54f8:
    // 0x2d54f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d54f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2d54fc:
    // 0x2d54fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d54fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d5500:
    // 0x2d5500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5504:
    // 0x2d5504: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d5504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2d5508:
    // 0x2d5508: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d5508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d550c:
    // 0x2d550c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d550cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d5510:
    // 0x2d5510: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d5510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d5514:
    // 0x2d5514: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2d5514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d5518:
    // 0x2d5518: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2d5518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2d551c:
    // 0x2d551c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x2d551cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_2d5520:
    // 0x2d5520: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d5524:
    // 0x2d5524: 0x40f809  jalr        $v0
label_2d5528:
    if (ctx->pc == 0x2D5528u) {
        ctx->pc = 0x2D5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5524u;
        // 0x2d5528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D552Cu;
        goto label_2d552c;
    }
    ctx->pc = 0x2D5524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D552Cu);
        ctx->pc = 0x2D5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5524u;
        // 0x2d5528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5524u, 0x2D552Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D552Cu;
label_2d552c:
    // 0x2d552c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d552cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5530:
    // 0x2d5530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d5530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d5534:
    // 0x2d5534: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_2d5538:
    if (ctx->pc == 0x2D5538u) {
        ctx->pc = 0x2D5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5534u;
        // 0x2d5538: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D553Cu;
        goto label_2d553c;
    }
    ctx->pc = 0x2D5534u;
    {
        const bool branch_taken_0x2d5534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5534u;
        // 0x2d5538: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5534) {
            ctx->pc = 0x2D5554u;
            goto label_2d5554;
        }
    }
    ctx->pc = 0x2D553Cu;
label_2d553c:
    // 0x2d553c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d5540:
    // 0x2d5540: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2d5540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d5544:
    // 0x2d5544: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d5544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d5548:
    // 0x2d5548: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d5548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d554c:
    // 0x2d554c: 0xc0b562e  jal         func_2D58B8
label_2d5550:
    if (ctx->pc == 0x2D5550u) {
        ctx->pc = 0x2D5550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D554Cu;
        // 0x2d5550: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5554u;
        goto label_2d5554;
    }
    ctx->pc = 0x2D554Cu;
    SET_GPR_U32(ctx, 31, 0x2D5554u);
    ctx->pc = 0x2D5550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D554Cu;
    // 0x2d5550: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D58B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D58B8u, 0x2D554Cu, 0x2D5554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5554u;
label_2d5554:
    // 0x2d5554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d5558:
    // 0x2d5558: 0xc0b5510  jal         func_2D5440
label_2d555c:
    if (ctx->pc == 0x2D555Cu) {
        ctx->pc = 0x2D555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5558u;
        // 0x2d555c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5560u;
        goto label_2d5560;
    }
    ctx->pc = 0x2D5558u;
    SET_GPR_U32(ctx, 31, 0x2D5560u);
    ctx->pc = 0x2D555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5558u;
    // 0x2d555c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5440u, 0x2D5558u, 0x2D5560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5560u;
label_2d5560:
    // 0x2d5560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d5560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d5564:
    // 0x2d5564: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d5564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d5568:
    // 0x2d5568: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d5568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d556c:
    // 0x2d556c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d556cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5570:
    // 0x2d5570: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d5570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5574:
    // 0x2d5574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5578:
    // 0x2d5578: 0x3e00008  jr          $ra
label_2d557c:
    if (ctx->pc == 0x2D557Cu) {
        ctx->pc = 0x2D557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5578u;
        // 0x2d557c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5580u;
        goto label_fallthrough_0x2d5578;
    }
    ctx->pc = 0x2D5578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5578u;
        // 0x2d557c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d5578:
    ctx->pc = 0x2D5580u;
}

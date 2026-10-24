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

// Function: Forward349480_349468
// Address: 0x349468 - 0x349578
void Forward349480_349468_0x349468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward349480_349468_0x349468");
#endif

    switch (ctx->pc) {
        case 0x3494b0u: goto label_3494b0;
        case 0x3494bcu: goto label_3494bc;
        case 0x3494d0u: goto label_3494d0;
        case 0x3494d8u: goto label_3494d8;
        case 0x3494e8u: goto label_3494e8;
        case 0x3494f8u: goto label_3494f8;
        case 0x349510u: goto label_349510;
        case 0x349518u: goto label_349518;
        case 0x34952cu: goto label_34952c;
        case 0x34953cu: goto label_34953c;
        case 0x34954cu: goto label_34954c;
        case 0x34955cu: goto label_34955c;
        default: break;
    }

    ctx->pc = 0x349468u;

    // 0x349468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34946c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349474: 0x80d2520  j           func_349480
    ctx->pc = 0x349474u;
    ctx->pc = 0x349478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349474u;
    // 0x349478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349480u;
    goto label_349480;
    ctx->pc = 0x34947Cu;
    // 0x34947c: 0x0  nop
    ctx->pc = 0x34947cu;
    // NOP
label_349480:
    // 0x349480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349484: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x349484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x349488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x349488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34948c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349490: 0x8c52c7dc  lw          $s2, -0x3824($v0)
    ctx->pc = 0x349490u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3EC7DCu));
    // 0x349494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x349494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34949c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3494a0: 0x1643002f  bne         $s2, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3494A0u;
    {
        const bool branch_taken_0x3494a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x3494A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494A0u;
        // 0x3494a4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494a0) {
            ctx->pc = 0x349560u;
            goto label_349560;
        }
    }
    ctx->pc = 0x3494A8u;
    // 0x3494a8: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x3494A8u;
    SET_GPR_U32(ctx, 31, 0x3494B0u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x3494A8u, 0x3494B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3494B0u;
label_3494b0:
    // 0x3494b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3494b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494b4: 0xc0d22f2  jal         func_348BC8
    ctx->pc = 0x3494B4u;
    SET_GPR_U32(ctx, 31, 0x3494BCu);
    ctx->pc = 0x3494B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3494B4u;
    // 0x3494b8: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BC8u, 0x3494B4u, 0x3494BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3494BCu;
label_3494bc:
    // 0x3494bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3494bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494c0: 0x16120027  bne         $s0, $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x3494C0u;
    {
        const bool branch_taken_0x3494c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3494C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494C0u;
        // 0x3494c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494c0) {
            ctx->pc = 0x349560u;
            goto label_349560;
        }
    }
    ctx->pc = 0x3494C8u;
    // 0x3494c8: 0xc0d24f6  jal         func_3493D8
    ctx->pc = 0x3494C8u;
    SET_GPR_U32(ctx, 31, 0x3494D0u);
    ctx->pc = 0x3493D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3493D8u, 0x3494C8u, 0x3494D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3494D0u;
label_3494d0:
    // 0x3494d0: 0xc0d2608  jal         func_349820
    ctx->pc = 0x3494D0u;
    SET_GPR_U32(ctx, 31, 0x3494D8u);
    ctx->pc = 0x349820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349820u, 0x3494D0u, 0x3494D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3494D8u;
label_3494d8:
    // 0x3494d8: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3494D8u;
    {
        const bool branch_taken_0x3494d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3494DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494D8u;
        // 0x3494dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494d8) {
            ctx->pc = 0x349508u;
            goto label_349508;
        }
    }
    ctx->pc = 0x3494E0u;
    // 0x3494e0: 0x2630006c  addiu       $s0, $s1, 0x6C
    ctx->pc = 0x3494e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x3494e4: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x3494e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3494e8:
    // 0x3494e8: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3494E8u;
    {
        const bool branch_taken_0x3494e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3494e8) {
            ctx->pc = 0x3494ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3494E8u;
            // 0x3494ec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3494FCu;
            goto label_3494fc;
        }
    }
    ctx->pc = 0x3494F0u;
    // 0x3494f0: 0xc0d255e  jal         func_349578
    ctx->pc = 0x3494F0u;
    SET_GPR_U32(ctx, 31, 0x3494F8u);
    ctx->pc = 0x3494F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3494F0u;
    // 0x3494f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349578u, 0x3494F0u, 0x3494F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3494F8u;
label_3494f8:
    // 0x3494f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3494f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3494fc:
    // 0x3494fc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3494FCu;
    {
        const bool branch_taken_0x3494fc = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x349500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494FCu;
        // 0x349500: 0x26100304  addiu       $s0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494fc) {
            ctx->pc = 0x3494E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3494e8;
        }
    }
    ctx->pc = 0x349504u;
    // 0x349504: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x349504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_349508:
    // 0x349508: 0xc0d25bc  jal         func_3496F0
    ctx->pc = 0x349508u;
    SET_GPR_U32(ctx, 31, 0x349510u);
    ctx->pc = 0x34950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349508u;
    // 0x34950c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496F0u, 0x349508u, 0x349510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349510u;
label_349510:
    // 0x349510: 0xc0d2608  jal         func_349820
    ctx->pc = 0x349510u;
    SET_GPR_U32(ctx, 31, 0x349518u);
    ctx->pc = 0x349820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349820u, 0x349510u, 0x349518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349518u;
label_349518:
    // 0x349518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34951c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34951Cu;
    {
        const bool branch_taken_0x34951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34951c) {
            ctx->pc = 0x349534u;
            goto label_349534;
        }
    }
    ctx->pc = 0x349524u;
    // 0x349524: 0xc0d5ca0  jal         func_357280
    ctx->pc = 0x349524u;
    SET_GPR_U32(ctx, 31, 0x34952Cu);
    ctx->pc = 0x357280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357280u, 0x349524u, 0x34952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34952Cu;
label_34952c:
    // 0x34952c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x34952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x349530: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x349530u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_349534:
    // 0x349534: 0xc0d2502  jal         func_349408
    ctx->pc = 0x349534u;
    SET_GPR_U32(ctx, 31, 0x34953Cu);
    ctx->pc = 0x349538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349534u;
    // 0x349538: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349408u, 0x349534u, 0x34953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34953Cu;
label_34953c:
    // 0x34953c: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34953Cu;
    {
        const bool branch_taken_0x34953c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x349540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34953Cu;
        // 0x349540: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34953c) {
            ctx->pc = 0x349560u;
            goto label_349560;
        }
    }
    ctx->pc = 0x349544u;
    // 0x349544: 0xc0d25de  jal         func_349778
    ctx->pc = 0x349544u;
    SET_GPR_U32(ctx, 31, 0x34954Cu);
    ctx->pc = 0x349778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349778u, 0x349544u, 0x34954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34954Cu;
label_34954c:
    // 0x34954c: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34954Cu;
    {
        const bool branch_taken_0x34954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x349550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34954Cu;
        // 0x349550: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34954c) {
            ctx->pc = 0x349560u;
            goto label_349560;
        }
    }
    ctx->pc = 0x349554u;
    // 0x349554: 0xc0d250e  jal         func_349438
    ctx->pc = 0x349554u;
    SET_GPR_U32(ctx, 31, 0x34955Cu);
    ctx->pc = 0x349438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349438u, 0x349554u, 0x34955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34955Cu;
label_34955c:
    // 0x34955c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34955cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349560:
    // 0x349560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349564: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x349564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349568: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x349568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34956c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34956cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349570: 0x3e00008  jr          $ra
    ctx->pc = 0x349570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349570u;
        // 0x349574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349578u;
}

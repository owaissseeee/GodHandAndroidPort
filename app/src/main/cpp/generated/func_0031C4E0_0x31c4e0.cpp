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

// Function: func_0031C4E0
// Address: 0x31c4e0 - 0x31c5c0
void func_0031C4E0_0x31c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C4E0_0x31c4e0");
#endif

    switch (ctx->pc) {
        case 0x31c4e0u: goto label_31c4e0;
        case 0x31c4e4u: goto label_31c4e4;
        case 0x31c4e8u: goto label_31c4e8;
        case 0x31c4ecu: goto label_31c4ec;
        case 0x31c4f0u: goto label_31c4f0;
        case 0x31c4f4u: goto label_31c4f4;
        case 0x31c4f8u: goto label_31c4f8;
        case 0x31c4fcu: goto label_31c4fc;
        case 0x31c500u: goto label_31c500;
        case 0x31c504u: goto label_31c504;
        case 0x31c508u: goto label_31c508;
        case 0x31c50cu: goto label_31c50c;
        case 0x31c510u: goto label_31c510;
        case 0x31c514u: goto label_31c514;
        case 0x31c518u: goto label_31c518;
        case 0x31c51cu: goto label_31c51c;
        case 0x31c520u: goto label_31c520;
        case 0x31c524u: goto label_31c524;
        case 0x31c528u: goto label_31c528;
        case 0x31c52cu: goto label_31c52c;
        case 0x31c530u: goto label_31c530;
        case 0x31c534u: goto label_31c534;
        case 0x31c538u: goto label_31c538;
        case 0x31c53cu: goto label_31c53c;
        case 0x31c540u: goto label_31c540;
        case 0x31c544u: goto label_31c544;
        case 0x31c548u: goto label_31c548;
        case 0x31c54cu: goto label_31c54c;
        case 0x31c550u: goto label_31c550;
        case 0x31c554u: goto label_31c554;
        case 0x31c558u: goto label_31c558;
        case 0x31c55cu: goto label_31c55c;
        case 0x31c560u: goto label_31c560;
        case 0x31c564u: goto label_31c564;
        case 0x31c568u: goto label_31c568;
        case 0x31c56cu: goto label_31c56c;
        case 0x31c570u: goto label_31c570;
        case 0x31c574u: goto label_31c574;
        case 0x31c578u: goto label_31c578;
        case 0x31c57cu: goto label_31c57c;
        case 0x31c580u: goto label_31c580;
        case 0x31c584u: goto label_31c584;
        case 0x31c588u: goto label_31c588;
        case 0x31c58cu: goto label_31c58c;
        case 0x31c590u: goto label_31c590;
        case 0x31c594u: goto label_31c594;
        case 0x31c598u: goto label_31c598;
        case 0x31c59cu: goto label_31c59c;
        case 0x31c5a0u: goto label_31c5a0;
        case 0x31c5a4u: goto label_31c5a4;
        case 0x31c5a8u: goto label_31c5a8;
        case 0x31c5acu: goto label_31c5ac;
        case 0x31c5b0u: goto label_31c5b0;
        case 0x31c5b4u: goto label_31c5b4;
        case 0x31c5b8u: goto label_31c5b8;
        case 0x31c5bcu: goto label_31c5bc;
        default: break;
    }

    ctx->pc = 0x31c4e0u;

label_31c4e0:
    // 0x31c4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31c4e4:
    // 0x31c4e4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x31c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_31c4e8:
    // 0x31c4e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_31c4ec:
    // 0x31c4ec: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x31c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_31c4f0:
    // 0x31c4f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31c4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_31c4f4:
    // 0x31c4f4: 0x245074a0  addiu       $s0, $v0, 0x74A0
    ctx->pc = 0x31c4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_31c4f8:
    // 0x31c4f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_31c4fc:
    // 0x31c4fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31c4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_31c500:
    // 0x31c500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31c504:
    // 0x31c504: 0x960305b0  lhu         $v1, 0x5B0($s0)
    ctx->pc = 0x31c504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1456)));
label_31c508:
    // 0x31c508: 0x1064001f  beq         $v1, $a0, . + 4 + (0x1F << 2)
label_31c50c:
    if (ctx->pc == 0x31C50Cu) {
        ctx->pc = 0x31C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C508u;
        // 0x31c50c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C510u;
        goto label_31c510;
    }
    ctx->pc = 0x31C508u;
    {
        const bool branch_taken_0x31c508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x31C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C508u;
        // 0x31c50c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c508) {
            ctx->pc = 0x31C588u;
            goto label_31c588;
        }
    }
    ctx->pc = 0x31C510u;
label_31c510:
    // 0x31c510: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x31c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
label_31c514:
    // 0x31c514: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x31c514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_31c518:
    // 0x31c518: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31c51c:
    // 0x31c51c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_31c520:
    if (ctx->pc == 0x31C520u) {
        ctx->pc = 0x31C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C51Cu;
        // 0x31c520: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C524u;
        goto label_31c524;
    }
    ctx->pc = 0x31C51Cu;
    {
        const bool branch_taken_0x31c51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C51Cu;
        // 0x31c520: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c51c) {
            ctx->pc = 0x31C554u;
            goto label_31c554;
        }
    }
    ctx->pc = 0x31C524u;
label_31c524:
    // 0x31c524: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x31c524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_31c528:
    // 0x31c528: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x31c528u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
label_31c52c:
    // 0x31c52c: 0x24512c00  addiu       $s1, $v0, 0x2C00
    ctx->pc = 0x31c52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
label_31c530:
    // 0x31c530: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x31c530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_31c534:
    // 0x31c534: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x31c534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31c538:
    // 0x31c538: 0xc0b56a8  jal         func_2D5AA0
label_31c53c:
    if (ctx->pc == 0x31C53Cu) {
        ctx->pc = 0x31C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C538u;
        // 0x31c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C540u;
        goto label_31c540;
    }
    ctx->pc = 0x31C538u;
    SET_GPR_U32(ctx, 31, 0x31C540u);
    ctx->pc = 0x31C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C538u;
    // 0x31c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x31C538u, 0x31C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C540u;
label_31c540:
    // 0x31c540: 0x8e427a24  lw          $v0, 0x7A24($s2)
    ctx->pc = 0x31c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31268)));
label_31c544:
    // 0x31c544: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x31c544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_31c548:
    // 0x31c548: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
label_31c54c:
    if (ctx->pc == 0x31C54Cu) {
        ctx->pc = 0x31C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C548u;
        // 0x31c54c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C550u;
        goto label_31c550;
    }
    ctx->pc = 0x31C548u;
    {
        const bool branch_taken_0x31c548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c548) {
            ctx->pc = 0x31C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C548u;
            // 0x31c54c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c538;
        }
    }
    ctx->pc = 0x31C550u;
label_31c550:
    // 0x31c550: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x31c550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_31c554:
    // 0x31c554: 0xc0c3ea6  jal         func_30FA98
label_31c558:
    if (ctx->pc == 0x31C558u) {
        ctx->pc = 0x31C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C554u;
        // 0x31c558: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C55Cu;
        goto label_31c55c;
    }
    ctx->pc = 0x31C554u;
    SET_GPR_U32(ctx, 31, 0x31C55Cu);
    ctx->pc = 0x31C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C554u;
    // 0x31c558: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x31C554u, 0x31C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C55Cu;
label_31c55c:
    // 0x31c55c: 0x266374a0  addiu       $v1, $s3, 0x74A0
    ctx->pc = 0x31c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
label_31c560:
    // 0x31c560: 0xac6205f4  sw          $v0, 0x5F4($v1)
    ctx->pc = 0x31c560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1524), GPR_U32(ctx, 2));
label_31c564:
    // 0x31c564: 0x8c450214  lw          $a1, 0x214($v0)
    ctx->pc = 0x31c564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_31c568:
    // 0x31c568: 0x84a40040  lh          $a0, 0x40($a1)
    ctx->pc = 0x31c568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
label_31c56c:
    // 0x31c56c: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x31c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_31c570:
    // 0x31c570: 0x60f809  jalr        $v1
label_31c574:
    if (ctx->pc == 0x31C574u) {
        ctx->pc = 0x31C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C570u;
        // 0x31c574: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C578u;
        goto label_31c578;
    }
    ctx->pc = 0x31C570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31C578u);
        ctx->pc = 0x31C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C570u;
        // 0x31c574: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C570u, 0x31C578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C578u;
label_31c578:
    // 0x31c578: 0xc0c7170  jal         func_31C5C0
label_31c57c:
    if (ctx->pc == 0x31C57Cu) {
        ctx->pc = 0x31C580u;
        goto label_31c580;
    }
    ctx->pc = 0x31C578u;
    SET_GPR_U32(ctx, 31, 0x31C580u);
    ctx->pc = 0x31C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C5C0u, 0x31C578u, 0x31C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C580u;
label_31c580:
    // 0x31c580: 0x10000007  b           . + 4 + (0x7 << 2)
label_31c584:
    if (ctx->pc == 0x31C584u) {
        ctx->pc = 0x31C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C580u;
        // 0x31c584: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C588u;
        goto label_31c588;
    }
    ctx->pc = 0x31C580u;
    {
        const bool branch_taken_0x31c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C580u;
        // 0x31c584: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c580) {
            ctx->pc = 0x31C5A0u;
            goto label_31c5a0;
        }
    }
    ctx->pc = 0x31C588u;
label_31c588:
    // 0x31c588: 0xc0c3d54  jal         func_30F550
label_31c58c:
    if (ctx->pc == 0x31C58Cu) {
        ctx->pc = 0x31C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C588u;
        // 0x31c58c: 0x24041690  addiu       $a0, $zero, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C590u;
        goto label_31c590;
    }
    ctx->pc = 0x31C588u;
    SET_GPR_U32(ctx, 31, 0x31C590u);
    ctx->pc = 0x31C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C588u;
    // 0x31c58c: 0x24041690  addiu       $a0, $zero, 0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x31C588u, 0x31C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C590u;
label_31c590:
    // 0x31c590: 0xc041f90  jal         func_107E40
label_31c594:
    if (ctx->pc == 0x31C594u) {
        ctx->pc = 0x31C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C590u;
        // 0x31c594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C598u;
        goto label_31c598;
    }
    ctx->pc = 0x31C590u;
    SET_GPR_U32(ctx, 31, 0x31C598u);
    ctx->pc = 0x31C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C590u;
    // 0x31c594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107E40u, 0x31C590u, 0x31C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C598u;
label_31c598:
    // 0x31c598: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x31c598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
label_31c59c:
    // 0x31c59c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31c59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31c5a0:
    // 0x31c5a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31c5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31c5a4:
    // 0x31c5a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31c5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31c5a8:
    // 0x31c5a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31c5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31c5ac:
    // 0x31c5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31c5b0:
    // 0x31c5b0: 0x3e00008  jr          $ra
label_31c5b4:
    if (ctx->pc == 0x31C5B4u) {
        ctx->pc = 0x31C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5B0u;
        // 0x31c5b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C5B8u;
        goto label_31c5b8;
    }
    ctx->pc = 0x31C5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5B0u;
        // 0x31c5b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C5B8u;
label_31c5b8:
    // 0x31c5b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x31c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_31c5bc:
    // 0x31c5bc: 0x0  nop
    ctx->pc = 0x31c5bcu;
    // NOP
    ctx->pc = 0x31c5c0u;
}

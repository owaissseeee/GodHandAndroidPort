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

// Function: func_003514B8
// Address: 0x3514b8 - 0x351780
void func_003514B8_0x3514b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003514B8_0x3514b8");
#endif

    switch (ctx->pc) {
        case 0x351510u: goto label_351510;
        case 0x351520u: goto label_351520;
        case 0x351534u: goto label_351534;
        case 0x351548u: goto label_351548;
        case 0x35157cu: goto label_35157c;
        case 0x3515acu: goto label_3515ac;
        case 0x3515c0u: goto label_3515c0;
        case 0x3515c8u: goto label_3515c8;
        case 0x3515d8u: goto label_3515d8;
        case 0x3515f0u: goto label_3515f0;
        case 0x351600u: goto label_351600;
        case 0x351620u: goto label_351620;
        case 0x351630u: goto label_351630;
        case 0x351660u: goto label_351660;
        case 0x351678u: goto label_351678;
        case 0x3516e4u: goto label_3516e4;
        case 0x3516f0u: goto label_3516f0;
        case 0x351700u: goto label_351700;
        case 0x351720u: goto label_351720;
        case 0x351740u: goto label_351740;
        default: break;
    }

    ctx->pc = 0x3514b8u;

    // 0x3514b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3514b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3514bc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3514bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3514c0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3514c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3514c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3514c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3514c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3514c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3514cc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3514ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3514d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3514d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3514d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3514d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3514d8: 0x26140950  addiu       $s4, $s0, 0x950
    ctx->pc = 0x3514d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x3514dc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3514dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x3514e0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3514e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3514e4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x3514e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x3514e8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3514e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3514ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3514ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3514f0: 0x26021fb8  addiu       $v0, $s0, 0x1FB8
    ctx->pc = 0x3514f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8120));
    // 0x3514f4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3514f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3514f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3514f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3514fc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3514fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x351500: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x351500u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x351504: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x351504u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x351508: 0xc0d5ba6  jal         func_356E98
    ctx->pc = 0x351508u;
    SET_GPR_U32(ctx, 31, 0x351510u);
    ctx->pc = 0x35150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351508u;
    // 0x35150c: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356E98u, 0x351508u, 0x351510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351510u;
label_351510:
    // 0x351510: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x351510u;
    {
        const bool branch_taken_0x351510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351510) {
            ctx->pc = 0x351514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351510u;
            // 0x351514: 0x8e630078  lw          $v1, 0x78($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351550u;
            goto label_351550;
        }
    }
    ctx->pc = 0x351518u;
    // 0x351518: 0xc0d4700  jal         func_351C00
    ctx->pc = 0x351518u;
    SET_GPR_U32(ctx, 31, 0x351520u);
    ctx->pc = 0x35151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351518u;
    // 0x35151c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C00u, 0x351518u, 0x351520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351520u;
label_351520:
    // 0x351520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351524: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x351524u;
    {
        const bool branch_taken_0x351524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x351524) {
            ctx->pc = 0x351528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351524u;
            // 0x351528: 0xae830028  sw          $v1, 0x28($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351540u;
            goto label_351540;
        }
    }
    ctx->pc = 0x35152Cu;
    // 0x35152c: 0xc0d5536  jal         func_3554D8
    ctx->pc = 0x35152Cu;
    SET_GPR_U32(ctx, 31, 0x351534u);
    ctx->pc = 0x351530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35152Cu;
    // 0x351530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3554D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3554D8u, 0x35152Cu, 0x351534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351534u;
label_351534:
    // 0x351534: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x351534u;
    {
        const bool branch_taken_0x351534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351534u;
        // 0x351538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351534) {
            ctx->pc = 0x351754u;
            goto label_351754;
        }
    }
    ctx->pc = 0x35153Cu;
    // 0x35153c: 0x0  nop
    ctx->pc = 0x35153cu;
    // NOP
label_351540:
    // 0x351540: 0xc0d445c  jal         func_351170
    ctx->pc = 0x351540u;
    SET_GPR_U32(ctx, 31, 0x351548u);
    ctx->pc = 0x351544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351540u;
    // 0x351544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351170u, 0x351540u, 0x351548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351548u;
label_351548:
    // 0x351548: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x351548u;
    {
        const bool branch_taken_0x351548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351548u;
        // 0x35154c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351548) {
            ctx->pc = 0x351758u;
            goto label_351758;
        }
    }
    ctx->pc = 0x351550u;
label_351550:
    // 0x351550: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x351550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x351554: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351554u;
    {
        const bool branch_taken_0x351554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x351554) {
            ctx->pc = 0x351558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351554u;
            // 0x351558: 0x323100cc  andi        $s1, $s1, 0xCC (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)204);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35156Cu;
            goto label_35156c;
        }
    }
    ctx->pc = 0x35155Cu;
    // 0x35155c: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x35155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x351560: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x351560u;
    {
        const bool branch_taken_0x351560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351560u;
        // 0x351564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351560) {
            ctx->pc = 0x351570u;
            goto label_351570;
        }
    }
    ctx->pc = 0x351568u;
    // 0x351568: 0x323100cc  andi        $s1, $s1, 0xCC
    ctx->pc = 0x351568u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)204);
label_35156c:
    // 0x35156c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_351570:
    // 0x351570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351574: 0xc0d3224  jal         func_34C890
    ctx->pc = 0x351574u;
    SET_GPR_U32(ctx, 31, 0x35157Cu);
    ctx->pc = 0x351578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351574u;
    // 0x351578: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C890u, 0x351574u, 0x35157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35157Cu;
label_35157c:
    // 0x35157c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35157cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351580: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x351580u;
    {
        const bool branch_taken_0x351580 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x351584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351580u;
        // 0x351584: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351580) {
            ctx->pc = 0x351590u;
            goto label_351590;
        }
    }
    ctx->pc = 0x351588u;
    // 0x351588: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x351588u;
    {
        const bool branch_taken_0x351588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351588u;
        // 0x35158c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351588) {
            ctx->pc = 0x351754u;
            goto label_351754;
        }
    }
    ctx->pc = 0x351590u;
label_351590:
    // 0x351590: 0x50600071  beql        $v1, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x351590u;
    {
        const bool branch_taken_0x351590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351590) {
            ctx->pc = 0x351594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351590u;
            // 0x351594: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351758u;
            goto label_351758;
        }
    }
    ctx->pc = 0x351598u;
    // 0x351598: 0x322200c8  andi        $v0, $s1, 0xC8
    ctx->pc = 0x351598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)200);
    // 0x35159c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35159Cu;
    {
        const bool branch_taken_0x35159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3515A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35159Cu;
        // 0x3515a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35159c) {
            ctx->pc = 0x3515ACu;
            goto label_3515ac;
        }
    }
    ctx->pc = 0x3515A4u;
    // 0x3515a4: 0xc0d553e  jal         func_3554F8
    ctx->pc = 0x3515A4u;
    SET_GPR_U32(ctx, 31, 0x3515ACu);
    ctx->pc = 0x3515A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3515A4u;
    // 0x3515a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3554F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3554F8u, 0x3515A4u, 0x3515ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515ACu;
label_3515ac:
    // 0x3515ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3515acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3515b0: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3515B0u;
    {
        const bool branch_taken_0x3515b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3515b0) {
            ctx->pc = 0x351608u;
            goto label_351608;
        }
    }
    ctx->pc = 0x3515B8u;
    // 0x3515b8: 0xc0d45f4  jal         func_3517D0
    ctx->pc = 0x3515B8u;
    SET_GPR_U32(ctx, 31, 0x3515C0u);
    ctx->pc = 0x3515BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3515B8u;
    // 0x3515bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3517D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3517D0u, 0x3515B8u, 0x3515C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515C0u;
label_3515c0:
    // 0x3515c0: 0xc0d3352  jal         func_34CD48
    ctx->pc = 0x3515C0u;
    SET_GPR_U32(ctx, 31, 0x3515C8u);
    ctx->pc = 0x3515C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3515C0u;
    // 0x3515c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CD48u, 0x3515C0u, 0x3515C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515C8u;
label_3515c8:
    // 0x3515c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3515C8u;
    {
        const bool branch_taken_0x3515c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3515CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515C8u;
        // 0x3515cc: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515c8) {
            ctx->pc = 0x3515E8u;
            goto label_3515e8;
        }
    }
    ctx->pc = 0x3515D0u;
    // 0x3515d0: 0xc0d4622  jal         func_351888
    ctx->pc = 0x3515D0u;
    SET_GPR_U32(ctx, 31, 0x3515D8u);
    ctx->pc = 0x3515D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3515D0u;
    // 0x3515d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351888u, 0x3515D0u, 0x3515D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515D8u;
label_3515d8:
    // 0x3515d8: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x3515D8u;
    {
        const bool branch_taken_0x3515d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3515d8) {
            ctx->pc = 0x3515DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3515D8u;
            // 0x3515dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351754u;
            goto label_351754;
        }
    }
    ctx->pc = 0x3515E0u;
    // 0x3515e0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3515E0u;
    {
        const bool branch_taken_0x3515e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3515E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515E0u;
        // 0x3515e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515e0) {
            ctx->pc = 0x35174Cu;
            goto label_35174c;
        }
    }
    ctx->pc = 0x3515E8u;
label_3515e8:
    // 0x3515e8: 0xc0d336c  jal         func_34CDB0
    ctx->pc = 0x3515E8u;
    SET_GPR_U32(ctx, 31, 0x3515F0u);
    ctx->pc = 0x3515ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3515E8u;
    // 0x3515ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CDB0u, 0x3515E8u, 0x3515F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515F0u;
label_3515f0:
    // 0x3515f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3515F0u;
    {
        const bool branch_taken_0x3515f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3515F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515F0u;
        // 0x3515f4: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515f0) {
            ctx->pc = 0x351608u;
            goto label_351608;
        }
    }
    ctx->pc = 0x3515F8u;
    // 0x3515f8: 0xc0d46ac  jal         func_351AB0
    ctx->pc = 0x3515F8u;
    SET_GPR_U32(ctx, 31, 0x351600u);
    ctx->pc = 0x3515FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3515F8u;
    // 0x3515fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AB0u, 0x3515F8u, 0x351600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351600u;
label_351600:
    // 0x351600: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x351600u;
    {
        const bool branch_taken_0x351600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351600u;
        // 0x351604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351600) {
            ctx->pc = 0x35174Cu;
            goto label_35174c;
        }
    }
    ctx->pc = 0x351608u;
label_351608:
    // 0x351608: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x351608u;
    {
        const bool branch_taken_0x351608 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x35160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351608u;
        // 0x35160c: 0x3222004c  andi        $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351608) {
            ctx->pc = 0x351650u;
            goto label_351650;
        }
    }
    ctx->pc = 0x351610u;
    // 0x351610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351614: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x351614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351618: 0xc0d46ee  jal         func_351BB8
    ctx->pc = 0x351618u;
    SET_GPR_U32(ctx, 31, 0x351620u);
    ctx->pc = 0x35161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351618u;
    // 0x35161c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351BB8u, 0x351618u, 0x351620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351620u;
label_351620:
    // 0x351620: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x351620u;
    {
        const bool branch_taken_0x351620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351620) {
            ctx->pc = 0x351624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351620u;
            // 0x351624: 0x2ac20005  slti        $v0, $s6, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x351638u;
            goto label_351638;
        }
    }
    ctx->pc = 0x351628u;
    // 0x351628: 0xc0d5536  jal         func_3554D8
    ctx->pc = 0x351628u;
    SET_GPR_U32(ctx, 31, 0x351630u);
    ctx->pc = 0x35162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351628u;
    // 0x35162c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3554D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3554D8u, 0x351628u, 0x351630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351630u;
label_351630:
    // 0x351630: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x351630u;
    {
        const bool branch_taken_0x351630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351630u;
        // 0x351634: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351630) {
            ctx->pc = 0x351754u;
            goto label_351754;
        }
    }
    ctx->pc = 0x351638u;
label_351638:
    // 0x351638: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351638u;
    {
        const bool branch_taken_0x351638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351638u;
        // 0x35163c: 0x3222004c  andi        $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351638) {
            ctx->pc = 0x351650u;
            goto label_351650;
        }
    }
    ctx->pc = 0x351640u;
    // 0x351640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351644: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x351644u;
    {
        const bool branch_taken_0x351644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351644u;
        // 0x351648: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351644) {
            ctx->pc = 0x351750u;
            goto label_351750;
        }
    }
    ctx->pc = 0x35164Cu;
    // 0x35164c: 0x0  nop
    ctx->pc = 0x35164cu;
    // NOP
label_351650:
    // 0x351650: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x351650u;
    {
        const bool branch_taken_0x351650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351650u;
        // 0x351654: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351650) {
            ctx->pc = 0x3516D0u;
            goto label_3516d0;
        }
    }
    ctx->pc = 0x351658u;
    // 0x351658: 0xc0d45e0  jal         func_351780
    ctx->pc = 0x351658u;
    SET_GPR_U32(ctx, 31, 0x351660u);
    ctx->pc = 0x35165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351658u;
    // 0x35165c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351780u, 0x351658u, 0x351660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351660u;
label_351660:
    // 0x351660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351664: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x351664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x351668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35166c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35166cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351670: 0xc0d472c  jal         func_351CB0
    ctx->pc = 0x351670u;
    SET_GPR_U32(ctx, 31, 0x351678u);
    ctx->pc = 0x351674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351670u;
    // 0x351674: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351CB0u, 0x351670u, 0x351678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351678u;
label_351678:
    // 0x351678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x351678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35167c: 0x56400036  bnel        $s2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x35167Cu;
    {
        const bool branch_taken_0x35167c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x35167c) {
            ctx->pc = 0x351680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35167Cu;
            // 0x351680: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351758u;
            goto label_351758;
        }
    }
    ctx->pc = 0x351684u;
    // 0x351684: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x351684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x351688: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x351688u;
    {
        const bool branch_taken_0x351688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351688u;
        // 0x35168c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351688) {
            ctx->pc = 0x3516B0u;
            goto label_3516b0;
        }
    }
    ctx->pc = 0x351690u;
    // 0x351690: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x351690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x351694: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x351694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x351698: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x351698u;
    {
        const bool branch_taken_0x351698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351698u;
        // 0x35169c: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351698) {
            ctx->pc = 0x3516A4u;
            goto label_3516a4;
        }
    }
    ctx->pc = 0x3516A0u;
    // 0x3516a0: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x3516a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
label_3516a4:
    // 0x3516a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3516a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3516a8: 0xae620170  sw          $v0, 0x170($s3)
    ctx->pc = 0x3516a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 2));
    // 0x3516ac: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3516acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3516b0:
    // 0x3516b0: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3516B0u;
    {
        const bool branch_taken_0x3516b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3516B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516B0u;
        // 0x3516b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516b0) {
            ctx->pc = 0x35174Cu;
            goto label_35174c;
        }
    }
    ctx->pc = 0x3516B8u;
    // 0x3516b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3516b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3516bc: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3516BCu;
    {
        const bool branch_taken_0x3516bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516BCu;
        // 0x3516c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516bc) {
            ctx->pc = 0x35174Cu;
            goto label_35174c;
        }
    }
    ctx->pc = 0x3516C4u;
    // 0x3516c4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x3516c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x3516c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3516C8u;
    {
        const bool branch_taken_0x3516c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516C8u;
        // 0x3516cc: 0xae620078  sw          $v0, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516c8) {
            ctx->pc = 0x351748u;
            goto label_351748;
        }
    }
    ctx->pc = 0x3516D0u;
label_3516d0:
    // 0x3516d0: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x3516d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x3516d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3516D4u;
    {
        const bool branch_taken_0x3516d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516D4u;
        // 0x3516d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516d4) {
            ctx->pc = 0x351728u;
            goto label_351728;
        }
    }
    ctx->pc = 0x3516DCu;
    // 0x3516dc: 0xc0d45e0  jal         func_351780
    ctx->pc = 0x3516DCu;
    SET_GPR_U32(ctx, 31, 0x3516E4u);
    ctx->pc = 0x3516E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3516DCu;
    // 0x3516e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351780u, 0x3516DCu, 0x3516E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3516E4u;
label_3516e4:
    // 0x3516e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3516e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3516e8: 0xc0d4c94  jal         func_353250
    ctx->pc = 0x3516E8u;
    SET_GPR_U32(ctx, 31, 0x3516F0u);
    ctx->pc = 0x3516ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3516E8u;
    // 0x3516ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353250u, 0x3516E8u, 0x3516F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3516F0u;
label_3516f0:
    // 0x3516f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3516F0u;
    {
        const bool branch_taken_0x3516f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516F0u;
        // 0x3516f4: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516f0) {
            ctx->pc = 0x351718u;
            goto label_351718;
        }
    }
    ctx->pc = 0x3516F8u;
    // 0x3516f8: 0xc0d4df0  jal         func_3537C0
    ctx->pc = 0x3516F8u;
    SET_GPR_U32(ctx, 31, 0x351700u);
    ctx->pc = 0x3516FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3516F8u;
    // 0x3516fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3537C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3537C0u, 0x3516F8u, 0x351700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351700u;
label_351700:
    // 0x351700: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x351700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351704: 0x56400013  bnel        $s2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x351704u;
    {
        const bool branch_taken_0x351704 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x351704) {
            ctx->pc = 0x351708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351704u;
            // 0x351708: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351754u;
            goto label_351754;
        }
    }
    ctx->pc = 0x35170Cu;
    // 0x35170c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35170Cu;
    {
        const bool branch_taken_0x35170c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35170Cu;
        // 0x351710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35170c) {
            ctx->pc = 0x35174Cu;
            goto label_35174c;
        }
    }
    ctx->pc = 0x351714u;
    // 0x351714: 0x0  nop
    ctx->pc = 0x351714u;
    // NOP
label_351718:
    // 0x351718: 0xc0d4e4a  jal         func_353928
    ctx->pc = 0x351718u;
    SET_GPR_U32(ctx, 31, 0x351720u);
    ctx->pc = 0x35171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351718u;
    // 0x35171c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353928u, 0x351718u, 0x351720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351720u;
label_351720:
    // 0x351720: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x351720u;
    {
        const bool branch_taken_0x351720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351720u;
        // 0x351724: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351720) {
            ctx->pc = 0x351750u;
            goto label_351750;
        }
    }
    ctx->pc = 0x351728u;
label_351728:
    // 0x351728: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x351728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x35172c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35172Cu;
    {
        const bool branch_taken_0x35172c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x351730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35172Cu;
        // 0x351730: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35172c) {
            ctx->pc = 0x351750u;
            goto label_351750;
        }
    }
    ctx->pc = 0x351734u;
    // 0x351734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351738: 0xc0d511e  jal         func_354478
    ctx->pc = 0x351738u;
    SET_GPR_U32(ctx, 31, 0x351740u);
    ctx->pc = 0x35173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351738u;
    // 0x35173c: 0x240600cc  addiu       $a2, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354478u, 0x351738u, 0x351740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351740u;
label_351740:
    // 0x351740: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x351740u;
    {
        const bool branch_taken_0x351740 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x351744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351740u;
        // 0x351744: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351740) {
            ctx->pc = 0x351754u;
            goto label_351754;
        }
    }
    ctx->pc = 0x351748u;
label_351748:
    // 0x351748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35174c:
    // 0x35174c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x35174cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_351750:
    // 0x351750: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x351750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_351754:
    // 0x351754: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x351754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_351758:
    // 0x351758: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x351758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35175c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x35175cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351760: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x351760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x351764: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x351764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x351768: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x351768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35176c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x35176cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x351770: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x351770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x351774: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x351774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x351778: 0x3e00008  jr          $ra
    ctx->pc = 0x351778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351778u;
        // 0x35177c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351780u;
}

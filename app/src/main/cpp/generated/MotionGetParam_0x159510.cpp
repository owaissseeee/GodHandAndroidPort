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

// Function: MotionGetParam
// Address: 0x159510 - 0x1595e8
void MotionGetParam_0x159510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionGetParam_0x159510");
#endif

    switch (ctx->pc) {
        case 0x159510u: goto label_159510;
        case 0x159514u: goto label_159514;
        case 0x159518u: goto label_159518;
        case 0x15951cu: goto label_15951c;
        case 0x159520u: goto label_159520;
        case 0x159524u: goto label_159524;
        case 0x159528u: goto label_159528;
        case 0x15952cu: goto label_15952c;
        case 0x159530u: goto label_159530;
        case 0x159534u: goto label_159534;
        case 0x159538u: goto label_159538;
        case 0x15953cu: goto label_15953c;
        case 0x159540u: goto label_159540;
        case 0x159544u: goto label_159544;
        case 0x159548u: goto label_159548;
        case 0x15954cu: goto label_15954c;
        case 0x159550u: goto label_159550;
        case 0x159554u: goto label_159554;
        case 0x159558u: goto label_159558;
        case 0x15955cu: goto label_15955c;
        case 0x159560u: goto label_159560;
        case 0x159564u: goto label_159564;
        case 0x159568u: goto label_159568;
        case 0x15956cu: goto label_15956c;
        case 0x159570u: goto label_159570;
        case 0x159574u: goto label_159574;
        case 0x159578u: goto label_159578;
        case 0x15957cu: goto label_15957c;
        case 0x159580u: goto label_159580;
        case 0x159584u: goto label_159584;
        case 0x159588u: goto label_159588;
        case 0x15958cu: goto label_15958c;
        case 0x159590u: goto label_159590;
        case 0x159594u: goto label_159594;
        case 0x159598u: goto label_159598;
        case 0x15959cu: goto label_15959c;
        case 0x1595a0u: goto label_1595a0;
        case 0x1595a4u: goto label_1595a4;
        case 0x1595a8u: goto label_1595a8;
        case 0x1595acu: goto label_1595ac;
        case 0x1595b0u: goto label_1595b0;
        case 0x1595b4u: goto label_1595b4;
        case 0x1595b8u: goto label_1595b8;
        case 0x1595bcu: goto label_1595bc;
        case 0x1595c0u: goto label_1595c0;
        case 0x1595c4u: goto label_1595c4;
        case 0x1595c8u: goto label_1595c8;
        case 0x1595ccu: goto label_1595cc;
        case 0x1595d0u: goto label_1595d0;
        case 0x1595d4u: goto label_1595d4;
        case 0x1595d8u: goto label_1595d8;
        case 0x1595dcu: goto label_1595dc;
        case 0x1595e0u: goto label_1595e0;
        case 0x1595e4u: goto label_1595e4;
        default: break;
    }

    ctx->pc = 0x159510u;

label_159510:
    // 0x159510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_159514:
    // 0x159514: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x159514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159518:
    // 0x159518: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_15951c:
    if (ctx->pc == 0x15951Cu) {
        ctx->pc = 0x15951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159518u;
        // 0x15951c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159520u;
        goto label_159520;
    }
    ctx->pc = 0x159518u;
    {
        const bool branch_taken_0x159518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159518u;
        // 0x15951c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159518) {
            ctx->pc = 0x159594u;
            goto label_159594;
        }
    }
    ctx->pc = 0x159520u;
label_159520:
    // 0x159520: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x159520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_159524:
    // 0x159524: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x159524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_159528:
    // 0x159528: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_15952c:
    if (ctx->pc == 0x15952Cu) {
        ctx->pc = 0x15952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159528u;
        // 0x15952c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159530u;
        goto label_159530;
    }
    ctx->pc = 0x159528u;
    {
        const bool branch_taken_0x159528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159528u;
        // 0x15952c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159528) {
            ctx->pc = 0x159594u;
            goto label_159594;
        }
    }
    ctx->pc = 0x159530u;
label_159530:
    // 0x159530: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x159530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_159534:
    // 0x159534: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x159534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_159538:
    // 0x159538: 0x244ad910  addiu       $t2, $v0, -0x26F0
    ctx->pc = 0x159538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
label_15953c:
    // 0x15953c: 0x0  nop
    ctx->pc = 0x15953cu;
    // NOP
label_159540:
    // 0x159540: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x159540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_159544:
    // 0x159544: 0x5448000f  bnel        $v0, $t0, . + 4 + (0xF << 2)
label_159548:
    if (ctx->pc == 0x159548u) {
        ctx->pc = 0x159548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159544u;
        // 0x159548: 0x90820006  lbu         $v0, 0x6($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15954Cu;
        goto label_15954c;
    }
    ctx->pc = 0x159544u;
    {
        const bool branch_taken_0x159544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x159544) {
            ctx->pc = 0x159548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159544u;
            // 0x159548: 0x90820006  lbu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159584u;
            goto label_159584;
        }
    }
    ctx->pc = 0x15954Cu;
label_15954c:
    // 0x15954c: 0x10c90005  beq         $a2, $t1, . + 4 + (0x5 << 2)
label_159550:
    if (ctx->pc == 0x159550u) {
        ctx->pc = 0x159550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15954Cu;
        // 0x159550: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159554u;
        goto label_159554;
    }
    ctx->pc = 0x15954Cu;
    {
        const bool branch_taken_0x15954c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x159550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15954Cu;
        // 0x159550: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15954c) {
            ctx->pc = 0x159564u;
            goto label_159564;
        }
    }
    ctx->pc = 0x159554u;
label_159554:
    // 0x159554: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x159554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_159558:
    // 0x159558: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x159558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_15955c:
    // 0x15955c: 0x54460009  bnel        $v0, $a2, . + 4 + (0x9 << 2)
label_159560:
    if (ctx->pc == 0x159560u) {
        ctx->pc = 0x159560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15955Cu;
        // 0x159560: 0x90820006  lbu         $v0, 0x6($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159564u;
        goto label_159564;
    }
    ctx->pc = 0x15955Cu;
    {
        const bool branch_taken_0x15955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x15955c) {
            ctx->pc = 0x159560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15955Cu;
            // 0x159560: 0x90820006  lbu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159584u;
            goto label_159584;
        }
    }
    ctx->pc = 0x159564u;
label_159564:
    // 0x159564: 0x31a82  srl         $v1, $v1, 10
    ctx->pc = 0x159564u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
label_159568:
    // 0x159568: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x159568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_15956c:
    // 0x15956c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x15956cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_159570:
    // 0x159570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x159570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_159574:
    // 0x159574: 0x40f809  jalr        $v0
label_159578:
    if (ctx->pc == 0x159578u) {
        ctx->pc = 0x15957Cu;
        goto label_15957c;
    }
    ctx->pc = 0x159574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15957Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159574u, 0x15957Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15957Cu;
label_15957c:
    // 0x15957c: 0x1000000f  b           . + 4 + (0xF << 2)
label_159580:
    if (ctx->pc == 0x159580u) {
        ctx->pc = 0x159580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15957Cu;
        // 0x159580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159584u;
        goto label_159584;
    }
    ctx->pc = 0x15957Cu;
    {
        const bool branch_taken_0x15957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15957Cu;
        // 0x159580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15957c) {
            ctx->pc = 0x1595BCu;
            goto label_1595bc;
        }
    }
    ctx->pc = 0x159584u;
label_159584:
    // 0x159584: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x159584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_159588:
    // 0x159588: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x159588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15958c:
    // 0x15958c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_159590:
    if (ctx->pc == 0x159590u) {
        ctx->pc = 0x159590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15958Cu;
        // 0x159590: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159594u;
        goto label_159594;
    }
    ctx->pc = 0x15958Cu;
    {
        const bool branch_taken_0x15958c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15958Cu;
        // 0x159590: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15958c) {
            ctx->pc = 0x159540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159540;
        }
    }
    ctx->pc = 0x159594u;
label_159594:
    // 0x159594: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x159594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_159598:
    // 0x159598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15959c:
    if (ctx->pc == 0x15959Cu) {
        ctx->pc = 0x15959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159598u;
        // 0x15959c: 0x28c20006  slti        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1595A0u;
        goto label_1595a0;
    }
    ctx->pc = 0x159598u;
    {
        const bool branch_taken_0x159598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159598u;
        // 0x15959c: 0x28c20006  slti        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159598) {
            ctx->pc = 0x1595A8u;
            goto label_1595a8;
        }
    }
    ctx->pc = 0x1595A0u;
label_1595a0:
    // 0x1595a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1595a4:
    if (ctx->pc == 0x1595A4u) {
        ctx->pc = 0x1595A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595A0u;
        // 0x1595a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1595A8u;
        goto label_1595a8;
    }
    ctx->pc = 0x1595A0u;
    {
        const bool branch_taken_0x1595a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1595A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595A0u;
        // 0x1595a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595a0) {
            ctx->pc = 0x1595B4u;
            goto label_1595b4;
        }
    }
    ctx->pc = 0x1595A8u;
label_1595a8:
    // 0x1595a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1595a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1595ac:
    // 0x1595ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1595b0:
    if (ctx->pc == 0x1595B0u) {
        ctx->pc = 0x1595B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595ACu;
        // 0x1595b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1595B4u;
        goto label_1595b4;
    }
    ctx->pc = 0x1595ACu;
    {
        const bool branch_taken_0x1595ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1595B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595ACu;
        // 0x1595b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595ac) {
            ctx->pc = 0x1595BCu;
            goto label_1595bc;
        }
    }
    ctx->pc = 0x1595B4u;
label_1595b4:
    // 0x1595b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1595b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1595b8:
    // 0x1595b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1595b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1595bc:
    // 0x1595bc: 0x3e00008  jr          $ra
label_1595c0:
    if (ctx->pc == 0x1595C0u) {
        ctx->pc = 0x1595C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595BCu;
        // 0x1595c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1595C4u;
        goto label_1595c4;
    }
    ctx->pc = 0x1595BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1595C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595BCu;
        // 0x1595c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1595BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1595C4u;
label_1595c4:
    // 0x1595c4: 0x0  nop
    ctx->pc = 0x1595c4u;
    // NOP
label_1595c8:
    // 0x1595c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1595c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1595cc:
    // 0x1595cc: 0x0  nop
    ctx->pc = 0x1595ccu;
    // NOP
label_1595d0:
    // 0x1595d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1595d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1595d4:
    // 0x1595d4: 0x0  nop
    ctx->pc = 0x1595d4u;
    // NOP
label_1595d8:
    // 0x1595d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1595d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1595dc:
    // 0x1595dc: 0x0  nop
    ctx->pc = 0x1595dcu;
    // NOP
label_1595e0:
    // 0x1595e0: 0x0  nop
    ctx->pc = 0x1595e0u;
    // NOP
label_1595e4:
    // 0x1595e4: 0x0  nop
    ctx->pc = 0x1595e4u;
    // NOP
    ctx->pc = 0x1595e8u;
}

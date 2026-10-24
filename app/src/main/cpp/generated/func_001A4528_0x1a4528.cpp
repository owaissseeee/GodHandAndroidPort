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

// Function: func_001A4528
// Address: 0x1a4528 - 0x1a4650
void func_001A4528_0x1a4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A4528_0x1a4528");
#endif

    switch (ctx->pc) {
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        case 0x1a45e0u: goto label_1a45e0;
        case 0x1a45e4u: goto label_1a45e4;
        case 0x1a45e8u: goto label_1a45e8;
        case 0x1a45ecu: goto label_1a45ec;
        case 0x1a45f0u: goto label_1a45f0;
        case 0x1a45f4u: goto label_1a45f4;
        case 0x1a45f8u: goto label_1a45f8;
        case 0x1a45fcu: goto label_1a45fc;
        case 0x1a4600u: goto label_1a4600;
        case 0x1a4604u: goto label_1a4604;
        case 0x1a4608u: goto label_1a4608;
        case 0x1a460cu: goto label_1a460c;
        case 0x1a4610u: goto label_1a4610;
        case 0x1a4614u: goto label_1a4614;
        case 0x1a4618u: goto label_1a4618;
        case 0x1a461cu: goto label_1a461c;
        case 0x1a4620u: goto label_1a4620;
        case 0x1a4624u: goto label_1a4624;
        case 0x1a4628u: goto label_1a4628;
        case 0x1a462cu: goto label_1a462c;
        case 0x1a4630u: goto label_1a4630;
        case 0x1a4634u: goto label_1a4634;
        case 0x1a4638u: goto label_1a4638;
        case 0x1a463cu: goto label_1a463c;
        case 0x1a4640u: goto label_1a4640;
        case 0x1a4644u: goto label_1a4644;
        case 0x1a4648u: goto label_1a4648;
        case 0x1a464cu: goto label_1a464c;
        default: break;
    }

    ctx->pc = 0x1a4528u;

label_1a4528:
    // 0x1a4528: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a452c:
    // 0x1a452c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a4530:
    // 0x1a4530: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a4530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a4534:
    // 0x1a4534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a4538:
    // 0x1a4538: 0xc06ddac  jal         func_1B76B0
label_1a453c:
    if (ctx->pc == 0x1A453Cu) {
        ctx->pc = 0x1A453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4538u;
        // 0x1a453c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4540u;
        goto label_1a4540;
    }
    ctx->pc = 0x1A4538u;
    SET_GPR_U32(ctx, 31, 0x1A4540u);
    ctx->pc = 0x1A453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4538u;
    // 0x1a453c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A4538u, 0x1A4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4540u;
label_1a4540:
    // 0x1a4540: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1a4544:
    if (ctx->pc == 0x1A4544u) {
        ctx->pc = 0x1A4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4540u;
        // 0x1a4544: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4548u;
        goto label_1a4548;
    }
    ctx->pc = 0x1A4540u;
    {
        const bool branch_taken_0x1a4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4540u;
        // 0x1a4544: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4540) {
            ctx->pc = 0x1A4638u;
            goto label_1a4638;
        }
    }
    ctx->pc = 0x1A4548u;
label_1a4548:
    // 0x1a4548: 0x922302f4  lbu         $v1, 0x2F4($s1)
    ctx->pc = 0x1a4548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_1a454c:
    // 0x1a454c: 0x2446db78  addiu       $a2, $v0, -0x2488
    ctx->pc = 0x1a454cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957944));
label_1a4550:
    // 0x1a4550: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a4550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4554:
    // 0x1a4554: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a4554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a4558:
    // 0x1a4558: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a4558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a455c:
    // 0x1a455c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1a455cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a4560:
    // 0x1a4560: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1a4564:
    if (ctx->pc == 0x1A4564u) {
        ctx->pc = 0x1A4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4560u;
        // 0x1a4564: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4568u;
        goto label_1a4568;
    }
    ctx->pc = 0x1A4560u;
    {
        const bool branch_taken_0x1a4560 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4560u;
        // 0x1a4564: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4560) {
            ctx->pc = 0x1A458Cu;
            goto label_1a458c;
        }
    }
    ctx->pc = 0x1A4568u;
label_1a4568:
    // 0x1a4568: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1a4568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a456c:
    // 0x1a456c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a4570:
    // 0x1a4570: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a4574:
    // 0x1a4574: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a4574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4578:
    // 0x1a4578: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a457c:
    // 0x1a457c: 0xdc70fff8  ld          $s0, -0x8($v1)
    ctx->pc = 0x1a457cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1a4580:
    // 0x1a4580: 0x10303f  dsra32      $a2, $s0, 0
    ctx->pc = 0x1a4580u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 0));
label_1a4584:
    // 0x1a4584: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a4588:
    if (ctx->pc == 0x1A4588u) {
        ctx->pc = 0x1A4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4584u;
        // 0x1a4588: 0x2503db78  addiu       $v1, $t0, -0x2488 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A458Cu;
        goto label_1a458c;
    }
    ctx->pc = 0x1A4584u;
    {
        const bool branch_taken_0x1a4584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4584u;
        // 0x1a4588: 0x2503db78  addiu       $v1, $t0, -0x2488 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4584) {
            ctx->pc = 0x1A4598u;
            goto label_1a4598;
        }
    }
    ctx->pc = 0x1A458Cu;
label_1a458c:
    // 0x1a458c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a4590:
    // 0x1a4590: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a4590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a4594:
    // 0x1a4594: 0x2503db78  addiu       $v1, $t0, -0x2488
    ctx->pc = 0x1a4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957944));
label_1a4598:
    // 0x1a4598: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a4598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1a459c:
    // 0x1a459c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a45a0:
    // 0x1a45a0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a45a4:
    if (ctx->pc == 0x1A45A4u) {
        ctx->pc = 0x1A45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45A0u;
        // 0x1a45a4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45A8u;
        goto label_1a45a8;
    }
    ctx->pc = 0x1A45A0u;
    {
        const bool branch_taken_0x1a45a0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45A0u;
        // 0x1a45a4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45a0) {
            ctx->pc = 0x1A45BCu;
            goto label_1a45bc;
        }
    }
    ctx->pc = 0x1A45A8u;
label_1a45a8:
    // 0x1a45a8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1a45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1a45ac:
    // 0x1a45ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a45acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a45b0:
    // 0x1a45b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a45b4:
    // 0x1a45b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a45b8:
    if (ctx->pc == 0x1A45B8u) {
        ctx->pc = 0x1A45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45B4u;
        // 0x1a45b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45BCu;
        goto label_1a45bc;
    }
    ctx->pc = 0x1A45B4u;
    {
        const bool branch_taken_0x1a45b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45B4u;
        // 0x1a45b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45b4) {
            ctx->pc = 0x1A45C0u;
            goto label_1a45c0;
        }
    }
    ctx->pc = 0x1A45BCu;
label_1a45bc:
    // 0x1a45bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a45bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a45c0:
    // 0x1a45c0: 0xc0f809  jalr        $a2
label_1a45c4:
    if (ctx->pc == 0x1A45C4u) {
        ctx->pc = 0x1A45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45C0u;
        // 0x1a45c4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45C8u;
        goto label_1a45c8;
    }
    ctx->pc = 0x1A45C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A45C8u);
        ctx->pc = 0x1A45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45C0u;
        // 0x1a45c4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45C0u, 0x1A45C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A45C8u;
label_1a45c8:
    // 0x1a45c8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1a45c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1a45cc:
    // 0x1a45cc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1a45ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a45d0:
    // 0x1a45d0: 0x26220770  addiu       $v0, $s1, 0x770
    ctx->pc = 0x1a45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
label_1a45d4:
    // 0x1a45d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a45d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a45d8:
    // 0x1a45d8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a45d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a45dc:
    // 0x1a45dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a45dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a45e0:
    // 0x1a45e0: 0xc0c28ac  jal         func_30A2B0
label_1a45e4:
    if (ctx->pc == 0x1A45E4u) {
        ctx->pc = 0x1A45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45E0u;
        // 0x1a45e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45E8u;
        goto label_1a45e8;
    }
    ctx->pc = 0x1A45E0u;
    SET_GPR_U32(ctx, 31, 0x1A45E8u);
    ctx->pc = 0x1A45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A45E0u;
    // 0x1a45e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1A45E0u, 0x1A45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45E8u;
label_1a45e8:
    // 0x1a45e8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a45e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a45ec:
    // 0x1a45ec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a45f0:
    // 0x1a45f0: 0x26220780  addiu       $v0, $s1, 0x780
    ctx->pc = 0x1a45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1920));
label_1a45f4:
    // 0x1a45f4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_1a45f8:
    if (ctx->pc == 0x1A45F8u) {
        ctx->pc = 0x1A45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45F4u;
        // 0x1a45f8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45FCu;
        goto label_1a45fc;
    }
    ctx->pc = 0x1A45F4u;
    {
        const bool branch_taken_0x1a45f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1A45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45F4u;
        // 0x1a45f8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45f4) {
            ctx->pc = 0x1A4610u;
            goto label_1a4610;
        }
    }
    ctx->pc = 0x1A45FCu;
label_1a45fc:
    // 0x1a45fc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a45fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4600:
    // 0x1a4600: 0xe6200780  swc1        $f0, 0x780($s1)
    ctx->pc = 0x1a4600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1920), bits); }
label_1a4604:
    // 0x1a4604: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a4604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a4608:
    // 0x1a4608: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a4608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a460c:
    // 0x1a460c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a460cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a4610:
    // 0x1a4610: 0xc6200784  lwc1        $f0, 0x784($s1)
    ctx->pc = 0x1a4610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4614:
    // 0x1a4614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4618:
    // 0x1a4618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a461c:
    // 0x1a461c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a461cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4620:
    // 0x1a4620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4624:
    // 0x1a4624: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a4624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a4628:
    // 0x1a4628: 0xc0aa1fa  jal         func_2A87E8
label_1a462c:
    if (ctx->pc == 0x1A462Cu) {
        ctx->pc = 0x1A462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4628u;
        // 0x1a462c: 0xe6200784  swc1        $f0, 0x784($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1924), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4630u;
        goto label_1a4630;
    }
    ctx->pc = 0x1A4628u;
    SET_GPR_U32(ctx, 31, 0x1A4630u);
    ctx->pc = 0x1A462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4628u;
    // 0x1a462c: 0xe6200784  swc1        $f0, 0x784($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1924), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1A4628u, 0x1A4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4630u;
label_1a4630:
    // 0x1a4630: 0xc06ddb6  jal         func_1B76D8
label_1a4634:
    if (ctx->pc == 0x1A4634u) {
        ctx->pc = 0x1A4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4630u;
        // 0x1a4634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4638u;
        goto label_1a4638;
    }
    ctx->pc = 0x1A4630u;
    SET_GPR_U32(ctx, 31, 0x1A4638u);
    ctx->pc = 0x1A4634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4630u;
    // 0x1a4634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A4630u, 0x1A4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4638u;
label_1a4638:
    // 0x1a4638: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a4638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a463c:
    // 0x1a463c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a463cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4640:
    // 0x1a4640: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4644:
    // 0x1a4644: 0x3e00008  jr          $ra
label_1a4648:
    if (ctx->pc == 0x1A4648u) {
        ctx->pc = 0x1A4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4644u;
        // 0x1a4648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A464Cu;
        goto label_1a464c;
    }
    ctx->pc = 0x1A4644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4644u;
        // 0x1a4648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A464Cu;
label_1a464c:
    // 0x1a464c: 0x0  nop
    ctx->pc = 0x1a464cu;
    // NOP
    ctx->pc = 0x1a4650u;
}

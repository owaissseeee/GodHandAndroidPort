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

// Function: func_001BF518
// Address: 0x1bf518 - 0x1bf5e0
void func_001BF518_0x1bf518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BF518_0x1bf518");
#endif

    switch (ctx->pc) {
        case 0x1bf518u: goto label_1bf518;
        case 0x1bf51cu: goto label_1bf51c;
        case 0x1bf520u: goto label_1bf520;
        case 0x1bf524u: goto label_1bf524;
        case 0x1bf528u: goto label_1bf528;
        case 0x1bf52cu: goto label_1bf52c;
        case 0x1bf530u: goto label_1bf530;
        case 0x1bf534u: goto label_1bf534;
        case 0x1bf538u: goto label_1bf538;
        case 0x1bf53cu: goto label_1bf53c;
        case 0x1bf540u: goto label_1bf540;
        case 0x1bf544u: goto label_1bf544;
        case 0x1bf548u: goto label_1bf548;
        case 0x1bf54cu: goto label_1bf54c;
        case 0x1bf550u: goto label_1bf550;
        case 0x1bf554u: goto label_1bf554;
        case 0x1bf558u: goto label_1bf558;
        case 0x1bf55cu: goto label_1bf55c;
        case 0x1bf560u: goto label_1bf560;
        case 0x1bf564u: goto label_1bf564;
        case 0x1bf568u: goto label_1bf568;
        case 0x1bf56cu: goto label_1bf56c;
        case 0x1bf570u: goto label_1bf570;
        case 0x1bf574u: goto label_1bf574;
        case 0x1bf578u: goto label_1bf578;
        case 0x1bf57cu: goto label_1bf57c;
        case 0x1bf580u: goto label_1bf580;
        case 0x1bf584u: goto label_1bf584;
        case 0x1bf588u: goto label_1bf588;
        case 0x1bf58cu: goto label_1bf58c;
        case 0x1bf590u: goto label_1bf590;
        case 0x1bf594u: goto label_1bf594;
        case 0x1bf598u: goto label_1bf598;
        case 0x1bf59cu: goto label_1bf59c;
        case 0x1bf5a0u: goto label_1bf5a0;
        case 0x1bf5a4u: goto label_1bf5a4;
        case 0x1bf5a8u: goto label_1bf5a8;
        case 0x1bf5acu: goto label_1bf5ac;
        case 0x1bf5b0u: goto label_1bf5b0;
        case 0x1bf5b4u: goto label_1bf5b4;
        case 0x1bf5b8u: goto label_1bf5b8;
        case 0x1bf5bcu: goto label_1bf5bc;
        case 0x1bf5c0u: goto label_1bf5c0;
        case 0x1bf5c4u: goto label_1bf5c4;
        case 0x1bf5c8u: goto label_1bf5c8;
        case 0x1bf5ccu: goto label_1bf5cc;
        case 0x1bf5d0u: goto label_1bf5d0;
        case 0x1bf5d4u: goto label_1bf5d4;
        case 0x1bf5d8u: goto label_1bf5d8;
        case 0x1bf5dcu: goto label_1bf5dc;
        default: break;
    }

    ctx->pc = 0x1bf518u;

label_1bf518:
    // 0x1bf518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bf51c:
    // 0x1bf51c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bf51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bf520:
    // 0x1bf520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bf524:
    // 0x1bf524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bf528:
    // 0x1bf528: 0xc06ddac  jal         func_1B76B0
label_1bf52c:
    if (ctx->pc == 0x1BF52Cu) {
        ctx->pc = 0x1BF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF528u;
        // 0x1bf52c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF530u;
        goto label_1bf530;
    }
    ctx->pc = 0x1BF528u;
    SET_GPR_U32(ctx, 31, 0x1BF530u);
    ctx->pc = 0x1BF52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF528u;
    // 0x1bf52c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1BF528u, 0x1BF530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF530u;
label_1bf530:
    // 0x1bf530: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1bf534:
    if (ctx->pc == 0x1BF534u) {
        ctx->pc = 0x1BF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF530u;
        // 0x1bf534: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF538u;
        goto label_1bf538;
    }
    ctx->pc = 0x1BF530u;
    {
        const bool branch_taken_0x1bf530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF530u;
        // 0x1bf534: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf530) {
            ctx->pc = 0x1BF5CCu;
            goto label_1bf5cc;
        }
    }
    ctx->pc = 0x1BF538u;
label_1bf538:
    // 0x1bf538: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1bf538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1bf53c:
    // 0x1bf53c: 0x2446de30  addiu       $a2, $v0, -0x21D0
    ctx->pc = 0x1bf53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
label_1bf540:
    // 0x1bf540: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1bf540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf544:
    // 0x1bf544: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bf544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bf548:
    // 0x1bf548: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1bf548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bf54c:
    // 0x1bf54c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1bf54cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1bf550:
    // 0x1bf550: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1bf554:
    if (ctx->pc == 0x1BF554u) {
        ctx->pc = 0x1BF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF550u;
        // 0x1bf554: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF558u;
        goto label_1bf558;
    }
    ctx->pc = 0x1BF550u;
    {
        const bool branch_taken_0x1bf550 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF550u;
        // 0x1bf554: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf550) {
            ctx->pc = 0x1BF57Cu;
            goto label_1bf57c;
        }
    }
    ctx->pc = 0x1BF558u;
label_1bf558:
    // 0x1bf558: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1bf558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1bf55c:
    // 0x1bf55c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1bf55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bf560:
    // 0x1bf560: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bf564:
    // 0x1bf564: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bf564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bf568:
    // 0x1bf568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bf56c:
    // 0x1bf56c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1bf56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1bf570:
    // 0x1bf570: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1bf570u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1bf574:
    // 0x1bf574: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bf578:
    if (ctx->pc == 0x1BF578u) {
        ctx->pc = 0x1BF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF574u;
        // 0x1bf578: 0x2503de30  addiu       $v1, $t0, -0x21D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF57Cu;
        goto label_1bf57c;
    }
    ctx->pc = 0x1BF574u;
    {
        const bool branch_taken_0x1bf574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF574u;
        // 0x1bf578: 0x2503de30  addiu       $v1, $t0, -0x21D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf574) {
            ctx->pc = 0x1BF588u;
            goto label_1bf588;
        }
    }
    ctx->pc = 0x1BF57Cu;
label_1bf57c:
    // 0x1bf57c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1bf580:
    // 0x1bf580: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bf584:
    // 0x1bf584: 0x2503de30  addiu       $v1, $t0, -0x21D0
    ctx->pc = 0x1bf584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958640));
label_1bf588:
    // 0x1bf588: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1bf588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1bf58c:
    // 0x1bf58c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bf590:
    // 0x1bf590: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1bf594:
    if (ctx->pc == 0x1BF594u) {
        ctx->pc = 0x1BF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF590u;
        // 0x1bf594: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF598u;
        goto label_1bf598;
    }
    ctx->pc = 0x1BF590u;
    {
        const bool branch_taken_0x1bf590 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF590u;
        // 0x1bf594: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf590) {
            ctx->pc = 0x1BF5ACu;
            goto label_1bf5ac;
        }
    }
    ctx->pc = 0x1BF598u;
label_1bf598:
    // 0x1bf598: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1bf598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1bf59c:
    // 0x1bf59c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bf59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bf5a0:
    // 0x1bf5a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bf5a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bf5a4:
    // 0x1bf5a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bf5a8:
    if (ctx->pc == 0x1BF5A8u) {
        ctx->pc = 0x1BF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5A4u;
        // 0x1bf5a8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF5ACu;
        goto label_1bf5ac;
    }
    ctx->pc = 0x1BF5A4u;
    {
        const bool branch_taken_0x1bf5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5A4u;
        // 0x1bf5a8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5a4) {
            ctx->pc = 0x1BF5B0u;
            goto label_1bf5b0;
        }
    }
    ctx->pc = 0x1BF5ACu;
label_1bf5ac:
    // 0x1bf5ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bf5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5b0:
    // 0x1bf5b0: 0xc0f809  jalr        $a2
label_1bf5b4:
    if (ctx->pc == 0x1BF5B4u) {
        ctx->pc = 0x1BF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5B0u;
        // 0x1bf5b4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF5B8u;
        goto label_1bf5b8;
    }
    ctx->pc = 0x1BF5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BF5B8u);
        ctx->pc = 0x1BF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5B0u;
        // 0x1bf5b4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF5B0u, 0x1BF5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF5B8u;
label_1bf5b8:
    // 0x1bf5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5bc:
    // 0x1bf5bc: 0xc0aa1fa  jal         func_2A87E8
label_1bf5c0:
    if (ctx->pc == 0x1BF5C0u) {
        ctx->pc = 0x1BF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5BCu;
        // 0x1bf5c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF5C4u;
        goto label_1bf5c4;
    }
    ctx->pc = 0x1BF5BCu;
    SET_GPR_U32(ctx, 31, 0x1BF5C4u);
    ctx->pc = 0x1BF5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5BCu;
    // 0x1bf5c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1BF5BCu, 0x1BF5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5C4u;
label_1bf5c4:
    // 0x1bf5c4: 0xc06ddb6  jal         func_1B76D8
label_1bf5c8:
    if (ctx->pc == 0x1BF5C8u) {
        ctx->pc = 0x1BF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5C4u;
        // 0x1bf5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF5CCu;
        goto label_1bf5cc;
    }
    ctx->pc = 0x1BF5C4u;
    SET_GPR_U32(ctx, 31, 0x1BF5CCu);
    ctx->pc = 0x1BF5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5C4u;
    // 0x1bf5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1BF5C4u, 0x1BF5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5CCu;
label_1bf5cc:
    // 0x1bf5cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bf5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf5d0:
    // 0x1bf5d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf5d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf5d4:
    // 0x1bf5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf5d8:
    // 0x1bf5d8: 0x3e00008  jr          $ra
label_1bf5dc:
    if (ctx->pc == 0x1BF5DCu) {
        ctx->pc = 0x1BF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5D8u;
        // 0x1bf5dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF5E0u;
        goto label_fallthrough_0x1bf5d8;
    }
    ctx->pc = 0x1BF5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5D8u;
        // 0x1bf5dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bf5d8:
    ctx->pc = 0x1BF5E0u;
}

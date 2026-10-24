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

// Function: UpdatePhaseConditionalSync
// Address: 0x1c0378 - 0x1c0450
void UpdatePhaseConditionalSync_0x1c0378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseConditionalSync_0x1c0378");
#endif

    switch (ctx->pc) {
        case 0x1c0378u: goto label_1c0378;
        case 0x1c037cu: goto label_1c037c;
        case 0x1c0380u: goto label_1c0380;
        case 0x1c0384u: goto label_1c0384;
        case 0x1c0388u: goto label_1c0388;
        case 0x1c038cu: goto label_1c038c;
        case 0x1c0390u: goto label_1c0390;
        case 0x1c0394u: goto label_1c0394;
        case 0x1c0398u: goto label_1c0398;
        case 0x1c039cu: goto label_1c039c;
        case 0x1c03a0u: goto label_1c03a0;
        case 0x1c03a4u: goto label_1c03a4;
        case 0x1c03a8u: goto label_1c03a8;
        case 0x1c03acu: goto label_1c03ac;
        case 0x1c03b0u: goto label_1c03b0;
        case 0x1c03b4u: goto label_1c03b4;
        case 0x1c03b8u: goto label_1c03b8;
        case 0x1c03bcu: goto label_1c03bc;
        case 0x1c03c0u: goto label_1c03c0;
        case 0x1c03c4u: goto label_1c03c4;
        case 0x1c03c8u: goto label_1c03c8;
        case 0x1c03ccu: goto label_1c03cc;
        case 0x1c03d0u: goto label_1c03d0;
        case 0x1c03d4u: goto label_1c03d4;
        case 0x1c03d8u: goto label_1c03d8;
        case 0x1c03dcu: goto label_1c03dc;
        case 0x1c03e0u: goto label_1c03e0;
        case 0x1c03e4u: goto label_1c03e4;
        case 0x1c03e8u: goto label_1c03e8;
        case 0x1c03ecu: goto label_1c03ec;
        case 0x1c03f0u: goto label_1c03f0;
        case 0x1c03f4u: goto label_1c03f4;
        case 0x1c03f8u: goto label_1c03f8;
        case 0x1c03fcu: goto label_1c03fc;
        case 0x1c0400u: goto label_1c0400;
        case 0x1c0404u: goto label_1c0404;
        case 0x1c0408u: goto label_1c0408;
        case 0x1c040cu: goto label_1c040c;
        case 0x1c0410u: goto label_1c0410;
        case 0x1c0414u: goto label_1c0414;
        case 0x1c0418u: goto label_1c0418;
        case 0x1c041cu: goto label_1c041c;
        case 0x1c0420u: goto label_1c0420;
        case 0x1c0424u: goto label_1c0424;
        case 0x1c0428u: goto label_1c0428;
        case 0x1c042cu: goto label_1c042c;
        case 0x1c0430u: goto label_1c0430;
        case 0x1c0434u: goto label_1c0434;
        case 0x1c0438u: goto label_1c0438;
        case 0x1c043cu: goto label_1c043c;
        case 0x1c0440u: goto label_1c0440;
        case 0x1c0444u: goto label_1c0444;
        case 0x1c0448u: goto label_1c0448;
        case 0x1c044cu: goto label_1c044c;
        default: break;
    }

    ctx->pc = 0x1c0378u;

label_1c0378:
    // 0x1c0378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c037c:
    // 0x1c037c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c0380:
    // 0x1c0380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c0384:
    // 0x1c0384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c0388:
    // 0x1c0388: 0xc06ddac  jal         func_1B76B0
label_1c038c:
    if (ctx->pc == 0x1C038Cu) {
        ctx->pc = 0x1C038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0388u;
        // 0x1c038c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0390u;
        goto label_1c0390;
    }
    ctx->pc = 0x1C0388u;
    SET_GPR_U32(ctx, 31, 0x1C0390u);
    ctx->pc = 0x1C038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0388u;
    // 0x1c038c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1C0388u, 0x1C0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0390u;
label_1c0390:
    // 0x1c0390: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1c0394:
    if (ctx->pc == 0x1C0394u) {
        ctx->pc = 0x1C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0390u;
        // 0x1c0394: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0398u;
        goto label_1c0398;
    }
    ctx->pc = 0x1C0390u;
    {
        const bool branch_taken_0x1c0390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0390u;
        // 0x1c0394: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0390) {
            ctx->pc = 0x1C043Cu;
            goto label_1c043c;
        }
    }
    ctx->pc = 0x1C0398u;
label_1c0398:
    // 0x1c0398: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1c0398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1c039c:
    // 0x1c039c: 0x2446de40  addiu       $a2, $v0, -0x21C0
    ctx->pc = 0x1c039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958656));
label_1c03a0:
    // 0x1c03a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c03a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c03a4:
    // 0x1c03a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1c03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c03a8:
    // 0x1c03a8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1c03a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1c03ac:
    // 0x1c03ac: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1c03acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1c03b0:
    // 0x1c03b0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1c03b4:
    if (ctx->pc == 0x1C03B4u) {
        ctx->pc = 0x1C03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03B0u;
        // 0x1c03b4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C03B8u;
        goto label_1c03b8;
    }
    ctx->pc = 0x1C03B0u;
    {
        const bool branch_taken_0x1c03b0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03B0u;
        // 0x1c03b4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03b0) {
            ctx->pc = 0x1C03DCu;
            goto label_1c03dc;
        }
    }
    ctx->pc = 0x1C03B8u;
label_1c03b8:
    // 0x1c03b8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1c03b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1c03bc:
    // 0x1c03bc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1c03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c03c0:
    // 0x1c03c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c03c4:
    // 0x1c03c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c03c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c03c8:
    // 0x1c03c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c03cc:
    // 0x1c03cc: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1c03ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1c03d0:
    // 0x1c03d0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1c03d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1c03d4:
    // 0x1c03d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c03d8:
    if (ctx->pc == 0x1C03D8u) {
        ctx->pc = 0x1C03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03D4u;
        // 0x1c03d8: 0x2503de40  addiu       $v1, $t0, -0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C03DCu;
        goto label_1c03dc;
    }
    ctx->pc = 0x1C03D4u;
    {
        const bool branch_taken_0x1c03d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03D4u;
        // 0x1c03d8: 0x2503de40  addiu       $v1, $t0, -0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03d4) {
            ctx->pc = 0x1C03E8u;
            goto label_1c03e8;
        }
    }
    ctx->pc = 0x1C03DCu;
label_1c03dc:
    // 0x1c03dc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1c03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1c03e0:
    // 0x1c03e0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1c03e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c03e4:
    // 0x1c03e4: 0x2503de40  addiu       $v1, $t0, -0x21C0
    ctx->pc = 0x1c03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958656));
label_1c03e8:
    // 0x1c03e8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1c03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1c03ec:
    // 0x1c03ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c03f0:
    // 0x1c03f0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1c03f4:
    if (ctx->pc == 0x1C03F4u) {
        ctx->pc = 0x1C03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03F0u;
        // 0x1c03f4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C03F8u;
        goto label_1c03f8;
    }
    ctx->pc = 0x1C03F0u;
    {
        const bool branch_taken_0x1c03f0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03F0u;
        // 0x1c03f4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03f0) {
            ctx->pc = 0x1C040Cu;
            goto label_1c040c;
        }
    }
    ctx->pc = 0x1C03F8u;
label_1c03f8:
    // 0x1c03f8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1c03f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1c03fc:
    // 0x1c03fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c0400:
    // 0x1c0400: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c0400u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1c0404:
    // 0x1c0404: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c0408:
    if (ctx->pc == 0x1C0408u) {
        ctx->pc = 0x1C0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0404u;
        // 0x1c0408: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C040Cu;
        goto label_1c040c;
    }
    ctx->pc = 0x1C0404u;
    {
        const bool branch_taken_0x1c0404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0404u;
        // 0x1c0408: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0404) {
            ctx->pc = 0x1C0410u;
            goto label_1c0410;
        }
    }
    ctx->pc = 0x1C040Cu;
label_1c040c:
    // 0x1c040c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c040cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c0410:
    // 0x1c0410: 0xc0f809  jalr        $a2
label_1c0414:
    if (ctx->pc == 0x1C0414u) {
        ctx->pc = 0x1C0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0410u;
        // 0x1c0414: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0418u;
        goto label_1c0418;
    }
    ctx->pc = 0x1C0410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C0418u);
        ctx->pc = 0x1C0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0410u;
        // 0x1c0414: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0410u, 0x1C0418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0418u;
label_1c0418:
    // 0x1c0418: 0x92020675  lbu         $v0, 0x675($s0)
    ctx->pc = 0x1c0418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1653)));
label_1c041c:
    // 0x1c041c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c0420:
    if (ctx->pc == 0x1C0420u) {
        ctx->pc = 0x1C0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C041Cu;
        // 0x1c0420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0424u;
        goto label_1c0424;
    }
    ctx->pc = 0x1C041Cu;
    {
        const bool branch_taken_0x1c041c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C041Cu;
        // 0x1c0420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c041c) {
            ctx->pc = 0x1C042Cu;
            goto label_1c042c;
        }
    }
    ctx->pc = 0x1C0424u;
label_1c0424:
    // 0x1c0424: 0xc0aa1fa  jal         func_2A87E8
label_1c0428:
    if (ctx->pc == 0x1C0428u) {
        ctx->pc = 0x1C0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0424u;
        // 0x1c0428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C042Cu;
        goto label_1c042c;
    }
    ctx->pc = 0x1C0424u;
    SET_GPR_U32(ctx, 31, 0x1C042Cu);
    ctx->pc = 0x1C0428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0424u;
    // 0x1c0428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1C0424u, 0x1C042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C042Cu;
label_1c042c:
    // 0x1c042c: 0xc070114  jal         func_1C0450
label_1c0430:
    if (ctx->pc == 0x1C0430u) {
        ctx->pc = 0x1C0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C042Cu;
        // 0x1c0430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0434u;
        goto label_1c0434;
    }
    ctx->pc = 0x1C042Cu;
    SET_GPR_U32(ctx, 31, 0x1C0434u);
    ctx->pc = 0x1C0430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C042Cu;
    // 0x1c0430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0450u, 0x1C042Cu, 0x1C0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0434u;
label_1c0434:
    // 0x1c0434: 0xc06ddb6  jal         func_1B76D8
label_1c0438:
    if (ctx->pc == 0x1C0438u) {
        ctx->pc = 0x1C0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0434u;
        // 0x1c0438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C043Cu;
        goto label_1c043c;
    }
    ctx->pc = 0x1C0434u;
    SET_GPR_U32(ctx, 31, 0x1C043Cu);
    ctx->pc = 0x1C0438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0434u;
    // 0x1c0438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1C0434u, 0x1C043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C043Cu;
label_1c043c:
    // 0x1c043c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c043cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0440:
    // 0x1c0440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0444:
    // 0x1c0444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0448:
    // 0x1c0448: 0x3e00008  jr          $ra
label_1c044c:
    if (ctx->pc == 0x1C044Cu) {
        ctx->pc = 0x1C044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0448u;
        // 0x1c044c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0450u;
        goto label_fallthrough_0x1c0448;
    }
    ctx->pc = 0x1C0448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0448u;
        // 0x1c044c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c0448:
    ctx->pc = 0x1C0450u;
}

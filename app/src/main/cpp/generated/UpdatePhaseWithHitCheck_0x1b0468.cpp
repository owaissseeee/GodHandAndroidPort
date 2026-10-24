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

// Function: UpdatePhaseWithHitCheck
// Address: 0x1b0468 - 0x1b0540
void UpdatePhaseWithHitCheck_0x1b0468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseWithHitCheck_0x1b0468");
#endif

    switch (ctx->pc) {
        case 0x1b0468u: goto label_1b0468;
        case 0x1b046cu: goto label_1b046c;
        case 0x1b0470u: goto label_1b0470;
        case 0x1b0474u: goto label_1b0474;
        case 0x1b0478u: goto label_1b0478;
        case 0x1b047cu: goto label_1b047c;
        case 0x1b0480u: goto label_1b0480;
        case 0x1b0484u: goto label_1b0484;
        case 0x1b0488u: goto label_1b0488;
        case 0x1b048cu: goto label_1b048c;
        case 0x1b0490u: goto label_1b0490;
        case 0x1b0494u: goto label_1b0494;
        case 0x1b0498u: goto label_1b0498;
        case 0x1b049cu: goto label_1b049c;
        case 0x1b04a0u: goto label_1b04a0;
        case 0x1b04a4u: goto label_1b04a4;
        case 0x1b04a8u: goto label_1b04a8;
        case 0x1b04acu: goto label_1b04ac;
        case 0x1b04b0u: goto label_1b04b0;
        case 0x1b04b4u: goto label_1b04b4;
        case 0x1b04b8u: goto label_1b04b8;
        case 0x1b04bcu: goto label_1b04bc;
        case 0x1b04c0u: goto label_1b04c0;
        case 0x1b04c4u: goto label_1b04c4;
        case 0x1b04c8u: goto label_1b04c8;
        case 0x1b04ccu: goto label_1b04cc;
        case 0x1b04d0u: goto label_1b04d0;
        case 0x1b04d4u: goto label_1b04d4;
        case 0x1b04d8u: goto label_1b04d8;
        case 0x1b04dcu: goto label_1b04dc;
        case 0x1b04e0u: goto label_1b04e0;
        case 0x1b04e4u: goto label_1b04e4;
        case 0x1b04e8u: goto label_1b04e8;
        case 0x1b04ecu: goto label_1b04ec;
        case 0x1b04f0u: goto label_1b04f0;
        case 0x1b04f4u: goto label_1b04f4;
        case 0x1b04f8u: goto label_1b04f8;
        case 0x1b04fcu: goto label_1b04fc;
        case 0x1b0500u: goto label_1b0500;
        case 0x1b0504u: goto label_1b0504;
        case 0x1b0508u: goto label_1b0508;
        case 0x1b050cu: goto label_1b050c;
        case 0x1b0510u: goto label_1b0510;
        case 0x1b0514u: goto label_1b0514;
        case 0x1b0518u: goto label_1b0518;
        case 0x1b051cu: goto label_1b051c;
        case 0x1b0520u: goto label_1b0520;
        case 0x1b0524u: goto label_1b0524;
        case 0x1b0528u: goto label_1b0528;
        case 0x1b052cu: goto label_1b052c;
        case 0x1b0530u: goto label_1b0530;
        case 0x1b0534u: goto label_1b0534;
        case 0x1b0538u: goto label_1b0538;
        case 0x1b053cu: goto label_1b053c;
        default: break;
    }

    ctx->pc = 0x1b0468u;

label_1b0468:
    // 0x1b0468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b046c:
    // 0x1b046c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b0470:
    // 0x1b0470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b0474:
    // 0x1b0474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0478:
    // 0x1b0478: 0xc06ddac  jal         func_1B76B0
label_1b047c:
    if (ctx->pc == 0x1B047Cu) {
        ctx->pc = 0x1B047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0478u;
        // 0x1b047c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0480u;
        goto label_1b0480;
    }
    ctx->pc = 0x1B0478u;
    SET_GPR_U32(ctx, 31, 0x1B0480u);
    ctx->pc = 0x1B047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0478u;
    // 0x1b047c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B0478u, 0x1B0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0480u;
label_1b0480:
    // 0x1b0480: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1b0484:
    if (ctx->pc == 0x1B0484u) {
        ctx->pc = 0x1B0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0480u;
        // 0x1b0484: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0488u;
        goto label_1b0488;
    }
    ctx->pc = 0x1B0480u;
    {
        const bool branch_taken_0x1b0480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0480u;
        // 0x1b0484: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0480) {
            ctx->pc = 0x1B052Cu;
            goto label_1b052c;
        }
    }
    ctx->pc = 0x1B0488u;
label_1b0488:
    // 0x1b0488: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b0488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b048c:
    // 0x1b048c: 0x2446dc98  addiu       $a2, $v0, -0x2368
    ctx->pc = 0x1b048cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958232));
label_1b0490:
    // 0x1b0490: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b0490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0494:
    // 0x1b0494: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b0494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b0498:
    // 0x1b0498: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b0498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b049c:
    // 0x1b049c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b049cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b04a0:
    // 0x1b04a0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b04a4:
    if (ctx->pc == 0x1B04A4u) {
        ctx->pc = 0x1B04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04A0u;
        // 0x1b04a4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04A8u;
        goto label_1b04a8;
    }
    ctx->pc = 0x1B04A0u;
    {
        const bool branch_taken_0x1b04a0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04A0u;
        // 0x1b04a4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04a0) {
            ctx->pc = 0x1B04CCu;
            goto label_1b04cc;
        }
    }
    ctx->pc = 0x1B04A8u;
label_1b04a8:
    // 0x1b04a8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b04a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b04ac:
    // 0x1b04ac: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b04acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b04b0:
    // 0x1b04b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b04b4:
    // 0x1b04b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b04b8:
    // 0x1b04b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b04bc:
    // 0x1b04bc: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b04bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b04c0:
    // 0x1b04c0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b04c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b04c4:
    // 0x1b04c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b04c8:
    if (ctx->pc == 0x1B04C8u) {
        ctx->pc = 0x1B04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04C4u;
        // 0x1b04c8: 0x2503dc98  addiu       $v1, $t0, -0x2368 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04CCu;
        goto label_1b04cc;
    }
    ctx->pc = 0x1B04C4u;
    {
        const bool branch_taken_0x1b04c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04C4u;
        // 0x1b04c8: 0x2503dc98  addiu       $v1, $t0, -0x2368 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04c4) {
            ctx->pc = 0x1B04D8u;
            goto label_1b04d8;
        }
    }
    ctx->pc = 0x1B04CCu;
label_1b04cc:
    // 0x1b04cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b04d0:
    // 0x1b04d0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b04d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b04d4:
    // 0x1b04d4: 0x2503dc98  addiu       $v1, $t0, -0x2368
    ctx->pc = 0x1b04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958232));
label_1b04d8:
    // 0x1b04d8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b04dc:
    // 0x1b04dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b04e0:
    // 0x1b04e0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b04e4:
    if (ctx->pc == 0x1B04E4u) {
        ctx->pc = 0x1B04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04E0u;
        // 0x1b04e4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04E8u;
        goto label_1b04e8;
    }
    ctx->pc = 0x1B04E0u;
    {
        const bool branch_taken_0x1b04e0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04E0u;
        // 0x1b04e4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04e0) {
            ctx->pc = 0x1B04FCu;
            goto label_1b04fc;
        }
    }
    ctx->pc = 0x1B04E8u;
label_1b04e8:
    // 0x1b04e8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b04e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b04ec:
    // 0x1b04ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b04f0:
    // 0x1b04f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b04f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b04f4:
    // 0x1b04f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b04f8:
    if (ctx->pc == 0x1B04F8u) {
        ctx->pc = 0x1B04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04F4u;
        // 0x1b04f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04FCu;
        goto label_1b04fc;
    }
    ctx->pc = 0x1B04F4u;
    {
        const bool branch_taken_0x1b04f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04F4u;
        // 0x1b04f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04f4) {
            ctx->pc = 0x1B0500u;
            goto label_1b0500;
        }
    }
    ctx->pc = 0x1B04FCu;
label_1b04fc:
    // 0x1b04fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b04fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b0500:
    // 0x1b0500: 0xc0f809  jalr        $a2
label_1b0504:
    if (ctx->pc == 0x1B0504u) {
        ctx->pc = 0x1B0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0500u;
        // 0x1b0504: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0508u;
        goto label_1b0508;
    }
    ctx->pc = 0x1B0500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B0508u);
        ctx->pc = 0x1B0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0500u;
        // 0x1b0504: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0500u, 0x1B0508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0508u;
label_1b0508:
    // 0x1b0508: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b0508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1b050c:
    // 0x1b050c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b050cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0510:
    // 0x1b0510: 0xc04d23a  jal         func_1348E8
label_1b0514:
    if (ctx->pc == 0x1B0514u) {
        ctx->pc = 0x1B0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0510u;
        // 0x1b0514: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0518u;
        goto label_1b0518;
    }
    ctx->pc = 0x1B0510u;
    SET_GPR_U32(ctx, 31, 0x1B0518u);
    ctx->pc = 0x1B0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0510u;
    // 0x1b0514: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x1B0510u, 0x1B0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0518u;
label_1b0518:
    // 0x1b0518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b051c:
    // 0x1b051c: 0xc0aa1fa  jal         func_2A87E8
label_1b0520:
    if (ctx->pc == 0x1B0520u) {
        ctx->pc = 0x1B0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B051Cu;
        // 0x1b0520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0524u;
        goto label_1b0524;
    }
    ctx->pc = 0x1B051Cu;
    SET_GPR_U32(ctx, 31, 0x1B0524u);
    ctx->pc = 0x1B0520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B051Cu;
    // 0x1b0520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1B051Cu, 0x1B0524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0524u;
label_1b0524:
    // 0x1b0524: 0xc06ddb6  jal         func_1B76D8
label_1b0528:
    if (ctx->pc == 0x1B0528u) {
        ctx->pc = 0x1B0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0524u;
        // 0x1b0528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B052Cu;
        goto label_1b052c;
    }
    ctx->pc = 0x1B0524u;
    SET_GPR_U32(ctx, 31, 0x1B052Cu);
    ctx->pc = 0x1B0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0524u;
    // 0x1b0528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B0524u, 0x1B052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B052Cu;
label_1b052c:
    // 0x1b052c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b052cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0530:
    // 0x1b0530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0534:
    // 0x1b0534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0538:
    // 0x1b0538: 0x3e00008  jr          $ra
label_1b053c:
    if (ctx->pc == 0x1B053Cu) {
        ctx->pc = 0x1B053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0538u;
        // 0x1b053c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0540u;
        goto label_fallthrough_0x1b0538;
    }
    ctx->pc = 0x1B0538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0538u;
        // 0x1b053c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b0538:
    ctx->pc = 0x1B0540u;
}

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

// Function: UpdatePhaseWithHitCheckB
// Address: 0x194480 - 0x194550
void UpdatePhaseWithHitCheckB_0x194480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseWithHitCheckB_0x194480");
#endif

    switch (ctx->pc) {
        case 0x194480u: goto label_194480;
        case 0x194484u: goto label_194484;
        case 0x194488u: goto label_194488;
        case 0x19448cu: goto label_19448c;
        case 0x194490u: goto label_194490;
        case 0x194494u: goto label_194494;
        case 0x194498u: goto label_194498;
        case 0x19449cu: goto label_19449c;
        case 0x1944a0u: goto label_1944a0;
        case 0x1944a4u: goto label_1944a4;
        case 0x1944a8u: goto label_1944a8;
        case 0x1944acu: goto label_1944ac;
        case 0x1944b0u: goto label_1944b0;
        case 0x1944b4u: goto label_1944b4;
        case 0x1944b8u: goto label_1944b8;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944c0u: goto label_1944c0;
        case 0x1944c4u: goto label_1944c4;
        case 0x1944c8u: goto label_1944c8;
        case 0x1944ccu: goto label_1944cc;
        case 0x1944d0u: goto label_1944d0;
        case 0x1944d4u: goto label_1944d4;
        case 0x1944d8u: goto label_1944d8;
        case 0x1944dcu: goto label_1944dc;
        case 0x1944e0u: goto label_1944e0;
        case 0x1944e4u: goto label_1944e4;
        case 0x1944e8u: goto label_1944e8;
        case 0x1944ecu: goto label_1944ec;
        case 0x1944f0u: goto label_1944f0;
        case 0x1944f4u: goto label_1944f4;
        case 0x1944f8u: goto label_1944f8;
        case 0x1944fcu: goto label_1944fc;
        case 0x194500u: goto label_194500;
        case 0x194504u: goto label_194504;
        case 0x194508u: goto label_194508;
        case 0x19450cu: goto label_19450c;
        case 0x194510u: goto label_194510;
        case 0x194514u: goto label_194514;
        case 0x194518u: goto label_194518;
        case 0x19451cu: goto label_19451c;
        case 0x194520u: goto label_194520;
        case 0x194524u: goto label_194524;
        case 0x194528u: goto label_194528;
        case 0x19452cu: goto label_19452c;
        case 0x194530u: goto label_194530;
        case 0x194534u: goto label_194534;
        case 0x194538u: goto label_194538;
        case 0x19453cu: goto label_19453c;
        case 0x194540u: goto label_194540;
        case 0x194544u: goto label_194544;
        case 0x194548u: goto label_194548;
        case 0x19454cu: goto label_19454c;
        default: break;
    }

    ctx->pc = 0x194480u;

label_194480:
    // 0x194480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_194484:
    // 0x194484: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x194484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_194488:
    // 0x194488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19448c:
    // 0x19448c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_194490:
    // 0x194490: 0xc06ddac  jal         func_1B76B0
label_194494:
    if (ctx->pc == 0x194494u) {
        ctx->pc = 0x194494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194490u;
        // 0x194494: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194498u;
        goto label_194498;
    }
    ctx->pc = 0x194490u;
    SET_GPR_U32(ctx, 31, 0x194498u);
    ctx->pc = 0x194494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194490u;
    // 0x194494: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x194490u, 0x194498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194498u;
label_194498:
    // 0x194498: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_19449c:
    if (ctx->pc == 0x19449Cu) {
        ctx->pc = 0x19449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194498u;
        // 0x19449c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944A0u;
        goto label_1944a0;
    }
    ctx->pc = 0x194498u;
    {
        const bool branch_taken_0x194498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194498u;
        // 0x19449c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194498) {
            ctx->pc = 0x194538u;
            goto label_194538;
        }
    }
    ctx->pc = 0x1944A0u;
label_1944a0:
    // 0x1944a0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1944a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1944a4:
    // 0x1944a4: 0x2446db48  addiu       $a2, $v0, -0x24B8
    ctx->pc = 0x1944a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957896));
label_1944a8:
    // 0x1944a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1944a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1944ac:
    // 0x1944ac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1944acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1944b0:
    // 0x1944b0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1944b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1944b4:
    // 0x1944b4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1944b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1944b8:
    // 0x1944b8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1944bc:
    if (ctx->pc == 0x1944BCu) {
        ctx->pc = 0x1944BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944B8u;
        // 0x1944bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944C0u;
        goto label_1944c0;
    }
    ctx->pc = 0x1944B8u;
    {
        const bool branch_taken_0x1944b8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1944BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944B8u;
        // 0x1944bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944b8) {
            ctx->pc = 0x1944E4u;
            goto label_1944e4;
        }
    }
    ctx->pc = 0x1944C0u;
label_1944c0:
    // 0x1944c0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1944c4:
    // 0x1944c4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1944c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1944c8:
    // 0x1944c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1944c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1944cc:
    // 0x1944cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1944ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1944d0:
    // 0x1944d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1944d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1944d4:
    // 0x1944d4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1944d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1944d8:
    // 0x1944d8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1944d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1944dc:
    // 0x1944dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1944e0:
    if (ctx->pc == 0x1944E0u) {
        ctx->pc = 0x1944E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944DCu;
        // 0x1944e0: 0x2503db48  addiu       $v1, $t0, -0x24B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944E4u;
        goto label_1944e4;
    }
    ctx->pc = 0x1944DCu;
    {
        const bool branch_taken_0x1944dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944DCu;
        // 0x1944e0: 0x2503db48  addiu       $v1, $t0, -0x24B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944dc) {
            ctx->pc = 0x1944F0u;
            goto label_1944f0;
        }
    }
    ctx->pc = 0x1944E4u;
label_1944e4:
    // 0x1944e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1944e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1944e8:
    // 0x1944e8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1944e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1944ec:
    // 0x1944ec: 0x2503db48  addiu       $v1, $t0, -0x24B8
    ctx->pc = 0x1944ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957896));
label_1944f0:
    // 0x1944f0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1944f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1944f4:
    // 0x1944f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1944f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1944f8:
    // 0x1944f8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1944fc:
    if (ctx->pc == 0x1944FCu) {
        ctx->pc = 0x1944FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944F8u;
        // 0x1944fc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194500u;
        goto label_194500;
    }
    ctx->pc = 0x1944F8u;
    {
        const bool branch_taken_0x1944f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1944FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944F8u;
        // 0x1944fc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944f8) {
            ctx->pc = 0x194514u;
            goto label_194514;
        }
    }
    ctx->pc = 0x194500u;
label_194500:
    // 0x194500: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x194500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_194504:
    // 0x194504: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x194504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_194508:
    // 0x194508: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x194508u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19450c:
    // 0x19450c: 0x10000002  b           . + 4 + (0x2 << 2)
label_194510:
    if (ctx->pc == 0x194510u) {
        ctx->pc = 0x194510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19450Cu;
        // 0x194510: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194514u;
        goto label_194514;
    }
    ctx->pc = 0x19450Cu;
    {
        const bool branch_taken_0x19450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19450Cu;
        // 0x194510: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19450c) {
            ctx->pc = 0x194518u;
            goto label_194518;
        }
    }
    ctx->pc = 0x194514u;
label_194514:
    // 0x194514: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x194514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_194518:
    // 0x194518: 0xc0f809  jalr        $a2
label_19451c:
    if (ctx->pc == 0x19451Cu) {
        ctx->pc = 0x19451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194518u;
        // 0x19451c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194520u;
        goto label_194520;
    }
    ctx->pc = 0x194518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x194520u);
        ctx->pc = 0x19451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194518u;
        // 0x19451c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194518u, 0x194520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194520u;
label_194520:
    // 0x194520: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x194520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_194524:
    // 0x194524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194528:
    // 0x194528: 0xc04d23a  jal         func_1348E8
label_19452c:
    if (ctx->pc == 0x19452Cu) {
        ctx->pc = 0x19452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194528u;
        // 0x19452c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194530u;
        goto label_194530;
    }
    ctx->pc = 0x194528u;
    SET_GPR_U32(ctx, 31, 0x194530u);
    ctx->pc = 0x19452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194528u;
    // 0x19452c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x194528u, 0x194530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194530u;
label_194530:
    // 0x194530: 0xc06ddb6  jal         func_1B76D8
label_194534:
    if (ctx->pc == 0x194534u) {
        ctx->pc = 0x194534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194530u;
        // 0x194534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194538u;
        goto label_194538;
    }
    ctx->pc = 0x194530u;
    SET_GPR_U32(ctx, 31, 0x194538u);
    ctx->pc = 0x194534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194530u;
    // 0x194534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x194530u, 0x194538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194538u;
label_194538:
    // 0x194538: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x194538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19453c:
    // 0x19453c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19453cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194540:
    // 0x194540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194544:
    // 0x194544: 0x3e00008  jr          $ra
label_194548:
    if (ctx->pc == 0x194548u) {
        ctx->pc = 0x194548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194544u;
        // 0x194548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19454Cu;
        goto label_19454c;
    }
    ctx->pc = 0x194544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194544u;
        // 0x194548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19454Cu;
label_19454c:
    // 0x19454c: 0x0  nop
    ctx->pc = 0x19454cu;
    // NOP
    ctx->pc = 0x194550u;
}

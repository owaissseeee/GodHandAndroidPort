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

// Function: func_001A85B8
// Address: 0x1a85b8 - 0x1a8680
void func_001A85B8_0x1a85b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A85B8_0x1a85b8");
#endif

    switch (ctx->pc) {
        case 0x1a85b8u: goto label_1a85b8;
        case 0x1a85bcu: goto label_1a85bc;
        case 0x1a85c0u: goto label_1a85c0;
        case 0x1a85c4u: goto label_1a85c4;
        case 0x1a85c8u: goto label_1a85c8;
        case 0x1a85ccu: goto label_1a85cc;
        case 0x1a85d0u: goto label_1a85d0;
        case 0x1a85d4u: goto label_1a85d4;
        case 0x1a85d8u: goto label_1a85d8;
        case 0x1a85dcu: goto label_1a85dc;
        case 0x1a85e0u: goto label_1a85e0;
        case 0x1a85e4u: goto label_1a85e4;
        case 0x1a85e8u: goto label_1a85e8;
        case 0x1a85ecu: goto label_1a85ec;
        case 0x1a85f0u: goto label_1a85f0;
        case 0x1a85f4u: goto label_1a85f4;
        case 0x1a85f8u: goto label_1a85f8;
        case 0x1a85fcu: goto label_1a85fc;
        case 0x1a8600u: goto label_1a8600;
        case 0x1a8604u: goto label_1a8604;
        case 0x1a8608u: goto label_1a8608;
        case 0x1a860cu: goto label_1a860c;
        case 0x1a8610u: goto label_1a8610;
        case 0x1a8614u: goto label_1a8614;
        case 0x1a8618u: goto label_1a8618;
        case 0x1a861cu: goto label_1a861c;
        case 0x1a8620u: goto label_1a8620;
        case 0x1a8624u: goto label_1a8624;
        case 0x1a8628u: goto label_1a8628;
        case 0x1a862cu: goto label_1a862c;
        case 0x1a8630u: goto label_1a8630;
        case 0x1a8634u: goto label_1a8634;
        case 0x1a8638u: goto label_1a8638;
        case 0x1a863cu: goto label_1a863c;
        case 0x1a8640u: goto label_1a8640;
        case 0x1a8644u: goto label_1a8644;
        case 0x1a8648u: goto label_1a8648;
        case 0x1a864cu: goto label_1a864c;
        case 0x1a8650u: goto label_1a8650;
        case 0x1a8654u: goto label_1a8654;
        case 0x1a8658u: goto label_1a8658;
        case 0x1a865cu: goto label_1a865c;
        case 0x1a8660u: goto label_1a8660;
        case 0x1a8664u: goto label_1a8664;
        case 0x1a8668u: goto label_1a8668;
        case 0x1a866cu: goto label_1a866c;
        case 0x1a8670u: goto label_1a8670;
        case 0x1a8674u: goto label_1a8674;
        case 0x1a8678u: goto label_1a8678;
        case 0x1a867cu: goto label_1a867c;
        default: break;
    }

    ctx->pc = 0x1a85b8u;

label_1a85b8:
    // 0x1a85b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a85b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a85bc:
    // 0x1a85bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a85bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a85c0:
    // 0x1a85c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a85c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a85c4:
    // 0x1a85c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a85c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a85c8:
    // 0x1a85c8: 0xc06ddac  jal         func_1B76B0
label_1a85cc:
    if (ctx->pc == 0x1A85CCu) {
        ctx->pc = 0x1A85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85C8u;
        // 0x1a85cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85D0u;
        goto label_1a85d0;
    }
    ctx->pc = 0x1A85C8u;
    SET_GPR_U32(ctx, 31, 0x1A85D0u);
    ctx->pc = 0x1A85CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85C8u;
    // 0x1a85cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A85C8u, 0x1A85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85D0u;
label_1a85d0:
    // 0x1a85d0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1a85d4:
    if (ctx->pc == 0x1A85D4u) {
        ctx->pc = 0x1A85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85D0u;
        // 0x1a85d4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85D8u;
        goto label_1a85d8;
    }
    ctx->pc = 0x1A85D0u;
    {
        const bool branch_taken_0x1a85d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85D0u;
        // 0x1a85d4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85d0) {
            ctx->pc = 0x1A866Cu;
            goto label_1a866c;
        }
    }
    ctx->pc = 0x1A85D8u;
label_1a85d8:
    // 0x1a85d8: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1a85d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a85dc:
    // 0x1a85dc: 0x2446dbd0  addiu       $a2, $v0, -0x2430
    ctx->pc = 0x1a85dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958032));
label_1a85e0:
    // 0x1a85e0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a85e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a85e4:
    // 0x1a85e4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a85e8:
    // 0x1a85e8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a85e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a85ec:
    // 0x1a85ec: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1a85ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a85f0:
    // 0x1a85f0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1a85f4:
    if (ctx->pc == 0x1A85F4u) {
        ctx->pc = 0x1A85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85F0u;
        // 0x1a85f4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85F8u;
        goto label_1a85f8;
    }
    ctx->pc = 0x1A85F0u;
    {
        const bool branch_taken_0x1a85f0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85F0u;
        // 0x1a85f4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85f0) {
            ctx->pc = 0x1A861Cu;
            goto label_1a861c;
        }
    }
    ctx->pc = 0x1A85F8u;
label_1a85f8:
    // 0x1a85f8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1a85f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a85fc:
    // 0x1a85fc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a8600:
    // 0x1a8600: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a8604:
    // 0x1a8604: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a8604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8608:
    // 0x1a8608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a860c:
    // 0x1a860c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1a860cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1a8610:
    // 0x1a8610: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1a8610u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1a8614:
    // 0x1a8614: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a8618:
    if (ctx->pc == 0x1A8618u) {
        ctx->pc = 0x1A8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8614u;
        // 0x1a8618: 0x2503dbd0  addiu       $v1, $t0, -0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A861Cu;
        goto label_1a861c;
    }
    ctx->pc = 0x1A8614u;
    {
        const bool branch_taken_0x1a8614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8614u;
        // 0x1a8618: 0x2503dbd0  addiu       $v1, $t0, -0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8614) {
            ctx->pc = 0x1A8628u;
            goto label_1a8628;
        }
    }
    ctx->pc = 0x1A861Cu;
label_1a861c:
    // 0x1a861c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a8620:
    // 0x1a8620: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a8620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a8624:
    // 0x1a8624: 0x2503dbd0  addiu       $v1, $t0, -0x2430
    ctx->pc = 0x1a8624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958032));
label_1a8628:
    // 0x1a8628: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a8628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1a862c:
    // 0x1a862c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8630:
    // 0x1a8630: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a8634:
    if (ctx->pc == 0x1A8634u) {
        ctx->pc = 0x1A8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8630u;
        // 0x1a8634: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8638u;
        goto label_1a8638;
    }
    ctx->pc = 0x1A8630u;
    {
        const bool branch_taken_0x1a8630 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8630u;
        // 0x1a8634: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8630) {
            ctx->pc = 0x1A864Cu;
            goto label_1a864c;
        }
    }
    ctx->pc = 0x1A8638u;
label_1a8638:
    // 0x1a8638: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1a8638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1a863c:
    // 0x1a863c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a863cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a8640:
    // 0x1a8640: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a8640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a8644:
    // 0x1a8644: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a8648:
    if (ctx->pc == 0x1A8648u) {
        ctx->pc = 0x1A8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8644u;
        // 0x1a8648: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A864Cu;
        goto label_1a864c;
    }
    ctx->pc = 0x1A8644u;
    {
        const bool branch_taken_0x1a8644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8644u;
        // 0x1a8648: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8644) {
            ctx->pc = 0x1A8650u;
            goto label_1a8650;
        }
    }
    ctx->pc = 0x1A864Cu;
label_1a864c:
    // 0x1a864c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a864cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a8650:
    // 0x1a8650: 0xc0f809  jalr        $a2
label_1a8654:
    if (ctx->pc == 0x1A8654u) {
        ctx->pc = 0x1A8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8650u;
        // 0x1a8654: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8658u;
        goto label_1a8658;
    }
    ctx->pc = 0x1A8650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A8658u);
        ctx->pc = 0x1A8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8650u;
        // 0x1a8654: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8650u, 0x1A8658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8658u;
label_1a8658:
    // 0x1a8658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a865c:
    // 0x1a865c: 0xc0aa1fa  jal         func_2A87E8
label_1a8660:
    if (ctx->pc == 0x1A8660u) {
        ctx->pc = 0x1A8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A865Cu;
        // 0x1a8660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8664u;
        goto label_1a8664;
    }
    ctx->pc = 0x1A865Cu;
    SET_GPR_U32(ctx, 31, 0x1A8664u);
    ctx->pc = 0x1A8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A865Cu;
    // 0x1a8660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1A865Cu, 0x1A8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8664u;
label_1a8664:
    // 0x1a8664: 0xc06ddb6  jal         func_1B76D8
label_1a8668:
    if (ctx->pc == 0x1A8668u) {
        ctx->pc = 0x1A8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8664u;
        // 0x1a8668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A866Cu;
        goto label_1a866c;
    }
    ctx->pc = 0x1A8664u;
    SET_GPR_U32(ctx, 31, 0x1A866Cu);
    ctx->pc = 0x1A8668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8664u;
    // 0x1a8668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A8664u, 0x1A866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A866Cu;
label_1a866c:
    // 0x1a866c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a866cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8670:
    // 0x1a8670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8674:
    // 0x1a8674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8678:
    // 0x1a8678: 0x3e00008  jr          $ra
label_1a867c:
    if (ctx->pc == 0x1A867Cu) {
        ctx->pc = 0x1A867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8678u;
        // 0x1a867c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8680u;
        goto label_fallthrough_0x1a8678;
    }
    ctx->pc = 0x1A8678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8678u;
        // 0x1a867c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a8678:
    ctx->pc = 0x1A8680u;
}

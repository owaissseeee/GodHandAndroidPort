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

// Function: func_001852E8
// Address: 0x1852e8 - 0x1855a8
void func_001852E8_0x1852e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001852E8_0x1852e8");
#endif

    switch (ctx->pc) {
        case 0x18530cu: goto label_18530c;
        case 0x18531cu: goto label_18531c;
        case 0x18532cu: goto label_18532c;
        case 0x18533cu: goto label_18533c;
        case 0x18534cu: goto label_18534c;
        case 0x18535cu: goto label_18535c;
        case 0x18536cu: goto label_18536c;
        case 0x1853a0u: goto label_1853a0;
        case 0x1853d4u: goto label_1853d4;
        case 0x1853e4u: goto label_1853e4;
        case 0x185418u: goto label_185418;
        case 0x185428u: goto label_185428;
        case 0x185438u: goto label_185438;
        case 0x185460u: goto label_185460;
        case 0x185488u: goto label_185488;
        case 0x185498u: goto label_185498;
        case 0x1854a8u: goto label_1854a8;
        case 0x1854b4u: goto label_1854b4;
        case 0x1854c0u: goto label_1854c0;
        case 0x1854ccu: goto label_1854cc;
        case 0x1854f4u: goto label_1854f4;
        case 0x185520u: goto label_185520;
        case 0x185544u: goto label_185544;
        case 0x185554u: goto label_185554;
        case 0x185564u: goto label_185564;
        case 0x185570u: goto label_185570;
        case 0x18557cu: goto label_18557c;
        case 0x185588u: goto label_185588;
        case 0x185594u: goto label_185594;
        default: break;
    }

    ctx->pc = 0x1852e8u;

    // 0x1852e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1852e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1852ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1852ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1852f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1852f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1852f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1852f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1852f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1852fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185304: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185304u;
    SET_GPR_U32(ctx, 31, 0x18530Cu);
    ctx->pc = 0x185308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185304u;
    // 0x185308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185304u, 0x18530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18530Cu;
label_18530c:
    // 0x18530c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185310: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185314: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185314u;
    SET_GPR_U32(ctx, 31, 0x18531Cu);
    ctx->pc = 0x185318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185314u;
    // 0x185318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185314u, 0x18531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18531Cu;
label_18531c:
    // 0x18531c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185320: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x185320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185324: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185324u;
    SET_GPR_U32(ctx, 31, 0x18532Cu);
    ctx->pc = 0x185328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185324u;
    // 0x185328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185324u, 0x18532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18532Cu;
label_18532c:
    // 0x18532c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185330: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x185330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x185334: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185334u;
    SET_GPR_U32(ctx, 31, 0x18533Cu);
    ctx->pc = 0x185338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185334u;
    // 0x185338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185334u, 0x18533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18533Cu;
label_18533c:
    // 0x18533c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185340: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x185340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x185344: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185344u;
    SET_GPR_U32(ctx, 31, 0x18534Cu);
    ctx->pc = 0x185348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185344u;
    // 0x185348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185344u, 0x18534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18534Cu;
label_18534c:
    // 0x18534c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185350: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x185350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x185354: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185354u;
    SET_GPR_U32(ctx, 31, 0x18535Cu);
    ctx->pc = 0x185358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185354u;
    // 0x185358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185354u, 0x18535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18535Cu;
label_18535c:
    // 0x18535c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185360: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x185360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x185364: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185364u;
    SET_GPR_U32(ctx, 31, 0x18536Cu);
    ctx->pc = 0x185368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185364u;
    // 0x185368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185364u, 0x18536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18536Cu;
label_18536c:
    // 0x18536c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x18536cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x185370: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x185370u;
    {
        const bool branch_taken_0x185370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185370u;
        // 0x185374: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185370) {
            ctx->pc = 0x185594u;
            goto label_185594;
        }
    }
    ctx->pc = 0x185378u;
    // 0x185378: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x185378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18537c: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x18537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x185380: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x185380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x185384: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x185384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185388: 0x800008  jr          $a0
    ctx->pc = 0x185388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185390u: goto label_185390;
            case 0x1853ACu: goto label_1853ac;
            case 0x1853F0u: goto label_1853f0;
            case 0x185440u: goto label_185440;
            case 0x1854D4u: goto label_1854d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185388u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x185390u;
label_185390:
    // 0x185390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185398: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185398u;
    SET_GPR_U32(ctx, 31, 0x1853A0u);
    ctx->pc = 0x18539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185398u;
    // 0x18539c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185398u, 0x1853A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853A0u;
label_1853a0:
    // 0x1853a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1853a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1853A4u;
    {
        const bool branch_taken_0x1853a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853A4u;
        // 0x1853a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853a4) {
            ctx->pc = 0x185430u;
            goto label_185430;
        }
    }
    ctx->pc = 0x1853ACu;
label_1853ac:
    // 0x1853ac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1853acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1853b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1853b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1853b4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1853b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1853b8: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x1853b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x1853bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1853bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1853c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1853c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1853c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1853CCu;
    SET_GPR_U32(ctx, 31, 0x1853D4u);
    ctx->pc = 0x1853D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853CCu;
    // 0x1853d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1853CCu, 0x1853D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853D4u;
label_1853d4:
    // 0x1853d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1853d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1853d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1853dc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1853DCu;
    SET_GPR_U32(ctx, 31, 0x1853E4u);
    ctx->pc = 0x1853E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853DCu;
    // 0x1853e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1853DCu, 0x1853E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853E4u;
label_1853e4:
    // 0x1853e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1853e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1853E8u;
    {
        const bool branch_taken_0x1853e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1853ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853E8u;
        // 0x1853ec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853e8) {
            ctx->pc = 0x185430u;
            goto label_185430;
        }
    }
    ctx->pc = 0x1853F0u;
label_1853f0:
    // 0x1853f0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1853f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1853f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1853f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1853f8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1853f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1853fc: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x1853fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x185400: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18540c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18540cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185410: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185410u;
    SET_GPR_U32(ctx, 31, 0x185418u);
    ctx->pc = 0x185414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185410u;
    // 0x185414: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185410u, 0x185418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185418u;
label_185418:
    // 0x185418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18541c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18541cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185420: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185420u;
    SET_GPR_U32(ctx, 31, 0x185428u);
    ctx->pc = 0x185424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185420u;
    // 0x185424: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185420u, 0x185428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185428u;
label_185428:
    // 0x185428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18542c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_185430:
    // 0x185430: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185430u;
    SET_GPR_U32(ctx, 31, 0x185438u);
    ctx->pc = 0x185434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185430u;
    // 0x185434: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185430u, 0x185438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185438u;
label_185438:
    // 0x185438: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x185438u;
    {
        const bool branch_taken_0x185438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185438u;
        // 0x18543c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185438) {
            ctx->pc = 0x185598u;
            goto label_185598;
        }
    }
    ctx->pc = 0x185440u;
label_185440:
    // 0x185440: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185440u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185444: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x185448: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x185448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18544c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18544cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185454: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185458: 0xc0c194a  jal         func_306528
    ctx->pc = 0x185458u;
    SET_GPR_U32(ctx, 31, 0x185460u);
    ctx->pc = 0x18545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185458u;
    // 0x18545c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x185458u, 0x185460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185460u;
label_185460:
    // 0x185460: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185464: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185468: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18546c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18546cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185470: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185470u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185474: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185474u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185478: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x18547c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18547cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185480: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185480u;
    SET_GPR_U32(ctx, 31, 0x185488u);
    ctx->pc = 0x185484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185480u;
    // 0x185484: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185480u, 0x185488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185488u;
label_185488:
    // 0x185488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18548c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x185490: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185490u;
    SET_GPR_U32(ctx, 31, 0x185498u);
    ctx->pc = 0x185494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185490u;
    // 0x185494: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185490u, 0x185498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185498u;
label_185498:
    // 0x185498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x185498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18549c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854a0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1854A0u;
    SET_GPR_U32(ctx, 31, 0x1854A8u);
    ctx->pc = 0x1854A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854A0u;
    // 0x1854a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1854A0u, 0x1854A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854A8u;
label_1854a8:
    // 0x1854a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1854a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854ac: 0xc06180e  jal         func_186038
    ctx->pc = 0x1854ACu;
    SET_GPR_U32(ctx, 31, 0x1854B4u);
    ctx->pc = 0x1854B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854ACu;
    // 0x1854b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x1854ACu, 0x1854B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854B4u;
label_1854b4:
    // 0x1854b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1854b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854b8: 0xc06180e  jal         func_186038
    ctx->pc = 0x1854B8u;
    SET_GPR_U32(ctx, 31, 0x1854C0u);
    ctx->pc = 0x1854BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854B8u;
    // 0x1854bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x1854B8u, 0x1854C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854C0u;
label_1854c0:
    // 0x1854c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1854c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854c4: 0xc06180e  jal         func_186038
    ctx->pc = 0x1854C4u;
    SET_GPR_U32(ctx, 31, 0x1854CCu);
    ctx->pc = 0x1854C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854C4u;
    // 0x1854c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x1854C4u, 0x1854CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854CCu;
label_1854cc:
    // 0x1854cc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1854CCu;
    {
        const bool branch_taken_0x1854cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1854D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854CCu;
        // 0x1854d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854cc) {
            ctx->pc = 0x185598u;
            goto label_185598;
        }
    }
    ctx->pc = 0x1854D4u;
label_1854d4:
    // 0x1854d4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1854d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1854d8: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x1854d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x1854dc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1854dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1854e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1854e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1854e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1854e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1854ec: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1854ECu;
    SET_GPR_U32(ctx, 31, 0x1854F4u);
    ctx->pc = 0x1854F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1854ECu;
    // 0x1854f0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1854ECu, 0x1854F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1854F4u;
label_1854f4:
    // 0x1854f4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1854f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1854f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1854f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1854fc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1854fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x185500: 0x24060112  addiu       $a2, $zero, 0x112
    ctx->pc = 0x185500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x185504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185508: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18550c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18550cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185514: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185518: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185518u;
    SET_GPR_U32(ctx, 31, 0x185520u);
    ctx->pc = 0x18551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185518u;
    // 0x18551c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185518u, 0x185520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185520u;
label_185520:
    // 0x185520: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185524: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185528: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18552c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18552cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185530: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185530u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185538: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18553c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x18553Cu;
    SET_GPR_U32(ctx, 31, 0x185544u);
    ctx->pc = 0x185540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18553Cu;
    // 0x185540: 0x24060114  addiu       $a2, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18553Cu, 0x185544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185544u;
label_185544:
    // 0x185544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185548: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x185548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18554c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18554Cu;
    SET_GPR_U32(ctx, 31, 0x185554u);
    ctx->pc = 0x185550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18554Cu;
    // 0x185550: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18554Cu, 0x185554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185554u;
label_185554:
    // 0x185554: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x185554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18555c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18555Cu;
    SET_GPR_U32(ctx, 31, 0x185564u);
    ctx->pc = 0x185560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18555Cu;
    // 0x185560: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18555Cu, 0x185564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185564u;
label_185564:
    // 0x185564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185568: 0xc06180e  jal         func_186038
    ctx->pc = 0x185568u;
    SET_GPR_U32(ctx, 31, 0x185570u);
    ctx->pc = 0x18556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185568u;
    // 0x18556c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185568u, 0x185570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185570u;
label_185570:
    // 0x185570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185574: 0xc06180e  jal         func_186038
    ctx->pc = 0x185574u;
    SET_GPR_U32(ctx, 31, 0x18557Cu);
    ctx->pc = 0x185578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185574u;
    // 0x185578: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185574u, 0x18557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18557Cu;
label_18557c:
    // 0x18557c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185580: 0xc06180e  jal         func_186038
    ctx->pc = 0x185580u;
    SET_GPR_U32(ctx, 31, 0x185588u);
    ctx->pc = 0x185584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185580u;
    // 0x185584: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185580u, 0x185588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185588u;
label_185588:
    // 0x185588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18558c: 0xc06180e  jal         func_186038
    ctx->pc = 0x18558Cu;
    SET_GPR_U32(ctx, 31, 0x185594u);
    ctx->pc = 0x185590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18558Cu;
    // 0x185590: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x18558Cu, 0x185594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185594u;
label_185594:
    // 0x185594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x185594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185598:
    // 0x185598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18559c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18559cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1855a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1855A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1855A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855A0u;
        // 0x1855a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1855A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1855A8u;
}

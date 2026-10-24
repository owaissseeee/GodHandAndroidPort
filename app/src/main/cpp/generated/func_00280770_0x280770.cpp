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

// Function: func_00280770
// Address: 0x280770 - 0x2808d8
void func_00280770_0x280770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00280770_0x280770");
#endif

    switch (ctx->pc) {
        case 0x2807dcu: goto label_2807dc;
        case 0x2807ecu: goto label_2807ec;
        case 0x280814u: goto label_280814;
        case 0x280850u: goto label_280850;
        case 0x280864u: goto label_280864;
        case 0x280898u: goto label_280898;
        case 0x2808acu: goto label_2808ac;
        default: break;
    }

    ctx->pc = 0x280770u;

    // 0x280770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280778: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x280778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28077c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28077cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280784: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x280784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x280788: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x280788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x28078c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x28078Cu;
    {
        const bool branch_taken_0x28078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28078Cu;
        // 0x280790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28078c) {
            ctx->pc = 0x2808C4u;
            goto label_2808c4;
        }
    }
    ctx->pc = 0x280794u;
    // 0x280794: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x280794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x280798: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28079c: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x28079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x2807a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2807a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2807a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2807a8: 0x800008  jr          $a0
    ctx->pc = 0x2807A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2807B0u: goto label_2807b0;
            case 0x280824u: goto label_280824;
            case 0x28085Cu: goto label_28085c;
            case 0x28086Cu: goto label_28086c;
            case 0x2808A4u: goto label_2808a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2807A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2807B0u;
label_2807b0:
    // 0x2807b0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2807b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2807b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2807b8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2807b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2807bc: 0x8c450120  lw          $a1, 0x120($v0)
    ctx->pc = 0x2807bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x2807c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2807c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807c4: 0x8c460124  lw          $a2, 0x124($v0)
    ctx->pc = 0x2807c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x2807c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2807c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2807ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2807d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2807d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807d4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2807D4u;
    SET_GPR_U32(ctx, 31, 0x2807DCu);
    ctx->pc = 0x2807D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2807D4u;
    // 0x2807d8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2807D4u, 0x2807DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807DCu;
label_2807dc:
    // 0x2807dc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2807dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2807e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2807e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807e4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2807E4u;
    SET_GPR_U32(ctx, 31, 0x2807ECu);
    ctx->pc = 0x2807E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2807E4u;
    // 0x2807e8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2807E4u, 0x2807ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807ECu;
label_2807ec:
    // 0x2807ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2807ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2807f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2807f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2807f4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2807f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2807f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2807f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2807fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2807fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280804: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280808: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x280808u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28080c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28080Cu;
    SET_GPR_U32(ctx, 31, 0x280814u);
    ctx->pc = 0x280810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28080Cu;
    // 0x280810: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28080Cu, 0x280814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280814u;
label_280814:
    // 0x280814: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x280814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x280818: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x280818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28081c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28081Cu;
    {
        const bool branch_taken_0x28081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28081Cu;
        // 0x280820: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28081c) {
            ctx->pc = 0x28085Cu;
            goto label_28085c;
        }
    }
    ctx->pc = 0x280824u;
label_280824:
    // 0x280824: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x280824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280828: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28082c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28082cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280830: 0x8c450128  lw          $a1, 0x128($v0)
    ctx->pc = 0x280830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x280834: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280838: 0x8c46012c  lw          $a2, 0x12C($v0)
    ctx->pc = 0x280838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x28083c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28083cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280840: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280844: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280848: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x280848u;
    SET_GPR_U32(ctx, 31, 0x280850u);
    ctx->pc = 0x28084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280848u;
    // 0x28084c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x280848u, 0x280850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280850u;
label_280850:
    // 0x280850: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x280850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x280854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280858: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x280858u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_28085c:
    // 0x28085c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28085Cu;
    SET_GPR_U32(ctx, 31, 0x280864u);
    ctx->pc = 0x280860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28085Cu;
    // 0x280860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28085Cu, 0x280864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280864u;
label_280864:
    // 0x280864: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x280864u;
    {
        const bool branch_taken_0x280864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280864u;
        // 0x280868: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280864) {
            ctx->pc = 0x2808C8u;
            goto label_2808c8;
        }
    }
    ctx->pc = 0x28086Cu;
label_28086c:
    // 0x28086c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x28086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280870: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280878: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x280878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x28087c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x28087cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280880: 0x8c460134  lw          $a2, 0x134($v0)
    ctx->pc = 0x280880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x280884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280888: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28088c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28088cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280890: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x280890u;
    SET_GPR_U32(ctx, 31, 0x280898u);
    ctx->pc = 0x280894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280890u;
    // 0x280894: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x280890u, 0x280898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280898u;
label_280898:
    // 0x280898: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x280898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x28089c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2808a0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2808a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2808a4:
    // 0x2808a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2808A4u;
    SET_GPR_U32(ctx, 31, 0x2808ACu);
    ctx->pc = 0x2808A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2808A4u;
    // 0x2808a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2808A4u, 0x2808ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808ACu;
label_2808ac:
    // 0x2808ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2808ACu;
    {
        const bool branch_taken_0x2808ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2808B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808ACu;
        // 0x2808b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808ac) {
            ctx->pc = 0x2808C8u;
            goto label_2808c8;
        }
    }
    ctx->pc = 0x2808B4u;
    // 0x2808b4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2808b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2808b8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2808b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2808bc: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x2808bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2808c0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2808c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2808c4:
    // 0x2808c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2808c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2808c8:
    // 0x2808c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2808c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2808cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2808ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2808d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2808D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2808D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808D0u;
        // 0x2808d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2808D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2808D8u;
}

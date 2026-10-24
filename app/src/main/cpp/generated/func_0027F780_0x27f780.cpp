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

// Function: func_0027F780
// Address: 0x27f780 - 0x27f8d8
void func_0027F780_0x27f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F780_0x27f780");
#endif

    switch (ctx->pc) {
        case 0x27f818u: goto label_27f818;
        case 0x27f850u: goto label_27f850;
        case 0x27f864u: goto label_27f864;
        case 0x27f898u: goto label_27f898;
        case 0x27f8acu: goto label_27f8ac;
        default: break;
    }

    ctx->pc = 0x27f780u;

    // 0x27f780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f784: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f790: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27f790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f794: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x27f794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27f798: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x27F798u;
    {
        const bool branch_taken_0x27f798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F798u;
        // 0x27f79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f798) {
            ctx->pc = 0x27F8C4u;
            goto label_27f8c4;
        }
    }
    ctx->pc = 0x27F7A0u;
    // 0x27f7a0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x27f7a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f7a8: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x27f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x27f7ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f7b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f7b4: 0x800008  jr          $a0
    ctx->pc = 0x27F7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F7BCu: goto label_27f7bc;
            case 0x27F820u: goto label_27f820;
            case 0x27F85Cu: goto label_27f85c;
            case 0x27F86Cu: goto label_27f86c;
            case 0x27F8A4u: goto label_27f8a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F7B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27F7BCu;
label_27f7bc:
    // 0x27f7bc: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x27f7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27f7c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27F7C0u;
    {
        const bool branch_taken_0x27f7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7C0u;
        // 0x27f7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7c0) {
            ctx->pc = 0x27F7F0u;
            goto label_27f7f0;
        }
    }
    ctx->pc = 0x27F7C8u;
    // 0x27f7c8: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x27f7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27f7cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f7d0: 0x8cc50048  lw          $a1, 0x48($a2)
    ctx->pc = 0x27f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x27f7d4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f7d8: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x27f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x27f7dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f7dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27f7e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f7e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27F7E8u;
    {
        const bool branch_taken_0x27f7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7E8u;
        // 0x27f7ec: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7e8) {
            ctx->pc = 0x27F848u;
            goto label_27f848;
        }
    }
    ctx->pc = 0x27F7F0u;
label_27f7f0:
    // 0x27f7f0: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x27f7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27f7f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f7f8: 0x8cc50048  lw          $a1, 0x48($a2)
    ctx->pc = 0x27f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x27f7fc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27f7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f800: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x27f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x27f804: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f808: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27f808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27f80c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f80cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f810: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F810u;
    SET_GPR_U32(ctx, 31, 0x27F818u);
    ctx->pc = 0x27F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F810u;
    // 0x27f814: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F810u, 0x27F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F818u;
label_27f818:
    // 0x27f818: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27F818u;
    {
        const bool branch_taken_0x27f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F818u;
        // 0x27f81c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f818) {
            ctx->pc = 0x27F854u;
            goto label_27f854;
        }
    }
    ctx->pc = 0x27F820u;
label_27f820:
    // 0x27f820: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27f824: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f82c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x27f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x27f830: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27f830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f834: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x27f834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x27f838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f83c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f840: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f840u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f844: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x27f844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27f848:
    // 0x27f848: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F848u;
    SET_GPR_U32(ctx, 31, 0x27F850u);
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F848u, 0x27F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F850u;
label_27f850:
    // 0x27f850: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27f850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27f854:
    // 0x27f854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f858: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27f858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27f85c:
    // 0x27f85c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27F85Cu;
    SET_GPR_U32(ctx, 31, 0x27F864u);
    ctx->pc = 0x27F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F85Cu;
    // 0x27f860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27F85Cu, 0x27F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F864u;
label_27f864:
    // 0x27f864: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27F864u;
    {
        const bool branch_taken_0x27f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F864u;
        // 0x27f868: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f864) {
            ctx->pc = 0x27F8C8u;
            goto label_27f8c8;
        }
    }
    ctx->pc = 0x27F86Cu;
label_27f86c:
    // 0x27f86c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27f870: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f878: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x27f878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x27f87c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27f87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f880: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x27f880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x27f884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f888: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27f888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f88c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f88cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f890: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F890u;
    SET_GPR_U32(ctx, 31, 0x27F898u);
    ctx->pc = 0x27F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F890u;
    // 0x27f894: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F890u, 0x27F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F898u;
label_27f898:
    // 0x27f898: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27f898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f89c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f8a0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27f8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27f8a4:
    // 0x27f8a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27F8A4u;
    SET_GPR_U32(ctx, 31, 0x27F8ACu);
    ctx->pc = 0x27F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8A4u;
    // 0x27f8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27F8A4u, 0x27F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8ACu;
label_27f8ac:
    // 0x27f8ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F8ACu;
    {
        const bool branch_taken_0x27f8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8ac) {
            ctx->pc = 0x27F8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F8ACu;
            // 0x27f8b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F8C8u;
            goto label_27f8c8;
        }
    }
    ctx->pc = 0x27F8B4u;
    // 0x27f8b4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27f8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f8b8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27f8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f8bc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f8c0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27f8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_27f8c4:
    // 0x27f8c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f8c8:
    // 0x27f8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x27F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8CCu;
        // 0x27f8d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F8D4u;
    // 0x27f8d4: 0x0  nop
    ctx->pc = 0x27f8d4u;
    // NOP
    ctx->pc = 0x27f8d8u;
}

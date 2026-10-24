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

// Function: func_0027E0B0
// Address: 0x27e0b0 - 0x27e228
void func_0027E0B0_0x27e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E0B0_0x27e0b0");
#endif

    switch (ctx->pc) {
        case 0x27e0b0u: goto label_27e0b0;
        case 0x27e0b4u: goto label_27e0b4;
        case 0x27e0b8u: goto label_27e0b8;
        case 0x27e0bcu: goto label_27e0bc;
        case 0x27e0c0u: goto label_27e0c0;
        case 0x27e0c4u: goto label_27e0c4;
        case 0x27e0c8u: goto label_27e0c8;
        case 0x27e0ccu: goto label_27e0cc;
        case 0x27e0d0u: goto label_27e0d0;
        case 0x27e0d4u: goto label_27e0d4;
        case 0x27e0d8u: goto label_27e0d8;
        case 0x27e0dcu: goto label_27e0dc;
        case 0x27e0e0u: goto label_27e0e0;
        case 0x27e0e4u: goto label_27e0e4;
        case 0x27e0e8u: goto label_27e0e8;
        case 0x27e0ecu: goto label_27e0ec;
        case 0x27e0f0u: goto label_27e0f0;
        case 0x27e0f4u: goto label_27e0f4;
        case 0x27e0f8u: goto label_27e0f8;
        case 0x27e0fcu: goto label_27e0fc;
        case 0x27e100u: goto label_27e100;
        case 0x27e104u: goto label_27e104;
        case 0x27e108u: goto label_27e108;
        case 0x27e10cu: goto label_27e10c;
        case 0x27e110u: goto label_27e110;
        case 0x27e114u: goto label_27e114;
        case 0x27e118u: goto label_27e118;
        case 0x27e11cu: goto label_27e11c;
        case 0x27e120u: goto label_27e120;
        case 0x27e124u: goto label_27e124;
        case 0x27e128u: goto label_27e128;
        case 0x27e12cu: goto label_27e12c;
        case 0x27e130u: goto label_27e130;
        case 0x27e134u: goto label_27e134;
        case 0x27e138u: goto label_27e138;
        case 0x27e13cu: goto label_27e13c;
        case 0x27e140u: goto label_27e140;
        case 0x27e144u: goto label_27e144;
        case 0x27e148u: goto label_27e148;
        case 0x27e14cu: goto label_27e14c;
        case 0x27e150u: goto label_27e150;
        case 0x27e154u: goto label_27e154;
        case 0x27e158u: goto label_27e158;
        case 0x27e15cu: goto label_27e15c;
        case 0x27e160u: goto label_27e160;
        case 0x27e164u: goto label_27e164;
        case 0x27e168u: goto label_27e168;
        case 0x27e16cu: goto label_27e16c;
        case 0x27e170u: goto label_27e170;
        case 0x27e174u: goto label_27e174;
        case 0x27e178u: goto label_27e178;
        case 0x27e17cu: goto label_27e17c;
        case 0x27e180u: goto label_27e180;
        case 0x27e184u: goto label_27e184;
        case 0x27e188u: goto label_27e188;
        case 0x27e18cu: goto label_27e18c;
        case 0x27e190u: goto label_27e190;
        case 0x27e194u: goto label_27e194;
        case 0x27e198u: goto label_27e198;
        case 0x27e19cu: goto label_27e19c;
        case 0x27e1a0u: goto label_27e1a0;
        case 0x27e1a4u: goto label_27e1a4;
        case 0x27e1a8u: goto label_27e1a8;
        case 0x27e1acu: goto label_27e1ac;
        case 0x27e1b0u: goto label_27e1b0;
        case 0x27e1b4u: goto label_27e1b4;
        case 0x27e1b8u: goto label_27e1b8;
        case 0x27e1bcu: goto label_27e1bc;
        case 0x27e1c0u: goto label_27e1c0;
        case 0x27e1c4u: goto label_27e1c4;
        case 0x27e1c8u: goto label_27e1c8;
        case 0x27e1ccu: goto label_27e1cc;
        case 0x27e1d0u: goto label_27e1d0;
        case 0x27e1d4u: goto label_27e1d4;
        case 0x27e1d8u: goto label_27e1d8;
        case 0x27e1dcu: goto label_27e1dc;
        case 0x27e1e0u: goto label_27e1e0;
        case 0x27e1e4u: goto label_27e1e4;
        case 0x27e1e8u: goto label_27e1e8;
        case 0x27e1ecu: goto label_27e1ec;
        case 0x27e1f0u: goto label_27e1f0;
        case 0x27e1f4u: goto label_27e1f4;
        case 0x27e1f8u: goto label_27e1f8;
        case 0x27e1fcu: goto label_27e1fc;
        case 0x27e200u: goto label_27e200;
        case 0x27e204u: goto label_27e204;
        case 0x27e208u: goto label_27e208;
        case 0x27e20cu: goto label_27e20c;
        case 0x27e210u: goto label_27e210;
        case 0x27e214u: goto label_27e214;
        case 0x27e218u: goto label_27e218;
        case 0x27e21cu: goto label_27e21c;
        case 0x27e220u: goto label_27e220;
        case 0x27e224u: goto label_27e224;
        default: break;
    }

    ctx->pc = 0x27e0b0u;

label_27e0b0:
    // 0x27e0b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x27e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_27e0b4:
    // 0x27e0b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e0b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27e0b8:
    // 0x27e0b8: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x27e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_27e0bc:
    // 0x27e0bc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_27e0c0:
    // 0x27e0c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27e0c4:
    // 0x27e0c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27e0c8:
    // 0x27e0c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27e0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e0cc:
    // 0x27e0cc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27e0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_27e0d0:
    // 0x27e0d0: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
label_27e0d4:
    if (ctx->pc == 0x27E0D4u) {
        ctx->pc = 0x27E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0D0u;
        // 0x27e0d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0D8u;
        goto label_27e0d8;
    }
    ctx->pc = 0x27E0D0u;
    {
        const bool branch_taken_0x27e0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0D0u;
        // 0x27e0d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0d0) {
            ctx->pc = 0x27E214u;
            goto label_27e214;
        }
    }
    ctx->pc = 0x27E0D8u;
label_27e0d8:
    // 0x27e0d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x27e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_27e0dc:
    // 0x27e0dc: 0xc0a4bd4  jal         func_292F50
label_27e0e0:
    if (ctx->pc == 0x27E0E0u) {
        ctx->pc = 0x27E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0DCu;
        // 0x27e0e0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0E4u;
        goto label_27e0e4;
    }
    ctx->pc = 0x27E0DCu;
    SET_GPR_U32(ctx, 31, 0x27E0E4u);
    ctx->pc = 0x27E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0DCu;
    // 0x27e0e0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x27E0DCu, 0x27E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0E4u;
label_27e0e4:
    // 0x27e0e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27e0e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_27e0e8:
    // 0x27e0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e0ec:
    // 0x27e0ec: 0xc0560a2  jal         func_158288
label_27e0f0:
    if (ctx->pc == 0x27E0F0u) {
        ctx->pc = 0x27E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0ECu;
        // 0x27e0f0: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0F4u;
        goto label_27e0f4;
    }
    ctx->pc = 0x27E0ECu;
    SET_GPR_U32(ctx, 31, 0x27E0F4u);
    ctx->pc = 0x27E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0ECu;
    // 0x27e0f0: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x27E0ECu, 0x27E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0F4u;
label_27e0f4:
    // 0x27e0f4: 0xc0b6dac  jal         func_2DB6B0
label_27e0f8:
    if (ctx->pc == 0x27E0F8u) {
        ctx->pc = 0x27E0FCu;
        goto label_27e0fc;
    }
    ctx->pc = 0x27E0F4u;
    SET_GPR_U32(ctx, 31, 0x27E0FCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27E0F4u, 0x27E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0FCu;
label_27e0fc:
    // 0x27e0fc: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x27e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27e100:
    // 0x27e100: 0xc07dfac  jal         func_1F7EB0
label_27e104:
    if (ctx->pc == 0x27E104u) {
        ctx->pc = 0x27E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E100u;
        // 0x27e104: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E108u;
        goto label_27e108;
    }
    ctx->pc = 0x27E100u;
    SET_GPR_U32(ctx, 31, 0x27E108u);
    ctx->pc = 0x27E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E100u;
    // 0x27e104: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x27E100u, 0x27E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E108u;
label_27e108:
    // 0x27e108: 0xe6000618  swc1        $f0, 0x618($s0)
    ctx->pc = 0x27e108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
label_27e10c:
    // 0x27e10c: 0xc09f88a  jal         func_27E228
label_27e110:
    if (ctx->pc == 0x27E110u) {
        ctx->pc = 0x27E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E10Cu;
        // 0x27e110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E114u;
        goto label_27e114;
    }
    ctx->pc = 0x27E10Cu;
    SET_GPR_U32(ctx, 31, 0x27E114u);
    ctx->pc = 0x27E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E10Cu;
    // 0x27e110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E228u, 0x27E10Cu, 0x27E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E114u;
label_27e114:
    // 0x27e114: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x27e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27e118:
    // 0x27e118: 0xc053934  jal         func_14E4D0
label_27e11c:
    if (ctx->pc == 0x27E11Cu) {
        ctx->pc = 0x27E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E118u;
        // 0x27e11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E120u;
        goto label_27e120;
    }
    ctx->pc = 0x27E118u;
    SET_GPR_U32(ctx, 31, 0x27E120u);
    ctx->pc = 0x27E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E118u;
    // 0x27e11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x27E118u, 0x27E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E120u;
label_27e120:
    // 0x27e120: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x27e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_27e124:
    // 0x27e124: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x27e124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_27e128:
    // 0x27e128: 0x2446fe70  addiu       $a2, $v0, -0x190
    ctx->pc = 0x27e128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966896));
label_27e12c:
    // 0x27e12c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27e12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e130:
    // 0x27e130: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27e130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_27e134:
    // 0x27e134: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x27e134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_27e138:
    // 0x27e138: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x27e138u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27e13c:
    // 0x27e13c: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_27e140:
    if (ctx->pc == 0x27E140u) {
        ctx->pc = 0x27E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E13Cu;
        // 0x27e140: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E144u;
        goto label_27e144;
    }
    ctx->pc = 0x27E13Cu;
    {
        const bool branch_taken_0x27e13c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E13Cu;
        // 0x27e140: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e13c) {
            ctx->pc = 0x27E168u;
            goto label_27e168;
        }
    }
    ctx->pc = 0x27E144u;
label_27e144:
    // 0x27e144: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x27e144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_27e148:
    // 0x27e148: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x27e148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_27e14c:
    // 0x27e14c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27e150:
    // 0x27e150: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27e150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27e154:
    // 0x27e154: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27e158:
    // 0x27e158: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x27e158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_27e15c:
    // 0x27e15c: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x27e15cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_27e160:
    // 0x27e160: 0x10000003  b           . + 4 + (0x3 << 2)
label_27e164:
    if (ctx->pc == 0x27E164u) {
        ctx->pc = 0x27E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E160u;
        // 0x27e164: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E168u;
        goto label_27e168;
    }
    ctx->pc = 0x27E160u;
    {
        const bool branch_taken_0x27e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E160u;
        // 0x27e164: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e160) {
            ctx->pc = 0x27E170u;
            goto label_27e170;
        }
    }
    ctx->pc = 0x27E168u;
label_27e168:
    // 0x27e168: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x27e168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27e16c:
    // 0x27e16c: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x27e16cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_27e170:
    // 0x27e170: 0x24e3fe70  addiu       $v1, $a3, -0x190
    ctx->pc = 0x27e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966896));
label_27e174:
    // 0x27e174: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x27e174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27e178:
    // 0x27e178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e17c:
    // 0x27e17c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27e180:
    if (ctx->pc == 0x27E180u) {
        ctx->pc = 0x27E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E17Cu;
        // 0x27e180: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E184u;
        goto label_27e184;
    }
    ctx->pc = 0x27E17Cu;
    {
        const bool branch_taken_0x27e17c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E17Cu;
        // 0x27e180: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e17c) {
            ctx->pc = 0x27E198u;
            goto label_27e198;
        }
    }
    ctx->pc = 0x27E184u;
label_27e184:
    // 0x27e184: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x27e184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_27e188:
    // 0x27e188: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27e188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27e18c:
    // 0x27e18c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27e18cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27e190:
    // 0x27e190: 0x10000002  b           . + 4 + (0x2 << 2)
label_27e194:
    if (ctx->pc == 0x27E194u) {
        ctx->pc = 0x27E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E190u;
        // 0x27e194: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E198u;
        goto label_27e198;
    }
    ctx->pc = 0x27E190u;
    {
        const bool branch_taken_0x27e190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E190u;
        // 0x27e194: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e190) {
            ctx->pc = 0x27E19Cu;
            goto label_27e19c;
        }
    }
    ctx->pc = 0x27E198u;
label_27e198:
    // 0x27e198: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27e198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27e19c:
    // 0x27e19c: 0xc0f809  jalr        $a2
label_27e1a0:
    if (ctx->pc == 0x27E1A0u) {
        ctx->pc = 0x27E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E19Cu;
        // 0x27e1a0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1A4u;
        goto label_27e1a4;
    }
    ctx->pc = 0x27E19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x27E1A4u);
        ctx->pc = 0x27E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E19Cu;
        // 0x27e1a0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E19Cu, 0x27E1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E1A4u;
label_27e1a4:
    // 0x27e1a4: 0xc053ed2  jal         func_14FB48
label_27e1a8:
    if (ctx->pc == 0x27E1A8u) {
        ctx->pc = 0x27E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1A4u;
        // 0x27e1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1ACu;
        goto label_27e1ac;
    }
    ctx->pc = 0x27E1A4u;
    SET_GPR_U32(ctx, 31, 0x27E1ACu);
    ctx->pc = 0x27E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1A4u;
    // 0x27e1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x27E1A4u, 0x27E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1ACu;
label_27e1ac:
    // 0x27e1ac: 0xc09fa54  jal         func_27E950
label_27e1b0:
    if (ctx->pc == 0x27E1B0u) {
        ctx->pc = 0x27E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1ACu;
        // 0x27e1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1B4u;
        goto label_27e1b4;
    }
    ctx->pc = 0x27E1ACu;
    SET_GPR_U32(ctx, 31, 0x27E1B4u);
    ctx->pc = 0x27E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1ACu;
    // 0x27e1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E950u, 0x27E1ACu, 0x27E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1B4u;
label_27e1b4:
    // 0x27e1b4: 0xc0527ae  jal         func_149EB8
label_27e1b8:
    if (ctx->pc == 0x27E1B8u) {
        ctx->pc = 0x27E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1B4u;
        // 0x27e1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1BCu;
        goto label_27e1bc;
    }
    ctx->pc = 0x27E1B4u;
    SET_GPR_U32(ctx, 31, 0x27E1BCu);
    ctx->pc = 0x27E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1B4u;
    // 0x27e1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27E1B4u, 0x27E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1BCu;
label_27e1bc:
    // 0x27e1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e1c0:
    // 0x27e1c0: 0xc054a88  jal         func_152A20
label_27e1c4:
    if (ctx->pc == 0x27E1C4u) {
        ctx->pc = 0x27E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1C0u;
        // 0x27e1c4: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1C8u;
        goto label_27e1c8;
    }
    ctx->pc = 0x27E1C0u;
    SET_GPR_U32(ctx, 31, 0x27E1C8u);
    ctx->pc = 0x27E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1C0u;
    // 0x27e1c4: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x27E1C0u, 0x27E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1C8u;
label_27e1c8:
    // 0x27e1c8: 0xc05280e  jal         func_14A038
label_27e1cc:
    if (ctx->pc == 0x27E1CCu) {
        ctx->pc = 0x27E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1C8u;
        // 0x27e1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1D0u;
        goto label_27e1d0;
    }
    ctx->pc = 0x27E1C8u;
    SET_GPR_U32(ctx, 31, 0x27E1D0u);
    ctx->pc = 0x27E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1C8u;
    // 0x27e1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x27E1C8u, 0x27E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1D0u;
label_27e1d0:
    // 0x27e1d0: 0xc09fb7c  jal         func_27EDF0
label_27e1d4:
    if (ctx->pc == 0x27E1D4u) {
        ctx->pc = 0x27E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1D0u;
        // 0x27e1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1D8u;
        goto label_27e1d8;
    }
    ctx->pc = 0x27E1D0u;
    SET_GPR_U32(ctx, 31, 0x27E1D8u);
    ctx->pc = 0x27E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1D0u;
    // 0x27e1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EDF0u, 0x27E1D0u, 0x27E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1D8u;
label_27e1d8:
    // 0x27e1d8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x27e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_27e1dc:
    // 0x27e1dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e1e0:
    // 0x27e1e0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x27e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_27e1e4:
    // 0x27e1e4: 0xc04d476  jal         func_1351D8
label_27e1e8:
    if (ctx->pc == 0x27E1E8u) {
        ctx->pc = 0x27E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1E4u;
        // 0x27e1e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1ECu;
        goto label_27e1ec;
    }
    ctx->pc = 0x27E1E4u;
    SET_GPR_U32(ctx, 31, 0x27E1ECu);
    ctx->pc = 0x27E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1E4u;
    // 0x27e1e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x27E1E4u, 0x27E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1ECu;
label_27e1ec:
    // 0x27e1ec: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x27e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27e1f0:
    // 0x27e1f0: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x27e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_27e1f4:
    // 0x27e1f4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27e1f8:
    if (ctx->pc == 0x27E1F8u) {
        ctx->pc = 0x27E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1F4u;
        // 0x27e1f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E1FCu;
        goto label_27e1fc;
    }
    ctx->pc = 0x27E1F4u;
    {
        const bool branch_taken_0x27e1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e1f4) {
            ctx->pc = 0x27E1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E1F4u;
            // 0x27e1f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E218u;
            goto label_27e218;
        }
    }
    ctx->pc = 0x27E1FCu;
label_27e1fc:
    // 0x27e1fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e200:
    // 0x27e200: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x27e200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_27e204:
    // 0x27e204: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e208:
    // 0x27e208: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27e208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27e20c:
    // 0x27e20c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e210:
    // 0x27e210: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27e210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27e214:
    // 0x27e214: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27e214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27e218:
    // 0x27e218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27e21c:
    // 0x27e21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e220:
    // 0x27e220: 0x3e00008  jr          $ra
label_27e224:
    if (ctx->pc == 0x27E224u) {
        ctx->pc = 0x27E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E220u;
        // 0x27e224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E228u;
        goto label_fallthrough_0x27e220;
    }
    ctx->pc = 0x27E220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E220u;
        // 0x27e224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27e220:
    ctx->pc = 0x27E228u;
}

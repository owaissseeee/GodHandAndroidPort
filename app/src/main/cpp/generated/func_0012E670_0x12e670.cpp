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

// Function: func_0012E670
// Address: 0x12e670 - 0x12e800
void func_0012E670_0x12e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012E670_0x12e670");
#endif

    switch (ctx->pc) {
        case 0x12e6a4u: goto label_12e6a4;
        case 0x12e6bcu: goto label_12e6bc;
        case 0x12e7f0u: goto label_12e7f0;
        default: break;
    }

    ctx->pc = 0x12e670u;

    // 0x12e670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12e678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12e67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e680: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e684: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x12E684u;
    {
        const bool branch_taken_0x12e684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e684) {
            ctx->pc = 0x12E688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E684u;
            // 0x12e688: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E7F4u;
            goto label_12e7f4;
        }
    }
    ctx->pc = 0x12E68Cu;
    // 0x12e68c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x12e690: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x12e690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x12e694: 0x8c447a4c  lw          $a0, 0x7A4C($v0)
    ctx->pc = 0x12e694u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x12e698: 0x24a5d418  addiu       $a1, $a1, -0x2BE8
    ctx->pc = 0x12e698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956056));
    // 0x12e69c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x12E69Cu;
    SET_GPR_U32(ctx, 31, 0x12E6A4u);
    ctx->pc = 0x12E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E69Cu;
    // 0x12e6a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x12E69Cu, 0x12E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6A4u;
label_12e6a4:
    // 0x12e6a4: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x12E6A4u;
    {
        const bool branch_taken_0x12e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6A4u;
        // 0x12e6a8: 0x3c050042  lui         $a1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6a4) {
            ctx->pc = 0x12E7F0u;
            goto label_12e7f0;
        }
    }
    ctx->pc = 0x12E6ACu;
    // 0x12e6ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6b0: 0x24a5d420  addiu       $a1, $a1, -0x2BE0
    ctx->pc = 0x12e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
    // 0x12e6b4: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x12E6B4u;
    SET_GPR_U32(ctx, 31, 0x12E6BCu);
    ctx->pc = 0x12E6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6B4u;
    // 0x12e6b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x12E6B4u, 0x12E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6BCu;
label_12e6bc:
    // 0x12e6bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12e6bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6c0: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x12E6C0u;
    {
        const bool branch_taken_0x12e6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6C0u;
        // 0x12e6c4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6c0) {
            ctx->pc = 0x12E7F0u;
            goto label_12e7f0;
        }
    }
    ctx->pc = 0x12E6C8u;
    // 0x12e6c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e6d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12e6d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e6dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12e6e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e6e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x12e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x12e6e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e6ec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12e6f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12e6f4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x12e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x12e6f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e6fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12e700: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e704: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12e704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12e708: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e70c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x12e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12e710: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12e714: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x12e714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x12e718: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e71c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x12e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x12e720: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e724: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x12e724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x12e728: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x12e728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e72c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x12e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x12e730: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12e734: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x12e734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x12e738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12e738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e73c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x12e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x12e740: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12e744: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x12e744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x12e748: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x12e748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e74c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12e750: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12e750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x12e754: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x12e754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12e758: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12e758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x12e75c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x12e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12e760: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12e760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12e764: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x12e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12e768: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x12e768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x12e76c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x12e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12e770: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x12e770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x12e774: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x12e774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x12e778: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x12e778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x12e77c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x12e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x12e780: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x12e780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x12e784: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x12e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x12e788: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12e788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x12e78c: 0x94a20060  lhu         $v0, 0x60($a1)
    ctx->pc = 0x12e78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x12e790: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x12e790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x12e794: 0x94a30062  lhu         $v1, 0x62($a1)
    ctx->pc = 0x12e794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 98)));
    // 0x12e798: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x12e798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x12e79c: 0x94a20064  lhu         $v0, 0x64($a1)
    ctx->pc = 0x12e79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x12e7a0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x12e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x12e7a4: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x12e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7a8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x12e7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x12e7ac: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x12e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e7b0: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x12e7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x12e7b4: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x12e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7b8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x12e7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x12e7bc: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x12e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e7c0: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x12e7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x12e7c4: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x12e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7c8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x12e7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x12e7cc: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x12e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e7d0: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x12e7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x12e7d4: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x12e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7d8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x12e7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x12e7dc: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x12e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e7e0: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x12e7e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x12e7e4: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x12e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7e8: 0xc04bb3c  jal         func_12ECF0
    ctx->pc = 0x12E7E8u;
    SET_GPR_U32(ctx, 31, 0x12E7F0u);
    ctx->pc = 0x12E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7E8u;
    // 0x12e7ec: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECF0u, 0x12E7E8u, 0x12E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7F0u;
label_12e7f0:
    // 0x12e7f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12e7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12e7f4:
    // 0x12e7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7F8u;
        // 0x12e7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E800u;
}

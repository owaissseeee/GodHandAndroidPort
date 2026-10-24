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

// Function: func_0017B0D8
// Address: 0x17b0d8 - 0x17b2e0
void func_0017B0D8_0x17b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017B0D8_0x17b0d8");
#endif

    switch (ctx->pc) {
        case 0x17b1b4u: goto label_17b1b4;
        case 0x17b1d0u: goto label_17b1d0;
        case 0x17b1f8u: goto label_17b1f8;
        case 0x17b214u: goto label_17b214;
        case 0x17b24cu: goto label_17b24c;
        case 0x17b258u: goto label_17b258;
        default: break;
    }

    ctx->pc = 0x17b0d8u;

    // 0x17b0d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17b0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17b0dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17b0e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b0e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17b0ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17b0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b0f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b0f4: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x17b0f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17b0f8: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x17b0f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17b0fc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x17b0fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17b100: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17b100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17b104: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17b104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17b108: 0x10720047  beq         $v1, $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x17B108u;
    {
        const bool branch_taken_0x17b108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x17B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B108u;
        // 0x17b10c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b108) {
            ctx->pc = 0x17B228u;
            goto label_17b228;
        }
    }
    ctx->pc = 0x17B110u;
    // 0x17b110: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B110u;
    {
        const bool branch_taken_0x17b110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b110) {
            ctx->pc = 0x17B114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B110u;
            // 0x17b114: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B128u;
            goto label_17b128;
        }
    }
    ctx->pc = 0x17B118u;
    // 0x17b118: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B118u;
    {
        const bool branch_taken_0x17b118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B118u;
        // 0x17b11c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b118) {
            ctx->pc = 0x17B140u;
            goto label_17b140;
        }
    }
    ctx->pc = 0x17B120u;
    // 0x17b120: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x17B120u;
    {
        const bool branch_taken_0x17b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B120u;
        // 0x17b124: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b120) {
            ctx->pc = 0x17B2BCu;
            goto label_17b2bc;
        }
    }
    ctx->pc = 0x17B128u;
label_17b128:
    // 0x17b128: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x17B128u;
    {
        const bool branch_taken_0x17b128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B128u;
        // 0x17b12c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b128) {
            ctx->pc = 0x17B244u;
            goto label_17b244;
        }
    }
    ctx->pc = 0x17B130u;
    // 0x17b130: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x17B130u;
    {
        const bool branch_taken_0x17b130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B130u;
        // 0x17b134: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b130) {
            ctx->pc = 0x17B28Cu;
            goto label_17b28c;
        }
    }
    ctx->pc = 0x17B138u;
    // 0x17b138: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x17B138u;
    {
        const bool branch_taken_0x17b138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B138u;
        // 0x17b13c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b138) {
            ctx->pc = 0x17B2BCu;
            goto label_17b2bc;
        }
    }
    ctx->pc = 0x17B140u;
label_17b140:
    // 0x17b140: 0x92220601  lbu         $v0, 0x601($s1)
    ctx->pc = 0x17b140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1537)));
    // 0x17b144: 0x1052005b  beq         $v0, $s2, . + 4 + (0x5B << 2)
    ctx->pc = 0x17B144u;
    {
        const bool branch_taken_0x17b144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x17B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B144u;
        // 0x17b148: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b144) {
            ctx->pc = 0x17B2B4u;
            goto label_17b2b4;
        }
    }
    ctx->pc = 0x17B14Cu;
    // 0x17b14c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x17b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x17b150: 0x3c01bfb2  lui         $at, 0xBFB2
    ctx->pc = 0x17b150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49074 << 16));
    // 0x17b154: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x17b154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x17b158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b15c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17b15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b160: 0xc7b60004  lwc1        $f22, 0x4($sp)
    ctx->pc = 0x17b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17b164: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x17b164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17b168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17b16c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17b16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b170: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b170u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b174: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17b178: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17b178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17b17c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x17b17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x17b180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b184: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17b184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17b188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b18c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x17b18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17b190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b194: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x17b194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x17b198: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x17b198u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x17b19c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17b19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17b1a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17b1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17b1a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17b1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17b1a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17b1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17b1ac: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x17B1ACu;
    SET_GPR_U32(ctx, 31, 0x17B1B4u);
    ctx->pc = 0x17B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1ACu;
    // 0x17b1b0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x17B1ACu, 0x17B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1B4u;
label_17b1b4:
    // 0x17b1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1b8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x17b1b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x17b1bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b1c0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17b1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b1c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17b1c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17b1c8: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x17B1C8u;
    SET_GPR_U32(ctx, 31, 0x17B1D0u);
    ctx->pc = 0x17B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1C8u;
    // 0x17b1cc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x17B1C8u, 0x17B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1D0u;
label_17b1d0:
    // 0x17b1d0: 0x26300770  addiu       $s0, $s1, 0x770
    ctx->pc = 0x17b1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
    // 0x17b1d4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x17b1d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x17b1d8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x17b1d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x17b1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17b1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b1e8: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x17b1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17b1ec: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17b1ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1f0: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x17B1F0u;
    SET_GPR_U32(ctx, 31, 0x17B1F8u);
    ctx->pc = 0x17B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1F0u;
    // 0x17b1f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x17B1F0u, 0x17B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1F8u;
label_17b1f8:
    // 0x17b1f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17b1f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17b1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b200: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x17b200u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x17b204: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17b204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b208: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17b208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b20c: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x17B20Cu;
    SET_GPR_U32(ctx, 31, 0x17B214u);
    ctx->pc = 0x17B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B20Cu;
    // 0x17b210: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x17B20Cu, 0x17B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B214u;
label_17b214:
    // 0x17b214: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x17b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17b218: 0xa23202f5  sb          $s2, 0x2F5($s1)
    ctx->pc = 0x17b218u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 18));
    // 0x17b21c: 0xa6220604  sh          $v0, 0x604($s1)
    ctx->pc = 0x17b21cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
    // 0x17b220: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17b220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b224: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17b224u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17b228:
    // 0x17b228: 0x86220604  lh          $v0, 0x604($s1)
    ctx->pc = 0x17b228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x17b22c: 0x443001f  bgezl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17B22Cu;
    {
        const bool branch_taken_0x17b22c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x17b22c) {
            ctx->pc = 0x17B230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B22Cu;
            // 0x17b230: 0x96220604  lhu         $v0, 0x604($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B2ACu;
            goto label_17b2ac;
        }
    }
    ctx->pc = 0x17B234u;
    // 0x17b234: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b238: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17b238u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b23c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17B23Cu;
    {
        const bool branch_taken_0x17b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B23Cu;
        // 0x17b240: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b23c) {
            ctx->pc = 0x17B2A4u;
            goto label_17b2a4;
        }
    }
    ctx->pc = 0x17B244u;
label_17b244:
    // 0x17b244: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17B244u;
    SET_GPR_U32(ctx, 31, 0x17B24Cu);
    ctx->pc = 0x17B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B244u;
    // 0x17b248: 0x26240610  addiu       $a0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17B244u, 0x17B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B24Cu;
label_17b24c:
    // 0x17b24c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b250: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17B250u;
    SET_GPR_U32(ctx, 31, 0x17B258u);
    ctx->pc = 0x17B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B250u;
    // 0x17b254: 0x26240770  addiu       $a0, $s1, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17B250u, 0x17B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B258u;
label_17b258:
    // 0x17b258: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17B258u;
    {
        const bool branch_taken_0x17b258 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B258u;
        // 0x17b25c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b258) {
            ctx->pc = 0x17B2B8u;
            goto label_17b2b8;
        }
    }
    ctx->pc = 0x17B260u;
    // 0x17b260: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B260u;
    {
        const bool branch_taken_0x17b260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b260) {
            ctx->pc = 0x17B264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B260u;
            // 0x17b264: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B2BCu;
            goto label_17b2bc;
        }
    }
    ctx->pc = 0x17B268u;
    // 0x17b268: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17b26c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17b270: 0xa2320601  sb          $s2, 0x601($s1)
    ctx->pc = 0x17b270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1537), (uint8_t)GPR_U32(ctx, 18));
    // 0x17b274: 0xa6220604  sh          $v0, 0x604($s1)
    ctx->pc = 0x17b274u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
    // 0x17b278: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x17b278u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b27c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17b27cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b280: 0xa2200600  sb          $zero, 0x600($s1)
    ctx->pc = 0x17b280u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b284: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17B284u;
    {
        const bool branch_taken_0x17b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B284u;
        // 0x17b288: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b284) {
            ctx->pc = 0x17B2B8u;
            goto label_17b2b8;
        }
    }
    ctx->pc = 0x17B28Cu;
label_17b28c:
    // 0x17b28c: 0x86220604  lh          $v0, 0x604($s1)
    ctx->pc = 0x17b28cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x17b290: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B290u;
    {
        const bool branch_taken_0x17b290 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x17b290) {
            ctx->pc = 0x17B294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B290u;
            // 0x17b294: 0x96220604  lhu         $v0, 0x604($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B2ACu;
            goto label_17b2ac;
        }
    }
    ctx->pc = 0x17B298u;
    // 0x17b298: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17b298u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b29c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17b29cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b2a0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17b2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_17b2a4:
    // 0x17b2a4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17b2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b2a8: 0x96220604  lhu         $v0, 0x604($s1)
    ctx->pc = 0x17b2a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1540)));
label_17b2ac:
    // 0x17b2ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17b2b0: 0xa6220604  sh          $v0, 0x604($s1)
    ctx->pc = 0x17b2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1540), (uint16_t)GPR_U32(ctx, 2));
label_17b2b4:
    // 0x17b2b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17b2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17b2b8:
    // 0x17b2b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17b2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17b2bc:
    // 0x17b2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b2c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b2c4: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x17b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17b2c8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x17b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17b2cc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x17b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17b2d0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17b2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2D4u;
        // 0x17b2d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2DCu;
    // 0x17b2dc: 0x0  nop
    ctx->pc = 0x17b2dcu;
    // NOP
    ctx->pc = 0x17b2e0u;
}

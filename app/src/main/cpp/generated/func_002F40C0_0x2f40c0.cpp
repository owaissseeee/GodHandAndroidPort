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

// Function: func_002F40C0
// Address: 0x2f40c0 - 0x2f4230
void func_002F40C0_0x2f40c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F40C0_0x2f40c0");
#endif

    switch (ctx->pc) {
        case 0x2f40d8u: goto label_2f40d8;
        case 0x2f40f0u: goto label_2f40f0;
        case 0x2f4128u: goto label_2f4128;
        case 0x2f4218u: goto label_2f4218;
        default: break;
    }

    ctx->pc = 0x2f40c0u;

    // 0x2f40c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f40c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f40c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f40c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f40c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f40c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f40cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f40ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f40d0: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F40D0u;
    SET_GPR_U32(ctx, 31, 0x2F40D8u);
    ctx->pc = 0x2F40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40D0u;
    // 0x2f40d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F40D0u, 0x2F40D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40D8u;
label_2f40d8:
    // 0x2f40d8: 0x860302b0  lh          $v1, 0x2B0($s0)
    ctx->pc = 0x2f40d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f40dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f40e0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F40E0u;
    {
        const bool branch_taken_0x2f40e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40E0u;
        // 0x2f40e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40e0) {
            ctx->pc = 0x2F4110u;
            goto label_2f4110;
        }
    }
    ctx->pc = 0x2F40E8u;
    // 0x2f40e8: 0xc0bcf9a  jal         func_2F3E68
    ctx->pc = 0x2F40E8u;
    SET_GPR_U32(ctx, 31, 0x2F40F0u);
    ctx->pc = 0x2F40ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40E8u;
    // 0x2f40ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3E68u, 0x2F40E8u, 0x2F40F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40F0u;
label_2f40f0:
    // 0x2f40f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F40F0u;
    {
        const bool branch_taken_0x2f40f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40F0u;
        // 0x2f40f4: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40f0) {
            ctx->pc = 0x2F4110u;
            goto label_2f4110;
        }
    }
    ctx->pc = 0x2F40F8u;
    // 0x2f40f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f40fc: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946800)));
    // 0x2f4100: 0x90620278  lbu         $v0, 0x278($v1)
    ctx->pc = 0x2f4100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2f4104: 0xa0650278  sb          $a1, 0x278($v1)
    ctx->pc = 0x2f4104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 632), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f4108: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f4108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f410c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2f410cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f4110:
    // 0x2f4110: 0x860302b2  lh          $v1, 0x2B2($s0)
    ctx->pc = 0x2f4110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 690)));
    // 0x2f4114: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4118: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F4118u;
    {
        const bool branch_taken_0x2f4118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4118) {
            ctx->pc = 0x2F414Cu;
            goto label_2f414c;
        }
    }
    ctx->pc = 0x2F4120u;
    // 0x2f4120: 0xc0bcf9a  jal         func_2F3E68
    ctx->pc = 0x2F4120u;
    SET_GPR_U32(ctx, 31, 0x2F4128u);
    ctx->pc = 0x2F4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4120u;
    // 0x2f4124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3E68u, 0x2F4120u, 0x2F4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4128u;
label_2f4128:
    // 0x2f4128: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4128u;
    {
        const bool branch_taken_0x2f4128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4128u;
        // 0x2f412c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4128) {
            ctx->pc = 0x2F414Cu;
            goto label_2f414c;
        }
    }
    ctx->pc = 0x2F4130u;
    // 0x2f4130: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f4130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4134: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x2f4134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x2f4138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f413c: 0x90620264  lbu         $v0, 0x264($v1)
    ctx->pc = 0x2f413cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x2f4140: 0xa0640264  sb          $a0, 0x264($v1)
    ctx->pc = 0x2f4140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 612), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f4144: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f4144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f4148: 0xa2880b  movn        $s1, $a1, $v0
    ctx->pc = 0x2f4148u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_2f414c:
    // 0x2f414c: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F414Cu;
    {
        const bool branch_taken_0x2f414c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F414Cu;
        // 0x2f4150: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f414c) {
            ctx->pc = 0x2F41F4u;
            goto label_2f41f4;
        }
    }
    ctx->pc = 0x2F4154u;
    // 0x2f4154: 0x860202b0  lh          $v0, 0x2B0($s0)
    ctx->pc = 0x2f4154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f4158: 0x54450013  bnel        $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F4158u;
    {
        const bool branch_taken_0x2f4158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f4158) {
            ctx->pc = 0x2F415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4158u;
            // 0x2f415c: 0x860202b2  lh          $v0, 0x2B2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 690)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F41A8u;
            goto label_2f41a8;
        }
    }
    ctx->pc = 0x2F4160u;
    // 0x2f4160: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f4160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f4164: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2f4164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2f4168: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x2f4168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f416c: 0xc460013c  lwc1        $f0, 0x13C($v1)
    ctx->pc = 0x2f416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4170: 0xe4400268  swc1        $f0, 0x268($v0)
    ctx->pc = 0x2f4170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 616), bits); }
    // 0x2f4174: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f4174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f4178: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x2f4178u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f417c: 0xc4600140  lwc1        $f0, 0x140($v1)
    ctx->pc = 0x2f417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4180: 0xe440026c  swc1        $f0, 0x26C($v0)
    ctx->pc = 0x2f4180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 620), bits); }
    // 0x2f4184: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f4184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f4188: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x2f4188u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f418c: 0xc4600144  lwc1        $f0, 0x144($v1)
    ctx->pc = 0x2f418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4190: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x2f4190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x2f4194: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f4194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f4198: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x2f4198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f419c: 0xc4600148  lwc1        $f0, 0x148($v1)
    ctx->pc = 0x2f419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f41a0: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2f41a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2f41a4: 0x860202b2  lh          $v0, 0x2B2($s0)
    ctx->pc = 0x2f41a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 690)));
label_2f41a8:
    // 0x2f41a8: 0x54450013  bnel        $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F41A8u;
    {
        const bool branch_taken_0x2f41a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f41a8) {
            ctx->pc = 0x2F41ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F41A8u;
            // 0x2f41ac: 0x860202b0  lh          $v0, 0x2B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F41F8u;
            goto label_2f41f8;
        }
    }
    ctx->pc = 0x2F41B0u;
    // 0x2f41b0: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f41b4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2f41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2f41b8: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x2f41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f41bc: 0xc460014c  lwc1        $f0, 0x14C($v1)
    ctx->pc = 0x2f41bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f41c0: 0xe4400254  swc1        $f0, 0x254($v0)
    ctx->pc = 0x2f41c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 596), bits); }
    // 0x2f41c4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f41c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f41c8: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x2f41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f41cc: 0xc4600150  lwc1        $f0, 0x150($v1)
    ctx->pc = 0x2f41ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f41d0: 0xe4400258  swc1        $f0, 0x258($v0)
    ctx->pc = 0x2f41d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 600), bits); }
    // 0x2f41d4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f41d8: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x2f41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f41dc: 0xc4600154  lwc1        $f0, 0x154($v1)
    ctx->pc = 0x2f41dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f41e0: 0xe440025c  swc1        $f0, 0x25C($v0)
    ctx->pc = 0x2f41e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 604), bits); }
    // 0x2f41e4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2f41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f41e8: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x2f41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f41ec: 0xc4600158  lwc1        $f0, 0x158($v1)
    ctx->pc = 0x2f41ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f41f0: 0xe4400260  swc1        $f0, 0x260($v0)
    ctx->pc = 0x2f41f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 608), bits); }
label_2f41f4:
    // 0x2f41f4: 0x860202b0  lh          $v0, 0x2B0($s0)
    ctx->pc = 0x2f41f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 688)));
label_2f41f8:
    // 0x2f41f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f41fc: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F41FCu;
    {
        const bool branch_taken_0x2f41fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f41fc) {
            ctx->pc = 0x2F4200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F41FCu;
            // 0x2f4200: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F421Cu;
            goto label_2f421c;
        }
    }
    ctx->pc = 0x2F4204u;
    // 0x2f4204: 0x860202b2  lh          $v0, 0x2B2($s0)
    ctx->pc = 0x2f4204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 690)));
    // 0x2f4208: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4208u;
    {
        const bool branch_taken_0x2f4208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f4208) {
            ctx->pc = 0x2F420Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4208u;
            // 0x2f420c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F421Cu;
            goto label_2f421c;
        }
    }
    ctx->pc = 0x2F4210u;
    // 0x2f4210: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2F4210u;
    SET_GPR_U32(ctx, 31, 0x2F4218u);
    ctx->pc = 0x2F4214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4210u;
    // 0x2f4214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2F4210u, 0x2F4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4218u;
label_2f4218:
    // 0x2f4218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f4218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f421c:
    // 0x2f421c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f421cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4224: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4224u;
        // 0x2f4228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F422Cu;
    // 0x2f422c: 0x0  nop
    ctx->pc = 0x2f422cu;
    // NOP
    ctx->pc = 0x2f4230u;
}

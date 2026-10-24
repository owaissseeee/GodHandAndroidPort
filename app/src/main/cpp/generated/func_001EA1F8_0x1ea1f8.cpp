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

// Function: func_001EA1F8
// Address: 0x1ea1f8 - 0x1ea830
void func_001EA1F8_0x1ea1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EA1F8_0x1ea1f8");
#endif

    switch (ctx->pc) {
        case 0x1ea270u: goto label_1ea270;
        case 0x1ea2e8u: goto label_1ea2e8;
        case 0x1ea3a0u: goto label_1ea3a0;
        case 0x1ea448u: goto label_1ea448;
        case 0x1ea490u: goto label_1ea490;
        case 0x1ea4bcu: goto label_1ea4bc;
        case 0x1ea4e0u: goto label_1ea4e0;
        case 0x1ea520u: goto label_1ea520;
        case 0x1ea544u: goto label_1ea544;
        case 0x1ea5bcu: goto label_1ea5bc;
        case 0x1ea5d4u: goto label_1ea5d4;
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea5f8u: goto label_1ea5f8;
        case 0x1ea604u: goto label_1ea604;
        case 0x1ea658u: goto label_1ea658;
        case 0x1ea670u: goto label_1ea670;
        case 0x1ea678u: goto label_1ea678;
        case 0x1ea684u: goto label_1ea684;
        case 0x1ea6c8u: goto label_1ea6c8;
        case 0x1ea6e8u: goto label_1ea6e8;
        case 0x1ea70cu: goto label_1ea70c;
        case 0x1ea740u: goto label_1ea740;
        case 0x1ea76cu: goto label_1ea76c;
        case 0x1ea77cu: goto label_1ea77c;
        case 0x1ea784u: goto label_1ea784;
        case 0x1ea790u: goto label_1ea790;
        case 0x1ea7b4u: goto label_1ea7b4;
        case 0x1ea7c0u: goto label_1ea7c0;
        case 0x1ea800u: goto label_1ea800;
        case 0x1ea808u: goto label_1ea808;
        default: break;
    }

    ctx->pc = 0x1ea1f8u;

    // 0x1ea1f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ea1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ea1fc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1ea1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1ea200: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ea200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ea204: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ea204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea208: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1ea208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1ea20c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ea20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ea210: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea214: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1ea214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1ea218: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1ea218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1ea21c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ea220: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ea220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ea224: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1ea224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ea228: 0x10400172  beqz        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x1EA228u;
    {
        const bool branch_taken_0x1ea228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA228u;
        // 0x1ea22c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea228) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA230u;
    // 0x1ea230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ea234: 0x2442bcc0  addiu       $v0, $v0, -0x4340
    ctx->pc = 0x1ea234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950080));
    // 0x1ea238: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea23c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ea23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea240: 0x800008  jr          $a0
    ctx->pc = 0x1EA240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA248u: goto label_1ea248;
            case 0x1EA378u: goto label_1ea378;
            case 0x1EA398u: goto label_1ea398;
            case 0x1EA554u: goto label_1ea554;
            case 0x1EA574u: goto label_1ea574;
            case 0x1EA7D0u: goto label_1ea7d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA240u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EA248u;
label_1ea248:
    // 0x1ea248: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1ea248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1ea24c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1ea24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1ea250: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x1ea250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x1ea254: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x1ea254u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x1ea258: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x1ea258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
    // 0x1ea25c: 0x245681e0  addiu       $s6, $v0, -0x7E20
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935008));
    // 0x1ea260: 0x247581f0  addiu       $s5, $v1, -0x7E10
    ctx->pc = 0x1ea260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935024));
    // 0x1ea264: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea268: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ea268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea26c: 0x3694fffd  ori         $s4, $s4, 0xFFFD
    ctx->pc = 0x1ea26cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65533);
label_1ea270:
    // 0x1ea270: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1ea270u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ea274: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ea274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ea278: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ea278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ea27c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA27Cu;
    {
        const bool branch_taken_0x1ea27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea27c) {
            ctx->pc = 0x1EA2A4u;
            goto label_1ea2a4;
        }
    }
    ctx->pc = 0x1EA284u;
    // 0x1ea284: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ea284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ea288: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA288u;
    {
        const bool branch_taken_0x1ea288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1EA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA288u;
        // 0x1ea28c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea288) {
            ctx->pc = 0x1EA2A4u;
            goto label_1ea2a4;
        }
    }
    ctx->pc = 0x1EA290u;
    // 0x1ea290: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ea290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ea294: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1ea294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea298: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ea298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ea29c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1ea29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea2a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ea2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ea2a4:
    // 0x1ea2a4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1ea2a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ea2a8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ea2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ea2ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ea2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ea2b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA2B0u;
    {
        const bool branch_taken_0x1ea2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2B0u;
        // 0x1ea2b4: 0x24430100  addiu       $v1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2b0) {
            ctx->pc = 0x1EA2D4u;
            goto label_1ea2d4;
        }
    }
    ctx->pc = 0x1EA2B8u;
    // 0x1ea2b8: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA2B8u;
    {
        const bool branch_taken_0x1ea2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1EA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2B8u;
        // 0x1ea2bc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2b8) {
            ctx->pc = 0x1EA2D4u;
            goto label_1ea2d4;
        }
    }
    ctx->pc = 0x1EA2C0u;
    // 0x1ea2c0: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1ea2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1ea2c4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1ea2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea2c8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1ea2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1ea2cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1ea2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea2d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1ea2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ea2d4:
    // 0x1ea2d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ea2d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA2D8u;
    {
        const bool branch_taken_0x1ea2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea2d8) {
            ctx->pc = 0x1EA2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA2D8u;
            // 0x1ea2dc: 0x8e4201b4  lw          $v0, 0x1B4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA2ECu;
            goto label_1ea2ec;
        }
    }
    ctx->pc = 0x1EA2E0u;
    // 0x1ea2e0: 0xc06c7c0  jal         func_1B1F00
    ctx->pc = 0x1EA2E0u;
    SET_GPR_U32(ctx, 31, 0x1EA2E8u);
    ctx->pc = 0x1B1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F00u, 0x1EA2E0u, 0x1EA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2E8u;
label_1ea2e8:
    // 0x1ea2e8: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1ea2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_1ea2ec:
    // 0x1ea2ec: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA2ECu;
    {
        const bool branch_taken_0x1ea2ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2ECu;
        // 0x1ea2f0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2ec) {
            ctx->pc = 0x1EA308u;
            goto label_1ea308;
        }
    }
    ctx->pc = 0x1EA2F4u;
    // 0x1ea2f4: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EA2F4u;
    {
        const bool branch_taken_0x1ea2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea2f4) {
            ctx->pc = 0x1EA2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA2F4u;
            // 0x1ea2f8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA338u;
            goto label_1ea338;
        }
    }
    ctx->pc = 0x1EA2FCu;
    // 0x1ea2fc: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1ea2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1ea300: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA300u;
    {
        const bool branch_taken_0x1ea300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA300u;
        // 0x1ea304: 0x541024  and         $v0, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea300) {
            ctx->pc = 0x1EA318u;
            goto label_1ea318;
        }
    }
    ctx->pc = 0x1EA308u;
label_1ea308:
    // 0x1ea308: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA308u;
    {
        const bool branch_taken_0x1ea308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea308) {
            ctx->pc = 0x1EA30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA308u;
            // 0x1ea30c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA320u;
            goto label_1ea320;
        }
    }
    ctx->pc = 0x1EA310u;
    // 0x1ea310: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1ea310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1ea314: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ea314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1ea318:
    // 0x1ea318: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1ea318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x1ea31c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ea31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ea320:
    // 0x1ea320: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA320u;
    {
        const bool branch_taken_0x1ea320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea320) {
            ctx->pc = 0x1EA324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA320u;
            // 0x1ea324: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA338u;
            goto label_1ea338;
        }
    }
    ctx->pc = 0x1EA328u;
    // 0x1ea328: 0x8c620600  lw          $v0, 0x600($v1)
    ctx->pc = 0x1ea328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1536)));
    // 0x1ea32c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ea32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ea330: 0xac620600  sw          $v0, 0x600($v1)
    ctx->pc = 0x1ea330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1536), GPR_U32(ctx, 2));
    // 0x1ea334: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ea334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ea338:
    // 0x1ea338: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ea338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ea33c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1ea33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1ea340: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1ea340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ea344: 0x8c430600  lw          $v1, 0x600($v0)
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x1ea348: 0x2a640005  slti        $a0, $s3, 0x5
    ctx->pc = 0x1ea348u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ea34c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1ea34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1ea350: 0x1480ffc7  bnez        $a0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1EA350u;
    {
        const bool branch_taken_0x1ea350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA350u;
        // 0x1ea354: 0xac430600  sw          $v1, 0x600($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea350) {
            ctx->pc = 0x1EA270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea270;
        }
    }
    ctx->pc = 0x1EA358u;
    // 0x1ea358: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1ea35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea360: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1ea364: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ea364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ea368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea36c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1ea370: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1EA370u;
    {
        const bool branch_taken_0x1ea370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA370u;
        // 0x1ea374: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea370) {
            ctx->pc = 0x1EA704u;
            goto label_1ea704;
        }
    }
    ctx->pc = 0x1EA378u;
label_1ea378:
    // 0x1ea378: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ea378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ea37c: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1ea37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1ea380: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ea384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ea388: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x1EA388u;
    {
        const bool branch_taken_0x1ea388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA388u;
        // 0x1ea38c: 0x26500210  addiu       $s0, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea388) {
            ctx->pc = 0x1EA7F8u;
            goto label_1ea7f8;
        }
    }
    ctx->pc = 0x1EA390u;
    // 0x1ea390: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1EA390u;
    {
        const bool branch_taken_0x1ea390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA390u;
        // 0x1ea394: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea390) {
            ctx->pc = 0x1EA710u;
            goto label_1ea710;
        }
    }
    ctx->pc = 0x1EA398u;
label_1ea398:
    // 0x1ea398: 0xc07b22a  jal         func_1EC8A8
    ctx->pc = 0x1EA398u;
    SET_GPR_U32(ctx, 31, 0x1EA3A0u);
    ctx->pc = 0x1EA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA398u;
    // 0x1ea39c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8A8u, 0x1EA398u, 0x1EA3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3A0u;
label_1ea3a0:
    // 0x1ea3a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1ea3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1ea3a4: 0x3403cc00  ori         $v1, $zero, 0xCC00
    ctx->pc = 0x1ea3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1ea3a8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1ea3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1ea3ac: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1ea3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x1ea3b0: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x1ea3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x1ea3b4: 0x24427a2c  addiu       $v0, $v0, 0x7A2C
    ctx->pc = 0x1ea3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x1ea3b8: 0x2442fa74  addiu       $v0, $v0, -0x58C
    ctx->pc = 0x1ea3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965876));
    // 0x1ea3bc: 0xdc4401b0  ld          $a0, 0x1B0($v0)
    ctx->pc = 0x1ea3bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1ea3c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ea3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ea3c4: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1EA3C4u;
    {
        const bool branch_taken_0x1ea3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea3c4) {
            ctx->pc = 0x1EA3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA3C4u;
            // 0x1ea3c8: 0xdc4301a0  ld          $v1, 0x1A0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA4A4u;
            goto label_1ea4a4;
        }
    }
    ctx->pc = 0x1EA3CCu;
    // 0x1ea3cc: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1ea3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1ea3d0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1ea3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1ea3d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ea3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ea3d8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x1ea3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x1ea3dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ea3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ea3e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA3E0u;
    {
        const bool branch_taken_0x1ea3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea3e0) {
            ctx->pc = 0x1EA404u;
            goto label_1ea404;
        }
    }
    ctx->pc = 0x1EA3E8u;
    // 0x1ea3e8: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1ea3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1ea3ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ea3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ea3f0: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA3F0u;
    {
        const bool branch_taken_0x1ea3f0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1EA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3F0u;
        // 0x1ea3f4: 0xae4201b4  sw          $v0, 0x1B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3f0) {
            ctx->pc = 0x1EA438u;
            goto label_1ea438;
        }
    }
    ctx->pc = 0x1EA3F8u;
    // 0x1ea3f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ea3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ea3fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EA3FCu;
    {
        const bool branch_taken_0x1ea3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3FCu;
        // 0x1ea400: 0xae4201b4  sw          $v0, 0x1B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3fc) {
            ctx->pc = 0x1EA438u;
            goto label_1ea438;
        }
    }
    ctx->pc = 0x1EA404u;
label_1ea404:
    // 0x1ea404: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1ea404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1ea408: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1ea408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1ea40c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ea40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ea410: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1ea410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1ea414: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ea414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ea418: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA418u;
    {
        const bool branch_taken_0x1ea418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea418) {
            ctx->pc = 0x1EA438u;
            goto label_1ea438;
        }
    }
    ctx->pc = 0x1EA420u;
    // 0x1ea420: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1ea424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ea428: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x1ea428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ea42c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA42Cu;
    {
        const bool branch_taken_0x1ea42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA42Cu;
        // 0x1ea430: 0xae4201b4  sw          $v0, 0x1B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea42c) {
            ctx->pc = 0x1EA438u;
            goto label_1ea438;
        }
    }
    ctx->pc = 0x1EA434u;
    // 0x1ea434: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x1ea434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
label_1ea438:
    // 0x1ea438: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1ea43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea440: 0x34c6fffd  ori         $a2, $a2, 0xFFFD
    ctx->pc = 0x1ea440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65533);
    // 0x1ea444: 0x2644005c  addiu       $a0, $s2, 0x5C
    ctx->pc = 0x1ea444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
label_1ea448:
    // 0x1ea448: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1ea448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1ea44c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ea44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea450: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x1ea450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x1ea454: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA454u;
    {
        const bool branch_taken_0x1ea454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA454u;
        // 0x1ea458: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea454) {
            ctx->pc = 0x1EA474u;
            goto label_1ea474;
        }
    }
    ctx->pc = 0x1EA45Cu;
    // 0x1ea45c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA45Cu;
    {
        const bool branch_taken_0x1ea45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA45Cu;
        // 0x1ea460: 0x8c620250  lw          $v0, 0x250($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea45c) {
            ctx->pc = 0x1EA46Cu;
            goto label_1ea46c;
        }
    }
    ctx->pc = 0x1EA464u;
    // 0x1ea464: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA464u;
    {
        const bool branch_taken_0x1ea464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA464u;
        // 0x1ea468: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea464) {
            ctx->pc = 0x1EA470u;
            goto label_1ea470;
        }
    }
    ctx->pc = 0x1EA46Cu;
label_1ea46c:
    // 0x1ea46c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ea46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1ea470:
    // 0x1ea470: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1ea470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_1ea474:
    // 0x1ea474: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ea478: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1ea478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ea47c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1EA47Cu;
    {
        const bool branch_taken_0x1ea47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA47Cu;
        // 0x1ea480: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea47c) {
            ctx->pc = 0x1EA448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea448;
        }
    }
    ctx->pc = 0x1EA484u;
    // 0x1ea484: 0x964501b4  lhu         $a1, 0x1B4($s2)
    ctx->pc = 0x1ea484u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1ea488: 0xc07b3cc  jal         func_1ECF30
    ctx->pc = 0x1EA488u;
    SET_GPR_U32(ctx, 31, 0x1EA490u);
    ctx->pc = 0x1EA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA488u;
    // 0x1ea48c: 0x26440210  addiu       $a0, $s2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECF30u, 0x1EA488u, 0x1EA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA490u;
label_1ea490:
    // 0x1ea490: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea498: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ea49c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1EA49Cu;
    {
        const bool branch_taken_0x1ea49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA49Cu;
        // 0x1ea4a0: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea49c) {
            ctx->pc = 0x1EA72Cu;
            goto label_1ea72c;
        }
    }
    ctx->pc = 0x1EA4A4u;
label_1ea4a4:
    // 0x1ea4a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ea4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ea4a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ea4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea4ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EA4ACu;
    {
        const bool branch_taken_0x1ea4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4ACu;
        // 0x1ea4b0: 0x26440210  addiu       $a0, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4ac) {
            ctx->pc = 0x1EA4F0u;
            goto label_1ea4f0;
        }
    }
    ctx->pc = 0x1EA4B4u;
    // 0x1ea4b4: 0xc07b45e  jal         func_1ED178
    ctx->pc = 0x1EA4B4u;
    SET_GPR_U32(ctx, 31, 0x1EA4BCu);
    ctx->pc = 0x1EA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4B4u;
    // 0x1ea4b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED178u, 0x1EA4B4u, 0x1EA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4BCu;
label_1ea4bc:
    // 0x1ea4bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ea4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ea4c8: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1ea4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1ea4cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ea4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea4d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1ea4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea4d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ea4d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4d8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1EA4D8u;
    SET_GPR_U32(ctx, 31, 0x1EA4E0u);
    ctx->pc = 0x1EA4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4D8u;
    // 0x1ea4dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1EA4D8u, 0x1EA4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4E0u;
label_1ea4e0:
    // 0x1ea4e0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ea4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ea4e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ea4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ea4e8: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1EA4E8u;
    {
        const bool branch_taken_0x1ea4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4E8u;
        // 0x1ea4ec: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4e8) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA4F0u;
label_1ea4f0:
    // 0x1ea4f0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ea4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ea4f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ea4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea4f8: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1EA4F8u;
    {
        const bool branch_taken_0x1ea4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4F8u;
        // 0x1ea4fc: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4f8) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA500u;
    // 0x1ea500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea504: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1ea504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1ea508: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ea50c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ea510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea514: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1ea514u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1ea518: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1EA518u;
    SET_GPR_U32(ctx, 31, 0x1EA520u);
    ctx->pc = 0x1EA51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA518u;
    // 0x1ea51c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EA518u, 0x1EA520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA520u;
label_1ea520:
    // 0x1ea520: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea528: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ea528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ea52c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1ea52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1ea530: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ea530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea534: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1ea534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea538: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ea538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea53c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1EA53Cu;
    SET_GPR_U32(ctx, 31, 0x1EA544u);
    ctx->pc = 0x1EA540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA53Cu;
    // 0x1ea540: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1EA53Cu, 0x1EA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA544u;
label_1ea544:
    // 0x1ea544: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ea544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ea548: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ea548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ea54c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1EA54Cu;
    {
        const bool branch_taken_0x1ea54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA54Cu;
        // 0x1ea550: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea54c) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA554u;
label_1ea554:
    // 0x1ea554: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ea554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ea558: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1ea558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1ea55c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ea55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ea560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ea564: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1EA564u;
    {
        const bool branch_taken_0x1ea564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA564u;
        // 0x1ea568: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea564) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA56Cu;
    // 0x1ea56c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1EA56Cu;
    {
        const bool branch_taken_0x1ea56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA56Cu;
        // 0x1ea570: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea56c) {
            ctx->pc = 0x1EA7ECu;
            goto label_1ea7ec;
        }
    }
    ctx->pc = 0x1EA574u;
label_1ea574:
    // 0x1ea574: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ea574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ea578: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1ea578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1ea57c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1ea57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1ea580: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ea580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ea584: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x1ea584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x1ea588: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1ea588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1ea58c: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1ea58cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1ea590: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ea590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ea594: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EA594u;
    {
        const bool branch_taken_0x1ea594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea594) {
            ctx->pc = 0x1EA618u;
            goto label_1ea618;
        }
    }
    ctx->pc = 0x1EA59Cu;
    // 0x1ea59c: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ea59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1ea5a0: 0x8e4301bc  lw          $v1, 0x1BC($s2)
    ctx->pc = 0x1ea5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x1ea5a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ea5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ea5a8: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1EA5A8u;
    {
        const bool branch_taken_0x1ea5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5A8u;
        // 0x1ea5ac: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5a8) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA5B0u;
    // 0x1ea5b0: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1ea5b4: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EA5B4u;
    SET_GPR_U32(ctx, 31, 0x1EA5BCu);
    ctx->pc = 0x1EA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5B4u;
    // 0x1ea5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EA5B4u, 0x1EA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5BCu;
label_1ea5bc:
    // 0x1ea5bc: 0x284201f4  slti        $v0, $v0, 0x1F4
    ctx->pc = 0x1ea5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x1ea5c0: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1EA5C0u;
    {
        const bool branch_taken_0x1ea5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5C0u;
        // 0x1ea5c4: 0x26500210  addiu       $s0, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5c0) {
            ctx->pc = 0x1EA7F8u;
            goto label_1ea7f8;
        }
    }
    ctx->pc = 0x1EA5C8u;
    // 0x1ea5c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5cc: 0xc07ea1c  jal         func_1FA870
    ctx->pc = 0x1EA5CCu;
    SET_GPR_U32(ctx, 31, 0x1EA5D4u);
    ctx->pc = 0x1EA5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5CCu;
    // 0x1ea5d0: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA870u, 0x1EA5CCu, 0x1EA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5D4u;
label_1ea5d4:
    // 0x1ea5d4: 0x26500210  addiu       $s0, $s2, 0x210
    ctx->pc = 0x1ea5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    // 0x1ea5d8: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ea5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1ea5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5e0: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x1ea5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x1ea5e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5e8: 0xc07b4f0  jal         func_1ED3C0
    ctx->pc = 0x1EA5E8u;
    SET_GPR_U32(ctx, 31, 0x1EA5F0u);
    ctx->pc = 0x1EA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5E8u;
    // 0x1ea5ec: 0xae4201b8  sw          $v0, 0x1B8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3C0u, 0x1EA5E8u, 0x1EA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5F0u;
label_1ea5f0:
    // 0x1ea5f0: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EA5F0u;
    SET_GPR_U32(ctx, 31, 0x1EA5F8u);
    ctx->pc = 0x1EA5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5F0u;
    // 0x1ea5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EA5F0u, 0x1EA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5F8u;
label_1ea5f8:
    // 0x1ea5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5fc: 0xc07b524  jal         func_1ED490
    ctx->pc = 0x1EA5FCu;
    SET_GPR_U32(ctx, 31, 0x1EA604u);
    ctx->pc = 0x1EA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5FCu;
    // 0x1ea600: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED490u, 0x1EA5FCu, 0x1EA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA604u;
label_1ea604:
    // 0x1ea604: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea60c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ea60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ea610: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1EA610u;
    {
        const bool branch_taken_0x1ea610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA610u;
        // 0x1ea614: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea610) {
            ctx->pc = 0x1EA72Cu;
            goto label_1ea72c;
        }
    }
    ctx->pc = 0x1EA618u;
label_1ea618:
    // 0x1ea618: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1ea618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1ea61c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1ea61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1ea620: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ea620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ea624: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1ea624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1ea628: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ea628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ea62c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EA62Cu;
    {
        const bool branch_taken_0x1ea62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea62c) {
            ctx->pc = 0x1EA630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA62Cu;
            // 0x1ea630: 0xdc6301a0  ld          $v1, 0x1A0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA698u;
            goto label_1ea698;
        }
    }
    ctx->pc = 0x1EA634u;
    // 0x1ea634: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ea634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1ea638: 0x1840006e  blez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1EA638u;
    {
        const bool branch_taken_0x1ea638 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA638u;
        // 0x1ea63c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea638) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA640u;
    // 0x1ea640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ea640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea644: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1ea644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1ea648: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x1ea648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x1ea64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea650: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1EA650u;
    SET_GPR_U32(ctx, 31, 0x1EA658u);
    ctx->pc = 0x1EA654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA650u;
    // 0x1ea654: 0x26510210  addiu       $s1, $s2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1EA650u, 0x1EA658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA658u;
label_1ea658:
    // 0x1ea658: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ea658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1ea65c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea660: 0x2442fe0c  addiu       $v0, $v0, -0x1F4
    ctx->pc = 0x1ea660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966796));
    // 0x1ea664: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea668: 0xc07b4f0  jal         func_1ED3C0
    ctx->pc = 0x1EA668u;
    SET_GPR_U32(ctx, 31, 0x1EA670u);
    ctx->pc = 0x1EA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA668u;
    // 0x1ea66c: 0xae4201b8  sw          $v0, 0x1B8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3C0u, 0x1EA668u, 0x1EA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA670u;
label_1ea670:
    // 0x1ea670: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EA670u;
    SET_GPR_U32(ctx, 31, 0x1EA678u);
    ctx->pc = 0x1EA674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA670u;
    // 0x1ea674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EA670u, 0x1EA678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA678u;
label_1ea678:
    // 0x1ea678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea67c: 0xc07b524  jal         func_1ED490
    ctx->pc = 0x1EA67Cu;
    SET_GPR_U32(ctx, 31, 0x1EA684u);
    ctx->pc = 0x1EA680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA67Cu;
    // 0x1ea680: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED490u, 0x1EA67Cu, 0x1EA684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA684u;
label_1ea684:
    // 0x1ea684: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea68c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ea68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ea690: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1EA690u;
    {
        const bool branch_taken_0x1ea690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA690u;
        // 0x1ea694: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea690) {
            ctx->pc = 0x1EA72Cu;
            goto label_1ea72c;
        }
    }
    ctx->pc = 0x1EA698u;
label_1ea698:
    // 0x1ea698: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ea698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ea69c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ea69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea6a0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EA6A0u;
    {
        const bool branch_taken_0x1ea6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6A0u;
        // 0x1ea6a4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6a0) {
            ctx->pc = 0x1EA748u;
            goto label_1ea748;
        }
    }
    ctx->pc = 0x1EA6A8u;
    // 0x1ea6a8: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ea6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1ea6ac: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EA6ACu;
    {
        const bool branch_taken_0x1ea6ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6ACu;
        // 0x1ea6b0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6ac) {
            ctx->pc = 0x1EA71Cu;
            goto label_1ea71c;
        }
    }
    ctx->pc = 0x1EA6B4u;
    // 0x1ea6b4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1ea6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1ea6b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ea6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ea6bc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1ea6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1ea6c0: 0xc0b4526  jal         func_2D1498
    ctx->pc = 0x1EA6C0u;
    SET_GPR_U32(ctx, 31, 0x1EA6C8u);
    ctx->pc = 0x1EA6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6C0u;
    // 0x1ea6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1498u, 0x1EA6C0u, 0x1EA6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6C8u;
label_1ea6c8:
    // 0x1ea6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6d0: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1ea6d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea6d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1ea6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea6dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ea6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6e0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1EA6E0u;
    SET_GPR_U32(ctx, 31, 0x1EA6E8u);
    ctx->pc = 0x1EA6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6E0u;
    // 0x1ea6e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1EA6E0u, 0x1EA6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA6E8u;
label_1ea6e8:
    // 0x1ea6e8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1ea6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1ea6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6f0: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1ea6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1ea6f4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ea6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ea6f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea6f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ea6fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea700: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1ea700u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_1ea704:
    // 0x1ea704: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1EA704u;
    SET_GPR_U32(ctx, 31, 0x1EA70Cu);
    ctx->pc = 0x1EA708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA704u;
    // 0x1ea708: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EA704u, 0x1EA70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA70Cu;
label_1ea70c:
    // 0x1ea70c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ea70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ea710:
    // 0x1ea710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ea710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ea714: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1EA714u;
    {
        const bool branch_taken_0x1ea714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA714u;
        // 0x1ea718: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea714) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA71Cu;
label_1ea71c:
    // 0x1ea71c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea724: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ea724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ea728: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1ea728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
label_1ea72c:
    // 0x1ea72c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ea72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea730: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1ea730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ea734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea738: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1EA738u;
    SET_GPR_U32(ctx, 31, 0x1EA740u);
    ctx->pc = 0x1EA73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA738u;
    // 0x1ea73c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1EA738u, 0x1EA740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA740u;
label_1ea740:
    // 0x1ea740: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1EA740u;
    {
        const bool branch_taken_0x1ea740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA740u;
        // 0x1ea744: 0x26500210  addiu       $s0, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea740) {
            ctx->pc = 0x1EA7F8u;
            goto label_1ea7f8;
        }
    }
    ctx->pc = 0x1EA748u;
label_1ea748:
    // 0x1ea748: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ea748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea74c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EA74Cu;
    {
        const bool branch_taken_0x1ea74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA74Cu;
        // 0x1ea750: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea74c) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA754u;
    // 0x1ea754: 0x8e4501b8  lw          $a1, 0x1B8($s2)
    ctx->pc = 0x1ea754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1ea758: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1ea758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1ea75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ea75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea764: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1EA764u;
    SET_GPR_U32(ctx, 31, 0x1EA76Cu);
    ctx->pc = 0x1EA768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA764u;
    // 0x1ea768: 0x26510210  addiu       $s1, $s2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1EA764u, 0x1EA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA76Cu;
label_1ea76c:
    // 0x1ea76c: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x1ea76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
    // 0x1ea770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea774: 0xc07b4f0  jal         func_1ED3C0
    ctx->pc = 0x1EA774u;
    SET_GPR_U32(ctx, 31, 0x1EA77Cu);
    ctx->pc = 0x1EA778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA774u;
    // 0x1ea778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3C0u, 0x1EA774u, 0x1EA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA77Cu;
label_1ea77c:
    // 0x1ea77c: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EA77Cu;
    SET_GPR_U32(ctx, 31, 0x1EA784u);
    ctx->pc = 0x1EA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA77Cu;
    // 0x1ea780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EA77Cu, 0x1EA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA784u;
label_1ea784:
    // 0x1ea784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea788: 0xc07b524  jal         func_1ED490
    ctx->pc = 0x1EA788u;
    SET_GPR_U32(ctx, 31, 0x1EA790u);
    ctx->pc = 0x1EA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA788u;
    // 0x1ea78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED490u, 0x1EA788u, 0x1EA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA790u;
label_1ea790:
    // 0x1ea790: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea798: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ea798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ea79c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1ea79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1ea7a0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ea7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea7a4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1ea7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea7a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ea7a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7ac: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1EA7ACu;
    SET_GPR_U32(ctx, 31, 0x1EA7B4u);
    ctx->pc = 0x1EA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7ACu;
    // 0x1ea7b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1EA7ACu, 0x1EA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7B4u;
label_1ea7b4:
    // 0x1ea7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7b8: 0xc07b45e  jal         func_1ED178
    ctx->pc = 0x1EA7B8u;
    SET_GPR_U32(ctx, 31, 0x1EA7C0u);
    ctx->pc = 0x1EA7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7B8u;
    // 0x1ea7bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED178u, 0x1EA7B8u, 0x1EA7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7C0u;
label_1ea7c0:
    // 0x1ea7c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ea7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ea7c4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ea7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1ea7c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EA7C8u;
    {
        const bool branch_taken_0x1ea7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7C8u;
        // 0x1ea7cc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7c8) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA7D0u;
label_1ea7d0:
    // 0x1ea7d0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ea7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ea7d4: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1ea7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1ea7d8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ea7dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ea7e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA7E0u;
    {
        const bool branch_taken_0x1ea7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7E0u;
        // 0x1ea7e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7e0) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA7E8u;
    // 0x1ea7e8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1ea7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1ea7ec:
    // 0x1ea7ec: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1ea7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1ea7f0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1ea7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1ea7f4:
    // 0x1ea7f4: 0x26500210  addiu       $s0, $s2, 0x210
    ctx->pc = 0x1ea7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
label_1ea7f8:
    // 0x1ea7f8: 0xc07b2fc  jal         func_1ECBF0
    ctx->pc = 0x1EA7F8u;
    SET_GPR_U32(ctx, 31, 0x1EA800u);
    ctx->pc = 0x1EA7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7F8u;
    // 0x1ea7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECBF0u, 0x1EA7F8u, 0x1EA800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA800u;
label_1ea800:
    // 0x1ea800: 0xc07b312  jal         func_1ECC48
    ctx->pc = 0x1EA800u;
    SET_GPR_U32(ctx, 31, 0x1EA808u);
    ctx->pc = 0x1EA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA800u;
    // 0x1ea804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECC48u, 0x1EA800u, 0x1EA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA808u;
label_1ea808:
    // 0x1ea808: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ea808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea80c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ea80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea810: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ea810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea814: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ea814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea818: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea81c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1ea81cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea820: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1ea820u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea828: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA828u;
        // 0x1ea82c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA830u;
}

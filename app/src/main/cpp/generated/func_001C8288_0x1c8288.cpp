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

// Function: func_001C8288
// Address: 0x1c8288 - 0x1c86e8
void func_001C8288_0x1c8288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C8288_0x1c8288");
#endif

    switch (ctx->pc) {
        case 0x1c82b8u: goto label_1c82b8;
        case 0x1c82c8u: goto label_1c82c8;
        case 0x1c8354u: goto label_1c8354;
        case 0x1c8368u: goto label_1c8368;
        case 0x1c84a0u: goto label_1c84a0;
        case 0x1c8500u: goto label_1c8500;
        case 0x1c85e4u: goto label_1c85e4;
        case 0x1c85fcu: goto label_1c85fc;
        case 0x1c8608u: goto label_1c8608;
        case 0x1c866cu: goto label_1c866c;
        case 0x1c86b4u: goto label_1c86b4;
        case 0x1c86bcu: goto label_1c86bc;
        default: break;
    }

    ctx->pc = 0x1c8288u;

    // 0x1c8288: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c828c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1c828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1c8290: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1c8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1c8294: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1c8294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1c8298: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1c8298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1c829c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1c829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1c82a0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1c82a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1c82a4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1c82a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1c82a8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1c82a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1c82ac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c82acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c82b0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1C82B0u;
    SET_GPR_U32(ctx, 31, 0x1C82B8u);
    ctx->pc = 0x1C82B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82B0u;
    // 0x1c82b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C82B0u, 0x1C82B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82B8u;
label_1c82b8:
    // 0x1c82b8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1c82bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c82bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82c0: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1C82C0u;
    SET_GPR_U32(ctx, 31, 0x1C82C8u);
    ctx->pc = 0x1C82C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82C0u;
    // 0x1c82c4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1C82C0u, 0x1C82C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82C8u;
label_1c82c8:
    // 0x1c82c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c82c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c82cc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c82ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c82d0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c82d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c82d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c82d8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c82d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c82dc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c82dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c82e0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c82e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c82e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C82E4u;
    {
        const bool branch_taken_0x1c82e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82E4u;
        // 0x1c82e8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82e4) {
            ctx->pc = 0x1C82F8u;
            goto label_1c82f8;
        }
    }
    ctx->pc = 0x1C82ECu;
    // 0x1c82ec: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c82f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C82F0u;
    {
        const bool branch_taken_0x1c82f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82F0u;
        // 0x1c82f4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82f0) {
            ctx->pc = 0x1C82FCu;
            goto label_1c82fc;
        }
    }
    ctx->pc = 0x1C82F8u;
label_1c82f8:
    // 0x1c82f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c82f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c82fc:
    // 0x1c82fc: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1c82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1c8300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8300u;
    {
        const bool branch_taken_0x1c8300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8300u;
        // 0x1c8304: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8300) {
            ctx->pc = 0x1C8310u;
            goto label_1c8310;
        }
    }
    ctx->pc = 0x1C8308u;
    // 0x1c8308: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c8308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c830c: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x1c830cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c8310:
    // 0x1c8310: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1c8310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c8314: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8314u;
    {
        const bool branch_taken_0x1c8314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8314u;
        // 0x1c8318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8314) {
            ctx->pc = 0x1C832Cu;
            goto label_1c832c;
        }
    }
    ctx->pc = 0x1C831Cu;
    // 0x1c831c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C831Cu;
    {
        const bool branch_taken_0x1c831c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c831c) {
            ctx->pc = 0x1C8394u;
            goto label_1c8394;
        }
    }
    ctx->pc = 0x1C8324u;
    // 0x1c8324: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x1C8324u;
    {
        const bool branch_taken_0x1c8324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8324u;
        // 0x1c8328: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8324) {
            ctx->pc = 0x1C86C0u;
            goto label_1c86c0;
        }
    }
    ctx->pc = 0x1C832Cu;
label_1c832c:
    // 0x1c832c: 0xc60d0610  lwc1        $f13, 0x610($s0)
    ctx->pc = 0x1c832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8330: 0xc6000618  lwc1        $f0, 0x618($s0)
    ctx->pc = 0x1c8330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8334: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x1c8334u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1c8338: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c8338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1c833c: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1c833cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1c8340: 0x0  nop
    ctx->pc = 0x1c8340u;
    // NOP
    // 0x1c8344: 0x0  nop
    ctx->pc = 0x1c8344u;
    // NOP
    // 0x1c8348: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1c8348u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x1c834c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1C834Cu;
    SET_GPR_U32(ctx, 31, 0x1C8354u);
    ctx->pc = 0x1C8350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C834Cu;
    // 0x1c8350: 0xc60c0614  lwc1        $f12, 0x614($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1C834Cu, 0x1C8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8354u;
label_1c8354:
    // 0x1c8354: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c8354u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c8358: 0xc60c0610  lwc1        $f12, 0x610($s0)
    ctx->pc = 0x1c8358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c835c: 0xc60d0618  lwc1        $f13, 0x618($s0)
    ctx->pc = 0x1c835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8360: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1C8360u;
    SET_GPR_U32(ctx, 31, 0x1C8368u);
    ctx->pc = 0x1C8364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8360u;
    // 0x1c8364: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1C8360u, 0x1C8368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8368u;
label_1c8368:
    // 0x1c8368: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1c8368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c836c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1c836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1c8370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8374: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c8374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c8378: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c8378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c837c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c8380: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1c8380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1c8384: 0xe6010620  swc1        $f1, 0x620($s0)
    ctx->pc = 0x1c8384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x1c8388: 0xe6020628  swc1        $f2, 0x628($s0)
    ctx->pc = 0x1c8388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1576), bits); }
    // 0x1c838c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1c838cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8390: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1c8390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_1c8394:
    // 0x1c8394: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8394u;
    {
        const bool branch_taken_0x1c8394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8394u;
        // 0x1c8398: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8394) {
            ctx->pc = 0x1C83B8u;
            goto label_1c83b8;
        }
    }
    ctx->pc = 0x1C839Cu;
    // 0x1c839c: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1c839cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1c83a0: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1c83a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1c83a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c83a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c83a8: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1c83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c83ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c83acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c83b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c83b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c83b4: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x1c83b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_1c83b8:
    // 0x1c83b8: 0x26040610  addiu       $a0, $s0, 0x610
    ctx->pc = 0x1c83b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1c83bc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c83bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c83c0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c83c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c83c4: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c83c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c83c8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1c83c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c83cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c83ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c83d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c83d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c83d4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c83d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c83d8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c83d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c83dc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c83dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c83e0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c83e4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c83e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c83e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c83ec: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c83ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c83f0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c83f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c83f4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c83f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c83f8: 0xc6010628  lwc1        $f1, 0x628($s0)
    ctx->pc = 0x1c83f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c83fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c83fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8404: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c8404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8408: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c8408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c840c: 0x0  nop
    ctx->pc = 0x1c840cu;
    // NOP
    // 0x1c8410: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8410u;
    {
        const bool branch_taken_0x1c8410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8410u;
        // 0x1c8414: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8410) {
            ctx->pc = 0x1C8424u;
            goto label_1c8424;
        }
    }
    ctx->pc = 0x1C8418u;
    // 0x1c8418: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x1c8418u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1c841c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C841Cu;
    {
        const bool branch_taken_0x1c841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C841Cu;
        // 0x1c8420: 0xe6000628  swc1        $f0, 0x628($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c841c) {
            ctx->pc = 0x1C8440u;
            goto label_1c8440;
        }
    }
    ctx->pc = 0x1C8424u;
label_1c8424:
    // 0x1c8424: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1c8424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1c8428: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1c8428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1c842c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c842cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8430: 0xc6010614  lwc1        $f1, 0x614($s0)
    ctx->pc = 0x1c8430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8434: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c8434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c8438: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c8438u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c843c: 0xe6010614  swc1        $f1, 0x614($s0)
    ctx->pc = 0x1c843cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1556), bits); }
label_1c8440:
    // 0x1c8440: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c8444: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c8444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8448: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8448u;
    {
        const bool branch_taken_0x1c8448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8448u;
        // 0x1c844c: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8448) {
            ctx->pc = 0x1C8468u;
            goto label_1c8468;
        }
    }
    ctx->pc = 0x1C8450u;
    // 0x1c8450: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8454: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c8454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c8458: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c8458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c845c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1c845cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c8460: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c8460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8464: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1c8464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1c8468:
    // 0x1c8468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c846c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c846cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1c8470: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c8470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8474: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c8474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c8478: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c8478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c847c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c847cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c8480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8484: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c8484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1c8488: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1c8488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c848c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1c848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1c8490: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1c8494: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8494u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8498: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1C8498u;
    SET_GPR_U32(ctx, 31, 0x1C84A0u);
    ctx->pc = 0x1C849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8498u;
    // 0x1c849c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C8498u, 0x1C84A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84A0u;
label_1c84a0:
    // 0x1c84a0: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x1C84A0u;
    {
        const bool branch_taken_0x1c84a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c84a0) {
            ctx->pc = 0x1C84A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C84A0u;
            // 0x1c84a4: 0x8e040600  lw          $a0, 0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C85ECu;
            goto label_1c85ec;
        }
    }
    ctx->pc = 0x1C84A8u;
    // 0x1c84a8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c84a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c84ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c84acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1c84b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c84b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c84b4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c84b8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1c84b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c84bc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c84bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c84c0: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c84c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c84c4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c84c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c84c8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c84c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c84cc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c84ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c84d0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c84d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c84d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c84d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c84d8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c84d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c84dc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1c84dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c84e0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1c84e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c84e4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1c84e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c84e8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c84e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c84ec: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1c84ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c84f0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1c84f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c84f4: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1c84f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c84f8: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1C84F8u;
    SET_GPR_U32(ctx, 31, 0x1C8500u);
    ctx->pc = 0x1C84FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84F8u;
    // 0x1c84fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1C84F8u, 0x1C8500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8500u;
label_1c8500:
    // 0x1c8500: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1c8500u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1c8504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8508: 0x0  nop
    ctx->pc = 0x1c8508u;
    // NOP
    // 0x1c850c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c850cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8510: 0x0  nop
    ctx->pc = 0x1c8510u;
    // NOP
    // 0x1c8514: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1C8514u;
    {
        const bool branch_taken_0x1c8514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8514u;
        // 0x1c8518: 0xc7a40060  lwc1        $f4, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8514) {
            ctx->pc = 0x1C8558u;
            goto label_1c8558;
        }
    }
    ctx->pc = 0x1C851Cu;
    // 0x1c851c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c851cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8520: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8524: 0x0  nop
    ctx->pc = 0x1c8524u;
    // NOP
    // 0x1c8528: 0x0  nop
    ctx->pc = 0x1c8528u;
    // NOP
    // 0x1c852c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c852cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1c8530: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1c8530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8534: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c8534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8538: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c8538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c853c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c853cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c8540: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1c8540u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c8544: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1c8544u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1c8548: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1c8548u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1c854c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1c854cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1c8550: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x1c8550u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c8554: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x1c8554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1c8558:
    // 0x1c8558: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c8558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c855c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c8560: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c8560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8564: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1c8564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8568: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x1c8568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c856c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1c856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8570: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1c8570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c8574: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1c8574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c8578: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1c8578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c857c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1c857cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1c8580: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c8580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c8584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8588: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c8588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c858c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c858cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c8590: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c8590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c8594: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c8594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8598: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c8598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c859c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1c859cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c85a0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c85a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c85a4: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c85a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c85a8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c85a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c85ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c85acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c85b0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c85b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c85b4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c85b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c85b8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c85bc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c85c0: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C85C0u;
    {
        const bool branch_taken_0x1c85c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85C0u;
        // 0x1c85c4: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85c0) {
            ctx->pc = 0x1C85DCu;
            goto label_1c85dc;
        }
    }
    ctx->pc = 0x1C85C8u;
    // 0x1c85c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c85c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c85cc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1c85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c85d0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c85d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c85d4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c85d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c85d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c85d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c85dc:
    // 0x1c85dc: 0xc072376  jal         func_1C8DD8
    ctx->pc = 0x1C85DCu;
    SET_GPR_U32(ctx, 31, 0x1C85E4u);
    ctx->pc = 0x1C85E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85DCu;
    // 0x1c85e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DD8u, 0x1C85DCu, 0x1C85E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85E4u;
label_1c85e4:
    // 0x1c85e4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C85E4u;
    {
        const bool branch_taken_0x1c85e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85E4u;
        // 0x1c85e8: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85e4) {
            ctx->pc = 0x1C86C0u;
            goto label_1c86c0;
        }
    }
    ctx->pc = 0x1C85ECu;
label_1c85ec:
    // 0x1c85ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c85ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c85f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c85f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c85f4: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1C85F4u;
    SET_GPR_U32(ctx, 31, 0x1C85FCu);
    ctx->pc = 0x1C85F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85F4u;
    // 0x1c85f8: 0x8e050604  lw          $a1, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1C85F4u, 0x1C85FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85FCu;
label_1c85fc:
    // 0x1c85fc: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1c85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1c8600: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1C8600u;
    SET_GPR_U32(ctx, 31, 0x1C8608u);
    ctx->pc = 0x1C8604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8600u;
    // 0x1c8604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C8600u, 0x1C8608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8608u;
label_1c8608:
    // 0x1c8608: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c8608u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1c860c: 0x24020310  addiu       $v0, $zero, 0x310
    ctx->pc = 0x1c860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x1c8610: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8610u;
    {
        const bool branch_taken_0x1c8610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8610u;
        // 0x1c8614: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8610) {
            ctx->pc = 0x1C8628u;
            goto label_1c8628;
        }
    }
    ctx->pc = 0x1C8618u;
    // 0x1c8618: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1c8618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1c861c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c861cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8620: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8620u;
    {
        const bool branch_taken_0x1c8620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8620u;
        // 0x1c8624: 0x8e030600  lw          $v1, 0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8620) {
            ctx->pc = 0x1C8638u;
            goto label_1c8638;
        }
    }
    ctx->pc = 0x1C8628u;
label_1c8628:
    // 0x1c8628: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1c8628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1c862c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1c862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c8630: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1c8630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1c8634: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c8638:
    // 0x1c8638: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1c8638u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c863c: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1c863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8640: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1c8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1c8644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8648: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c8648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c864c: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x1c864cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x1c8650: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1c8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1c8654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c8654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8658: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c8658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c865c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1c865cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1c8660: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1c8660u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c8664: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1C8664u;
    SET_GPR_U32(ctx, 31, 0x1C866Cu);
    ctx->pc = 0x1C8668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8664u;
    // 0x1c8668: 0x8e040600  lw          $a0, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1C8664u, 0x1C866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C866Cu;
label_1c866c:
    // 0x1c866c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C866Cu;
    {
        const bool branch_taken_0x1c866c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C866Cu;
        // 0x1c8670: 0xc6000620  lwc1        $f0, 0x620($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c866c) {
            ctx->pc = 0x1C8694u;
            goto label_1c8694;
        }
    }
    ctx->pc = 0x1C8674u;
    // 0x1c8674: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c8674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1c8678: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c867c: 0x0  nop
    ctx->pc = 0x1c867cu;
    // NOP
    // 0x1c8680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8684: 0x0  nop
    ctx->pc = 0x1c8684u;
    // NOP
    // 0x1c8688: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8688u;
    {
        const bool branch_taken_0x1c8688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8688) {
            ctx->pc = 0x1C868Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8688u;
            // 0x1c868c: 0xe6010620  swc1        $f1, 0x620($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8690u;
            goto label_1c8690;
        }
    }
    ctx->pc = 0x1C8690u;
label_1c8690:
    // 0x1c8690: 0xc6000620  lwc1        $f0, 0x620($s0)
    ctx->pc = 0x1c8690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8694:
    // 0x1c8694: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c8694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8698: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c8698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c869c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c869cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c86a0: 0x0  nop
    ctx->pc = 0x1c86a0u;
    // NOP
    // 0x1c86a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C86A4u;
    {
        const bool branch_taken_0x1c86a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86A4u;
        // 0x1c86a8: 0xe6000620  swc1        $f0, 0x620($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86a4) {
            ctx->pc = 0x1C86B4u;
            goto label_1c86b4;
        }
    }
    ctx->pc = 0x1C86ACu;
    // 0x1c86ac: 0xc072376  jal         func_1C8DD8
    ctx->pc = 0x1C86ACu;
    SET_GPR_U32(ctx, 31, 0x1C86B4u);
    ctx->pc = 0x1C86B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86ACu;
    // 0x1c86b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DD8u, 0x1C86ACu, 0x1C86B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86B4u;
label_1c86b4:
    // 0x1c86b4: 0xc072394  jal         func_1C8E50
    ctx->pc = 0x1C86B4u;
    SET_GPR_U32(ctx, 31, 0x1C86BCu);
    ctx->pc = 0x1C86B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86B4u;
    // 0x1c86b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8E50u, 0x1C86B4u, 0x1C86BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86BCu;
label_1c86bc:
    // 0x1c86bc: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1c86bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c86c0:
    // 0x1c86c0: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1c86c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c86c4: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1c86c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c86c8: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1c86c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c86cc: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1c86ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c86d0: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1c86d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c86d4: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1c86d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c86d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c86d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c86dc: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1c86dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c86e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C86E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86E0u;
        // 0x1c86e4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C86E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C86E8u;
}

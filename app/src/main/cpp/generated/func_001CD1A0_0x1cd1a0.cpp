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

// Function: func_001CD1A0
// Address: 0x1cd1a0 - 0x1cd7a8
void func_001CD1A0_0x1cd1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CD1A0_0x1cd1a0");
#endif

    switch (ctx->pc) {
        case 0x1cd1d8u: goto label_1cd1d8;
        case 0x1cd1e0u: goto label_1cd1e0;
        case 0x1cd280u: goto label_1cd280;
        case 0x1cd2d4u: goto label_1cd2d4;
        case 0x1cd370u: goto label_1cd370;
        case 0x1cd394u: goto label_1cd394;
        case 0x1cd3c4u: goto label_1cd3c4;
        case 0x1cd4c8u: goto label_1cd4c8;
        case 0x1cd4f8u: goto label_1cd4f8;
        case 0x1cd5a4u: goto label_1cd5a4;
        case 0x1cd5f4u: goto label_1cd5f4;
        case 0x1cd614u: goto label_1cd614;
        case 0x1cd61cu: goto label_1cd61c;
        case 0x1cd630u: goto label_1cd630;
        case 0x1cd690u: goto label_1cd690;
        case 0x1cd6a8u: goto label_1cd6a8;
        case 0x1cd6c4u: goto label_1cd6c4;
        case 0x1cd6d8u: goto label_1cd6d8;
        case 0x1cd6fcu: goto label_1cd6fc;
        case 0x1cd710u: goto label_1cd710;
        case 0x1cd72cu: goto label_1cd72c;
        case 0x1cd738u: goto label_1cd738;
        case 0x1cd75cu: goto label_1cd75c;
        case 0x1cd77cu: goto label_1cd77c;
        default: break;
    }

    ctx->pc = 0x1cd1a0u;

    // 0x1cd1a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1cd1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1cd1a4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1cd1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1cd1a8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1cd1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1cd1ac: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1cd1acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1cd1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1b4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1cd1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1cd1b8: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1cd1b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1cd1bc: 0x260464f0  addiu       $a0, $s0, 0x64F0
    ctx->pc = 0x1cd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1cd1c0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1cd1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1cd1c4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1cd1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1cd1c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1cd1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1cd1cc: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1cd1ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1cd1d0: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CD1D0u;
    SET_GPR_U32(ctx, 31, 0x1CD1D8u);
    ctx->pc = 0x1CD1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1D0u;
    // 0x1cd1d4: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CD1D0u, 0x1CD1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1D8u;
label_1cd1d8:
    // 0x1cd1d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1CD1D8u;
    SET_GPR_U32(ctx, 31, 0x1CD1E0u);
    ctx->pc = 0x1CD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1D8u;
    // 0x1cd1dc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1CD1D8u, 0x1CD1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1E0u;
label_1cd1e0:
    // 0x1cd1e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cd1e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1e4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1cd1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cd1e8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cd1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd1ec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cd1ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd1f0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1cd1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cd1f4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1cd1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cd1f8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1cd1f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1cd1fc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1cd1fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD200u;
    {
        const bool branch_taken_0x1cd200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD200u;
        // 0x1cd204: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd200) {
            ctx->pc = 0x1CD214u;
            goto label_1cd214;
        }
    }
    ctx->pc = 0x1CD208u;
    // 0x1cd208: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1cd208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1cd20c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD20Cu;
    {
        const bool branch_taken_0x1cd20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD20Cu;
        // 0x1cd210: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd20c) {
            ctx->pc = 0x1CD218u;
            goto label_1cd218;
        }
    }
    ctx->pc = 0x1CD214u;
label_1cd214:
    // 0x1cd214: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd218:
    // 0x1cd218: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1cd218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cd21c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1cd21cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cd220: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1cd220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd224: 0x1072002e  beq         $v1, $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CD224u;
    {
        const bool branch_taken_0x1cd224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1CD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD224u;
        // 0x1cd228: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd224) {
            ctx->pc = 0x1CD2E0u;
            goto label_1cd2e0;
        }
    }
    ctx->pc = 0x1CD22Cu;
    // 0x1cd22c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD22Cu;
    {
        const bool branch_taken_0x1cd22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd22c) {
            ctx->pc = 0x1CD230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD22Cu;
            // 0x1cd230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD244u;
            goto label_1cd244;
        }
    }
    ctx->pc = 0x1CD234u;
    // 0x1cd234: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD234u;
    {
        const bool branch_taken_0x1cd234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd234) {
            ctx->pc = 0x1CD238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD234u;
            // 0x1cd238: 0xc62c0640  lwc1        $f12, 0x640($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD25Cu;
            goto label_1cd25c;
        }
    }
    ctx->pc = 0x1CD23Cu;
    // 0x1cd23c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x1CD23Cu;
    {
        const bool branch_taken_0x1cd23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD23Cu;
        // 0x1cd240: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd23c) {
            ctx->pc = 0x1CD780u;
            goto label_1cd780;
        }
    }
    ctx->pc = 0x1CD244u;
label_1cd244:
    // 0x1cd244: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1CD244u;
    {
        const bool branch_taken_0x1cd244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD244u;
        // 0x1cd248: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd244) {
            ctx->pc = 0x1CD4D0u;
            goto label_1cd4d0;
        }
    }
    ctx->pc = 0x1CD24Cu;
    // 0x1cd24c: 0x106200ad  beq         $v1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x1CD24Cu;
    {
        const bool branch_taken_0x1cd24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cd24c) {
            ctx->pc = 0x1CD504u;
            goto label_1cd504;
        }
    }
    ctx->pc = 0x1CD254u;
    // 0x1cd254: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x1CD254u;
    {
        const bool branch_taken_0x1cd254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD254u;
        // 0x1cd258: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd254) {
            ctx->pc = 0x1CD780u;
            goto label_1cd780;
        }
    }
    ctx->pc = 0x1CD25Cu;
label_1cd25c:
    // 0x1cd25c: 0xc62d0648  lwc1        $f13, 0x648($s1)
    ctx->pc = 0x1cd25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd260: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1cd260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1cd264: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x1cd264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1cd268: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cd268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd26c: 0x0  nop
    ctx->pc = 0x1cd26cu;
    // NOP
    // 0x1cd270: 0x0  nop
    ctx->pc = 0x1cd270u;
    // NOP
    // 0x1cd274: 0x46000004  c1          0x4
    ctx->pc = 0x1cd274u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1cd278: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CD278u;
    SET_GPR_U32(ctx, 31, 0x1CD280u);
    ctx->pc = 0x1CD27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD278u;
    // 0x1cd27c: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CD278u, 0x1CD280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD280u;
label_1cd280:
    // 0x1cd280: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1cd280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1cd284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd288: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cd288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd28c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1cd28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1cd290: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd294: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cd294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cd298: 0xa6320568  sh          $s2, 0x568($s1)
    ctx->pc = 0x1cd298u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 18));
    // 0x1cd29c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cd29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cd2a0: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1cd2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1cd2a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cd2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd2a8: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1cd2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1cd2ac: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x1cd2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1cd2b0: 0xe6210660  swc1        $f1, 0x660($s1)
    ctx->pc = 0x1cd2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
    // 0x1cd2b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cd2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2b8: 0xe6220674  swc1        $f2, 0x674($s1)
    ctx->pc = 0x1cd2b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1cd2bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd2bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2c0: 0xa2220531  sb          $v0, 0x531($s1)
    ctx->pc = 0x1cd2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd2c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cd2c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cd2c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CD2CCu;
    SET_GPR_U32(ctx, 31, 0x1CD2D4u);
    ctx->pc = 0x1CD2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2CCu;
    // 0x1cd2d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CD2CCu, 0x1CD2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2D4u;
label_1cd2d4:
    // 0x1cd2d4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1cd2d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cd2d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd2dc: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1cd2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_1cd2e0:
    // 0x1cd2e0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD2E0u;
    {
        const bool branch_taken_0x1cd2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd2e0) {
            ctx->pc = 0x1CD2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD2E0u;
            // 0x1cd2e4: 0xc6200674  lwc1        $f0, 0x674($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD308u;
            goto label_1cd308;
        }
    }
    ctx->pc = 0x1CD2E8u;
    // 0x1cd2e8: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1cd2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1cd2ec: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1cd2ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1cd2f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd2f4: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x1cd2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd2f8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1cd2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1cd2fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cd2fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cd300: 0xe6010100  swc1        $f1, 0x100($s0)
    ctx->pc = 0x1cd300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1cd304: 0xc6200674  lwc1        $f0, 0x674($s1)
    ctx->pc = 0x1cd304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd308:
    // 0x1cd308: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cd308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cd30c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1cd30cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1cd310: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1cd310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd314: 0x0  nop
    ctx->pc = 0x1cd314u;
    // NOP
    // 0x1cd318: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD318u;
    {
        const bool branch_taken_0x1cd318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD318u;
        // 0x1cd31c: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd318) {
            ctx->pc = 0x1CD32Cu;
            goto label_1cd32c;
        }
    }
    ctx->pc = 0x1CD320u;
    // 0x1cd320: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1cd320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cd324: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cd328: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1cd328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cd32c:
    // 0x1cd32c: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x1cd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x1cd330: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd334: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1cd334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cd338: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1cd338u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd33c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1cd33cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd340: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cd340u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cd344: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cd344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cd348: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x1cd348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cd34c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1cd34cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd350: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1cd350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cd354: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1cd354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd358: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1cd358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cd35c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1cd35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd360: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1cd360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1cd364: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1cd364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1cd368: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1CD368u;
    SET_GPR_U32(ctx, 31, 0x1CD370u);
    ctx->pc = 0x1CD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD368u;
    // 0x1cd36c: 0xe7b40074  swc1        $f20, 0x74($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1CD368u, 0x1CD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD370u;
label_1cd370:
    // 0x1cd370: 0x0  nop
    ctx->pc = 0x1cd370u;
    // NOP
    // 0x1cd374: 0x0  nop
    ctx->pc = 0x1cd374u;
    // NOP
    // 0x1cd378: 0x46000044  c1          0x44
    ctx->pc = 0x1cd378u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1cd37c: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x1cd37cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd380: 0x0  nop
    ctx->pc = 0x1cd380u;
    // NOP
    // 0x1cd384: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD384u;
    {
        const bool branch_taken_0x1cd384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd384) {
            ctx->pc = 0x1CD398u;
            goto label_1cd398;
        }
    }
    ctx->pc = 0x1CD38Cu;
    // 0x1cd38c: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1CD38Cu;
    SET_GPR_U32(ctx, 31, 0x1CD394u);
    ctx->pc = 0x1CD390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD38Cu;
    // 0x1cd390: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1CD38Cu, 0x1CD394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD394u;
label_1cd394:
    // 0x1cd394: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1cd394u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1cd398:
    // 0x1cd398: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cd398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cd39c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd3a0: 0x0  nop
    ctx->pc = 0x1cd3a0u;
    // NOP
    // 0x1cd3a4: 0x4600b542  mul.s       $f21, $f22, $f0
    ctx->pc = 0x1cd3a4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1cd3a8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1cd3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd3ac: 0x0  nop
    ctx->pc = 0x1cd3acu;
    // NOP
    // 0x1cd3b0: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x1CD3B0u;
    {
        const bool branch_taken_0x1cd3b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd3b0) {
            ctx->pc = 0x1CD3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD3B0u;
            // 0x1cd3b4: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD464u;
            goto label_1cd464;
        }
    }
    ctx->pc = 0x1CD3B8u;
    // 0x1cd3b8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1cd3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cd3bc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1CD3BCu;
    SET_GPR_U32(ctx, 31, 0x1CD3C4u);
    ctx->pc = 0x1CD3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3BCu;
    // 0x1cd3c0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1CD3BCu, 0x1CD3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3C4u;
label_1cd3c4:
    // 0x1cd3c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cd3c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd3c8: 0x0  nop
    ctx->pc = 0x1cd3c8u;
    // NOP
    // 0x1cd3cc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD3CCu;
    {
        const bool branch_taken_0x1cd3cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3CCu;
        // 0x1cd3d0: 0xc7a40070  lwc1        $f4, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd3cc) {
            ctx->pc = 0x1CD410u;
            goto label_1cd410;
        }
    }
    ctx->pc = 0x1CD3D4u;
    // 0x1cd3d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd3d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd3dc: 0x0  nop
    ctx->pc = 0x1cd3dcu;
    // NOP
    // 0x1cd3e0: 0x0  nop
    ctx->pc = 0x1cd3e0u;
    // NOP
    // 0x1cd3e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cd3e4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1cd3e8: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x1cd3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cd3ec: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1cd3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd3f0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1cd3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd3f4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1cd3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1cd3f8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1cd3f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cd3fc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1cd3fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cd400: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1cd400u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cd404: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1cd404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1cd408: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1cd408u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cd40c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1cd40cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1cd410:
    // 0x1cd410: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1cd410u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd414: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1cd414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cd418: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1cd418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd41c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1cd41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd420: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1cd420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd424: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1cd424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1cd428: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1cd428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1cd42c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1cd42cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1cd430: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1cd430u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd434: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1cd434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cd438: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cd438u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cd43c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cd43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cd440: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1cd440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cd444: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1cd444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd448: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1cd448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cd44c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1cd44cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd450: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1cd450u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd454: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cd454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cd458: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1cd458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cd45c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD45Cu;
    {
        const bool branch_taken_0x1cd45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD45Cu;
        // 0x1cd460: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd45c) {
            ctx->pc = 0x1CD484u;
            goto label_1cd484;
        }
    }
    ctx->pc = 0x1CD464u;
label_1cd464:
    // 0x1cd464: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1cd464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd468: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cd468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd46c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cd46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1cd470: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x1cd470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x1cd474: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1cd474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd478: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd47c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cd47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cd480: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cd480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1cd484:
    // 0x1cd484: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1cd484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1cd488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd48c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd490: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x1cd490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x1cd494: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cd498: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x1cd498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x1cd49c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1cd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd4a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd4a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1cd4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd4a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1cd4a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1cd4ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cd4acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd4b0: 0x0  nop
    ctx->pc = 0x1cd4b0u;
    // NOP
    // 0x1cd4b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD4B4u;
    {
        const bool branch_taken_0x1cd4b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd4b4) {
            ctx->pc = 0x1CD4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD4B4u;
            // 0x1cd4b8: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD4BCu;
            goto label_1cd4bc;
        }
    }
    ctx->pc = 0x1CD4BCu;
label_1cd4bc:
    // 0x1cd4bc: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1cd4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd4c0: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CD4C0u;
    SET_GPR_U32(ctx, 31, 0x1CD4C8u);
    ctx->pc = 0x1CD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4C0u;
    // 0x1cd4c4: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CD4C0u, 0x1CD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4C8u;
label_1cd4c8:
    // 0x1cd4c8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1CD4C8u;
    {
        const bool branch_taken_0x1cd4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4C8u;
        // 0x1cd4cc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4c8) {
            ctx->pc = 0x1CD780u;
            goto label_1cd780;
        }
    }
    ctx->pc = 0x1CD4D0u;
label_1cd4d0:
    // 0x1cd4d0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cd4d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cd4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd4d8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cd4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cd4dc: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x1cd4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1cd4e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cd4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd4e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cd4e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cd4ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4f0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CD4F0u;
    SET_GPR_U32(ctx, 31, 0x1CD4F8u);
    ctx->pc = 0x1CD4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4F0u;
    // 0x1cd4f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CD4F0u, 0x1CD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4F8u;
label_1cd4f8:
    // 0x1cd4f8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1cd4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cd4fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd500: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1cd500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_1cd504:
    // 0x1cd504: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD504u;
    {
        const bool branch_taken_0x1cd504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd504) {
            ctx->pc = 0x1CD528u;
            goto label_1cd528;
        }
    }
    ctx->pc = 0x1CD50Cu;
    // 0x1cd50c: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1cd50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1cd510: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1cd510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1cd514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd518: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x1cd518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd51c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1cd51cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1cd520: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cd520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cd524: 0xe6010100  swc1        $f1, 0x100($s0)
    ctx->pc = 0x1cd524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_1cd528:
    // 0x1cd528: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cd528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cd52c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd530: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cd530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cd534: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cd534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd538: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1cd538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1cd53c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd540: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cd540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cd544: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cd548: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cd548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd54c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD54Cu;
    {
        const bool branch_taken_0x1cd54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD54Cu;
        // 0x1cd550: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd54c) {
            ctx->pc = 0x1CD56Cu;
            goto label_1cd56c;
        }
    }
    ctx->pc = 0x1CD554u;
    // 0x1cd554: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cd554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd558: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1cd558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cd55c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd560: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1cd560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1cd564: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd568: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1cd568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1cd56c:
    // 0x1cd56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd570: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1cd570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1cd574: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cd574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cd578: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cd578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cd57c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd580: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cd580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cd584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd588: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cd588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cd58c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cd590: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cd590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cd594: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1cd594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1cd598: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cd598u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd59c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CD59Cu;
    SET_GPR_U32(ctx, 31, 0x1CD5A4u);
    ctx->pc = 0x1CD5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD59Cu;
    // 0x1cd5a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CD59Cu, 0x1CD5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5A4u;
label_1cd5a4:
    // 0x1cd5a4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CD5A4u;
    {
        const bool branch_taken_0x1cd5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5a4) {
            ctx->pc = 0x1CD5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD5A4u;
            // 0x1cd5a8: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD620u;
            goto label_1cd620;
        }
    }
    ctx->pc = 0x1CD5ACu;
    // 0x1cd5ac: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd5b0: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD5B0u;
    {
        const bool branch_taken_0x1cd5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5B0u;
        // 0x1cd5b4: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5b0) {
            ctx->pc = 0x1CD5CCu;
            goto label_1cd5cc;
        }
    }
    ctx->pc = 0x1CD5B8u;
    // 0x1cd5b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cd5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cd5bc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1cd5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd5c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd5c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cd5c4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cd5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd5c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cd5cc:
    // 0x1cd5cc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cd5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cd5d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cd5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd5d4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cd5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cd5d8: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1cd5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1cd5dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cd5dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cd5e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cd5e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cd5e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5ec: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CD5ECu;
    SET_GPR_U32(ctx, 31, 0x1CD5F4u);
    ctx->pc = 0x1CD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD5ECu;
    // 0x1cd5f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CD5ECu, 0x1CD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5F4u;
label_1cd5f4:
    // 0x1cd5f4: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1cd5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd5f8: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1cd5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1cd5fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd600: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd604: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd60c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CD60Cu;
    SET_GPR_U32(ctx, 31, 0x1CD614u);
    ctx->pc = 0x1CD610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD60Cu;
    // 0x1cd610: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CD60Cu, 0x1CD614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD614u;
label_1cd614:
    // 0x1cd614: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CD614u;
    SET_GPR_U32(ctx, 31, 0x1CD61Cu);
    ctx->pc = 0x1CD618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD614u;
    // 0x1cd618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CD614u, 0x1CD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD61Cu;
label_1cd61c:
    // 0x1cd61c: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cd61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
label_1cd620:
    // 0x1cd620: 0x50800029  beql        $a0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CD620u;
    {
        const bool branch_taken_0x1cd620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd620) {
            ctx->pc = 0x1CD624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD620u;
            // 0x1cd624: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD6C8u;
            goto label_1cd6c8;
        }
    }
    ctx->pc = 0x1CD628u;
    // 0x1cd628: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CD628u;
    SET_GPR_U32(ctx, 31, 0x1CD630u);
    ctx->pc = 0x1CD62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD628u;
    // 0x1cd62c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CD628u, 0x1CD630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD630u;
label_1cd630:
    // 0x1cd630: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1cd630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cd634: 0x240203b9  addiu       $v0, $zero, 0x3B9
    ctx->pc = 0x1cd634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 953));
    // 0x1cd638: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD638u;
    {
        const bool branch_taken_0x1cd638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD638u;
        // 0x1cd63c: 0x286203ba  slti        $v0, $v1, 0x3BA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)954) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd638) {
            ctx->pc = 0x1CD660u;
            goto label_1cd660;
        }
    }
    ctx->pc = 0x1CD640u;
    // 0x1cd640: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD640u;
    {
        const bool branch_taken_0x1cd640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD640u;
        // 0x1cd644: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd640) {
            ctx->pc = 0x1CD654u;
            goto label_1cd654;
        }
    }
    ctx->pc = 0x1CD648u;
    // 0x1cd648: 0x240203ba  addiu       $v0, $zero, 0x3BA
    ctx->pc = 0x1cd648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 954));
    // 0x1cd64c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD64Cu;
    {
        const bool branch_taken_0x1cd64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cd64c) {
            ctx->pc = 0x1CD670u;
            goto label_1cd670;
        }
    }
    ctx->pc = 0x1CD654u;
label_1cd654:
    // 0x1cd654: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1cd654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1cd658: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD658u;
    {
        const bool branch_taken_0x1cd658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD658u;
        // 0x1cd65c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd658) {
            ctx->pc = 0x1CD678u;
            goto label_1cd678;
        }
    }
    ctx->pc = 0x1CD660u;
label_1cd660:
    // 0x1cd660: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cd660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd664: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1cd664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1cd668: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD668u;
    {
        const bool branch_taken_0x1cd668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD668u;
        // 0x1cd66c: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd668) {
            ctx->pc = 0x1CD678u;
            goto label_1cd678;
        }
    }
    ctx->pc = 0x1CD670u;
label_1cd670:
    // 0x1cd670: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1cd670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1cd674: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1cd674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1cd678:
    // 0x1cd678: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1cd678u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd67c: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd680: 0xac45004c  sw          $a1, 0x4C($v0)
    ctx->pc = 0x1cd680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
    // 0x1cd684: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cd684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd688: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CD688u;
    SET_GPR_U32(ctx, 31, 0x1CD690u);
    ctx->pc = 0x1CD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD688u;
    // 0x1cd68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CD688u, 0x1CD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD690u;
label_1cd690:
    // 0x1cd690: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cd690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd694: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1cd694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1cd698: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cd698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cd69c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd6a0: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CD6A0u;
    SET_GPR_U32(ctx, 31, 0x1CD6A8u);
    ctx->pc = 0x1CD6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6A0u;
    // 0x1cd6a4: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CD6A0u, 0x1CD6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6A8u;
label_1cd6a8:
    // 0x1cd6a8: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cd6ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd6b0: 0x26250640  addiu       $a1, $s1, 0x640
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1cd6b4: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1cd6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1cd6b8: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1cd6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd6bc: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CD6BCu;
    SET_GPR_U32(ctx, 31, 0x1CD6C4u);
    ctx->pc = 0x1CD6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6BCu;
    // 0x1cd6c0: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CD6BCu, 0x1CD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6C4u;
label_1cd6c4:
    // 0x1cd6c4: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1cd6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
label_1cd6c8:
    // 0x1cd6c8: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD6C8u;
    {
        const bool branch_taken_0x1cd6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6c8) {
            ctx->pc = 0x1CD6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD6C8u;
            // 0x1cd6cc: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD730u;
            goto label_1cd730;
        }
    }
    ctx->pc = 0x1CD6D0u;
    // 0x1cd6d0: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CD6D0u;
    SET_GPR_U32(ctx, 31, 0x1CD6D8u);
    ctx->pc = 0x1CD6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6D0u;
    // 0x1cd6d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CD6D0u, 0x1CD6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6D8u;
label_1cd6d8:
    // 0x1cd6d8: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1cd6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1cd6dc: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1cd6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1cd6e0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1cd6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cd6e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd6e8: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1cd6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd6ec: 0x8e220658  lw          $v0, 0x658($s1)
    ctx->pc = 0x1cd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1cd6f0: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1cd6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1cd6f4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CD6F4u;
    SET_GPR_U32(ctx, 31, 0x1CD6FCu);
    ctx->pc = 0x1CD6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6F4u;
    // 0x1cd6f8: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CD6F4u, 0x1CD6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6FCu;
label_1cd6fc:
    // 0x1cd6fc: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1cd6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1cd700: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cd704: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd708: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CD708u;
    SET_GPR_U32(ctx, 31, 0x1CD710u);
    ctx->pc = 0x1CD70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD708u;
    // 0x1cd70c: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CD708u, 0x1CD710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD710u;
label_1cd710:
    // 0x1cd710: 0x8e230658  lw          $v1, 0x658($s1)
    ctx->pc = 0x1cd710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    // 0x1cd714: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd718: 0x26250640  addiu       $a1, $s1, 0x640
    ctx->pc = 0x1cd718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1cd71c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1cd71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1cd720: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1cd720u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd724: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CD724u;
    SET_GPR_U32(ctx, 31, 0x1CD72Cu);
    ctx->pc = 0x1CD728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD724u;
    // 0x1cd728: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CD724u, 0x1CD72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD72Cu;
label_1cd72c:
    // 0x1cd72c: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1cd72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1cd730:
    // 0x1cd730: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CD730u;
    SET_GPR_U32(ctx, 31, 0x1CD738u);
    ctx->pc = 0x1CD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD730u;
    // 0x1cd734: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CD730u, 0x1CD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD738u;
label_1cd738:
    // 0x1cd738: 0xc6200660  lwc1        $f0, 0x660($s1)
    ctx->pc = 0x1cd738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd73c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cd73cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd740: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1cd740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1cd744: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cd744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd748: 0x0  nop
    ctx->pc = 0x1cd748u;
    // NOP
    // 0x1cd74c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1CD74Cu;
    {
        const bool branch_taken_0x1cd74c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD74Cu;
        // 0x1cd750: 0xe6200660  swc1        $f0, 0x660($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd74c) {
            ctx->pc = 0x1CD77Cu;
            goto label_1cd77c;
        }
    }
    ctx->pc = 0x1CD754u;
    // 0x1cd754: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CD754u;
    SET_GPR_U32(ctx, 31, 0x1CD75Cu);
    ctx->pc = 0x1CD758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD754u;
    // 0x1cd758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CD754u, 0x1CD75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD75Cu;
label_1cd75c:
    // 0x1cd75c: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1cd75cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cd760: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1cd760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1cd764: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd768: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd76c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd774: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CD774u;
    SET_GPR_U32(ctx, 31, 0x1CD77Cu);
    ctx->pc = 0x1CD778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD774u;
    // 0x1cd778: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CD774u, 0x1CD77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD77Cu;
label_1cd77c:
    // 0x1cd77c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1cd77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1cd780:
    // 0x1cd780: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1cd780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cd784: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1cd784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cd788: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1cd788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cd78c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1cd78cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd790: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1cd790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cd794: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1cd794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cd798: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1cd798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cd79c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1cd79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7A0u;
        // 0x1cd7a4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD7A8u;
}

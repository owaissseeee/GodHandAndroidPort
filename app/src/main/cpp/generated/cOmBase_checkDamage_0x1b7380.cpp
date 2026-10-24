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

// Function: cOmBase_checkDamage
// Address: 0x1b7380 - 0x1b7568
void cOmBase_checkDamage_0x1b7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_checkDamage_0x1b7380");
#endif

    switch (ctx->pc) {
        case 0x1b73d0u: goto label_1b73d0;
        case 0x1b7464u: goto label_1b7464;
        default: break;
    }

    ctx->pc = 0x1b7380u;

    // 0x1b7380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b7384: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b7384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b7388: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b738c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b738cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7390: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b7390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b7394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b739c: 0x9e2205b8  lwu         $v0, 0x5B8($s1)
    ctx->pc = 0x1b739cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1b73a0: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1b73a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1b73a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b73a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b73a8: 0x10500067  beq         $v0, $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1B73A8u;
    {
        const bool branch_taken_0x1b73a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73A8u;
        // 0x1b73ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73a8) {
            ctx->pc = 0x1B7548u;
            goto label_1b7548;
        }
    }
    ctx->pc = 0x1B73B0u;
    // 0x1b73b0: 0x12400066  beqz        $s2, . + 4 + (0x66 << 2)
    ctx->pc = 0x1B73B0u;
    {
        const bool branch_taken_0x1b73b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73B0u;
        // 0x1b73b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73b0) {
            ctx->pc = 0x1B754Cu;
            goto label_1b754c;
        }
    }
    ctx->pc = 0x1B73B8u;
    // 0x1b73b8: 0x9e420060  lwu         $v0, 0x60($s2)
    ctx->pc = 0x1b73b8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1b73bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b73bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b73c0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1B73C0u;
    {
        const bool branch_taken_0x1b73c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C0u;
        // 0x1b73c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73c0) {
            ctx->pc = 0x1B7548u;
            goto label_1b7548;
        }
    }
    ctx->pc = 0x1B73C8u;
    // 0x1b73c8: 0xc06dd5a  jal         func_1B7568
    ctx->pc = 0x1B73C8u;
    SET_GPR_U32(ctx, 31, 0x1B73D0u);
    ctx->pc = 0x1B73CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73C8u;
    // 0x1b73cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7568u, 0x1B73C8u, 0x1B73D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73D0u;
label_1b73d0:
    // 0x1b73d0: 0x9e2205b8  lwu         $v0, 0x5B8($s1)
    ctx->pc = 0x1b73d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1b73d4: 0x212fb  dsra        $v0, $v0, 11
    ctx->pc = 0x1b73d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 11);
    // 0x1b73d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b73d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b73dc: 0x5450000a  bnel        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B73DCu;
    {
        const bool branch_taken_0x1b73dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1b73dc) {
            ctx->pc = 0x1B73E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73DCu;
            // 0x1b73e0: 0x8e50004c  lw          $s0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7408u;
            goto label_1b7408;
        }
    }
    ctx->pc = 0x1B73E4u;
    // 0x1b73e4: 0x9e2305b4  lwu         $v1, 0x5B4($s1)
    ctx->pc = 0x1b73e4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x1b73e8: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x1b73e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x1b73ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b73ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b73f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B73F0u;
    {
        const bool branch_taken_0x1b73f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73f0) {
            ctx->pc = 0x1B73F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73F0u;
            // 0x1b73f4: 0x8e50004c  lw          $s0, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7408u;
            goto label_1b7408;
        }
    }
    ctx->pc = 0x1B73F8u;
    // 0x1b73f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b73f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b73fc: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1B73FCu;
    {
        const bool branch_taken_0x1b73fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b73fc) {
            ctx->pc = 0x1B7400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73FCu;
            // 0x1b7400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B754Cu;
            goto label_1b754c;
        }
    }
    ctx->pc = 0x1B7404u;
    // 0x1b7404: 0x8e50004c  lw          $s0, 0x4C($s2)
    ctx->pc = 0x1b7404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_1b7408:
    // 0x1b7408: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1b740c: 0x9044b010  lbu         $a0, -0x4FF0($v0)
    ctx->pc = 0x1b740cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x1b7410: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1b7410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1b7414: 0x8625054a  lh          $a1, 0x54A($s1)
    ctx->pc = 0x1b7414u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x1b7418: 0x44800b  movn        $s0, $v0, $a0
    ctx->pc = 0x1b7418u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1b741c: 0x86230548  lh          $v1, 0x548($s1)
    ctx->pc = 0x1b741cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x1b7420: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x1b7420u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1b7424: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1b7424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b7428: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7428u;
    {
        const bool branch_taken_0x1b7428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7428u;
        // 0x1b742c: 0x96220548  lhu         $v0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7428) {
            ctx->pc = 0x1B7438u;
            goto label_1b7438;
        }
    }
    ctx->pc = 0x1B7430u;
    // 0x1b7430: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7430u;
    {
        const bool branch_taken_0x1b7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7430u;
        // 0x1b7434: 0xa622054a  sh          $v0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7430) {
            ctx->pc = 0x1B743Cu;
            goto label_1b743c;
        }
    }
    ctx->pc = 0x1B7438u;
label_1b7438:
    // 0x1b7438: 0xa625054a  sh          $a1, 0x54A($s1)
    ctx->pc = 0x1b7438u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 5));
label_1b743c:
    // 0x1b743c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b743cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b7440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7444: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1b7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1b7448: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x1b7448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x1b744c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b744cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7450: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b7450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7454: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b7454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b7458: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1b7458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b745c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1B745Cu;
    SET_GPR_U32(ctx, 31, 0x1B7464u);
    ctx->pc = 0x1B7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B745Cu;
    // 0x1b7460: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1B745Cu, 0x1B7464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7464u;
label_1b7464:
    // 0x1b7464: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1b7464u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1b7468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b746c: 0x0  nop
    ctx->pc = 0x1b746cu;
    // NOP
    // 0x1b7470: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b7470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7474: 0x0  nop
    ctx->pc = 0x1b7474u;
    // NOP
    // 0x1b7478: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1B7478u;
    {
        const bool branch_taken_0x1b7478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7478u;
        // 0x1b747c: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7478) {
            ctx->pc = 0x1B74BCu;
            goto label_1b74bc;
        }
    }
    ctx->pc = 0x1B7480u;
    // 0x1b7480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7484: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7488: 0x0  nop
    ctx->pc = 0x1b7488u;
    // NOP
    // 0x1b748c: 0x0  nop
    ctx->pc = 0x1b748cu;
    // NOP
    // 0x1b7490: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1b7490u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1b7494: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1b7494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7498: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1b7498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b749c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1b749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b74a0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b74a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1b74a4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b74a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b74a8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1b74a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b74ac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1b74acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b74b0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1b74b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1b74b4: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x1b74b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b74b8: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1b74b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1b74bc:
    // 0x1b74bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b74bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b74c0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b74c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b74c4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b74c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b74c8: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B74C8u;
    {
        const bool branch_taken_0x1b74c8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B74CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74C8u;
        // 0x1b74cc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74c8) {
            ctx->pc = 0x1B74E4u;
            goto label_1b74e4;
        }
    }
    ctx->pc = 0x1B74D0u;
    // 0x1b74d0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b74d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b74d4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1b74d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b74d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b74d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b74dc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b74dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b74e0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b74e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b74e4:
    // 0x1b74e4: 0x2a02003d  slti        $v0, $s0, 0x3D
    ctx->pc = 0x1b74e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1b74e8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b74ec: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1b74ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1b74f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1b74f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b74f4: 0x0  nop
    ctx->pc = 0x1b74f4u;
    // NOP
    // 0x1b74f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b74f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b74fc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b74fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7500: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7504: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7508: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b7508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b750c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b750cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b7510: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b7510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b7514: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7518: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b7518u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b751c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7520: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x1b7520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x1b7524: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7524u;
    {
        const bool branch_taken_0x1b7524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7524u;
        // 0x1b7528: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7524) {
            ctx->pc = 0x1B7540u;
            goto label_1b7540;
        }
    }
    ctx->pc = 0x1B752Cu;
    // 0x1b752c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7530: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x1b7530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x1b7534: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b7538: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1b7538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b753c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b753cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b7540:
    // 0x1b7540: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7540u;
    {
        const bool branch_taken_0x1b7540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7540u;
        // 0x1b7544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7540) {
            ctx->pc = 0x1B754Cu;
            goto label_1b754c;
        }
    }
    ctx->pc = 0x1B7548u;
label_1b7548:
    // 0x1b7548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b754c:
    // 0x1b754c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b754cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7550: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b7550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7554: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b7554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b755c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B755Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B755Cu;
        // 0x1b7560: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B755Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7564u;
    // 0x1b7564: 0x0  nop
    ctx->pc = 0x1b7564u;
    // NOP
    ctx->pc = 0x1b7568u;
}

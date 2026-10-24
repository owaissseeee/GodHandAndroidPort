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

// Function: cEma2_startHitCooldown
// Address: 0x2894b8 - 0x289610
void cEma2_startHitCooldown_0x2894b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma2_startHitCooldown_0x2894b8");
#endif

    switch (ctx->pc) {
        case 0x2894d4u: goto label_2894d4;
        case 0x289548u: goto label_289548;
        case 0x2895c8u: goto label_2895c8;
        case 0x2895ecu: goto label_2895ec;
        default: break;
    }

    ctx->pc = 0x2894b8u;

    // 0x2894b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2894b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2894bc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2894bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2894c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2894c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2894c4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2894c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2894c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2894c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2894cc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2894CCu;
    SET_GPR_U32(ctx, 31, 0x2894D4u);
    ctx->pc = 0x2894D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894CCu;
    // 0x2894d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2894CCu, 0x2894D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2894D4u;
label_2894d4:
    // 0x2894d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2894d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2894d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2894d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2894dc: 0xc480054c  lwc1        $f0, 0x54C($a0)
    ctx->pc = 0x2894dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2894e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2894e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2894e4: 0x0  nop
    ctx->pc = 0x2894e4u;
    // NOP
    // 0x2894e8: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x2894E8u;
    {
        const bool branch_taken_0x2894e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2894ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894E8u;
        // 0x2894ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894e8) {
            ctx->pc = 0x2895F8u;
            goto label_2895f8;
        }
    }
    ctx->pc = 0x2894F0u;
    // 0x2894f0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2894f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2894f4: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x2894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x2894f8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2894f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2894fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2894fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x289500: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x289500u;
    {
        const bool branch_taken_0x289500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289500u;
        // 0x289504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289500) {
            ctx->pc = 0x2895F8u;
            goto label_2895f8;
        }
    }
    ctx->pc = 0x289508u;
    // 0x289508: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x289508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x28950c: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x28950Cu;
    {
        const bool branch_taken_0x28950c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x289510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28950Cu;
        // 0x289510: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28950c) {
            ctx->pc = 0x2895F4u;
            goto label_2895f4;
        }
    }
    ctx->pc = 0x289514u;
    // 0x289514: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x289514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289518: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x289518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28951c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x28951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x289520: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x289520u;
    {
        const bool branch_taken_0x289520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x289520) {
            ctx->pc = 0x289540u;
            goto label_289540;
        }
    }
    ctx->pc = 0x289528u;
    // 0x289528: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x289528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28952c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x28952cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x289530: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x289530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289534: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x289534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x289538: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x289538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28953c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x28953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_289540:
    // 0x289540: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x289540u;
    SET_GPR_U32(ctx, 31, 0x289548u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x289540u, 0x289548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289548u;
label_289548:
    // 0x289548: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x289548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x28954c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x28954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x289550: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x289550u;
    {
        const bool branch_taken_0x289550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x289554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289550u;
        // 0x289554: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289550) {
            ctx->pc = 0x289574u;
            goto label_289574;
        }
    }
    ctx->pc = 0x289558u;
    // 0x289558: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x289558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28955c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x28955cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x289560: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x289560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289564: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x289564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x289568: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x289568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28956c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x28956cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x289570: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x289570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289574:
    // 0x289574: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x289574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289578: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x289578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28957c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28957cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289584: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x289584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x289588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28958c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28958cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x289590: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x289590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x289594: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x289594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x289598: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x289598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28959c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28959cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2895a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2895a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895a4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2895a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2895a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2895ac: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2895acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2895b0: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x2895b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2895b4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2895b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2895b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2895b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895bc: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2895bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x2895c0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2895C0u;
    SET_GPR_U32(ctx, 31, 0x2895C8u);
    ctx->pc = 0x2895C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895C0u;
    // 0x2895c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2895C0u, 0x2895C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895C8u;
label_2895c8:
    // 0x2895c8: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2895C8u;
    {
        const bool branch_taken_0x2895c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2895CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895C8u;
        // 0x2895cc: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895c8) {
            ctx->pc = 0x2895F4u;
            goto label_2895f4;
        }
    }
    ctx->pc = 0x2895D0u;
    // 0x2895d0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2895d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2895d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2895d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2895d8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2895d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2895dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2895dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895e0: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x2895e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x2895e4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2895E4u;
    SET_GPR_U32(ctx, 31, 0x2895ECu);
    ctx->pc = 0x2895E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895E4u;
    // 0x2895e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2895E4u, 0x2895ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895ECu;
label_2895ec:
    // 0x2895ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2895ECu;
    {
        const bool branch_taken_0x2895ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895ECu;
        // 0x2895f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895ec) {
            ctx->pc = 0x2895F8u;
            goto label_2895f8;
        }
    }
    ctx->pc = 0x2895F4u;
label_2895f4:
    // 0x2895f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2895f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2895f8:
    // 0x2895f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2895f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2895fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2895fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289600: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x289600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x289604: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x289604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289608: 0x3e00008  jr          $ra
    ctx->pc = 0x289608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289608u;
        // 0x28960c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289610u;
}

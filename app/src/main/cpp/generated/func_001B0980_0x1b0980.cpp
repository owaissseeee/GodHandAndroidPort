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

// Function: func_001B0980
// Address: 0x1b0980 - 0x1b0ae0
void func_001B0980_0x1b0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B0980_0x1b0980");
#endif

    switch (ctx->pc) {
        case 0x1b0a18u: goto label_1b0a18;
        case 0x1b0a3cu: goto label_1b0a3c;
        case 0x1b0a80u: goto label_1b0a80;
        case 0x1b0ab4u: goto label_1b0ab4;
        default: break;
    }

    ctx->pc = 0x1b0980u;

    // 0x1b0980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0988: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b0988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b098c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b098cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0994: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1b0994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1b0998: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0998u;
    {
        const bool branch_taken_0x1b0998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0998u;
        // 0x1b099c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0998) {
            ctx->pc = 0x1B09B0u;
            goto label_1b09b0;
        }
    }
    ctx->pc = 0x1B09A0u;
    // 0x1b09a0: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1B09A0u;
    {
        const bool branch_taken_0x1b09a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09A0u;
        // 0x1b09a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09a0) {
            ctx->pc = 0x1B0ABCu;
            goto label_1b0abc;
        }
    }
    ctx->pc = 0x1B09A8u;
    // 0x1b09a8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1B09A8u;
    {
        const bool branch_taken_0x1b09a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09A8u;
        // 0x1b09ac: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09a8) {
            ctx->pc = 0x1B0AD0u;
            goto label_1b0ad0;
        }
    }
    ctx->pc = 0x1B09B0u;
label_1b09b0:
    // 0x1b09b0: 0x26240610  addiu       $a0, $s1, 0x610
    ctx->pc = 0x1b09b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x1b09b4: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x1b09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x1b09b8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B09B8u;
    {
        const bool branch_taken_0x1b09b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b09b8) {
            ctx->pc = 0x1B09D8u;
            goto label_1b09d8;
        }
    }
    ctx->pc = 0x1B09C0u;
    // 0x1b09c0: 0xc62005c0  lwc1        $f0, 0x5C0($s1)
    ctx->pc = 0x1b09c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b09c4: 0xe6200610  swc1        $f0, 0x610($s1)
    ctx->pc = 0x1b09c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
    // 0x1b09c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b09cc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b09ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b09d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b09d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b09d4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1b09d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1b09d8:
    // 0x1b09d8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1b09d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1b09dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b09dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b09e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b09e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b09e4: 0xda240610  lqc2        $vf4, 0x610($s1)
    ctx->pc = 0x1b09e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1b09e8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b09e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b09ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b09ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b09f0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b09f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b09f4: 0xfa240610  sqc2        $vf4, 0x610($s1)
    ctx->pc = 0x1b09f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1552), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b09f8: 0x9e2205b4  lwu         $v0, 0x5B4($s1)
    ctx->pc = 0x1b09f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x1b09fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0a00: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1b0a00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1b0a04: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x1b0a04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b0a08: 0x5603001e  bnel        $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B0A08u;
    {
        const bool branch_taken_0x1b0a08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0a08) {
            ctx->pc = 0x1B0A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0A08u;
            // 0x1b0a0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0A84u;
            goto label_1b0a84;
        }
    }
    ctx->pc = 0x1B0A10u;
    // 0x1b0a10: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1B0A10u;
    SET_GPR_U32(ctx, 31, 0x1B0A18u);
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1B0A10u, 0x1B0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A18u;
label_1b0a18:
    // 0x1b0a18: 0x0  nop
    ctx->pc = 0x1b0a18u;
    // NOP
    // 0x1b0a1c: 0x0  nop
    ctx->pc = 0x1b0a1cu;
    // NOP
    // 0x1b0a20: 0x460000c4  c1          0xC4
    ctx->pc = 0x1b0a20u;
    ctx->f[3] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1b0a24: 0x46031832  c.eq.s      $f3, $f3
    ctx->pc = 0x1b0a24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0a28: 0x0  nop
    ctx->pc = 0x1b0a28u;
    // NOP
    // 0x1b0a2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0A2Cu;
    {
        const bool branch_taken_0x1b0a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0a2c) {
            ctx->pc = 0x1B0A40u;
            goto label_1b0a40;
        }
    }
    ctx->pc = 0x1B0A34u;
    // 0x1b0a34: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1B0A34u;
    SET_GPR_U32(ctx, 31, 0x1B0A3Cu);
    ctx->pc = 0x1B0A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A34u;
    // 0x1b0a38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1B0A34u, 0x1B0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A3Cu;
label_1b0a3c:
    // 0x1b0a3c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1b0a3cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_1b0a40:
    // 0x1b0a40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b0a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b0a44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b0a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b0a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0a4c: 0xc6210610  lwc1        $f1, 0x610($s1)
    ctx->pc = 0x1b0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0a50: 0xc6220618  lwc1        $f2, 0x618($s1)
    ctx->pc = 0x1b0a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0a54: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1b0a54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1b0a58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b0a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b0a5c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1b0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1b0a60: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b0a60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b0a64: 0xa2300624  sb          $s0, 0x624($s1)
    ctx->pc = 0x1b0a64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1572), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b0a68: 0xe6230614  swc1        $f3, 0x614($s1)
    ctx->pc = 0x1b0a68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
    // 0x1b0a6c: 0xe6210610  swc1        $f1, 0x610($s1)
    ctx->pc = 0x1b0a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
    // 0x1b0a70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0A70u;
    {
        const bool branch_taken_0x1b0a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A70u;
        // 0x1b0a74: 0xe6220618  swc1        $f2, 0x618($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a70) {
            ctx->pc = 0x1B0A80u;
            goto label_1b0a80;
        }
    }
    ctx->pc = 0x1B0A78u;
    // 0x1b0a78: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B0A78u;
    SET_GPR_U32(ctx, 31, 0x1B0A80u);
    ctx->pc = 0x1B0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A78u;
    // 0x1b0a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B0A78u, 0x1B0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A80u;
label_1b0a80:
    // 0x1b0a80: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b0a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0a84:
    // 0x1b0a84: 0xa6200622  sh          $zero, 0x622($s1)
    ctx->pc = 0x1b0a84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1570), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0a88: 0xa2300625  sb          $s0, 0x625($s1)
    ctx->pc = 0x1b0a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1573), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b0a8c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b0a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b0a90: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b0a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b0a94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b0a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0a98: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1b0a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b0a9c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b0a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0aa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0aa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b0aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0aa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b0aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0aac: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B0AACu;
    SET_GPR_U32(ctx, 31, 0x1B0AB4u);
    ctx->pc = 0x1B0AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0AACu;
    // 0x1b0ab0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B0AACu, 0x1B0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0AB4u;
label_1b0ab4:
    // 0x1b0ab4: 0xa23002f6  sb          $s0, 0x2F6($s1)
    ctx->pc = 0x1b0ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b0ab8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b0ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b0abc:
    // 0x1b0abc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b0abcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0ac0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1b0ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0ac4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b0ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0ac8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b0ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0ad0:
    // 0x1b0ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AD4u;
        // 0x1b0ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0ADCu;
    // 0x1b0adc: 0x0  nop
    ctx->pc = 0x1b0adcu;
    // NOP
    ctx->pc = 0x1b0ae0u;
}

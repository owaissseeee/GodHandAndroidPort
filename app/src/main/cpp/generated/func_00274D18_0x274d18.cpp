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

// Function: func_00274D18
// Address: 0x274d18 - 0x274e98
void func_00274D18_0x274d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00274D18_0x274d18");
#endif

    switch (ctx->pc) {
        case 0x274d88u: goto label_274d88;
        case 0x274e28u: goto label_274e28;
        case 0x274e68u: goto label_274e68;
        case 0x274e7cu: goto label_274e7c;
        default: break;
    }

    ctx->pc = 0x274d18u;

    // 0x274d18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x274d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x274d1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x274d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x274d20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x274d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x274d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x274d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x274d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x274d2c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x274d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x274d30: 0x3842020d  xori        $v0, $v0, 0x20D
    ctx->pc = 0x274d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)525);
    // 0x274d34: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x274D34u;
    {
        const bool branch_taken_0x274d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D34u;
        // 0x274d38: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d34) {
            ctx->pc = 0x274E84u;
            goto label_274e84;
        }
    }
    ctx->pc = 0x274D3Cu;
    // 0x274d3c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x274d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x274d40: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x274d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x274d44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x274d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x274d48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274D48u;
    {
        const bool branch_taken_0x274d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D48u;
        // 0x274d4c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d48) {
            ctx->pc = 0x274D5Cu;
            goto label_274d5c;
        }
    }
    ctx->pc = 0x274D50u;
    // 0x274d50: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x274d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x274d54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274D54u;
    {
        const bool branch_taken_0x274d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D54u;
        // 0x274d58: 0x8c50007c  lw          $s0, 0x7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d54) {
            ctx->pc = 0x274D60u;
            goto label_274d60;
        }
    }
    ctx->pc = 0x274D5Cu;
label_274d5c:
    // 0x274d5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x274d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274d60:
    // 0x274d60: 0x12000047  beqz        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x274D60u;
    {
        const bool branch_taken_0x274d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D60u;
        // 0x274d64: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d60) {
            ctx->pc = 0x274E80u;
            goto label_274e80;
        }
    }
    ctx->pc = 0x274D68u;
    // 0x274d68: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x274d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x274d6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x274d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x274d70: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x274D70u;
    {
        const bool branch_taken_0x274d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d70) {
            ctx->pc = 0x274D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274D70u;
            // 0x274d74: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x274E48u;
            goto label_274e48;
        }
    }
    ctx->pc = 0x274D78u;
    // 0x274d78: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x274d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x274d7c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x274d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x274d80: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x274D80u;
    SET_GPR_U32(ctx, 31, 0x274D88u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x274D80u, 0x274D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D88u;
label_274d88:
    // 0x274d88: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x274d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x274d8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x274d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274d90: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274D90u;
    {
        const bool branch_taken_0x274d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D90u;
        // 0x274d94: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d90) {
            ctx->pc = 0x274DB4u;
            goto label_274db4;
        }
    }
    ctx->pc = 0x274D98u;
    // 0x274d98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x274d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274d9c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x274d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x274da0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x274da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274da4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x274da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x274da8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x274da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274dac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x274dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x274db0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x274db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274db4:
    // 0x274db4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x274db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x274db8: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x274db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x274dbc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x274dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x274dc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x274dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274dc4: 0x0  nop
    ctx->pc = 0x274dc4u;
    // NOP
    // 0x274dc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274dcc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x274dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x274dd0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x274dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x274dd4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x274dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x274dd8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x274dd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x274ddc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x274ddcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274de0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x274de0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x274de4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x274de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x274de8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x274de8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274dec: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x274decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x274df0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x274df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274df4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x274df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274df8: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x274df8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x274dfc: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x274dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274e00: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x274e00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x274e04: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x274e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x274e08: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x274e08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x274e0c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x274e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x274e10: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x274e10u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x274e14: 0x0  nop
    ctx->pc = 0x274e14u;
    // NOP
    // 0x274e18: 0x0  nop
    ctx->pc = 0x274e18u;
    // NOP
    // 0x274e1c: 0x460d0344  c1          0xD0344
    ctx->pc = 0x274e1cu;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x274e20: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x274E20u;
    SET_GPR_U32(ctx, 31, 0x274E28u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x274E20u, 0x274E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E28u;
label_274e28:
    // 0x274e28: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x274e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274e2c: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x274e2cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x274e30: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x274e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x274e34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x274e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x274e38: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x274e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x274e3c: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x274e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274e40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274E40u;
    {
        const bool branch_taken_0x274e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E40u;
        // 0x274e44: 0x460e0b82  mul.s       $f14, $f1, $f14 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e40) {
            ctx->pc = 0x274E60u;
            goto label_274e60;
        }
    }
    ctx->pc = 0x274E48u;
label_274e48:
    // 0x274e48: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x274e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x274e4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x274e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x274e50: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x274e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x274e54: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x274e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274e58: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x274e58u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x274e5c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x274e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_274e60:
    // 0x274e60: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x274E60u;
    SET_GPR_U32(ctx, 31, 0x274E68u);
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x274E60u, 0x274E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E68u;
label_274e68:
    // 0x274e68: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x274e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274e6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x274e6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x274e70: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x274e70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x274e74: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x274E74u;
    SET_GPR_U32(ctx, 31, 0x274E7Cu);
    ctx->pc = 0x274E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274E74u;
    // 0x274e78: 0xe6010100  swc1        $f1, 0x100($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x274E74u, 0x274E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E7Cu;
label_274e7c:
    // 0x274e7c: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x274e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_274e80:
    // 0x274e80: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x274e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_274e84:
    // 0x274e84: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x274e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274e88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x274e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x274E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E8Cu;
        // 0x274e90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274E94u;
    // 0x274e94: 0x0  nop
    ctx->pc = 0x274e94u;
    // NOP
    ctx->pc = 0x274e98u;
}

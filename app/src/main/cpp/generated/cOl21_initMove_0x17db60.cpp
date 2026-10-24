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

// Function: cOl21_initMove
// Address: 0x17db60 - 0x17dcb8
void cOl21_initMove_0x17db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl21_initMove_0x17db60");
#endif

    switch (ctx->pc) {
        case 0x17dc14u: goto label_17dc14;
        case 0x17dc74u: goto label_17dc74;
        default: break;
    }

    ctx->pc = 0x17db60u;

    // 0x17db60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17db64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17db64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17db68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17db6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17db6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db70: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x17db70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17db74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17db74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17db7c: 0x26030610  addiu       $v1, $s0, 0x610
    ctx->pc = 0x17db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x17db80: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17db84: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DB84u;
    {
        const bool branch_taken_0x17db84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB84u;
        // 0x17db88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db84) {
            ctx->pc = 0x17DBA4u;
            goto label_17dba4;
        }
    }
    ctx->pc = 0x17DB8Cu;
    // 0x17db8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17db90: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x17db90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x17db94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17db98: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x17db98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17db9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dba0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x17dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_17dba4:
    // 0x17dba4: 0x26020620  addiu       $v0, $s0, 0x620
    ctx->pc = 0x17dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x17dba8: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17DBA8u;
    {
        const bool branch_taken_0x17dba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x17dba8) {
            ctx->pc = 0x17DBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DBA8u;
            // 0x17dbac: 0x26020630  addiu       $v0, $s0, 0x630 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DBCCu;
            goto label_17dbcc;
        }
    }
    ctx->pc = 0x17DBB0u;
    // 0x17dbb0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x17dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dbb4: 0xe6000620  swc1        $f0, 0x620($s0)
    ctx->pc = 0x17dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x17dbb8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x17dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dbbc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17dbbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17dbc0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x17dbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dbc4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17dbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17dbc8: 0x26020630  addiu       $v0, $s0, 0x630
    ctx->pc = 0x17dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
label_17dbcc:
    // 0x17dbcc: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DBCCu;
    {
        const bool branch_taken_0x17dbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x17dbcc) {
            ctx->pc = 0x17DBECu;
            goto label_17dbec;
        }
    }
    ctx->pc = 0x17DBD4u;
    // 0x17dbd4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x17dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dbd8: 0xe6000630  swc1        $f0, 0x630($s0)
    ctx->pc = 0x17dbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x17dbdc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x17dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dbe0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17dbe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17dbe4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x17dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dbe8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17dbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17dbec:
    // 0x17dbec: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x17dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17dbf0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x17dbf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17dbf4: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x17dbf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17dbf8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17dbf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17dbfc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17dbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17dc00: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x17dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17dc04: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17dc04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17dc08: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x17dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17dc0c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x17DC0Cu;
    SET_GPR_U32(ctx, 31, 0x17DC14u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x17DC0Cu, 0x17DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC14u;
label_17dc14:
    // 0x17dc14: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17dc18: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17dc18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17dc1c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x17dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17dc20: 0x0  nop
    ctx->pc = 0x17dc20u;
    // NOP
    // 0x17dc24: 0x0  nop
    ctx->pc = 0x17dc24u;
    // NOP
    // 0x17dc28: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x17dc28u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[20]);
    // 0x17dc2c: 0xae000644  sw          $zero, 0x644($s0)
    ctx->pc = 0x17dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 0));
    // 0x17dc30: 0x0  nop
    ctx->pc = 0x17dc30u;
    // NOP
    // 0x17dc34: 0x0  nop
    ctx->pc = 0x17dc34u;
    // NOP
    // 0x17dc38: 0x461418c3  div.s       $f3, $f3, $f20
    ctx->pc = 0x17dc38u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[20]);
    // 0x17dc3c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17dc40: 0xe6020640  swc1        $f2, 0x640($s0)
    ctx->pc = 0x17dc40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x17dc44: 0xe6030648  swc1        $f3, 0x648($s0)
    ctx->pc = 0x17dc44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1608), bits); }
    // 0x17dc48: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x17dc48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17dc4c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x17dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dc50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17dc50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17dc54: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17dc54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17dc58: 0xc6020648  lwc1        $f2, 0x648($s0)
    ctx->pc = 0x17dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17dc5c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x17dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dc60: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x17dc60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17dc64: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17dc68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17dc68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17dc6c: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x17DC6Cu;
    SET_GPR_U32(ctx, 31, 0x17DC74u);
    ctx->pc = 0x17DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC6Cu;
    // 0x17dc70: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x17DC6Cu, 0x17DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC74u;
label_17dc74:
    // 0x17dc74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17dc78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17dc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17dc7c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17DC7Cu;
    {
        const bool branch_taken_0x17dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc7c) {
            ctx->pc = 0x17DC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DC7Cu;
            // 0x17dc80: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DCA0u;
            goto label_17dca0;
        }
    }
    ctx->pc = 0x17DC84u;
    // 0x17dc84: 0xc6000640  lwc1        $f0, 0x640($s0)
    ctx->pc = 0x17dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dc88: 0xc6010648  lwc1        $f1, 0x648($s0)
    ctx->pc = 0x17dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17dc8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17dc8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17dc90: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x17dc90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x17dc94: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x17dc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x17dc98: 0xe6010648  swc1        $f1, 0x648($s0)
    ctx->pc = 0x17dc98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1608), bits); }
    // 0x17dc9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17dc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17dca0:
    // 0x17dca0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17dca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dca4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17dca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dca8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x17dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17dcac: 0x3e00008  jr          $ra
    ctx->pc = 0x17DCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCACu;
        // 0x17dcb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DCB4u;
    // 0x17dcb4: 0x0  nop
    ctx->pc = 0x17dcb4u;
    // NOP
    ctx->pc = 0x17dcb8u;
}

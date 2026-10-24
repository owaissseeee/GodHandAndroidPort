#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: MoveFlag__45_GLOBAL_$N$D__GodHand_Prog_st2_r203.cppEpcaaav
// Address: 0x7996a0 - 0x799980
void MoveFlag__45_GLOBAL__N_D__GodHand_Prog_st2_r203_cppEpcaaav_0x7996a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveFlag__45_GLOBAL__N_D__GodHand_Prog_st2_r203_cppEpcaaav_0x7996a0");
#endif

    switch (ctx->pc) {
        case 0x7996f0u: goto label_7996f0;
        case 0x799720u: goto label_799720;
        case 0x7997e0u: goto label_7997e0;
        case 0x799808u: goto label_799808;
        case 0x799858u: goto label_799858;
        case 0x799894u: goto label_799894;
        case 0x7998c8u: goto label_7998c8;
        case 0x799924u: goto label_799924;
        case 0x799948u: goto label_799948;
        default: break;
    }

    ctx->pc = 0x7996a0u;

    // 0x7996a0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7996a4: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x7996a8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7996ac: 0x80449c20  lb          $a0, -0x63E0($v0)
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x799C20u));
    // 0x7996b0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7996b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x7996b4: 0x24469c20  addiu       $a2, $v0, -0x63E0
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941728));
    // 0x7996b8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7996b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x7996bc: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7996c0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7996c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7996c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7996c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7996cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7996ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7996d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7996d4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7996d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7996d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x7996d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x7996dc: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x7996dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x7996e0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x7996e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x7996e4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x7996E4u;
    {
        const bool branch_taken_0x7996e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e4) {
            ctx->pc = 0x799718u;
            goto label_799718;
        }
    }
    ctx->pc = 0x7996ECu;
    // 0x7996ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7996f0:
    // 0x7996f0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7996f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7996f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7996fc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799700: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799704: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799704u;
    {
        const bool branch_taken_0x799704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799704) {
            ctx->pc = 0x799718u;
            goto label_799718;
        }
    }
    ctx->pc = 0x79970Cu;
    // 0x79970c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799710: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799710u;
    {
        const bool branch_taken_0x799710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799710) {
            ctx->pc = 0x799714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799710u;
            // 0x799714: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996f0;
        }
    }
    ctx->pc = 0x799718u;
label_799718:
    // 0x799718: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799718u;
    SET_GPR_U32(ctx, 31, 0x799720u);
    ctx->pc = 0x79971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799718u;
    // 0x79971c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799718u, 0x799720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799724: 0x1260008a  beqz        $s3, . + 4 + (0x8A << 2)
    ctx->pc = 0x799724u;
    {
        const bool branch_taken_0x799724 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x799728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799724u;
        // 0x799728: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799724) {
            ctx->pc = 0x799950u;
            goto label_799950;
        }
    }
    ctx->pc = 0x79972Cu;
    // 0x79972c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79972cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799730: 0x8e839d00  lw          $v1, -0x6300($s4)
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x799734: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x799734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799738: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x799738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79973c: 0x0  nop
    ctx->pc = 0x79973cu;
    // NOP
    // 0x799740: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x799740u;
    {
        const bool branch_taken_0x799740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x799740) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x799748u;
    // 0x799748: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x799748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79974c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799750: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x799750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799754: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799758: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x79975c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79975cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799760: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799764: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x799768: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79976c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x79976cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x799770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799774: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799778: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x79977c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79977cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799780: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x799784: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799788: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79978c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79978cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x799790: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x799790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799794: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x799794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799798: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x799798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x79979c: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x79979cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x7997a0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x7997a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7997a4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x7997a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997a8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x7997a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7997ac: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x7997acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x7997b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x7997b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x7997b4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x7997b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7997b8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x7997b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7997bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7997c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7997c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997c4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7997c8: 0x26710100  addiu       $s1, $s3, 0x100
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x7997cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7997ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7997d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d8: 0xc05420c  jal         func_150830
    ctx->pc = 0x7997D8u;
    SET_GPR_U32(ctx, 31, 0x7997E0u);
    ctx->pc = 0x7997DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D8u;
    // 0x7997dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x7997D8u, 0x7997E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E0u;
label_7997e0:
    // 0x7997e0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x7997e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x7997e4: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7997e8: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x7997e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x7997ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f0: 0xe6550008  swc1        $f21, 0x8($s2)
    ctx->pc = 0x7997f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x7997f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7997f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f8: 0xe655000c  swc1        $f21, 0xC($s2)
    ctx->pc = 0x7997f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x7997fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799800: 0xc05420c  jal         func_150830
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799800u;
    // 0x799804: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x79980c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79980cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799810: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799814: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799814u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799818: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x799818u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79981c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79981cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799820: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799824: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x799824u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799828: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x799828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79982c: 0x8e829d00  lw          $v0, -0x6300($s4)
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x799830: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x799834: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799838: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79983c: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x79983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799840: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x799844: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79984c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x79984cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x799850: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x799850u;
    SET_GPR_U32(ctx, 31, 0x799858u);
    ctx->pc = 0x799854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799850u;
    // 0x799854: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x799850u, 0x799858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x8e829d00  lw          $v0, -0x6300($s4)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x79985c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x79985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799860: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x799860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x799864: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x799864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799868: 0x0  nop
    ctx->pc = 0x799868u;
    // NOP
    // 0x79986c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x79986Cu;
    {
        const bool branch_taken_0x79986c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79986c) {
            ctx->pc = 0x799870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79986Cu;
            // 0x799870: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799874u;
            goto label_799874;
        }
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x799874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x799878: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79987c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79987cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799880: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x799880u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x799884: 0x26641ae0  addiu       $a0, $s3, 0x1AE0
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6880));
    // 0x799888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79988c: 0xc0ab886  jal         func_2AE218
    ctx->pc = 0x79988Cu;
    SET_GPR_U32(ctx, 31, 0x799894u);
    ctx->pc = 0x799890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79988Cu;
    // 0x799890: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE218u, 0x79988Cu, 0x799894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799894u;
label_799894:
    // 0x799894: 0x8e829d00  lw          $v0, -0x6300($s4)
    ctx->pc = 0x799894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x799898: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x799898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79989c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7998a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7998a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7998a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x7998a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x7998a8: 0x8e839d00  lw          $v1, -0x6300($s4)
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x7998ac: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x7998acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7998b0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x7998b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7998b4: 0x0  nop
    ctx->pc = 0x7998b4u;
    // NOP
    // 0x7998b8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x7998B8u;
    {
        const bool branch_taken_0x7998b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B8u;
        // 0x7998bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998b8) {
            ctx->pc = 0x799950u;
            goto label_799950;
        }
    }
    ctx->pc = 0x7998C0u;
    // 0x7998c0: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x7998C0u;
    SET_GPR_U32(ctx, 31, 0x7998C8u);
    ctx->pc = 0x7998C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C0u;
    // 0x7998c4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x7998C0u, 0x7998C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x8e829d00  lw          $v0, -0x6300($s4)
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x7998cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x7998CCu;
    {
        const bool branch_taken_0x7998cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998cc) {
            ctx->pc = 0x799950u;
            goto label_799950;
        }
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x7998d8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x7998d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x7998dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7998dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7998e0: 0x0  nop
    ctx->pc = 0x7998e0u;
    // NOP
    // 0x7998e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x7998e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7998e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x7998e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x7998ec: 0x8e829d00  lw          $v0, -0x6300($s4)
    ctx->pc = 0x7998ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x7998f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x7998f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7998f4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x7998f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7998f8: 0x0  nop
    ctx->pc = 0x7998f8u;
    // NOP
    // 0x7998fc: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x7998FCu;
    {
        const bool branch_taken_0x7998fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998fc) {
            ctx->pc = 0x799954u;
            goto label_799954;
        }
    }
    ctx->pc = 0x799904u;
    // 0x799904: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x799908: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x79990c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79990cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799910: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x799914: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799918: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79991c: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79991Cu;
    SET_GPR_U32(ctx, 31, 0x799924u);
    ctx->pc = 0x799920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79991Cu;
    // 0x799920: 0xe4540004  swc1        $f20, 0x4($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79991Cu, 0x799924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799924u;
label_799924:
    // 0x799924: 0x8e829d00  lw          $v0, -0x6300($s4)
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x799928: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79992c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79992cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799930: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799934: 0x3c013ea3  lui         $at, 0x3EA3
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16035 << 16));
    // 0x799938: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79993c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79993cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799940: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799940u;
    SET_GPR_U32(ctx, 31, 0x799948u);
    ctx->pc = 0x799944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799940u;
    // 0x799944: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799940u, 0x799948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799948u;
label_799948:
    // 0x799948: 0x8e829d00  lw          $v0, -0x6300($s4)
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941952)));
    // 0x79994c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x79994cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_799950:
    // 0x799950: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_799954:
    // 0x799954: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799958: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x799958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79995c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x79995cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799960: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799964: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799968: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x799968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79996c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x79996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799970: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x799970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799974: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x799974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799978: 0x3e00008  jr          $ra
    ctx->pc = 0x799978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799978u;
        // 0x79997c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799980u;
}
} // namespace gh_r203

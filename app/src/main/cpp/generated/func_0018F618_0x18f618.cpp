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

// Function: func_0018F618
// Address: 0x18f618 - 0x18f858
void func_0018F618_0x18f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018F618_0x18f618");
#endif

    switch (ctx->pc) {
        case 0x18f678u: goto label_18f678;
        case 0x18f6a8u: goto label_18f6a8;
        case 0x18f75cu: goto label_18f75c;
        case 0x18f770u: goto label_18f770;
        case 0x18f7bcu: goto label_18f7bc;
        default: break;
    }

    ctx->pc = 0x18f618u;

    // 0x18f618: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18f618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18f61c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18f61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18f620: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18f624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f628: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f62c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x18f62cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18f630: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x18f630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x18f634: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F634u;
    {
        const bool branch_taken_0x18f634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F634u;
        // 0x18f638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f634) {
            ctx->pc = 0x18F64Cu;
            goto label_18f64c;
        }
    }
    ctx->pc = 0x18F63Cu;
    // 0x18f63c: 0x5062005c  beql        $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x18F63Cu;
    {
        const bool branch_taken_0x18f63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f63c) {
            ctx->pc = 0x18F640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F63Cu;
            // 0x18f640: 0xc6000100  lwc1        $f0, 0x100($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F7B0u;
            goto label_18f7b0;
        }
    }
    ctx->pc = 0x18F644u;
    // 0x18f644: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x18F644u;
    {
        const bool branch_taken_0x18f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F644u;
        // 0x18f648: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f644) {
            ctx->pc = 0x18F840u;
            goto label_18f840;
        }
    }
    ctx->pc = 0x18F64Cu;
label_18f64c:
    // 0x18f64c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x18f650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18f650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f654: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x18f654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x18f658: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x18f658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18f65c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18f65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f660: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18f660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f664: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18f664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18f668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f66c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18f66cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f670: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x18F670u;
    SET_GPR_U32(ctx, 31, 0x18F678u);
    ctx->pc = 0x18F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F670u;
    // 0x18f674: 0x26110660  addiu       $s1, $s0, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18F670u, 0x18F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F678u;
label_18f678:
    // 0x18f678: 0x260205c0  addiu       $v0, $s0, 0x5C0
    ctx->pc = 0x18f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x18f67c: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F67Cu;
    {
        const bool branch_taken_0x18f67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f67c) {
            ctx->pc = 0x18F69Cu;
            goto label_18f69c;
        }
    }
    ctx->pc = 0x18F684u;
    // 0x18f684: 0xc60005c0  lwc1        $f0, 0x5C0($s0)
    ctx->pc = 0x18f684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f688: 0xe6000660  swc1        $f0, 0x660($s0)
    ctx->pc = 0x18f688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
    // 0x18f68c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f690: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x18f690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x18f694: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f698: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x18f698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_18f69c:
    // 0x18f69c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x18f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f6a0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x18F6A0u;
    SET_GPR_U32(ctx, 31, 0x18F6A8u);
    ctx->pc = 0x18F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6A0u;
    // 0x18f6a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x18F6A0u, 0x18F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6A8u;
label_18f6a8:
    // 0x18f6a8: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x18f6a8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x18f6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f6b0: 0x0  nop
    ctx->pc = 0x18f6b0u;
    // NOP
    // 0x18f6b4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18f6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f6b8: 0x0  nop
    ctx->pc = 0x18f6b8u;
    // NOP
    // 0x18f6bc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x18F6BCu;
    {
        const bool branch_taken_0x18f6bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6BCu;
        // 0x18f6c0: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6bc) {
            ctx->pc = 0x18F704u;
            goto label_18f704;
        }
    }
    ctx->pc = 0x18F6C4u;
    // 0x18f6c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18f6c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18f6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18f6cc: 0xc6010660  lwc1        $f1, 0x660($s0)
    ctx->pc = 0x18f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f6d0: 0x0  nop
    ctx->pc = 0x18f6d0u;
    // NOP
    // 0x18f6d4: 0x0  nop
    ctx->pc = 0x18f6d4u;
    // NOP
    // 0x18f6d8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x18f6d8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x18f6dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18f6dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18f6e0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x18f6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18f6e4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x18f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f6e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18f6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18f6ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18f6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18f6f0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x18f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f6f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18f6f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18f6f8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x18f6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18f6fc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x18f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f700: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x18f700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_18f704:
    // 0x18f704: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18f704u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f708: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18f708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18f70c: 0x123d0006  beq         $s1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F70Cu;
    {
        const bool branch_taken_0x18f70c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x18F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F70Cu;
        // 0x18f710: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f70c) {
            ctx->pc = 0x18F728u;
            goto label_18f728;
        }
    }
    ctx->pc = 0x18F714u;
    // 0x18f714: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x18f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f718: 0xe6000660  swc1        $f0, 0x660($s0)
    ctx->pc = 0x18f718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
    // 0x18f71c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x18f71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x18f720: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f724: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x18f724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_18f728:
    // 0x18f728: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x18f728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x18f72c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18f72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18f730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f734: 0xda040660  lqc2        $vf4, 0x660($s0)
    ctx->pc = 0x18f734u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x18f738: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18f738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18f73c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18f73cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18f740: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18f740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f744: 0xfa040660  sqc2        $vf4, 0x660($s0)
    ctx->pc = 0x18f744u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18f748: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18f748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18f74c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18f74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18f750: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18f750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18f754: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18F754u;
    SET_GPR_U32(ctx, 31, 0x18F75Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18F754u, 0x18F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F75Cu;
label_18f75c:
    // 0x18f75c: 0xc6010660  lwc1        $f1, 0x660($s0)
    ctx->pc = 0x18f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f760: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18f760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18f764: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18f764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18f768: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18F768u;
    SET_GPR_U32(ctx, 31, 0x18F770u);
    ctx->pc = 0x18F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F768u;
    // 0x18f76c: 0xe6010660  swc1        $f1, 0x660($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18F768u, 0x18F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F770u;
label_18f770:
    // 0x18f770: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18f770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18f774: 0xc6010668  lwc1        $f1, 0x668($s0)
    ctx->pc = 0x18f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f778: 0x3c013cd6  lui         $at, 0x3CD6
    ctx->pc = 0x18f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15574 << 16));
    // 0x18f77c: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x18f77cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x18f780: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18f780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18f784: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18f784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f78c: 0xa6020650  sh          $v0, 0x650($s0)
    ctx->pc = 0x18f78cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1616), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f790: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18f790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18f794: 0xe6020670  swc1        $f2, 0x670($s0)
    ctx->pc = 0x18f794u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1648), bits); }
    // 0x18f798: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x18f798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f79c: 0xa6000652  sh          $zero, 0x652($s0)
    ctx->pc = 0x18f79cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1618), (uint16_t)GPR_U32(ctx, 0));
    // 0x18f7a0: 0xe6010668  swc1        $f1, 0x668($s0)
    ctx->pc = 0x18f7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1640), bits); }
    // 0x18f7a4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18f7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f7a8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x18f7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f7ac: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x18f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f7b0:
    // 0x18f7b0: 0xc60c0670  lwc1        $f12, 0x670($s0)
    ctx->pc = 0x18f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f7b4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x18F7B4u;
    SET_GPR_U32(ctx, 31, 0x18F7BCu);
    ctx->pc = 0x18F7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7B4u;
    // 0x18f7b8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x18F7B4u, 0x18F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7BCu;
label_18f7bc:
    // 0x18f7bc: 0xc6020670  lwc1        $f2, 0x670($s0)
    ctx->pc = 0x18f7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18f7c0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x18f7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x18f7c4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x18f7c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x18f7c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18f7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f7cc: 0x96020650  lhu         $v0, 0x650($s0)
    ctx->pc = 0x18f7ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x18f7d0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x18f7d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18f7d4: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x18f7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x18f7d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18f7dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18f7e0: 0xa6020650  sh          $v0, 0x650($s0)
    ctx->pc = 0x18f7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1616), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f7e4: 0x1c600015  bgtz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18F7E4u;
    {
        const bool branch_taken_0x18f7e4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7E4u;
        // 0x18f7e8: 0xe6020670  swc1        $f2, 0x670($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7e4) {
            ctx->pc = 0x18F83Cu;
            goto label_18f83c;
        }
    }
    ctx->pc = 0x18F7ECu;
    // 0x18f7ec: 0x86020652  lh          $v0, 0x652($s0)
    ctx->pc = 0x18f7ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1618)));
    // 0x18f7f0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x18f7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18f7f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F7F4u;
    {
        const bool branch_taken_0x18f7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7F4u;
        // 0x18f7f8: 0x96030652  lhu         $v1, 0x652($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1618)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7f4) {
            ctx->pc = 0x18F824u;
            goto label_18f824;
        }
    }
    ctx->pc = 0x18F7FCu;
    // 0x18f7fc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x18f7fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x18f800: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x18f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18f804: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18f804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f808: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18f808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f80c: 0xa6020652  sh          $v0, 0x652($s0)
    ctx->pc = 0x18f80cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1618), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f810: 0xe6000670  swc1        $f0, 0x670($s0)
    ctx->pc = 0x18f810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1648), bits); }
    // 0x18f814: 0xa6030650  sh          $v1, 0x650($s0)
    ctx->pc = 0x18f814u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1616), (uint16_t)GPR_U32(ctx, 3));
    // 0x18f818: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x18f818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x18f81c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18F81Cu;
    {
        const bool branch_taken_0x18f81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F81Cu;
        // 0x18f820: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f81c) {
            ctx->pc = 0x18F838u;
            goto label_18f838;
        }
    }
    ctx->pc = 0x18F824u;
label_18f824:
    // 0x18f824: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x18f824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f828: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x18f828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x18f82c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x18f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x18f830: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x18f830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f834: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18f834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_18f838:
    // 0x18f838: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18f838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_18f83c:
    // 0x18f83c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18f83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18f840:
    // 0x18f840: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18f840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f848: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x18f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18f84c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F84Cu;
        // 0x18f850: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F854u;
    // 0x18f854: 0x0  nop
    ctx->pc = 0x18f854u;
    // NOP
    ctx->pc = 0x18f858u;
}

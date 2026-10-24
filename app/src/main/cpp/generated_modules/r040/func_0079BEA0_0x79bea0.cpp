#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079BEA0
// Address: 0x79bea0 - 0x79c030
void func_0079BEA0_0x79bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BEA0_0x79bea0");
#endif

    switch (ctx->pc) {
        case 0x79bef0u: goto label_79bef0;
        case 0x79bf00u: goto label_79bf00;
        case 0x79bf3cu: goto label_79bf3c;
        case 0x79bf68u: goto label_79bf68;
        case 0x79bf78u: goto label_79bf78;
        case 0x79bf80u: goto label_79bf80;
        case 0x79bfbcu: goto label_79bfbc;
        case 0x79bfd0u: goto label_79bfd0;
        case 0x79bfe0u: goto label_79bfe0;
        case 0x79bfecu: goto label_79bfec;
        case 0x79bff8u: goto label_79bff8;
        default: break;
    }

    ctx->pc = 0x79bea0u;

    // 0x79bea0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79bea4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79bea8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79beac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x79beacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79beb0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79beb4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x79beb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79beb8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79bebc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79bebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79bec0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79bec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79bec4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x79bec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79becc: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x79beccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x79bed0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x79bed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x79bed4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bed8: 0x1a60001b  blez        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x79BED8u;
    {
        const bool branch_taken_0x79bed8 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BED8u;
        // 0x79bedc: 0x3c160058  lui         $s6, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bed8) {
            ctx->pc = 0x79BF48u;
            goto label_79bf48;
        }
    }
    ctx->pc = 0x79BEE0u;
    // 0x79bee0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x79bee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bee4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79bee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79bee8: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x79bee8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x79beec: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x79beecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79bef0:
    // 0x79bef0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x79bef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79bef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bef8: 0xc0a5544  jal         func_295510
    ctx->pc = 0x79BEF8u;
    SET_GPR_U32(ctx, 31, 0x79BF00u);
    ctx->pc = 0x79BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEF8u;
    // 0x79befc: 0x26856ab0  addiu       $a1, $s4, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295510u, 0x79BEF8u, 0x79BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF00u;
label_79bf00:
    // 0x79bf00: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BF00u;
    {
        const bool branch_taken_0x79bf00 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x79BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF00u;
        // 0x79bf04: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf00) {
            ctx->pc = 0x79BF1Cu;
            goto label_79bf1c;
        }
    }
    ctx->pc = 0x79BF08u;
    // 0x79bf08: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79bf0c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x79bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79bf10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79bf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79bf14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79bf14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79bf18: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79bf18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79bf1c:
    // 0x79bf1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79bf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79bf20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79bf20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79bf24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bf28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bf2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79bf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bf30: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x79bf30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bf34: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x79BF34u;
    SET_GPR_U32(ctx, 31, 0x79BF3Cu);
    ctx->pc = 0x79BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF34u;
    // 0x79bf38: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x79BF34u, 0x79BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF3Cu;
label_79bf3c:
    // 0x79bf3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79bf3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79bf40: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x79BF40u;
    {
        const bool branch_taken_0x79bf40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF40u;
        // 0x79bf44: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf40) {
            ctx->pc = 0x79BEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bef0;
        }
    }
    ctx->pc = 0x79BF48u;
label_79bf48:
    // 0x79bf48: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79bf4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79bf4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79bf50: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79bf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x79bf54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79bf54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79bf58: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x79bf58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79bf5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79BF5Cu;
    {
        const bool branch_taken_0x79bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF5Cu;
        // 0x79bf60: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf5c) {
            ctx->pc = 0x79BF78u;
            goto label_79bf78;
        }
    }
    ctx->pc = 0x79BF64u;
    // 0x79bf64: 0x0  nop
    ctx->pc = 0x79bf64u;
    // NOP
label_79bf68:
    // 0x79bf68: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79bf6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bf70: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BF70u;
    SET_GPR_U32(ctx, 31, 0x79BF78u);
    ctx->pc = 0x79BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF70u;
    // 0x79bf74: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BF70u, 0x79BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF78u;
label_79bf78:
    // 0x79bf78: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x79BF78u;
    SET_GPR_U32(ctx, 31, 0x79BF80u);
    ctx->pc = 0x79BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF78u;
    // 0x79bf7c: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x79BF78u, 0x79BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF80u;
label_79bf80:
    // 0x79bf80: 0xc6210574  lwc1        $f1, 0x574($s1)
    ctx->pc = 0x79bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79bf84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79bf84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x79bf88: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x79bf88u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x79bf8c: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x79bf8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79bf90: 0x0  nop
    ctx->pc = 0x79bf90u;
    // NOP
    // 0x79bf94: 0x4500fff4  bc1f        . + 4 + (-0xC << 2)
    ctx->pc = 0x79BF94u;
    {
        const bool branch_taken_0x79bf94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF94u;
        // 0x79bf98: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf94) {
            ctx->pc = 0x79BF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf68;
        }
    }
    ctx->pc = 0x79BF9Cu;
    // 0x79bf9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79bfa0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79bfa4: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x79bfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x79bfa8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79bfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bfac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79bfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bfb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bfb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bfb4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79BFB4u;
    SET_GPR_U32(ctx, 31, 0x79BFBCu);
    ctx->pc = 0x79BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFB4u;
    // 0x79bfb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79BFB4u, 0x79BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFBCu;
label_79bfbc:
    // 0x79bfbc: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x79BFBCu;
    {
        const bool branch_taken_0x79bfbc = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFBCu;
        // 0x79bfc0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfbc) {
            ctx->pc = 0x79C000u;
            goto label_79c000;
        }
    }
    ctx->pc = 0x79BFC4u;
    // 0x79bfc4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x79bfc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bfc8: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x79bfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x79bfcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79bfd0:
    // 0x79bfd0: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x79bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x79bfd4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79bfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79bfd8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79BFD8u;
    SET_GPR_U32(ctx, 31, 0x79BFE0u);
    ctx->pc = 0x79BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFD8u;
    // 0x79bfdc: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79BFD8u, 0x79BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFE0u;
label_79bfe0:
    // 0x79bfe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79bfe4: 0xc0a588c  jal         func_296230
    ctx->pc = 0x79BFE4u;
    SET_GPR_U32(ctx, 31, 0x79BFECu);
    ctx->pc = 0x79BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFE4u;
    // 0x79bfe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79BFE4u, 0x79BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFECu;
label_79bfec:
    // 0x79bfec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79bfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79bff0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79BFF0u;
    SET_GPR_U32(ctx, 31, 0x79BFF8u);
    ctx->pc = 0x79BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFF0u;
    // 0x79bff4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79BFF0u, 0x79BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFF8u;
label_79bff8:
    // 0x79bff8: 0x5620fff5  bnel        $s1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x79BFF8u;
    {
        const bool branch_taken_0x79bff8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bff8) {
            ctx->pc = 0x79BFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BFF8u;
            // 0x79bffc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bfd0;
        }
    }
    ctx->pc = 0x79C000u;
label_79c000:
    // 0x79c000: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79c000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79c004: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79c004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79c008: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79c008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79c00c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79c00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79c010: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79c010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c014: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79c014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c018: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x79c018u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c01c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79c01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c020: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x79c020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79c024: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x79c024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79c028: 0x3e00008  jr          $ra
    ctx->pc = 0x79C028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C028u;
        // 0x79c02c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C030u;
}
} // namespace gh_r040

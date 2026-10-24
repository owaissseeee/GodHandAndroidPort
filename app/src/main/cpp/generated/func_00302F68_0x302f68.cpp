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

// Function: func_00302F68
// Address: 0x302f68 - 0x3033a8
void func_00302F68_0x302f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00302F68_0x302f68");
#endif

    switch (ctx->pc) {
        case 0x303074u: goto label_303074;
        case 0x3030dcu: goto label_3030dc;
        case 0x3030e8u: goto label_3030e8;
        case 0x3030f8u: goto label_3030f8;
        case 0x30312cu: goto label_30312c;
        case 0x303140u: goto label_303140;
        case 0x3031a0u: goto label_3031a0;
        case 0x3031e8u: goto label_3031e8;
        case 0x3031f8u: goto label_3031f8;
        case 0x303288u: goto label_303288;
        case 0x303298u: goto label_303298;
        case 0x303338u: goto label_303338;
        case 0x303348u: goto label_303348;
        case 0x303358u: goto label_303358;
        case 0x30337cu: goto label_30337c;
        default: break;
    }

    ctx->pc = 0x302f68u;

    // 0x302f68: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x302f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x302f6c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x302f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x302f70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x302f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f74: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x302f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x302f78: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x302f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x302f7c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x302f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x302f80: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x302f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x302f84: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x302f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x302f88: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x302f88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x302f8c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x302f8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x302f90: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x302f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x302f94: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x302f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x302f98: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x302f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x302f9c: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x302f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x302fa0: 0x8c4301a0  lw          $v1, 0x1A0($v0)
    ctx->pc = 0x302fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x302fa4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x302FA4u;
    {
        const bool branch_taken_0x302fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302fa4) {
            ctx->pc = 0x302FDCu;
            goto label_302fdc;
        }
    }
    ctx->pc = 0x302FACu;
    // 0x302fac: 0x86420186  lh          $v0, 0x186($s2)
    ctx->pc = 0x302facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
    // 0x302fb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x302fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x302fb4: 0x0  nop
    ctx->pc = 0x302fb4u;
    // NOP
    // 0x302fb8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x302fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x302fbc: 0xc6400180  lwc1        $f0, 0x180($s2)
    ctx->pc = 0x302fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302fc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x302fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302fc4: 0x0  nop
    ctx->pc = 0x302fc4u;
    // NOP
    // 0x302fc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x302fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x302fcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x302fccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x302fd0: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x302fd0u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x302fd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x302FD4u;
    {
        const bool branch_taken_0x302fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FD4u;
        // 0x302fd8: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302fd4) {
            ctx->pc = 0x302FE0u;
            goto label_302fe0;
        }
    }
    ctx->pc = 0x302FDCu;
label_302fdc:
    // 0x302fdc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x302fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_302fe0:
    // 0x302fe0: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x302fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302fe4: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x302fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x302fe8: 0xc44001d0  lwc1        $f0, 0x1D0($v0)
    ctx->pc = 0x302fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302fec: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x302fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302ff0: 0x0  nop
    ctx->pc = 0x302ff0u;
    // NOP
    // 0x302ff4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x302FF4u;
    {
        const bool branch_taken_0x302ff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302FF4u;
        // 0x302ff8: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ff4) {
            ctx->pc = 0x30308Cu;
            goto label_30308c;
        }
    }
    ctx->pc = 0x302FFCu;
    // 0x302ffc: 0xc44001e0  lwc1        $f0, 0x1E0($v0)
    ctx->pc = 0x302ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303000: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x303000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303004: 0x0  nop
    ctx->pc = 0x303004u;
    // NOP
    // 0x303008: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x303008u;
    {
        const bool branch_taken_0x303008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303008u;
        // 0x30300c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303008) {
            ctx->pc = 0x30308Cu;
            goto label_30308c;
        }
    }
    ctx->pc = 0x303010u;
    // 0x303010: 0xc642014c  lwc1        $f2, 0x14C($s2)
    ctx->pc = 0x303010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303014: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x303014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30301c: 0xc6400154  lwc1        $f0, 0x154($s2)
    ctx->pc = 0x30301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303020: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x303020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303024: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303028: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x303028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30302c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x30302cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x303030: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x303030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x303034: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x303034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x303038: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x303038u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x30303c: 0xc44201ec  lwc1        $f2, 0x1EC($v0)
    ctx->pc = 0x30303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303040: 0xc44001e4  lwc1        $f0, 0x1E4($v0)
    ctx->pc = 0x303040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303044: 0xc44101e8  lwc1        $f1, 0x1E8($v0)
    ctx->pc = 0x303044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303048: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x303048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30304c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x30304cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x303050: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x303050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x303054: 0xe663000c  swc1        $f3, 0xC($s3)
    ctx->pc = 0x303054u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x303058: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x303058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30305c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x30305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303060: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x303060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303064: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x303064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x303068: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x303068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x30306c: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x30306Cu;
    SET_GPR_U32(ctx, 31, 0x303074u);
    ctx->pc = 0x303070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30306Cu;
    // 0x303070: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x30306Cu, 0x303074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303074u;
label_303074:
    // 0x303074: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x303074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303078: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x303078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30307c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x30307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303080: 0xe640014c  swc1        $f0, 0x14C($s2)
    ctx->pc = 0x303080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 332), bits); }
    // 0x303084: 0xe6410150  swc1        $f1, 0x150($s2)
    ctx->pc = 0x303084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 336), bits); }
    // 0x303088: 0xe6420154  swc1        $f2, 0x154($s2)
    ctx->pc = 0x303088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
label_30308c:
    // 0x30308c: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x30308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x303090: 0xc44001f0  lwc1        $f0, 0x1F0($v0)
    ctx->pc = 0x303090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303094: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x303094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303098: 0x0  nop
    ctx->pc = 0x303098u;
    // NOP
    // 0x30309c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x30309Cu;
    {
        const bool branch_taken_0x30309c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3030A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30309Cu;
        // 0x3030a0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30309c) {
            ctx->pc = 0x3030D4u;
            goto label_3030d4;
        }
    }
    ctx->pc = 0x3030A4u;
    // 0x3030a4: 0xc44101f4  lwc1        $f1, 0x1F4($v0)
    ctx->pc = 0x3030a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3030a8: 0xc640014c  lwc1        $f0, 0x14C($s2)
    ctx->pc = 0x3030a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3030ac: 0xc6420150  lwc1        $f2, 0x150($s2)
    ctx->pc = 0x3030acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3030b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3030b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3030b4: 0xc6430154  lwc1        $f3, 0x154($s2)
    ctx->pc = 0x3030b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3030b8: 0xe640014c  swc1        $f0, 0x14C($s2)
    ctx->pc = 0x3030b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 332), bits); }
    // 0x3030bc: 0xc44101f8  lwc1        $f1, 0x1F8($v0)
    ctx->pc = 0x3030bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3030c0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3030c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3030c4: 0xe6420150  swc1        $f2, 0x150($s2)
    ctx->pc = 0x3030c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 336), bits); }
    // 0x3030c8: 0xc44001fc  lwc1        $f0, 0x1FC($v0)
    ctx->pc = 0x3030c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3030cc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3030ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3030d0: 0xe6430154  swc1        $f3, 0x154($s2)
    ctx->pc = 0x3030d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
label_3030d4:
    // 0x3030d4: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x3030D4u;
    SET_GPR_U32(ctx, 31, 0x3030DCu);
    ctx->pc = 0x3030D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030D4u;
    // 0x3030d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x3030D4u, 0x3030DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030DCu;
label_3030dc:
    // 0x3030dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3030dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030e0: 0xc051d4a  jal         func_147528
    ctx->pc = 0x3030E0u;
    SET_GPR_U32(ctx, 31, 0x3030E8u);
    ctx->pc = 0x3030E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030E0u;
    // 0x3030e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x3030E0u, 0x3030E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030E8u;
label_3030e8:
    // 0x3030e8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x3030e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3030ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3030ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030f0: 0xc051f10  jal         func_147C40
    ctx->pc = 0x3030F0u;
    SET_GPR_U32(ctx, 31, 0x3030F8u);
    ctx->pc = 0x3030F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030F0u;
    // 0x3030f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x3030F0u, 0x3030F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030F8u;
label_3030f8:
    // 0x3030f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3030f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3030fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3030fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x303100: 0xc642014c  lwc1        $f2, 0x14C($s2)
    ctx->pc = 0x303100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303108: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x303108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30310c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30310cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303110: 0xc6400154  lwc1        $f0, 0x154($s2)
    ctx->pc = 0x303110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303114: 0x264601a0  addiu       $a2, $s2, 0x1A0
    ctx->pc = 0x303114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x303118: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x303118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30311c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x30311cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x303120: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x303120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x303124: 0xc0c2934  jal         func_30A4D0
    ctx->pc = 0x303124u;
    SET_GPR_U32(ctx, 31, 0x30312Cu);
    ctx->pc = 0x303128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303124u;
    // 0x303128: 0xe635000c  swc1        $f21, 0xC($s1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4D0u, 0x303124u, 0x30312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30312Cu;
label_30312c:
    // 0x30312c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x30312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x303130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x303130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x303134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303138: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x303138u;
    SET_GPR_U32(ctx, 31, 0x303140u);
    ctx->pc = 0x30313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303138u;
    // 0x30313c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x303138u, 0x303140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303140u;
label_303140:
    // 0x303140: 0xc6400134  lwc1        $f0, 0x134($s2)
    ctx->pc = 0x303140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303144: 0xc6410138  lwc1        $f1, 0x138($s2)
    ctx->pc = 0x303144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303148: 0xc642013c  lwc1        $f2, 0x13C($s2)
    ctx->pc = 0x303148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30314c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x30314cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x303150: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x303150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x303154: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x303154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x303158: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x303158u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x30315c: 0x8642018a  lh          $v0, 0x18A($s2)
    ctx->pc = 0x30315cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 394)));
    // 0x303160: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x303160u;
    {
        const bool branch_taken_0x303160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303160) {
            ctx->pc = 0x303164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303160u;
            // 0x303164: 0xc6410140  lwc1        $f1, 0x140($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3031BCu;
            goto label_3031bc;
        }
    }
    ctx->pc = 0x303168u;
    // 0x303168: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x303168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x30316c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x30316Cu;
    {
        const bool branch_taken_0x30316c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30316Cu;
        // 0x303170: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30316c) {
            ctx->pc = 0x3031E8u;
            goto label_3031e8;
        }
    }
    ctx->pc = 0x303174u;
    // 0x303174: 0xc46200b8  lwc1        $f2, 0xB8($v1)
    ctx->pc = 0x303174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303178: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x303178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30317c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303180: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x303180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303184: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x303184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303188: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x303188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x30318c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303190: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x303190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x303194: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x303194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x303198: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x303198u;
    SET_GPR_U32(ctx, 31, 0x3031A0u);
    ctx->pc = 0x30319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303198u;
    // 0x30319c: 0xe455000c  swc1        $f21, 0xC($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x303198u, 0x3031A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3031A0u;
label_3031a0:
    // 0x3031a0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x3031a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3031a4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x3031a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3031a8: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x3031a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3031ac: 0xe6400140  swc1        $f0, 0x140($s2)
    ctx->pc = 0x3031acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x3031b0: 0xe6410144  swc1        $f1, 0x144($s2)
    ctx->pc = 0x3031b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
    // 0x3031b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3031B4u;
    {
        const bool branch_taken_0x3031b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3031B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3031B4u;
        // 0x3031b8: 0xe6420148  swc1        $f2, 0x148($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3031b4) {
            ctx->pc = 0x3031E8u;
            goto label_3031e8;
        }
    }
    ctx->pc = 0x3031BCu;
label_3031bc:
    // 0x3031bc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x3031bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3031c0: 0xc6420144  lwc1        $f2, 0x144($s2)
    ctx->pc = 0x3031c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3031c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3031c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031c8: 0xc6400148  lwc1        $f0, 0x148($s2)
    ctx->pc = 0x3031c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3031cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3031ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031d0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3031d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3031d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3031d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031d8: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x3031d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3031dc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3031dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3031e0: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x3031E0u;
    SET_GPR_U32(ctx, 31, 0x3031E8u);
    ctx->pc = 0x3031E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3031E0u;
    // 0x3031e4: 0xe455000c  swc1        $f21, 0xC($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x3031E0u, 0x3031E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3031E8u;
label_3031e8:
    // 0x3031e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3031e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3031ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031f0: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x3031F0u;
    SET_GPR_U32(ctx, 31, 0x3031F8u);
    ctx->pc = 0x3031F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3031F0u;
    // 0x3031f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x3031F0u, 0x3031F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3031F8u;
label_3031f8:
    // 0x3031f8: 0x8e470100  lw          $a3, 0x100($s2)
    ctx->pc = 0x3031f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x3031fc: 0xc4e00220  lwc1        $f0, 0x220($a3)
    ctx->pc = 0x3031fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303200: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x303200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303204: 0x0  nop
    ctx->pc = 0x303204u;
    // NOP
    // 0x303208: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x303208u;
    {
        const bool branch_taken_0x303208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303208u;
        // 0x30320c: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303208) {
            ctx->pc = 0x303298u;
            goto label_303298;
        }
    }
    ctx->pc = 0x303210u;
    // 0x303210: 0xc4e10204  lwc1        $f1, 0x204($a3)
    ctx->pc = 0x303210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303214: 0xc4e20208  lwc1        $f2, 0x208($a3)
    ctx->pc = 0x303214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303218: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x303218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30321c: 0xc4e0020c  lwc1        $f0, 0x20C($a3)
    ctx->pc = 0x30321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x303220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303228: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x303228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30322c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x30322cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303230: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x303230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x303234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x303234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303238: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x303238u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x30323c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x30323cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x303240: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x303240u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x303244: 0xc4e00224  lwc1        $f0, 0x224($a3)
    ctx->pc = 0x303244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303248: 0xc6410164  lwc1        $f1, 0x164($s2)
    ctx->pc = 0x303248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30324c: 0xc6420168  lwc1        $f2, 0x168($s2)
    ctx->pc = 0x30324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303250: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x303250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x303254: 0xc643016c  lwc1        $f3, 0x16C($s2)
    ctx->pc = 0x303254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303258: 0xe6410164  swc1        $f1, 0x164($s2)
    ctx->pc = 0x303258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 356), bits); }
    // 0x30325c: 0xc4e00228  lwc1        $f0, 0x228($a3)
    ctx->pc = 0x30325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303260: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x303260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x303264: 0xe6420168  swc1        $f2, 0x168($s2)
    ctx->pc = 0x303264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 360), bits); }
    // 0x303268: 0xc4e0022c  lwc1        $f0, 0x22C($a3)
    ctx->pc = 0x303268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30326c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x30326cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x303270: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x303270u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x303274: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x303274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x303278: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x303278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30327c: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x30327cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x303280: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x303280u;
    SET_GPR_U32(ctx, 31, 0x303288u);
    ctx->pc = 0x303284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303280u;
    // 0x303284: 0xe643016c  swc1        $f3, 0x16C($s2) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 364), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x303280u, 0x303288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303288u;
label_303288:
    // 0x303288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30328c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30328cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303290: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x303290u;
    SET_GPR_U32(ctx, 31, 0x303298u);
    ctx->pc = 0x303294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303290u;
    // 0x303294: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x303290u, 0x303298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303298u;
label_303298:
    // 0x303298: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x303298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x30329c: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x30329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3032a0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3032a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3032a4: 0x0  nop
    ctx->pc = 0x3032a4u;
    // NOP
    // 0x3032a8: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x3032A8u;
    {
        const bool branch_taken_0x3032a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3032ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032A8u;
        // 0x3032ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032a8) {
            ctx->pc = 0x303374u;
            goto label_303374;
        }
    }
    ctx->pc = 0x3032B0u;
    // 0x3032b0: 0xc4600210  lwc1        $f0, 0x210($v1)
    ctx->pc = 0x3032b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3032b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3032b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3032b8: 0x0  nop
    ctx->pc = 0x3032b8u;
    // NOP
    // 0x3032bc: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x3032BCu;
    {
        const bool branch_taken_0x3032bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3032C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032BCu;
        // 0x3032c0: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032bc) {
            ctx->pc = 0x303374u;
            goto label_303374;
        }
    }
    ctx->pc = 0x3032C4u;
    // 0x3032c4: 0xc4600204  lwc1        $f0, 0x204($v1)
    ctx->pc = 0x3032c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3032c8: 0xc4610208  lwc1        $f1, 0x208($v1)
    ctx->pc = 0x3032c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3032cc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3032ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3032d0: 0xc462020c  lwc1        $f2, 0x20C($v1)
    ctx->pc = 0x3032d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3032d4: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x3032d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3032d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3032d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3032dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3032dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3032e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3032e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032e4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3032e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3032e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3032e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032ec: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3032ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3032f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3032f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032f4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x3032f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3032f8: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x3032f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3032fc: 0xc462021c  lwc1        $f2, 0x21C($v1)
    ctx->pc = 0x3032fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303300: 0xc4600214  lwc1        $f0, 0x214($v1)
    ctx->pc = 0x303300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303304: 0xc4610218  lwc1        $f1, 0x218($v1)
    ctx->pc = 0x303304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303308: 0xc6440164  lwc1        $f4, 0x164($s2)
    ctx->pc = 0x303308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30330c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x30330cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x303310: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x303310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x303314: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x303314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x303318: 0xc641016c  lwc1        $f1, 0x16C($s2)
    ctx->pc = 0x303318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30331c: 0xc6400168  lwc1        $f0, 0x168($s2)
    ctx->pc = 0x30331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303320: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x303320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x303324: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x303324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x303328: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x303328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x30332c: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x30332cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x303330: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x303330u;
    SET_GPR_U32(ctx, 31, 0x303338u);
    ctx->pc = 0x303334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303330u;
    // 0x303334: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x303330u, 0x303338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303338u;
label_303338:
    // 0x303338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x303338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30333c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30333cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303340: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x303340u;
    SET_GPR_U32(ctx, 31, 0x303348u);
    ctx->pc = 0x303344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303340u;
    // 0x303344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x303340u, 0x303348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303348u;
label_303348:
    // 0x303348: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x303348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30334c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303350: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x303350u;
    SET_GPR_U32(ctx, 31, 0x303358u);
    ctx->pc = 0x303354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303350u;
    // 0x303354: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x303350u, 0x303358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303358u;
label_303358:
    // 0x303358: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x303358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30335c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x30335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303360: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x303360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303364: 0xe6400164  swc1        $f0, 0x164($s2)
    ctx->pc = 0x303364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 356), bits); }
    // 0x303368: 0xe6410168  swc1        $f1, 0x168($s2)
    ctx->pc = 0x303368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 360), bits); }
    // 0x30336c: 0xe642016c  swc1        $f2, 0x16C($s2)
    ctx->pc = 0x30336cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 364), bits); }
    // 0x303370: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x303370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_303374:
    // 0x303374: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x303374u;
    SET_GPR_U32(ctx, 31, 0x30337Cu);
    ctx->pc = 0x303378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303374u;
    // 0x303378: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x303374u, 0x30337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30337Cu;
label_30337c:
    // 0x30337c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x30337cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x303380: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x303380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x303384: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x303384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x303388: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x303388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30338c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x30338cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x303390: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x303390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x303394: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x303394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x303398: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x303398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30339c: 0x3e00008  jr          $ra
    ctx->pc = 0x30339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3033A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30339Cu;
        // 0x3033a0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30339Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3033A4u;
    // 0x3033a4: 0x0  nop
    ctx->pc = 0x3033a4u;
    // NOP
    ctx->pc = 0x3033a8u;
}

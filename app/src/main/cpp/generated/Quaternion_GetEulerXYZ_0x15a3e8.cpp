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

// Function: Quaternion_GetEulerXYZ
// Address: 0x15a3e8 - 0x15a590
void Quaternion_GetEulerXYZ_0x15a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quaternion_GetEulerXYZ_0x15a3e8");
#endif

    switch (ctx->pc) {
        case 0x15a484u: goto label_15a484;
        case 0x15a504u: goto label_15a504;
        case 0x15a518u: goto label_15a518;
        case 0x15a534u: goto label_15a534;
        case 0x15a55cu: goto label_15a55c;
        default: break;
    }

    ctx->pc = 0x15a3e8u;

    // 0x15a3e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15a3ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a3f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15a3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15a3f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15a3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a3fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a400: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x15a400u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15a404: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x15a404u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15a408: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x15a408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15a40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a410: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x15a410u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15a414: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x15a414u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15a418: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x15a418u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15a41c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x15a41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a420: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x15a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a424: 0x46010d00  add.s       $f20, $f1, $f1
    ctx->pc = 0x15a424u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x15a428: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x15a428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a42c: 0x46021640  add.s       $f25, $f2, $f2
    ctx->pc = 0x15a42cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x15a430: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x15a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a434: 0x46000540  add.s       $f21, $f0, $f0
    ctx->pc = 0x15a434u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15a438: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x15a438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15a43c: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x15a43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x15a440: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15a440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15a444: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x15a444u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x15a448: 0x460c1836  c.le.s      $f3, $f12
    ctx->pc = 0x15a448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a44c: 0x0  nop
    ctx->pc = 0x15a44cu;
    // NOP
    // 0x15a450: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15A450u;
    {
        const bool branch_taken_0x15a450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A450u;
        // 0x15a454: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a450) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A458u;
    // 0x15a458: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15A458u;
    {
        const bool branch_taken_0x15a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A458u;
        // 0x15a45c: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a458) {
            ctx->pc = 0x15A47Cu;
            goto label_15a47c;
        }
    }
    ctx->pc = 0x15A460u;
label_15a460:
    // 0x15a460: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x15a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x15a464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a468: 0x0  nop
    ctx->pc = 0x15a468u;
    // NOP
    // 0x15a46c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x15a46cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a470: 0x0  nop
    ctx->pc = 0x15a470u;
    // NOP
    // 0x15a474: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15A474u;
    {
        const bool branch_taken_0x15a474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a474) {
            ctx->pc = 0x15A478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A474u;
            // 0x15a478: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A47Cu;
            goto label_15a47c;
        }
    }
    ctx->pc = 0x15A47Cu;
label_15a47c:
    // 0x15a47c: 0xc0e86de  jal         func_3A1B78
    ctx->pc = 0x15A47Cu;
    SET_GPR_U32(ctx, 31, 0x15A484u);
    ctx->pc = 0x3A1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B78u, 0x15A47Cu, 0x15A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A484u;
label_15a484:
    // 0x15a484: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x15a484u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x15a488: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x15a488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x15a48c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x15a490: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x15a490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x15a494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a498: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a49c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15a49cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a4a0: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x15a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a4a4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15a4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a4a8: 0x46140dc2  mul.s       $f23, $f1, $f20
    ctx->pc = 0x15a4a8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x15a4ac: 0x46191e02  mul.s       $f24, $f3, $f25
    ctx->pc = 0x15a4acu;
    ctx->f[24] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
    // 0x15a4b0: 0x46190582  mul.s       $f22, $f0, $f25
    ctx->pc = 0x15a4b0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x15a4b4: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x15A4B4u;
    {
        const bool branch_taken_0x15a4b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4B4u;
        // 0x15a4b8: 0x46150842  mul.s       $f1, $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4b4) {
            ctx->pc = 0x15A544u;
            goto label_15a544;
        }
    }
    ctx->pc = 0x15A4BCu;
    // 0x15a4bc: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x15a4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x15a4c0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x15a4c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x15a4c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a4c8: 0x0  nop
    ctx->pc = 0x15a4c8u;
    // NOP
    // 0x15a4cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15a4ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a4d0: 0x0  nop
    ctx->pc = 0x15a4d0u;
    // NOP
    // 0x15a4d4: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x15A4D4u;
    {
        const bool branch_taken_0x15a4d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a4d4) {
            ctx->pc = 0x15A4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A4D4u;
            // 0x15a4d8: 0x46160b40  add.s       $f13, $f1, $f22 (Delay Slot)
            ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A520u;
            goto label_15a520;
        }
    }
    ctx->pc = 0x15A4DCu;
    // 0x15a4dc: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x15a4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a4e0: 0x46151802  mul.s       $f0, $f3, $f21
    ctx->pc = 0x15a4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x15a4e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a4e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15a4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15a4ec: 0x46146502  mul.s       $f20, $f12, $f20
    ctx->pc = 0x15a4ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x15a4f0: 0x46196302  mul.s       $f12, $f12, $f25
    ctx->pc = 0x15a4f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    // 0x15a4f4: 0x46140b40  add.s       $f13, $f1, $f20
    ctx->pc = 0x15a4f4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x15a4f8: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x15a4f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x15a4fc: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15A4FCu;
    SET_GPR_U32(ctx, 31, 0x15A504u);
    ctx->pc = 0x15A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A4FCu;
    // 0x15a500: 0x460dab41  sub.s       $f13, $f21, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15A4FCu, 0x15A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A504u;
label_15a504:
    // 0x15a504: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x15a504u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x15a508: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x15a508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x15a50c: 0x4618bb00  add.s       $f12, $f23, $f24
    ctx->pc = 0x15a50cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x15a510: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15A510u;
    SET_GPR_U32(ctx, 31, 0x15A518u);
    ctx->pc = 0x15A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A510u;
    // 0x15a514: 0x4614ab41  sub.s       $f13, $f21, $f20 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15A510u, 0x15A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A518u;
label_15a518:
    // 0x15a518: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15A518u;
    {
        const bool branch_taken_0x15a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A518u;
        // 0x15a51c: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a518) {
            ctx->pc = 0x15A564u;
            goto label_15a564;
        }
    }
    ctx->pc = 0x15A520u;
label_15a520:
    // 0x15a520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a528: 0x4618bb01  sub.s       $f12, $f23, $f24
    ctx->pc = 0x15a528u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x15a52c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15A52Cu;
    SET_GPR_U32(ctx, 31, 0x15A534u);
    ctx->pc = 0x15A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A52Cu;
    // 0x15a530: 0x460d0341  sub.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15A52Cu, 0x15A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A534u;
label_15a534:
    // 0x15a534: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15a534u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15a538: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15a538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x15a53c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15A53Cu;
    {
        const bool branch_taken_0x15a53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A53Cu;
        // 0x15a540: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a53c) {
            ctx->pc = 0x15A564u;
            goto label_15a564;
        }
    }
    ctx->pc = 0x15A544u;
label_15a544:
    // 0x15a544: 0x46160800  add.s       $f0, $f1, $f22
    ctx->pc = 0x15a544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x15a548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a54c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x15a54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15a550: 0x4618bb01  sub.s       $f12, $f23, $f24
    ctx->pc = 0x15a550u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x15a554: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15A554u;
    SET_GPR_U32(ctx, 31, 0x15A55Cu);
    ctx->pc = 0x15A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A554u;
    // 0x15a558: 0x46006b41  sub.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15A554u, 0x15A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A55Cu;
label_15a55c:
    // 0x15a55c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x15a55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x15a560: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15a560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_15a564:
    // 0x15a564: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15a564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a570: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x15a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x15a574: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x15a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x15a578: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x15a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15a57c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x15a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15a580: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x15a580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15a584: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x15a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a588: 0x3e00008  jr          $ra
    ctx->pc = 0x15A588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A588u;
        // 0x15a58c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A590u;
}

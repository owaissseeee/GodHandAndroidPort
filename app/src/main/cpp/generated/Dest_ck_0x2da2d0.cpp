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

// Function: Dest_ck
// Address: 0x2da2d0 - 0x2da468
void Dest_ck_0x2da2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_ck_0x2da2d0");
#endif

    switch (ctx->pc) {
        case 0x2da32cu: goto label_2da32c;
        default: break;
    }

    ctx->pc = 0x2da2d0u;

    // 0x2da2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da2d4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2da2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da2d8: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x2da2d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2da2dc: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2da2dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2da2e0: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2da2e0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2da2e4: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2da2e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2da2e8: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2da2e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2da2ec: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2da2ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2da2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da2f4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2da2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2da2f8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2da2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da2fc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2da2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da300: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x2da300u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2da304: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2da304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da308: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x2da308u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da30c: 0x0  nop
    ctx->pc = 0x2da30cu;
    // NOP
    // 0x2da310: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA310u;
    {
        const bool branch_taken_0x2da310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA310u;
        // 0x2da314: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da310) {
            ctx->pc = 0x2DA350u;
            goto label_2da350;
        }
    }
    ctx->pc = 0x2DA318u;
    // 0x2da318: 0x0  nop
    ctx->pc = 0x2da318u;
    // NOP
    // 0x2da31c: 0x0  nop
    ctx->pc = 0x2da31cu;
    // NOP
    // 0x2da320: 0x46140b03  div.s       $f12, $f1, $f20
    ctx->pc = 0x2da320u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[20]);
    // 0x2da324: 0xc0e8592  jal         func_3A1648
    ctx->pc = 0x2DA324u;
    SET_GPR_U32(ctx, 31, 0x2DA32Cu);
    ctx->pc = 0x3A1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1648u, 0x2DA324u, 0x2DA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA32Cu;
label_2da32c:
    // 0x2da32c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2da32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da330: 0x0  nop
    ctx->pc = 0x2da330u;
    // NOP
    // 0x2da334: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA334u;
    {
        const bool branch_taken_0x2da334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA334u;
        // 0x2da338: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da334) {
            ctx->pc = 0x2DA374u;
            goto label_2da374;
        }
    }
    ctx->pc = 0x2DA33Cu;
    // 0x2da33c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da340: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da348: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA348u;
    {
        const bool branch_taken_0x2da348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA348u;
        // 0x2da34c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da348) {
            ctx->pc = 0x2DA374u;
            goto label_2da374;
        }
    }
    ctx->pc = 0x2DA350u;
label_2da350:
    // 0x2da350: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2da350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da354: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x2da354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x2da358: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da35c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da360: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA360u;
    {
        const bool branch_taken_0x2da360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da360) {
            ctx->pc = 0x2DA364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA360u;
            // 0x2da364: 0x46170b01  sub.s       $f12, $f1, $f23 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA37Cu;
            goto label_2da37c;
        }
    }
    ctx->pc = 0x2DA368u;
    // 0x2da368: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2da368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2da36c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da36cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2da374:
    // 0x2da374: 0x0  nop
    ctx->pc = 0x2da374u;
    // NOP
    // 0x2da378: 0x46170b01  sub.s       $f12, $f1, $f23
    ctx->pc = 0x2da378u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
label_2da37c:
    // 0x2da37c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da380: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da388: 0x0  nop
    ctx->pc = 0x2da388u;
    // NOP
    // 0x2da38c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da390: 0x0  nop
    ctx->pc = 0x2da390u;
    // NOP
    // 0x2da394: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA394u;
    {
        const bool branch_taken_0x2da394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da394) {
            ctx->pc = 0x2DA3B0u;
            goto label_2da3b0;
        }
    }
    ctx->pc = 0x2DA39Cu;
    // 0x2da39c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da3a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da3a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3a8: 0x0  nop
    ctx->pc = 0x2da3a8u;
    // NOP
    // 0x2da3ac: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2da3acu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2da3b0:
    // 0x2da3b0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2da3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2da3b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da3b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da3b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3bc: 0x0  nop
    ctx->pc = 0x2da3bcu;
    // NOP
    // 0x2da3c0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2da3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da3c4: 0x0  nop
    ctx->pc = 0x2da3c4u;
    // NOP
    // 0x2da3c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA3C8u;
    {
        const bool branch_taken_0x2da3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da3c8) {
            ctx->pc = 0x2DA3E4u;
            goto label_2da3e4;
        }
    }
    ctx->pc = 0x2DA3D0u;
    // 0x2da3d0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da3d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da3d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da3d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3dc: 0x0  nop
    ctx->pc = 0x2da3dcu;
    // NOP
    // 0x2da3e0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2da3e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2da3e4:
    // 0x2da3e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3e8: 0x0  nop
    ctx->pc = 0x2da3e8u;
    // NOP
    // 0x2da3ec: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da3f0: 0x0  nop
    ctx->pc = 0x2da3f0u;
    // NOP
    // 0x2da3f4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA3F4u;
    {
        const bool branch_taken_0x2da3f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da3f4) {
            ctx->pc = 0x2DA3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA3F4u;
            // 0x2da3f8: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA408u;
            goto label_2da408;
        }
    }
    ctx->pc = 0x2DA3FCu;
    // 0x2da3fc: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x2da3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA400u;
    {
        const bool branch_taken_0x2da400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da400) {
            ctx->pc = 0x2DA40Cu;
            goto label_2da40c;
        }
    }
    ctx->pc = 0x2DA408u;
label_2da408:
    // 0x2da408: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2da408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da40c:
    // 0x2da40c: 0x0  nop
    ctx->pc = 0x2da40cu;
    // NOP
    // 0x2da410: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA410u;
    {
        const bool branch_taken_0x2da410 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA410u;
        // 0x2da414: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da410) {
            ctx->pc = 0x2DA434u;
            goto label_2da434;
        }
    }
    ctx->pc = 0x2DA418u;
    // 0x2da418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da41c: 0x0  nop
    ctx->pc = 0x2da41cu;
    // NOP
    // 0x2da420: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da424: 0x0  nop
    ctx->pc = 0x2da424u;
    // NOP
    // 0x2da428: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA428u;
    {
        const bool branch_taken_0x2da428 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA428u;
        // 0x2da42c: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da428) {
            ctx->pc = 0x2DA434u;
            goto label_2da434;
        }
    }
    ctx->pc = 0x2DA430u;
    // 0x2da430: 0x46006047  neg.s       $f1, $f12
    ctx->pc = 0x2da430u;
    ctx->f[1] = FPU_NEG_S(ctx->f[12]);
label_2da434:
    // 0x2da434: 0x46160832  c.eq.s      $f1, $f22
    ctx->pc = 0x2da434u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da438: 0x0  nop
    ctx->pc = 0x2da438u;
    // NOP
    // 0x2da43c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA43Cu;
    {
        const bool branch_taken_0x2da43c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA43Cu;
        // 0x2da440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da43c) {
            ctx->pc = 0x2DA448u;
            goto label_2da448;
        }
    }
    ctx->pc = 0x2DA444u;
    // 0x2da444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da448:
    // 0x2da448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da44c: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x2da44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2da450: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2da450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da454: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2da454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da458: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2da458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da45c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA45Cu;
        // 0x2da460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA464u;
    // 0x2da464: 0x0  nop
    ctx->pc = 0x2da464u;
    // NOP
    ctx->pc = 0x2da468u;
}

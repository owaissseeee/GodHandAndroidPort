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

// Function: func_002DA7A8
// Address: 0x2da7a8 - 0x2da8d8
void func_002DA7A8_0x2da7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DA7A8_0x2da7a8");
#endif

    switch (ctx->pc) {
        case 0x2da7fcu: goto label_2da7fc;
        default: break;
    }

    ctx->pc = 0x2da7a8u;

    // 0x2da7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2da7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2da7ac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2da7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da7b0: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2da7b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2da7b4: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2da7b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2da7b8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2da7b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2da7bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2da7bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2da7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da7c4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2da7c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2da7c8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2da7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da7cc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2da7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da7d0: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x2da7d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2da7d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2da7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da7d8: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x2da7d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da7dc: 0x0  nop
    ctx->pc = 0x2da7dcu;
    // NOP
    // 0x2da7e0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA7E0u;
    {
        const bool branch_taken_0x2da7e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7E0u;
        // 0x2da7e4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7e0) {
            ctx->pc = 0x2DA820u;
            goto label_2da820;
        }
    }
    ctx->pc = 0x2DA7E8u;
    // 0x2da7e8: 0x0  nop
    ctx->pc = 0x2da7e8u;
    // NOP
    // 0x2da7ec: 0x0  nop
    ctx->pc = 0x2da7ecu;
    // NOP
    // 0x2da7f0: 0x46140b03  div.s       $f12, $f1, $f20
    ctx->pc = 0x2da7f0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[20]);
    // 0x2da7f4: 0xc0e8592  jal         func_3A1648
    ctx->pc = 0x2DA7F4u;
    SET_GPR_U32(ctx, 31, 0x2DA7FCu);
    ctx->pc = 0x3A1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1648u, 0x2DA7F4u, 0x2DA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7FCu;
label_2da7fc:
    // 0x2da7fc: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2da7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da800: 0x0  nop
    ctx->pc = 0x2da800u;
    // NOP
    // 0x2da804: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA804u;
    {
        const bool branch_taken_0x2da804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA804u;
        // 0x2da808: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da804) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA80Cu;
    // 0x2da80c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da810: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da818: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA818u;
    {
        const bool branch_taken_0x2da818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA818u;
        // 0x2da81c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da818) {
            ctx->pc = 0x2DA844u;
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA820u;
label_2da820:
    // 0x2da820: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2da820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da824: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x2da824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x2da828: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da82c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da830: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA830u;
    {
        const bool branch_taken_0x2da830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da830) {
            ctx->pc = 0x2DA834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA830u;
            // 0x2da834: 0x46160b01  sub.s       $f12, $f1, $f22 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA84Cu;
            goto label_2da84c;
        }
    }
    ctx->pc = 0x2DA838u;
    // 0x2da838: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2da838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2da83c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da83cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da840: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2da844:
    // 0x2da844: 0x0  nop
    ctx->pc = 0x2da844u;
    // NOP
    // 0x2da848: 0x46160b01  sub.s       $f12, $f1, $f22
    ctx->pc = 0x2da848u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_2da84c:
    // 0x2da84c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da850: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da858: 0x0  nop
    ctx->pc = 0x2da858u;
    // NOP
    // 0x2da85c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da860: 0x0  nop
    ctx->pc = 0x2da860u;
    // NOP
    // 0x2da864: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA864u;
    {
        const bool branch_taken_0x2da864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da864) {
            ctx->pc = 0x2DA880u;
            goto label_2da880;
        }
    }
    ctx->pc = 0x2DA86Cu;
    // 0x2da86c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da870: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da878: 0x0  nop
    ctx->pc = 0x2da878u;
    // NOP
    // 0x2da87c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2da87cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2da880:
    // 0x2da880: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2da880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2da884: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da88c: 0x0  nop
    ctx->pc = 0x2da88cu;
    // NOP
    // 0x2da890: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2da890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da894: 0x0  nop
    ctx->pc = 0x2da894u;
    // NOP
    // 0x2da898: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA898u;
    {
        const bool branch_taken_0x2da898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA898u;
        // 0x2da89c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da898) {
            ctx->pc = 0x2DA8B4u;
            goto label_2da8b4;
        }
    }
    ctx->pc = 0x2DA8A0u;
    // 0x2da8a0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da8a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da8ac: 0x0  nop
    ctx->pc = 0x2da8acu;
    // NOP
    // 0x2da8b0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2da8b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2da8b4:
    // 0x2da8b4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2da8b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2da8b8: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2da8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da8bc: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2da8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da8c0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2da8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA8C4u;
        // 0x2da8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA8CCu;
    // 0x2da8cc: 0x0  nop
    ctx->pc = 0x2da8ccu;
    // NOP
    // 0x2da8d0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x2da8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2da8d4: 0x0  nop
    ctx->pc = 0x2da8d4u;
    // NOP
    ctx->pc = 0x2da8d8u;
}

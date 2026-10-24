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

// Function: func_0031B2E0
// Address: 0x31b2e0 - 0x31b410
void func_0031B2E0_0x31b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031B2E0_0x31b2e0");
#endif

    switch (ctx->pc) {
        case 0x31b30cu: goto label_31b30c;
        default: break;
    }

    ctx->pc = 0x31b2e0u;

    // 0x31b2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b2e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31b2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b2ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2f0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x31b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x31b2f4: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x31b2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x31b2f8: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x31B2F8u;
    {
        const bool branch_taken_0x31b2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b2f8) {
            ctx->pc = 0x31B2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B2F8u;
            // 0x31b2fc: 0xc600007c  lwc1        $f0, 0x7C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B300u;
    // 0x31b300: 0xc60c0088  lwc1        $f12, 0x88($s0)
    ctx->pc = 0x31b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b304: 0xc0b6a50  jal         func_2DA940
    ctx->pc = 0x31B304u;
    SET_GPR_U32(ctx, 31, 0x31B30Cu);
    ctx->pc = 0x31B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B304u;
    // 0x31b308: 0xc60d007c  lwc1        $f13, 0x7C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA940u, 0x31B304u, 0x31B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B30Cu;
label_31b30c:
    // 0x31b30c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x31b30cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x31b310: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x31b314: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31b314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x31b318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b31c: 0x0  nop
    ctx->pc = 0x31b31cu;
    // NOP
    // 0x31b320: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31b320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b324: 0x0  nop
    ctx->pc = 0x31b324u;
    // NOP
    // 0x31b328: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x31B328u;
    {
        const bool branch_taken_0x31b328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b328) {
            ctx->pc = 0x31B32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B328u;
            // 0x31b32c: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B354u;
            goto label_31b354;
        }
    }
    ctx->pc = 0x31B330u;
    // 0x31b330: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x31b330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x31b334: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31b334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x31b338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b33c: 0x0  nop
    ctx->pc = 0x31b33cu;
    // NOP
    // 0x31b340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31b340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b344: 0x0  nop
    ctx->pc = 0x31b344u;
    // NOP
    // 0x31b348: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x31B348u;
    {
        const bool branch_taken_0x31b348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b348) {
            ctx->pc = 0x31B35Cu;
            goto label_31b35c;
        }
    }
    ctx->pc = 0x31B350u;
    // 0x31b350: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x31b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_31b354:
    // 0x31b354: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x31b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31b358: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x31b358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_31b35c:
    // 0x31b35c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x31b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x31b360: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31b360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x31b364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b368: 0x0  nop
    ctx->pc = 0x31b368u;
    // NOP
    // 0x31b36c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31b36cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b370: 0x0  nop
    ctx->pc = 0x31b370u;
    // NOP
    // 0x31b374: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x31B374u;
    {
        const bool branch_taken_0x31b374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b374) {
            ctx->pc = 0x31B378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B374u;
            // 0x31b378: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B3A0u;
            goto label_31b3a0;
        }
    }
    ctx->pc = 0x31B37Cu;
    // 0x31b37c: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x31b37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x31b380: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31b380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x31b384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b388: 0x0  nop
    ctx->pc = 0x31b388u;
    // NOP
    // 0x31b38c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31b38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b390: 0x0  nop
    ctx->pc = 0x31b390u;
    // NOP
    // 0x31b394: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x31B394u;
    {
        const bool branch_taken_0x31b394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b394) {
            ctx->pc = 0x31B3A8u;
            goto label_31b3a8;
        }
    }
    ctx->pc = 0x31B39Cu;
    // 0x31b39c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x31b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_31b3a0:
    // 0x31b3a0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x31b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31b3a4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x31b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_31b3a8:
    // 0x31b3a8: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x31b3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x31b3ac: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x31b3acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x31b3b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b3b4: 0x0  nop
    ctx->pc = 0x31b3b4u;
    // NOP
    // 0x31b3b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31b3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b3bc: 0x0  nop
    ctx->pc = 0x31b3bcu;
    // NOP
    // 0x31b3c0: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x31B3C0u;
    {
        const bool branch_taken_0x31b3c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b3c0) {
            ctx->pc = 0x31B3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B3C0u;
            // 0x31b3c4: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B3ECu;
            goto label_31b3ec;
        }
    }
    ctx->pc = 0x31B3C8u;
    // 0x31b3c8: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x31b3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x31b3cc: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x31b3ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x31b3d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31b3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b3d4: 0x0  nop
    ctx->pc = 0x31b3d4u;
    // NOP
    // 0x31b3d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31b3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b3dc: 0x0  nop
    ctx->pc = 0x31b3dcu;
    // NOP
    // 0x31b3e0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x31B3E0u;
    {
        const bool branch_taken_0x31b3e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b3e0) {
            ctx->pc = 0x31B3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B3E0u;
            // 0x31b3e4: 0xc600007c  lwc1        $f0, 0x7C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B3E8u;
    // 0x31b3e8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x31b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_31b3ec:
    // 0x31b3ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x31b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x31b3f0: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x31b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x31b3f4: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x31b3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31b3f8:
    // 0x31b3f8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x31b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x31b3fc: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x31b3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x31b400: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31b400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b408: 0x3e00008  jr          $ra
    ctx->pc = 0x31B408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B408u;
        // 0x31b40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B410u;
}

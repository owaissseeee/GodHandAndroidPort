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

// Function: cOmBase_attachWeaponGrip
// Address: 0x28d3d8 - 0x28d500
void cOmBase_attachWeaponGrip_0x28d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_attachWeaponGrip_0x28d3d8");
#endif

    if (__builtin_expect(ctx->pc != 0x28d3d8u, 0)) {
        switch (ctx->pc) {
            case 0x28d4f0u: goto label_28d4f0;
            default: break;
        }
    }


    // 0x28d3d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d3dc: 0x80402d  daddu       $t0, $a0, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d3e4: 0xa0202d  daddu       $a0, $a1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3e8: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x28D3E8u;
    {
        const bool branch_taken_0x28d3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3E8u;
        // 0x28d3ec: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3e8) {
            ctx->pc = 0x28D4F0u;
            goto label_28d4f0;
        }
    }
    // 0x28d3f0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x28d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d3f4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x28d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d3f8: 0x8d030564  lw          $v1, 0x564($t0)
    ctx->pc = 0x28d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1380)));
    // 0x28d3fc: 0x24020225  addiu       $v0, $zero, 0x225
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x28d400: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28D400u;
    {
        const bool branch_taken_0x28d400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D400u;
        // 0x28d404: 0x2402024d  addiu       $v0, $zero, 0x24D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d400) {
            ctx->pc = 0x28D484u;
            goto label_28d484;
        }
    }
    // 0x28d408: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28D408u;
    {
        const bool branch_taken_0x28d408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D408u;
        // 0x28d40c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d408) {
            ctx->pc = 0x28D484u;
            goto label_28d484;
        }
    }
    // 0x28d410: 0x3c01be8f  lui         $at, 0xBE8F
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48783 << 16));
    // 0x28d414: 0x34215c29  ori         $at, $at, 0x5C29
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x28d418: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d41c: 0x3c01bd0f  lui         $at, 0xBD0F
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48399 << 16));
    // 0x28d420: 0x34215c29  ori         $at, $at, 0x5C29
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x28d424: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d428: 0x3c013e3d  lui         $at, 0x3E3D
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15933 << 16));
    // 0x28d42c: 0x342170a4  ori         $at, $at, 0x70A4
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x28d430: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d434: 0x3c01bf49  lui         $at, 0xBF49
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x28d438: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d43c: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d440: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x28d440u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d444: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d448: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28d448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d44c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x28d44cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28d450: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d454: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x28D454u;
    {
        const bool branch_taken_0x28d454 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D454u;
        // 0x28d458: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d454) {
            ctx->pc = 0x28D4E0u;
            goto label_28d4e0;
        }
    }
    // 0x28d45c: 0x3c013e8f  lui         $at, 0x3E8F
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x28d460: 0x34215c29  ori         $at, $at, 0x5C29
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x28d464: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d468: 0x24060010  addiu       $a2, $zero, 0x10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d46c: 0x3c013f49  lui         $at, 0x3F49
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x28d470: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d474: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d478: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28d478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d47c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28D47Cu;
    {
        const bool branch_taken_0x28d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D47Cu;
        // 0x28d480: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d47c) {
            ctx->pc = 0x28D4E0u;
            goto label_28d4e0;
        }
    }
    ctx->pc = 0x28D484u;
label_28d484:
    // 0x28d484: 0x3c01bda3  lui         $at, 0xBDA3
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x28d488: 0x3421d70a  ori         $at, $at, 0xD70A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x28d48c: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d490: 0x2406000a  addiu       $a2, $zero, 0xA
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28d494: 0x3c01bcf5  lui         $at, 0xBCF5
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x28d498: 0x3421c28f  ori         $at, $at, 0xC28F
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x28d49c: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d4a0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28d4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d4a4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d4a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28d4ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d4b0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x28d4b4: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x28D4B4u;
    {
        const bool branch_taken_0x28d4b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4B4u;
        // 0x28d4b8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4b4) {
            ctx->pc = 0x28D4E0u;
            goto label_28d4e0;
        }
    }
    // 0x28d4bc: 0x3c013da3  lui         $at, 0x3DA3
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x28d4c0: 0x3421d70a  ori         $at, $at, 0xD70A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x28d4c4: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d4c8: 0x24060010  addiu       $a2, $zero, 0x10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d4cc: 0x3c014049  lui         $at, 0x4049
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x28d4d0: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d4d4: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d4d8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x28d4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d4dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x28d4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_28d4e0:
    // 0x28d4e0: 0x100282d  daddu       $a1, $t0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4e4: 0x3a0382d  daddu       $a3, $sp, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4e8: 0xc073c58  jal         func_1CF160
    SET_GPR_U32(ctx, 31, 0x28D4F0u);
    ctx->pc = 0x28D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4E8u;
    // 0x28d4ec: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cOmWeapon_setParent_0x1cf160, 0x1cf160u, 0x28d4f0u)) {
        return;
    }
    ctx->pc = 0x28D4F0u;
label_28d4f0:
    // 0x28d4f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4F4u;
        // 0x28d4f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x28d4fc: 0x0  nop
    // NOP
    ctx->pc = 0x28d500u;
}
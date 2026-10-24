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

// Function: cOmBase_attachWeaponGripB
// Address: 0x26adf8 - 0x26af20
void cOmBase_attachWeaponGripB_0x26adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_attachWeaponGripB_0x26adf8");
#endif

    switch (ctx->pc) {
        case 0x26af10u: goto label_26af10;
        default: break;
    }

    ctx->pc = 0x26adf8u;

    // 0x26adf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26adf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26adfc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x26adfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ae04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26ae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae08: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x26AE08u;
    {
        const bool branch_taken_0x26ae08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE08u;
        // 0x26ae0c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae08) {
            ctx->pc = 0x26AF10u;
            goto label_26af10;
        }
    }
    ctx->pc = 0x26AE10u;
    // 0x26ae10: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26ae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26ae14: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26ae18: 0x8d030564  lw          $v1, 0x564($t0)
    ctx->pc = 0x26ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1380)));
    // 0x26ae1c: 0x24020225  addiu       $v0, $zero, 0x225
    ctx->pc = 0x26ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x26ae20: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26AE20u;
    {
        const bool branch_taken_0x26ae20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE20u;
        // 0x26ae24: 0x2402024d  addiu       $v0, $zero, 0x24D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae20) {
            ctx->pc = 0x26AEA4u;
            goto label_26aea4;
        }
    }
    ctx->pc = 0x26AE28u;
    // 0x26ae28: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26AE28u;
    {
        const bool branch_taken_0x26ae28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE28u;
        // 0x26ae2c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae28) {
            ctx->pc = 0x26AEA4u;
            goto label_26aea4;
        }
    }
    ctx->pc = 0x26AE30u;
    // 0x26ae30: 0x3c01be8f  lui         $at, 0xBE8F
    ctx->pc = 0x26ae30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48783 << 16));
    // 0x26ae34: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x26ae34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x26ae38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26ae38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26ae3c: 0x3c01bd0f  lui         $at, 0xBD0F
    ctx->pc = 0x26ae3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48399 << 16));
    // 0x26ae40: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x26ae40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x26ae44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ae44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ae48: 0x3c013e3d  lui         $at, 0x3E3D
    ctx->pc = 0x26ae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15933 << 16));
    // 0x26ae4c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x26ae4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x26ae50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ae50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ae54: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x26ae54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x26ae58: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26ae58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26ae5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26ae5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ae60: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x26ae60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ae64: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26ae68: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26ae68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26ae6c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x26ae6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26ae70: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26ae74: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x26AE74u;
    {
        const bool branch_taken_0x26ae74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE74u;
        // 0x26ae78: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae74) {
            ctx->pc = 0x26AF00u;
            goto label_26af00;
        }
    }
    ctx->pc = 0x26AE7Cu;
    // 0x26ae7c: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x26ae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x26ae80: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x26ae80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x26ae84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ae84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ae88: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26ae8c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26ae8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x26ae90: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26ae90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26ae94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ae94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ae98: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x26ae98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ae9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26AE9Cu;
    {
        const bool branch_taken_0x26ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE9Cu;
        // 0x26aea0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae9c) {
            ctx->pc = 0x26AF00u;
            goto label_26af00;
        }
    }
    ctx->pc = 0x26AEA4u;
label_26aea4:
    // 0x26aea4: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x26aea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x26aea8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26aea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26aeac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26aeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26aeb0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26aeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26aeb4: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x26aeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x26aeb8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x26aeb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x26aebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26aebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aec0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x26aec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26aec4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26aec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26aec8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26aecc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26aed0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x26aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x26aed4: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x26AED4u;
    {
        const bool branch_taken_0x26aed4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AED4u;
        // 0x26aed8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aed4) {
            ctx->pc = 0x26AF00u;
            goto label_26af00;
        }
    }
    ctx->pc = 0x26AEDCu;
    // 0x26aedc: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x26aedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x26aee0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26aee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26aee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26aee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26aee8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26aee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26aeec: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26aeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x26aef0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26aef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26aef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26aef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aef8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x26aef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26aefc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26aefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_26af00:
    // 0x26af00: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x26af00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af04: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x26af04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af08: 0xc073c58  jal         func_1CF160
    ctx->pc = 0x26AF08u;
    SET_GPR_U32(ctx, 31, 0x26AF10u);
    ctx->pc = 0x26AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF08u;
    // 0x26af0c: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x26AF08u, 0x26AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF10u;
label_26af10:
    // 0x26af10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26af10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26af14: 0x3e00008  jr          $ra
    ctx->pc = 0x26AF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF14u;
        // 0x26af18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AF1Cu;
    // 0x26af1c: 0x0  nop
    ctx->pc = 0x26af1cu;
    // NOP
    ctx->pc = 0x26af20u;
}

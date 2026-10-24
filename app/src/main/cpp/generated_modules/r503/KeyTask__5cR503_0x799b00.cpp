#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: KeyTask__5cR503
// Address: 0x799b00 - 0x799c10
void KeyTask__5cR503_0x799b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyTask__5cR503_0x799b00");
#endif

    switch (ctx->pc) {
        case 0x799b38u: goto label_799b38;
        case 0x799b44u: goto label_799b44;
        case 0x799b54u: goto label_799b54;
        case 0x799be0u: goto label_799be0;
        case 0x799becu: goto label_799bec;
        default: break;
    }

    ctx->pc = 0x799b00u;

    // 0x799b00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799b04: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799b08: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x799b0c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799b10: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799b14: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x799b18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799b1c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799b20: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x799b24: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x799b28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799b2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799B44u;
            goto label_799b44;
        }
    }
    ctx->pc = 0x799B34u;
    // 0x799b34: 0x0  nop
    ctx->pc = 0x799b34u;
    // NOP
label_799b38:
    // 0x799b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b3c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B3Cu;
    SET_GPR_U32(ctx, 31, 0x799B44u);
    ctx->pc = 0x799B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B3Cu;
    // 0x799b40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B3Cu, 0x799B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799b48: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799b4c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799B4Cu;
    SET_GPR_U32(ctx, 31, 0x799B54u);
    ctx->pc = 0x799B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B4Cu;
    // 0x799b50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799B4Cu, 0x799B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B54u;
label_799b54:
    // 0x799b54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b58: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799B58u;
    {
        const bool branch_taken_0x799b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B58u;
        // 0x799b5c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b58) {
            ctx->pc = 0x799B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b38;
        }
    }
    ctx->pc = 0x799B60u;
    // 0x799b60: 0x8e648658  lw          $a0, -0x79A8($s3)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x799b64: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x799b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x799b68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799b6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x799b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x799b70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x799b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b7c: 0x3c01c255  lui         $at, 0xC255
    ctx->pc = 0x799b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49749 << 16));
    // 0x799b80: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799b80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799b84: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799b88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799b90: 0x3c0140e6  lui         $at, 0x40E6
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16614 << 16));
    // 0x799b94: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x799b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x799b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799b9c: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x799ba0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x799ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x799ba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799ba8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799bac: 0x3c013fef  lui         $at, 0x3FEF
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16367 << 16));
    // 0x799bb0: 0x34210a51  ori         $at, $at, 0xA51
    ctx->pc = 0x799bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2641);
    // 0x799bb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799bb8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x799bb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799bbc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x799bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799bc0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x799bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799bc4: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x799bc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x799bc8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x799bcc: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x799bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799bd0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x799bd4: 0x8e84264c  lw          $a0, 0x264C($s4)
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9804)));
    // 0x799bd8: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799BD8u;
    SET_GPR_U32(ctx, 31, 0x799BE0u);
    ctx->pc = 0x799BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD8u;
    // 0x799bdc: 0xe604000c  swc1        $f4, 0xC($s0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799BD8u, 0x799BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE0u;
label_799be0:
    // 0x799be0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799be4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799BE4u;
    SET_GPR_U32(ctx, 31, 0x799BECu);
    ctx->pc = 0x799BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE4u;
    // 0x799be8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799BE4u, 0x799BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BECu;
label_799bec:
    // 0x799bec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799bf0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799bf4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799bf8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799bfc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799c00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799c04: 0x3e00008  jr          $ra
    ctx->pc = 0x799C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C0Cu;
    // 0x799c0c: 0x0  nop
    ctx->pc = 0x799c0cu;
    // NOP
    ctx->pc = 0x799c10u;
}
} // namespace gh_r503

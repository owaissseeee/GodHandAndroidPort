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

// Function: cSndSeVoice_ckHitSet
// Address: 0x2cae10 - 0x2caf28
void cSndSeVoice_ckHitSet_0x2cae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_ckHitSet_0x2cae10");
#endif

    switch (ctx->pc) {
        case 0x2cae80u: goto label_2cae80;
        case 0x2caec8u: goto label_2caec8;
        case 0x2caee4u: goto label_2caee4;
        default: break;
    }

    ctx->pc = 0x2cae10u;

    // 0x2cae10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cae14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cae18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2cae1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cae1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2cae24: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2cae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2cae28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cae2c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2cae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2cae30: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAE30u;
    {
        const bool branch_taken_0x2cae30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cae30) {
            ctx->pc = 0x2CAE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAE30u;
            // 0x2cae34: 0xc4810004  lwc1        $f1, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAE40u;
            goto label_2cae40;
        }
    }
    ctx->pc = 0x2CAE38u;
    // 0x2cae38: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2CAE38u;
    {
        const bool branch_taken_0x2cae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE38u;
        // 0x2cae3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae38) {
            ctx->pc = 0x2CAF08u;
            goto label_2caf08;
        }
    }
    ctx->pc = 0x2CAE40u;
label_2cae40:
    // 0x2cae40: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2cae40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2cae44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cae44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2cae48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cae48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae4c: 0x0  nop
    ctx->pc = 0x2cae4cu;
    // NOP
    // 0x2cae50: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cae50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cae54: 0x0  nop
    ctx->pc = 0x2cae54u;
    // NOP
    // 0x2cae58: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAE58u;
    {
        const bool branch_taken_0x2cae58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cae58) {
            ctx->pc = 0x2CAE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAE58u;
            // 0x2cae5c: 0x80820009  lb          $v0, 0x9($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAE6Cu;
            goto label_2cae6c;
        }
    }
    ctx->pc = 0x2CAE60u;
    // 0x2cae60: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2cae60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x2cae64: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2CAE64u;
    {
        const bool branch_taken_0x2cae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE64u;
        // 0x2cae68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae64) {
            ctx->pc = 0x2CAF08u;
            goto label_2caf08;
        }
    }
    ctx->pc = 0x2CAE6Cu;
label_2cae6c:
    // 0x2cae6c: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x2cae6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cae70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CAE70u;
    {
        const bool branch_taken_0x2cae70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE70u;
        // 0x2cae74: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae70) {
            ctx->pc = 0x2CAE88u;
            goto label_2cae88;
        }
    }
    ctx->pc = 0x2CAE78u;
    // 0x2cae78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2CAE78u;
    {
        const bool branch_taken_0x2cae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE78u;
        // 0x2cae7c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae78) {
            ctx->pc = 0x2CAF08u;
            goto label_2caf08;
        }
    }
    ctx->pc = 0x2CAE80u;
label_2cae80:
    // 0x2cae80: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2CAE80u;
    {
        const bool branch_taken_0x2cae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE80u;
        // 0x2cae84: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae80) {
            ctx->pc = 0x2CAF08u;
            goto label_2caf08;
        }
    }
    ctx->pc = 0x2CAE88u;
label_2cae88:
    // 0x2cae88: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2cae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cae8c: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x2cae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2cae90: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2cae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cae94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cae94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae98: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2cae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cae9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2caea0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2caea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2caea4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2caea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2caea8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2caea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2caeac: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2caeacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2caeb0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2caeb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2caeb4: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x2caeb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2caeb8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x2caeb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2caebc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2caebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2caec0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CAEC0u;
    {
        const bool branch_taken_0x2caec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEC0u;
        // 0x2caec4: 0x2470ffe8  addiu       $s0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caec0) {
            ctx->pc = 0x2CAF04u;
            goto label_2caf04;
        }
    }
    ctx->pc = 0x2CAEC8u;
label_2caec8:
    // 0x2caec8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2caec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2caecc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CAECCu;
    {
        const bool branch_taken_0x2caecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caecc) {
            ctx->pc = 0x2CAED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAECCu;
            // 0x2caed0: 0x8e430020  lw          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAEF0u;
            goto label_2caef0;
        }
    }
    ctx->pc = 0x2CAED4u;
    // 0x2caed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2caed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caed8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2caed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caedc: 0xc0b02a6  jal         func_2C0A98
    ctx->pc = 0x2CAEDCu;
    SET_GPR_U32(ctx, 31, 0x2CAEE4u);
    ctx->pc = 0x2CAEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEDCu;
    // 0x2caee0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0A98u, 0x2CAEDCu, 0x2CAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEE4u;
label_2caee4:
    // 0x2caee4: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2CAEE4u;
    {
        const bool branch_taken_0x2caee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caee4) {
            ctx->pc = 0x2CAEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAEE4u;
            // 0x2caee8: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cae80;
        }
    }
    ctx->pc = 0x2CAEECu;
    // 0x2caeec: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2caeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2caef0:
    // 0x2caef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2caef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2caef4: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x2caef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2caef8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2caef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2caefc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2CAEFCu;
    {
        const bool branch_taken_0x2caefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEFCu;
        // 0x2caf00: 0x2610ffc8  addiu       $s0, $s0, -0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caefc) {
            ctx->pc = 0x2CAEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caec8;
        }
    }
    ctx->pc = 0x2CAF04u;
label_2caf04:
    // 0x2caf04: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2caf04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2caf08:
    // 0x2caf08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2caf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2caf0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2caf0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2caf10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2caf10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caf14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2caf14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caf18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2caf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF1Cu;
        // 0x2caf20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF24u;
    // 0x2caf24: 0x0  nop
    ctx->pc = 0x2caf24u;
    // NOP
    ctx->pc = 0x2caf28u;
}

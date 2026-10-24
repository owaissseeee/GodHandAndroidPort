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

// Function: cSndSeVoice_BindMtx
// Address: 0x2cde28 - 0x2cdf18
void cSndSeVoice_BindMtx_0x2cde28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_BindMtx_0x2cde28");
#endif

    switch (ctx->pc) {
        case 0x2cde6cu: goto label_2cde6c;
        case 0x2cdebcu: goto label_2cdebc;
        case 0x2cdef0u: goto label_2cdef0;
        default: break;
    }

    ctx->pc = 0x2cde28u;

    // 0x2cde28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cde28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cde2c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cde2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cde30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cde30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cde34: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cde34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cde38: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cde38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cde3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cde3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde40: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cde40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cde44: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cde44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cde48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cde4c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2cde4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde50: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2cde50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2cde54: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2cde54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde58: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2cde58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2cde5c: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x2cde5cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cde60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cde60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cde64: 0xc0b368e  jal         func_2CDA38
    ctx->pc = 0x2CDE64u;
    SET_GPR_U32(ctx, 31, 0x2CDE6Cu);
    ctx->pc = 0x2CDE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE64u;
    // 0x2cde68: 0x6ac03  sra         $s5, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA38u, 0x2CDE64u, 0x2CDE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE6Cu;
label_2cde6c:
    // 0x2cde6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cde70: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDE70u;
    {
        const bool branch_taken_0x2cde70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cde70) {
            ctx->pc = 0x2CDE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDE70u;
            // 0x2cde74: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE80u;
            goto label_2cde80;
        }
    }
    ctx->pc = 0x2CDE78u;
    // 0x2cde78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2CDE78u;
    {
        const bool branch_taken_0x2cde78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE78u;
        // 0x2cde7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde78) {
            ctx->pc = 0x2CDEF0u;
            goto label_2cdef0;
        }
    }
    ctx->pc = 0x2CDE80u;
label_2cde80:
    // 0x2cde80: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDE80u;
    {
        const bool branch_taken_0x2cde80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE80u;
        // 0x2cde84: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde80) {
            ctx->pc = 0x2CDEA8u;
            goto label_2cdea8;
        }
    }
    ctx->pc = 0x2CDE88u;
    // 0x2cde88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cde88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cde8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cde8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cde90: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2cde90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2cde94: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2cde94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2cde98: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2cde98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2cde9c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2cde9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2cdea0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CDEA0u;
    {
        const bool branch_taken_0x2cdea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEA0u;
        // 0x2cdea4: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdea0) {
            ctx->pc = 0x2CDED8u;
            goto label_2cded8;
        }
    }
    ctx->pc = 0x2CDEA8u;
label_2cdea8:
    // 0x2cdea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cdeac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cdeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdeb0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2cdeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2cdeb4: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2CDEB4u;
    SET_GPR_U32(ctx, 31, 0x2CDEBCu);
    ctx->pc = 0x2CDEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDEB4u;
    // 0x2cdeb8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2CDEB4u, 0x2CDEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDEBCu;
label_2cdebc:
    // 0x2cdebc: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2cdebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdec0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2cdec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2cdec4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2cdec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2cdec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cdec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdecc: 0x0  nop
    ctx->pc = 0x2cdeccu;
    // NOP
    // 0x2cded0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cded0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cded4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2cded4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_2cded8:
    // 0x2cded8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdedc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cdedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdee0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2cdee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdee4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2cdee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdee8: 0xc0b37fc  jal         func_2CDFF0
    ctx->pc = 0x2CDEE8u;
    SET_GPR_U32(ctx, 31, 0x2CDEF0u);
    ctx->pc = 0x2CDEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDEE8u;
    // 0x2cdeec: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDFF0u, 0x2CDEE8u, 0x2CDEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDEF0u;
label_2cdef0:
    // 0x2cdef0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cdef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cdef4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cdef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cdef8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cdef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cdefc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cdefcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cdf00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2cdf00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdf04: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2cdf04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdf08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF0Cu;
        // 0x2cdf10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDF14u;
    // 0x2cdf14: 0x0  nop
    ctx->pc = 0x2cdf14u;
    // NOP
    ctx->pc = 0x2cdf18u;
}

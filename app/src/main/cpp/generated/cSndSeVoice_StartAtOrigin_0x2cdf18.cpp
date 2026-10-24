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

// Function: cSndSeVoice_StartAtOrigin
// Address: 0x2cdf18 - 0x2cdff0
void cSndSeVoice_StartAtOrigin_0x2cdf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_StartAtOrigin_0x2cdf18");
#endif

    switch (ctx->pc) {
        case 0x2cdf6cu: goto label_2cdf6c;
        case 0x2cdfb8u: goto label_2cdfb8;
        default: break;
    }

    ctx->pc = 0x2cdf18u;

    // 0x2cdf18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cdf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cdf1c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cdf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cdf20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2cdf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2cdf24: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cdf24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cdf28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2cdf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2cdf2c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2cdf2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2cdf30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2cdf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2cdf34: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2cdf34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2cdf38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cdf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2cdf3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cdf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf40: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2cdf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2cdf44: 0x59c03  sra         $s3, $a1, 16
    ctx->pc = 0x2cdf44u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cdf48: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2cdf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2cdf4c: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x2cdf4cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2cdf50: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2cdf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2cdf54: 0x6ac03  sra         $s5, $a2, 16
    ctx->pc = 0x2cdf54u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2cdf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cdf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cdf5c: 0x89403  sra         $s2, $t0, 16
    ctx->pc = 0x2cdf5cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2cdf60: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2cdf60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf64: 0xc0b368e  jal         func_2CDA38
    ctx->pc = 0x2CDF64u;
    SET_GPR_U32(ctx, 31, 0x2CDF6Cu);
    ctx->pc = 0x2CDF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF64u;
    // 0x2cdf68: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA38u, 0x2CDF64u, 0x2CDF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF6Cu;
label_2cdf6c:
    // 0x2cdf6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdf70: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CDF70u;
    {
        const bool branch_taken_0x2cdf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF70u;
        // 0x2cdf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf70) {
            ctx->pc = 0x2CDFC0u;
            goto label_2cdfc0;
        }
    }
    ctx->pc = 0x2CDF78u;
    // 0x2cdf78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cdf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cdf7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cdf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdf80: 0xa6110028  sh          $s1, 0x28($s0)
    ctx->pc = 0x2cdf80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 17));
    // 0x2cdf84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cdf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf88: 0xa612002a  sh          $s2, 0x2A($s0)
    ctx->pc = 0x2cdf88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 18));
    // 0x2cdf8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2cdf8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf90: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2cdf90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2cdf94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2cdf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf98: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2cdf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2cdf9c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2cdf9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfa0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2cdfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2cdfa4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2cdfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2cdfa8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2cdfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2cdfac: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2cdfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2cdfb0: 0xc0b37fc  jal         func_2CDFF0
    ctx->pc = 0x2CDFB0u;
    SET_GPR_U32(ctx, 31, 0x2CDFB8u);
    ctx->pc = 0x2CDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFB0u;
    // 0x2cdfb4: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDFF0u, 0x2CDFB0u, 0x2CDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFB8u;
label_2cdfb8:
    // 0x2cdfb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDFB8u;
    {
        const bool branch_taken_0x2cdfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFB8u;
        // 0x2cdfbc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfb8) {
            ctx->pc = 0x2CDFC8u;
            goto label_2cdfc8;
        }
    }
    ctx->pc = 0x2CDFC0u;
label_2cdfc0:
    // 0x2cdfc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdfc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfc4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2cdfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cdfc8:
    // 0x2cdfc8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2cdfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cdfcc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2cdfccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cdfd0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cdfd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cdfd4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2cdfd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cdfd8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2cdfd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdfdc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2cdfdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdfe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFE4u;
        // 0x2cdfe8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDFECu;
    // 0x2cdfec: 0x0  nop
    ctx->pc = 0x2cdfecu;
    // NOP
    ctx->pc = 0x2cdff0u;
}

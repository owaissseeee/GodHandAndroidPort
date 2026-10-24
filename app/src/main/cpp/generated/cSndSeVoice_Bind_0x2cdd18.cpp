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

// Function: cSndSeVoice_Bind
// Address: 0x2cdd18 - 0x2cde28
void cSndSeVoice_Bind_0x2cdd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Bind_0x2cdd18");
#endif

    switch (ctx->pc) {
        case 0x2cdd64u: goto label_2cdd64;
        case 0x2cddb8u: goto label_2cddb8;
        case 0x2cddccu: goto label_2cddcc;
        case 0x2cde00u: goto label_2cde00;
        default: break;
    }

    ctx->pc = 0x2cdd18u;

    // 0x2cdd18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cdd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cdd1c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cdd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cdd20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2cdd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2cdd24: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cdd24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cdd28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2cdd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2cdd2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cdd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2cdd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2cdd34: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2cdd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cdd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2cdd3c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2cdd3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd40: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2cdd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2cdd44: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2cdd44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd48: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2cdd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2cdd4c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2cdd4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd50: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2cdd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2cdd54: 0x5ac03  sra         $s5, $a1, 16
    ctx->pc = 0x2cdd54u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cdd58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cdd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cdd5c: 0xc0b368e  jal         func_2CDA38
    ctx->pc = 0x2CDD5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDD64u);
    ctx->pc = 0x2CDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD5Cu;
    // 0x2cdd60: 0x6b403  sra         $s6, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA38u, 0x2CDD5Cu, 0x2CDD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD64u;
label_2cdd64:
    // 0x2cdd64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cdd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdd68: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD68u;
    {
        const bool branch_taken_0x2cdd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cdd68) {
            ctx->pc = 0x2CDD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD68u;
            // 0x2cdd6c: 0xae120038  sw          $s2, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD78u;
            goto label_2cdd78;
        }
    }
    ctx->pc = 0x2CDD70u;
    // 0x2cdd70: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2CDD70u;
    {
        const bool branch_taken_0x2cdd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD70u;
        // 0x2cdd74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd70) {
            ctx->pc = 0x2CDE00u;
            goto label_2cde00;
        }
    }
    ctx->pc = 0x2CDD78u;
label_2cdd78:
    // 0x2cdd78: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDD78u;
    {
        const bool branch_taken_0x2cdd78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD78u;
        // 0x2cdd7c: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd78) {
            ctx->pc = 0x2CDDA0u;
            goto label_2cdda0;
        }
    }
    ctx->pc = 0x2CDD80u;
    // 0x2cdd80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cdd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cdd84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cdd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdd88: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2cdd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2cdd8c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2cdd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2cdd90: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2cdd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2cdd94: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2cdd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2cdd98: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2CDD98u;
    {
        const bool branch_taken_0x2cdd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD98u;
        // 0x2cdd9c: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd98) {
            ctx->pc = 0x2CDDE8u;
            goto label_2cdde8;
        }
    }
    ctx->pc = 0x2CDDA0u;
label_2cdda0:
    // 0x2cdda0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cdda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cdda4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDDA4u;
    {
        const bool branch_taken_0x2cdda4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDA4u;
        // 0x2cdda8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdda4) {
            ctx->pc = 0x2CDDC0u;
            goto label_2cddc0;
        }
    }
    ctx->pc = 0x2CDDACu;
    // 0x2cddac: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x2cddacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2cddb0: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2CDDB0u;
    SET_GPR_U32(ctx, 31, 0x2CDDB8u);
    ctx->pc = 0x2CDDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDB0u;
    // 0x2cddb4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2CDDB0u, 0x2CDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDB8u;
label_2cddb8:
    // 0x2cddb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDDB8u;
    {
        const bool branch_taken_0x2cddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDB8u;
        // 0x2cddbc: 0xc6000044  lwc1        $f0, 0x44($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddb8) {
            ctx->pc = 0x2CDDD0u;
            goto label_2cddd0;
        }
    }
    ctx->pc = 0x2CDDC0u;
label_2cddc0:
    // 0x2cddc0: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x2cddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2cddc4: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2CDDC4u;
    SET_GPR_U32(ctx, 31, 0x2CDDCCu);
    ctx->pc = 0x2CDDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDC4u;
    // 0x2cddc8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2CDDC4u, 0x2CDDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDCCu;
label_2cddcc:
    // 0x2cddcc: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2cddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cddd0:
    // 0x2cddd0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2cddd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2cddd4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2cddd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2cddd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cddd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdddc: 0x0  nop
    ctx->pc = 0x2cdddcu;
    // NOP
    // 0x2cdde0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cdde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cdde4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2cdde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_2cdde8:
    // 0x2cdde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cddecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddf0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2cddf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddf4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2cddf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddf8: 0xc0b37fc  jal         func_2CDFF0
    ctx->pc = 0x2CDDF8u;
    SET_GPR_U32(ctx, 31, 0x2CDE00u);
    ctx->pc = 0x2CDDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDF8u;
    // 0x2cddfc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDFF0u, 0x2CDDF8u, 0x2CDE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE00u;
label_2cde00:
    // 0x2cde00: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2cde00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cde04: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2cde04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cde08: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2cde08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cde0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cde0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cde10: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2cde10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cde14: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2cde14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cde18: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2cde18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cde1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cde1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cde20: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE20u;
        // 0x2cde24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDE28u;
}

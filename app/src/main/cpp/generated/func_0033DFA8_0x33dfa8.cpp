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

// Function: func_0033DFA8
// Address: 0x33dfa8 - 0x33e0a8
void func_0033DFA8_0x33dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033DFA8_0x33dfa8");
#endif

    switch (ctx->pc) {
        case 0x33e014u: goto label_33e014;
        default: break;
    }

    ctx->pc = 0x33dfa8u;

    // 0x33dfa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33dfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33dfac: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x33dfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x33dfb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33dfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dfb4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x33dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x33dfb8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x33dfb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33dfbc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x33dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x33dfc0: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x33dfc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x33dfc4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x33dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x33dfc8: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x33dfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33dfcc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x33dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x33dfd0: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x33dfd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x33dfd4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x33dfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x33dfd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dfdc: 0xa6140002  sh          $s4, 0x2($s0)
    ctx->pc = 0x33dfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x33dfe0: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x33dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x33dfe4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x33dfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dfe8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33dfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33dfec: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x33dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x33dff0: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x33dff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33dff4: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x33dff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x33dff8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x33dff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dffc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x33dffcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e000: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x33e000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x33e004: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33e004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33e008: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x33e008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x33e00c: 0xc0cf75e  jal         func_33DD78
    ctx->pc = 0x33E00Cu;
    SET_GPR_U32(ctx, 31, 0x33E014u);
    ctx->pc = 0x33E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E00Cu;
    // 0x33e010: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DD78u, 0x33E00Cu, 0x33E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E014u;
label_33e014:
    // 0x33e014: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33E014u;
    {
        const bool branch_taken_0x33e014 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x33e014) {
            ctx->pc = 0x33E018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E014u;
            // 0x33e018: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E028u;
            goto label_33e028;
        }
    }
    ctx->pc = 0x33E01Cu;
    // 0x33e01c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33E01Cu;
    {
        const bool branch_taken_0x33e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E01Cu;
        // 0x33e020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e01c) {
            ctx->pc = 0x33E084u;
            goto label_33e084;
        }
    }
    ctx->pc = 0x33E024u;
    // 0x33e024: 0x0  nop
    ctx->pc = 0x33e024u;
    // NOP
label_33e028:
    // 0x33e028: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x33e028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x33e02c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x33e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x33e030: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x33e030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x33e034: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x33e034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x33e038: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x33e038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x33e03c: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x33e03cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x33e040: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x33e040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x33e044: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x33e044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33e048: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x33e048u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33e04c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x33e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x33e050: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x33e050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x33e054: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x33e054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x33e058: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x33e058u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33e05c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x33e05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e060: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x33e060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x33e064: 0xa6140098  sh          $s4, 0x98($s0)
    ctx->pc = 0x33e064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 20));
    // 0x33e068: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x33e068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33e06c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x33e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x33e070: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x33e070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x33e074: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x33e074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x33e078: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x33e078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x33e07c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x33e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x33e080: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x33e080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_33e084:
    // 0x33e084: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x33e084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e088: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x33e088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33e08c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x33e08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e090: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x33e090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33e094: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x33e094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33e098: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x33e098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33e09c: 0x3e00008  jr          $ra
    ctx->pc = 0x33E09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E09Cu;
        // 0x33e0a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E0A4u;
    // 0x33e0a4: 0x0  nop
    ctx->pc = 0x33e0a4u;
    // NOP
    ctx->pc = 0x33e0a8u;
}

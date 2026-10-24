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

// Function: func_0033EA98
// Address: 0x33ea98 - 0x33ebd0
void func_0033EA98_0x33ea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033EA98_0x33ea98");
#endif

    switch (ctx->pc) {
        case 0x33eaccu: goto label_33eacc;
        default: break;
    }

    ctx->pc = 0x33ea98u;

    // 0x33ea98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33ea98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33ea9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33ea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x33eaa0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33eaa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eaa4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x33eaa8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33eaa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eaac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x33eaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eab0: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x33eab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x33eab4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33eab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33eab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33eab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eabc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33eabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33eac0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33eac4: 0xc0cfa88  jal         func_33EA20
    ctx->pc = 0x33EAC4u;
    SET_GPR_U32(ctx, 31, 0x33EACCu);
    ctx->pc = 0x33EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EAC4u;
    // 0x33eac8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EA20u, 0x33EAC4u, 0x33EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EACCu;
label_33eacc:
    // 0x33eacc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x33EACCu;
    {
        const bool branch_taken_0x33eacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EACCu;
        // 0x33ead0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eacc) {
            ctx->pc = 0x33EBB0u;
            goto label_33ebb0;
        }
    }
    ctx->pc = 0x33EAD4u;
    // 0x33ead4: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x33ead4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ead8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x33ead8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x33eadc: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x33EADCu;
    {
        const bool branch_taken_0x33eadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33eadc) {
            ctx->pc = 0x33EAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EADCu;
            // 0x33eae0: 0xa6600002  sh          $zero, 0x2($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EBA0u;
            goto label_33eba0;
        }
    }
    ctx->pc = 0x33EAE4u;
    // 0x33eae4: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x33eae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x33eae8: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x33EAE8u;
    {
        const bool branch_taken_0x33eae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAE8u;
        // 0x33eaec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eae8) {
            ctx->pc = 0x33EBB0u;
            goto label_33ebb0;
        }
    }
    ctx->pc = 0x33EAF0u;
    // 0x33eaf0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x33eaf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33eaf4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x33eaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33eaf8: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x33eaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x33eafc: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x33eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33eb00: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x33eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x33eb04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33eb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33eb08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33eb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33eb0c: 0x14650028  bne         $v1, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x33EB0Cu;
    {
        const bool branch_taken_0x33eb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x33EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB0Cu;
        // 0x33eb10: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb0c) {
            ctx->pc = 0x33EBB0u;
            goto label_33ebb0;
        }
    }
    ctx->pc = 0x33EB14u;
    // 0x33eb14: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x33eb14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33eb18: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x33eb18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x33eb1c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x33eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x33eb20: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x33eb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x33eb24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33eb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33eb28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x33eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x33eb2c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x33eb2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x33eb30: 0x2863001c  slti        $v1, $v1, 0x1C
    ctx->pc = 0x33eb30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x33eb34: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x33EB34u;
    {
        const bool branch_taken_0x33eb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB34u;
        // 0x33eb38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb34) {
            ctx->pc = 0x33EBB0u;
            goto label_33ebb0;
        }
    }
    ctx->pc = 0x33EB3Cu;
    // 0x33eb3c: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x33eb3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33eb40: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x33eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33eb44: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33eb48: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x33eb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x33eb4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33eb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33eb50: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x33eb50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33eb54: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x33eb54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x33eb58: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x33eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33eb5c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x33eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x33eb60: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x33eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x33eb64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33eb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33eb68: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x33eb68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x33eb6c: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x33eb6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33eb70: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x33eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33eb74: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33eb78: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x33eb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x33eb7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33eb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33eb80: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x33eb80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x33eb84: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x33eb84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x33eb88: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x33eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33eb8c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x33eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x33eb90: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x33eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x33eb94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33eb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33eb98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33EB98u;
    {
        const bool branch_taken_0x33eb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB98u;
        // 0x33eb9c: 0xa6630002  sh          $v1, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb98) {
            ctx->pc = 0x33EBACu;
            goto label_33ebac;
        }
    }
    ctx->pc = 0x33EBA0u;
label_33eba0:
    // 0x33eba0: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x33eba0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x33eba4: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x33eba4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33eba8: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x33eba8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_33ebac:
    // 0x33ebac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ebacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ebb0:
    // 0x33ebb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33ebb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ebb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33ebb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ebb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33ebb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ebbc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33ebbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33ebc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33ebc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ebc4: 0x3e00008  jr          $ra
    ctx->pc = 0x33EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBC4u;
        // 0x33ebc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EBCCu;
    // 0x33ebcc: 0x0  nop
    ctx->pc = 0x33ebccu;
    // NOP
    ctx->pc = 0x33ebd0u;
}

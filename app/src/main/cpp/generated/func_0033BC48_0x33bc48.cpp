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

// Function: func_0033BC48
// Address: 0x33bc48 - 0x33bd18
void func_0033BC48_0x33bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BC48_0x33bc48");
#endif

    switch (ctx->pc) {
        case 0x33bc48u: goto label_33bc48;
        case 0x33bc4cu: goto label_33bc4c;
        case 0x33bc50u: goto label_33bc50;
        case 0x33bc54u: goto label_33bc54;
        case 0x33bc58u: goto label_33bc58;
        case 0x33bc5cu: goto label_33bc5c;
        case 0x33bc60u: goto label_33bc60;
        case 0x33bc64u: goto label_33bc64;
        case 0x33bc68u: goto label_33bc68;
        case 0x33bc6cu: goto label_33bc6c;
        case 0x33bc70u: goto label_33bc70;
        case 0x33bc74u: goto label_33bc74;
        case 0x33bc78u: goto label_33bc78;
        case 0x33bc7cu: goto label_33bc7c;
        case 0x33bc80u: goto label_33bc80;
        case 0x33bc84u: goto label_33bc84;
        case 0x33bc88u: goto label_33bc88;
        case 0x33bc8cu: goto label_33bc8c;
        case 0x33bc90u: goto label_33bc90;
        case 0x33bc94u: goto label_33bc94;
        case 0x33bc98u: goto label_33bc98;
        case 0x33bc9cu: goto label_33bc9c;
        case 0x33bca0u: goto label_33bca0;
        case 0x33bca4u: goto label_33bca4;
        case 0x33bca8u: goto label_33bca8;
        case 0x33bcacu: goto label_33bcac;
        case 0x33bcb0u: goto label_33bcb0;
        case 0x33bcb4u: goto label_33bcb4;
        case 0x33bcb8u: goto label_33bcb8;
        case 0x33bcbcu: goto label_33bcbc;
        case 0x33bcc0u: goto label_33bcc0;
        case 0x33bcc4u: goto label_33bcc4;
        case 0x33bcc8u: goto label_33bcc8;
        case 0x33bcccu: goto label_33bccc;
        case 0x33bcd0u: goto label_33bcd0;
        case 0x33bcd4u: goto label_33bcd4;
        case 0x33bcd8u: goto label_33bcd8;
        case 0x33bcdcu: goto label_33bcdc;
        case 0x33bce0u: goto label_33bce0;
        case 0x33bce4u: goto label_33bce4;
        case 0x33bce8u: goto label_33bce8;
        case 0x33bcecu: goto label_33bcec;
        case 0x33bcf0u: goto label_33bcf0;
        case 0x33bcf4u: goto label_33bcf4;
        case 0x33bcf8u: goto label_33bcf8;
        case 0x33bcfcu: goto label_33bcfc;
        case 0x33bd00u: goto label_33bd00;
        case 0x33bd04u: goto label_33bd04;
        case 0x33bd08u: goto label_33bd08;
        case 0x33bd0cu: goto label_33bd0c;
        case 0x33bd10u: goto label_33bd10;
        case 0x33bd14u: goto label_33bd14;
        default: break;
    }

    ctx->pc = 0x33bc48u;

label_33bc48:
    // 0x33bc48: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x33bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_33bc4c:
    // 0x33bc4c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33bc4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_33bc50:
    // 0x33bc50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33bc54:
    // 0x33bc54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_33bc58:
    // 0x33bc58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_33bc5c:
    // 0x33bc5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33bc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_33bc60:
    // 0x33bc60: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x33bc60u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33bc64:
    // 0x33bc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33bc68:
    // 0x33bc68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33bc6c:
    // 0x33bc6c: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x33bc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
label_33bc70:
    // 0x33bc70: 0x26319970  addiu       $s1, $s1, -0x6690
    ctx->pc = 0x33bc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941040));
label_33bc74:
    // 0x33bc74: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x33bc74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_33bc78:
    // 0x33bc78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33bc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33bc7c:
    // 0x33bc7c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x33bc7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33bc80:
    // 0x33bc80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33bc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33bc84:
    // 0x33bc84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33bc84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33bc88:
    // 0x33bc88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_33bc8c:
    // 0x33bc8c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x33bc8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bc90:
    // 0x33bc90: 0x3c100076  lui         $s0, 0x76
    ctx->pc = 0x33bc90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)118 << 16));
label_33bc94:
    // 0x33bc94: 0x26108620  addiu       $s0, $s0, -0x79E0
    ctx->pc = 0x33bc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936096));
label_33bc98:
    // 0x33bc98: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x33bc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33bc9c:
    // 0x33bc9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33bca0:
    // 0x33bca0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33bca4:
    // 0x33bca4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33bca8:
    if (ctx->pc == 0x33BCA8u) {
        ctx->pc = 0x33BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCA4u;
        // 0x33bca8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCACu;
        goto label_33bcac;
    }
    ctx->pc = 0x33BCA4u;
    {
        const bool branch_taken_0x33bca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCA4u;
        // 0x33bca8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bca4) {
            ctx->pc = 0x33BCC0u;
            goto label_33bcc0;
        }
    }
    ctx->pc = 0x33BCACu;
label_33bcac:
    // 0x33bcac: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x33bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_33bcb0:
    // 0x33bcb0: 0x40f809  jalr        $v0
label_33bcb4:
    if (ctx->pc == 0x33BCB4u) {
        ctx->pc = 0x33BCB8u;
        goto label_33bcb8;
    }
    ctx->pc = 0x33BCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33BCB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BCB0u, 0x33BCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BCB8u;
label_33bcb8:
    // 0x33bcb8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x33bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_33bcbc:
    // 0x33bcbc: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x33bcbcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_33bcc0:
    // 0x33bcc0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x33bcc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_33bcc4:
    // 0x33bcc4: 0x643fff6  bgezl       $s2, . + 4 + (-0xA << 2)
label_33bcc8:
    if (ctx->pc == 0x33BCC8u) {
        ctx->pc = 0x33BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCC4u;
        // 0x33bcc8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BCCCu;
        goto label_33bccc;
    }
    ctx->pc = 0x33BCC4u;
    {
        const bool branch_taken_0x33bcc4 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x33bcc4) {
            ctx->pc = 0x33BCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BCC4u;
            // 0x33bcc8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33bca0;
        }
    }
    ctx->pc = 0x33BCCCu;
label_33bccc:
    // 0x33bccc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_33bcd0:
    // 0x33bcd0: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x33bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
label_33bcd4:
    // 0x33bcd4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x33bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_33bcd8:
    // 0x33bcd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33bcd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33bcdc:
    // 0x33bcdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33bce0:
    // 0x33bce0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x33bce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33bce4:
    // 0x33bce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bce8:
    // 0x33bce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33bcec:
    // 0x33bcec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33bcf0:
    // 0x33bcf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bcf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33bcf4:
    // 0x33bcf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33bcf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33bcf8:
    // 0x33bcf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33bcf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33bcfc:
    // 0x33bcfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33bcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33bd00:
    // 0x33bd00: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_33bd04:
    // 0x33bd04: 0x3e00008  jr          $ra
label_33bd08:
    if (ctx->pc == 0x33BD08u) {
        ctx->pc = 0x33BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD04u;
        // 0x33bd08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BD0Cu;
        goto label_33bd0c;
    }
    ctx->pc = 0x33BD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD04u;
        // 0x33bd08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BD0Cu;
label_33bd0c:
    // 0x33bd0c: 0x0  nop
    ctx->pc = 0x33bd0cu;
    // NOP
label_33bd10:
    // 0x33bd10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33bd14:
    // 0x33bd14: 0x0  nop
    ctx->pc = 0x33bd14u;
    // NOP
    ctx->pc = 0x33bd18u;
}

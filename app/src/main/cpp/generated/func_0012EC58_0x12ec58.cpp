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

// Function: func_0012EC58
// Address: 0x12ec58 - 0x12ecf0
void func_0012EC58_0x12ec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012EC58_0x12ec58");
#endif

    switch (ctx->pc) {
        case 0x12ec58u: goto label_12ec58;
        case 0x12ec5cu: goto label_12ec5c;
        case 0x12ec60u: goto label_12ec60;
        case 0x12ec64u: goto label_12ec64;
        case 0x12ec68u: goto label_12ec68;
        case 0x12ec6cu: goto label_12ec6c;
        case 0x12ec70u: goto label_12ec70;
        case 0x12ec74u: goto label_12ec74;
        case 0x12ec78u: goto label_12ec78;
        case 0x12ec7cu: goto label_12ec7c;
        case 0x12ec80u: goto label_12ec80;
        case 0x12ec84u: goto label_12ec84;
        case 0x12ec88u: goto label_12ec88;
        case 0x12ec8cu: goto label_12ec8c;
        case 0x12ec90u: goto label_12ec90;
        case 0x12ec94u: goto label_12ec94;
        case 0x12ec98u: goto label_12ec98;
        case 0x12ec9cu: goto label_12ec9c;
        case 0x12eca0u: goto label_12eca0;
        case 0x12eca4u: goto label_12eca4;
        case 0x12eca8u: goto label_12eca8;
        case 0x12ecacu: goto label_12ecac;
        case 0x12ecb0u: goto label_12ecb0;
        case 0x12ecb4u: goto label_12ecb4;
        case 0x12ecb8u: goto label_12ecb8;
        case 0x12ecbcu: goto label_12ecbc;
        case 0x12ecc0u: goto label_12ecc0;
        case 0x12ecc4u: goto label_12ecc4;
        case 0x12ecc8u: goto label_12ecc8;
        case 0x12ecccu: goto label_12eccc;
        case 0x12ecd0u: goto label_12ecd0;
        case 0x12ecd4u: goto label_12ecd4;
        case 0x12ecd8u: goto label_12ecd8;
        case 0x12ecdcu: goto label_12ecdc;
        case 0x12ece0u: goto label_12ece0;
        case 0x12ece4u: goto label_12ece4;
        case 0x12ece8u: goto label_12ece8;
        case 0x12ececu: goto label_12ecec;
        default: break;
    }

    ctx->pc = 0x12ec58u;

label_12ec58:
    // 0x12ec58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ec58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12ec5c:
    // 0x12ec5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12ec5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_12ec60:
    // 0x12ec60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ec60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12ec64:
    // 0x12ec64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ec64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ec68:
    // 0x12ec68: 0x8e060190  lw          $a2, 0x190($s0)
    ctx->pc = 0x12ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_12ec6c:
    // 0x12ec6c: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
label_12ec70:
    if (ctx->pc == 0x12EC70u) {
        ctx->pc = 0x12EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC6Cu;
        // 0x12ec70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC74u;
        goto label_12ec74;
    }
    ctx->pc = 0x12EC6Cu;
    {
        const bool branch_taken_0x12ec6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC6Cu;
        // 0x12ec70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec6c) {
            ctx->pc = 0x12ECE0u;
            goto label_12ece0;
        }
    }
    ctx->pc = 0x12EC74u;
label_12ec74:
    // 0x12ec74: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
label_12ec78:
    if (ctx->pc == 0x12EC78u) {
        ctx->pc = 0x12EC7Cu;
        goto label_12ec7c;
    }
    ctx->pc = 0x12EC74u;
    {
        const bool branch_taken_0x12ec74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x12ec74) {
            ctx->pc = 0x12EC98u;
            goto label_12ec98;
        }
    }
    ctx->pc = 0x12EC7Cu;
label_12ec7c:
    // 0x12ec7c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x12ec7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12ec80:
    // 0x12ec80: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x12ec80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_12ec84:
    // 0x12ec84: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
label_12ec88:
    if (ctx->pc == 0x12EC88u) {
        ctx->pc = 0x12EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC84u;
        // 0x12ec88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC8Cu;
        goto label_12ec8c;
    }
    ctx->pc = 0x12EC84u;
    {
        const bool branch_taken_0x12ec84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec84) {
            ctx->pc = 0x12EC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC84u;
            // 0x12ec88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECE4u;
            goto label_12ece4;
        }
    }
    ctx->pc = 0x12EC8Cu;
label_12ec8c:
    // 0x12ec8c: 0x0  nop
    ctx->pc = 0x12ec8cu;
    // NOP
label_12ec90:
    // 0x12ec90: 0x54a6fffb  bnel        $a1, $a2, . + 4 + (-0x5 << 2)
label_12ec94:
    if (ctx->pc == 0x12EC94u) {
        ctx->pc = 0x12EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC90u;
        // 0x12ec94: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC98u;
        goto label_12ec98;
    }
    ctx->pc = 0x12EC90u;
    {
        const bool branch_taken_0x12ec90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x12ec90) {
            ctx->pc = 0x12EC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC90u;
            // 0x12ec94: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ec80;
        }
    }
    ctx->pc = 0x12EC98u;
label_12ec98:
    // 0x12ec98: 0x50c00012  beql        $a2, $zero, . + 4 + (0x12 << 2)
label_12ec9c:
    if (ctx->pc == 0x12EC9Cu) {
        ctx->pc = 0x12EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC98u;
        // 0x12ec9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECA0u;
        goto label_12eca0;
    }
    ctx->pc = 0x12EC98u;
    {
        const bool branch_taken_0x12ec98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec98) {
            ctx->pc = 0x12EC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC98u;
            // 0x12ec9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECE4u;
            goto label_12ece4;
        }
    }
    ctx->pc = 0x12ECA0u;
label_12eca0:
    // 0x12eca0: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x12eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_12eca4:
    // 0x12eca4: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
label_12eca8:
    if (ctx->pc == 0x12ECA8u) {
        ctx->pc = 0x12ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECA4u;
        // 0x12eca8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECACu;
        goto label_12ecac;
    }
    ctx->pc = 0x12ECA4u;
    {
        const bool branch_taken_0x12eca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x12ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECA4u;
        // 0x12eca8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eca4) {
            ctx->pc = 0x12ECB4u;
            goto label_12ecb4;
        }
    }
    ctx->pc = 0x12ECACu;
label_12ecac:
    // 0x12ecac: 0x10000002  b           . + 4 + (0x2 << 2)
label_12ecb0:
    if (ctx->pc == 0x12ECB0u) {
        ctx->pc = 0x12ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECACu;
        // 0x12ecb0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECB4u;
        goto label_12ecb4;
    }
    ctx->pc = 0x12ECACu;
    {
        const bool branch_taken_0x12ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECACu;
        // 0x12ecb0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecac) {
            ctx->pc = 0x12ECB8u;
            goto label_12ecb8;
        }
    }
    ctx->pc = 0x12ECB4u;
label_12ecb4:
    // 0x12ecb4: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x12ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
label_12ecb8:
    // 0x12ecb8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_12ecbc:
    if (ctx->pc == 0x12ECBCu) {
        ctx->pc = 0x12ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECB8u;
        // 0x12ecbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECC0u;
        goto label_12ecc0;
    }
    ctx->pc = 0x12ECB8u;
    {
        const bool branch_taken_0x12ecb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECB8u;
        // 0x12ecbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecb8) {
            ctx->pc = 0x12ECD4u;
            goto label_12ecd4;
        }
    }
    ctx->pc = 0x12ECC0u;
label_12ecc0:
    // 0x12ecc0: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x12ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_12ecc4:
    // 0x12ecc4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x12ecc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_12ecc8:
    // 0x12ecc8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x12ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12eccc:
    // 0x12eccc: 0x60f809  jalr        $v1
label_12ecd0:
    if (ctx->pc == 0x12ECD0u) {
        ctx->pc = 0x12ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECCCu;
        // 0x12ecd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECD4u;
        goto label_12ecd4;
    }
    ctx->pc = 0x12ECCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12ECD4u);
        ctx->pc = 0x12ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECCCu;
        // 0x12ecd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECCCu, 0x12ECD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12ECD4u;
label_12ecd4:
    // 0x12ecd4: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_12ecd8:
    // 0x12ecd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12ecdc:
    // 0x12ecdc: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x12ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
label_12ece0:
    // 0x12ece0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ece0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12ece4:
    // 0x12ece4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ece4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ece8:
    // 0x12ece8: 0x3e00008  jr          $ra
label_12ecec:
    if (ctx->pc == 0x12ECECu) {
        ctx->pc = 0x12ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECE8u;
        // 0x12ecec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECF0u;
        goto label_fallthrough_0x12ece8;
    }
    ctx->pc = 0x12ECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECE8u;
        // 0x12ecec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ECE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12ece8:
    ctx->pc = 0x12ECF0u;
}

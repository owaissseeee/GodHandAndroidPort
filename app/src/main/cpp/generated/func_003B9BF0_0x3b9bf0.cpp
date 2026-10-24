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

// Function: func_003B9BF0
// Address: 0x3b9bf0 - 0x3b9ce8
void func_003B9BF0_0x3b9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9BF0_0x3b9bf0");
#endif

    switch (ctx->pc) {
        case 0x3b9c10u: goto label_3b9c10;
        case 0x3b9c20u: goto label_3b9c20;
        case 0x3b9c3cu: goto label_3b9c3c;
        case 0x3b9c58u: goto label_3b9c58;
        case 0x3b9c68u: goto label_3b9c68;
        case 0x3b9ca0u: goto label_3b9ca0;
        case 0x3b9cb4u: goto label_3b9cb4;
        default: break;
    }

    ctx->pc = 0x3b9bf0u;

    // 0x3b9bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b9bf4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b9bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b9bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b9bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9bfc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3b9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3b9c00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b9c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b9c04: 0x8e1100c0  lw          $s1, 0xC0($s0)
    ctx->pc = 0x3b9c04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x3b9c08: 0xc0eea00  jal         func_3BA800
    ctx->pc = 0x3B9C08u;
    SET_GPR_U32(ctx, 31, 0x3B9C10u);
    ctx->pc = 0x3B9C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9C08u;
    // 0x3b9c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA800u, 0x3B9C08u, 0x3B9C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9C10u;
label_3b9c10:
    // 0x3b9c10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9C10u;
    {
        const bool branch_taken_0x3b9c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C10u;
        // 0x3b9c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9c10) {
            ctx->pc = 0x3B9C20u;
            goto label_3b9c20;
        }
    }
    ctx->pc = 0x3B9C18u;
    // 0x3b9c18: 0xc0ee816  jal         func_3BA058
    ctx->pc = 0x3B9C18u;
    SET_GPR_U32(ctx, 31, 0x3B9C20u);
    ctx->pc = 0x3B9C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9C18u;
    // 0x3b9c1c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA058u, 0x3B9C18u, 0x3B9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9C20u;
label_3b9c20:
    // 0x3b9c20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3b9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b9c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9c28: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9C28u;
    {
        const bool branch_taken_0x3b9c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b9c28) {
            ctx->pc = 0x3B9C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9C28u;
            // 0x3b9c2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9C48u;
            goto label_3b9c48;
        }
    }
    ctx->pc = 0x3B9C30u;
    // 0x3b9c30: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x3b9c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x3b9c34: 0xc0ee800  jal         func_3BA000
    ctx->pc = 0x3B9C34u;
    SET_GPR_U32(ctx, 31, 0x3B9C3Cu);
    ctx->pc = 0x3B9C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9C34u;
    // 0x3b9c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA000u, 0x3B9C34u, 0x3B9C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9C3Cu;
label_3b9c3c:
    // 0x3b9c3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9c40: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B9C40u;
    {
        const bool branch_taken_0x3b9c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C40u;
        // 0x3b9c44: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9c40) {
            ctx->pc = 0x3B9CD0u;
            goto label_3b9cd0;
        }
    }
    ctx->pc = 0x3B9C48u;
label_3b9c48:
    // 0x3b9c48: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3B9C48u;
    {
        const bool branch_taken_0x3b9c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b9c48) {
            ctx->pc = 0x3B9C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9C48u;
            // 0x3b9c4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9CD4u;
            goto label_3b9cd4;
        }
    }
    ctx->pc = 0x3B9C50u;
    // 0x3b9c50: 0xc0ee832  jal         func_3BA0C8
    ctx->pc = 0x3B9C50u;
    SET_GPR_U32(ctx, 31, 0x3B9C58u);
    ctx->pc = 0x3B9C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9C50u;
    // 0x3b9c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA0C8u, 0x3B9C50u, 0x3B9C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9C58u;
label_3b9c58:
    // 0x3b9c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b9c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9c5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b9c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9c60: 0xc0eea0c  jal         func_3BA830
    ctx->pc = 0x3B9C60u;
    SET_GPR_U32(ctx, 31, 0x3B9C68u);
    ctx->pc = 0x3B9C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9C60u;
    // 0x3b9c64: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA830u, 0x3B9C60u, 0x3B9C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9C68u;
label_3b9c68:
    // 0x3b9c68: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x3b9c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3b9c6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3b9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b9c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b9c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9c74: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3b9c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9c78: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x3b9c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3b9c7c: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x3b9c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3b9c80: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x3b9c80u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3b9c84: 0xae070094  sw          $a3, 0x94($s0)
    ctx->pc = 0x3b9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 7));
    // 0x3b9c88: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3b9c88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3b9c8c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3b9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3b9c90: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3b9c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3b9c94: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x3b9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x3b9c98: 0xc0eea00  jal         func_3BA800
    ctx->pc = 0x3B9C98u;
    SET_GPR_U32(ctx, 31, 0x3B9CA0u);
    ctx->pc = 0x3B9C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9C98u;
    // 0x3b9c9c: 0xae060088  sw          $a2, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA800u, 0x3B9C98u, 0x3B9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9CA0u;
label_3b9ca0:
    // 0x3b9ca0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b9ca4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B9CA4u;
    {
        const bool branch_taken_0x3b9ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9CA4u;
        // 0x3b9ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ca4) {
            ctx->pc = 0x3B9CD0u;
            goto label_3b9cd0;
        }
    }
    ctx->pc = 0x3B9CACu;
    // 0x3b9cac: 0xc0ee816  jal         func_3BA058
    ctx->pc = 0x3B9CACu;
    SET_GPR_U32(ctx, 31, 0x3B9CB4u);
    ctx->pc = 0x3BA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA058u, 0x3B9CACu, 0x3B9CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9CB4u;
label_3b9cb4:
    // 0x3b9cb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3b9cb8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3b9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b9cbc: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x3b9cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3b9cc0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x3b9cc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3b9cc4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3b9cc4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3b9cc8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3b9cc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3b9ccc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3b9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_3b9cd0:
    // 0x3b9cd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b9cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9cd4:
    // 0x3b9cd4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3b9cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b9cd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b9cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9CDCu;
        // 0x3b9ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9CE4u;
    // 0x3b9ce4: 0x0  nop
    ctx->pc = 0x3b9ce4u;
    // NOP
    ctx->pc = 0x3b9ce8u;
}

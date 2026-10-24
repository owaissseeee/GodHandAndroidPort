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

// Function: func_00333C00
// Address: 0x333c00 - 0x333ce0
void func_00333C00_0x333c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333C00_0x333c00");
#endif

    switch (ctx->pc) {
        case 0x333c28u: goto label_333c28;
        case 0x333c4cu: goto label_333c4c;
        case 0x333c60u: goto label_333c60;
        case 0x333c84u: goto label_333c84;
        case 0x333cc4u: goto label_333cc4;
        default: break;
    }

    ctx->pc = 0x333c00u;

    // 0x333c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x333c04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x333c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x333c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x333c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c0c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x333c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x333c10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x333c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x333c14: 0x248445b0  addiu       $a0, $a0, 0x45B0
    ctx->pc = 0x333c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17840));
    // 0x333c18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x333c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x333c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x333c20: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x333C20u;
    SET_GPR_U32(ctx, 31, 0x333C28u);
    ctx->pc = 0x333C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C20u;
    // 0x333c24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x333C20u, 0x333C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C28u;
label_333c28:
    // 0x333c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x333C2Cu;
    {
        const bool branch_taken_0x333c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C2Cu;
        // 0x333c30: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c2c) {
            ctx->pc = 0x333C58u;
            goto label_333c58;
        }
    }
    ctx->pc = 0x333C34u;
    // 0x333c34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x333c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x333c38: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x333c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x333c3c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x333c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x333c40: 0x248445b8  addiu       $a0, $a0, 0x45B8
    ctx->pc = 0x333c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17848));
    // 0x333c44: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x333C44u;
    SET_GPR_U32(ctx, 31, 0x333C4Cu);
    ctx->pc = 0x333C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C44u;
    // 0x333c48: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x333C44u, 0x333C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C4Cu;
label_333c4c:
    // 0x333c4c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x333C4Cu;
    {
        const bool branch_taken_0x333c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C4Cu;
        // 0x333c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c4c) {
            ctx->pc = 0x333CC8u;
            goto label_333cc8;
        }
    }
    ctx->pc = 0x333C54u;
    // 0x333c54: 0x0  nop
    ctx->pc = 0x333c54u;
    // NOP
label_333c58:
    // 0x333c58: 0xc0ccec0  jal         func_333B00
    ctx->pc = 0x333C58u;
    SET_GPR_U32(ctx, 31, 0x333C60u);
    ctx->pc = 0x333B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333B00u, 0x333C58u, 0x333C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C60u;
label_333c60:
    // 0x333c60: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x333c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x333c64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x333c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333c68: 0x24639dc0  addiu       $v1, $v1, -0x6240
    ctx->pc = 0x333c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942144));
    // 0x333c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x333c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c74: 0x1447000a  bne         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x333C74u;
    {
        const bool branch_taken_0x333c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x333C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C74u;
        // 0x333c78: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c74) {
            ctx->pc = 0x333CA0u;
            goto label_333ca0;
        }
    }
    ctx->pc = 0x333C7Cu;
    // 0x333c7c: 0xc0cced0  jal         func_333B40
    ctx->pc = 0x333C7Cu;
    SET_GPR_U32(ctx, 31, 0x333C84u);
    ctx->pc = 0x333B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333B40u, 0x333C7Cu, 0x333C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C84u;
label_333c84:
    // 0x333c84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c88: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x333c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x333c8c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x333c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333c90: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x333c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x333c94: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x333c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x333c98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x333C98u;
    {
        const bool branch_taken_0x333c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C98u;
        // 0x333c9c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c98) {
            ctx->pc = 0x333CC8u;
            goto label_333cc8;
        }
    }
    ctx->pc = 0x333CA0u;
label_333ca0:
    // 0x333ca0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x333ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x333ca4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x333ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x333ca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x333ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333cac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x333CACu;
    {
        const bool branch_taken_0x333cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CACu;
        // 0x333cb0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333cac) {
            ctx->pc = 0x333CC4u;
            goto label_333cc4;
        }
    }
    ctx->pc = 0x333CB4u;
    // 0x333cb4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x333cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x333cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cbc: 0xc0cce84  jal         func_333A10
    ctx->pc = 0x333CBCu;
    SET_GPR_U32(ctx, 31, 0x333CC4u);
    ctx->pc = 0x333CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CBCu;
    // 0x333cc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333A10u, 0x333CBCu, 0x333CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CC4u;
label_333cc4:
    // 0x333cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333cc8:
    // 0x333cc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x333cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333ccc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x333cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x333cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x333cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x333CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CD4u;
        // 0x333cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333CDCu;
    // 0x333cdc: 0x0  nop
    ctx->pc = 0x333cdcu;
    // NOP
    ctx->pc = 0x333ce0u;
}

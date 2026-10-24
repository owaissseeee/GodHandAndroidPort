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

// Function: func_00137BB8
// Address: 0x137bb8 - 0x137cb8
void func_00137BB8_0x137bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00137BB8_0x137bb8");
#endif

    switch (ctx->pc) {
        case 0x137c10u: goto label_137c10;
        case 0x137c30u: goto label_137c30;
        case 0x137c40u: goto label_137c40;
        default: break;
    }

    ctx->pc = 0x137bb8u;

    // 0x137bb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x137bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x137bbc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x137bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x137bc0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x137bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x137bc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x137bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137bc8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x137bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x137bcc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x137bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x137bd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x137bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x137bd4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x137bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x137bd8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x137bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x137bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137be0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x137be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x137be4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137BE4u;
    {
        const bool branch_taken_0x137be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BE4u;
        // 0x137be8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137be4) {
            ctx->pc = 0x137BF4u;
            goto label_137bf4;
        }
    }
    ctx->pc = 0x137BECu;
    // 0x137bec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x137BECu;
    {
        const bool branch_taken_0x137bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BECu;
        // 0x137bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bec) {
            ctx->pc = 0x137C8Cu;
            goto label_137c8c;
        }
    }
    ctx->pc = 0x137BF4u;
label_137bf4:
    // 0x137bf4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x137bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x137bf8: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x137bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x137bfc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x137bfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c00: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x137C00u;
    {
        const bool branch_taken_0x137c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C00u;
        // 0x137c04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c00) {
            ctx->pc = 0x137C74u;
            goto label_137c74;
        }
    }
    ctx->pc = 0x137C08u;
    // 0x137c08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x137c08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c0c: 0x0  nop
    ctx->pc = 0x137c0cu;
    // NOP
label_137c10:
    // 0x137c10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x137c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x137c14: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x137c18: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x137c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x137c1c: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x137C1Cu;
    {
        const bool branch_taken_0x137c1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x137C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C1Cu;
        // 0x137c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c1c) {
            ctx->pc = 0x137C38u;
            goto label_137c38;
        }
    }
    ctx->pc = 0x137C24u;
    // 0x137c24: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x137c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x137c28: 0xc07e10e  jal         func_1F8438
    ctx->pc = 0x137C28u;
    SET_GPR_U32(ctx, 31, 0x137C30u);
    ctx->pc = 0x137C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C28u;
    // 0x137c2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8438u, 0x137C28u, 0x137C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C30u;
label_137c30:
    // 0x137c30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137C30u;
    {
        const bool branch_taken_0x137c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C30u;
        // 0x137c34: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c30) {
            ctx->pc = 0x137C44u;
            goto label_137c44;
        }
    }
    ctx->pc = 0x137C38u;
label_137c38:
    // 0x137c38: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x137C38u;
    SET_GPR_U32(ctx, 31, 0x137C40u);
    ctx->pc = 0x137C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C38u;
    // 0x137c3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x137C38u, 0x137C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C40u;
label_137c40:
    // 0x137c40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x137c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_137c44:
    // 0x137c44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x137C44u;
    {
        const bool branch_taken_0x137c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137c44) {
            ctx->pc = 0x137C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137C44u;
            // 0x137c48: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137C64u;
            goto label_137c64;
        }
    }
    ctx->pc = 0x137C4Cu;
    // 0x137c4c: 0x9202003e  lbu         $v0, 0x3E($s0)
    ctx->pc = 0x137c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x137c50: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x137c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x137c54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137C54u;
    {
        const bool branch_taken_0x137c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C54u;
        // 0x137c58: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c54) {
            ctx->pc = 0x137C64u;
            goto label_137c64;
        }
    }
    ctx->pc = 0x137C5Cu;
    // 0x137c5c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x137c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c60: 0x9213003e  lbu         $s3, 0x3E($s0)
    ctx->pc = 0x137c60u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_137c64:
    // 0x137c64: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x137c64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x137c68: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x137c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x137c6c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x137C6Cu;
    {
        const bool branch_taken_0x137c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C6Cu;
        // 0x137c70: 0x26b5006c  addiu       $s5, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c6c) {
            ctx->pc = 0x137C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137c10;
        }
    }
    ctx->pc = 0x137C74u;
label_137c74:
    // 0x137c74: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x137C74u;
    {
        const bool branch_taken_0x137c74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x137c74) {
            ctx->pc = 0x137C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137C74u;
            // 0x137c78: 0xae510030  sw          $s1, 0x30($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137C88u;
            goto label_137c88;
        }
    }
    ctx->pc = 0x137C7Cu;
    // 0x137c7c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x137c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x137c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137C80u;
    {
        const bool branch_taken_0x137c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C80u;
        // 0x137c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c80) {
            ctx->pc = 0x137C8Cu;
            goto label_137c8c;
        }
    }
    ctx->pc = 0x137C88u;
label_137c88:
    // 0x137c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137c8c:
    // 0x137c8c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x137c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137c90: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x137c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137c94: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x137c94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137c98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x137c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137c9c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x137c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137ca0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x137ca0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137ca4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x137ca4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137cac: 0x3e00008  jr          $ra
    ctx->pc = 0x137CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CACu;
        // 0x137cb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137CB4u;
    // 0x137cb4: 0x0  nop
    ctx->pc = 0x137cb4u;
    // NOP
    ctx->pc = 0x137cb8u;
}

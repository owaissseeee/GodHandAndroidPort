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

// Function: HitNode_dispatchByKind
// Address: 0x2c0a98 - 0x2c0b38
void HitNode_dispatchByKind_0x2c0a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitNode_dispatchByKind_0x2c0a98");
#endif

    switch (ctx->pc) {
        case 0x2c0b00u: goto label_2c0b00;
        case 0x2c0b10u: goto label_2c0b10;
        case 0x2c0b20u: goto label_2c0b20;
        default: break;
    }

    ctx->pc = 0x2c0a98u;

    // 0x2c0a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0aa0: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0AA0u;
    {
        const bool branch_taken_0x2c0aa0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AA0u;
        // 0x2c0aa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0aa0) {
            ctx->pc = 0x2C0ABCu;
            goto label_2c0abc;
        }
    }
    ctx->pc = 0x2C0AA8u;
    // 0x2c0aa8: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x2c0aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x2c0aac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c0aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c0ab0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0ab4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C0AB4u;
    {
        const bool branch_taken_0x2c0ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AB4u;
        // 0x2c0ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ab4) {
            ctx->pc = 0x2C0B28u;
            goto label_2c0b28;
        }
    }
    ctx->pc = 0x2C0ABCu;
label_2c0abc:
    // 0x2c0abc: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x2c0abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x2c0ac0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c0ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0ac4: 0x30460006  andi        $a2, $v0, 0x6
    ctx->pc = 0x2c0ac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2c0ac8: 0x10c3000f  beq         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C0AC8u;
    {
        const bool branch_taken_0x2c0ac8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AC8u;
        // 0x2c0acc: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ac8) {
            ctx->pc = 0x2C0B08u;
            goto label_2c0b08;
        }
    }
    ctx->pc = 0x2C0AD0u;
    // 0x2c0ad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0AD0u;
    {
        const bool branch_taken_0x2c0ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD0u;
        // 0x2c0ad4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ad0) {
            ctx->pc = 0x2C0AE8u;
            goto label_2c0ae8;
        }
    }
    ctx->pc = 0x2C0AD8u;
    // 0x2c0ad8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0AD8u;
    {
        const bool branch_taken_0x2c0ad8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD8u;
        // 0x2c0adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ad8) {
            ctx->pc = 0x2C0AF8u;
            goto label_2c0af8;
        }
    }
    ctx->pc = 0x2C0AE0u;
    // 0x2c0ae0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C0AE0u;
    {
        const bool branch_taken_0x2c0ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AE0u;
        // 0x2c0ae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ae0) {
            ctx->pc = 0x2C0B2Cu;
            goto label_2c0b2c;
        }
    }
    ctx->pc = 0x2C0AE8u;
label_2c0ae8:
    // 0x2c0ae8: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C0AE8u;
    {
        const bool branch_taken_0x2c0ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AE8u;
        // 0x2c0aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ae8) {
            ctx->pc = 0x2C0B18u;
            goto label_2c0b18;
        }
    }
    ctx->pc = 0x2C0AF0u;
    // 0x2c0af0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C0AF0u;
    {
        const bool branch_taken_0x2c0af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF0u;
        // 0x2c0af4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0af0) {
            ctx->pc = 0x2C0B2Cu;
            goto label_2c0b2c;
        }
    }
    ctx->pc = 0x2C0AF8u;
label_2c0af8:
    // 0x2c0af8: 0xc0b02ce  jal         func_2C0B38
    ctx->pc = 0x2C0AF8u;
    SET_GPR_U32(ctx, 31, 0x2C0B00u);
    ctx->pc = 0x2C0B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0B38u, 0x2C0AF8u, 0x2C0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B00u;
label_2c0b00:
    // 0x2c0b00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C0B00u;
    {
        const bool branch_taken_0x2c0b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B00u;
        // 0x2c0b04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b00) {
            ctx->pc = 0x2C0B2Cu;
            goto label_2c0b2c;
        }
    }
    ctx->pc = 0x2C0B08u;
label_2c0b08:
    // 0x2c0b08: 0xc0b030a  jal         func_2C0C28
    ctx->pc = 0x2C0B08u;
    SET_GPR_U32(ctx, 31, 0x2C0B10u);
    ctx->pc = 0x2C0C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C28u, 0x2C0B08u, 0x2C0B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B10u;
label_2c0b10:
    // 0x2c0b10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0B10u;
    {
        const bool branch_taken_0x2c0b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B10u;
        // 0x2c0b14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b10) {
            ctx->pc = 0x2C0B2Cu;
            goto label_2c0b2c;
        }
    }
    ctx->pc = 0x2C0B18u;
label_2c0b18:
    // 0x2c0b18: 0xc0b032c  jal         func_2C0CB0
    ctx->pc = 0x2C0B18u;
    SET_GPR_U32(ctx, 31, 0x2C0B20u);
    ctx->pc = 0x2C0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0CB0u, 0x2C0B18u, 0x2C0B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B20u;
label_2c0b20:
    // 0x2c0b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0B20u;
    {
        const bool branch_taken_0x2c0b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B20u;
        // 0x2c0b24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b20) {
            ctx->pc = 0x2C0B2Cu;
            goto label_2c0b2c;
        }
    }
    ctx->pc = 0x2C0B28u;
label_2c0b28:
    // 0x2c0b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0b2c:
    // 0x2c0b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B2Cu;
        // 0x2c0b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0B34u;
    // 0x2c0b34: 0x0  nop
    ctx->pc = 0x2c0b34u;
    // NOP
    ctx->pc = 0x2c0b38u;
}

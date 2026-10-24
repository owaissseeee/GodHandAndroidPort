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

// Function: sfply_IsAnyoneTerm
// Address: 0x357d00 - 0x357da0
void sfply_IsAnyoneTerm_0x357d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfply_IsAnyoneTerm_0x357d00");
#endif

    switch (ctx->pc) {
        case 0x357d1cu: goto label_357d1c;
        case 0x357d2cu: goto label_357d2c;
        case 0x357d40u: goto label_357d40;
        case 0x357d54u: goto label_357d54;
        case 0x357d5cu: goto label_357d5c;
        case 0x357d6cu: goto label_357d6c;
        case 0x357d78u: goto label_357d78;
        default: break;
    }

    ctx->pc = 0x357d00u;

    // 0x357d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357d04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x357d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x357d08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357d10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357d14: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357D14u;
    SET_GPR_U32(ctx, 31, 0x357D1Cu);
    ctx->pc = 0x357D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D14u;
    // 0x357d18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357D14u, 0x357D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D1Cu;
label_357d1c:
    // 0x357d1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357D1Cu;
    {
        const bool branch_taken_0x357d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D1Cu;
        // 0x357d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d1c) {
            ctx->pc = 0x357D34u;
            goto label_357d34;
        }
    }
    ctx->pc = 0x357D24u;
    // 0x357d24: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x357D24u;
    SET_GPR_U32(ctx, 31, 0x357D2Cu);
    ctx->pc = 0x357D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D24u;
    // 0x357d28: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x357D24u, 0x357D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D2Cu;
label_357d2c:
    // 0x357d2c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x357D2Cu;
    {
        const bool branch_taken_0x357d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D2Cu;
        // 0x357d30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d2c) {
            ctx->pc = 0x357D88u;
            goto label_357d88;
        }
    }
    ctx->pc = 0x357D34u;
label_357d34:
    // 0x357d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d38: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357D38u;
    SET_GPR_U32(ctx, 31, 0x357D40u);
    ctx->pc = 0x357D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D38u;
    // 0x357d3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357D38u, 0x357D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D40u;
label_357d40:
    // 0x357d40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x357D40u;
    {
        const bool branch_taken_0x357d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D40u;
        // 0x357d44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d40) {
            ctx->pc = 0x357D68u;
            goto label_357d68;
        }
    }
    ctx->pc = 0x357D48u;
    // 0x357d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d4c: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x357D4Cu;
    SET_GPR_U32(ctx, 31, 0x357D54u);
    ctx->pc = 0x357D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D4Cu;
    // 0x357d50: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x357D4Cu, 0x357D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D54u;
label_357d54:
    // 0x357d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357D54u;
    {
        const bool branch_taken_0x357d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D54u;
        // 0x357d58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d54) {
            ctx->pc = 0x357D68u;
            goto label_357d68;
        }
    }
    ctx->pc = 0x357D5Cu;
label_357d5c:
    // 0x357d5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x357D5Cu;
    {
        const bool branch_taken_0x357d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D5Cu;
        // 0x357d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d5c) {
            ctx->pc = 0x357D88u;
            goto label_357d88;
        }
    }
    ctx->pc = 0x357D64u;
    // 0x357d64: 0x0  nop
    ctx->pc = 0x357d64u;
    // NOP
label_357d68:
    // 0x357d68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x357d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357d6c:
    // 0x357d6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x357d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x357d70: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x357D70u;
    SET_GPR_U32(ctx, 31, 0x357D78u);
    ctx->pc = 0x357D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D70u;
    // 0x357d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x357D70u, 0x357D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D78u;
label_357d78:
    // 0x357d78: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x357D78u;
    {
        const bool branch_taken_0x357d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D78u;
        // 0x357d7c: 0x2e030008  sltiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d78) {
            ctx->pc = 0x357D5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357d5c;
        }
    }
    ctx->pc = 0x357D80u;
    // 0x357d80: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x357D80u;
    {
        const bool branch_taken_0x357d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D80u;
        // 0x357d84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d80) {
            ctx->pc = 0x357D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357d6c;
        }
    }
    ctx->pc = 0x357D88u;
label_357d88:
    // 0x357d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357d94: 0x3e00008  jr          $ra
    ctx->pc = 0x357D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D94u;
        // 0x357d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357D9Cu;
    // 0x357d9c: 0x0  nop
    ctx->pc = 0x357d9cu;
    // NOP
    ctx->pc = 0x357da0u;
}

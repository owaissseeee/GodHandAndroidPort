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

// Function: func_001DBE18
// Address: 0x1dbe18 - 0x1dbeb0
void func_001DBE18_0x1dbe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DBE18_0x1dbe18");
#endif

    switch (ctx->pc) {
        case 0x1dbe40u: goto label_1dbe40;
        case 0x1dbe7cu: goto label_1dbe7c;
        default: break;
    }

    ctx->pc = 0x1dbe18u;

    // 0x1dbe18: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1dbe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1dbe1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dbe1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe20: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1dbe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1dbe24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbe24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dbe28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe2c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1dbe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1dbe30: 0x24872e64  addiu       $a3, $a0, 0x2E64
    ctx->pc = 0x1dbe30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 11876));
    // 0x1dbe34: 0x24852e68  addiu       $a1, $a0, 0x2E68
    ctx->pc = 0x1dbe34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 11880));
    // 0x1dbe38: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1dbe38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe3c: 0x0  nop
    ctx->pc = 0x1dbe3cu;
    // NOP
label_1dbe40:
    // 0x1dbe40: 0x9ca20000  lwu         $v0, 0x0($a1)
    ctx->pc = 0x1dbe40u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbe44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dbe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dbe48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBE48u;
    {
        const bool branch_taken_0x1dbe48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE48u;
        // 0x1dbe4c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe48) {
            ctx->pc = 0x1DBE5Cu;
            goto label_1dbe5c;
        }
    }
    ctx->pc = 0x1DBE50u;
    // 0x1dbe50: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1dbe50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1dbe54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1dbe54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1dbe58: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1dbe5c:
    // 0x1dbe5c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1dbe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1dbe60: 0x29020034  slti        $v0, $t0, 0x34
    ctx->pc = 0x1dbe60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x1dbe64: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DBE64u;
    {
        const bool branch_taken_0x1dbe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE64u;
        // 0x1dbe68: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe64) {
            ctx->pc = 0x1DBE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbe40;
        }
    }
    ctx->pc = 0x1DBE6Cu;
    // 0x1dbe6c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBE6Cu;
    {
        const bool branch_taken_0x1dbe6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE6Cu;
        // 0x1dbe70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe6c) {
            ctx->pc = 0x1DBE9Cu;
            goto label_1dbe9c;
        }
    }
    ctx->pc = 0x1DBE74u;
    // 0x1dbe74: 0xc07739a  jal         func_1DCE68
    ctx->pc = 0x1DBE74u;
    SET_GPR_U32(ctx, 31, 0x1DBE7Cu);
    ctx->pc = 0x1DBE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE74u;
    // 0x1dbe78: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE68u, 0x1DBE74u, 0x1DBE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE7Cu;
label_1dbe7c:
    // 0x1dbe7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbe80: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1dbe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dbe84: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dbe88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dbe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbe8c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1dbe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1dbe90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dbe94: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dbe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dbe98: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1dbe98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1dbe9c:
    // 0x1dbe9c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1dbe9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dbea0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1dbea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dbea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBEA4u;
        // 0x1dbea8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBEACu;
    // 0x1dbeac: 0x0  nop
    ctx->pc = 0x1dbeacu;
    // NOP
    ctx->pc = 0x1dbeb0u;
}

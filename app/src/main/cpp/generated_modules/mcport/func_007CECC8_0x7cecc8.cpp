#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CECC8
// Address: 0x7cecc8 - 0x7ced48
void func_007CECC8_0x7cecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CECC8_0x7cecc8");
#endif

    switch (ctx->pc) {
        case 0x7cece8u: goto label_7cece8;
        default: break;
    }

    ctx->pc = 0x7cecc8u;

    // 0x7cecc8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ceccc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x7cecccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cecd0: 0x244b07c0  addiu       $t3, $v0, 0x7C0
    ctx->pc = 0x7cecd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x7cecd4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7cecd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cecd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7cecd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cecdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7cecdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cece0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7cece0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cece4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x7cece4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_7cece8:
    // 0x7cece8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7cece8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7cecec: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x7cececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x7cecf0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x7cecf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cecf4: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x7cecf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x7cecf8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CECF8u;
    {
        const bool branch_taken_0x7cecf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CECF8u;
        // 0x7cecfc: 0x1034026  xor         $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cecf8) {
            ctx->pc = 0x7CED0Cu;
            goto label_7ced0c;
        }
    }
    ctx->pc = 0x7CED00u;
    // 0x7ced00: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x7ced00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x7ced04: 0x1465026  xor         $t2, $t2, $a2
    ctx->pc = 0x7ced04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 6));
    // 0x7ced08: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x7ced08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_7ced0c:
    // 0x7ced0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7ced0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7ced10: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x7ced10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x7ced14: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CED14u;
    {
        const bool branch_taken_0x7ced14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ced14) {
            ctx->pc = 0x7CED18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CED14u;
            // 0x7ced18: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cece8;
        }
    }
    ctx->pc = 0x7CED1Cu;
    // 0x7ced1c: 0x81027  nor         $v0, $zero, $t0
    ctx->pc = 0x7ced1cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x7ced20: 0x92027  nor         $a0, $zero, $t1
    ctx->pc = 0x7ced20u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x7ced24: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x7ced24u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x7ced28: 0x30420077  andi        $v0, $v0, 0x77
    ctx->pc = 0x7ced28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)119);
    // 0x7ced2c: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x7ced2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x7ced30: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x7ced30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x7ced34: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x7ced34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x7ced38: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x7ced38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7ced3c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CED3Cu;
        // 0x7ced40: 0xa0a40001  sb          $a0, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CED3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CED44u;
    // 0x7ced44: 0x0  nop
    ctx->pc = 0x7ced44u;
    // NOP
    ctx->pc = 0x7ced48u;
}
} // namespace gh_mcport

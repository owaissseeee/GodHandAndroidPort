#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079BCF8
// Address: 0x79bcf8 - 0x79bd70
void func_0079BCF8_0x79bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BCF8_0x79bcf8");
#endif

    switch (ctx->pc) {
        case 0x79bd20u: goto label_79bd20;
        case 0x79bd28u: goto label_79bd28;
        case 0x79bd38u: goto label_79bd38;
        default: break;
    }

    ctx->pc = 0x79bcf8u;

    // 0x79bcf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79bcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79bcfc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79bcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79bd00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79bd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79bd04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79bd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79bd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79bd0c: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79BD0Cu;
    {
        const bool branch_taken_0x79bd0c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x79BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD0Cu;
        // 0x79bd10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd0c) {
            ctx->pc = 0x79BD50u;
            goto label_79bd50;
        }
    }
    ctx->pc = 0x79BD14u;
    // 0x79bd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79bd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79bd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd1c: 0x0  nop
    ctx->pc = 0x79bd1cu;
    // NOP
label_79bd20:
    // 0x79bd20: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79BD20u;
    SET_GPR_U32(ctx, 31, 0x79BD28u);
    ctx->pc = 0x79BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD20u;
    // 0x79bd24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BD20u, 0x79BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD28u;
label_79bd28:
    // 0x79bd28: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BD28u;
    {
        const bool branch_taken_0x79bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bd28) {
            ctx->pc = 0x79BD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BD28u;
            // 0x79bd2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BD44u;
            goto label_79bd44;
        }
    }
    ctx->pc = 0x79BD30u;
    // 0x79bd30: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x79BD30u;
    SET_GPR_U32(ctx, 31, 0x79BD38u);
    ctx->pc = 0x79BD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD30u;
    // 0x79bd34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x79BD30u, 0x79BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD38u;
label_79bd38:
    // 0x79bd38: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BD38u;
    {
        const bool branch_taken_0x79bd38 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x79bd38) {
            ctx->pc = 0x79BD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BD38u;
            // 0x79bd3c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BD48u;
            goto label_79bd48;
        }
    }
    ctx->pc = 0x79BD40u;
    // 0x79bd40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79bd40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79bd44:
    // 0x79bd44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79bd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79bd48:
    // 0x79bd48: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x79BD48u;
    {
        const bool branch_taken_0x79bd48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD48u;
        // 0x79bd4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd48) {
            ctx->pc = 0x79BD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bd20;
        }
    }
    ctx->pc = 0x79BD50u;
label_79bd50:
    // 0x79bd50: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79bd50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79bd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bd58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79bd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bd5c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79bd5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bd60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bd64: 0x3e00008  jr          $ra
    ctx->pc = 0x79BD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD64u;
        // 0x79bd68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BD6Cu;
    // 0x79bd6c: 0x0  nop
    ctx->pc = 0x79bd6cu;
    // NOP
    ctx->pc = 0x79bd70u;
}
} // namespace gh_r040

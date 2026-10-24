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

// Function: unget__7istreamc
// Address: 0x389ed8 - 0x389f30
void unget__7istreamc_0x389ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unget__7istreamc_0x389ed8");
#endif

    switch (ctx->pc) {
        case 0x389f04u: goto label_389f04;
        default: break;
    }

    ctx->pc = 0x389ed8u;

    // 0x389ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389edc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x389edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x389ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389ee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389eec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x389eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389ef0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x389ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x389ef4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x389EF4u;
    {
        const bool branch_taken_0x389ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EF4u;
        // 0x389ef8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ef4) {
            ctx->pc = 0x389F1Cu;
            goto label_389f1c;
        }
    }
    ctx->pc = 0x389EFCu;
    // 0x389efc: 0xc0e2d18  jal         func_38B460
    ctx->pc = 0x389EFCu;
    SET_GPR_U32(ctx, 31, 0x389F04u);
    ctx->pc = 0x389F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389EFCu;
    // 0x389f00: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B460u, 0x389EFCu, 0x389F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F04u;
label_389f04:
    // 0x389f04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x389f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x389f08: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x389F08u;
    {
        const bool branch_taken_0x389f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x389F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F08u;
        // 0x389f0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389f08) {
            ctx->pc = 0x389F20u;
            goto label_389f20;
        }
    }
    ctx->pc = 0x389F10u;
    // 0x389f10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389f14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x389f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x389f18: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x389f18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_389f1c:
    // 0x389f1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389f20:
    // 0x389f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389f28: 0x3e00008  jr          $ra
    ctx->pc = 0x389F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F28u;
        // 0x389f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389F30u;
}

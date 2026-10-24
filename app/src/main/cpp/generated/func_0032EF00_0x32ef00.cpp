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

// Function: func_0032EF00
// Address: 0x32ef00 - 0x32ef68
void func_0032EF00_0x32ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032EF00_0x32ef00");
#endif

    switch (ctx->pc) {
        case 0x32ef30u: goto label_32ef30;
        case 0x32ef3cu: goto label_32ef3c;
        default: break;
    }

    ctx->pc = 0x32ef00u;

    // 0x32ef00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ef04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ef08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32ef08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ef0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32ef10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ef14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32ef18: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32ef18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32ef1c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32EF1Cu;
    {
        const bool branch_taken_0x32ef1c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF1Cu;
        // 0x32ef20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef1c) {
            ctx->pc = 0x32EF4Cu;
            goto label_32ef4c;
        }
    }
    ctx->pc = 0x32EF24u;
    // 0x32ef24: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x32ef24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x32ef28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32ef2c: 0x0  nop
    ctx->pc = 0x32ef2cu;
    // NOP
label_32ef30:
    // 0x32ef30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x32ef30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x32ef34: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x32EF34u;
    SET_GPR_U32(ctx, 31, 0x32EF3Cu);
    ctx->pc = 0x32EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EF34u;
    // 0x32ef38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x32EF34u, 0x32EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EF3Cu;
label_32ef3c:
    // 0x32ef3c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32ef3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32ef40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32ef40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32ef44: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32EF44u;
    {
        const bool branch_taken_0x32ef44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ef44) {
            ctx->pc = 0x32EF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EF44u;
            // 0x32ef48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ef30;
        }
    }
    ctx->pc = 0x32EF4Cu;
label_32ef4c:
    // 0x32ef4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ef4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ef50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ef50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ef54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32ef54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ef58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32ef58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32ef5c: 0x3e00008  jr          $ra
    ctx->pc = 0x32EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EF5Cu;
        // 0x32ef60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EF64u;
    // 0x32ef64: 0x0  nop
    ctx->pc = 0x32ef64u;
    // NOP
    ctx->pc = 0x32ef68u;
}

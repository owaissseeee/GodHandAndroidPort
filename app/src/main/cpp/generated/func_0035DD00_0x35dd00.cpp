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

// Function: func_0035DD00
// Address: 0x35dd00 - 0x35dd50
void func_0035DD00_0x35dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DD00_0x35dd00");
#endif

    switch (ctx->pc) {
        case 0x35dd24u: goto label_35dd24;
        default: break;
    }

    ctx->pc = 0x35dd00u;

    // 0x35dd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35dd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35dd08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35dd0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35dd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35dd14: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35dd18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35dd1c: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35DD1Cu;
    SET_GPR_U32(ctx, 31, 0x35DD24u);
    ctx->pc = 0x35DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD1Cu;
    // 0x35dd20: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35DD1Cu, 0x35DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD24u;
label_35dd24:
    // 0x35dd24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DD24u;
    {
        const bool branch_taken_0x35dd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dd24) {
            ctx->pc = 0x35DD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DD24u;
            // 0x35dd28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DD3Cu;
            goto label_35dd3c;
        }
    }
    ctx->pc = 0x35DD2Cu;
    // 0x35dd2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x35dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35dd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dd34: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35dd38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35dd38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35dd3c:
    // 0x35dd3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35dd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35dd40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35dd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dd44: 0x3e00008  jr          $ra
    ctx->pc = 0x35DD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD44u;
        // 0x35dd48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DD4Cu;
    // 0x35dd4c: 0x0  nop
    ctx->pc = 0x35dd4cu;
    // NOP
    ctx->pc = 0x35dd50u;
}

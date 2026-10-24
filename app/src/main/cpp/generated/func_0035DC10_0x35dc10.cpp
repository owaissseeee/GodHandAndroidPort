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

// Function: func_0035DC10
// Address: 0x35dc10 - 0x35dc60
void func_0035DC10_0x35dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DC10_0x35dc10");
#endif

    switch (ctx->pc) {
        case 0x35dc34u: goto label_35dc34;
        default: break;
    }

    ctx->pc = 0x35dc10u;

    // 0x35dc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35dc14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35dc18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35dc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35dc1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35dc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35dc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35dc24: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35dc28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35dc2c: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35DC2Cu;
    SET_GPR_U32(ctx, 31, 0x35DC34u);
    ctx->pc = 0x35DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC2Cu;
    // 0x35dc30: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35DC2Cu, 0x35DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC34u;
label_35dc34:
    // 0x35dc34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DC34u;
    {
        const bool branch_taken_0x35dc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc34) {
            ctx->pc = 0x35DC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DC34u;
            // 0x35dc38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DC4Cu;
            goto label_35dc4c;
        }
    }
    ctx->pc = 0x35DC3Cu;
    // 0x35dc3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35dc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dc44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35dc48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35dc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35dc4c:
    // 0x35dc4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35dc4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35dc50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35dc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dc54: 0x3e00008  jr          $ra
    ctx->pc = 0x35DC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC54u;
        // 0x35dc58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DC5Cu;
    // 0x35dc5c: 0x0  nop
    ctx->pc = 0x35dc5cu;
    // NOP
    ctx->pc = 0x35dc60u;
}

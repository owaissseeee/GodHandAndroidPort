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

// Function: func_0034FCE0
// Address: 0x34fce0 - 0x34fd28
void func_0034FCE0_0x34fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FCE0_0x34fce0");
#endif

    switch (ctx->pc) {
        case 0x34fd08u: goto label_34fd08;
        case 0x34fd14u: goto label_34fd14;
        default: break;
    }

    ctx->pc = 0x34fce0u;

    // 0x34fce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34fce4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34fce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fcec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34fcf0: 0x8e021324  lw          $v0, 0x1324($s0)
    ctx->pc = 0x34fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4900)));
    // 0x34fcf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34FCF4u;
    {
        const bool branch_taken_0x34fcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FCF4u;
        // 0x34fcf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fcf4) {
            ctx->pc = 0x34FD18u;
            goto label_34fd18;
        }
    }
    ctx->pc = 0x34FCFCu;
    // 0x34fcfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34fcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd00: 0xc0d32be  jal         func_34CAF8
    ctx->pc = 0x34FD00u;
    SET_GPR_U32(ctx, 31, 0x34FD08u);
    ctx->pc = 0x34FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD00u;
    // 0x34fd04: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CAF8u, 0x34FD00u, 0x34FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD08u;
label_34fd08:
    // 0x34fd08: 0xde040988  ld          $a0, 0x988($s0)
    ctx->pc = 0x34fd08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2440)));
    // 0x34fd0c: 0xc0d332c  jal         func_34CCB0
    ctx->pc = 0x34FD0Cu;
    SET_GPR_U32(ctx, 31, 0x34FD14u);
    ctx->pc = 0x34FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD0Cu;
    // 0x34fd10: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCB0u, 0x34FD0Cu, 0x34FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD14u;
label_34fd14:
    // 0x34fd14: 0xfe020988  sd          $v0, 0x988($s0)
    ctx->pc = 0x34fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2440), GPR_U64(ctx, 2));
label_34fd18:
    // 0x34fd18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34fd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fd1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34fd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34fd20: 0x3e00008  jr          $ra
    ctx->pc = 0x34FD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD20u;
        // 0x34fd24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FD28u;
}

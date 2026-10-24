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

// Function: func_0035E2A8
// Address: 0x35e2a8 - 0x35e318
void func_0035E2A8_0x35e2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E2A8_0x35e2a8");
#endif

    switch (ctx->pc) {
        case 0x35e2d0u: goto label_35e2d0;
        case 0x35e2e4u: goto label_35e2e4;
        default: break;
    }

    ctx->pc = 0x35e2a8u;

    // 0x35e2a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e2ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e2b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e2b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e2b8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e2b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e2bc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e2c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e2c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e2c8: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E2C8u;
    SET_GPR_U32(ctx, 31, 0x35E2D0u);
    ctx->pc = 0x35E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E2C8u;
    // 0x35e2cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E2C8u, 0x35E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2D0u;
label_35e2d0:
    // 0x35e2d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e2d4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E2D4u;
    {
        const bool branch_taken_0x35e2d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2D4u;
        // 0x35e2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2d4) {
            ctx->pc = 0x35E2FCu;
            goto label_35e2fc;
        }
    }
    ctx->pc = 0x35E2DCu;
    // 0x35e2dc: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E2DCu;
    SET_GPR_U32(ctx, 31, 0x35E2E4u);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E2DCu, 0x35E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2E4u;
label_35e2e4:
    // 0x35e2e4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x35e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x35e2e8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35E2E8u;
    {
        const bool branch_taken_0x35e2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2E8u;
        // 0x35e2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2e8) {
            ctx->pc = 0x35E2FCu;
            goto label_35e2fc;
        }
    }
    ctx->pc = 0x35E2F0u;
    // 0x35e2f0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x35e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x35e2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e2f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e2fc:
    // 0x35e2fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e300: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e304: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e308: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e30c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E30Cu;
        // 0x35e310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E314u;
    // 0x35e314: 0x0  nop
    ctx->pc = 0x35e314u;
    // NOP
    ctx->pc = 0x35e318u;
}

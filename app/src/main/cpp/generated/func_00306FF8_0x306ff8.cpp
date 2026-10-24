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

// Function: func_00306FF8
// Address: 0x306ff8 - 0x307060
void func_00306FF8_0x306ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306FF8_0x306ff8");
#endif

    switch (ctx->pc) {
        case 0x307008u: goto label_307008;
        case 0x307050u: goto label_307050;
        default: break;
    }

    ctx->pc = 0x306ff8u;

    // 0x306ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306ffc: 0x24864200  addiu       $a2, $a0, 0x4200
    ctx->pc = 0x306ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
    // 0x307000: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x307000u;
    {
        const bool branch_taken_0x307000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x307004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307000u;
        // 0x307004: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307000) {
            ctx->pc = 0x307048u;
            goto label_307048;
        }
    }
    ctx->pc = 0x307008u;
label_307008:
    // 0x307008: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x307008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x30700c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x30700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x307010: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x307010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x307014: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x307014u;
    {
        const bool branch_taken_0x307014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307014) {
            ctx->pc = 0x307018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307014u;
            // 0x307018: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307034u;
            goto label_307034;
        }
    }
    ctx->pc = 0x30701Cu;
    // 0x30701c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x307020: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x307020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x307024: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x307024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x307028: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x307028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x30702c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30702Cu;
    {
        const bool branch_taken_0x30702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30702Cu;
        // 0x307030: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30702c) {
            ctx->pc = 0x307048u;
            goto label_307048;
        }
    }
    ctx->pc = 0x307034u;
label_307034:
    // 0x307034: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x307034u;
    {
        const bool branch_taken_0x307034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307034) {
            ctx->pc = 0x307038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307034u;
            // 0x307038: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307008;
        }
    }
    ctx->pc = 0x30703Cu;
    // 0x30703c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x30703cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x307040: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x307040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x307044: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x307044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_307048:
    // 0x307048: 0xc0c1c18  jal         func_307060
    ctx->pc = 0x307048u;
    SET_GPR_U32(ctx, 31, 0x307050u);
    ctx->pc = 0x307060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307060u, 0x307048u, 0x307050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307050u;
label_307050:
    // 0x307050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307054: 0x3e00008  jr          $ra
    ctx->pc = 0x307054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307054u;
        // 0x307058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30705Cu;
    // 0x30705c: 0x0  nop
    ctx->pc = 0x30705cu;
    // NOP
    ctx->pc = 0x307060u;
}

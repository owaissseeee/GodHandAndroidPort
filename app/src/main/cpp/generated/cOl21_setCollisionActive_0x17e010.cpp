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

// Function: cOl21_setCollisionActive
// Address: 0x17e010 - 0x17e058
void cOl21_setCollisionActive_0x17e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl21_setCollisionActive_0x17e010");
#endif

    switch (ctx->pc) {
        case 0x17e020u: goto label_17e020;
        default: break;
    }

    ctx->pc = 0x17e010u;

    // 0x17e010: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x17e010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e014: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x17e014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17e018: 0x24860654  addiu       $a2, $a0, 0x654
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1620));
    // 0x17e01c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x17e01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_17e020:
    // 0x17e020: 0x14a90004  bne         $a1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E020u;
    {
        const bool branch_taken_0x17e020 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x17E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E020u;
        // 0x17e024: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e020) {
            ctx->pc = 0x17E034u;
            goto label_17e034;
        }
    }
    ctx->pc = 0x17E028u;
    // 0x17e028: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17e02c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E02Cu;
    {
        const bool branch_taken_0x17e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E02Cu;
        // 0x17e030: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e02c) {
            ctx->pc = 0x17E03Cu;
            goto label_17e03c;
        }
    }
    ctx->pc = 0x17E034u;
label_17e034:
    // 0x17e034: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17e038: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x17e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_17e03c:
    // 0x17e03c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x17e040: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x17e040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x17e044: 0x4e1fff6  bgez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x17E044u;
    {
        const bool branch_taken_0x17e044 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x17E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E044u;
        // 0x17e048: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e044) {
            ctx->pc = 0x17E020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e020;
        }
    }
    ctx->pc = 0x17E04Cu;
    // 0x17e04c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E04Cu;
        // 0x17e050: 0xe48c0608  swc1        $f12, 0x608($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1544), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E054u;
    // 0x17e054: 0x0  nop
    ctx->pc = 0x17e054u;
    // NOP
    ctx->pc = 0x17e058u;
}

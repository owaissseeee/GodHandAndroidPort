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

// Function: WaitDma
// Address: 0x397028 - 0x3970a0
void WaitDma_0x397028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WaitDma_0x397028");
#endif

    switch (ctx->pc) {
        case 0x397058u: goto label_397058;
        case 0x397068u: goto label_397068;
        case 0x397070u: goto label_397070;
        default: break;
    }

    ctx->pc = 0x397028u;

    // 0x397028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39702c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x397030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397034: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x397034u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x397038: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x397038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39703c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39703cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397040: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x397040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x397044: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397048: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x397048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x39704c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39704Cu;
    {
        const bool branch_taken_0x39704c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39704Cu;
        // 0x397050: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39704c) {
            ctx->pc = 0x397080u;
            goto label_397080;
        }
    }
    ctx->pc = 0x397054u;
    // 0x397054: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x397054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_397058:
    // 0x397058: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x397058u;
    {
        const bool branch_taken_0x397058 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x397058) {
            ctx->pc = 0x397070u;
            goto label_397070;
        }
    }
    ctx->pc = 0x397060u;
    // 0x397060: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x397060u;
    SET_GPR_U32(ctx, 31, 0x397068u);
    ctx->pc = 0x397064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397060u;
    // 0x397064: 0x2644dfc8  addiu       $a0, $s2, -0x2038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x397060u, 0x397068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397068u;
label_397068:
    // 0x397068: 0xc0e5d64  jal         func_397590
    ctx->pc = 0x397068u;
    SET_GPR_U32(ctx, 31, 0x397070u);
    ctx->pc = 0x39706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397068u;
    // 0x39706c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397590u, 0x397068u, 0x397070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397070u;
label_397070:
    // 0x397070: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397074: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x397074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x397078: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x397078u;
    {
        const bool branch_taken_0x397078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397078u;
        // 0x39707c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397078) {
            ctx->pc = 0x397058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397058;
        }
    }
    ctx->pc = 0x397080u;
label_397080:
    // 0x397080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x397080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x397084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397088: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x397088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39708c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39708cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397090: 0x3e00008  jr          $ra
    ctx->pc = 0x397090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397090u;
        // 0x397094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397098u;
    // 0x397098: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x397098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39709c: 0x0  nop
    ctx->pc = 0x39709cu;
    // NOP
    ctx->pc = 0x3970a0u;
}

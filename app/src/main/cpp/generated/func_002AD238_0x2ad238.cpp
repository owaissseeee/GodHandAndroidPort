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

// Function: func_002AD238
// Address: 0x2ad238 - 0x2ad288
void func_002AD238_0x2ad238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AD238_0x2ad238");
#endif

    switch (ctx->pc) {
        case 0x2ad250u: goto label_2ad250;
        default: break;
    }

    ctx->pc = 0x2ad238u;

    // 0x2ad238: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2ad238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2ad23c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2ad23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2ad240: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2ad240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2ad244: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2ad244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2ad248: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2ad248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2ad24c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2ad24cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ad250:
    // 0x2ad250: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x2ad250u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ad254: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ad254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ad258: 0x0  nop
    ctx->pc = 0x2ad258u;
    // NOP
    // 0x2ad25c: 0x0  nop
    ctx->pc = 0x2ad25cu;
    // NOP
    // 0x2ad260: 0x146afffb  bne         $v1, $t2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AD260u;
    {
        const bool branch_taken_0x2ad260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x2AD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD260u;
        // 0x2ad264: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad260) {
            ctx->pc = 0x2AD250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad250;
        }
    }
    ctx->pc = 0x2AD268u;
    // 0x2ad268: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ad268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2ad26c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ad26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad270: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2ad270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2ad274: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x2ad274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x2ad278: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2ad278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2ad27c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD27Cu;
        // 0x2ad280: 0xac880014  sw          $t0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD284u;
    // 0x2ad284: 0x0  nop
    ctx->pc = 0x2ad284u;
    // NOP
    ctx->pc = 0x2ad288u;
}

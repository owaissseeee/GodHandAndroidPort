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

// Function: cObj_setSuspend
// Address: 0x14e930 - 0x14e990
void cObj_setSuspend_0x14e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObj_setSuspend_0x14e930");
#endif

    ctx->pc = 0x14e930u;

    // 0x14e930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e934: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E934u;
    {
        const bool branch_taken_0x14e934 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e934) {
            ctx->pc = 0x14E938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E934u;
            // 0x14e938: 0x8c830250  lw          $v1, 0x250($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E94Cu;
            goto label_14e94c;
        }
    }
    ctx->pc = 0x14E93Cu;
    // 0x14e93c: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x14e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x14e940: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14e940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x14e944: 0x3e00008  jr          $ra
    ctx->pc = 0x14E944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E944u;
        // 0x14e948: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E94Cu;
label_14e94c:
    // 0x14e94c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14e950: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x14e950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x14e954: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14e954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e958: 0x3e00008  jr          $ra
    ctx->pc = 0x14E958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E958u;
        // 0x14e95c: 0xac830250  sw          $v1, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E960u;
    // 0x14e960: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x14e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x14e964: 0x0  nop
    ctx->pc = 0x14e964u;
    // NOP
    // 0x14e968: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14e968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14e96c: 0x0  nop
    ctx->pc = 0x14e96cu;
    // NOP
    // 0x14e970: 0xa08702f6  sb          $a3, 0x2F6($a0)
    ctx->pc = 0x14e970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 7));
    // 0x14e974: 0x0  nop
    ctx->pc = 0x14e974u;
    // NOP
    // 0x14e978: 0xa08702f6  sb          $a3, 0x2F6($a0)
    ctx->pc = 0x14e978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 7));
    // 0x14e97c: 0x0  nop
    ctx->pc = 0x14e97cu;
    // NOP
    // 0x14e980: 0x0  nop
    ctx->pc = 0x14e980u;
    // NOP
    // 0x14e984: 0x0  nop
    ctx->pc = 0x14e984u;
    // NOP
    // 0x14e988: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e98c: 0x0  nop
    ctx->pc = 0x14e98cu;
    // NOP
    ctx->pc = 0x14e990u;
}

#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: isMotionFrame__C21cEventSeqPlayerCommonPC9cEventSeq
// Address: 0x7b2220 - 0x7b2258
void isMotionFrame__C21cEventSeqPlayerCommonPC9cEventSeq_0x7b2220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isMotionFrame__C21cEventSeqPlayerCommonPC9cEventSeq_0x7b2220");
#endif

    switch (ctx->pc) {
        case 0x7b2248u: goto label_7b2248;
        default: break;
    }

    ctx->pc = 0x7b2220u;

    // 0x7b2220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b2220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b2224: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x7b2224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b222c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b222cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b2230: 0x248458d8  addiu       $a0, $a0, 0x58D8
    ctx->pc = 0x7b2230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    // 0x7b2234: 0x84480006  lh          $t0, 0x6($v0)
    ctx->pc = 0x7b2234u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x7b2238: 0x80450005  lb          $a1, 0x5($v0)
    ctx->pc = 0x7b2238u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x7b223c: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x7b223cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x7b2240: 0xc1ec11e  jal         func_7B0478
    ctx->pc = 0x7B2240u;
    SET_GPR_U32(ctx, 31, 0x7B2248u);
    ctx->pc = 0x7B2244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2240u;
    // 0x7b2244: 0x90470004  lbu         $a3, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0478u, 0x7B2240u, 0x7B2248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2248u;
label_7b2248:
    // 0x7b2248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b224c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B224Cu;
        // 0x7b2250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B224Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2254u;
    // 0x7b2254: 0x0  nop
    ctx->pc = 0x7b2254u;
    // NOP
    ctx->pc = 0x7b2258u;
}
} // namespace gh_event

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

// Function: cCockMess_SetMessNo
// Address: 0x13f238 - 0x13f270
void cCockMess_SetMessNo_0x13f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockMess_SetMessNo_0x13f238");
#endif

    ctx->pc = 0x13f238u;

    // 0x13f238: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x13f23c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x13f23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x13f240: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13f240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13f244: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F244u;
    {
        const bool branch_taken_0x13f244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F244u;
        // 0x13f248: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f244) {
            ctx->pc = 0x13F268u;
            goto label_13f268;
        }
    }
    ctx->pc = 0x13F24Cu;
    // 0x13f24c: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x13f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13f250: 0xac85009c  sw          $a1, 0x9C($a0)
    ctx->pc = 0x13f250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
    // 0x13f254: 0xe44c0038  swc1        $f12, 0x38($v0)
    ctx->pc = 0x13f254u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x13f258: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x13f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13f25c: 0xe46d003c  swc1        $f13, 0x3C($v1)
    ctx->pc = 0x13f25cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13f260: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x13f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x13f264: 0xa046004f  sb          $a2, 0x4F($v0)
    ctx->pc = 0x13f264u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 6));
label_13f268:
    // 0x13f268: 0x3e00008  jr          $ra
    ctx->pc = 0x13F268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F270u;
}

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

// Function: _sceSDC
// Address: 0x3b0468 - 0x3b0510
void _sceSDC_0x3b0468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceSDC_0x3b0468");
#endif

    switch (ctx->pc) {
        case 0x3b0478u: goto label_3b0478;
        default: break;
    }

    ctx->pc = 0x3b0468u;

    // 0x3b0468: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3b0468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x3b046c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b046cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0470: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x3b0470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x3b0474: 0x0  nop
    ctx->pc = 0x3b0474u;
    // NOP
label_3b0478:
    // 0x3b0478: 0xf  sync
    ctx->pc = 0x3b0478u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b047c: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x3b047cu;
    // CACHE instruction (ignored)
    // 0x3b0480: 0xf  sync
    ctx->pc = 0x3b0480u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0484: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x3b0484u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x3b0488: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3b0488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3b048c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3b048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3b0490: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x3b0490u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b0494: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3b0494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b0498: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0498u;
    {
        const bool branch_taken_0x3b0498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0498) {
            ctx->pc = 0x3B04B4u;
            goto label_3b04b4;
        }
    }
    ctx->pc = 0x3B04A0u;
    // 0x3b04a0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B04A0u;
    {
        const bool branch_taken_0x3b04a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b04a0) {
            ctx->pc = 0x3B04B4u;
            goto label_3b04b4;
        }
    }
    ctx->pc = 0x3B04A8u;
    // 0x3b04a8: 0xf  sync
    ctx->pc = 0x3b04a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b04ac: 0xbcd40000  cache       0x14, 0x0($a2)
    ctx->pc = 0x3b04acu;
    // CACHE instruction (ignored)
    // 0x3b04b0: 0xf  sync
    ctx->pc = 0x3b04b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b04b4:
    // 0x3b04b4: 0xf  sync
    ctx->pc = 0x3b04b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b04b8: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x3b04b8u;
    // CACHE instruction (ignored)
    // 0x3b04bc: 0xf  sync
    ctx->pc = 0x3b04bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b04c0: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x3b04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x3b04c4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3b04c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3b04c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3b04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3b04cc: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x3b04ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b04d0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3b04d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b04d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B04D4u;
    {
        const bool branch_taken_0x3b04d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b04d4) {
            ctx->pc = 0x3B04F0u;
            goto label_3b04f0;
        }
    }
    ctx->pc = 0x3B04DCu;
    // 0x3b04dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B04DCu;
    {
        const bool branch_taken_0x3b04dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b04dc) {
            ctx->pc = 0x3B04F0u;
            goto label_3b04f0;
        }
    }
    ctx->pc = 0x3B04E4u;
    // 0x3b04e4: 0xf  sync
    ctx->pc = 0x3b04e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b04e8: 0xbcd40001  cache       0x14, 0x1($a2)
    ctx->pc = 0x3b04e8u;
    // CACHE instruction (ignored)
    // 0x3b04ec: 0xf  sync
    ctx->pc = 0x3b04ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b04f0:
    // 0x3b04f0: 0xf  sync
    ctx->pc = 0x3b04f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b04f4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x3b04f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3b04f8: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x3b04f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x3b04fc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3B04FCu;
    {
        const bool branch_taken_0x3b04fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b04fc) {
            ctx->pc = 0x3B0478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0478;
        }
    }
    ctx->pc = 0x3B0504u;
    // 0x3b0504: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B050Cu;
    // 0x3b050c: 0x0  nop
    ctx->pc = 0x3b050cu;
    // NOP
    ctx->pc = 0x3b0510u;
}

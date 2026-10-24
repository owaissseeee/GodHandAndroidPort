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

// Function: _sceIDC
// Address: 0x3b0598 - 0x3b0640
void _sceIDC_0x3b0598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceIDC_0x3b0598");
#endif

    switch (ctx->pc) {
        case 0x3b05a8u: goto label_3b05a8;
        default: break;
    }

    ctx->pc = 0x3b0598u;

    // 0x3b0598: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3b0598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x3b059c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b059cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b05a0: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x3b05a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x3b05a4: 0x0  nop
    ctx->pc = 0x3b05a4u;
    // NOP
label_3b05a8:
    // 0x3b05a8: 0xf  sync
    ctx->pc = 0x3b05a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b05ac: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x3b05acu;
    // CACHE instruction (ignored)
    // 0x3b05b0: 0xf  sync
    ctx->pc = 0x3b05b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b05b4: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x3b05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x3b05b8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3b05b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3b05bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3b05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3b05c0: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x3b05c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b05c4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3b05c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b05c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B05C8u;
    {
        const bool branch_taken_0x3b05c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b05c8) {
            ctx->pc = 0x3B05E4u;
            goto label_3b05e4;
        }
    }
    ctx->pc = 0x3B05D0u;
    // 0x3b05d0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B05D0u;
    {
        const bool branch_taken_0x3b05d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b05d0) {
            ctx->pc = 0x3B05E4u;
            goto label_3b05e4;
        }
    }
    ctx->pc = 0x3B05D8u;
    // 0x3b05d8: 0xf  sync
    ctx->pc = 0x3b05d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b05dc: 0xbcd60000  cache       0x16, 0x0($a2)
    ctx->pc = 0x3b05dcu;
    // CACHE instruction (ignored)
    // 0x3b05e0: 0xf  sync
    ctx->pc = 0x3b05e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b05e4:
    // 0x3b05e4: 0xf  sync
    ctx->pc = 0x3b05e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b05e8: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x3b05e8u;
    // CACHE instruction (ignored)
    // 0x3b05ec: 0xf  sync
    ctx->pc = 0x3b05ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b05f0: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x3b05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x3b05f4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3b05f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3b05f8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3b05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3b05fc: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x3b05fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b0600: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3b0600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b0604: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0604u;
    {
        const bool branch_taken_0x3b0604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0604) {
            ctx->pc = 0x3B0620u;
            goto label_3b0620;
        }
    }
    ctx->pc = 0x3B060Cu;
    // 0x3b060c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B060Cu;
    {
        const bool branch_taken_0x3b060c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b060c) {
            ctx->pc = 0x3B0620u;
            goto label_3b0620;
        }
    }
    ctx->pc = 0x3B0614u;
    // 0x3b0614: 0xf  sync
    ctx->pc = 0x3b0614u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0618: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x3b0618u;
    // CACHE instruction (ignored)
    // 0x3b061c: 0xf  sync
    ctx->pc = 0x3b061cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b0620:
    // 0x3b0620: 0xf  sync
    ctx->pc = 0x3b0620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0624: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x3b0624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3b0628: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x3b0628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x3b062c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3B062Cu;
    {
        const bool branch_taken_0x3b062c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b062c) {
            ctx->pc = 0x3B05A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b05a8;
        }
    }
    ctx->pc = 0x3B0634u;
    // 0x3b0634: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B063Cu;
    // 0x3b063c: 0x0  nop
    ctx->pc = 0x3b063cu;
    // NOP
    ctx->pc = 0x3b0640u;
}

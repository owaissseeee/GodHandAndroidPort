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

// Function: cCoreSave_freeItem
// Address: 0x1fb2d8 - 0x1fb330
void cCoreSave_freeItem_0x1fb2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_freeItem_0x1fb2d8");
#endif

    switch (ctx->pc) {
        case 0x1fb300u: goto label_1fb300;
        default: break;
    }

    ctx->pc = 0x1fb2d8u;

    // 0x1fb2d8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fb2dc: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x1fb2dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x1fb2e0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB2E0u;
    {
        const bool branch_taken_0x1fb2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2E0u;
        // 0x1fb2e4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2e0) {
            ctx->pc = 0x1FB324u;
            goto label_1fb324;
        }
    }
    ctx->pc = 0x1FB2E8u;
    // 0x1fb2e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb2ec: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB2ECu;
    {
        const bool branch_taken_0x1fb2ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2ECu;
        // 0x1fb2f0: 0x2484028a  addiu       $a0, $a0, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2ec) {
            ctx->pc = 0x1FB324u;
            goto label_1fb324;
        }
    }
    ctx->pc = 0x1FB2F4u;
    // 0x1fb2f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb2f8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1fb2f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fb2fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fb2fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb300:
    // 0x1fb300: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x1fb300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1fb304: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB304u;
    {
        const bool branch_taken_0x1fb304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB304u;
        // 0x1fb308: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb304) {
            ctx->pc = 0x1FB314u;
            goto label_1fb314;
        }
    }
    ctx->pc = 0x1FB30Cu;
    // 0x1fb30c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB30Cu;
        // 0x1fb310: 0xa4670000  sh          $a3, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB314u;
label_1fb314:
    // 0x1fb314: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1fb314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1fb318: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x1fb318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1fb31c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FB31Cu;
    {
        const bool branch_taken_0x1fb31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB31Cu;
        // 0x1fb320: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb31c) {
            ctx->pc = 0x1FB300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb300;
        }
    }
    ctx->pc = 0x1FB324u;
label_1fb324:
    // 0x1fb324: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB32Cu;
    // 0x1fb32c: 0x0  nop
    ctx->pc = 0x1fb32cu;
    // NOP
    ctx->pc = 0x1fb330u;
}

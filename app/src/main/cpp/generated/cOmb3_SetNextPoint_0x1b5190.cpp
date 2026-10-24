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

// Function: cOmb3_SetNextPoint
// Address: 0x1b5190 - 0x1b51b0
void cOmb3_SetNextPoint_0x1b5190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmb3_SetNextPoint_0x1b5190");
#endif

    ctx->pc = 0x1b5190u;

    // 0x1b5190: 0x94820608  lhu         $v0, 0x608($a0)
    ctx->pc = 0x1b5190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1544)));
    // 0x1b5194: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1b5194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1b5198: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1b5198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b519c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B519Cu;
    {
        const bool branch_taken_0x1b519c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b519c) {
            ctx->pc = 0x1B51A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B519Cu;
            // 0x1b51a0: 0xa485060a  sh          $a1, 0x60A($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 1546), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B51A4u;
            goto label_1b51a4;
        }
    }
    ctx->pc = 0x1B51A4u;
label_1b51a4:
    // 0x1b51a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B51A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B51A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B51ACu;
    // 0x1b51ac: 0x0  nop
    ctx->pc = 0x1b51acu;
    // NOP
    ctx->pc = 0x1b51b0u;
}

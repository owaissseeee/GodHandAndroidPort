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

// Function: cDvd_FileExist
// Address: 0x2011f8 - 0x201228
void cDvd_FileExist_0x2011f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_FileExist_0x2011f8");
#endif

    switch (ctx->pc) {
        case 0x20120cu: goto label_20120c;
        default: break;
    }

    ctx->pc = 0x2011f8u;

    // 0x2011f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2011f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2011fc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2011fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x201200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201204: 0xc07fe9a  jal         func_1FFA68
    ctx->pc = 0x201204u;
    SET_GPR_U32(ctx, 31, 0x20120Cu);
    ctx->pc = 0x201208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201204u;
    // 0x201208: 0x24840d40  addiu       $a0, $a0, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA68u, 0x201204u, 0x20120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20120Cu;
label_20120c:
    // 0x20120c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201210: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x201210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x201214: 0x3e00008  jr          $ra
    ctx->pc = 0x201214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201214u;
        // 0x201218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20121Cu;
    // 0x20121c: 0x0  nop
    ctx->pc = 0x20121cu;
    // NOP
    // 0x201220: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x201220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x201224: 0x0  nop
    ctx->pc = 0x201224u;
    // NOP
    ctx->pc = 0x201228u;
}

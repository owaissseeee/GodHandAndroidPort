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

// Function: sceMpegGetPicture
// Address: 0x39a9a8 - 0x39a9f0
void sceMpegGetPicture_0x39a9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMpegGetPicture_0x39a9a8");
#endif

    switch (ctx->pc) {
        case 0x39a9e4u: goto label_39a9e4;
        default: break;
    }

    ctx->pc = 0x39a9a8u;

    // 0x39a9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a9ac: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x39a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x39a9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a9b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39a9b8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x39a9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x39a9bc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x39a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x39a9c0: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x39a9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x39a9c4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x39a9c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39a9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a9cc: 0xace200c4  sw          $v0, 0xC4($a3)
    ctx->pc = 0x39a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 196), GPR_U32(ctx, 2));
    // 0x39a9d0: 0xace500ec  sw          $a1, 0xEC($a3)
    ctx->pc = 0x39a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 236), GPR_U32(ctx, 5));
    // 0x39a9d4: 0xace600f8  sw          $a2, 0xF8($a3)
    ctx->pc = 0x39a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 6));
    // 0x39a9d8: 0xace000f0  sw          $zero, 0xF0($a3)
    ctx->pc = 0x39a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
    // 0x39a9dc: 0xc0e6850  jal         func_39A140
    ctx->pc = 0x39A9DCu;
    SET_GPR_U32(ctx, 31, 0x39A9E4u);
    ctx->pc = 0x39A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A9DCu;
    // 0x39a9e0: 0xace000f4  sw          $zero, 0xF4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A140u, 0x39A9DCu, 0x39A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A9E4u;
label_39a9e4:
    // 0x39a9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x39A9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9E8u;
        // 0x39a9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A9F0u;
}

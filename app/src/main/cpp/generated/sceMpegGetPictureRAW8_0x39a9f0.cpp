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

// Function: sceMpegGetPictureRAW8
// Address: 0x39a9f0 - 0x39aa38
void sceMpegGetPictureRAW8_0x39a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMpegGetPictureRAW8_0x39a9f0");
#endif

    switch (ctx->pc) {
        case 0x39aa28u: goto label_39aa28;
        default: break;
    }

    ctx->pc = 0x39a9f0u;

    // 0x39a9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a9f4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x39a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x39a9f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a9fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39a9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39aa00: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x39aa00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x39aa04: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x39aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x39aa08: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x39aa08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x39aa0c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x39aa0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39aa10: 0xace600f8  sw          $a2, 0xF8($a3)
    ctx->pc = 0x39aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 6));
    // 0x39aa14: 0xace500ec  sw          $a1, 0xEC($a3)
    ctx->pc = 0x39aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 236), GPR_U32(ctx, 5));
    // 0x39aa18: 0xace000f0  sw          $zero, 0xF0($a3)
    ctx->pc = 0x39aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
    // 0x39aa1c: 0xace000c4  sw          $zero, 0xC4($a3)
    ctx->pc = 0x39aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 196), GPR_U32(ctx, 0));
    // 0x39aa20: 0xc0e6850  jal         func_39A140
    ctx->pc = 0x39AA20u;
    SET_GPR_U32(ctx, 31, 0x39AA28u);
    ctx->pc = 0x39AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA20u;
    // 0x39aa24: 0xace000f4  sw          $zero, 0xF4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A140u, 0x39AA20u, 0x39AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA28u;
label_39aa28:
    // 0x39aa28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39aa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39aa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x39AA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA2Cu;
        // 0x39aa30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AA34u;
    // 0x39aa34: 0x0  nop
    ctx->pc = 0x39aa34u;
    // NOP
    ctx->pc = 0x39aa38u;
}

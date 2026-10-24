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

// Function: viBufDelete
// Address: 0x3562a0 - 0x3562f8
void viBufDelete_0x3562a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufDelete_0x3562a0");
#endif

    switch (ctx->pc) {
        case 0x3562b8u: goto label_3562b8;
        case 0x3562e4u: goto label_3562e4;
        default: break;
    }

    ctx->pc = 0x3562a0u;

    // 0x3562a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3562a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3562a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3562a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3562a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3562a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3562acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3562b0: 0xc0d5620  jal         func_355880
    ctx->pc = 0x3562B0u;
    SET_GPR_U32(ctx, 31, 0x3562B8u);
    ctx->pc = 0x3562B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562B0u;
    // 0x3562b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355880u, 0x3562B0u, 0x3562B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562B8u;
label_3562b8:
    // 0x3562b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3562b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3562bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3562bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3562c0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3562c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3562c4: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x3562c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x3562c8: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x3562c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x3562cc: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x3562ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x3562d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3562d0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x3562d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3562d4u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 0));
    // 0x3562d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3562d8u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 0));
    // 0x3562dc: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3562DCu;
    SET_GPR_U32(ctx, 31, 0x3562E4u);
    ctx->pc = 0x3562E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562DCu;
    // 0x3562e0: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3562DCu, 0x3562E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562E4u;
label_3562e4:
    // 0x3562e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3562e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3562e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3562e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3562ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3562ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3562f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3562F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3562F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3562F0u;
        // 0x3562f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3562F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3562F8u;
}

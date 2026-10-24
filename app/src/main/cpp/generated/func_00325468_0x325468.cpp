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

// Function: func_00325468
// Address: 0x325468 - 0x3254f0
void func_00325468_0x325468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325468_0x325468");
#endif

    switch (ctx->pc) {
        case 0x3254bcu: goto label_3254bc;
        case 0x3254d0u: goto label_3254d0;
        case 0x3254e0u: goto label_3254e0;
        default: break;
    }

    ctx->pc = 0x325468u;

    // 0x325468: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32546c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32546cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325470: 0x8c47f9d8  lw          $a3, -0x628($v0)
    ctx->pc = 0x325470u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3CF9D8u));
    // 0x325474: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x325474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x325478: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x325478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x32547c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32547cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325480: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x325480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x325484: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x325484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x325488: 0x246399d0  addiu       $v1, $v1, -0x6630
    ctx->pc = 0x325488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941136));
    // 0x32548c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325490: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x325490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x325494: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x325494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x325498: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x325498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x32549c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x32549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3254a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3254a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3254a4: 0x26108140  addiu       $s0, $s0, -0x7EC0
    ctx->pc = 0x3254a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
    // 0x3254a8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3254a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3254ac: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x3254acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x3254b0: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x3254b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x3254b4: 0xc0ebea8  jal         func_3AFAA0
    ctx->pc = 0x3254B4u;
    SET_GPR_U32(ctx, 31, 0x3254BCu);
    ctx->pc = 0x3254B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254B4u;
    // 0x3254b8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAA0u, 0x3254B4u, 0x3254BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254BCu;
label_3254bc:
    // 0x3254bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3254bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3254c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3254c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3254c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3254c8: 0xc0ec2ea  jal         func_3B0BA8
    ctx->pc = 0x3254C8u;
    SET_GPR_U32(ctx, 31, 0x3254D0u);
    ctx->pc = 0x3254CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254C8u;
    // 0x3254cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0BA8u, 0x3254C8u, 0x3254D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254D0u;
label_3254d0:
    // 0x3254d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3254d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3254d4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3254d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3254d8: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x3254D8u;
    SET_GPR_U32(ctx, 31, 0x3254E0u);
    ctx->pc = 0x3254DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254D8u;
    // 0x3254dc: 0x8c4580bc  lw          $a1, -0x7F44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934716)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x3254D8u, 0x3254E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254E0u;
label_3254e0:
    // 0x3254e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3254e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3254e4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3254e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3254e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3254E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3254ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254E8u;
        // 0x3254ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3254E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3254F0u;
}

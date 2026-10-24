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

// Function: func_00325578
// Address: 0x325578 - 0x325610
void func_00325578_0x325578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325578_0x325578");
#endif

    switch (ctx->pc) {
        case 0x3255ccu: goto label_3255cc;
        case 0x3255e0u: goto label_3255e0;
        case 0x3255f0u: goto label_3255f0;
        case 0x3255fcu: goto label_3255fc;
        default: break;
    }

    ctx->pc = 0x325578u;

    // 0x325578: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32557c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32557cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325580: 0x8c47f9d8  lw          $a3, -0x628($v0)
    ctx->pc = 0x325580u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3CF9D8u));
    // 0x325584: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x325584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x325588: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x325588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x32558c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32558cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325590: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x325590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x325594: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x325594u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x325598: 0x2463b9d0  addiu       $v1, $v1, -0x4630
    ctx->pc = 0x325598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949328));
    // 0x32559c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255a0: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x3255a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3255a4: 0x24a55100  addiu       $a1, $a1, 0x5100
    ctx->pc = 0x3255a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20736));
    // 0x3255a8: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x3255a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x3255ac: 0x2610814c  addiu       $s0, $s0, -0x7EB4
    ctx->pc = 0x3255acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934860));
    // 0x3255b0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3255b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3255b4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3255b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3255b8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3255b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3255bc: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x3255bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x3255c0: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x3255c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x3255c4: 0xc0ebea8  jal         func_3AFAA0
    ctx->pc = 0x3255C4u;
    SET_GPR_U32(ctx, 31, 0x3255CCu);
    ctx->pc = 0x3255C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255C4u;
    // 0x3255c8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAA0u, 0x3255C4u, 0x3255CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255CCu;
label_3255cc:
    // 0x3255cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3255ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3255d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3255d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3255d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3255d8: 0xc0ec2ea  jal         func_3B0BA8
    ctx->pc = 0x3255D8u;
    SET_GPR_U32(ctx, 31, 0x3255E0u);
    ctx->pc = 0x3255DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255D8u;
    // 0x3255dc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0BA8u, 0x3255D8u, 0x3255E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255E0u;
label_3255e0:
    // 0x3255e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3255e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3255e4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3255e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3255e8: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x3255E8u;
    SET_GPR_U32(ctx, 31, 0x3255F0u);
    ctx->pc = 0x3255ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255E8u;
    // 0x3255ec: 0x8c4580c8  lw          $a1, -0x7F38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x3255E8u, 0x3255F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255F0u;
label_3255f0:
    // 0x3255f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3255f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3255f4: 0xc0c94d8  jal         func_325360
    ctx->pc = 0x3255F4u;
    SET_GPR_U32(ctx, 31, 0x3255FCu);
    ctx->pc = 0x325360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325360u, 0x3255F4u, 0x3255FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255FCu;
label_3255fc:
    // 0x3255fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3255fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325600: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x325600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325604: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x325604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325608: 0x3e00008  jr          $ra
    ctx->pc = 0x325608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325608u;
        // 0x32560c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325610u;
}

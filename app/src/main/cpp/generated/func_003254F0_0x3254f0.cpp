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

// Function: func_003254F0
// Address: 0x3254f0 - 0x325578
void func_003254F0_0x3254f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003254F0_0x3254f0");
#endif

    switch (ctx->pc) {
        case 0x325544u: goto label_325544;
        case 0x325558u: goto label_325558;
        case 0x325568u: goto label_325568;
        default: break;
    }

    ctx->pc = 0x3254f0u;

    // 0x3254f0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3254f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3254f4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3254f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3254f8: 0x8c47f9d8  lw          $a3, -0x628($v0)
    ctx->pc = 0x3254f8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3CF9D8u));
    // 0x3254fc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x3254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x325500: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x325500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x325504: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325508: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x325508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x32550c: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x32550cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x325510: 0x2463a9d0  addiu       $v1, $v1, -0x5630
    ctx->pc = 0x325510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945232));
    // 0x325514: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x325514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325518: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x325518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x32551c: 0x24a55010  addiu       $a1, $a1, 0x5010
    ctx->pc = 0x32551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20496));
    // 0x325520: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x325520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x325524: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x325524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x325528: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x325528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x32552c: 0x26108144  addiu       $s0, $s0, -0x7EBC
    ctx->pc = 0x32552cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934852));
    // 0x325530: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x325530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x325534: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x325534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x325538: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x325538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x32553c: 0xc0ebea8  jal         func_3AFAA0
    ctx->pc = 0x32553Cu;
    SET_GPR_U32(ctx, 31, 0x325544u);
    ctx->pc = 0x325540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32553Cu;
    // 0x325540: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAA0u, 0x32553Cu, 0x325544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325544u;
label_325544:
    // 0x325544: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x325544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x325548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32554c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325550: 0xc0ec2ea  jal         func_3B0BA8
    ctx->pc = 0x325550u;
    SET_GPR_U32(ctx, 31, 0x325558u);
    ctx->pc = 0x325554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325550u;
    // 0x325554: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0BA8u, 0x325550u, 0x325558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325558u;
label_325558:
    // 0x325558: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x325558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32555c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32555cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325560: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x325560u;
    SET_GPR_U32(ctx, 31, 0x325568u);
    ctx->pc = 0x325564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325560u;
    // 0x325564: 0x8c4580c0  lw          $a1, -0x7F40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934720)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x325560u, 0x325568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325568u;
label_325568:
    // 0x325568: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x325568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32556c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32556cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325570: 0x3e00008  jr          $ra
    ctx->pc = 0x325570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325570u;
        // 0x325574: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325578u;
}

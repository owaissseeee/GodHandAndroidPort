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

// Function: func_002736F8
// Address: 0x2736f8 - 0x273748
void func_002736F8_0x2736f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002736F8_0x2736f8");
#endif

    switch (ctx->pc) {
        case 0x273738u: goto label_273738;
        default: break;
    }

    ctx->pc = 0x2736f8u;

    // 0x2736f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2736f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2736fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2736fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273704: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x273704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x273708: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x273708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27370c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27370cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x273710: 0x8d071644  lw          $a3, 0x1644($t0)
    ctx->pc = 0x273710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 5700)));
    // 0x273714: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x273714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x273718: 0x95050640  lhu         $a1, 0x640($t0)
    ctx->pc = 0x273718u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1600)));
    // 0x27371c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x27371cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x273720: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x273720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x273724: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x273724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x273728: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x273728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x27372c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x27372cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273730: 0xc0a5526  jal         func_295498
    ctx->pc = 0x273730u;
    SET_GPR_U32(ctx, 31, 0x273738u);
    ctx->pc = 0x273734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273730u;
    // 0x273734: 0xad071644  sw          $a3, 0x1644($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 5700), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295498u, 0x273730u, 0x273738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273738u;
label_273738:
    // 0x273738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27373c: 0x3e00008  jr          $ra
    ctx->pc = 0x27373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27373Cu;
        // 0x273740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273744u;
    // 0x273744: 0x0  nop
    ctx->pc = 0x273744u;
    // NOP
    ctx->pc = 0x273748u;
}

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

// Function: func_0030D1F8
// Address: 0x30d1f8 - 0x30d258
void func_0030D1F8_0x30d1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030D1F8_0x30d1f8");
#endif

    switch (ctx->pc) {
        case 0x30d240u: goto label_30d240;
        case 0x30d248u: goto label_30d248;
        default: break;
    }

    ctx->pc = 0x30d1f8u;

    // 0x30d1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30d1fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30d200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d204: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30d204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30d208: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x30d208u;
    runtime->Store32(rdram, ctx, 0x10000000u, GPR_U32(ctx, 0));
    // 0x30d20c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x30d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x30d210: 0x24042589  addiu       $a0, $zero, 0x2589
    ctx->pc = 0x30d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9609));
    // 0x30d214: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x30d214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x30d218: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x30d218u;
    runtime->Store32(rdram, ctx, 0x10000020u, GPR_U32(ctx, 4));
    // 0x30d21c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30d220: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x30d220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30d224: 0x24a5d190  addiu       $a1, $a1, -0x2E70
    ctx->pc = 0x30d224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955408));
    // 0x30d228: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30d228u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000010u));
    // 0x30d22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d230: 0x344201c2  ori         $v0, $v0, 0x1C2
    ctx->pc = 0x30d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)450);
    // 0x30d234: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30d234u;
    runtime->Store32(rdram, ctx, 0x10000010u, GPR_U32(ctx, 2));
    // 0x30d238: 0xc0ebe60  jal         func_3AF980
    ctx->pc = 0x30D238u;
    SET_GPR_U32(ctx, 31, 0x30D240u);
    ctx->pc = 0x3AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF980u, 0x30D238u, 0x30D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D240u;
label_30d240:
    // 0x30d240: 0xc0ec1d0  jal         func_3B0740
    ctx->pc = 0x30D240u;
    SET_GPR_U32(ctx, 31, 0x30D248u);
    ctx->pc = 0x30D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D240u;
    // 0x30d244: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0740u, 0x30D240u, 0x30D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D248u;
label_30d248:
    // 0x30d248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d24c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D24Cu;
        // 0x30d250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D254u;
    // 0x30d254: 0x0  nop
    ctx->pc = 0x30d254u;
    // NOP
    ctx->pc = 0x30d258u;
}

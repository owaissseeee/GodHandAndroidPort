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

// Function: SetupFields10And14_13D3C0
// Address: 0x13d3c0 - 0x13d400
void SetupFields10And14_13D3C0_0x13d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupFields10And14_13D3C0_0x13d3c0");
#endif

    switch (ctx->pc) {
        case 0x13d3dcu: goto label_13d3dc;
        case 0x13d3ecu: goto label_13d3ec;
        default: break;
    }

    ctx->pc = 0x13d3c0u;

    // 0x13d3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d3c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d3c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d3cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d3d4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13D3D4u;
    SET_GPR_U32(ctx, 31, 0x13D3DCu);
    ctx->pc = 0x13D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3D4u;
    // 0x13d3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13D3D4u, 0x13D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3DCu;
label_13d3dc:
    // 0x13d3dc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x13d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x13d3e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d3e4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13D3E4u;
    SET_GPR_U32(ctx, 31, 0x13D3ECu);
    ctx->pc = 0x13D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3E4u;
    // 0x13d3e8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13D3E4u, 0x13D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3ECu;
label_13d3ec:
    // 0x13d3ec: 0xa6000092  sh          $zero, 0x92($s0)
    ctx->pc = 0x13d3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x13d3f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3F8u;
        // 0x13d3fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D400u;
}

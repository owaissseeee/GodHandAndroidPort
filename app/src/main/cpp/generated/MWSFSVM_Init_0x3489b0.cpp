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

// Function: MWSFSVM_Init
// Address: 0x3489b0 - 0x3489f0
void MWSFSVM_Init_0x3489b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSFSVM_Init_0x3489b0");
#endif

    switch (ctx->pc) {
        case 0x3489c0u: goto label_3489c0;
        default: break;
    }

    ctx->pc = 0x3489b0u;

    // 0x3489b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3489b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3489b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3489b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3489b8: 0xc0cefa0  jal         func_33BE80
    ctx->pc = 0x3489B8u;
    SET_GPR_U32(ctx, 31, 0x3489C0u);
    ctx->pc = 0x33BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BE80u, 0x3489B8u, 0x3489C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489C0u;
label_3489c0:
    // 0x3489c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3489c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3489c4: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x3489c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x3489c8: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x3489c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x3489cc: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x3489ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x3489d0: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x3489d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x3489d4: 0xac400d80  sw          $zero, 0xD80($v0)
    ctx->pc = 0x3489d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x760D80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x760D80u, _value); } while (0);
    // 0x3489d8: 0xac600d84  sw          $zero, 0xD84($v1)
    ctx->pc = 0x3489d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x760D84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x760D84u, _value); } while (0);
    // 0x3489dc: 0xac800d88  sw          $zero, 0xD88($a0)
    ctx->pc = 0x3489dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x760D88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x760D88u, _value); } while (0);
    // 0x3489e0: 0xaca00d8c  sw          $zero, 0xD8C($a1)
    ctx->pc = 0x3489e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x760D8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x760D8Cu, _value); } while (0);
    // 0x3489e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3489E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3489E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489E4u;
        // 0x3489e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3489E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3489ECu;
    // 0x3489ec: 0x0  nop
    ctx->pc = 0x3489ecu;
    // NOP
    ctx->pc = 0x3489f0u;
}

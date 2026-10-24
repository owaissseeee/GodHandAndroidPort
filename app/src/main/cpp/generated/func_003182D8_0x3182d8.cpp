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

// Function: func_003182D8
// Address: 0x3182d8 - 0x318338
void func_003182D8_0x3182d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003182D8_0x3182d8");
#endif

    switch (ctx->pc) {
        case 0x3182fcu: goto label_3182fc;
        case 0x318308u: goto label_318308;
        case 0x31831cu: goto label_31831c;
        default: break;
    }

    ctx->pc = 0x3182d8u;

    // 0x3182d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3182d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3182dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3182dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3182e0: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3182E0u;
    {
        const bool branch_taken_0x3182e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3182E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182E0u;
        // 0x3182e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182e0) {
            ctx->pc = 0x31832Cu;
            goto label_31832c;
        }
    }
    ctx->pc = 0x3182E8u;
    // 0x3182e8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3182E8u;
    {
        const bool branch_taken_0x3182e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3182ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182E8u;
        // 0x3182ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182e8) {
            ctx->pc = 0x318330u;
            goto label_318330;
        }
    }
    ctx->pc = 0x3182F0u;
    // 0x3182f0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x3182f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x3182f4: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x3182F4u;
    SET_GPR_U32(ctx, 31, 0x3182FCu);
    ctx->pc = 0x3182F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3182F4u;
    // 0x3182f8: 0x24844c10  addiu       $a0, $a0, 0x4C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x3182F4u, 0x3182FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3182FCu;
label_3182fc:
    // 0x3182fc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x3182fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x318300: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x318300u;
    SET_GPR_U32(ctx, 31, 0x318308u);
    ctx->pc = 0x318304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318300u;
    // 0x318304: 0x24844c20  addiu       $a0, $a0, 0x4C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x318300u, 0x318308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318308u;
label_318308:
    // 0x318308: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x318308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x31830c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x31830cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x318310: 0xac404c30  sw          $zero, 0x4C30($v0)
    ctx->pc = 0x318310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C30u, _value); } while (0);
    // 0x318314: 0xc0b14ea  jal         func_2C53A8
    ctx->pc = 0x318314u;
    SET_GPR_U32(ctx, 31, 0x31831Cu);
    ctx->pc = 0x318318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318314u;
    // 0x318318: 0x24844c38  addiu       $a0, $a0, 0x4C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C53A8u, 0x318314u, 0x31831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31831Cu;
label_31831c:
    // 0x31831c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x31831cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x318320: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x318320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x318324: 0xac604c50  sw          $zero, 0x4C50($v1)
    ctx->pc = 0x318324u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C50u, _value); } while (0);
    // 0x318328: 0xac404c58  sw          $zero, 0x4C58($v0)
    ctx->pc = 0x318328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C58u, _value); } while (0);
label_31832c:
    // 0x31832c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31832cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_318330:
    // 0x318330: 0x3e00008  jr          $ra
    ctx->pc = 0x318330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318330u;
        // 0x318334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318338u;
}

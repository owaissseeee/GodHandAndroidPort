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

// Function: func_003201F0
// Address: 0x3201f0 - 0x320240
void func_003201F0_0x3201f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003201F0_0x3201f0");
#endif

    switch (ctx->pc) {
        case 0x320214u: goto label_320214;
        case 0x32022cu: goto label_32022c;
        default: break;
    }

    ctx->pc = 0x3201f0u;

    // 0x3201f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3201f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3201f4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3201f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3201f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3201f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3201fc: 0x8c6266e8  lw          $v0, 0x66E8($v1)
    ctx->pc = 0x3201fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7866E8u));
    // 0x320200: 0x247066e8  addiu       $s0, $v1, 0x66E8
    ctx->pc = 0x320200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26344));
    // 0x320204: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x320204u;
    {
        const bool branch_taken_0x320204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320204u;
        // 0x320208: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320204) {
            ctx->pc = 0x32022Cu;
            goto label_32022c;
        }
    }
    ctx->pc = 0x32020Cu;
    // 0x32020c: 0xc0c7d28  jal         func_31F4A0
    ctx->pc = 0x32020Cu;
    SET_GPR_U32(ctx, 31, 0x320214u);
    ctx->pc = 0x31F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4A0u, 0x32020Cu, 0x320214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320214u;
label_320214:
    // 0x320214: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x320214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x320218: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x320218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x32021c: 0x24a51258  addiu       $a1, $a1, 0x1258
    ctx->pc = 0x32021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
    // 0x320220: 0x24c60da0  addiu       $a2, $a2, 0xDA0
    ctx->pc = 0x320220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x320224: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x320224u;
    SET_GPR_U32(ctx, 31, 0x32022Cu);
    ctx->pc = 0x320228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320224u;
    // 0x320228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x320224u, 0x32022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32022Cu;
label_32022c:
    // 0x32022c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32022cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320238: 0x3e00008  jr          $ra
    ctx->pc = 0x320238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320238u;
        // 0x32023c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320240u;
}

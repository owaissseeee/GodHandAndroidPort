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

// Function: func_0019A1F0
// Address: 0x19a1f0 - 0x19a240
void func_0019A1F0_0x19a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A1F0_0x19a1f0");
#endif

    switch (ctx->pc) {
        case 0x19a214u: goto label_19a214;
        case 0x19a22cu: goto label_19a22c;
        default: break;
    }

    ctx->pc = 0x19a1f0u;

    // 0x19a1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a1f4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19a1f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19a1fc: 0x8c625d38  lw          $v0, 0x5D38($v1)
    ctx->pc = 0x19a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785D38u));
    // 0x19a200: 0x24705d38  addiu       $s0, $v1, 0x5D38
    ctx->pc = 0x19a200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23864));
    // 0x19a204: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A204u;
    {
        const bool branch_taken_0x19a204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A204u;
        // 0x19a208: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a204) {
            ctx->pc = 0x19A22Cu;
            goto label_19a22c;
        }
    }
    ctx->pc = 0x19A20Cu;
    // 0x19a20c: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19A20Cu;
    SET_GPR_U32(ctx, 31, 0x19A214u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19A20Cu, 0x19A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A214u;
label_19a214:
    // 0x19a214: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19a214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19a218: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19a218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19a21c: 0x24a55360  addiu       $a1, $a1, 0x5360
    ctx->pc = 0x19a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21344));
    // 0x19a220: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19a220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19a224: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19A224u;
    SET_GPR_U32(ctx, 31, 0x19A22Cu);
    ctx->pc = 0x19A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A224u;
    // 0x19a228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19A224u, 0x19A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A22Cu;
label_19a22c:
    // 0x19a22c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19a22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a234: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19a234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a238: 0x3e00008  jr          $ra
    ctx->pc = 0x19A238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A238u;
        // 0x19a23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A240u;
}

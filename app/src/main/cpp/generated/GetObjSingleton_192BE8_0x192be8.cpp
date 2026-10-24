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

// Function: GetObjSingleton_192BE8
// Address: 0x192be8 - 0x192c38
void GetObjSingleton_192BE8_0x192be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjSingleton_192BE8_0x192be8");
#endif

    switch (ctx->pc) {
        case 0x192c0cu: goto label_192c0c;
        case 0x192c24u: goto label_192c24;
        default: break;
    }

    ctx->pc = 0x192be8u;

    // 0x192be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192bec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x192becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x192bf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192bf4: 0x8c625c38  lw          $v0, 0x5C38($v1)
    ctx->pc = 0x192bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785C38u));
    // 0x192bf8: 0x24705c38  addiu       $s0, $v1, 0x5C38
    ctx->pc = 0x192bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23608));
    // 0x192bfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192BFCu;
    {
        const bool branch_taken_0x192bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BFCu;
        // 0x192c00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bfc) {
            ctx->pc = 0x192C24u;
            goto label_192c24;
        }
    }
    ctx->pc = 0x192C04u;
    // 0x192c04: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x192C04u;
    SET_GPR_U32(ctx, 31, 0x192C0Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x192C04u, 0x192C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C0Cu;
label_192c0c:
    // 0x192c0c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x192c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x192c10: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x192c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x192c14: 0x24a544c0  addiu       $a1, $a1, 0x44C0
    ctx->pc = 0x192c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17600));
    // 0x192c18: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x192c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x192c1c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x192C1Cu;
    SET_GPR_U32(ctx, 31, 0x192C24u);
    ctx->pc = 0x192C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C1Cu;
    // 0x192c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x192C1Cu, 0x192C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C24u;
label_192c24:
    // 0x192c24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192c2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192c30: 0x3e00008  jr          $ra
    ctx->pc = 0x192C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C30u;
        // 0x192c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192C38u;
}

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

// Function: GetTypeRegistry_19E170
// Address: 0x19e170 - 0x19e1c0
void GetTypeRegistry_19E170_0x19e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeRegistry_19E170_0x19e170");
#endif

    switch (ctx->pc) {
        case 0x19e194u: goto label_19e194;
        case 0x19e1acu: goto label_19e1ac;
        default: break;
    }

    ctx->pc = 0x19e170u;

    // 0x19e170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e174: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19e174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19e178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19e17c: 0x8c625e48  lw          $v0, 0x5E48($v1)
    ctx->pc = 0x19e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E48u));
    // 0x19e180: 0x24705e48  addiu       $s0, $v1, 0x5E48
    ctx->pc = 0x19e180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24136));
    // 0x19e184: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E184u;
    {
        const bool branch_taken_0x19e184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E184u;
        // 0x19e188: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e184) {
            ctx->pc = 0x19E1ACu;
            goto label_19e1ac;
        }
    }
    ctx->pc = 0x19E18Cu;
    // 0x19e18c: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19E18Cu;
    SET_GPR_U32(ctx, 31, 0x19E194u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19E18Cu, 0x19E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E194u;
label_19e194:
    // 0x19e194: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19e194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19e198: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19e198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19e19c: 0x24a56250  addiu       $a1, $a1, 0x6250
    ctx->pc = 0x19e19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25168));
    // 0x19e1a0: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19e1a4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19E1A4u;
    SET_GPR_U32(ctx, 31, 0x19E1ACu);
    ctx->pc = 0x19E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1A4u;
    // 0x19e1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19E1A4u, 0x19E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1ACu;
label_19e1ac:
    // 0x19e1ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e1b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19e1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19E1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B8u;
        // 0x19e1bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E1C0u;
}

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

// Function: GetSingleton786248_27DD38
// Address: 0x27dd38 - 0x27dd88
void GetSingleton786248_27DD38_0x27dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton786248_27DD38_0x27dd38");
#endif

    switch (ctx->pc) {
        case 0x27dd5cu: goto label_27dd5c;
        case 0x27dd74u: goto label_27dd74;
        default: break;
    }

    ctx->pc = 0x27dd38u;

    // 0x27dd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27dd3c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x27dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x27dd40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27dd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27dd44: 0x8c626248  lw          $v0, 0x6248($v1)
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786248u));
    // 0x27dd48: 0x24706248  addiu       $s0, $v1, 0x6248
    ctx->pc = 0x27dd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25160));
    // 0x27dd4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DD4Cu;
    {
        const bool branch_taken_0x27dd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD4Cu;
        // 0x27dd50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd4c) {
            ctx->pc = 0x27DD74u;
            goto label_27dd74;
        }
    }
    ctx->pc = 0x27DD54u;
    // 0x27dd54: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x27DD54u;
    SET_GPR_U32(ctx, 31, 0x27DD5Cu);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x27DD54u, 0x27DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD5Cu;
label_27dd5c:
    // 0x27dd5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x27dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x27dd60: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x27dd60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x27dd64: 0x24a58298  addiu       $a1, $a1, -0x7D68
    ctx->pc = 0x27dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935192));
    // 0x27dd68: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x27dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x27dd6c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x27DD6Cu;
    SET_GPR_U32(ctx, 31, 0x27DD74u);
    ctx->pc = 0x27DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD6Cu;
    // 0x27dd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x27DD6Cu, 0x27DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD74u;
label_27dd74:
    // 0x27dd74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27dd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27dd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dd7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27dd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dd80: 0x3e00008  jr          $ra
    ctx->pc = 0x27DD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD80u;
        // 0x27dd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DD88u;
}

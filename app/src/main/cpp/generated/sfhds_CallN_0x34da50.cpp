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

// Function: sfhds_CallN
// Address: 0x34da50 - 0x34da88
void sfhds_CallN_0x34da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_CallN_0x34da50");
#endif

    switch (ctx->pc) {
        case 0x34da50u: goto label_34da50;
        case 0x34da54u: goto label_34da54;
        case 0x34da58u: goto label_34da58;
        case 0x34da5cu: goto label_34da5c;
        case 0x34da60u: goto label_34da60;
        case 0x34da64u: goto label_34da64;
        case 0x34da68u: goto label_34da68;
        case 0x34da6cu: goto label_34da6c;
        case 0x34da70u: goto label_34da70;
        case 0x34da74u: goto label_34da74;
        case 0x34da78u: goto label_34da78;
        case 0x34da7cu: goto label_34da7c;
        case 0x34da80u: goto label_34da80;
        case 0x34da84u: goto label_34da84;
        default: break;
    }

    ctx->pc = 0x34da50u;

label_34da50:
    // 0x34da50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34da54:
    // 0x34da54: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34da54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34da58:
    // 0x34da58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34da5c:
    // 0x34da5c: 0x40f809  jalr        $v0
label_34da60:
    if (ctx->pc == 0x34DA60u) {
        ctx->pc = 0x34DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA5Cu;
        // 0x34da60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34DA64u;
        goto label_34da64;
    }
    ctx->pc = 0x34DA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34DA64u);
        ctx->pc = 0x34DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA5Cu;
        // 0x34da60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DA5Cu, 0x34DA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34DA64u;
label_34da64:
    // 0x34da64: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x34da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34da68:
    // 0x34da68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34da6c:
    // 0x34da6c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x34da6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_34da70:
    // 0x34da70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34da70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34da74:
    // 0x34da74: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x34da74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_34da78:
    // 0x34da78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34da78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34da7c:
    // 0x34da7c: 0x3e00008  jr          $ra
label_34da80:
    if (ctx->pc == 0x34DA80u) {
        ctx->pc = 0x34DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA7Cu;
        // 0x34da80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34DA84u;
        goto label_34da84;
    }
    ctx->pc = 0x34DA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA7Cu;
        // 0x34da80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DA84u;
label_34da84:
    // 0x34da84: 0x0  nop
    ctx->pc = 0x34da84u;
    // NOP
    ctx->pc = 0x34da88u;
}

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

// Function: func_0038A448
// Address: 0x38a448 - 0x38a478
void func_0038A448_0x38a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A448_0x38a448");
#endif

    switch (ctx->pc) {
        case 0x38a448u: goto label_38a448;
        case 0x38a44cu: goto label_38a44c;
        case 0x38a450u: goto label_38a450;
        case 0x38a454u: goto label_38a454;
        case 0x38a458u: goto label_38a458;
        case 0x38a45cu: goto label_38a45c;
        case 0x38a460u: goto label_38a460;
        case 0x38a464u: goto label_38a464;
        case 0x38a468u: goto label_38a468;
        case 0x38a46cu: goto label_38a46c;
        case 0x38a470u: goto label_38a470;
        case 0x38a474u: goto label_38a474;
        default: break;
    }

    ctx->pc = 0x38a448u;

label_38a448:
    // 0x38a448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38a44c:
    // 0x38a44c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38a450:
    // 0x38a450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38a454:
    // 0x38a454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38a458:
    // 0x38a458: 0xa0f809  jalr        $a1
label_38a45c:
    if (ctx->pc == 0x38A45Cu) {
        ctx->pc = 0x38A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A458u;
        // 0x38a45c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A460u;
        goto label_38a460;
    }
    ctx->pc = 0x38A458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38A460u);
        ctx->pc = 0x38A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A458u;
        // 0x38a45c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A458u, 0x38A460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38A460u;
label_38a460:
    // 0x38a460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a464:
    // 0x38a464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38a468:
    // 0x38a468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38a46c:
    // 0x38a46c: 0x3e00008  jr          $ra
label_38a470:
    if (ctx->pc == 0x38A470u) {
        ctx->pc = 0x38A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A46Cu;
        // 0x38a470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A474u;
        goto label_38a474;
    }
    ctx->pc = 0x38A46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A46Cu;
        // 0x38a470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A474u;
label_38a474:
    // 0x38a474: 0x0  nop
    ctx->pc = 0x38a474u;
    // NOP
    ctx->pc = 0x38a478u;
}

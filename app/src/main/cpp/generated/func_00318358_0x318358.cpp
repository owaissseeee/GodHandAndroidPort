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

// Function: func_00318358
// Address: 0x318358 - 0x3183a8
void func_00318358_0x318358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318358_0x318358");
#endif

    switch (ctx->pc) {
        case 0x31837cu: goto label_31837c;
        case 0x318394u: goto label_318394;
        default: break;
    }

    ctx->pc = 0x318358u;

    // 0x318358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31835c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31835cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x318360: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x318360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x318364: 0x8c6265f8  lw          $v0, 0x65F8($v1)
    ctx->pc = 0x318364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7865F8u));
    // 0x318368: 0x247065f8  addiu       $s0, $v1, 0x65F8
    ctx->pc = 0x318368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26104));
    // 0x31836c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31836Cu;
    {
        const bool branch_taken_0x31836c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31836Cu;
        // 0x318370: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31836c) {
            ctx->pc = 0x318394u;
            goto label_318394;
        }
    }
    ctx->pc = 0x318374u;
    // 0x318374: 0xc053f48  jal         func_14FD20
    ctx->pc = 0x318374u;
    SET_GPR_U32(ctx, 31, 0x31837Cu);
    ctx->pc = 0x14FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD20u, 0x318374u, 0x31837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31837Cu;
label_31837c:
    // 0x31837c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31837cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x318380: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x318380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x318384: 0x24a50c08  addiu       $a1, $a1, 0xC08
    ctx->pc = 0x318384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3080));
    // 0x318388: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x318388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
    // 0x31838c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x31838Cu;
    SET_GPR_U32(ctx, 31, 0x318394u);
    ctx->pc = 0x318390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31838Cu;
    // 0x318390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x31838Cu, 0x318394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318394u;
label_318394:
    // 0x318394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x318394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31839c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31839cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3183a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3183A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3183A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183A0u;
        // 0x3183a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3183A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3183A8u;
}

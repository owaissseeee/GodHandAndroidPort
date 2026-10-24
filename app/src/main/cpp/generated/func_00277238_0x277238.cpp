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

// Function: func_00277238
// Address: 0x277238 - 0x277288
void func_00277238_0x277238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277238_0x277238");
#endif

    switch (ctx->pc) {
        case 0x27725cu: goto label_27725c;
        case 0x277274u: goto label_277274;
        default: break;
    }

    ctx->pc = 0x277238u;

    // 0x277238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27723c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x27723cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x277240: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x277240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x277244: 0x8c6261e8  lw          $v0, 0x61E8($v1)
    ctx->pc = 0x277244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7861E8u));
    // 0x277248: 0x247061e8  addiu       $s0, $v1, 0x61E8
    ctx->pc = 0x277248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25064));
    // 0x27724c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27724Cu;
    {
        const bool branch_taken_0x27724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27724Cu;
        // 0x277250: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27724c) {
            ctx->pc = 0x277274u;
            goto label_277274;
        }
    }
    ctx->pc = 0x277254u;
    // 0x277254: 0xc0aa4c0  jal         func_2A9300
    ctx->pc = 0x277254u;
    SET_GPR_U32(ctx, 31, 0x27725Cu);
    ctx->pc = 0x2A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9300u, 0x277254u, 0x27725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27725Cu;
label_27725c:
    // 0x27725c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x27725cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x277260: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x277260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x277264: 0x24a57b70  addiu       $a1, $a1, 0x7B70
    ctx->pc = 0x277264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31600));
    // 0x277268: 0x24c654d8  addiu       $a2, $a2, 0x54D8
    ctx->pc = 0x277268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21720));
    // 0x27726c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x27726Cu;
    SET_GPR_U32(ctx, 31, 0x277274u);
    ctx->pc = 0x277270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27726Cu;
    // 0x277270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x27726Cu, 0x277274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277274u;
label_277274:
    // 0x277274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x277274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27727c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27727cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277280: 0x3e00008  jr          $ra
    ctx->pc = 0x277280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277280u;
        // 0x277284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277288u;
}

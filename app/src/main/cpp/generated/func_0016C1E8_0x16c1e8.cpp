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

// Function: func_0016C1E8
// Address: 0x16c1e8 - 0x16c238
void func_0016C1E8_0x16c1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016C1E8_0x16c1e8");
#endif

    switch (ctx->pc) {
        case 0x16c20cu: goto label_16c20c;
        case 0x16c224u: goto label_16c224;
        default: break;
    }

    ctx->pc = 0x16c1e8u;

    // 0x16c1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c1ec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x16c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x16c1f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c1f4: 0x8c625768  lw          $v0, 0x5768($v1)
    ctx->pc = 0x16c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785768u));
    // 0x16c1f8: 0x24705768  addiu       $s0, $v1, 0x5768
    ctx->pc = 0x16c1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22376));
    // 0x16c1fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16C1FCu;
    {
        const bool branch_taken_0x16c1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1FCu;
        // 0x16c200: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1fc) {
            ctx->pc = 0x16C224u;
            goto label_16c224;
        }
    }
    ctx->pc = 0x16C204u;
    // 0x16c204: 0xc05858a  jal         func_161628
    ctx->pc = 0x16C204u;
    SET_GPR_U32(ctx, 31, 0x16C20Cu);
    ctx->pc = 0x161628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161628u, 0x16C204u, 0x16C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C20Cu;
label_16c20c:
    // 0x16c20c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16c210: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x16c210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x16c214: 0x24a5fe38  addiu       $a1, $a1, -0x1C8
    ctx->pc = 0x16c214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966840));
    // 0x16c218: 0x24c60d38  addiu       $a2, $a2, 0xD38
    ctx->pc = 0x16c218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x16c21c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x16C21Cu;
    SET_GPR_U32(ctx, 31, 0x16C224u);
    ctx->pc = 0x16C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C21Cu;
    // 0x16c220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x16C21Cu, 0x16C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C224u;
label_16c224:
    // 0x16c224: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c22c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c230: 0x3e00008  jr          $ra
    ctx->pc = 0x16C230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C230u;
        // 0x16c234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C238u;
}

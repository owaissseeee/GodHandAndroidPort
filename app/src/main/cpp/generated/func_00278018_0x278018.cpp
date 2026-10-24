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

// Function: func_00278018
// Address: 0x278018 - 0x278068
void func_00278018_0x278018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00278018_0x278018");
#endif

    switch (ctx->pc) {
        case 0x27803cu: goto label_27803c;
        case 0x278054u: goto label_278054;
        default: break;
    }

    ctx->pc = 0x278018u;

    // 0x278018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27801c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x27801cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x278020: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x278020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x278024: 0x8c6261f8  lw          $v0, 0x61F8($v1)
    ctx->pc = 0x278024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7861F8u));
    // 0x278028: 0x247061f8  addiu       $s0, $v1, 0x61F8
    ctx->pc = 0x278028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25080));
    // 0x27802c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27802Cu;
    {
        const bool branch_taken_0x27802c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27802Cu;
        // 0x278030: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27802c) {
            ctx->pc = 0x278054u;
            goto label_278054;
        }
    }
    ctx->pc = 0x278034u;
    // 0x278034: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x278034u;
    SET_GPR_U32(ctx, 31, 0x27803Cu);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x278034u, 0x27803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27803Cu;
label_27803c:
    // 0x27803c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x27803cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x278040: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x278040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x278044: 0x24a57c90  addiu       $a1, $a1, 0x7C90
    ctx->pc = 0x278044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
    // 0x278048: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x278048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x27804c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x27804Cu;
    SET_GPR_U32(ctx, 31, 0x278054u);
    ctx->pc = 0x278050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27804Cu;
    // 0x278050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x27804Cu, 0x278054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278054u;
label_278054:
    // 0x278054: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x278054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27805c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27805cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278060: 0x3e00008  jr          $ra
    ctx->pc = 0x278060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278060u;
        // 0x278064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278068u;
}

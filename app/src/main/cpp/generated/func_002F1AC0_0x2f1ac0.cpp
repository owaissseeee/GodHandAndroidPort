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

// Function: func_002F1AC0
// Address: 0x2f1ac0 - 0x2f1b18
void func_002F1AC0_0x2f1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F1AC0_0x2f1ac0");
#endif

    switch (ctx->pc) {
        case 0x2f1ae4u: goto label_2f1ae4;
        case 0x2f1afcu: goto label_2f1afc;
        default: break;
    }

    ctx->pc = 0x2f1ac0u;

    // 0x2f1ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1ac4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f1ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f1ac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f1ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f1acc: 0x8c626498  lw          $v0, 0x6498($v1)
    ctx->pc = 0x2f1accu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786498u));
    // 0x2f1ad0: 0x24706498  addiu       $s0, $v1, 0x6498
    ctx->pc = 0x2f1ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25752));
    // 0x2f1ad4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1AD4u;
    {
        const bool branch_taken_0x2f1ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AD4u;
        // 0x2f1ad8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ad4) {
            ctx->pc = 0x2F1AFCu;
            goto label_2f1afc;
        }
    }
    ctx->pc = 0x2F1ADCu;
    // 0x2f1adc: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F1ADCu;
    SET_GPR_U32(ctx, 31, 0x2F1AE4u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F1ADCu, 0x2F1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AE4u;
label_2f1ae4:
    // 0x2f1ae4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f1ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f1ae8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f1ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f1aec: 0x24a5ecf8  addiu       $a1, $a1, -0x1308
    ctx->pc = 0x2f1aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962424));
    // 0x2f1af0: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f1af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f1af4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F1AF4u;
    SET_GPR_U32(ctx, 31, 0x2F1AFCu);
    ctx->pc = 0x2F1AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AF4u;
    // 0x2f1af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F1AF4u, 0x2F1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AFCu;
label_2f1afc:
    // 0x2f1afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f1afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B08u;
        // 0x2f1b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1B10u;
    // 0x2f1b10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1b14: 0x0  nop
    ctx->pc = 0x2f1b14u;
    // NOP
    ctx->pc = 0x2f1b18u;
}

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

// Function: GetSingleton785868_171AB8
// Address: 0x171ab8 - 0x171b10
void GetSingleton785868_171AB8_0x171ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton785868_171AB8_0x171ab8");
#endif

    switch (ctx->pc) {
        case 0x171adcu: goto label_171adc;
        case 0x171af4u: goto label_171af4;
        default: break;
    }

    ctx->pc = 0x171ab8u;

    // 0x171ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171abc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x171ac0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171ac4: 0x8c625868  lw          $v0, 0x5868($v1)
    ctx->pc = 0x171ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785868u));
    // 0x171ac8: 0x24705868  addiu       $s0, $v1, 0x5868
    ctx->pc = 0x171ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22632));
    // 0x171acc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171ACCu;
    {
        const bool branch_taken_0x171acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171ACCu;
        // 0x171ad0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171acc) {
            ctx->pc = 0x171AF4u;
            goto label_171af4;
        }
    }
    ctx->pc = 0x171AD4u;
    // 0x171ad4: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x171AD4u;
    SET_GPR_U32(ctx, 31, 0x171ADCu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x171AD4u, 0x171ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ADCu;
label_171adc:
    // 0x171adc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x171adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x171ae0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x171ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x171ae4: 0x24a50d50  addiu       $a1, $a1, 0xD50
    ctx->pc = 0x171ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3408));
    // 0x171ae8: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x171ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x171aec: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x171AECu;
    SET_GPR_U32(ctx, 31, 0x171AF4u);
    ctx->pc = 0x171AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AECu;
    // 0x171af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x171AECu, 0x171AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171AF4u;
label_171af4:
    // 0x171af4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171afc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171b00: 0x3e00008  jr          $ra
    ctx->pc = 0x171B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B00u;
        // 0x171b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171B08u;
    // 0x171b08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x171b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x171b0c: 0x0  nop
    ctx->pc = 0x171b0cu;
    // NOP
    ctx->pc = 0x171b10u;
}

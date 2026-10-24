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

// Function: func_00320180
// Address: 0x320180 - 0x3201d0
void func_00320180_0x320180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00320180_0x320180");
#endif

    switch (ctx->pc) {
        case 0x3201a4u: goto label_3201a4;
        case 0x3201bcu: goto label_3201bc;
        default: break;
    }

    ctx->pc = 0x320180u;

    // 0x320180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x320184: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x320184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x320188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x320188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32018c: 0x8c6266d8  lw          $v0, 0x66D8($v1)
    ctx->pc = 0x32018cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7866D8u));
    // 0x320190: 0x247066d8  addiu       $s0, $v1, 0x66D8
    ctx->pc = 0x320190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26328));
    // 0x320194: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x320194u;
    {
        const bool branch_taken_0x320194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320194u;
        // 0x320198: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320194) {
            ctx->pc = 0x3201BCu;
            goto label_3201bc;
        }
    }
    ctx->pc = 0x32019Cu;
    // 0x32019c: 0xc0c7d28  jal         func_31F4A0
    ctx->pc = 0x32019Cu;
    SET_GPR_U32(ctx, 31, 0x3201A4u);
    ctx->pc = 0x31F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4A0u, 0x32019Cu, 0x3201A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201A4u;
label_3201a4:
    // 0x3201a4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3201a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3201a8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3201a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3201ac: 0x24a51240  addiu       $a1, $a1, 0x1240
    ctx->pc = 0x3201acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
    // 0x3201b0: 0x24c60da0  addiu       $a2, $a2, 0xDA0
    ctx->pc = 0x3201b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x3201b4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x3201B4u;
    SET_GPR_U32(ctx, 31, 0x3201BCu);
    ctx->pc = 0x3201B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3201B4u;
    // 0x3201b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x3201B4u, 0x3201BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201BCu;
label_3201bc:
    // 0x3201bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3201bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3201c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3201c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3201c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3201c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3201c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3201C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3201CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201C8u;
        // 0x3201cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3201C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3201D0u;
}

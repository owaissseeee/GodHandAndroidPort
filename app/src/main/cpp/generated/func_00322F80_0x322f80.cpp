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

// Function: func_00322F80
// Address: 0x322f80 - 0x323000
void func_00322F80_0x322f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322F80_0x322f80");
#endif

    switch (ctx->pc) {
        case 0x322fb8u: goto label_322fb8;
        case 0x322fc8u: goto label_322fc8;
        default: break;
    }

    ctx->pc = 0x322f80u;

    // 0x322f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322f84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x322f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x322f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322f8c: 0x2451b838  addiu       $s1, $v0, -0x47C8
    ctx->pc = 0x322f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948920));
    // 0x322f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322f98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x322f98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB838u));
    // 0x322f9c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x322F9Cu;
    {
        const bool branch_taken_0x322f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F9Cu;
        // 0x322fa0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f9c) {
            ctx->pc = 0x322FE8u;
            goto label_322fe8;
        }
    }
    ctx->pc = 0x322FA4u;
    // 0x322fa4: 0x8c43b83c  lw          $v1, -0x47C4($v0)
    ctx->pc = 0x322fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948924)));
    // 0x322fa8: 0x4620010  bltzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x322FA8u;
    {
        const bool branch_taken_0x322fa8 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x322fa8) {
            ctx->pc = 0x322FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322FA8u;
            // 0x322fac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322FECu;
            goto label_322fec;
        }
    }
    ctx->pc = 0x322FB0u;
    // 0x322fb0: 0xc0c9140  jal         func_324500
    ctx->pc = 0x322FB0u;
    SET_GPR_U32(ctx, 31, 0x322FB8u);
    ctx->pc = 0x322FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FB0u;
    // 0x322fb4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324500u, 0x322FB0u, 0x322FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FB8u;
label_322fb8:
    // 0x322fb8: 0x50500004  beql        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322FB8u;
    {
        const bool branch_taken_0x322fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x322fb8) {
            ctx->pc = 0x322FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322FB8u;
            // 0x322fbc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322FCCu;
            goto label_322fcc;
        }
    }
    ctx->pc = 0x322FC0u;
    // 0x322fc0: 0xc0c8fc6  jal         func_323F18
    ctx->pc = 0x322FC0u;
    SET_GPR_U32(ctx, 31, 0x322FC8u);
    ctx->pc = 0x322FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FC0u;
    // 0x322fc4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F18u, 0x322FC0u, 0x322FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FC8u;
label_322fc8:
    // 0x322fc8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x322fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_322fcc:
    // 0x322fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322fd0: 0xac50b840  sw          $s0, -0x47C0($v0)
    ctx->pc = 0x322fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948928), GPR_U32(ctx, 16));
    // 0x322fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322fdc: 0x80c8bc6  j           func_322F18
    ctx->pc = 0x322FDCu;
    ctx->pc = 0x322FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FDCu;
    // 0x322fe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F18u, 0x322FDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x322FE4u;
    // 0x322fe4: 0x0  nop
    ctx->pc = 0x322fe4u;
    // NOP
label_322fe8:
    // 0x322fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322fec:
    // 0x322fec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x322FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FF4u;
        // 0x322ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322FFCu;
    // 0x322ffc: 0x0  nop
    ctx->pc = 0x322ffcu;
    // NOP
    ctx->pc = 0x323000u;
}

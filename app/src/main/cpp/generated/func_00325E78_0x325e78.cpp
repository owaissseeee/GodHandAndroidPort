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

// Function: func_00325E78
// Address: 0x325e78 - 0x325ef8
void func_00325E78_0x325e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325E78_0x325e78");
#endif

    switch (ctx->pc) {
        case 0x325eb0u: goto label_325eb0;
        case 0x325ed4u: goto label_325ed4;
        default: break;
    }

    ctx->pc = 0x325e78u;

    // 0x325e78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x325e7c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325e80: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x325e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x325e84: 0x245180fc  addiu       $s1, $v0, -0x7F04
    ctx->pc = 0x325e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934780));
    // 0x325e88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x325e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C80FCu));
    // 0x325e8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x325e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325e90: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x325e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x325e94: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x325E94u;
    {
        const bool branch_taken_0x325e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x325E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E94u;
        // 0x325e98: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e94) {
            ctx->pc = 0x325EE0u;
            goto label_325ee0;
        }
    }
    ctx->pc = 0x325E9Cu;
    // 0x325e9c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325ea0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x325ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ea4: 0x24508148  addiu       $s0, $v0, -0x7EB8
    ctx->pc = 0x325ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934856));
    // 0x325ea8: 0xc0ebee8  jal         func_3AFBA0
    ctx->pc = 0x325EA8u;
    SET_GPR_U32(ctx, 31, 0x325EB0u);
    ctx->pc = 0x325EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325EA8u;
    // 0x325eac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBA0u, 0x325EA8u, 0x325EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EB0u;
label_325eb0:
    // 0x325eb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x325eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325eb4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x325eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325eb8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325EB8u;
    {
        const bool branch_taken_0x325eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x325EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325EB8u;
        // 0x325ebc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325eb8) {
            ctx->pc = 0x325EC8u;
            goto label_325ec8;
        }
    }
    ctx->pc = 0x325EC0u;
    // 0x325ec0: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x325EC0u;
    {
        const bool branch_taken_0x325ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x325ec0) {
            ctx->pc = 0x325EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325EC0u;
            // 0x325ec4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325EE4u;
            goto label_325ee4;
        }
    }
    ctx->pc = 0x325EC8u;
label_325ec8:
    // 0x325ec8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x325ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325ecc: 0xc0ebef4  jal         func_3AFBD0
    ctx->pc = 0x325ECCu;
    SET_GPR_U32(ctx, 31, 0x325ED4u);
    ctx->pc = 0x3AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBD0u, 0x325ECCu, 0x325ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325ED4u;
label_325ed4:
    // 0x325ed4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x325ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x325ed8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x325ED8u;
    {
        const bool branch_taken_0x325ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x325ed8) {
            ctx->pc = 0x325EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325ED8u;
            // 0x325edc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325EE0u;
            goto label_325ee0;
        }
    }
    ctx->pc = 0x325EE0u;
label_325ee0:
    // 0x325ee0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x325ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_325ee4:
    // 0x325ee4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x325ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325ee8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x325ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325eec: 0x3e00008  jr          $ra
    ctx->pc = 0x325EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325EECu;
        // 0x325ef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325EF4u;
    // 0x325ef4: 0x0  nop
    ctx->pc = 0x325ef4u;
    // NOP
    ctx->pc = 0x325ef8u;
}

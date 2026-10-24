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

// Function: GetCInstance_193BD0
// Address: 0x193bd0 - 0x193c20
void GetCInstance_193BD0_0x193bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCInstance_193BD0_0x193bd0");
#endif

    switch (ctx->pc) {
        case 0x193bf4u: goto label_193bf4;
        case 0x193c0cu: goto label_193c0c;
        default: break;
    }

    ctx->pc = 0x193bd0u;

    // 0x193bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193bd4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x193bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x193bd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193bdc: 0x8c625c98  lw          $v0, 0x5C98($v1)
    ctx->pc = 0x193bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785C98u));
    // 0x193be0: 0x24705c98  addiu       $s0, $v1, 0x5C98
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23704));
    // 0x193be4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x193BE4u;
    {
        const bool branch_taken_0x193be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BE4u;
        // 0x193be8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193be4) {
            ctx->pc = 0x193C0Cu;
            goto label_193c0c;
        }
    }
    ctx->pc = 0x193BECu;
    // 0x193bec: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x193BECu;
    SET_GPR_U32(ctx, 31, 0x193BF4u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x193BECu, 0x193BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193BF4u;
label_193bf4:
    // 0x193bf4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x193bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x193bf8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x193bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x193bfc: 0x24a54a30  addiu       $a1, $a1, 0x4A30
    ctx->pc = 0x193bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18992));
    // 0x193c00: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x193c04: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x193C04u;
    SET_GPR_U32(ctx, 31, 0x193C0Cu);
    ctx->pc = 0x193C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C04u;
    // 0x193c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x193C04u, 0x193C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C0Cu;
label_193c0c:
    // 0x193c0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x193c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x193c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193c18: 0x3e00008  jr          $ra
    ctx->pc = 0x193C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C18u;
        // 0x193c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193C20u;
}

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

// Function: func_00164E88
// Address: 0x164e88 - 0x164ed8
void func_00164E88_0x164e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00164E88_0x164e88");
#endif

    switch (ctx->pc) {
        case 0x164eacu: goto label_164eac;
        case 0x164ec4u: goto label_164ec4;
        default: break;
    }

    ctx->pc = 0x164e88u;

    // 0x164e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164e8c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x164e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x164e90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x164e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x164e94: 0x8c625718  lw          $v0, 0x5718($v1)
    ctx->pc = 0x164e94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785718u));
    // 0x164e98: 0x24705718  addiu       $s0, $v1, 0x5718
    ctx->pc = 0x164e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22296));
    // 0x164e9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164E9Cu;
    {
        const bool branch_taken_0x164e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E9Cu;
        // 0x164ea0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e9c) {
            ctx->pc = 0x164EC4u;
            goto label_164ec4;
        }
    }
    ctx->pc = 0x164EA4u;
    // 0x164ea4: 0xc05858a  jal         func_161628
    ctx->pc = 0x164EA4u;
    SET_GPR_U32(ctx, 31, 0x164EACu);
    ctx->pc = 0x161628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161628u, 0x164EA4u, 0x164EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164EACu;
label_164eac:
    // 0x164eac: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x164eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x164eb0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x164eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x164eb4: 0x24a5f620  addiu       $a1, $a1, -0x9E0
    ctx->pc = 0x164eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964768));
    // 0x164eb8: 0x24c60d38  addiu       $a2, $a2, 0xD38
    ctx->pc = 0x164eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x164ebc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x164EBCu;
    SET_GPR_U32(ctx, 31, 0x164EC4u);
    ctx->pc = 0x164EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164EBCu;
    // 0x164ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x164EBCu, 0x164EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164EC4u;
label_164ec4:
    // 0x164ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x164ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164ecc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x164eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x164ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ED0u;
        // 0x164ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164ED8u;
}

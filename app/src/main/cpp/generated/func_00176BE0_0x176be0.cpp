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

// Function: func_00176BE0
// Address: 0x176be0 - 0x176c30
void func_00176BE0_0x176be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00176BE0_0x176be0");
#endif

    switch (ctx->pc) {
        case 0x176c04u: goto label_176c04;
        case 0x176c1cu: goto label_176c1c;
        default: break;
    }

    ctx->pc = 0x176be0u;

    // 0x176be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176be4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x176be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x176be8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x176be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x176bec: 0x8c6258d8  lw          $v0, 0x58D8($v1)
    ctx->pc = 0x176becu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7858D8u));
    // 0x176bf0: 0x247058d8  addiu       $s0, $v1, 0x58D8
    ctx->pc = 0x176bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22744));
    // 0x176bf4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x176BF4u;
    {
        const bool branch_taken_0x176bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BF4u;
        // 0x176bf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bf4) {
            ctx->pc = 0x176C1Cu;
            goto label_176c1c;
        }
    }
    ctx->pc = 0x176BFCu;
    // 0x176bfc: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x176BFCu;
    SET_GPR_U32(ctx, 31, 0x176C04u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x176BFCu, 0x176C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C04u;
label_176c04:
    // 0x176c04: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x176c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x176c08: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x176c0c: 0x24a51288  addiu       $a1, $a1, 0x1288
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4744));
    // 0x176c10: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x176c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x176c14: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x176C14u;
    SET_GPR_U32(ctx, 31, 0x176C1Cu);
    ctx->pc = 0x176C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C14u;
    // 0x176c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x176C14u, 0x176C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C1Cu;
label_176c1c:
    // 0x176c1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x176c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176c24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x176c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176c28: 0x3e00008  jr          $ra
    ctx->pc = 0x176C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C28u;
        // 0x176c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176C30u;
}

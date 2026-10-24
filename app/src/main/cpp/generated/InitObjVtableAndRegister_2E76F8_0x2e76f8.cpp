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

// Function: InitObjVtableAndRegister_2E76F8
// Address: 0x2e76f8 - 0x2e7750
void InitObjVtableAndRegister_2E76F8_0x2e76f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableAndRegister_2E76F8_0x2e76f8");
#endif

    switch (ctx->pc) {
        case 0x2e7730u: goto label_2e7730;
        case 0x2e773cu: goto label_2e773c;
        default: break;
    }

    ctx->pc = 0x2e76f8u;

    // 0x2e76f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e76f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e76fc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2e76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2e7700: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e7700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e7704: 0x2442e640  addiu       $v0, $v0, -0x19C0
    ctx->pc = 0x2e7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x2e7708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e770c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e770cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7714: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e7714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7718: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e7718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e771c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2e771cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2e7720: 0x8e0602b4  lw          $a2, 0x2B4($s0)
    ctx->pc = 0x2e7720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2e7724: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x2e7724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x2e7728: 0xc0b6456  jal         func_2D9158
    ctx->pc = 0x2E7728u;
    SET_GPR_U32(ctx, 31, 0x2E7730u);
    ctx->pc = 0x2E772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7728u;
    // 0x2e772c: 0x960502b2  lhu         $a1, 0x2B2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 690)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9158u, 0x2E7728u, 0x2E7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7730u;
label_2e7730:
    // 0x2e7730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7734: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2E7734u;
    SET_GPR_U32(ctx, 31, 0x2E773Cu);
    ctx->pc = 0x2E7738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7734u;
    // 0x2e7738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2E7734u, 0x2E773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E773Cu;
label_2e773c:
    // 0x2e773c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e773cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7748: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7748u;
        // 0x2e774c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7750u;
}

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

// Function: cEmManage_setBigHitEff
// Address: 0x292e80 - 0x292ef0
void cEmManage_setBigHitEff_0x292e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_setBigHitEff_0x292e80");
#endif

    switch (ctx->pc) {
        case 0x292ea8u: goto label_292ea8;
        case 0x292ed0u: goto label_292ed0;
        case 0x292edcu: goto label_292edc;
        default: break;
    }

    ctx->pc = 0x292e80u;

    // 0x292e80: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x292e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x292e84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292e88: 0x8c627a30  lw          $v0, 0x7A30($v1)
    ctx->pc = 0x292e88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A30u));
    // 0x292e8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x292e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x292e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292e94: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x292e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x292e98: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x292E98u;
    {
        const bool branch_taken_0x292e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E98u;
        // 0x292e9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e98) {
            ctx->pc = 0x292EDCu;
            goto label_292edc;
        }
    }
    ctx->pc = 0x292EA0u;
    // 0x292ea0: 0xc0a4bc2  jal         func_292F08
    ctx->pc = 0x292EA0u;
    SET_GPR_U32(ctx, 31, 0x292EA8u);
    ctx->pc = 0x292F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F08u, 0x292EA0u, 0x292EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EA8u;
label_292ea8:
    // 0x292ea8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x292EA8u;
    {
        const bool branch_taken_0x292ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ea8) {
            ctx->pc = 0x292EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292EA8u;
            // 0x292eac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292EE0u;
            goto label_292ee0;
        }
    }
    ctx->pc = 0x292EB0u;
    // 0x292eb0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x292eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x292eb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x292eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292eb8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x292eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x292ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x292ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ec4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x292ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292ec8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x292EC8u;
    SET_GPR_U32(ctx, 31, 0x292ED0u);
    ctx->pc = 0x292ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292EC8u;
    // 0x292ecc: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x292EC8u, 0x292ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292ED0u;
label_292ed0:
    // 0x292ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ed4: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x292ED4u;
    SET_GPR_U32(ctx, 31, 0x292EDCu);
    ctx->pc = 0x292ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292ED4u;
    // 0x292ed8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x292ED4u, 0x292EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EDCu;
label_292edc:
    // 0x292edc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x292edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_292ee0:
    // 0x292ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x292EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EE4u;
        // 0x292ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292EECu;
    // 0x292eec: 0x0  nop
    ctx->pc = 0x292eecu;
    // NOP
    ctx->pc = 0x292ef0u;
}

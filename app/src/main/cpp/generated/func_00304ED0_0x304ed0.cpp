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

// Function: func_00304ED0
// Address: 0x304ed0 - 0x304f58
void func_00304ED0_0x304ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304ED0_0x304ed0");
#endif

    switch (ctx->pc) {
        case 0x304f10u: goto label_304f10;
        case 0x304f28u: goto label_304f28;
        case 0x304f3cu: goto label_304f3c;
        default: break;
    }

    ctx->pc = 0x304ed0u;

    // 0x304ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x304ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x304ed4: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x304ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x304ed8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x304ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x304edc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x304edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x304ee0: 0x245165b8  addiu       $s1, $v0, 0x65B8
    ctx->pc = 0x304ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26040));
    // 0x304ee4: 0x8c4365b8  lw          $v1, 0x65B8($v0)
    ctx->pc = 0x304ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7865B8u));
    // 0x304ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x304ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304eec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x304eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x304ef0: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x304EF0u;
    {
        const bool branch_taken_0x304ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EF0u;
        // 0x304ef4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ef0) {
            ctx->pc = 0x304F3Cu;
            goto label_304f3c;
        }
    }
    ctx->pc = 0x304EF8u;
    // 0x304ef8: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x304ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x304efc: 0x8c6265a8  lw          $v0, 0x65A8($v1)
    ctx->pc = 0x304efcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7865A8u));
    // 0x304f00: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x304F00u;
    {
        const bool branch_taken_0x304f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F00u;
        // 0x304f04: 0x247065a8  addiu       $s0, $v1, 0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f00) {
            ctx->pc = 0x304F28u;
            goto label_304f28;
        }
    }
    ctx->pc = 0x304F08u;
    // 0x304f08: 0xc0ad94a  jal         func_2B6528
    ctx->pc = 0x304F08u;
    SET_GPR_U32(ctx, 31, 0x304F10u);
    ctx->pc = 0x2B6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6528u, 0x304F08u, 0x304F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F10u;
label_304f10:
    // 0x304f10: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x304f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x304f14: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x304f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x304f18: 0x24a5fdb8  addiu       $a1, $a1, -0x248
    ctx->pc = 0x304f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966712));
    // 0x304f1c: 0x24c60d58  addiu       $a2, $a2, 0xD58
    ctx->pc = 0x304f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3416));
    // 0x304f20: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x304F20u;
    SET_GPR_U32(ctx, 31, 0x304F28u);
    ctx->pc = 0x304F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F20u;
    // 0x304f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x304F20u, 0x304F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F28u;
label_304f28:
    // 0x304f28: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x304f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x304f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f30: 0x24a5fdc8  addiu       $a1, $a1, -0x238
    ctx->pc = 0x304f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966728));
    // 0x304f34: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x304F34u;
    SET_GPR_U32(ctx, 31, 0x304F3Cu);
    ctx->pc = 0x304F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F34u;
    // 0x304f38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x304F34u, 0x304F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F3Cu;
label_304f3c:
    // 0x304f3c: 0x264265b8  addiu       $v0, $s2, 0x65B8
    ctx->pc = 0x304f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26040));
    // 0x304f40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x304f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304f44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x304f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304f48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x304f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304f50: 0x3e00008  jr          $ra
    ctx->pc = 0x304F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F50u;
        // 0x304f54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304F58u;
}

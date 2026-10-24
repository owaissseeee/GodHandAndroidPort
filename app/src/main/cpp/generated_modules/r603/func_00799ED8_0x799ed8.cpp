#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: func_00799ED8
// Address: 0x799ed8 - 0x799f48
void func_00799ED8_0x799ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799ED8_0x799ed8");
#endif

    switch (ctx->pc) {
        case 0x799f00u: goto label_799f00;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f14u: goto label_799f14;
        case 0x799f28u: goto label_799f28;
        case 0x799f34u: goto label_799f34;
        default: break;
    }

    ctx->pc = 0x799ed8u;

    // 0x799ed8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799edc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799ee0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799eec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x799eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799ef0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799ef4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799EF4u;
    {
        const bool branch_taken_0x799ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ef4) {
            ctx->pc = 0x799F0Cu;
            goto label_799f0c;
        }
    }
    ctx->pc = 0x799EFCu;
    // 0x799efc: 0x0  nop
    ctx->pc = 0x799efcu;
    // NOP
label_799f00:
    // 0x799f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f04: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F04u;
    SET_GPR_U32(ctx, 31, 0x799F0Cu);
    ctx->pc = 0x799F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F04u;
    // 0x799f08: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F04u, 0x799F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F0Cu;
label_799f0c:
    // 0x799f0c: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x799F0Cu;
    SET_GPR_U32(ctx, 31, 0x799F14u);
    ctx->pc = 0x799F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F0Cu;
    // 0x799f10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x799F0Cu, 0x799F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799F14u;
    {
        const bool branch_taken_0x799f14 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x799F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F14u;
        // 0x799f18: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f14) {
            ctx->pc = 0x799F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f00;
        }
    }
    ctx->pc = 0x799F1Cu;
    // 0x799f1c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x799f20: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x799F20u;
    SET_GPR_U32(ctx, 31, 0x799F28u);
    ctx->pc = 0x799F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F20u;
    // 0x799f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x799F20u, 0x799F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F28u;
label_799f28:
    // 0x799f28: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799f2c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799F2Cu;
    SET_GPR_U32(ctx, 31, 0x799F34u);
    ctx->pc = 0x799F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F2Cu;
    // 0x799f30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799f38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799f40: 0x3e00008  jr          $ra
    ctx->pc = 0x799F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F40u;
        // 0x799f44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F48u;
}
} // namespace gh_r603

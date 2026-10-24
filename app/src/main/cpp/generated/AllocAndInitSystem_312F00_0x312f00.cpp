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

// Function: AllocAndInitSystem_312F00
// Address: 0x312f00 - 0x312f70
void AllocAndInitSystem_312F00_0x312f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocAndInitSystem_312F00_0x312f00");
#endif

    switch (ctx->pc) {
        case 0x312f34u: goto label_312f34;
        case 0x312f4cu: goto label_312f4c;
        case 0x312f54u: goto label_312f54;
        default: break;
    }

    ctx->pc = 0x312f00u;

    // 0x312f00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x312f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x312f04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x312f08: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x312f08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x312f0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x312f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x312f10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x312f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x312f14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x312f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x312f18: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x312F18u;
    {
        const bool branch_taken_0x312f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F18u;
        // 0x312f1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f18) {
            ctx->pc = 0x312F5Cu;
            goto label_312f5c;
        }
    }
    ctx->pc = 0x312F20u;
    // 0x312f20: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x312f20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x312f24: 0x24041690  addiu       $a0, $zero, 0x1690
    ctx->pc = 0x312f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5776));
    // 0x312f28: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x312f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x312f2c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x312F2Cu;
    SET_GPR_U32(ctx, 31, 0x312F34u);
    ctx->pc = 0x312F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312F2Cu;
    // 0x312f30: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x312F2Cu, 0x312F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312F34u;
label_312f34:
    // 0x312f34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f38: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x312F38u;
    {
        const bool branch_taken_0x312f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F38u;
        // 0x312f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f38) {
            ctx->pc = 0x312F5Cu;
            goto label_312f5c;
        }
    }
    ctx->pc = 0x312F40u;
    // 0x312f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f44: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x312F44u;
    SET_GPR_U32(ctx, 31, 0x312F4Cu);
    ctx->pc = 0x312F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312F44u;
    // 0x312f48: 0x24061690  addiu       $a2, $zero, 0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x312F44u, 0x312F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312F4Cu;
label_312f4c:
    // 0x312f4c: 0xc041f90  jal         func_107E40
    ctx->pc = 0x312F4Cu;
    SET_GPR_U32(ctx, 31, 0x312F54u);
    ctx->pc = 0x312F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312F4Cu;
    // 0x312f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107E40u, 0x312F4Cu, 0x312F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312F54u;
label_312f54:
    // 0x312f54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x312F54u;
    {
        const bool branch_taken_0x312f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F54u;
        // 0x312f58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f54) {
            ctx->pc = 0x312F64u;
            goto label_312f64;
        }
    }
    ctx->pc = 0x312F5Cu;
label_312f5c:
    // 0x312f5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x312f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312f64:
    // 0x312f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312f68: 0x3e00008  jr          $ra
    ctx->pc = 0x312F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F68u;
        // 0x312f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312F70u;
}

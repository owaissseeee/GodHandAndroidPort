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

// Function: ForwardInit1ADB88_315F20
// Address: 0x315f20 - 0x315f90
void ForwardInit1ADB88_315F20_0x315f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1ADB88_315F20_0x315f20");
#endif

    switch (ctx->pc) {
        case 0x315f54u: goto label_315f54;
        case 0x315f6cu: goto label_315f6c;
        case 0x315f74u: goto label_315f74;
        default: break;
    }

    ctx->pc = 0x315f20u;

    // 0x315f20: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315f24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315f28: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315f28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315f2c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315f30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315f34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315f38: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315F38u;
    {
        const bool branch_taken_0x315f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F38u;
        // 0x315f3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f38) {
            ctx->pc = 0x315F7Cu;
            goto label_315f7c;
        }
    }
    ctx->pc = 0x315F40u;
    // 0x315f40: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315f44: 0x24040630  addiu       $a0, $zero, 0x630
    ctx->pc = 0x315f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    // 0x315f48: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315f4c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315F4Cu;
    SET_GPR_U32(ctx, 31, 0x315F54u);
    ctx->pc = 0x315F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F4Cu;
    // 0x315f50: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315F4Cu, 0x315F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F54u;
label_315f54:
    // 0x315f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f58: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315F58u;
    {
        const bool branch_taken_0x315f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F58u;
        // 0x315f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f58) {
            ctx->pc = 0x315F7Cu;
            goto label_315f7c;
        }
    }
    ctx->pc = 0x315F60u;
    // 0x315f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f64: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315F64u;
    SET_GPR_U32(ctx, 31, 0x315F6Cu);
    ctx->pc = 0x315F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F64u;
    // 0x315f68: 0x24060630  addiu       $a2, $zero, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315F64u, 0x315F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F6Cu;
label_315f6c:
    // 0x315f6c: 0xc06b6e2  jal         func_1ADB88
    ctx->pc = 0x315F6Cu;
    SET_GPR_U32(ctx, 31, 0x315F74u);
    ctx->pc = 0x315F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F6Cu;
    // 0x315f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB88u, 0x315F6Cu, 0x315F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F74u;
label_315f74:
    // 0x315f74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315F74u;
    {
        const bool branch_taken_0x315f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F74u;
        // 0x315f78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f74) {
            ctx->pc = 0x315F84u;
            goto label_315f84;
        }
    }
    ctx->pc = 0x315F7Cu;
label_315f7c:
    // 0x315f7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315f84:
    // 0x315f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315f88: 0x3e00008  jr          $ra
    ctx->pc = 0x315F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F88u;
        // 0x315f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315F90u;
}

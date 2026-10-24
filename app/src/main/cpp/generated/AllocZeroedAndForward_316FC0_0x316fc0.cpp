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

// Function: AllocZeroedAndForward_316FC0
// Address: 0x316fc0 - 0x317030
void AllocZeroedAndForward_316FC0_0x316fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316FC0_0x316fc0");
#endif

    switch (ctx->pc) {
        case 0x316ff4u: goto label_316ff4;
        case 0x31700cu: goto label_31700c;
        case 0x317014u: goto label_317014;
        default: break;
    }

    ctx->pc = 0x316fc0u;

    // 0x316fc0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316fc4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316fc8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316fcc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316fd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316fd4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316fd8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316FD8u;
    {
        const bool branch_taken_0x316fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FD8u;
        // 0x316fdc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316fd8) {
            ctx->pc = 0x31701Cu;
            goto label_31701c;
        }
    }
    ctx->pc = 0x316FE0u;
    // 0x316fe0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316fe4: 0x24040d40  addiu       $a0, $zero, 0xD40
    ctx->pc = 0x316fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3392));
    // 0x316fe8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316fec: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316FECu;
    SET_GPR_U32(ctx, 31, 0x316FF4u);
    ctx->pc = 0x316FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316FECu;
    // 0x316ff0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316FECu, 0x316FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FF4u;
label_316ff4:
    // 0x316ff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ff8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316FF8u;
    {
        const bool branch_taken_0x316ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FF8u;
        // 0x316ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ff8) {
            ctx->pc = 0x31701Cu;
            goto label_31701c;
        }
    }
    ctx->pc = 0x317000u;
    // 0x317000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317004: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317004u;
    SET_GPR_U32(ctx, 31, 0x31700Cu);
    ctx->pc = 0x317008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317004u;
    // 0x317008: 0x24060d40  addiu       $a2, $zero, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317004u, 0x31700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31700Cu;
label_31700c:
    // 0x31700c: 0xc05d56a  jal         func_1755A8
    ctx->pc = 0x31700Cu;
    SET_GPR_U32(ctx, 31, 0x317014u);
    ctx->pc = 0x317010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31700Cu;
    // 0x317010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1755A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1755A8u, 0x31700Cu, 0x317014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317014u;
label_317014:
    // 0x317014: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317014u;
    {
        const bool branch_taken_0x317014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317014u;
        // 0x317018: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317014) {
            ctx->pc = 0x317024u;
            goto label_317024;
        }
    }
    ctx->pc = 0x31701Cu;
label_31701c:
    // 0x31701c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31701cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317020: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317024:
    // 0x317024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317028: 0x3e00008  jr          $ra
    ctx->pc = 0x317028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317028u;
        // 0x31702c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317030u;
}

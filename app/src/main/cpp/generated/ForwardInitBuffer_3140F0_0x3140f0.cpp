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

// Function: ForwardInitBuffer_3140F0
// Address: 0x3140f0 - 0x314160
void ForwardInitBuffer_3140F0_0x3140f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3140F0_0x3140f0");
#endif

    switch (ctx->pc) {
        case 0x314124u: goto label_314124;
        case 0x31413cu: goto label_31413c;
        case 0x314144u: goto label_314144;
        default: break;
    }

    ctx->pc = 0x3140f0u;

    // 0x3140f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3140f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3140f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3140f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3140f8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3140f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3140fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3140fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314104: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314108: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314108u;
    {
        const bool branch_taken_0x314108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314108u;
        // 0x31410c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314108) {
            ctx->pc = 0x31414Cu;
            goto label_31414c;
        }
    }
    ctx->pc = 0x314110u;
    // 0x314110: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314114: 0x240408f0  addiu       $a0, $zero, 0x8F0
    ctx->pc = 0x314114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x314118: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31411c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31411Cu;
    SET_GPR_U32(ctx, 31, 0x314124u);
    ctx->pc = 0x314120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31411Cu;
    // 0x314120: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31411Cu, 0x314124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314124u;
label_314124:
    // 0x314124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314128: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314128u;
    {
        const bool branch_taken_0x314128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314128u;
        // 0x31412c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314128) {
            ctx->pc = 0x31414Cu;
            goto label_31414c;
        }
    }
    ctx->pc = 0x314130u;
    // 0x314130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314134: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314134u;
    SET_GPR_U32(ctx, 31, 0x31413Cu);
    ctx->pc = 0x314138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314134u;
    // 0x314138: 0x240608f0  addiu       $a2, $zero, 0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314134u, 0x31413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31413Cu;
label_31413c:
    // 0x31413c: 0xc063baa  jal         func_18EEA8
    ctx->pc = 0x31413Cu;
    SET_GPR_U32(ctx, 31, 0x314144u);
    ctx->pc = 0x314140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31413Cu;
    // 0x314140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EEA8u, 0x31413Cu, 0x314144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314144u;
label_314144:
    // 0x314144: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314144u;
    {
        const bool branch_taken_0x314144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314144u;
        // 0x314148: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314144) {
            ctx->pc = 0x314154u;
            goto label_314154;
        }
    }
    ctx->pc = 0x31414Cu;
label_31414c:
    // 0x31414c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31414cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314150: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314154:
    // 0x314154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314158: 0x3e00008  jr          $ra
    ctx->pc = 0x314158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314158u;
        // 0x31415c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314160u;
}

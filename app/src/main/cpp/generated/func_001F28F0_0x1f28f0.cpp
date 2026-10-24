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

// Function: func_001F28F0
// Address: 0x1f28f0 - 0x1f2990
void func_001F28F0_0x1f28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F28F0_0x1f28f0");
#endif

    switch (ctx->pc) {
        case 0x1f2910u: goto label_1f2910;
        case 0x1f291cu: goto label_1f291c;
        case 0x1f2924u: goto label_1f2924;
        case 0x1f2928u: goto label_1f2928;
        case 0x1f2934u: goto label_1f2934;
        case 0x1f2950u: goto label_1f2950;
        case 0x1f2958u: goto label_1f2958;
        case 0x1f2964u: goto label_1f2964;
        case 0x1f2978u: goto label_1f2978;
        default: break;
    }

    ctx->pc = 0x1f28f0u;

    // 0x1f28f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f28f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f28f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f28f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f28f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f28fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f2900: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f2900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f2904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2908: 0xc07cb58  jal         func_1F2D60
    ctx->pc = 0x1F2908u;
    SET_GPR_U32(ctx, 31, 0x1F2910u);
    ctx->pc = 0x1F290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2908u;
    // 0x1f290c: 0x24120011  addiu       $s2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2D60u, 0x1F2908u, 0x1F2910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2910u;
label_1f2910:
    // 0x1f2910: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1f2910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1f2914: 0xc07cc46  jal         func_1F3118
    ctx->pc = 0x1F2914u;
    SET_GPR_U32(ctx, 31, 0x1F291Cu);
    ctx->pc = 0x1F2918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2914u;
    // 0x1f2918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3118u, 0x1F2914u, 0x1F291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F291Cu;
label_1f291c:
    // 0x1f291c: 0xc07cca8  jal         func_1F32A0
    ctx->pc = 0x1F291Cu;
    SET_GPR_U32(ctx, 31, 0x1F2924u);
    ctx->pc = 0x1F2920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F291Cu;
    // 0x1f2920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F32A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F32A0u, 0x1F291Cu, 0x1F2924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2924u;
label_1f2924:
    // 0x1f2924: 0x0  nop
    ctx->pc = 0x1f2924u;
    // NOP
label_1f2928:
    // 0x1f2928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f292c: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1F292Cu;
    SET_GPR_U32(ctx, 31, 0x1F2934u);
    ctx->pc = 0x1F2930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F292Cu;
    // 0x1f2930: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1F292Cu, 0x1F2934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2934u;
label_1f2934:
    // 0x1f2934: 0x0  nop
    ctx->pc = 0x1f2934u;
    // NOP
    // 0x1f2938: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2938u;
    {
        const bool branch_taken_0x1f2938 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1F293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2938u;
        // 0x1f293c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2938) {
            ctx->pc = 0x1F2928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2928;
        }
    }
    ctx->pc = 0x1F2940u;
    // 0x1f2940: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1f2940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f2944: 0x26300980  addiu       $s0, $s1, 0x980
    ctx->pc = 0x1f2944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2432));
    // 0x1f2948: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1F2948u;
    SET_GPR_U32(ctx, 31, 0x1F2950u);
    ctx->pc = 0x1F294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2948u;
    // 0x1f294c: 0x26320930  addiu       $s2, $s1, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1F2948u, 0x1F2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2950u;
label_1f2950:
    // 0x1f2950: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1f2950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2954: 0x0  nop
    ctx->pc = 0x1f2954u;
    // NOP
label_1f2958:
    // 0x1f2958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f295c: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1F295Cu;
    SET_GPR_U32(ctx, 31, 0x1F2964u);
    ctx->pc = 0x1F2960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F295Cu;
    // 0x1f2960: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1F295Cu, 0x1F2964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2964u;
label_1f2964:
    // 0x1f2964: 0x0  nop
    ctx->pc = 0x1f2964u;
    // NOP
    // 0x1f2968: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2968u;
    {
        const bool branch_taken_0x1f2968 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1F296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2968u;
        // 0x1f296c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2968) {
            ctx->pc = 0x1F2958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2958;
        }
    }
    ctx->pc = 0x1F2970u;
    // 0x1f2970: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1F2970u;
    SET_GPR_U32(ctx, 31, 0x1F2978u);
    ctx->pc = 0x1F2974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2970u;
    // 0x1f2974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1F2970u, 0x1F2978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2978u;
label_1f2978:
    // 0x1f2978: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f2978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f297c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f297cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2980: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f2980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2988: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2988u;
        // 0x1f298c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2990u;
}

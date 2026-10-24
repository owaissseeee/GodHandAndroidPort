#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: Initialize__7cMcPort
// Address: 0x7c30e8 - 0x7c31c8
void Initialize__7cMcPort_0x7c30e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7cMcPort_0x7c30e8");
#endif

    switch (ctx->pc) {
        case 0x7c3110u: goto label_7c3110;
        case 0x7c3118u: goto label_7c3118;
        case 0x7c3174u: goto label_7c3174;
        case 0x7c3194u: goto label_7c3194;
        case 0x7c31a8u: goto label_7c31a8;
        default: break;
    }

    ctx->pc = 0x7c30e8u;

    // 0x7c30e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7c30e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7c30ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7c30ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7c30f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7c30f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7c30f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7c30f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c30f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7c30f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7c30fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c30fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3100: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7c3100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7c3104: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c3104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c3108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c310c: 0x2413ff9b  addiu       $s3, $zero, -0x65
    ctx->pc = 0x7c310cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_7c3110:
    // 0x7c3110: 0xc1f34b8  jal         func_7CD2E0
    ctx->pc = 0x7C3110u;
    SET_GPR_U32(ctx, 31, 0x7C3118u);
    ctx->pc = 0x7CD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CD2E0u, 0x7C3110u, 0x7C3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3118u;
label_7c3118:
    // 0x7c3118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7c3118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c311c: 0x10930004  beq         $a0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C311Cu;
    {
        const bool branch_taken_0x7c311c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x7C3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C311Cu;
        // 0x7c3120: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c311c) {
            ctx->pc = 0x7C3130u;
            goto label_7c3130;
        }
    }
    ctx->pc = 0x7C3124u;
    // 0x7c3124: 0x2883ff9c  slti        $v1, $a0, -0x64
    ctx->pc = 0x7c3124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967196) ? 1 : 0);
    // 0x7c3128: 0x204100b  movn        $v0, $s0, $a0
    ctx->pc = 0x7c3128u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x7c312c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x7c312cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_7c3130:
    // 0x7c3130: 0x1200fff7  beqz        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7C3130u;
    {
        const bool branch_taken_0x7c3130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3130u;
        // 0x7c3134: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3130) {
            ctx->pc = 0x7C3110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c3110;
        }
    }
    ctx->pc = 0x7C3138u;
    // 0x7c3138: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x7c3138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x7c313c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x7c313cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x7c3140: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c3140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c3144: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x7c3144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x7c3148: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x7c3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c314c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x7c314cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x7c3150: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x7c3150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x7c3154: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x7c3154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x7c3158: 0x8c43056c  lw          $v1, 0x56C($v0)
    ctx->pc = 0x7c3158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x7c315c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C315Cu;
    {
        const bool branch_taken_0x7c315c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C315Cu;
        // 0x7c3160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c315c) {
            ctx->pc = 0x7C317Cu;
            goto label_7c317c;
        }
    }
    ctx->pc = 0x7C3164u;
    // 0x7c3164: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c3164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c3168: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x7c3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x7c316c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C316Cu;
    SET_GPR_U32(ctx, 31, 0x7C3174u);
    ctx->pc = 0x7C3170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C316Cu;
    // 0x7c3170: 0x24a50b10  addiu       $a1, $a1, 0xB10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C316Cu, 0x7C3174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3174u;
label_7c3174:
    // 0x7c3174: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C3174u;
    {
        const bool branch_taken_0x7c3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3174u;
        // 0x7c3178: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3174) {
            ctx->pc = 0x7C31ACu;
            goto label_7c31ac;
        }
    }
    ctx->pc = 0x7C317Cu;
label_7c317c:
    // 0x7c317c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C317Cu;
    {
        const bool branch_taken_0x7c317c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c317c) {
            ctx->pc = 0x7C3180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C317Cu;
            // 0x7c3180: 0x3c05007d  lui         $a1, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C319Cu;
            goto label_7c319c;
        }
    }
    ctx->pc = 0x7C3184u;
    // 0x7c3184: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c3184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c3188: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x7c3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x7c318c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C318Cu;
    SET_GPR_U32(ctx, 31, 0x7C3194u);
    ctx->pc = 0x7C3190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C318Cu;
    // 0x7c3190: 0x24a50b28  addiu       $a1, $a1, 0xB28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C318Cu, 0x7C3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3194u;
label_7c3194:
    // 0x7c3194: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3194u;
    {
        const bool branch_taken_0x7c3194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3194u;
        // 0x7c3198: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3194) {
            ctx->pc = 0x7C31ACu;
            goto label_7c31ac;
        }
    }
    ctx->pc = 0x7C319Cu;
label_7c319c:
    // 0x7c319c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x7c319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x7c31a0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C31A0u;
    SET_GPR_U32(ctx, 31, 0x7C31A8u);
    ctx->pc = 0x7C31A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C31A0u;
    // 0x7c31a4: 0x24a50b40  addiu       $a1, $a1, 0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C31A0u, 0x7C31A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C31A8u;
label_7c31a8:
    // 0x7c31a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7c31a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7c31ac:
    // 0x7c31ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7c31acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c31b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7c31b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c31b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7c31b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c31b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c31b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c31bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C31BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C31BCu;
        // 0x7c31c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C31BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C31C4u;
    // 0x7c31c4: 0x0  nop
    ctx->pc = 0x7c31c4u;
    // NOP
    ctx->pc = 0x7c31c8u;
}
} // namespace gh_mcport

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

// Function: func_001AEEA8
// Address: 0x1aeea8 - 0x1aef40
void func_001AEEA8_0x1aeea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AEEA8_0x1aeea8");
#endif

    switch (ctx->pc) {
        case 0x1aeed4u: goto label_1aeed4;
        case 0x1aef04u: goto label_1aef04;
        case 0x1aef30u: goto label_1aef30;
        default: break;
    }

    ctx->pc = 0x1aeea8u;

    // 0x1aeea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aeea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aeeac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aeeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeeb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aeeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aeeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aeeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aeeb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aeeb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeebc: 0xa6050986  sh          $a1, 0x986($s0)
    ctx->pc = 0x1aeebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2438), (uint16_t)GPR_U32(ctx, 5));
    // 0x1aeec0: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x1aeec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x1aeec4: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AEEC4u;
    {
        const bool branch_taken_0x1aeec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aeec4) {
            ctx->pc = 0x1AEEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEEC4u;
            // 0x1aeec8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEF34u;
            goto label_1aef34;
        }
    }
    ctx->pc = 0x1AEECCu;
    // 0x1aeecc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1AEECCu;
    SET_GPR_U32(ctx, 31, 0x1AEED4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1AEECCu, 0x1AEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEED4u;
label_1aeed4:
    // 0x1aeed4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aeed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aeed8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AEED8u;
    {
        const bool branch_taken_0x1aeed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEED8u;
        // 0x1aeedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeed8) {
            ctx->pc = 0x1AEF0Cu;
            goto label_1aef0c;
        }
    }
    ctx->pc = 0x1AEEE0u;
    // 0x1aeee0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1aeee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1aeee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aeee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aeee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aeee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeeec: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1aeeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1aeef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aeef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aeef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aeef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeefc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AEEFCu;
    SET_GPR_U32(ctx, 31, 0x1AEF04u);
    ctx->pc = 0x1AEF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEFCu;
    // 0x1aef00: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AEEFCu, 0x1AEF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF04u;
label_1aef04:
    // 0x1aef04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AEF04u;
    {
        const bool branch_taken_0x1aef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF04u;
        // 0x1aef08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef04) {
            ctx->pc = 0x1AEF34u;
            goto label_1aef34;
        }
    }
    ctx->pc = 0x1AEF0Cu;
label_1aef0c:
    // 0x1aef0c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1aef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1aef10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aef10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aef14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aef14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef18: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1aef18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1aef1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aef1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aef20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aef24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef28: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1AEF28u;
    SET_GPR_U32(ctx, 31, 0x1AEF30u);
    ctx->pc = 0x1AEF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF28u;
    // 0x1aef2c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AEF28u, 0x1AEF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF30u;
label_1aef30:
    // 0x1aef30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aef30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aef34:
    // 0x1aef34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aef34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aef38: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF38u;
        // 0x1aef3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEF40u;
}

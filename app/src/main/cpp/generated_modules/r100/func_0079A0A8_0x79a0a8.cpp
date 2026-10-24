#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079A0A8
// Address: 0x79a0a8 - 0x79a178
void func_0079A0A8_0x79a0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A0A8_0x79a0a8");
#endif

    switch (ctx->pc) {
        case 0x79a0d8u: goto label_79a0d8;
        case 0x79a128u: goto label_79a128;
        default: break;
    }

    ctx->pc = 0x79a0a8u;

    // 0x79a0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a0ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a0b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a0b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a0b8: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a0bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a0c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a0c8: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x79A0C8u;
    {
        const bool branch_taken_0x79a0c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C8u;
        // 0x79a0cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0c8) {
            ctx->pc = 0x79A154u;
            goto label_79a154;
        }
    }
    ctx->pc = 0x79A0D0u;
    // 0x79a0d0: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x79a0d4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79a0d8:
    // 0x79a0d8: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A0D8u;
    {
        const bool branch_taken_0x79a0d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0d8) {
            ctx->pc = 0x79A0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0D8u;
            // 0x79a0dc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A14Cu;
            goto label_79a14c;
        }
    }
    ctx->pc = 0x79A0E0u;
    // 0x79a0e0: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79a0e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79a0e4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a0e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A0E8u;
    {
        const bool branch_taken_0x79a0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0E8u;
        // 0x79a0ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0e8) {
            ctx->pc = 0x79A0F8u;
            goto label_79a0f8;
        }
    }
    ctx->pc = 0x79A0F0u;
    // 0x79a0f0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a0f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a0f8:
    // 0x79a0f8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79a0fc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79A0FCu;
    {
        const bool branch_taken_0x79a0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0FCu;
        // 0x79a100: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0fc) {
            ctx->pc = 0x79A148u;
            goto label_79a148;
        }
    }
    ctx->pc = 0x79A104u;
    // 0x79a104: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A104u;
    {
        const bool branch_taken_0x79a104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A104u;
        // 0x79a108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a104) {
            ctx->pc = 0x79A114u;
            goto label_79a114;
        }
    }
    ctx->pc = 0x79A10Cu;
    // 0x79a10c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a114:
    // 0x79a114: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79a118: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x79A118u;
    {
        const bool branch_taken_0x79a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a118) {
            ctx->pc = 0x79A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A118u;
            // 0x79a11c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A14Cu;
            goto label_79a14c;
        }
    }
    ctx->pc = 0x79A120u;
    // 0x79a120: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79A120u;
    SET_GPR_U32(ctx, 31, 0x79A128u);
    ctx->pc = 0x79A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A120u;
    // 0x79a124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79A120u, 0x79A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A128u;
label_79a128:
    // 0x79a128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a12c: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A12Cu;
    {
        const bool branch_taken_0x79a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x79a12c) {
            ctx->pc = 0x79A130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A12Cu;
            // 0x79a130: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A14Cu;
            goto label_79a14c;
        }
    }
    ctx->pc = 0x79A134u;
    // 0x79a134: 0x92040614  lbu         $a0, 0x614($s0)
    ctx->pc = 0x79a134u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1556)));
    // 0x79a138: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A138u;
    {
        const bool branch_taken_0x79a138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a138) {
            ctx->pc = 0x79A148u;
            goto label_79a148;
        }
    }
    ctx->pc = 0x79A140u;
    // 0x79a140: 0x8e62c500  lw          $v0, -0x3B00($s3)
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952192)));
    // 0x79a144: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x79a144u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
label_79a148:
    // 0x79a148: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79a14c:
    // 0x79a14c: 0x5620ffe2  bnel        $s1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79A14Cu;
    {
        const bool branch_taken_0x79a14c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a14c) {
            ctx->pc = 0x79A150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A14Cu;
            // 0x79a150: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A154u;
label_79a154:
    // 0x79a154: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79a154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a158: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a15c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a164: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a16c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A16Cu;
        // 0x79a170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A174u;
    // 0x79a174: 0x0  nop
    ctx->pc = 0x79a174u;
    // NOP
    ctx->pc = 0x79a178u;
}
} // namespace gh_r100

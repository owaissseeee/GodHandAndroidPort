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

// Function: cGameObj_isDownedEnemy
// Address: 0x124fd8 - 0x125048
void cGameObj_isDownedEnemy_0x124fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_isDownedEnemy_0x124fd8");
#endif

    switch (ctx->pc) {
        case 0x12502cu: goto label_12502c;
        default: break;
    }

    ctx->pc = 0x124fd8u;

    // 0x124fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124fdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x124fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124fe4: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x124fe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x124fe8: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x124fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x124fec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124FECu;
    {
        const bool branch_taken_0x124fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FECu;
        // 0x124ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fec) {
            ctx->pc = 0x124FFCu;
            goto label_124ffc;
        }
    }
    ctx->pc = 0x124FF4u;
    // 0x124ff4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x124ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x124ff8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x124ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124ffc:
    // 0x124ffc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x124ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x125000: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x125000u;
    {
        const bool branch_taken_0x125000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125000u;
        // 0x125004: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125000) {
            ctx->pc = 0x125034u;
            goto label_125034;
        }
    }
    ctx->pc = 0x125008u;
    // 0x125008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125008u;
    {
        const bool branch_taken_0x125008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125008u;
        // 0x12500c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125008) {
            ctx->pc = 0x125018u;
            goto label_125018;
        }
    }
    ctx->pc = 0x125010u;
    // 0x125010: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x125010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x125014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125018:
    // 0x125018: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x125018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x12501c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12501Cu;
    {
        const bool branch_taken_0x12501c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12501c) {
            ctx->pc = 0x125020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12501Cu;
            // 0x125020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125038u;
            goto label_125038;
        }
    }
    ctx->pc = 0x125024u;
    // 0x125024: 0xc09bc38  jal         func_26F0E0
    ctx->pc = 0x125024u;
    SET_GPR_U32(ctx, 31, 0x12502Cu);
    ctx->pc = 0x26F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F0E0u, 0x125024u, 0x12502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12502Cu;
label_12502c:
    // 0x12502c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12502Cu;
    {
        const bool branch_taken_0x12502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12502Cu;
        // 0x125030: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12502c) {
            ctx->pc = 0x125038u;
            goto label_125038;
        }
    }
    ctx->pc = 0x125034u;
label_125034:
    // 0x125034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125038:
    // 0x125038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12503c: 0x3e00008  jr          $ra
    ctx->pc = 0x12503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12503Cu;
        // 0x125040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125044u;
    // 0x125044: 0x0  nop
    ctx->pc = 0x125044u;
    // NOP
    ctx->pc = 0x125048u;
}

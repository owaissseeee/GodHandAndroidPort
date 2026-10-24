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

// Function: AllocZeroedAndInit_3130E0
// Address: 0x3130e0 - 0x313150
void AllocZeroedAndInit_3130E0_0x3130e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInit_3130E0_0x3130e0");
#endif

    switch (ctx->pc) {
        case 0x313114u: goto label_313114;
        case 0x31312cu: goto label_31312c;
        case 0x313134u: goto label_313134;
        default: break;
    }

    ctx->pc = 0x3130e0u;

    // 0x3130e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3130e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3130e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3130e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3130e8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3130e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3130ec: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3130ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3130f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3130f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3130f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3130f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3130f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3130F8u;
    {
        const bool branch_taken_0x3130f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3130FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130F8u;
        // 0x3130fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130f8) {
            ctx->pc = 0x31313Cu;
            goto label_31313c;
        }
    }
    ctx->pc = 0x313100u;
    // 0x313100: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313104: 0x24041980  addiu       $a0, $zero, 0x1980
    ctx->pc = 0x313104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6528));
    // 0x313108: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x313108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x31310c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31310Cu;
    SET_GPR_U32(ctx, 31, 0x313114u);
    ctx->pc = 0x313110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31310Cu;
    // 0x313110: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31310Cu, 0x313114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313114u;
label_313114:
    // 0x313114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313118: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313118u;
    {
        const bool branch_taken_0x313118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313118u;
        // 0x31311c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313118) {
            ctx->pc = 0x31313Cu;
            goto label_31313c;
        }
    }
    ctx->pc = 0x313120u;
    // 0x313120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313124: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313124u;
    SET_GPR_U32(ctx, 31, 0x31312Cu);
    ctx->pc = 0x313128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313124u;
    // 0x313128: 0x24061980  addiu       $a2, $zero, 0x1980 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313124u, 0x31312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31312Cu;
label_31312c:
    // 0x31312c: 0xc0807e8  jal         func_201FA0
    ctx->pc = 0x31312Cu;
    SET_GPR_U32(ctx, 31, 0x313134u);
    ctx->pc = 0x313130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31312Cu;
    // 0x313130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201FA0u, 0x31312Cu, 0x313134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313134u;
label_313134:
    // 0x313134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313134u;
    {
        const bool branch_taken_0x313134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313134u;
        // 0x313138: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313134) {
            ctx->pc = 0x313144u;
            goto label_313144;
        }
    }
    ctx->pc = 0x31313Cu;
label_31313c:
    // 0x31313c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31313cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313144:
    // 0x313144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313148: 0x3e00008  jr          $ra
    ctx->pc = 0x313148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313148u;
        // 0x31314c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313150u;
}

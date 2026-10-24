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

// Function: AllocInitObj183848_317CE0
// Address: 0x317ce0 - 0x317d50
void AllocInitObj183848_317CE0_0x317ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj183848_317CE0_0x317ce0");
#endif

    switch (ctx->pc) {
        case 0x317d14u: goto label_317d14;
        case 0x317d2cu: goto label_317d2c;
        case 0x317d34u: goto label_317d34;
        default: break;
    }

    ctx->pc = 0x317ce0u;

    // 0x317ce0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317ce4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317ce8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x317cec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x317cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317cf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317cf4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317cf8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317CF8u;
    {
        const bool branch_taken_0x317cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CF8u;
        // 0x317cfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317cf8) {
            ctx->pc = 0x317D3Cu;
            goto label_317d3c;
        }
    }
    ctx->pc = 0x317D00u;
    // 0x317d00: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317d00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317d04: 0x24041cc0  addiu       $a0, $zero, 0x1CC0
    ctx->pc = 0x317d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7360));
    // 0x317d08: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x317d0c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x317D0Cu;
    SET_GPR_U32(ctx, 31, 0x317D14u);
    ctx->pc = 0x317D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317D0Cu;
    // 0x317d10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x317D0Cu, 0x317D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D14u;
label_317d14:
    // 0x317d14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317d18: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317D18u;
    {
        const bool branch_taken_0x317d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D18u;
        // 0x317d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d18) {
            ctx->pc = 0x317D3Cu;
            goto label_317d3c;
        }
    }
    ctx->pc = 0x317D20u;
    // 0x317d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317d24: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317D24u;
    SET_GPR_U32(ctx, 31, 0x317D2Cu);
    ctx->pc = 0x317D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317D24u;
    // 0x317d28: 0x24061cc0  addiu       $a2, $zero, 0x1CC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317D24u, 0x317D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D2Cu;
label_317d2c:
    // 0x317d2c: 0xc060e12  jal         func_183848
    ctx->pc = 0x317D2Cu;
    SET_GPR_U32(ctx, 31, 0x317D34u);
    ctx->pc = 0x317D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317D2Cu;
    // 0x317d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183848u, 0x317D2Cu, 0x317D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317D34u;
label_317d34:
    // 0x317d34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317D34u;
    {
        const bool branch_taken_0x317d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D34u;
        // 0x317d38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d34) {
            ctx->pc = 0x317D44u;
            goto label_317d44;
        }
    }
    ctx->pc = 0x317D3Cu;
label_317d3c:
    // 0x317d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317d40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317d44:
    // 0x317d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317d48: 0x3e00008  jr          $ra
    ctx->pc = 0x317D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D48u;
        // 0x317d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317D50u;
}

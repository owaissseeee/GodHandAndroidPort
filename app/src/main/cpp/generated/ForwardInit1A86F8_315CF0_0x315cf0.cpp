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

// Function: ForwardInit1A86F8_315CF0
// Address: 0x315cf0 - 0x315d60
void ForwardInit1A86F8_315CF0_0x315cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A86F8_315CF0_0x315cf0");
#endif

    switch (ctx->pc) {
        case 0x315d24u: goto label_315d24;
        case 0x315d3cu: goto label_315d3c;
        case 0x315d44u: goto label_315d44;
        default: break;
    }

    ctx->pc = 0x315cf0u;

    // 0x315cf0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315cf4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315cf8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315cfc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315d00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315d04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315d08: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315D08u;
    {
        const bool branch_taken_0x315d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D08u;
        // 0x315d0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d08) {
            ctx->pc = 0x315D4Cu;
            goto label_315d4c;
        }
    }
    ctx->pc = 0x315D10u;
    // 0x315d10: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315d14: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x315d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x315d18: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315d1c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315D1Cu;
    SET_GPR_U32(ctx, 31, 0x315D24u);
    ctx->pc = 0x315D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315D1Cu;
    // 0x315d20: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315D1Cu, 0x315D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315D24u;
label_315d24:
    // 0x315d24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315d28: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315D28u;
    {
        const bool branch_taken_0x315d28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D28u;
        // 0x315d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d28) {
            ctx->pc = 0x315D4Cu;
            goto label_315d4c;
        }
    }
    ctx->pc = 0x315D30u;
    // 0x315d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315d34: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315D34u;
    SET_GPR_U32(ctx, 31, 0x315D3Cu);
    ctx->pc = 0x315D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315D34u;
    // 0x315d38: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315D34u, 0x315D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315D3Cu;
label_315d3c:
    // 0x315d3c: 0xc06a1be  jal         func_1A86F8
    ctx->pc = 0x315D3Cu;
    SET_GPR_U32(ctx, 31, 0x315D44u);
    ctx->pc = 0x315D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315D3Cu;
    // 0x315d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86F8u, 0x315D3Cu, 0x315D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315D44u;
label_315d44:
    // 0x315d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315D44u;
    {
        const bool branch_taken_0x315d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D44u;
        // 0x315d48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d44) {
            ctx->pc = 0x315D54u;
            goto label_315d54;
        }
    }
    ctx->pc = 0x315D4Cu;
label_315d4c:
    // 0x315d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315d50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315d54:
    // 0x315d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315d58: 0x3e00008  jr          $ra
    ctx->pc = 0x315D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D58u;
        // 0x315d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315D60u;
}

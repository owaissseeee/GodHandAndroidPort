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

// Function: ForwardInit1A42E8_3159E0
// Address: 0x3159e0 - 0x315a50
void ForwardInit1A42E8_3159E0_0x3159e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A42E8_3159E0_0x3159e0");
#endif

    switch (ctx->pc) {
        case 0x315a14u: goto label_315a14;
        case 0x315a2cu: goto label_315a2c;
        case 0x315a34u: goto label_315a34;
        default: break;
    }

    ctx->pc = 0x3159e0u;

    // 0x3159e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3159e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3159e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3159e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3159e8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3159e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3159ec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3159ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3159f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3159f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3159f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3159f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3159f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3159F8u;
    {
        const bool branch_taken_0x3159f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3159FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159F8u;
        // 0x3159fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159f8) {
            ctx->pc = 0x315A3Cu;
            goto label_315a3c;
        }
    }
    ctx->pc = 0x315A00u;
    // 0x315a00: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315a00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315a04: 0x240407a0  addiu       $a0, $zero, 0x7A0
    ctx->pc = 0x315a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    // 0x315a08: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315a0c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315A0Cu;
    SET_GPR_U32(ctx, 31, 0x315A14u);
    ctx->pc = 0x315A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A0Cu;
    // 0x315a10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315A0Cu, 0x315A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A14u;
label_315a14:
    // 0x315a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a18: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315A18u;
    {
        const bool branch_taken_0x315a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A18u;
        // 0x315a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a18) {
            ctx->pc = 0x315A3Cu;
            goto label_315a3c;
        }
    }
    ctx->pc = 0x315A20u;
    // 0x315a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a24: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315A24u;
    SET_GPR_U32(ctx, 31, 0x315A2Cu);
    ctx->pc = 0x315A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A24u;
    // 0x315a28: 0x240607a0  addiu       $a2, $zero, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315A24u, 0x315A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A2Cu;
label_315a2c:
    // 0x315a2c: 0xc0690ba  jal         func_1A42E8
    ctx->pc = 0x315A2Cu;
    SET_GPR_U32(ctx, 31, 0x315A34u);
    ctx->pc = 0x315A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A2Cu;
    // 0x315a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A42E8u, 0x315A2Cu, 0x315A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A34u;
label_315a34:
    // 0x315a34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315A34u;
    {
        const bool branch_taken_0x315a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A34u;
        // 0x315a38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a34) {
            ctx->pc = 0x315A44u;
            goto label_315a44;
        }
    }
    ctx->pc = 0x315A3Cu;
label_315a3c:
    // 0x315a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315a44:
    // 0x315a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315a48: 0x3e00008  jr          $ra
    ctx->pc = 0x315A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A48u;
        // 0x315a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315A50u;
}

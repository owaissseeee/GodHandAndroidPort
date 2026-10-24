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

// Function: func_002BEB00
// Address: 0x2beb00 - 0x2beb80
void func_002BEB00_0x2beb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BEB00_0x2beb00");
#endif

    switch (ctx->pc) {
        case 0x2beb20u: goto label_2beb20;
        default: break;
    }

    ctx->pc = 0x2beb00u;

    // 0x2beb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2beb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2beb04: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2beb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2beb08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2beb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2beb0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2beb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2beb10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2beb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2beb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2beb18: 0xc0afaaa  jal         func_2BEAA8
    ctx->pc = 0x2BEB18u;
    SET_GPR_U32(ctx, 31, 0x2BEB20u);
    ctx->pc = 0x2BEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB18u;
    // 0x2beb1c: 0x30d100ff  andi        $s1, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEAA8u, 0x2BEB18u, 0x2BEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB20u;
label_2beb20:
    // 0x2beb20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2beb20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb24: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BEB24u;
    {
        const bool branch_taken_0x2beb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB24u;
        // 0x2beb28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb24) {
            ctx->pc = 0x2BEB58u;
            goto label_2beb58;
        }
    }
    ctx->pc = 0x2BEB2Cu;
    // 0x2beb2c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2beb2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2beb30: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2beb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2beb34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEB34u;
    {
        const bool branch_taken_0x2beb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB34u;
        // 0x2beb38: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb34) {
            ctx->pc = 0x2BEB58u;
            goto label_2beb58;
        }
    }
    ctx->pc = 0x2BEB3Cu;
    // 0x2beb3c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x2beb3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2beb40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2beb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2beb44: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2beb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2beb48: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2beb48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2beb4c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2beb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2beb50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2beb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2beb54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2beb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2beb58:
    // 0x2beb58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2beb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2beb5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2beb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2beb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2beb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beb68: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB68u;
        // 0x2beb6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEB70u;
    // 0x2beb70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2beb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2beb74: 0x0  nop
    ctx->pc = 0x2beb74u;
    // NOP
    // 0x2beb78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2beb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2beb7c: 0x0  nop
    ctx->pc = 0x2beb7cu;
    // NOP
    ctx->pc = 0x2beb80u;
}

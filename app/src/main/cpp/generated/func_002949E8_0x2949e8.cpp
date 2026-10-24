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

// Function: func_002949E8
// Address: 0x2949e8 - 0x294a68
void func_002949E8_0x2949e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002949E8_0x2949e8");
#endif

    switch (ctx->pc) {
        case 0x294a04u: goto label_294a04;
        case 0x294a1cu: goto label_294a1c;
        default: break;
    }

    ctx->pc = 0x2949e8u;

    // 0x2949e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2949e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2949ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2949ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2949f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2949f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2949f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2949f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2949f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2949f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2949fc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2949FCu;
    SET_GPR_U32(ctx, 31, 0x294A04u);
    ctx->pc = 0x294A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2949FCu;
    // 0x294a00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2949FCu, 0x294A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A04u;
label_294a04:
    // 0x294a04: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x294a04u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x294a08: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x294A08u;
    {
        const bool branch_taken_0x294a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a08) {
            ctx->pc = 0x294A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294A08u;
            // 0x294a0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x294A10u;
            goto label_294a10;
        }
    }
    ctx->pc = 0x294A10u;
label_294a10:
    // 0x294a10: 0x1810  mfhi        $v1
    ctx->pc = 0x294a10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x294a14: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x294A14u;
    SET_GPR_U32(ctx, 31, 0x294A1Cu);
    ctx->pc = 0x294A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A14u;
    // 0x294a18: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x294A14u, 0x294A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A1Cu;
label_294a1c:
    // 0x294a1c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x294a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x294a20: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x294A20u;
    {
        const bool branch_taken_0x294a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a20) {
            ctx->pc = 0x294A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294A20u;
            // 0x294a24: 0xa220053f  sb          $zero, 0x53F($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1343), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294A28u;
            goto label_294a28;
        }
    }
    ctx->pc = 0x294A28u;
label_294a28:
    // 0x294a28: 0x8222053f  lb          $v0, 0x53F($s1)
    ctx->pc = 0x294a28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1343)));
    // 0x294a2c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x294a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x294a30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294A30u;
    {
        const bool branch_taken_0x294a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A30u;
        // 0x294a34: 0x9223053f  lbu         $v1, 0x53F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1343)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a30) {
            ctx->pc = 0x294A48u;
            goto label_294a48;
        }
    }
    ctx->pc = 0x294A38u;
    // 0x294a38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x294a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x294a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x294a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x294A40u;
    {
        const bool branch_taken_0x294a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A40u;
        // 0x294a44: 0xa223053f  sb          $v1, 0x53F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1343), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a40) {
            ctx->pc = 0x294A50u;
            goto label_294a50;
        }
    }
    ctx->pc = 0x294A48u;
label_294a48:
    // 0x294a48: 0xa220053f  sb          $zero, 0x53F($s1)
    ctx->pc = 0x294a48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1343), (uint8_t)GPR_U32(ctx, 0));
    // 0x294a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294a50:
    // 0x294a50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x294a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294a54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x294A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A5Cu;
        // 0x294a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A64u;
    // 0x294a64: 0x0  nop
    ctx->pc = 0x294a64u;
    // NOP
    ctx->pc = 0x294a68u;
}

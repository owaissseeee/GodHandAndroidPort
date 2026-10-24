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

// Function: func_00282080
// Address: 0x282080 - 0x282120
void func_00282080_0x282080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282080_0x282080");
#endif

    switch (ctx->pc) {
        case 0x2820e4u: goto label_2820e4;
        case 0x2820f8u: goto label_2820f8;
        default: break;
    }

    ctx->pc = 0x282080u;

    // 0x282080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282084: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282088: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28208c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28208cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282098: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x282098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x28209c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x28209cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2820a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2820A0u;
    {
        const bool branch_taken_0x2820a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2820A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820A0u;
        // 0x2820a4: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820a0) {
            ctx->pc = 0x2820BCu;
            goto label_2820bc;
        }
    }
    ctx->pc = 0x2820A8u;
    // 0x2820a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2820a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2820ac: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2820ACu;
    {
        const bool branch_taken_0x2820ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2820ac) {
            ctx->pc = 0x2820F0u;
            goto label_2820f0;
        }
    }
    ctx->pc = 0x2820B4u;
    // 0x2820b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2820B4u;
    {
        const bool branch_taken_0x2820b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2820B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820B4u;
        // 0x2820b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820b4) {
            ctx->pc = 0x282114u;
            goto label_282114;
        }
    }
    ctx->pc = 0x2820BCu;
label_2820bc:
    // 0x2820bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2820bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2820c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2820c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2820c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2820c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2820c8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2820c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2820cc: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x2820ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2820d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2820d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2820d4: 0x8c460080  lw          $a2, 0x80($v0)
    ctx->pc = 0x2820d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2820d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2820d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2820dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2820DCu;
    SET_GPR_U32(ctx, 31, 0x2820E4u);
    ctx->pc = 0x2820E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820DCu;
    // 0x2820e0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2820DCu, 0x2820E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820E4u;
label_2820e4:
    // 0x2820e4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2820e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2820e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2820e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2820ec: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2820ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2820f0:
    // 0x2820f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2820F0u;
    SET_GPR_U32(ctx, 31, 0x2820F8u);
    ctx->pc = 0x2820F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820F0u;
    // 0x2820f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2820F0u, 0x2820F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820F8u;
label_2820f8:
    // 0x2820f8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2820F8u;
    {
        const bool branch_taken_0x2820f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2820f8) {
            ctx->pc = 0x2820FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2820F8u;
            // 0x2820fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282114u;
            goto label_282114;
        }
    }
    ctx->pc = 0x282100u;
    // 0x282100: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x282100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x282104: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x282104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x282108: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x282108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x28210c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x28210cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x282110: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282114:
    // 0x282114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282118: 0x3e00008  jr          $ra
    ctx->pc = 0x282118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282118u;
        // 0x28211c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282120u;
}

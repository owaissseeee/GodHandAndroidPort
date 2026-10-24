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

// Function: func_0027FB48
// Address: 0x27fb48 - 0x27fbe8
void func_0027FB48_0x27fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027FB48_0x27fb48");
#endif

    switch (ctx->pc) {
        case 0x27fba0u: goto label_27fba0;
        case 0x27fbbcu: goto label_27fbbc;
        default: break;
    }

    ctx->pc = 0x27fb48u;

    // 0x27fb48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27fb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27fb4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27fb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27fb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fb54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27fb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb58: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27fb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27fb5c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FB5Cu;
    {
        const bool branch_taken_0x27fb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB5Cu;
        // 0x27fb60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb5c) {
            ctx->pc = 0x27FB74u;
            goto label_27fb74;
        }
    }
    ctx->pc = 0x27FB64u;
    // 0x27fb64: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27FB64u;
    {
        const bool branch_taken_0x27fb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27fb64) {
            ctx->pc = 0x27FBB4u;
            goto label_27fbb4;
        }
    }
    ctx->pc = 0x27FB6Cu;
    // 0x27fb6c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27FB6Cu;
    {
        const bool branch_taken_0x27fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB6Cu;
        // 0x27fb70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb6c) {
            ctx->pc = 0x27FBD8u;
            goto label_27fbd8;
        }
    }
    ctx->pc = 0x27FB74u;
label_27fb74:
    // 0x27fb74: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fb7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fb80: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27fb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27fb84: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x27fb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x27fb88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fb88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb8c: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x27fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x27fb90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fb90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb94: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27fb98: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FB98u;
    SET_GPR_U32(ctx, 31, 0x27FBA0u);
    ctx->pc = 0x27FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB98u;
    // 0x27fb9c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FB98u, 0x27FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBA0u;
label_27fba0:
    // 0x27fba0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27fba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27fba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fba8: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x27fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x27fbac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27fbb0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27fbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27fbb4:
    // 0x27fbb4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FBB4u;
    SET_GPR_U32(ctx, 31, 0x27FBBCu);
    ctx->pc = 0x27FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBB4u;
    // 0x27fbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FBB4u, 0x27FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBBCu;
label_27fbbc:
    // 0x27fbbc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FBBCu;
    {
        const bool branch_taken_0x27fbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fbbc) {
            ctx->pc = 0x27FBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FBBCu;
            // 0x27fbc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FBD8u;
            goto label_27fbd8;
        }
    }
    ctx->pc = 0x27FBC4u;
    // 0x27fbc4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27fbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fbc8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27fbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fbcc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27fbccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fbd0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27fbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fbd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27fbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27fbd8:
    // 0x27fbd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27fbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x27FBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBDCu;
        // 0x27fbe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FBE4u;
    // 0x27fbe4: 0x0  nop
    ctx->pc = 0x27fbe4u;
    // NOP
    ctx->pc = 0x27fbe8u;
}

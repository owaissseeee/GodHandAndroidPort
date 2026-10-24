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

// Function: func_00281E60
// Address: 0x281e60 - 0x281f38
void func_00281E60_0x281e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281E60_0x281e60");
#endif

    switch (ctx->pc) {
        case 0x281eccu: goto label_281ecc;
        case 0x281ef8u: goto label_281ef8;
        case 0x281f0cu: goto label_281f0c;
        default: break;
    }

    ctx->pc = 0x281e60u;

    // 0x281e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281e64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281e68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x281e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281e6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e78: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x281e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x281e7c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x281e7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x281e80: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x281E80u;
    {
        const bool branch_taken_0x281e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E80u;
        // 0x281e84: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e80) {
            ctx->pc = 0x281E9Cu;
            goto label_281e9c;
        }
    }
    ctx->pc = 0x281E88u;
    // 0x281e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281e8c: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x281E8Cu;
    {
        const bool branch_taken_0x281e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x281e8c) {
            ctx->pc = 0x281F04u;
            goto label_281f04;
        }
    }
    ctx->pc = 0x281E94u;
    // 0x281e94: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x281E94u;
    {
        const bool branch_taken_0x281e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E94u;
        // 0x281e98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e94) {
            ctx->pc = 0x281F28u;
            goto label_281f28;
        }
    }
    ctx->pc = 0x281E9Cu;
label_281e9c:
    // 0x281e9c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x281e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x281ea0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x281EA0u;
    {
        const bool branch_taken_0x281ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EA0u;
        // 0x281ea4: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ea0) {
            ctx->pc = 0x281ED4u;
            goto label_281ed4;
        }
    }
    ctx->pc = 0x281EA8u;
    // 0x281ea8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x281ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x281eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281eb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281eb4: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x281eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x281eb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281eb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ebc: 0x8c46005c  lw          $a2, 0x5C($v0)
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x281ec0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x281ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281ec4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x281EC4u;
    SET_GPR_U32(ctx, 31, 0x281ECCu);
    ctx->pc = 0x281EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281EC4u;
    // 0x281ec8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x281EC4u, 0x281ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281ECCu;
label_281ecc:
    // 0x281ecc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x281ECCu;
    {
        const bool branch_taken_0x281ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281ECCu;
        // 0x281ed0: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ecc) {
            ctx->pc = 0x281EFCu;
            goto label_281efc;
        }
    }
    ctx->pc = 0x281ED4u;
label_281ed4:
    // 0x281ed4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x281ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x281ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281edc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281ee0: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x281ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x281ee4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281ee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ee8: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x281ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x281eec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x281eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281ef0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x281EF0u;
    SET_GPR_U32(ctx, 31, 0x281EF8u);
    ctx->pc = 0x281EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281EF0u;
    // 0x281ef4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x281EF0u, 0x281EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281EF8u;
label_281ef8:
    // 0x281ef8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x281ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_281efc:
    // 0x281efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x281efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281f00: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x281f00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_281f04:
    // 0x281f04: 0xc055f06  jal         func_157C18
    ctx->pc = 0x281F04u;
    SET_GPR_U32(ctx, 31, 0x281F0Cu);
    ctx->pc = 0x281F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F04u;
    // 0x281f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x281F04u, 0x281F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F0Cu;
label_281f0c:
    // 0x281f0c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x281F0Cu;
    {
        const bool branch_taken_0x281f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f0c) {
            ctx->pc = 0x281F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281F0Cu;
            // 0x281f10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281F28u;
            goto label_281f28;
        }
    }
    ctx->pc = 0x281F14u;
    // 0x281f14: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x281f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f18: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x281f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f1c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x281f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f20: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x281f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x281f24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_281f28:
    // 0x281f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x281F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F2Cu;
        // 0x281f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281F34u;
    // 0x281f34: 0x0  nop
    ctx->pc = 0x281f34u;
    // NOP
    ctx->pc = 0x281f38u;
}

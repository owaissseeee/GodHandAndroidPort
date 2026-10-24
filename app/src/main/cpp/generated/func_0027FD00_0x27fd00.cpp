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

// Function: func_0027FD00
// Address: 0x27fd00 - 0x27fdd8
void func_0027FD00_0x27fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027FD00_0x27fd00");
#endif

    switch (ctx->pc) {
        case 0x27fd60u: goto label_27fd60;
        case 0x27fd90u: goto label_27fd90;
        case 0x27fdacu: goto label_27fdac;
        default: break;
    }

    ctx->pc = 0x27fd00u;

    // 0x27fd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27fd04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27fd08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27fd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fd0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27fd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd10: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27fd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27fd14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FD14u;
    {
        const bool branch_taken_0x27fd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD14u;
        // 0x27fd18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd14) {
            ctx->pc = 0x27FD2Cu;
            goto label_27fd2c;
        }
    }
    ctx->pc = 0x27FD1Cu;
    // 0x27fd1c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27FD1Cu;
    {
        const bool branch_taken_0x27fd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27fd1c) {
            ctx->pc = 0x27FDA4u;
            goto label_27fda4;
        }
    }
    ctx->pc = 0x27FD24u;
    // 0x27fd24: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27FD24u;
    {
        const bool branch_taken_0x27fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD24u;
        // 0x27fd28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd24) {
            ctx->pc = 0x27FDC8u;
            goto label_27fdc8;
        }
    }
    ctx->pc = 0x27FD2Cu;
label_27fd2c:
    // 0x27fd2c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x27fd2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27fd30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27FD30u;
    {
        const bool branch_taken_0x27fd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD30u;
        // 0x27fd34: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd30) {
            ctx->pc = 0x27FD68u;
            goto label_27fd68;
        }
    }
    ctx->pc = 0x27FD38u;
    // 0x27fd38: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fd40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fd44: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x27fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x27fd48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fd48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd4c: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x27fd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x27fd50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fd50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd54: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27fd58: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FD58u;
    SET_GPR_U32(ctx, 31, 0x27FD60u);
    ctx->pc = 0x27FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD58u;
    // 0x27fd5c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FD58u, 0x27FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD60u;
label_27fd60:
    // 0x27fd60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27FD60u;
    {
        const bool branch_taken_0x27fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD60u;
        // 0x27fd64: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd60) {
            ctx->pc = 0x27FD94u;
            goto label_27fd94;
        }
    }
    ctx->pc = 0x27FD68u;
label_27fd68:
    // 0x27fd68: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fd70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fd74: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x27fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x27fd78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fd78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd7c: 0x8c460084  lw          $a2, 0x84($v0)
    ctx->pc = 0x27fd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x27fd80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fd80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27fd88: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FD88u;
    SET_GPR_U32(ctx, 31, 0x27FD90u);
    ctx->pc = 0x27FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD88u;
    // 0x27fd8c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FD88u, 0x27FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD90u;
label_27fd90:
    // 0x27fd90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27fd90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27fd94:
    // 0x27fd94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fd98: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x27fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x27fd9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27fda0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27fda0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27fda4:
    // 0x27fda4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FDA4u;
    SET_GPR_U32(ctx, 31, 0x27FDACu);
    ctx->pc = 0x27FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDA4u;
    // 0x27fda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FDA4u, 0x27FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDACu;
label_27fdac:
    // 0x27fdac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FDACu;
    {
        const bool branch_taken_0x27fdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fdac) {
            ctx->pc = 0x27FDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FDACu;
            // 0x27fdb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FDC8u;
            goto label_27fdc8;
        }
    }
    ctx->pc = 0x27FDB4u;
    // 0x27fdb4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27fdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fdb8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27fdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fdbc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27fdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fdc0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27fdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fdc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27fdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27fdc8:
    // 0x27fdc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27fdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x27FDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDCCu;
        // 0x27fdd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FDD4u;
    // 0x27fdd4: 0x0  nop
    ctx->pc = 0x27fdd4u;
    // NOP
    ctx->pc = 0x27fdd8u;
}

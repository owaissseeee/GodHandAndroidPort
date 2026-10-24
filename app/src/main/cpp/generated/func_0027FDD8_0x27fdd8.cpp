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

// Function: func_0027FDD8
// Address: 0x27fdd8 - 0x27feb0
void func_0027FDD8_0x27fdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027FDD8_0x27fdd8");
#endif

    switch (ctx->pc) {
        case 0x27fe38u: goto label_27fe38;
        case 0x27fe68u: goto label_27fe68;
        case 0x27fe84u: goto label_27fe84;
        default: break;
    }

    ctx->pc = 0x27fdd8u;

    // 0x27fdd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27fdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27fddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27fddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27fde0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27fde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fde4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27fde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fde8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27fde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27fdec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FDECu;
    {
        const bool branch_taken_0x27fdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDECu;
        // 0x27fdf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdec) {
            ctx->pc = 0x27FE04u;
            goto label_27fe04;
        }
    }
    ctx->pc = 0x27FDF4u;
    // 0x27fdf4: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27FDF4u;
    {
        const bool branch_taken_0x27fdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27fdf4) {
            ctx->pc = 0x27FE7Cu;
            goto label_27fe7c;
        }
    }
    ctx->pc = 0x27FDFCu;
    // 0x27fdfc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27FDFCu;
    {
        const bool branch_taken_0x27fdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDFCu;
        // 0x27fe00: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdfc) {
            ctx->pc = 0x27FEA0u;
            goto label_27fea0;
        }
    }
    ctx->pc = 0x27FE04u;
label_27fe04:
    // 0x27fe04: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x27fe04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27fe08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27FE08u;
    {
        const bool branch_taken_0x27fe08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE08u;
        // 0x27fe0c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe08) {
            ctx->pc = 0x27FE40u;
            goto label_27fe40;
        }
    }
    ctx->pc = 0x27FE10u;
    // 0x27fe10: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fe14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fe18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fe1c: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x27fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x27fe20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fe20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe24: 0x8c460094  lw          $a2, 0x94($v0)
    ctx->pc = 0x27fe24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x27fe28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fe28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27fe30: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FE30u;
    SET_GPR_U32(ctx, 31, 0x27FE38u);
    ctx->pc = 0x27FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE30u;
    // 0x27fe34: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FE30u, 0x27FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE38u;
label_27fe38:
    // 0x27fe38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27FE38u;
    {
        const bool branch_taken_0x27fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE38u;
        // 0x27fe3c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe38) {
            ctx->pc = 0x27FE6Cu;
            goto label_27fe6c;
        }
    }
    ctx->pc = 0x27FE40u;
label_27fe40:
    // 0x27fe40: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fe44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fe48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fe4c: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x27fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x27fe50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fe50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe54: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x27fe54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27fe58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fe58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe5c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27fe60: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FE60u;
    SET_GPR_U32(ctx, 31, 0x27FE68u);
    ctx->pc = 0x27FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE60u;
    // 0x27fe64: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FE60u, 0x27FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE68u;
label_27fe68:
    // 0x27fe68: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27fe68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27fe6c:
    // 0x27fe6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fe70: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x27fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x27fe74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27fe78: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27fe78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27fe7c:
    // 0x27fe7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FE7Cu;
    SET_GPR_U32(ctx, 31, 0x27FE84u);
    ctx->pc = 0x27FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE7Cu;
    // 0x27fe80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FE7Cu, 0x27FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE84u;
label_27fe84:
    // 0x27fe84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FE84u;
    {
        const bool branch_taken_0x27fe84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fe84) {
            ctx->pc = 0x27FE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FE84u;
            // 0x27fe88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FEA0u;
            goto label_27fea0;
        }
    }
    ctx->pc = 0x27FE8Cu;
    // 0x27fe8c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27fe8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fe90: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27fe90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fe94: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27fe94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fe98: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27fe98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fe9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27fe9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27fea0:
    // 0x27fea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27fea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fea4: 0x3e00008  jr          $ra
    ctx->pc = 0x27FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEA4u;
        // 0x27fea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FEACu;
    // 0x27feac: 0x0  nop
    ctx->pc = 0x27feacu;
    // NOP
    ctx->pc = 0x27feb0u;
}

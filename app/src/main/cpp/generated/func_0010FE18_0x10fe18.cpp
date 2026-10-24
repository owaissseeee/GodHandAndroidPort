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

// Function: func_0010FE18
// Address: 0x10fe18 - 0x10ff80
void func_0010FE18_0x10fe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010FE18_0x10fe18");
#endif

    switch (ctx->pc) {
        case 0x10fe58u: goto label_10fe58;
        case 0x10fe60u: goto label_10fe60;
        case 0x10fe70u: goto label_10fe70;
        case 0x10fe8cu: goto label_10fe8c;
        case 0x10fea8u: goto label_10fea8;
        case 0x10fed8u: goto label_10fed8;
        case 0x10fef4u: goto label_10fef4;
        case 0x10ff20u: goto label_10ff20;
        case 0x10ff2cu: goto label_10ff2c;
        case 0x10ff34u: goto label_10ff34;
        case 0x10ff5cu: goto label_10ff5c;
        case 0x10ff68u: goto label_10ff68;
        default: break;
    }

    ctx->pc = 0x10fe18u;

    // 0x10fe18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10fe1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10fe20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fe24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fe24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe28: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10fe28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fe2c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10fe2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10fe30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FE30u;
    {
        const bool branch_taken_0x10fe30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE30u;
        // 0x10fe34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe30) {
            ctx->pc = 0x10FE48u;
            goto label_10fe48;
        }
    }
    ctx->pc = 0x10FE38u;
    // 0x10fe38: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10FE38u;
    {
        const bool branch_taken_0x10fe38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10fe38) {
            ctx->pc = 0x10FEECu;
            goto label_10feec;
        }
    }
    ctx->pc = 0x10FE40u;
    // 0x10fe40: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x10FE40u;
    {
        const bool branch_taken_0x10fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fe40) {
            ctx->pc = 0x10FF2Cu;
            goto label_10ff2c;
        }
    }
    ctx->pc = 0x10FE48u;
label_10fe48:
    // 0x10fe48: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10fe48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10fe4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe50: 0xc049396  jal         func_124E58
    ctx->pc = 0x10FE50u;
    SET_GPR_U32(ctx, 31, 0x10FE58u);
    ctx->pc = 0x10FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE50u;
    // 0x10fe54: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10FE50u, 0x10FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE58u;
label_10fe58:
    // 0x10fe58: 0xc0499dc  jal         func_126770
    ctx->pc = 0x10FE58u;
    SET_GPR_U32(ctx, 31, 0x10FE60u);
    ctx->pc = 0x10FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE58u;
    // 0x10fe5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x10FE58u, 0x10FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE60u;
label_10fe60:
    // 0x10fe60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe68: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10FE68u;
    SET_GPR_U32(ctx, 31, 0x10FE70u);
    ctx->pc = 0x10FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE68u;
    // 0x10fe6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10FE68u, 0x10FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE70u;
label_10fe70:
    // 0x10fe70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe74: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x10fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10fe78: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x10fe78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10fe7c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10fe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10fe80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10fe80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe84: 0xc042902  jal         func_10A408
    ctx->pc = 0x10FE84u;
    SET_GPR_U32(ctx, 31, 0x10FE8Cu);
    ctx->pc = 0x10FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE84u;
    // 0x10fe88: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10FE84u, 0x10FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE8Cu;
label_10fe8c:
    // 0x10fe8c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x10fe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10fe90: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x10fe90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10fe94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe98: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10fe98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10fe9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10fe9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fea0: 0xc042908  jal         func_10A420
    ctx->pc = 0x10FEA0u;
    SET_GPR_U32(ctx, 31, 0x10FEA8u);
    ctx->pc = 0x10FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEA0u;
    // 0x10fea4: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10FEA0u, 0x10FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEA8u;
label_10fea8:
    // 0x10fea8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10feac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10feacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10feb0: 0xa2001684  sb          $zero, 0x1684($s0)
    ctx->pc = 0x10feb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x10feb4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10feb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10feb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10feb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10febc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10febcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fec0: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x10fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x10fec4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10fec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fec8: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x10fec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10fecc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10feccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10fed0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10FED0u;
    SET_GPR_U32(ctx, 31, 0x10FED8u);
    ctx->pc = 0x10FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FED0u;
    // 0x10fed4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10FED0u, 0x10FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FED8u;
label_10fed8:
    // 0x10fed8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10fed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10fedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fee0: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x10fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x10fee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10fee8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10fee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10feec:
    // 0x10feec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10FEECu;
    SET_GPR_U32(ctx, 31, 0x10FEF4u);
    ctx->pc = 0x10FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEECu;
    // 0x10fef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10FEECu, 0x10FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEF4u;
label_10fef4:
    // 0x10fef4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FEF4u;
    {
        const bool branch_taken_0x10fef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fef4) {
            ctx->pc = 0x10FF0Cu;
            goto label_10ff0c;
        }
    }
    ctx->pc = 0x10FEFCu;
    // 0x10fefc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x10fefcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10ff00: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10ff00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10ff04: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x10ff04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10ff08: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10ff08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_10ff0c:
    // 0x10ff0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ff0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ff10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10ff10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10ff14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff18: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10FF18u;
    SET_GPR_U32(ctx, 31, 0x10FF20u);
    ctx->pc = 0x10FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF18u;
    // 0x10ff1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10FF18u, 0x10FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF20u;
label_10ff20:
    // 0x10ff20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10ff20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10ff24: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10FF24u;
    SET_GPR_U32(ctx, 31, 0x10FF2Cu);
    ctx->pc = 0x10FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF24u;
    // 0x10ff28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10FF24u, 0x10FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF2Cu;
label_10ff2c:
    // 0x10ff2c: 0xc04290e  jal         func_10A438
    ctx->pc = 0x10FF2Cu;
    SET_GPR_U32(ctx, 31, 0x10FF34u);
    ctx->pc = 0x10FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF2Cu;
    // 0x10ff30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10FF2Cu, 0x10FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF34u;
label_10ff34:
    // 0x10ff34: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x10ff34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x10ff38: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10ff38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10ff3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FF3Cu;
    {
        const bool branch_taken_0x10ff3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF3Cu;
        // 0x10ff40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff3c) {
            ctx->pc = 0x10FF60u;
            goto label_10ff60;
        }
    }
    ctx->pc = 0x10FF44u;
    // 0x10ff44: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x10ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x10ff48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FF48u;
    {
        const bool branch_taken_0x10ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ff48) {
            ctx->pc = 0x10FF60u;
            goto label_10ff60;
        }
    }
    ctx->pc = 0x10FF50u;
    // 0x10ff50: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x10ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
    // 0x10ff54: 0xc04a7ac  jal         func_129EB0
    ctx->pc = 0x10FF54u;
    SET_GPR_U32(ctx, 31, 0x10FF5Cu);
    ctx->pc = 0x10FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF54u;
    // 0x10ff58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129EB0u, 0x10FF54u, 0x10FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF5Cu;
label_10ff5c:
    // 0x10ff5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ff60:
    // 0x10ff60: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10FF60u;
    SET_GPR_U32(ctx, 31, 0x10FF68u);
    ctx->pc = 0x10FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF60u;
    // 0x10ff64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10FF60u, 0x10FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF68u;
label_10ff68:
    // 0x10ff68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10ff68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ff6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ff6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ff70: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10ff74: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF74u;
        // 0x10ff78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FF7Cu;
    // 0x10ff7c: 0x0  nop
    ctx->pc = 0x10ff7cu;
    // NOP
    ctx->pc = 0x10ff80u;
}

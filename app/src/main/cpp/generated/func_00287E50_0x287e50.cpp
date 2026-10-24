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

// Function: func_00287E50
// Address: 0x287e50 - 0x2880c8
void func_00287E50_0x287e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00287E50_0x287e50");
#endif

    switch (ctx->pc) {
        case 0x287e94u: goto label_287e94;
        case 0x287f0cu: goto label_287f0c;
        case 0x287f20u: goto label_287f20;
        case 0x287f54u: goto label_287f54;
        case 0x287f74u: goto label_287f74;
        case 0x288024u: goto label_288024;
        case 0x28802cu: goto label_28802c;
        case 0x28808cu: goto label_28808c;
        case 0x288094u: goto label_288094;
        default: break;
    }

    ctx->pc = 0x287e50u;

    // 0x287e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x287e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x287e54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x287e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x287e58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x287e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x287e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x287e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e68: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x287e68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x287e6c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x287e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x287e70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x287e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x287e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287e78: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x287e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x287e7c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x287e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x287e80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e84: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x287e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x287e88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x287e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x287e8c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x287E8Cu;
    SET_GPR_U32(ctx, 31, 0x287E94u);
    ctx->pc = 0x287E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E8Cu;
    // 0x287e90: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x287E8Cu, 0x287E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E94u;
label_287e94:
    // 0x287e94: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x287e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x287e98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x287e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x287e9c: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x287e9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x287ea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x287ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x287ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x287ea8: 0x10a4001b  beq         $a1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x287EA8u;
    {
        const bool branch_taken_0x287ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x287EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EA8u;
        // 0x287eac: 0xae020258  sw          $v0, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ea8) {
            ctx->pc = 0x287F18u;
            goto label_287f18;
        }
    }
    ctx->pc = 0x287EB0u;
    // 0x287eb0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x287eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x287eb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287EB4u;
    {
        const bool branch_taken_0x287eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EB4u;
        // 0x287eb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287eb4) {
            ctx->pc = 0x287ECCu;
            goto label_287ecc;
        }
    }
    ctx->pc = 0x287EBCu;
    // 0x287ebc: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x287EBCu;
    {
        const bool branch_taken_0x287ebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287ebc) {
            ctx->pc = 0x287EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287EBCu;
            // 0x287ec0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287EE4u;
            goto label_287ee4;
        }
    }
    ctx->pc = 0x287EC4u;
    // 0x287ec4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x287EC4u;
    {
        const bool branch_taken_0x287ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EC4u;
        // 0x287ec8: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ec4) {
            ctx->pc = 0x287F80u;
            goto label_287f80;
        }
    }
    ctx->pc = 0x287ECCu;
label_287ecc:
    // 0x287ecc: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x287ECCu;
    {
        const bool branch_taken_0x287ecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x287ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287ECCu;
        // 0x287ed0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ecc) {
            ctx->pc = 0x287F28u;
            goto label_287f28;
        }
    }
    ctx->pc = 0x287ED4u;
    // 0x287ed4: 0x10a20025  beq         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x287ED4u;
    {
        const bool branch_taken_0x287ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x287ed4) {
            ctx->pc = 0x287F6Cu;
            goto label_287f6c;
        }
    }
    ctx->pc = 0x287EDCu;
    // 0x287edc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x287EDCu;
    {
        const bool branch_taken_0x287edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EDCu;
        // 0x287ee0: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287edc) {
            ctx->pc = 0x287F80u;
            goto label_287f80;
        }
    }
    ctx->pc = 0x287EE4u;
label_287ee4:
    // 0x287ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ee8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287eec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x287eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287ef0: 0x8c450168  lw          $a1, 0x168($v0)
    ctx->pc = 0x287ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x287ef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ef8: 0x8c46016c  lw          $a2, 0x16C($v0)
    ctx->pc = 0x287ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x287efc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287efcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f00: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287f04: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287F04u;
    SET_GPR_U32(ctx, 31, 0x287F0Cu);
    ctx->pc = 0x287F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F04u;
    // 0x287f08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287F04u, 0x287F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F0Cu;
label_287f0c:
    // 0x287f0c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x287f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x287f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287f14: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x287f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_287f18:
    // 0x287f18: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287F18u;
    SET_GPR_U32(ctx, 31, 0x287F20u);
    ctx->pc = 0x287F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F18u;
    // 0x287f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287F18u, 0x287F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F20u;
label_287f20:
    // 0x287f20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x287F20u;
    {
        const bool branch_taken_0x287f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F20u;
        // 0x287f24: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f20) {
            ctx->pc = 0x287F80u;
            goto label_287f80;
        }
    }
    ctx->pc = 0x287F28u;
label_287f28:
    // 0x287f28: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x287f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x287f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287f34: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x287f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287f38: 0x8c450170  lw          $a1, 0x170($v0)
    ctx->pc = 0x287f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x287f3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f40: 0x8c460174  lw          $a2, 0x174($v0)
    ctx->pc = 0x287f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x287f44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287f44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f48: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287f4c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287F4Cu;
    SET_GPR_U32(ctx, 31, 0x287F54u);
    ctx->pc = 0x287F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F4Cu;
    // 0x287f50: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287F4Cu, 0x287F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F54u;
label_287f54:
    // 0x287f54: 0x9602054a  lhu         $v0, 0x54A($s0)
    ctx->pc = 0x287f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x287f58: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x287f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x287f5c: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x287f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x287f60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287f64: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x287f64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x287f68: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x287f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_287f6c:
    // 0x287f6c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287F6Cu;
    SET_GPR_U32(ctx, 31, 0x287F74u);
    ctx->pc = 0x287F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F6Cu;
    // 0x287f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287F6Cu, 0x287F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F74u;
label_287f74:
    // 0x287f74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287F74u;
    {
        const bool branch_taken_0x287f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287f74) {
            ctx->pc = 0x287F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287F74u;
            // 0x287f78: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287F7Cu;
            goto label_287f7c;
        }
    }
    ctx->pc = 0x287F7Cu;
label_287f7c:
    // 0x287f7c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x287f7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_287f80:
    // 0x287f80: 0x5c400017  bgtzl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x287F80u;
    {
        const bool branch_taken_0x287f80 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x287f80) {
            ctx->pc = 0x287F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287F80u;
            // 0x287f84: 0xc6000600  lwc1        $f0, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x287FE0u;
            goto label_287fe0;
        }
    }
    ctx->pc = 0x287F88u;
    // 0x287f88: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x287f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287f8c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x287f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x287f90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x287f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x287f94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287f98: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x287f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x287f9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x287f9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287fa0: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x287fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
    // 0x287fa4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x287fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287fa8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x287fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287fac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x287fb0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x287fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x287fb4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x287fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x287fb8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x287fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287fbc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x287fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287fc0: 0x0  nop
    ctx->pc = 0x287fc0u;
    // NOP
    // 0x287fc4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x287FC4u;
    {
        const bool branch_taken_0x287fc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FC4u;
        // 0x287fc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fc4) {
            ctx->pc = 0x287FDCu;
            goto label_287fdc;
        }
    }
    ctx->pc = 0x287FCCu;
    // 0x287fcc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x287fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x287fd0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x287fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x287fd4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x287fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x287fd8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x287fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_287fdc:
    // 0x287fdc: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x287fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287fe0:
    // 0x287fe0: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x287fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287fe4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x287fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x287fe8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287fe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x287fec: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x287fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287ff0: 0x0  nop
    ctx->pc = 0x287ff0u;
    // NOP
    // 0x287ff4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x287FF4u;
    {
        const bool branch_taken_0x287ff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FF4u;
        // 0x287ff8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ff4) {
            ctx->pc = 0x288048u;
            goto label_288048;
        }
    }
    ctx->pc = 0x287FFCu;
    // 0x287ffc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x287ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x288000: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x288000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x288004: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x288004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x288008: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x288008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x28800c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28800cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288014: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x288014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288018: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x288018u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28801c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28801Cu;
    SET_GPR_U32(ctx, 31, 0x288024u);
    ctx->pc = 0x288020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28801Cu;
    // 0x288020: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28801Cu, 0x288024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288024u;
label_288024:
    // 0x288024: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x288024u;
    SET_GPR_U32(ctx, 31, 0x28802Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x288024u, 0x28802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28802Cu;
label_28802c:
    // 0x28802c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x28802cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x288030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288034: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x288034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x288038: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x288038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28803c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28803cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288040: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x288040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x288044: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x288044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_288048:
    // 0x288048: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x288048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28804c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x28804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288050: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x288050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x288054: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x288054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288058: 0x0  nop
    ctx->pc = 0x288058u;
    // NOP
    // 0x28805c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x28805Cu;
    {
        const bool branch_taken_0x28805c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x288060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28805Cu;
        // 0x288060: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28805c) {
            ctx->pc = 0x2880B0u;
            goto label_2880b0;
        }
    }
    ctx->pc = 0x288064u;
    // 0x288064: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x288064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x288068: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x288068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28806c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x28806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x288070: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x288070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x288074: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x288074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288078: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28807c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28807cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288080: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x288080u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288084: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x288084u;
    SET_GPR_U32(ctx, 31, 0x28808Cu);
    ctx->pc = 0x288088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288084u;
    // 0x288088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x288084u, 0x28808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28808Cu;
label_28808c:
    // 0x28808c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x28808Cu;
    SET_GPR_U32(ctx, 31, 0x288094u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x28808Cu, 0x288094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288094u;
label_288094:
    // 0x288094: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x288094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x288098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28809c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x28809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2880a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2880a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2880a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2880a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2880a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2880a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2880ac: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x2880acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_2880b0:
    // 0x2880b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2880b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2880b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2880b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2880b8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2880b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2880bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2880BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2880C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880BCu;
        // 0x2880c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2880BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2880C4u;
    // 0x2880c4: 0x0  nop
    ctx->pc = 0x2880c4u;
    // NOP
    ctx->pc = 0x2880c8u;
}

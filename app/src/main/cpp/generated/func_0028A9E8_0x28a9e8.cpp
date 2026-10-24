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

// Function: func_0028A9E8
// Address: 0x28a9e8 - 0x28ab48
void func_0028A9E8_0x28a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028A9E8_0x28a9e8");
#endif

    switch (ctx->pc) {
        case 0x28aa10u: goto label_28aa10;
        case 0x28aa40u: goto label_28aa40;
        case 0x28aa4cu: goto label_28aa4c;
        case 0x28aa8cu: goto label_28aa8c;
        case 0x28aab8u: goto label_28aab8;
        case 0x28aae0u: goto label_28aae0;
        case 0x28aaf4u: goto label_28aaf4;
        case 0x28ab28u: goto label_28ab28;
        case 0x28ab34u: goto label_28ab34;
        default: break;
    }

    ctx->pc = 0x28a9e8u;

    // 0x28a9e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28a9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a9f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a9fc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x28a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x28aa00: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x28aa00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28aa04: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x28aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x28aa08: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x28AA08u;
    SET_GPR_U32(ctx, 31, 0x28AA10u);
    ctx->pc = 0x28AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA08u;
    // 0x28aa0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x28AA08u, 0x28AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA10u;
label_28aa10:
    // 0x28aa10: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28aa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28aa14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28aa14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aa18: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28aa18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28aa1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AA1Cu;
    {
        const bool branch_taken_0x28aa1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA1Cu;
        // 0x28aa20: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa1c) {
            ctx->pc = 0x28AA38u;
            goto label_28aa38;
        }
    }
    ctx->pc = 0x28AA24u;
    // 0x28aa24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28aa28: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28AA28u;
    {
        const bool branch_taken_0x28aa28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28aa28) {
            ctx->pc = 0x28AAECu;
            goto label_28aaec;
        }
    }
    ctx->pc = 0x28AA30u;
    // 0x28aa30: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x28AA30u;
    {
        const bool branch_taken_0x28aa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA30u;
        // 0x28aa34: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa30) {
            ctx->pc = 0x28AB38u;
            goto label_28ab38;
        }
    }
    ctx->pc = 0x28AA38u;
label_28aa38:
    // 0x28aa38: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x28AA38u;
    SET_GPR_U32(ctx, 31, 0x28AA40u);
    ctx->pc = 0x28AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA38u;
    // 0x28aa3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x28AA38u, 0x28AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA40u;
label_28aa40:
    // 0x28aa40: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28aa44: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x28AA44u;
    SET_GPR_U32(ctx, 31, 0x28AA4Cu);
    ctx->pc = 0x28AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA44u;
    // 0x28aa48: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x28AA44u, 0x28AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA4Cu;
label_28aa4c:
    // 0x28aa4c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28aa50: 0x240202a7  addiu       $v0, $zero, 0x2A7
    ctx->pc = 0x28aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x28aa54: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28AA54u;
    {
        const bool branch_taken_0x28aa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA54u;
        // 0x28aa58: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa54) {
            ctx->pc = 0x28AA8Cu;
            goto label_28aa8c;
        }
    }
    ctx->pc = 0x28AA5Cu;
    // 0x28aa5c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28AA5Cu;
    {
        const bool branch_taken_0x28aa5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA5Cu;
        // 0x28aa60: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa5c) {
            ctx->pc = 0x28AA8Cu;
            goto label_28aa8c;
        }
    }
    ctx->pc = 0x28AA64u;
    // 0x28aa64: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28aa68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28aa6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28aa70: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x28aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x28aa74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28aa74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa78: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x28aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x28aa7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28aa7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa80: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28aa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28aa84: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28AA84u;
    SET_GPR_U32(ctx, 31, 0x28AA8Cu);
    ctx->pc = 0x28AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA84u;
    // 0x28aa88: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28AA84u, 0x28AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA8Cu;
label_28aa8c:
    // 0x28aa8c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28aa90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28aa94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28aa98: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x28aa98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28aa9c: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x28aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x28aaa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28aaa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aaa4: 0x8c46009c  lw          $a2, 0x9C($v0)
    ctx->pc = 0x28aaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x28aaa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28aaa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aaac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28aab0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28AAB0u;
    SET_GPR_U32(ctx, 31, 0x28AAB8u);
    ctx->pc = 0x28AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAB0u;
    // 0x28aab4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28AAB0u, 0x28AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAB8u;
label_28aab8:
    // 0x28aab8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x28aabc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28aac0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x28aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x28aac4: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x28aac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x28aac8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28aac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aacc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28aaccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aad0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28aad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aad4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28aad4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aad8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28AAD8u;
    SET_GPR_U32(ctx, 31, 0x28AAE0u);
    ctx->pc = 0x28AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAD8u;
    // 0x28aadc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28AAD8u, 0x28AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAE0u;
label_28aae0:
    // 0x28aae0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28aae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28aae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28aae8: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x28aae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_28aaec:
    // 0x28aaec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28AAECu;
    SET_GPR_U32(ctx, 31, 0x28AAF4u);
    ctx->pc = 0x28AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAECu;
    // 0x28aaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28AAECu, 0x28AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAF4u;
label_28aaf4:
    // 0x28aaf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28AAF4u;
    {
        const bool branch_taken_0x28aaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAF4u;
        // 0x28aaf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aaf4) {
            ctx->pc = 0x28AB14u;
            goto label_28ab14;
        }
    }
    ctx->pc = 0x28AAFCu;
    // 0x28aafc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ab00: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x28ab00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ab04: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x28ab04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ab08: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x28ab08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ab0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28AB0Cu;
    {
        const bool branch_taken_0x28ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB0Cu;
        // 0x28ab10: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab0c) {
            ctx->pc = 0x28AB34u;
            goto label_28ab34;
        }
    }
    ctx->pc = 0x28AB14u;
label_28ab14:
    // 0x28ab14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28ab18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28ab18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28ab1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab20: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x28AB20u;
    SET_GPR_U32(ctx, 31, 0x28AB28u);
    ctx->pc = 0x28AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB20u;
    // 0x28ab24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x28AB20u, 0x28AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB28u;
label_28ab28:
    // 0x28ab28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ab28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab2c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x28AB2Cu;
    SET_GPR_U32(ctx, 31, 0x28AB34u);
    ctx->pc = 0x28AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB2Cu;
    // 0x28ab30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x28AB2Cu, 0x28AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB34u;
label_28ab34:
    // 0x28ab34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28ab34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28ab38:
    // 0x28ab38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ab38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ab3c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x28ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28ab40: 0x3e00008  jr          $ra
    ctx->pc = 0x28AB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB40u;
        // 0x28ab44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AB48u;
}

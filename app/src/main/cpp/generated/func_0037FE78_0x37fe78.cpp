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

// Function: func_0037FE78
// Address: 0x37fe78 - 0x37ff98
void func_0037FE78_0x37fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037FE78_0x37fe78");
#endif

    switch (ctx->pc) {
        case 0x37feb4u: goto label_37feb4;
        case 0x37fec0u: goto label_37fec0;
        case 0x37fed4u: goto label_37fed4;
        case 0x37fee0u: goto label_37fee0;
        case 0x37feecu: goto label_37feec;
        case 0x37fef8u: goto label_37fef8;
        case 0x37ff04u: goto label_37ff04;
        case 0x37ff18u: goto label_37ff18;
        case 0x37ff2cu: goto label_37ff2c;
        case 0x37ff40u: goto label_37ff40;
        case 0x37ff4cu: goto label_37ff4c;
        case 0x37ff58u: goto label_37ff58;
        case 0x37ff64u: goto label_37ff64;
        case 0x37ff78u: goto label_37ff78;
        default: break;
    }

    ctx->pc = 0x37fe78u;

    // 0x37fe78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37fe7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37fe80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37fe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37fe84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37fe84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fe88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37fe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37fe8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37fe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37fe90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fe94: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x37fe94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x37fe98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37fe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37fe9c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x37FE9Cu;
    {
        const bool branch_taken_0x37fe9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE9Cu;
        // 0x37fea0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fe9c) {
            ctx->pc = 0x37FF20u;
            goto label_37ff20;
        }
    }
    ctx->pc = 0x37FEA4u;
    // 0x37fea4: 0x263000cc  addiu       $s0, $s1, 0xCC
    ctx->pc = 0x37fea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
    // 0x37fea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37fea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37feac: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x37FEACu;
    SET_GPR_U32(ctx, 31, 0x37FEB4u);
    ctx->pc = 0x37FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FEACu;
    // 0x37feb0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x37FEACu, 0x37FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FEB4u;
label_37feb4:
    // 0x37feb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37feb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37feb8: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x37FEB8u;
    SET_GPR_U32(ctx, 31, 0x37FEC0u);
    ctx->pc = 0x37FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FEB8u;
    // 0x37febc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x37FEB8u, 0x37FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FEC0u;
label_37fec0:
    // 0x37fec0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37fec4: 0x5443002d  bnel        $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x37FEC4u;
    {
        const bool branch_taken_0x37fec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37fec4) {
            ctx->pc = 0x37FEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FEC4u;
            // 0x37fec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FF7Cu;
            goto label_37ff7c;
        }
    }
    ctx->pc = 0x37FECCu;
    // 0x37fecc: 0xc0cb846  jal         func_32E118
    ctx->pc = 0x37FECCu;
    SET_GPR_U32(ctx, 31, 0x37FED4u);
    ctx->pc = 0x37FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FECCu;
    // 0x37fed0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E118u, 0x37FECCu, 0x37FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FED4u;
label_37fed4:
    // 0x37fed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37fed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fed8: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x37FED8u;
    SET_GPR_U32(ctx, 31, 0x37FEE0u);
    ctx->pc = 0x37FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FED8u;
    // 0x37fedc: 0xae2200cc  sw          $v0, 0xCC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x37FED8u, 0x37FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FEE0u;
label_37fee0:
    // 0x37fee0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x37fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x37fee4: 0xc0cb87c  jal         func_32E1F0
    ctx->pc = 0x37FEE4u;
    SET_GPR_U32(ctx, 31, 0x37FEECu);
    ctx->pc = 0x37FEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FEE4u;
    // 0x37fee8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E1F0u, 0x37FEE4u, 0x37FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FEECu;
label_37feec:
    // 0x37feec: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x37feecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x37fef0: 0xc0cb8a0  jal         func_32E280
    ctx->pc = 0x37FEF0u;
    SET_GPR_U32(ctx, 31, 0x37FEF8u);
    ctx->pc = 0x37FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FEF0u;
    // 0x37fef4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E280u, 0x37FEF0u, 0x37FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FEF8u;
label_37fef8:
    // 0x37fef8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x37fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x37fefc: 0xc0cb8c4  jal         func_32E310
    ctx->pc = 0x37FEFCu;
    SET_GPR_U32(ctx, 31, 0x37FF04u);
    ctx->pc = 0x37FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FEFCu;
    // 0x37ff00: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E310u, 0x37FEFCu, 0x37FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF04u;
label_37ff04:
    // 0x37ff04: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x37ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x37ff08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37ff08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37ff0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff10: 0xc0e0758  jal         func_381D60
    ctx->pc = 0x37FF10u;
    SET_GPR_U32(ctx, 31, 0x37FF18u);
    ctx->pc = 0x37FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF10u;
    // 0x37ff14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D60u, 0x37FF10u, 0x37FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF18u;
label_37ff18:
    // 0x37ff18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x37FF18u;
    {
        const bool branch_taken_0x37ff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF18u;
        // 0x37ff1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ff18) {
            ctx->pc = 0x37FF7Cu;
            goto label_37ff7c;
        }
    }
    ctx->pc = 0x37FF20u;
label_37ff20:
    // 0x37ff20: 0x2630006c  addiu       $s0, $s1, 0x6C
    ctx->pc = 0x37ff20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x37ff24: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x37FF24u;
    SET_GPR_U32(ctx, 31, 0x37FF2Cu);
    ctx->pc = 0x37FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF24u;
    // 0x37ff28: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x37FF24u, 0x37FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF2Cu;
label_37ff2c:
    // 0x37ff2c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x37ff2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37ff30: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x37FF30u;
    {
        const bool branch_taken_0x37ff30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ff30) {
            ctx->pc = 0x37FF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FF30u;
            // 0x37ff34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FF7Cu;
            goto label_37ff7c;
        }
    }
    ctx->pc = 0x37FF38u;
    // 0x37ff38: 0xc0ca92a  jal         func_32A4A8
    ctx->pc = 0x37FF38u;
    SET_GPR_U32(ctx, 31, 0x37FF40u);
    ctx->pc = 0x37FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF38u;
    // 0x37ff3c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4A8u, 0x37FF38u, 0x37FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF40u;
label_37ff40:
    // 0x37ff40: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x37ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x37ff44: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x37FF44u;
    SET_GPR_U32(ctx, 31, 0x37FF4Cu);
    ctx->pc = 0x37FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF44u;
    // 0x37ff48: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x37FF44u, 0x37FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF4Cu;
label_37ff4c:
    // 0x37ff4c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x37ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37ff50: 0xc0ca96e  jal         func_32A5B8
    ctx->pc = 0x37FF50u;
    SET_GPR_U32(ctx, 31, 0x37FF58u);
    ctx->pc = 0x37FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF50u;
    // 0x37ff54: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A5B8u, 0x37FF50u, 0x37FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF58u;
label_37ff58:
    // 0x37ff58: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x37ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37ff5c: 0xc0ca992  jal         func_32A648
    ctx->pc = 0x37FF5Cu;
    SET_GPR_U32(ctx, 31, 0x37FF64u);
    ctx->pc = 0x37FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF5Cu;
    // 0x37ff60: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A648u, 0x37FF5Cu, 0x37FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF64u;
label_37ff64:
    // 0x37ff64: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x37ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x37ff68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37ff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37ff6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff70: 0xc0e03ac  jal         func_380EB0
    ctx->pc = 0x37FF70u;
    SET_GPR_U32(ctx, 31, 0x37FF78u);
    ctx->pc = 0x37FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF70u;
    // 0x37ff74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380EB0u, 0x37FF70u, 0x37FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF78u;
label_37ff78:
    // 0x37ff78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37ff7c:
    // 0x37ff7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37ff7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37ff80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37ff80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ff84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37ff84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ff88: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37ff88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ff8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ff8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ff90: 0x3e00008  jr          $ra
    ctx->pc = 0x37FF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF90u;
        // 0x37ff94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FF98u;
}

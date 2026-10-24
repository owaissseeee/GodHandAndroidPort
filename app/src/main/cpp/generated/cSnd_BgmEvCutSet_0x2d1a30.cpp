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

// Function: cSnd_BgmEvCutSet
// Address: 0x2d1a30 - 0x2d1b70
void cSnd_BgmEvCutSet_0x2d1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvCutSet_0x2d1a30");
#endif

    switch (ctx->pc) {
        case 0x2d1a60u: goto label_2d1a60;
        case 0x2d1a68u: goto label_2d1a68;
        case 0x2d1a78u: goto label_2d1a78;
        case 0x2d1a84u: goto label_2d1a84;
        case 0x2d1aa0u: goto label_2d1aa0;
        case 0x2d1aa8u: goto label_2d1aa8;
        case 0x2d1ab4u: goto label_2d1ab4;
        case 0x2d1aecu: goto label_2d1aec;
        case 0x2d1b14u: goto label_2d1b14;
        case 0x2d1b34u: goto label_2d1b34;
        default: break;
    }

    ctx->pc = 0x2d1a30u;

    // 0x2d1a30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d1a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d1a34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d1a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d1a38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d1a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d1a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d1a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a44: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d1a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d1a48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d1a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d1a4c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d1a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d1a50: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2d1a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2d1a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1a58: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D1A58u;
    SET_GPR_U32(ctx, 31, 0x2D1A60u);
    ctx->pc = 0x2D1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A58u;
    // 0x2d1a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D1A58u, 0x2D1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A60u;
label_2d1a60:
    // 0x2d1a60: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2D1A60u;
    SET_GPR_U32(ctx, 31, 0x2D1A68u);
    ctx->pc = 0x2D1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A60u;
    // 0x2d1a64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2D1A60u, 0x2D1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A68u;
label_2d1a68:
    // 0x2d1a68: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D1A68u;
    {
        const bool branch_taken_0x2d1a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A68u;
        // 0x2d1a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a68) {
            ctx->pc = 0x2D1B48u;
            goto label_2d1b48;
        }
    }
    ctx->pc = 0x2D1A70u;
    // 0x2d1a70: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D1A70u;
    SET_GPR_U32(ctx, 31, 0x2D1A78u);
    ctx->pc = 0x2D1A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A70u;
    // 0x2d1a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D1A70u, 0x2D1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A78u;
label_2d1a78:
    // 0x2d1a78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d1a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a7c: 0xc0b413e  jal         func_2D04F8
    ctx->pc = 0x2D1A7Cu;
    SET_GPR_U32(ctx, 31, 0x2D1A84u);
    ctx->pc = 0x2D1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A7Cu;
    // 0x2d1a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D04F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04F8u, 0x2D1A7Cu, 0x2D1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A84u;
label_2d1a84:
    // 0x2d1a84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d1a84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d1a8c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D1A8Cu;
    {
        const bool branch_taken_0x2d1a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A8Cu;
        // 0x2d1a90: 0x24150080  addiu       $s5, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a8c) {
            ctx->pc = 0x2D1B48u;
            goto label_2d1b48;
        }
    }
    ctx->pc = 0x2D1A94u;
    // 0x2d1a94: 0x26540001  addiu       $s4, $s2, 0x1
    ctx->pc = 0x2d1a94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d1a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a9c: 0x0  nop
    ctx->pc = 0x2d1a9cu;
    // NOP
label_2d1aa0:
    // 0x2d1aa0: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2D1AA0u;
    SET_GPR_U32(ctx, 31, 0x2D1AA8u);
    ctx->pc = 0x2D1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1AA0u;
    // 0x2d1aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2D1AA0u, 0x2D1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1AA8u;
label_2d1aa8:
    // 0x2d1aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1aac: 0xc0b414a  jal         func_2D0528
    ctx->pc = 0x2D1AACu;
    SET_GPR_U32(ctx, 31, 0x2D1AB4u);
    ctx->pc = 0x2D1AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1AACu;
    // 0x2d1ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0528u, 0x2D1AACu, 0x2D1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1AB4u;
label_2d1ab4:
    // 0x2d1ab4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d1ab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ab8: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D1AB8u;
    {
        const bool branch_taken_0x2d1ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ab8) {
            ctx->pc = 0x2D1ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1AB8u;
            // 0x2d1abc: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B38u;
            goto label_2d1b38;
        }
    }
    ctx->pc = 0x2D1AC0u;
    // 0x2d1ac0: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x2d1ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x2d1ac4: 0x5055001c  beql        $v0, $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D1AC4u;
    {
        const bool branch_taken_0x2d1ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d1ac4) {
            ctx->pc = 0x2D1AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1AC4u;
            // 0x2d1ac8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B38u;
            goto label_2d1b38;
        }
    }
    ctx->pc = 0x2D1ACCu;
    // 0x2d1acc: 0x90640011  lbu         $a0, 0x11($v1)
    ctx->pc = 0x2d1accu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x2d1ad0: 0x54920008  bnel        $a0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1AD0u;
    {
        const bool branch_taken_0x2d1ad0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d1ad0) {
            ctx->pc = 0x2D1AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1AD0u;
            // 0x2d1ad4: 0x90620012  lbu         $v0, 0x12($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1AF4u;
            goto label_2d1af4;
        }
    }
    ctx->pc = 0x2D1AD8u;
    // 0x2d1ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d1adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1ae0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d1ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ae4: 0xc0b4740  jal         func_2D1D00
    ctx->pc = 0x2D1AE4u;
    SET_GPR_U32(ctx, 31, 0x2D1AECu);
    ctx->pc = 0x2D1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1AE4u;
    // 0x2d1ae8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D00u, 0x2D1AE4u, 0x2D1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1AECu;
label_2d1aec:
    // 0x2d1aec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1AECu;
    {
        const bool branch_taken_0x2d1aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AECu;
        // 0x2d1af0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1aec) {
            ctx->pc = 0x2D1B38u;
            goto label_2d1b38;
        }
    }
    ctx->pc = 0x2D1AF4u;
label_2d1af4:
    // 0x2d1af4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1AF4u;
    {
        const bool branch_taken_0x2d1af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1af4) {
            ctx->pc = 0x2D1AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1AF4u;
            // 0x2d1af8: 0x90620012  lbu         $v0, 0x12($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B1Cu;
            goto label_2d1b1c;
        }
    }
    ctx->pc = 0x2D1AFCu;
    // 0x2d1afc: 0x5494000e  bnel        $a0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1AFCu;
    {
        const bool branch_taken_0x2d1afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d1afc) {
            ctx->pc = 0x2D1B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1AFCu;
            // 0x2d1b00: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B38u;
            goto label_2d1b38;
        }
    }
    ctx->pc = 0x2D1B04u;
    // 0x2d1b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d1b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1b0c: 0xc0b471e  jal         func_2D1C78
    ctx->pc = 0x2D1B0Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B14u);
    ctx->pc = 0x2D1B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B0Cu;
    // 0x2d1b10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C78u, 0x2D1B0Cu, 0x2D1B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B14u;
label_2d1b14:
    // 0x2d1b14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1B14u;
    {
        const bool branch_taken_0x2d1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B14u;
        // 0x2d1b18: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b14) {
            ctx->pc = 0x2D1B38u;
            goto label_2d1b38;
        }
    }
    ctx->pc = 0x2D1B1Cu;
label_2d1b1c:
    // 0x2d1b1c: 0x54520006  bnel        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1B1Cu;
    {
        const bool branch_taken_0x2d1b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d1b1c) {
            ctx->pc = 0x2D1B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1B1Cu;
            // 0x2d1b20: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B38u;
            goto label_2d1b38;
        }
    }
    ctx->pc = 0x2D1B24u;
    // 0x2d1b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d1b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1b2c: 0xc0b471e  jal         func_2D1C78
    ctx->pc = 0x2D1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B34u);
    ctx->pc = 0x2D1B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B2Cu;
    // 0x2d1b30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C78u, 0x2D1B2Cu, 0x2D1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B34u;
label_2d1b34:
    // 0x2d1b34: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d1b38:
    // 0x2d1b38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d1b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d1b3c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d1b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d1b40: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2D1B40u;
    {
        const bool branch_taken_0x2d1b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B40u;
        // 0x2d1b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b40) {
            ctx->pc = 0x2D1AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1aa0;
        }
    }
    ctx->pc = 0x2D1B48u;
label_2d1b48:
    // 0x2d1b48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d1b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1b4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d1b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1b50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d1b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1b58: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d1b58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1b5c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2d1b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1b64: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B64u;
        // 0x2d1b68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1B6Cu;
    // 0x2d1b6c: 0x0  nop
    ctx->pc = 0x2d1b6cu;
    // NOP
    ctx->pc = 0x2d1b70u;
}

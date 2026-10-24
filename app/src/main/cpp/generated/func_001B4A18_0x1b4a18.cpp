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

// Function: func_001B4A18
// Address: 0x1b4a18 - 0x1b4d08
void func_001B4A18_0x1b4a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B4A18_0x1b4a18");
#endif

    switch (ctx->pc) {
        case 0x1b4aa0u: goto label_1b4aa0;
        case 0x1b4ab4u: goto label_1b4ab4;
        case 0x1b4ac8u: goto label_1b4ac8;
        case 0x1b4ad8u: goto label_1b4ad8;
        case 0x1b4ae4u: goto label_1b4ae4;
        case 0x1b4aecu: goto label_1b4aec;
        case 0x1b4bb0u: goto label_1b4bb0;
        case 0x1b4bb8u: goto label_1b4bb8;
        case 0x1b4bccu: goto label_1b4bcc;
        case 0x1b4c40u: goto label_1b4c40;
        case 0x1b4c50u: goto label_1b4c50;
        case 0x1b4c5cu: goto label_1b4c5c;
        case 0x1b4c6cu: goto label_1b4c6c;
        case 0x1b4c78u: goto label_1b4c78;
        case 0x1b4ca4u: goto label_1b4ca4;
        default: break;
    }

    ctx->pc = 0x1b4a18u;

    // 0x1b4a18: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1b4a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1b4a1c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1b4a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1b4a20: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1b4a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1b4a24: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b4a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4a28: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1b4a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1b4a2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a30: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1b4a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1b4a34: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1b4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1b4a38: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1b4a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1b4a3c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1b4a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1b4a40: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b4a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1b4a44: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1b4a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x1b4a48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b4a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b4a4c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1b4a4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1b4a50: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1b4a50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1b4a54: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1b4a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1b4a58: 0x10700029  beq         $v1, $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B4A58u;
    {
        const bool branch_taken_0x1b4a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A58u;
        // 0x1b4a5c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a58) {
            ctx->pc = 0x1B4B00u;
            goto label_1b4b00;
        }
    }
    ctx->pc = 0x1B4A60u;
    // 0x1b4a60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4A60u;
    {
        const bool branch_taken_0x1b4a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A60u;
        // 0x1b4a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a60) {
            ctx->pc = 0x1B4A78u;
            goto label_1b4a78;
        }
    }
    ctx->pc = 0x1B4A68u;
    // 0x1b4a68: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4A68u;
    {
        const bool branch_taken_0x1b4a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a68) {
            ctx->pc = 0x1B4A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4A68u;
            // 0x1b4a6c: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4A90u;
            goto label_1b4a90;
        }
    }
    ctx->pc = 0x1B4A70u;
    // 0x1b4a70: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1B4A70u;
    {
        const bool branch_taken_0x1b4a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A70u;
        // 0x1b4a74: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a70) {
            ctx->pc = 0x1B4B80u;
            goto label_1b4b80;
        }
    }
    ctx->pc = 0x1B4A78u;
label_1b4a78:
    // 0x1b4a78: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B4A78u;
    {
        const bool branch_taken_0x1b4a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A78u;
        // 0x1b4a7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a78) {
            ctx->pc = 0x1B4B28u;
            goto label_1b4b28;
        }
    }
    ctx->pc = 0x1B4A80u;
    // 0x1b4a80: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B4A80u;
    {
        const bool branch_taken_0x1b4a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A80u;
        // 0x1b4a84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a80) {
            ctx->pc = 0x1B4B6Cu;
            goto label_1b4b6c;
        }
    }
    ctx->pc = 0x1B4A88u;
    // 0x1b4a88: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1B4A88u;
    {
        const bool branch_taken_0x1b4a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A88u;
        // 0x1b4a8c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a88) {
            ctx->pc = 0x1B4B80u;
            goto label_1b4b80;
        }
    }
    ctx->pc = 0x1B4A90u;
label_1b4a90:
    // 0x1b4a90: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4A90u;
    {
        const bool branch_taken_0x1b4a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a90) {
            ctx->pc = 0x1B4A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4A90u;
            // 0x1b4a94: 0x8e240654  lw          $a0, 0x654($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4AA4u;
            goto label_1b4aa4;
        }
    }
    ctx->pc = 0x1B4A98u;
    // 0x1b4a98: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B4A98u;
    SET_GPR_U32(ctx, 31, 0x1B4AA0u);
    ctx->pc = 0x1B4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A98u;
    // 0x1b4a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B4A98u, 0x1B4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AA0u;
label_1b4aa0:
    // 0x1b4aa0: 0x8e240654  lw          $a0, 0x654($s1)
    ctx->pc = 0x1b4aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
label_1b4aa4:
    // 0x1b4aa4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4AA4u;
    {
        const bool branch_taken_0x1b4aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4aa4) {
            ctx->pc = 0x1B4AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4AA4u;
            // 0x1b4aa8: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4AB8u;
            goto label_1b4ab8;
        }
    }
    ctx->pc = 0x1B4AACu;
    // 0x1b4aac: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B4AACu;
    SET_GPR_U32(ctx, 31, 0x1B4AB4u);
    ctx->pc = 0x1B4AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AACu;
    // 0x1b4ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B4AACu, 0x1B4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AB4u;
label_1b4ab4:
    // 0x1b4ab4: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1b4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
label_1b4ab8:
    // 0x1b4ab8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4AB8u;
    {
        const bool branch_taken_0x1b4ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ab8) {
            ctx->pc = 0x1B4ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4AB8u;
            // 0x1b4abc: 0x8e250648  lw          $a1, 0x648($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4ACCu;
            goto label_1b4acc;
        }
    }
    ctx->pc = 0x1B4AC0u;
    // 0x1b4ac0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B4AC0u;
    SET_GPR_U32(ctx, 31, 0x1B4AC8u);
    ctx->pc = 0x1B4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AC0u;
    // 0x1b4ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B4AC0u, 0x1B4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AC8u;
label_1b4ac8:
    // 0x1b4ac8: 0x8e250648  lw          $a1, 0x648($s1)
    ctx->pc = 0x1b4ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1608)));
label_1b4acc:
    // 0x1b4acc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b4accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b4ad0: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1B4AD0u;
    SET_GPR_U32(ctx, 31, 0x1B4AD8u);
    ctx->pc = 0x1B4AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AD0u;
    // 0x1b4ad4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1B4AD0u, 0x1B4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AD8u;
label_1b4ad8:
    // 0x1b4ad8: 0xae200648  sw          $zero, 0x648($s1)
    ctx->pc = 0x1b4ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 0));
    // 0x1b4adc: 0xc06d3d2  jal         func_1B4F48
    ctx->pc = 0x1B4ADCu;
    SET_GPR_U32(ctx, 31, 0x1B4AE4u);
    ctx->pc = 0x1B4AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4ADCu;
    // 0x1b4ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4F48u, 0x1B4ADCu, 0x1B4AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AE4u;
label_1b4ae4:
    // 0x1b4ae4: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x1B4AE4u;
    SET_GPR_U32(ctx, 31, 0x1B4AECu);
    ctx->pc = 0x1B4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AE4u;
    // 0x1b4ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1B4AE4u, 0x1B4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AECu;
label_1b4aec:
    // 0x1b4aec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1b4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b4af0: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x1b4af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b4af4: 0xa6220960  sh          $v0, 0x960($s1)
    ctx->pc = 0x1b4af4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2400), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4af8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b4af8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4afc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b4afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b4b00:
    // 0x1b4b00: 0x96220960  lhu         $v0, 0x960($s1)
    ctx->pc = 0x1b4b00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2400)));
    // 0x1b4b04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4b08: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1b4b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b4b0c: 0x1c60001b  bgtz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B4B0Cu;
    {
        const bool branch_taken_0x1b4b0c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1B4B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B0Cu;
        // 0x1b4b10: 0xa6220960  sh          $v0, 0x960($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2400), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b0c) {
            ctx->pc = 0x1B4B7Cu;
            goto label_1b4b7c;
        }
    }
    ctx->pc = 0x1B4B14u;
    // 0x1b4b14: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4b18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4b1c: 0xa6220960  sh          $v0, 0x960($s1)
    ctx->pc = 0x1b4b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2400), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4b20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B4B20u;
    {
        const bool branch_taken_0x1b4b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B20u;
        // 0x1b4b24: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b20) {
            ctx->pc = 0x1B4B74u;
            goto label_1b4b74;
        }
    }
    ctx->pc = 0x1B4B28u;
label_1b4b28:
    // 0x1b4b28: 0x96220960  lhu         $v0, 0x960($s1)
    ctx->pc = 0x1b4b28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2400)));
    // 0x1b4b2c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1b4b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1b4b30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4b34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4b38: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1b4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b4b3c: 0xa6220960  sh          $v0, 0x960($s1)
    ctx->pc = 0x1b4b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2400), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4b40: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1b4b40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1b4b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b4b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4b48: 0x0  nop
    ctx->pc = 0x1b4b48u;
    // NOP
    // 0x1b4b4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b4b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b4b50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b4b50u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1b4b54: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4B54u;
    {
        const bool branch_taken_0x1b4b54 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1B4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B54u;
        // 0x1b4b58: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b54) {
            ctx->pc = 0x1B4B7Cu;
            goto label_1b4b7c;
        }
    }
    ctx->pc = 0x1B4B5Cu;
    // 0x1b4b5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4b60: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b4b60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4B64u;
    {
        const bool branch_taken_0x1b4b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B64u;
        // 0x1b4b68: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b64) {
            ctx->pc = 0x1B4B78u;
            goto label_1b4b78;
        }
    }
    ctx->pc = 0x1B4B6Cu;
label_1b4b6c:
    // 0x1b4b6c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1b4b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4b70: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x1b4b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
label_1b4b74:
    // 0x1b4b74: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b4b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b4b78:
    // 0x1b4b78: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b4b78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b4b7c:
    // 0x1b4b7c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b4b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1b4b80:
    // 0x1b4b80: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1b4b80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b84: 0x10560052  beq         $v0, $s6, . + 4 + (0x52 << 2)
    ctx->pc = 0x1B4B84u;
    {
        const bool branch_taken_0x1b4b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1B4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B84u;
        // 0x1b4b88: 0x3c1e0058  lui         $fp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b84) {
            ctx->pc = 0x1B4CD0u;
            goto label_1b4cd0;
        }
    }
    ctx->pc = 0x1B4B8Cu;
    // 0x1b4b8c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1b4b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1b4b90: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b4b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b4b94: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1b4b94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4b98: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x1b4b98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1b4b9c: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x1b4b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
    // 0x1b4ba0: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x1b4ba0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1b4ba4: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x1b4ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
    // 0x1b4ba8: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x1b4ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
    // 0x1b4bac: 0x0  nop
    ctx->pc = 0x1b4bacu;
    // NOP
label_1b4bb0:
    // 0x1b4bb0: 0xc05ce40  jal         func_173900
    ctx->pc = 0x1B4BB0u;
    SET_GPR_U32(ctx, 31, 0x1B4BB8u);
    ctx->pc = 0x1B4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4BB0u;
    // 0x1b4bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1B4BB0u, 0x1B4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BB8u;
label_1b4bb8:
    // 0x1b4bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4bbc: 0x5443003a  bnel        $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B4BBCu;
    {
        const bool branch_taken_0x1b4bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b4bbc) {
            ctx->pc = 0x1B4BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4BBCu;
            // 0x1b4bc0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4CA8u;
            goto label_1b4ca8;
        }
    }
    ctx->pc = 0x1B4BC4u;
    // 0x1b4bc4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B4BC4u;
    SET_GPR_U32(ctx, 31, 0x1B4BCCu);
    ctx->pc = 0x1B4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4BC4u;
    // 0x1b4bc8: 0x27c464f0  addiu       $a0, $fp, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B4BC4u, 0x1B4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4BCCu;
label_1b4bcc:
    // 0x1b4bcc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b4bccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b4bd0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1b4bd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b4bd4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4bd8: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b4bd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4bdc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b4bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b4be0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b4be0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b4be4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b4be4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b4be8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b4be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4bec: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1b4becu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1b4bf0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b4bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4bf4: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1b4bf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x1b4bf8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1b4bf8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4bfc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b4bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b4c00: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1b4c00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4c04: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1b4c04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b4c08: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b4c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4c0c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b4c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c10: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b4c10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b4c14: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b4c14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b4c18: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b4c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b4c1c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b4c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4c20: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1b4c20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1b4c24: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b4c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4c28: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b4c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4c2c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1b4c2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c30: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b4c30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b4c34: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b4c34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b4c38: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x1B4C38u;
    SET_GPR_U32(ctx, 31, 0x1B4C40u);
    ctx->pc = 0x1B4C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C38u;
    // 0x1b4c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1B4C38u, 0x1B4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C40u;
label_1b4c40:
    // 0x1b4c40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b4c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c48: 0xc051dca  jal         func_147728
    ctx->pc = 0x1B4C48u;
    SET_GPR_U32(ctx, 31, 0x1B4C50u);
    ctx->pc = 0x1B4C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C48u;
    // 0x1b4c4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1B4C48u, 0x1B4C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C50u;
label_1b4c50:
    // 0x1b4c50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b4c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4c54: 0xc051f10  jal         func_147C40
    ctx->pc = 0x1B4C54u;
    SET_GPR_U32(ctx, 31, 0x1B4C5Cu);
    ctx->pc = 0x1B4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C54u;
    // 0x1b4c58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1B4C54u, 0x1B4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C5Cu;
label_1b4c5c:
    // 0x1b4c5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b4c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4c60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1b4c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c64: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x1B4C64u;
    SET_GPR_U32(ctx, 31, 0x1B4C6Cu);
    ctx->pc = 0x1B4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C64u;
    // 0x1b4c68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1B4C64u, 0x1B4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C6Cu;
label_1b4c6c:
    // 0x1b4c6c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1b4c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b4c70: 0xc051d4a  jal         func_147528
    ctx->pc = 0x1B4C70u;
    SET_GPR_U32(ctx, 31, 0x1B4C78u);
    ctx->pc = 0x1B4C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C70u;
    // 0x1b4c74: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1B4C70u, 0x1B4C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C78u;
label_1b4c78:
    // 0x1b4c78: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1b4c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4c7c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b4c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4c80: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b4c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b4c84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4c88: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1b4c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4c8c: 0x0  nop
    ctx->pc = 0x1b4c8cu;
    // NOP
    // 0x1b4c90: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4C90u;
    {
        const bool branch_taken_0x1b4c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C90u;
        // 0x1b4c94: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c90) {
            ctx->pc = 0x1B4CA4u;
            goto label_1b4ca4;
        }
    }
    ctx->pc = 0x1B4C98u;
    // 0x1b4c98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b4c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c9c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1B4C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B4CA4u);
    ctx->pc = 0x1B4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C9Cu;
    // 0x1b4ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1B4C9Cu, 0x1B4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4CA4u;
label_1b4ca4:
    // 0x1b4ca4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1b4ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1b4ca8:
    // 0x1b4ca8: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1b4ca8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1b4cac: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1b4cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1b4cb0: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x1b4cb4: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1b4cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1b4cb8: 0x2ac20008  slti        $v0, $s6, 0x8
    ctx->pc = 0x1b4cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b4cbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4CBCu;
    {
        const bool branch_taken_0x1b4cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CBCu;
        // 0x1b4cc0: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cbc) {
            ctx->pc = 0x1B4CD0u;
            goto label_1b4cd0;
        }
    }
    ctx->pc = 0x1B4CC4u;
    // 0x1b4cc4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b4cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b4cc8: 0x1456ffb9  bne         $v0, $s6, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1B4CC8u;
    {
        const bool branch_taken_0x1b4cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1b4cc8) {
            ctx->pc = 0x1B4BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4bb0;
        }
    }
    ctx->pc = 0x1B4CD0u;
label_1b4cd0:
    // 0x1b4cd0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1b4cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b4cd4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1b4cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b4cd8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1b4cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b4cdc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1b4cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b4ce0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1b4ce0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b4ce4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1b4ce4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4ce8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1b4ce8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4cec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b4cecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b4cf0: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1b4cf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4cf4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b4cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4cf8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1b4cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b4cfc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1b4cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b4d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D00u;
        // 0x1b4d04: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D08u;
}
